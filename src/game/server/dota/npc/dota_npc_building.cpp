// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_building.cpp:66
class C_CDOTA_BaseNPC_Building_MapInstall {
	C_CDOTA_BaseNPC_Building_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:75
class C_CDOTA_BaseNPC_Tower_MapInstall {
	C_CDOTA_BaseNPC_Tower_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:80
class C_CDOTA_BaseNPC_Filler_MapInstall {
	C_CDOTA_BaseNPC_Filler_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:86
class C_CDOTA_BaseNPC_Healer_MapInstall {
	C_CDOTA_BaseNPC_Healer_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:91
class C_CDOTA_BaseNPC_Barracks_MapInstall {
	C_CDOTA_BaseNPC_Barracks_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:96
class C_CDOTA_BaseNPC_Fort_MapInstall {
	C_CDOTA_BaseNPC_Fort_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:1057
class C_CDOTA_BaseNPC_HoldoutTower_MapInstall {
	C_CDOTA_BaseNPC_HoldoutTower_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:1105
class C_CDOTA_BaseNPC_SDKTower_MapInstall {
	C_CDOTA_BaseNPC_SDKTower_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:1115
class C_CDOTA_BaseNPC_HoldoutTower_LightFast_MapInstall {
	C_CDOTA_BaseNPC_HoldoutTower_LightFast_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:1134
class C_CDOTA_BaseNPC_HoldoutTower_HeavySlow_MapInstall {
	C_CDOTA_BaseNPC_HoldoutTower_HeavySlow_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:1153
class C_CDOTA_BaseNPC_HoldoutTower_ReduceSpeed_MapInstall {
	C_CDOTA_BaseNPC_HoldoutTower_ReduceSpeed_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:1171
class C_CDOTA_BaseNPC_Effigy_Statue_MapInstall {
	C_CDOTA_BaseNPC_Effigy_Statue_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_building.cpp:1358
class C_CDOTA_BaseNPC_Effigy_BattleCup_MapInstall {
	C_CDOTA_BaseNPC_Effigy_BattleCup_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Building::GetDataDescMap  (line 27, @0x00000000028f52e0, libserver.so)
// globals: CDOTA_BaseNPC_Building::m_DataMap
datamap_t *__fastcall CDOTA_BaseNPC_Building::GetDataDescMap(CDOTA_BaseNPC_Building *const this)
{
  return &CDOTA_BaseNPC_Building::m_DataMap;
}


// CDOTA_BaseNPC_Building::AddDatadescMetadataKeys  (line 27, @0x000000000290a820, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_BaseNPC_Building::GetEntityClass(void)
void __fastcall CDOTA_BaseNPC_Building::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_BaseNPC_Building::GetEntityClass);
}


// CDOTA_BaseNPC_Building::GetBaseMap  (line 27, @0x000000000290a840, libserver.so)
// globals: CDOTA_BaseNPC::m_DataMap
datamap_t *__cdecl CDOTA_BaseNPC_Building::GetBaseMap()
{
  return &CDOTA_BaseNPC::m_DataMap;
}


// DataMapInit<CDOTA_BaseNPC_Building>  (line 27, @0x000000000290a850, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CDOTA_BaseNPC_Building"
// globals: `guard variable for'DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder, CDOTA_BaseNPC::m_DataMap, CDOTA_BaseNPC_Building::GetEntityClass(void), CDOTA_BaseNPC_Building::m_DataMap, DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder.m_pszBase = "CDOTA_BaseNPC_Building";
    DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_BaseNPC_Building::m_DataMap.dataNumFields = 16;
  CDOTA_BaseNPC_Building::m_DataMap.baseMap = &CDOTA_BaseNPC::m_DataMap;
  CDOTA_BaseNPC_Building::m_DataMap.dataDesc = &DataMapInit<CDOTA_BaseNPC_Building>(CDOTA_BaseNPC_Building *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_BaseNPC_Building::m_DataMap, CDOTA_BaseNPC_Building::GetEntityClass);
  return &CDOTA_BaseNPC_Building::m_DataMap;
}


// CDOTA_BaseNPC_Building::YouForgotToImplementOrDeclareServerClass  (line 66, @0x00000000028f52f0, libserver.so)
int __fastcall CDOTA_BaseNPC_Building::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Building *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Building::GetServerClass  (line 66, @0x0000000002900590, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Building::GetServerClass(CDOTA_BaseNPC_Building *const this)
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


// CDOTA_BaseNPC_Tower::GetDataDescMap  (line 68, @0x00000000028f5300, libserver.so)
// globals: CDOTA_BaseNPC_Tower::m_DataMap
datamap_t *__fastcall CDOTA_BaseNPC_Tower::GetDataDescMap(CDOTA_BaseNPC_Tower *const this)
{
  return &CDOTA_BaseNPC_Tower::m_DataMap;
}


// CDOTA_BaseNPC_Tower::AddDatadescMetadataKeys  (line 68, @0x000000000290a920, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_BaseNPC_Tower::GetEntityClass(void)
void __fastcall CDOTA_BaseNPC_Tower::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_BaseNPC_Tower::GetEntityClass);
}


// CDOTA_BaseNPC_Tower::GetBaseMap  (line 68, @0x000000000290a940, libserver.so)
// globals: CDOTA_BaseNPC_Building::m_DataMap
datamap_t *__cdecl CDOTA_BaseNPC_Tower::GetBaseMap()
{
  return &CDOTA_BaseNPC_Building::m_DataMap;
}


// DataMapInit<CDOTA_BaseNPC_Tower>  (line 68, @0x000000000290a950, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CDOTA_BaseNPC_Tower"
// globals: `guard variable for'DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder, `guard variable for'DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::dataDesc, CDOTA_BaseNPC_Building::m_DataMap, CDOTA_BaseNPC_Tower::GetEntityClass(void), CDOTA_BaseNPC_Tower::m_DataMap, DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder.m_pszBase = "CDOTA_BaseNPC_Tower";
    DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_BaseNPC_Tower::m_DataMap.baseMap = &CDOTA_BaseNPC_Building::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::dataDesc) != 0 )
  {
    DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::dataDesc[1].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::dataDesc);
  }
  CDOTA_BaseNPC_Tower::m_DataMap.dataNumFields = 1;
  CDOTA_BaseNPC_Tower::m_DataMap.dataDesc = &DataMapInit<CDOTA_BaseNPC_Tower>(CDOTA_BaseNPC_Tower *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_BaseNPC_Tower::m_DataMap, CDOTA_BaseNPC_Tower::GetEntityClass);
  return &CDOTA_BaseNPC_Tower::m_DataMap;
}


// CDOTA_BaseNPC_Tower::YouForgotToImplementOrDeclareServerClass  (line 75, @0x00000000028f5310, libserver.so)
int __fastcall CDOTA_BaseNPC_Tower::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Tower *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Tower::GetServerClass  (line 75, @0x0000000002900550, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Tower::GetServerClass(CDOTA_BaseNPC_Tower *const this)
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


// CDOTA_BaseNPC_Filler::YouForgotToImplementOrDeclareServerClass  (line 80, @0x00000000028f5320, libserver.so)
int __fastcall CDOTA_BaseNPC_Filler::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Filler *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Filler::GetServerClass  (line 80, @0x0000000002900b50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Filler::GetServerClass(CDOTA_BaseNPC_Filler *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC_Healer::YouForgotToImplementOrDeclareServerClass  (line 86, @0x00000000028f5330, libserver.so)
int __fastcall CDOTA_BaseNPC_Healer::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Healer *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Healer::GetServerClass  (line 86, @0x0000000002900610, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Healer::GetServerClass(CDOTA_BaseNPC_Healer *const this)
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


// CDOTA_BaseNPC_Barracks::YouForgotToImplementOrDeclareServerClass  (line 91, @0x00000000028f5340, libserver.so)
int __fastcall CDOTA_BaseNPC_Barracks::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Barracks *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Barracks::GetServerClass  (line 91, @0x0000000002900950, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Barracks::GetServerClass(CDOTA_BaseNPC_Barracks *const this)
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


// CDOTA_BaseNPC_Fort::YouForgotToImplementOrDeclareServerClass  (line 96, @0x00000000028f5350, libserver.so)
int __fastcall CDOTA_BaseNPC_Fort::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Fort *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Fort::GetServerClass  (line 96, @0x0000000002900790, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Fort::GetServerClass(CDOTA_BaseNPC_Fort *const this)
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


// CDOTA_BaseNPC_Building::Spawn  (line 133, @0x0000000002952590, libserver.so)  // inlines: AddObstructionProperty, AssignTo, Base, CStrongHandle, CUtlSymbolLarge, Color, Element, FindKeyHash, Get<int>, GetEntityName, GetValue, GetValue<Color>, GetValue<int>, NetworkStateChanged, Set, SetRawColor, String, ToCStr, _V_strstr, operator!=, operator=, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, operator=<Color>, operator=<QAngle>, operator=<bool>, operator[], strstr, ~CStrongHandle
// calls: CDOTA_BaseNPC::Spawn, CEntityKeyValues::HasValue, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CBaseEntity::GetAbsAngles, GetParticleSystemIndex, V_StringToColor, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::UpgradeAbility, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::AddEffects (20 total)
// callers: CDOTA_BaseNPC_Barracks::Spawn, CDOTA_BaseNPC_HallofFame::Spawn, CDOTA_BaseNPC_Shop::Spawn, CDOTA_BaseNPC_Fort::Spawn, CDOTA_BaseNPC_Tower::Spawn, CDOTA_BaseNPC_Effigy_BattleCup::Spawn, CDOTA_BaseNPC_Effigy_Statue::Spawn, CDOTA_Unit_Fountain::Spawn
// strings: "modifier_invulnerable", "No free conversion of %s variant to Color right now\n", "tower4"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_BaseNPC_Building::Spawn(CDOTA_BaseNPC_Building *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nObstructionProperties; // eax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v6; // eax
  bool v7; // zf
  const QAngle *AbsAngles; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *m_pAsString; // rsi
  const char *v12; // rsi
  int v13; // esi
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  CEntityVariant *v17; // rdx
  int16 m_type; // ax
  int m_int; // ebx
  CEntityIdentity *m_pEntity; // rax
  const char *v21; // rbx
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v26; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rdx
  const CVariantBase<CEntityVariantAllocator> *p_m_value; // rdi
  const char *v30; // rax
  vec_t y; // [rsp+4h] [rbp-7Ch]
  vec_t z; // [rsp+8h] [rbp-78h]
  vec_t x; // [rsp+Ch] [rbp-74h]
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::ResourceHandleTyped_t hResource[2]; // [rsp+10h] [rbp-70h] BYREF
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> src; // [rsp+20h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 2020856412) )
    goto LABEL_2;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_65:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_66;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v26 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v26) == 2020856412 )
      goto LABEL_61;
LABEL_58:
    if ( m_nCount <= ++v26 )
      goto LABEL_65;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v26] != 2020856412 )
    goto LABEL_58;
LABEL_61:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v28 = pKeyValues->m_keyValues.m_pElements;
  else
    v28 = 0;
  p_m_value = &v28[v26].m_value;
LABEL_66:
  LODWORD(src.m_pBinding) = 0;
  CVariantBase<CEntityVariantAllocator>::AssignTo(p_m_value, &src);
  CBaseAnimating::SetSkin(this, src.m_pBinding);
LABEL_2:
  m_nObstructionProperties = this->m_nObstructionProperties;
  m_pObstructionRecord = this->m_pObstructionRecord;
  this->m_iUnitType |= 0x10u;
  v6 = m_nObstructionProperties | 0x408;
  this->m_nObstructionProperties = v6;
  if ( m_pObstructionRecord != 0 )
    m_pObstructionRecord->m_ObjectProperties = v6;
  src.m_pBinding = 0;
  v7 = this->m_nFXIndex.m_Value.m_pBinding == 0;
  this->m_ObstructionRelationshipClass = ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_BUILDING;
  if ( !v7 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4504, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&this->m_nFXIndex.m_Value, &src);
  }
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&src);
  src.m_pBinding = 0;
  if ( this->m_nFXIndexDestruction.m_Value.m_pBinding != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&this->m_nFXIndexDestruction.m_Value, &src);
  }
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&src);
  this->m_iDamageLevel = 0;
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  if ( AbsAngles->x != this->m_angInitialAngles.m_Value.x
    || AbsAngles->y != this->m_angInitialAngles.m_Value.y
    || AbsAngles->z != this->m_angInitialAngles.m_Value.z )
  {
    y = AbsAngles->y;
    z = AbsAngles->z;
    x = AbsAngles->x;
    (*(this->_vptr_IHandleEntity + 22))(this, 4520, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_angInitialAngles.m_Value.x = x;
    this->m_angInitialAngles.m_Value.y = y;
    this->m_angInitialAngles.m_Value.z = z;
  }
  if ( this->m_bHeroStatue.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4544, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHeroStatue.m_Value = 0;
  }
  if ( this->m_bBattleCup.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4545, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bBattleCup.m_Value = 0;
  }
  if ( this->m_iszAmbientEffectName.u.m_Id != 0 )
  {
    m_pAsString = this->m_iszAmbientEffectName.u.m_pAsString;
    if ( *m_pAsString != 0 )
    {
      GetParticleSystemIndex(hResource, m_pAsString);
      src.m_pBinding = 0;
      CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&src, hResource[0]);
      if ( this->m_nFXIndex.m_Value.m_pBinding != src.m_pBinding )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4504, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&this->m_nFXIndex.m_Value, &src);
      }
      CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&src);
    }
  }
  if ( this->m_iszDestructionEffectName.u.m_Id != 0 )
  {
    v12 = this->m_iszDestructionEffectName.u.m_pAsString;
    if ( *v12 != 0 )
    {
      GetParticleSystemIndex(hResource, v12);
      src.m_pBinding = 0;
      CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&src, hResource[0]);
      if ( this->m_nFXIndexDestruction.m_Value.m_pBinding != src.m_pBinding )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&this->m_nFXIndexDestruction.m_Value, &src);
      }
      CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&src);
    }
  }
  v13 = pKeyValues->m_keyHashes.m_nCount;
  if ( v13 <= 0 )
  {
LABEL_37:
    v17 = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_34;
    goto LABEL_38;
  }
  v9 = pKeyValues->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( 2 )
  {
    if ( v9 == 0 )
    {
      if ( *(4 * v14) == 1677246174 )
        break;
      goto LABEL_28;
    }
    v15 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v9 > 9 )
      v15 = pKeyValues->m_keyHashes.m_pElements;
    if ( v15[v14] != 1677246174 )
    {
LABEL_28:
      if ( v13 <= ++v14 )
        goto LABEL_37;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v16 = pKeyValues->m_keyValues.m_pElements;
  else
    v16 = 0;
  v17 = &v16[v14].m_value;
  m_type = v17->m_type;
  if ( m_type == 0 )
    goto LABEL_38;
LABEL_34:
  if ( m_type == 9 )
  {
    m_int = v17->m_int;
  }
  else
  {
    if ( m_type == 30 )
    {
      kv.m_iValue = 0;
      V_StringToColor(&kv, v17->m_uint64, v17, v9, v10);
      m_int = kv.m_iValue;
      goto LABEL_39;
    }
    v30 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to Color right now\n", v30);
LABEL_38:
    m_int = -1;
  }
LABEL_39:
  if ( m_int != *&this->m_ParticleTintColor )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4584, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ParticleTintColor = m_int;
  }
  m_pEntity = this->m_pEntity;
  v21 = m_pEntity->m_name.u.m_pAsString;
  if ( v21 != 0 )
  {
    if ( strstr(m_pEntity->m_name.u.m_pAsString, "fort") != 0 || strstr(v21, "tower4") != 0 )
      goto LABEL_49;
    if ( strstr(v21, "top") != 0 )
    {
      this->m_Lane = DOTA_LANE::DOTA_LANE_TOP;
      goto LABEL_43;
    }
    if ( strstr(v21, "mid") != 0 )
    {
LABEL_49:
      this->m_Lane = DOTA_LANE::DOTA_LANE_MIDDLE;
    }
    else
    {
      if ( strstr(v21, "bot") == 0 )
        goto LABEL_42;
      this->m_Lane = DOTA_LANE::DOTA_LANE_BOTTOM;
    }
  }
  else
  {
LABEL_42:
    this->m_Lane = DOTA_LANE::DOTA_LANE_NONE;
  }
LABEL_43:
  for ( i = 0; i != 24; ++i )
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, i) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
    }
  }
  KeyValues::KeyValues(&kv, "modifier_invulnerable");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_invulnerable", &kv, 0);
  CBaseEntity::AddEffects(this, 16);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_BaseNPC_Building::OverrideDestructionEffect  (line 210, @0x0000000002948b00, libserver.so)  // inlines: CStrongHandle, NetworkStateChanged, Set, operator=, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, ~CStrongHandle
// calls: GetParticleSystemIndex, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, _Unwind_Resume
// callers: CDOTA_BaseNPC_Building::SetHeroStatue, CDOTA_BaseNPC_Effigy_BattleCup::Spawn
void __fastcall CDOTA_BaseNPC_Building::OverrideDestructionEffect(
        CDOTA_BaseNPC_Building *const this,
        const char *pszDestructionEffect)
{
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::ResourceHandleTyped_t hResource[2]; // [rsp+0h] [rbp-30h] BYREF
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> src; // [rsp+10h] [rbp-20h] BYREF

  GetParticleSystemIndex(hResource, pszDestructionEffect);
  src.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&src, hResource[0]);
  if ( this->m_nFXIndexDestruction.m_Value.m_pBinding != src.m_pBinding )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&this->m_nFXIndexDestruction.m_Value, &src);
  }
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&src);
}


// CDOTA_BaseNPC_Building::ShouldTransmit  (line 216, @0x00000000028f5360, libserver.so)
int __fastcall CDOTA_BaseNPC_Building::ShouldTransmit(
        CDOTA_BaseNPC_Building *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  return 4;
}


// CDOTA_BaseNPC_Building::Precache  (line 228, @0x000000000294b9d0, libserver.so)  // inlines: String, ToCStr
// calls: CDOTA_BaseNPC::Precache, CBaseEntity::PrecacheScriptSound, CBaseEntity::PrecacheModel, PrecacheParticleSystem
// callers: CDOTA_BaseNPC_Effigy_BattleCup::Precache, CDOTA_BaseNPC_Shop::Precache, CDOTA_BaseNPC_Effigy_Statue::Precache
void __fastcall CDOTA_BaseNPC_Building::Precache(
        CDOTA_BaseNPC_Building *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rdi
  const char *v5; // rdi
  const char *v6; // rdi
  const char *v7; // rdi

  CDOTA_BaseNPC::Precache(this, pContext);
  if ( this->m_iszAmbientEffectName.u.m_Id != 0 )
  {
    m_pAsString = this->m_iszAmbientEffectName.u.m_pAsString;
    if ( *m_pAsString != 0 )
      PrecacheParticleSystem(m_pAsString, pContext);
  }
  if ( this->m_iszDestructionEffectName.u.m_Id != 0 )
  {
    v5 = this->m_iszDestructionEffectName.u.m_pAsString;
    if ( *v5 != 0 )
      PrecacheParticleSystem(v5, pContext);
  }
  if ( this->m_iszDamageModelLevel1.u.m_Id != 0 )
  {
    v6 = this->m_iszDamageModelLevel1.u.m_pAsString;
    if ( *v6 != 0 )
      CBaseEntity::PrecacheModel(v6, pContext);
  }
  if ( this->m_iszDamageModelLevel2.u.m_Id != 0 )
  {
    v7 = this->m_iszDamageModelLevel2.u.m_pAsString;
    if ( *v7 != 0 )
      CBaseEntity::PrecacheModel(v7, pContext);
  }
  if ( this->m_sDestroySnd.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_sDestroySnd.u.m_pAsString, pContext);
  if ( this->m_sDmgLvl1Snd.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_sDmgLvl1Snd.u.m_pAsString, pContext);
  if ( this->m_sDmgLvl2Snd.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_sDmgLvl2Snd.u.m_pAsString, pContext);
}


// CDOTA_BaseNPC_Building::IsVulnerableOnCreepSpawn  (line 264, @0x000000000290aa70, libserver.so)
// callers: CDOTAGamerules::SetFirstTowerState
bool __fastcall CDOTA_BaseNPC_Building::IsVulnerableOnCreepSpawn(CDOTA_BaseNPC_Building *const this)
{
  return this->m_bVulnerableOnCreepSpawn;
}


// CDOTA_BaseNPC_Building::GetUpgradeIdentifier  (line 271, @0x000000000290aa80, libserver.so)
int __fastcall CDOTA_BaseNPC_Building::GetUpgradeIdentifier(CDOTA_BaseNPC_Building *const this)
{
  return this->m_iUpgradeIdentifier;
}


// CDOTA_BaseNPC_Building::GetLinkedEntities  (line 278, @0x00000000029249d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Purge, PurgeAndDeleteElements, RemoveAll, Set, String, ToCStr, V_strlen, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), strlen, CGameEntitySystem::FindEntityByName, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CUtlMemory<char*, int>::Purge, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC_Tower::Event_Killed
void __fastcall CDOTA_BaseNPC_Building::GetLinkedEntities(
        CDOTA_BaseNPC_Building *const this,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pEntities)
{
  const char *m_pAsString; // rax
  bool v4; // zf
  __int64 v5; // r12
  int v6; // ebx
  CHandle<CBaseEntity> *v7; // rax
  const char *v8; // r14
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v11; // cx
  __int64 m_Size; // r14
  int v13; // eax
  __int64 v14; // r12
  int v15; // ebx
  char *v16; // rsi
  int v17; // [rsp+10h] [rbp-60h]
  CUtlStringList szEntities; // [rsp+20h] [rbp-50h] BYREF

  m_pAsString = "";
  szEntities.m_Size = 0;
  v4 = this->m_iszLinkedUnit.u.m_Id == 0;
  szEntities.m_Memory.m_pMemory = 0;
  szEntities.m_Memory.m_nAllocationCount = 0;
  szEntities.m_Memory.m_nGrowSize = 0;
  if ( !v4 )
    m_pAsString = this->m_iszLinkedUnit.u.m_pAsString;
  V_SplitString(m_pAsString, ";", &szEntities);
  if ( szEntities.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v8 = szEntities.m_Memory.m_pMemory[v5];
      if ( v8 != 0 && strlen(szEntities.m_Memory.m_pMemory[v5]) > 0 )
      {
        EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v8, 0, 0, 0, 0);
        if ( EntityByName != 0 )
        {
          m_pEntity = EntityByName->m_pEntity;
          v17 = -1;
          if ( m_pEntity != 0 )
          {
            v11 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v17 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
          }
          m_Size = pEntities->m_Size;
          v13 = pEntities->m_Size;
          if ( m_Size == pEntities->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&pEntities->m_Memory, 1);
            v13 = pEntities->m_Size;
          }
          pEntities->m_Size = v13 + 1;
          v7 = &pEntities->m_Memory.m_pMemory[m_Size];
          if ( v7 != 0 )
            v7->m_Index = v17;
        }
      }
      ++v6;
      ++v5;
    }
    while ( szEntities.m_Size > v6 );
    if ( szEntities.m_Size > 0 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        ++v15;
        v16 = szEntities.m_Memory.m_pMemory[v14++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16);
      }
      while ( v15 < szEntities.m_Size );
    }
  }
  szEntities.m_Size = 0;
  if ( (szEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szEntities.m_Memory);
    if ( (szEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szEntities.m_Memory);
  }
}


// CDOTA_BaseNPC_Building::OnTakeDamage_Alive  (line 297, @0x0000000002956cc0, libserver.so)  // inlines: CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DOTAGameRules, FStrEq, FindModifierByName, Get, GetAttacker, GetEntityName, GetFloat, GetGameTime, GetInstance, GetLastAttackWarnTimer, GetTeamNumber, IsBarracks, IsPlayerTeam, QueueConcept, ResetLastAttackWarnTimer, SetCollisionBounds, String, ToCStr, ToDOTABaseNPC, _V_strcmp, _V_strstr, operator CBaseEntity*, operator=, strstr, ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BaseNPC::OnTakeDamage_Alive, CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CBaseAnimating::GetAttachment, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::GetAbsOrigin (34 total)
// callers: CDOTA_BaseNPC_Fort::OnTakeDamage_Alive, CDOTA_BaseNPC_Tower::OnTakeDamage_Alive, CDOTA_BaseNPC_Barracks::OnTakeDamage_Alive, CDOTA_BaseNPC_Healer::OnTakeDamage_Alive
// strings: "modifier_hero_statue", "attach_hitloc", "particles/dire_fx/building_damage_minor.vpcf", "tower_attacked", "announce_event", "tower1" (12 total)
// globals: CDOTA_BaseNPC_Building::m_fLastAttackWarnTimers
int __fastcall CDOTA_BaseNPC_Building::OnTakeDamage_Alive(
        CDOTA_BaseNPC_Building *const this,
        const CTakeDamageInfo *const info)
{
  int v4; // r13d
  float v5; // xmm1_4
  unsigned __int8 m_Value; // dl
  __int64 v7; // rax
  CEntityInstance *v8; // rax
  CModifieractoryDictionary *v9; // rax
  IModifierFactory *Factory; // rax
  Vector *p_vecPos; // r12
  bool Attachment; // r15
  CDOTA_ParticleManager *v13; // rax
  int v14; // r14d
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  float m_fValue; // r15d
  const Vector *AbsOrigin; // rax
  uint32 m_iUnitType; // eax
  int v21; // esi
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_Speech *v23; // rdi
  const Vector *LocalOrigin; // rax
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  float v27; // xmm0_4
  __int64 v28; // r15
  int m_flDamage; // r14d
  int v30; // eax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r14
  int v33; // eax
  float v34; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *v37; // r14
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  int Health; // r14d
  float v41; // xmm3_4
  float m_flDamageThresholdLevel2; // xmm0_4
  const char *v43; // rax
  const char *v44; // rax
  const char *v45; // rsi
  const char *v46; // rdi
  Vector *v47; // rax
  bool v48; // zf
  const char *v49; // rsi
  const char *v50; // rsi
  const char *v51; // rdi
  int v52; // eax
  Vector *v53; // rax
  const char *v54; // rsi
  int iRecipientType; // [rsp+24h] [rbp-11Ch]
  int iRecipientTypea; // [rsp+24h] [rbp-11Ch]
  int flCurrentHealthPercenta; // [rsp+28h] [rbp-118h]
  float flCurrentHealthPercentb; // [rsp+28h] [rbp-118h]
  float flCurrentHealthPercentc; // [rsp+28h] [rbp-118h]
  float flCurrentHealthPercent; // [rsp+28h] [rbp-118h]
  Vector mins; // [rsp+30h] [rbp-110h] BYREF
  Vector vecPos; // [rsp+40h] [rbp-100h] BYREF
  FindUnitsStackVec_t entities; // [rsp+80h] [rbp-C0h] BYREF
  unsigned __int64 v64; // [rsp+108h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  v4 = CDOTA_BaseNPC::OnTakeDamage_Alive(this, info);
  if ( CBaseEntity::GetHealth(this) > 0 )
  {
    v5 = 0.0;
    if ( g_pGameRules != 0 )
      v5 = *&g_pGameRules[18].m_szQuestName[20];
    m_Value = this->m_iTeamNum.m_Value;
    v7 = 5;
    if ( m_Value <= 0xDu )
      v7 = m_Value;
    if ( v5 > (CDOTA_BaseNPC_Building::m_fLastAttackWarnTimers[v7]
             + dota_building_health_loss_warn_interval.m_pParent->m_Value.m_fValue)
      && (m_Value - 6 <= 7 || m_Value - 2 <= 1) )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
      entities.m_Memory.m_nAllocationCount = 25;
      entities.m_Memory.m_nGrowSize = 0x80000000;
      m_fValue = dota_building_defended_radius.m_pParent->m_Value.m_fValue;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, this, m_fValue, &entities, 1, 1, 0, 0, 0);
      if ( entities.m_Size == 0 || (this->m_iUnitType & 0x20) != 0 )
      {
        CResponseCriteriaSet::CResponseCriteriaSet(&vecPos);
        m_iUnitType = this->m_iUnitType;
        if ( (m_iUnitType & 0x40) != 0 )
        {
          CResponseCriteriaSet::AppendCriteria(&vecPos, "announce_event", "barracks_attacked", 1.0);
        }
        else if ( (m_iUnitType & 0x20) != 0 )
        {
          CResponseCriteriaSet::AppendCriteria(&vecPos, "announce_event", "fort_attacked", 1.0);
        }
        else if ( (m_iUnitType & 4) != 0 )
        {
          CResponseCriteriaSet::AppendCriteria(&vecPos, "announce_event", "tower_attacked", 1.0);
        }
        else if ( (*(this->_vptr_IHandleEntity + 400))(this) != 0 )
        {
          CResponseCriteriaSet::AppendCriteria(&vecPos, "announce_event", "shrine_attacked", 1.0);
        }
        else
        {
          CResponseCriteriaSet::AppendCriteria(&vecPos, "announce_event", "base_attacked", 1.0);
        }
        CDOTA_BaseNPC_Building::AddBuildingCriteria(this, &vecPos);
        CResponseCriteriaSet::AppendCriteria(&vecPos, "spectator", "0", 1.0);
        v21 = this->m_iTeamNum.m_Value;
        iRecipientType = (v21 != 2) + 6;
        m_pSpeech = CDOTAGamerules::GetAnnouncer(g_pGameRules, v21)->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::QueueConcept(m_pSpeech, 18, -1.0, &vecPos, iRecipientType, 1, 0, 0, 0);
        CResponseCriteriaSet::AppendCriteria(&vecPos, "spectator", "1", 1.0);
        v23 = CDOTAGamerules::GetAnnouncer(g_pGameRules, 1)->m_Speech.m_pSpeech;
        if ( v23 != 0 )
          CDOTA_Speech::QueueConcept(v23, 18, -1.0, &vecPos, 8, 1, 0, 0, 0);
        LocalOrigin = CBaseEntity::GetLocalOrigin(this);
        MinimapEvent(this->m_iTeamNum.m_Value, this, LocalOrigin->x, LocalOrigin->y, 4, 4);
        CResponseCriteriaSet::~CResponseCriteriaSet(&vecPos);
      }
      v25 = this->m_iTeamNum.m_Value;
      v26 = 5;
      v27 = 0.0;
      if ( v25 <= 0xDu )
        v26 = v25;
      if ( g_pGameRules != 0 )
        v27 = *&g_pGameRules[18].m_szQuestName[20];
      CDOTA_BaseNPC_Building::m_fLastAttackWarnTimers[v26] = v27;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  if ( (this->m_iUnitType & 0x44) != 0 )
  {
    v8 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    {
      v28 = (*(v8->_vptr_IHandleEntity + 413))(v8);
      if ( v28 != 0 )
      {
        iRecipientTypea = (*(this->_vptr_IHandleEntity + 156))(this);
        flCurrentHealthPercenta = CBaseEntity::GetHealth(this);
        m_flDamage = info->m_flDamage;
        v30 = (*(*v28 + 3144LL))(v28);
        CDOTA_PlayerResource::AddScaledTowerDamage(
          g_pDOTAPlayerResource,
          v30,
          m_flDamage,
          flCurrentHealthPercenta,
          iRecipientTypea);
        m_pEntity = this->m_pEntity;
        m_pAsString = m_pEntity->m_name.u.m_pAsString;
        if ( m_pAsString != 0
          && (strstr(m_pEntity->m_name.u.m_pAsString, "tower1") != 0 || strstr(m_pAsString, "tower2") != 0) )
        {
          flCurrentHealthPercentb = info->m_flDamage;
          v33 = (*(*v28 + 3144LL))(v28);
          CDOTA_PlayerResource::AddPushingDamage(g_pDOTAPlayerResource, v33, flCurrentHealthPercentb, v34);
        }
      }
    }
  }
  v9 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v9, "modifier_hero_statue");
  if ( CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, Factory, "modifier_hero_statue", 0) == 0 )
  {
    Health = CBaseEntity::GetHealth(this);
    v41 = (Health / (*(this->_vptr_IHandleEntity + 156))(this)) * 100.0;
    m_flDamageThresholdLevel2 = this->m_flDamageThresholdLevel2;
    if ( this->m_flDamageThresholdLevel1 > v41 && v41 > m_flDamageThresholdLevel2 && this->m_iDamageLevel == 0 )
    {
      v43 = this->m_iszDamageModelLevel1.u.m_pAsString;
      this->m_iDamageLevel = 1;
      if ( v43 == 0 )
        v43 = "";
      if ( *v43 != 0 )
      {
        flCurrentHealthPercent = v41;
        CBaseEntity::GetModelName(&vecPos, this);
        v50 = *&vecPos.x;
        v51 = this->m_iszDamageModelLevel1.u.m_pAsString;
        v41 = flCurrentHealthPercent;
        if ( *&vecPos.x == 0 )
          v50 = "";
        if ( v51 == 0 )
          v51 = "";
        if ( v50 != v51 )
        {
          v52 = strcmp(v51, v50);
          v41 = flCurrentHealthPercent;
          if ( v52 != 0 )
          {
            mins = *(*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
            v53 = (*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
            v48 = this->m_iszDamageModelLevel1.u.m_Id == 0;
            v54 = "";
            vecPos = *v53;
            if ( !v48 )
              v54 = this->m_iszDamageModelLevel1.u.m_pAsString;
            CBaseModelEntity::SetModel(this, v54);
            this->m_iszOriginalModel.u.m_Id = this->m_iszDamageModelLevel1.u.m_Id;
            CDOTA_BaseNPC::StartGesture(this, 1534, 0.0, 0.0, 3, 0, 1.0);
            CCollisionProperty::SetCollisionBounds(&this->m_Collision, &mins, &vecPos);
            v41 = flCurrentHealthPercent;
          }
        }
      }
      if ( this->m_sDmgLvl1Snd.u.m_Id != 0 )
      {
        flCurrentHealthPercentc = v41;
        CDOTA_BaseNPC::UnitEmitSound(this, this->m_sDmgLvl1Snd.u.m_pAsString, 0.0, 0, 0);
        m_flDamageThresholdLevel2 = this->m_flDamageThresholdLevel2;
        v41 = flCurrentHealthPercentc;
      }
      else
      {
        m_flDamageThresholdLevel2 = this->m_flDamageThresholdLevel2;
      }
    }
    if ( m_flDamageThresholdLevel2 > v41 && this->m_iDamageLevel == 1 )
    {
      v44 = this->m_iszDamageModelLevel2.u.m_pAsString;
      this->m_iDamageLevel = 2;
      if ( v44 == 0 )
        v44 = "";
      if ( *v44 != 0 )
      {
        CBaseEntity::GetModelName(&vecPos, this);
        v45 = *&vecPos.x;
        v46 = this->m_iszDamageModelLevel2.u.m_pAsString;
        if ( *&vecPos.x == 0 )
          v45 = "";
        if ( v46 == 0 )
          v46 = "";
        if ( v45 != v46 && strcmp(v46, v45) != 0 )
        {
          mins = *(*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
          v47 = (*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
          v48 = this->m_iszDamageModelLevel2.u.m_Id == 0;
          v49 = "";
          vecPos = *v47;
          if ( !v48 )
            v49 = this->m_iszDamageModelLevel2.u.m_pAsString;
          CBaseModelEntity::SetModel(this, v49);
          this->m_iszOriginalModel.u.m_Id = this->m_iszDamageModelLevel2.u.m_Id;
          CDOTA_BaseNPC::StartGesture(this, 1534, 0.0, 0.0, 3, 0, 1.0);
          CCollisionProperty::SetCollisionBounds(&this->m_Collision, &mins, &vecPos);
        }
      }
      if ( this->m_sDmgLvl2Snd.u.m_Id != 0 )
        CDOTA_BaseNPC::UnitEmitSound(this, this->m_sDmgLvl2Snd.u.m_pAsString, 0.0, 0, 0);
    }
  }
  if ( info->m_flDamage > 50.0 )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/dire_fx/building_damage_major.vpcf",
                 1,
                 this,
                 0,
                 0);
    v37 = CBaseEntity::GetAbsOrigin(this);
    v38 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v38, Particle, 0, this, 5, "attach_hitloc", *v37, 1);
    v39 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v39, Particle);
  }
  else
  {
    p_vecPos = &vecPos;
    Attachment = CBaseAnimating::GetAttachment(this, "attach_hitloc", &vecPos);
    v13 = GetParticleManager();
    v14 = CDOTA_ParticleManager::CreateParticle(v13, "particles/dire_fx/building_damage_minor.vpcf", 8, 0, 0, 0);
    if ( !Attachment )
      p_vecPos = CBaseEntity::GetAbsOrigin(this);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v15, v14, 0, *&p_vecPos->x, p_vecPos->z);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v16, v14);
  }
  return v4;
}


// CDOTA_BaseNPC_Building::AddBuildingCriteria  (line 432, @0x000000000290aa90, libserver.so)
// calls: CResponseCriteriaSet::AppendCriteria
// callers: CDOTA_BaseNPC_Building::OnTakeDamage_Alive, CDOTA_BaseNPC_Tower::Event_Killed, CDOTA_BaseNPC_Barracks::Event_Killed
// strings: "team_attacked"
void __fastcall CDOTA_BaseNPC_Building::AddBuildingCriteria(
        CDOTA_BaseNPC_Building *const this,
        CResponseCriteriaSet *criteria)
{
  const char *v2; // rdx
  DOTA_LANE m_Lane; // eax
  const char *v6; // rdx

  v2 = "good";
  if ( this->m_iTeamNum.m_Value != 2 )
    v2 = "bad";
  CResponseCriteriaSet::AppendCriteria(criteria, "team_attacked", v2, 1.0);
  m_Lane = this->m_Lane;
  switch ( m_Lane )
  {
    case DOTA_LANE::DOTA_LANE_MIDDLE:
      v6 = "mid";
      break;
    case DOTA_LANE::DOTA_LANE_BOTTOM:
      v6 = "bot";
      break;
    case DOTA_LANE::DOTA_LANE_TOP:
      v6 = "top";
      break;
    default:
      return;
  }
  CResponseCriteriaSet::AppendCriteria(criteria, "lane", v6, 1.0);
}


// CDOTA_BaseNPC_Building::AnnounceBuildingEvent  (line 449, @0x000000000290ab50, libserver.so)  // inlines: DOTAGameRules, GetTeamNumber, QueueConcept
// calls: CResponseCriteriaSet::AppendCriteria, CDOTAGamerules::GetAnnouncer, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::RemoveCriteria, UTIL_VarArgs
// callers: CDOTA_BaseNPC_Building::DeathComplete, CDOTA_BaseNPC_Tower::Event_Killed, CDOTA_BaseNPC_Barracks::Event_Killed
// strings: "announce_event", "enemy_%s", "%s_%s"
void __fastcall CDOTA_BaseNPC_Building::AnnounceBuildingEvent(
        CDOTA_BaseNPC_Building *const this,
        CResponseCriteriaSet *criteria,
        const char *pszMessage)
{
  int m_Value; // esi
  int v7; // r15d
  CDOTA_Speech *m_pSpeech; // rdi
  char *v9; // rax
  int v10; // r15d
  CDOTA_Speech *v11; // rdi
  char *v12; // rsi
  char *v13; // rax
  CDOTA_Speech *v14; // rdi

  CResponseCriteriaSet::AppendCriteria(criteria, "announce_event", pszMessage, 1.0);
  CResponseCriteriaSet::AppendCriteria(criteria, "spectator", "0", 1.0);
  m_Value = this->m_iTeamNum.m_Value;
  v7 = (m_Value != 2) + 6;
  m_pSpeech = CDOTAGamerules::GetAnnouncer(g_pGameRules, m_Value)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::QueueConcept(m_pSpeech, 18, 1.25, criteria, v7, 1, 0, 0, 0);
  CResponseCriteriaSet::RemoveCriteria(criteria, "announce_event");
  v9 = UTIL_VarArgs("enemy_%s", pszMessage);
  CResponseCriteriaSet::AppendCriteria(criteria, "announce_event", v9, 1.0);
  v10 = (this->m_iTeamNum.m_Value == 2) + 6;
  v11 = CDOTAGamerules::GetAnnouncer(g_pGameRules, (this->m_iTeamNum.m_Value == 2) + 2)->m_Speech.m_pSpeech;
  if ( v11 != 0 )
    CDOTA_Speech::QueueConcept(v11, 18, 1.25, criteria, v10, 1, 0, 0, 0);
  CResponseCriteriaSet::RemoveCriteria(criteria, "spectator");
  CResponseCriteriaSet::AppendCriteria(criteria, "spectator", "1", 1.0);
  CResponseCriteriaSet::RemoveCriteria(criteria, "announce_event");
  v12 = "good";
  if ( this->m_iTeamNum.m_Value != 2 )
    v12 = "bad";
  v13 = UTIL_VarArgs("%s_%s", v12, pszMessage);
  CResponseCriteriaSet::AppendCriteria(criteria, "announce_event", v13, 1.0);
  v14 = CDOTAGamerules::GetAnnouncer(g_pGameRules, 1)->m_Speech.m_pSpeech;
  if ( v14 != 0 )
    CDOTA_Speech::QueueConcept(v14, 18, 1.25, criteria, 8, 1, 0, 0, 0);
}


// CDOTA_BaseNPC_Building::Event_Killed  (line 481, @0x0000000002962ad0, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityIndex, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CreateEvent, DOTAGameRules, EmitSound_t, Get, GetAttacker, GetEntityName, GetGlobalDOTATeam, GetInstance, GetTeamNumber, NetworkStateChanged, Purge, Set, SetTier3TowerDestroyed, SoundEventGuid_t, String, ToCStr, ToDOTABaseNPC, _V_strstr, operator CBaseEntity*, operator CEntityInstance*, operator=<bool>, strstr, ~CBroadcastRecipientFilter, ~CTeamRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CBaseEntity::AddEffects, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBaseEntity::EmitSound, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CRecipientFilter::~CRecipientFilter, CDOTA_BaseNPC::Event_Killed, CEntityHandle::operator CEntityInstance*, CDOTA_CombatLog::AddTeamBuildingKillEvent, CDOTAHeatmapManager::Get, CDOTAHeatmapManager::OnBuildingDeath (29 total)
// callers: CDOTA_BaseNPC_Fort::Event_Killed, CDOTA_BaseNPC_Tower::Event_Killed, CDOTA_BaseNPC_Barracks::Event_Killed, CDOTA_BaseNPC_Effigy_Statue::Event_Killed
// strings: "dota_tower_kill", "killer_userid", "teamnumber", "tower1", "modifier_glyph_reset", "tower3" (7 total)
void __fastcall CDOTA_BaseNPC_Building::Event_Killed(
        CDOTA_BaseNPC_Building *const this,
        const CTakeDamageInfo *const info)
{
  bool v3; // zf
  int *m_Id; // rax
  CEntityInstance *v5; // rax
  CDOTAHeatmapManager *v6; // rax
  uint32 m_iUnitType; // eax
  int v8; // r14d
  CEntityIdentity *m_pEntity; // rax
  CGameRules *v10; // rax
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, const char *, _QWORD); // r15
  unsigned int v13; // eax
  char *v14; // rax
  const char *m_pAsString; // rdx
  float v16; // xmm1_4
  CGameRules *v17; // rbx
  int (**vptr_CGameRules)(...); // rdi
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, const char *, _QWORD); // r12
  unsigned int v21; // eax
  __int64 v22; // r12
  int i; // ebx
  CTeam *GlobalTeam; // rax
  char *haystack; // [rsp+18h] [rbp-368h]
  EHANDLE *p_m_hAttacker; // [rsp+28h] [rbp-358h]
  CDOTA_BaseNPC *pAttacker; // [rsp+30h] [rbp-350h]
  Vector vStartPos; // [rsp+40h] [rbp-340h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecPlayerIDs; // [rsp+50h] [rbp-330h] BYREF
  int v31; // [rsp+68h] [rbp-318h]
  int v32; // [rsp+6Ch] [rbp-314h]
  Vector *p_vStartPos; // [rsp+70h] [rbp-310h]
  int v34; // [rsp+78h] [rbp-308h]
  __int64 v35; // [rsp+80h] [rbp-300h]
  char v36; // [rsp+88h] [rbp-2F8h]
  char v37; // [rsp+89h] [rbp-2F7h]
  char v38; // [rsp+8Ah] [rbp-2F6h]
  int v39; // [rsp+8Ch] [rbp-2F4h]
  CUtlVectorBase<Vector,CUtlMemory<Vector,int> > v40; // [rsp+90h] [rbp-2F0h] BYREF
  int v41; // [rsp+A8h] [rbp-2D8h]
  char v42; // [rsp+ACh] [rbp-2D4h]
  KeyValues kv; // [rsp+B0h] [rbp-2D0h] BYREF
  CTeamRecipientFilter winnerfilter; // [rsp+D0h] [rbp-2B0h] BYREF
  CTeamRecipientFilter loserfilter; // [rsp+210h] [rbp-170h] BYREF
  unsigned __int64 v46; // [rsp+348h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  if ( this->m_nFXIndexDestruction.m_Value.m_pBinding != 0 )
    CBaseEntity::AddEffects(this, 32);
  if ( this->m_sDestroySnd.u.m_Id != 0 )
  {
    vStartPos = *CBaseEntity::GetAbsOrigin(this);
    CRecipientFilter::CRecipientFilter(&loserfilter);
    loserfilter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&loserfilter);
    v3 = this->m_sDestroySnd.u.m_Id == 0;
    vecPlayerIDs.m_Memory.m_nAllocationCount = 1065353216;
    m_Id = "";
    vecPlayerIDs.m_Memory.m_nGrowSize = 0;
    v31 = 0;
    v32 = 100;
    v34 = 0;
    v35 = 0;
    v36 = 1;
    v37 = 0;
    v38 = 0;
    v39 = -1;
    v40.m_Size = 0;
    v40.m_Memory.m_pMemory = 0;
    v40.m_Memory.m_nAllocationCount = 0;
    v40.m_Memory.m_nGrowSize = 0;
    v41 = 0;
    v42 = 0;
    vecPlayerIDs.m_Size = 6;
    if ( !v3 )
      m_Id = this->m_sDestroySnd.u.m_Id;
    vecPlayerIDs.m_Memory.m_pMemory = m_Id;
    p_vStartPos = &vStartPos;
    CBaseEntity::EmitSound(&loserfilter, 0, &vecPlayerIDs);
    CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&v40);
    if ( (v40.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&v40.m_Memory);
      if ( (v40.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&v40.m_Memory);
    }
    loserfilter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&loserfilter);
  }
  CDOTA_BaseNPC::Event_Killed(this, info);
  p_m_hAttacker = &info->m_hAttacker;
  v5 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    pAttacker = v5;
  else
    pAttacker = 0;
  CDOTA_CombatLog::AddTeamBuildingKillEvent(&g_DOTACombatLog, pAttacker, this);
  v6 = CDOTAHeatmapManager::Get();
  CDOTAHeatmapManager::OnBuildingDeath(v6, this);
  m_iUnitType = this->m_iUnitType;
  if ( (m_iUnitType & 0x20) != 0 )
  {
    vecPlayerIDs.m_Size = 0;
    vecPlayerIDs.m_Memory.m_pMemory = 0;
    vecPlayerIDs.m_Memory.m_nAllocationCount = 0;
    vecPlayerIDs.m_Memory.m_nGrowSize = 0;
    CDOTA_PlayerResource::GetAllPlayerIDs(g_pDOTAPlayerResource, &vecPlayerIDs);
    v22 = 0;
    for ( i = 0; vecPlayerIDs.m_Size > i; ++v22 )
    {
      CDOTA_CombatLog::AddEndGameStatsEvent(&g_DOTACombatLog, vecPlayerIDs.m_Memory.m_pMemory[v22]);
      ++i;
    }
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecPlayerIDs);
    m_iUnitType = this->m_iUnitType;
  }
  if ( (m_iUnitType & 4) != 0 )
  {
    v8 = (this->m_iTeamNum.m_Value == 2) + 2;
    CTeamRecipientFilter::CTeamRecipientFilter(&winnerfilter, v8, 1);
    CRecipientFilter::AddRecipientsByTeamNumber(&winnerfilter, 1);
    CTeamRecipientFilter::CTeamRecipientFilter(&loserfilter, this->m_iTeamNum.m_Value, 1);
    m_pEntity = this->m_pEntity;
    if ( m_pEntity->m_name.u.m_Id == 0 )
    {
      v10 = g_pGameRules;
      goto LABEL_15;
    }
    haystack = m_pEntity->m_name.u.m_Id;
    v14 = strstr(haystack, "tower1");
    m_pAsString = haystack;
    if ( v14 != 0 )
    {
      if ( g_pGameRules == 0 )
      {
        v17 = 0;
LABEL_29:
        if ( strstr(m_pAsString, "tower3") != 0 )
        {
          if ( v17 == 0 )
            goto LABEL_17;
          v10 = v17;
          if ( v17[11].m_szQuestName[48] == 1 )
            goto LABEL_16;
          vptr_CGameRules = v17[5]._vptr_CGameRules;
          if ( vptr_CGameRules == 0 || (*(vptr_CGameRules[1] + 49) & 4) != 0 )
          {
            v10 = v17;
          }
          else
          {
            (*(*vptr_CGameRules + 22))(vptr_CGameRules, 1640, 0xFFFFFFFFLL, *v17[5].m_szQuestName);
            v10 = g_pGameRules;
          }
          v17[11].m_szQuestName[48] = 1;
        }
        else
        {
          v10 = v17;
        }
LABEL_15:
        if ( v10 != 0 )
        {
LABEL_16:
          if ( *&v10[6].m_szQuestName[68] == 21 )
          {
            GlobalTeam = GetGlobalTeam(v8);
            if ( GlobalTeam != 0 && SLODWORD(GlobalTeam[1].m_hPrivateScope.m_hScope) > 0 )
              EndGameImmediately(v8);
          }
        }
LABEL_17:
        v11 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_tower_kill", 0, 0);
        if ( v11 != 0 )
        {
          if ( CEntityHandle::operator CEntityInstance *(p_m_hAttacker) != 0 )
          {
            v12 = *(*v11 + 112LL);
            v13 = (*(pAttacker->_vptr_IHandleEntity + 414))(pAttacker);
            v12(v11, "killer_userid", v13);
          }
          (*(*v11 + 112LL))(v11, "teamnumber", this->m_iTeamNum.m_Value);
          (*(*v11 + 112LL))(v11, "gold", 0);
          (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v11, 1);
        }
        loserfilter._vptr_IRecipientFilter = &off_3FF4590;
        CRecipientFilter::~CRecipientFilter(&loserfilter);
        winnerfilter._vptr_IRecipientFilter = &off_3FF4590;
        CRecipientFilter::~CRecipientFilter(&winnerfilter);
        goto LABEL_22;
      }
      KeyValues::KeyValues(&kv, "modifier_glyph_reset");
      KeyValues::SetFloat(&kv, "duration", v16);
      Thinker_Create(this, 0, "modifier_glyph_reset", &kv, vec3_origin, this->m_iTeamNum.m_Value, 0, 1, 0);
      KeyValues::~KeyValues(&kv);
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
      if ( m_pAsString == 0 )
      {
        v10 = g_pGameRules;
        goto LABEL_15;
      }
    }
    v17 = g_pGameRules;
    goto LABEL_29;
  }
LABEL_22:
  if ( (*(this->_vptr_IHandleEntity + 400))(this) != 0 )
  {
    v19 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_shrine_kill", 0, 0);
    if ( v19 != 0 )
    {
      if ( CEntityHandle::operator CEntityInstance *(p_m_hAttacker) != 0 )
      {
        v20 = *(*v19 + 112LL);
        v21 = (*(pAttacker->_vptr_IHandleEntity + 414))(pAttacker);
        v20(v19, "killer_userid", v21);
      }
      (*(*v19 + 112LL))(v19, "teamnumber", this->m_iTeamNum.m_Value);
      (*(*v19 + 112LL))(v19, "gold", 150);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v19, 0);
    }
  }
  CDOTA_OGS::LogBuildingDeath(this, info);
}


// CDOTA_BaseNPC_Building::DeathComplete  (line 596, @0x000000000290ad90, libserver.so)  // inlines: DOTAGameRules, GetTeamNumber
// calls: CDOTA_BaseNPC::DeathComplete, CDOTAGamerules::AddCreepUpgradeState, CDOTAGamerules::GetCreepUpgradeState, SendChatEventMessage, CResponseCriteriaSet::CResponseCriteriaSet, CDOTA_BaseNPC_Building::AnnounceBuildingEvent, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// strings: "mega_creeps"
void __fastcall CDOTA_BaseNPC_Building::DeathComplete(CDOTA_BaseNPC_Building *const this)
{
  unsigned __int8 m_Value; // al
  CResponseCriteriaSet criteria; // [rsp+0h] [rbp-50h] BYREF

  CDOTA_BaseNPC::DeathComplete(this);
  CDOTAGamerules::AddCreepUpgradeState(g_pGameRules, this->m_iUpgradeIdentifier);
  if ( (this->m_iUnitType & 0x40) != 0 )
  {
    m_Value = this->m_iTeamNum.m_Value;
    if ( m_Value == 3 )
    {
      if ( CDOTAGamerules::GetCreepUpgradeState(g_pGameRules, 63) )
      {
        SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_SUPER_CREEPS, 0, 2, 0);
        goto LABEL_9;
      }
      m_Value = this->m_iTeamNum.m_Value;
    }
    if ( m_Value == 2 && CDOTAGamerules::GetCreepUpgradeState(g_pGameRules, 4032) )
    {
      SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_SUPER_CREEPS, 0, 3, 0);
LABEL_9:
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CDOTA_BaseNPC_Building::AnnounceBuildingEvent(this, &criteria, "mega_creeps");
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
  }
}


// CDOTA_BaseNPC_Building::ReduceInvulnCount  (line 627, @0x0000000002918eb0, libserver.so)  // inlines: CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEntityName, GetInstance, GetTeamNumber, GetUnitName, RemoveModifierByName, SetLenientAFK, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::RemoveModifierByName, CGameEntitySystem::FindEntityByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC_Building::InputReduceInvulnCount, CDOTA_BaseNPC_Tower::Event_Killed
// strings: "good_healer_6", "good_healer_7", "good_healer_8", "bad_healer_6", "npc_dota_goodguys_tower2_top", "npc_dota_goodguys_tower2_mid" (13 total)
void __fastcall CDOTA_BaseNPC_Building::ReduceInvulnCount(CDOTA_BaseNPC_Building *const this)
{
  int v1; // eax
  const char *m_pAsString; // rax
  const Vector *AbsOrigin; // rax
  CEntityInstance *v4; // r13
  CEntityInstance *v5; // r12
  CEntityInstance *v6; // r14
  CEntityInstance *v7; // rbx
  CHandle<CBaseEntity> *v8; // r15
  CEntityInstance *v9; // rax
  char *m_Id; // rsi
  bool v11; // zf
  char *v12; // rdx
  CDOTA_BaseNPC *v13; // rsi
  const char *v14; // rdi
  __int64 v15; // rcx
  const char *v16; // rdi
  bool v17; // zf
  __int64 v18; // rcx
  const char *v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  const char *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  bool v25; // zf
  const char *v26; // rdi
  __int64 v27; // rcx
  const CEntityHandle *v28; // rdi
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v30; // rax
  CBaseEntity *v31; // rax
  CBaseEntity *v32; // rax
  CBaseEntity *v33; // rax
  CBaseEntity *v34; // rax
  CDOTA_BaseNPC *pGoodTower2_Top; // [rsp+28h] [rbp-68h]
  CHandle<CBaseEntity> *v37; // [rsp+30h] [rbp-60h]
  CDOTA_BaseNPC *pBadTower2_Bot; // [rsp+38h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  v1 = this->m_iInvulnCount - 1;
  this->m_iInvulnCount = v1;
  if ( v1 > 0 )
    return;
  m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString == 0 )
  {
    m_pAsString = "";
    goto LABEL_53;
  }
  if ( m_pAsString != "good_healer_6"
    && strcmp(m_pAsString, "good_healer_6") != 0
    && m_pAsString != "good_healer_7"
    && strcmp(m_pAsString, "good_healer_7") != 0
    && m_pAsString != "good_healer_8"
    && strcmp(m_pAsString, "good_healer_8") != 0
    && m_pAsString != "bad_healer_6" )
  {
LABEL_53:
    if ( strcmp(m_pAsString, "bad_healer_6") != 0
      && m_pAsString != "bad_healer_7"
      && strcmp(m_pAsString, "bad_healer_7") != 0
      && m_pAsString != "bad_healer_8"
      && strcmp(m_pAsString, "bad_healer_8") != 0 )
    {
      CDOTA_ModifierManager::RemoveModifierByName(&this->m_ModifierManager, "modifier_invulnerable");
    }
  }
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, this, -1.0, &entities, 3, 4, 64, 0, 0);
  if ( entities.m_Size <= 0 )
  {
    v4 = 0;
    pBadTower2_Bot = 0;
    v5 = 0;
    goto LABEL_68;
  }
  pBadTower2_Bot = 0;
  pGoodTower2_Top = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = entities.m_Memory.m_pMemory + 1;
  v37 = &entities.m_Memory.m_pMemory[entities.m_Size - 1 + 1];
  v9 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
  if ( v9 == 0 )
    goto LABEL_50;
  while ( 1 )
  {
    if ( BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = v9[70].m_iszPrivateVScripts.u.m_Id;
      v11 = m_Id == 0;
      if ( m_Id == 0 )
        goto LABEL_51;
      v12 = v9[70].m_iszPrivateVScripts.u.m_Id;
      v11 = m_Id == "npc_dota_goodguys_tower2_top";
      if ( m_Id == "npc_dota_goodguys_tower2_top" )
      {
        pGoodTower2_Top = v9;
        goto LABEL_18;
      }
      v11 = strcmp(m_Id, "npc_dota_goodguys_tower2_top") == 0;
      v13 = pGoodTower2_Top;
      if ( v11 )
        v13 = v9;
      v11 = v12 == "npc_dota_goodguys_tower2_mid";
      pGoodTower2_Top = v13;
      if ( v12 == "npc_dota_goodguys_tower2_mid" )
      {
        v19 = "npc_dota_badguys_tower2_top";
        v7 = v9;
        v20 = v12 == "npc_dota_badguys_tower2_top";
        if ( v12 == "npc_dota_badguys_tower2_top" )
          goto LABEL_96;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_50:
      v9 = 0;
      v11 = 1;
LABEL_51:
      v12 = "";
    }
LABEL_18:
    v14 = "npc_dota_goodguys_tower2_mid";
    v13 = v12;
    v15 = 29;
    do
    {
      if ( v15 == 0 )
        break;
      v11 = LOBYTE(v13->_vptr_IHandleEntity) == *v14;
      v13 = (v13 + 1);
      ++v14;
      --v15;
    }
    while ( v11 );
    v16 = "npc_dota_goodguys_tower2_bot";
    if ( v11 )
      v7 = v9;
    v17 = v12 == "npc_dota_goodguys_tower2_bot";
    if ( v12 == "npc_dota_goodguys_tower2_bot" )
    {
      v22 = "npc_dota_badguys_tower2_mid";
      v6 = v9;
      v23 = v12 == "npc_dota_badguys_tower2_mid";
      if ( v12 != "npc_dota_badguys_tower2_mid" )
        goto LABEL_36;
      goto LABEL_61;
    }
    v13 = v12;
    v18 = 29;
    do
    {
      if ( v18 == 0 )
        break;
      v17 = LOBYTE(v13->_vptr_IHandleEntity) == *v16;
      v13 = (v13 + 1);
      ++v16;
      --v18;
    }
    while ( v17 );
    v19 = "npc_dota_badguys_tower2_top";
    if ( v17 )
      v6 = v9;
    v20 = v12 == "npc_dota_badguys_tower2_top";
    if ( v12 == "npc_dota_badguys_tower2_top" )
    {
LABEL_96:
      v5 = v9;
      v25 = v12 == "npc_dota_badguys_tower2_bot";
      if ( v12 == "npc_dota_badguys_tower2_bot" )
        goto LABEL_97;
LABEL_42:
      v26 = "npc_dota_badguys_tower2_bot";
      v13 = v12;
      v27 = 28;
      do
      {
        if ( v27 == 0 )
          break;
        v25 = LOBYTE(v13->_vptr_IHandleEntity) == *v26;
        v13 = (v13 + 1);
        ++v26;
        --v27;
      }
      while ( v25 );
      if ( !v25 )
        v9 = pBadTower2_Bot;
      pBadTower2_Bot = v9;
LABEL_48:
      v28 = v8;
      if ( v8 == v37 )
        break;
      goto LABEL_49;
    }
LABEL_30:
    v13 = v12;
    v21 = 28;
    do
    {
      if ( v21 == 0 )
        break;
      v20 = LOBYTE(v13->_vptr_IHandleEntity) == *v19;
      v13 = (v13 + 1);
      ++v19;
      --v21;
    }
    while ( v20 );
    v22 = "npc_dota_badguys_tower2_mid";
    if ( v20 )
      v5 = v9;
    v23 = v12 == "npc_dota_badguys_tower2_mid";
    if ( v12 != "npc_dota_badguys_tower2_mid" )
    {
LABEL_36:
      v24 = 28;
      v13 = v12;
      do
      {
        if ( v24 == 0 )
          break;
        v23 = LOBYTE(v13->_vptr_IHandleEntity) == *v22;
        v13 = (v13 + 1);
        ++v22;
        --v24;
      }
      while ( v23 );
      if ( v23 )
        v4 = v9;
      v25 = v12 == "npc_dota_badguys_tower2_bot";
      if ( v12 != "npc_dota_badguys_tower2_bot" )
        goto LABEL_42;
LABEL_97:
      pBadTower2_Bot = v9;
      goto LABEL_48;
    }
LABEL_61:
    v4 = v9;
    v28 = v8;
    if ( v8 == v37 )
      break;
LABEL_49:
    v9 = CEntityHandle::operator CEntityInstance *(v28);
    ++v8;
    if ( v9 == 0 )
      goto LABEL_50;
  }
  if ( (pGoodTower2_Top == 0 || (*(pGoodTower2_Top->_vptr_IHandleEntity + 408))(pGoodTower2_Top, v13) == 0)
    && (v7 == 0 || (*(v7->_vptr_IHandleEntity + 408))(v7, v13) == 0)
    && (v6 == 0 || (*(v6->_vptr_IHandleEntity + 408))(v6, v13) == 0) )
  {
LABEL_68:
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "good_healer_6", 0, 0, 0, 0);
    if ( EntityByName != 0 && EntityByName->m_bIsDOTANPC )
      CDOTA_ModifierManager::RemoveModifierByName(&EntityByName[4], "modifier_invulnerable");
    v30 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "good_healer_7", 0, 0, 0, 0);
    if ( v30 != 0 && v30->m_bIsDOTANPC )
      CDOTA_ModifierManager::RemoveModifierByName(&v30[4], "modifier_invulnerable");
    v31 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "good_healer_8", 0, 0, 0, 0);
    if ( v31 != 0 && v31->m_bIsDOTANPC )
      CDOTA_ModifierManager::RemoveModifierByName(&v31[4], "modifier_invulnerable");
  }
  if ( (v5 == 0 || (*(v5->_vptr_IHandleEntity + 408))(v5) == 0)
    && (v4 == 0 || (*(v4->_vptr_IHandleEntity + 408))(v4) == 0)
    && (pBadTower2_Bot == 0 || (*(pBadTower2_Bot->_vptr_IHandleEntity + 408))(pBadTower2_Bot) == 0) )
  {
    v32 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "bad_healer_6", 0, 0, 0, 0);
    if ( v32 != 0 && v32->m_bIsDOTANPC )
      CDOTA_ModifierManager::RemoveModifierByName(&v32[4], "modifier_invulnerable");
    v33 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "bad_healer_7", 0, 0, 0, 0);
    if ( v33 != 0 && v33->m_bIsDOTANPC )
      CDOTA_ModifierManager::RemoveModifierByName(&v33[4], "modifier_invulnerable");
    v34 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "bad_healer_8", 0, 0, 0, 0);
    if ( v34 != 0 && v34->m_bIsDOTANPC )
      CDOTA_ModifierManager::RemoveModifierByName(&v34[4], "modifier_invulnerable");
  }
  if ( (this->m_iUnitType & 0x40) != 0 )
    g_pGameRules[61].m_szQuestName[(this->m_iTeamNum.m_Value != 2) + 112] = 1;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_BaseNPC_Building::SetInvulnCount  (line 733, @0x000000000294fb80, libserver.so)  // inlines: RemoveModifierByName, SetLenientAFK
// calls: CDOTA_ModifierManager::RemoveModifierByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BaseNPC_Building::InputSetInvulnCount
// strings: "modifier_invulnerable"
void __fastcall CDOTA_BaseNPC_Building::SetInvulnCount(CDOTA_BaseNPC_Building *const this, int nInvulnCount)
{
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  CDOTA_ModifierManager::RemoveModifierByName(&this->m_ModifierManager, "modifier_invulnerable");
  this->m_iInvulnCount = nInvulnCount;
  if ( nInvulnCount != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_invulnerable");
    CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_invulnerable", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  else if ( (this->m_iUnitType & 0x40) != 0 )
  {
    g_pGameRules[61].m_szQuestName[(this->m_iTeamNum.m_Value != 2) + 112] = 1;
  }
}


// CDOTA_BaseNPC_Building::InputSetInvulnCount  (line 753, @0x000000000294fc50, libserver.so)  // inlines: Int, operator int
// calls: CDOTA_BaseNPC_Building::SetInvulnCount
void __fastcall CDOTA_BaseNPC_Building::InputSetInvulnCount(
        CDOTA_BaseNPC_Building *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    CDOTA_BaseNPC_Building::SetInvulnCount(this, inputdata->value.m_float);
  }
  else if ( m_type == 34 )
  {
    CDOTA_BaseNPC_Building::SetInvulnCount(this, inputdata->value.m_float64);
  }
  else
  {
    CDOTA_BaseNPC_Building::SetInvulnCount(this, inputdata->value.m_int);
  }
}


// CDOTA_BaseNPC_Building::InputReduceInvulnCount  (line 760, @0x00000000029194f0, libserver.so)
// calls: CDOTA_BaseNPC_Building::ReduceInvulnCount
void __fastcall CDOTA_BaseNPC_Building::InputReduceInvulnCount(
        CDOTA_BaseNPC_Building *const this,
        inputdata_t *const inputdata)
{
  CDOTA_BaseNPC_Building::ReduceInvulnCount(this);
}


// CDOTA_BaseNPC_Building::RemoveBackdoorProtection  (line 766, @0x000000000290ae90, libserver.so)  // inlines: RemoveModifierByName
// calls: CDOTA_ModifierManager::RemoveModifierByName
// callers: CDOTAGamerules::SetFirstTowerState
// strings: "modifier_backdoor_protection", "modifier_backdoor_protection_in_base", "modifier_invulnerable"
void __fastcall CDOTA_BaseNPC_Building::RemoveBackdoorProtection(CDOTA_BaseNPC_Building *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // rbx

  p_m_ModifierManager = &this->m_ModifierManager;
  if ( this->m_iInvulnCount <= 0 )
    CDOTA_ModifierManager::RemoveModifierByName(&this->m_ModifierManager, "modifier_invulnerable");
  CDOTA_ModifierManager::RemoveModifierByName(p_m_ModifierManager, "modifier_backdoor_protection");
  CDOTA_ModifierManager::RemoveModifierByName(p_m_ModifierManager, "modifier_backdoor_protection_in_base");
}


// CDOTA_BaseNPC_Building::PossiblyGiveSelfToPlayer  (line 779, @0x0000000002927f50, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValidIndex, LookupEntity, Purge, RemoveAll, SetControllableByPlayer, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_PlayerResource::GetPlayerIDsForTeam, CDOTA_BaseNPC::UpdateControllableMask, CDOTAPlayer::GetPlayerByPlayerID, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAGamerules::State_Enter_PRE_GAME
void __fastcall CDOTA_BaseNPC_Building::PossiblyGiveSelfToPlayer(CDOTA_BaseNPC_Building *const this)
{
  int m_Value; // esi
  int v3; // eax
  void (__fastcall *v4)(CDOTA_BaseNPC_Building *const, CEntityInstance *, unsigned __int64, CEntitySystem *); // r13
  CDOTAPlayer *PlayerByPlayerID; // rax
  unsigned __int16 v6; // dx
  int v7; // esi
  int v8; // eax
  CEntitySystem *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  CEntityInstance *v12; // rsi
  CEntityInstance *v13; // rax
  CUtlVector<int,CUtlMemory<int,int> > playerIDs; // [rsp+10h] [rbp-40h] BYREF

  if ( this->m_iPlayerOwner > 0 )
  {
    playerIDs.m_Size = 0;
    m_Value = this->m_iTeamNum.m_Value;
    playerIDs.m_Memory.m_pMemory = 0;
    playerIDs.m_Memory.m_nAllocationCount = 0;
    playerIDs.m_Memory.m_nGrowSize = 0;
    if ( CDOTA_PlayerResource::GetPlayerIDsForTeam(g_pDOTAPlayerResource, m_Value, &playerIDs) )
    {
      v3 = this->m_iPlayerOwner - 1;
      if ( v3 >= 0 && v3 < playerIDs.m_Size )
      {
        this->m_nControllingPlayerID = playerIDs.m_Memory.m_pMemory[v3];
        CDOTA_BaseNPC::UpdateControllableMask(this);
        v4 = *(this->_vptr_IHandleEntity + 40);
        PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(playerIDs.m_Memory.m_pMemory[this->m_iPlayerOwner - 1]);
        if ( PlayerByPlayerID->m_hAssignedHero.m_Value.m_Index == -1 )
        {
          v6 = 0x7FFF;
          v7 = 0x7FFF;
        }
        else
        {
          v6 = PlayerByPlayerID->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
          v7 = v6;
        }
        v8 = (PlayerByPlayerID->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
        v9 = g_pEntitySystem;
        v10 = (v8 + 2);
        if ( v10 > 1
          && (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9]) != 0
          && (v11 = v7 & 0x1FF, v9 = (8 * v11), v10 += 120 * v11, v10 != 0)
          && v8 == *(v10 + 16)
          && (v13 = *v10, *v10 != 0)
          && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
        {
          v12 = 0;
          if ( (v13[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            v12 = *v10;
        }
        else
        {
          v12 = 0;
        }
        v4(this, v12, v10, v9);
      }
    }
    playerIDs.m_Size = 0;
    if ( (playerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&playerIDs.m_Memory);
      if ( (playerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<int,int>::Purge(&playerIDs.m_Memory);
    }
  }
}


// CDOTA_BaseNPC_Building::SetHeroStatue  (line 794, @0x0000000002948b90, libserver.so)  // inlines: GetForModify, GetTeamNumber, NetworkStateChanged, Set, V_strncpy<int>, operator!=, operator=
// calls: CBaseAnimating::LookupSequence, _V_strncpy, GetHeroStatueDestructionEffectByIndex, CDOTA_BaseNPC_Building::OverrideDestructionEffect
// callers: CDOTA_BaseNPC_Effigy_Statue::Spawn
void __fastcall CDOTA_BaseNPC_Building::SetHeroStatue(
        CDOTA_BaseNPC_Building *const this,
        const char *pszSequence,
        float fCycle,
        __m128i fYaw,
        int iStatusEffectIndex,
        const char *pszInscription)
{
  float v6; // r15d
  HSequence v11; // eax
  float v12; // xmm0_4
  const char *HeroStatueDestructionEffectByIndex; // rax
  float v14; // [rsp+0h] [rbp-38h]
  float fCyclea; // [rsp+4h] [rbp-34h]
  float fCycled; // [rsp+4h] [rbp-34h]
  int32 fCyclec; // [rsp+4h] [rbp-34h]
  float fCycleb; // [rsp+4h] [rbp-34h]

  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(fYaw));
  if ( !this->m_bHeroStatue.m_Value )
  {
    fCycleb = fCycle;
    (*(this->_vptr_IHandleEntity + 22))(this, 4544, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHeroStatue.m_Value = 1;
    fCycle = fCycleb;
  }
  fCyclea = fCycle;
  v11.m_Data = CBaseAnimating::LookupSequence(this, pszSequence).m_Data;
  v12 = fCyclea;
  if ( v11.m_Data != this->m_hHeroStatueSequence.m_Value.m_Data )
  {
    v14 = fCyclea;
    fCyclec = v11.m_Data;
    (*(this->_vptr_IHandleEntity + 22))(this, 4532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12 = v14;
    this->m_hHeroStatueSequence.m_Value.m_Data = fCyclec;
  }
  if ( v12 != this->m_fHeroStatueCycle.m_Value )
  {
    fCycled = v12;
    (*(this->_vptr_IHandleEntity + 22))(this, 4536, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fHeroStatueCycle.m_Value = fCycled;
  }
  if ( iStatusEffectIndex != this->m_iHeroStatueStatusEffectIndex.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4540, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iHeroStatueStatusEffectIndex.m_Value = iStatusEffectIndex;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 4546, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_HeroStatueInscription, pszInscription, 32);
  HeroStatueDestructionEffectByIndex = GetHeroStatueDestructionEffectByIndex(
                                         iStatusEffectIndex,
                                         this->m_iTeamNum.m_Value);
  CDOTA_BaseNPC_Building::OverrideDestructionEffect(this, HeroStatueDestructionEffectByIndex);
  if ( this->m_angInitialAngles.m_Value.x != 0.0
    || v6 != this->m_angInitialAngles.m_Value.y
    || this->m_angInitialAngles.m_Value.z != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4520, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_angInitialAngles.m_Value.y = v6;
    this->m_angInitialAngles.m_Value.x = 0.0;
    this->m_angInitialAngles.m_Value.z = 0.0;
  }
}


// CDOTA_BaseNPC_Fort::Spawn  (line 813, @0x0000000002952e50, libserver.so)
// calls: CDOTA_BaseNPC_Building::Spawn, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "CDOTA_BaseNPC_Fort::Spawn", "modifier_tower_truesight_aura"
void __fastcall CDOTA_BaseNPC_Fort::Spawn(CDOTA_BaseNPC_Fort *const this, const CEntityKeyValues *pKeyValues)
{
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Building::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x20u;
  KeyValues::KeyValues(&kv, "CDOTA_BaseNPC_Fort::Spawn");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_tower_truesight_aura", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_BaseNPC_Fort::Event_Killed  (line 825, @0x0000000002963260, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetGameEvents, GetGameMode, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CreateUnitEvent, CDOTA_BaseNPC_Building::Event_Killed, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (16 total)
// strings: "modifier_knockback", "center_x", "center_y", "center_z"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Fort::Event_Killed(CDOTA_BaseNPC_Fort *const this, const CTakeDamageInfo *const info)
{
  unsigned __int8 m_Value; // al
  int v4; // ebx
  const Vector *AbsOrigin; // rax
  int v6; // edx
  const Vector *v7; // rax
  __int64 v8; // r12
  int v9; // r13d
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  CEntityInstance *v22; // rax
  CEntityIndex v23; // ebx
  CEntityIndex v24; // eax
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( g_CDOTA_Grinder.m_nMode == CDOTA_Grinder::Mode::GRINDER_BUILDINGS )
  {
    CDOTA_BaseNPC_Building::Event_Killed(this, info);
  }
  else
  {
    m_Value = this->m_iTeamNum.m_Value;
    if ( m_Value == 2 )
    {
      v26 = CEntityHandle::operator CEntityInstance *(&g_pGameRules[55].m_nQuestPhase);
      CEntityIOOutput::FireOutput(&v26[17].m_pEntity, 0, 0);
      CDOTAGamerules::SetGameWinner(g_pGameRules, &loc_2 + 1);
    }
    else if ( m_Value == 3 )
    {
      v25 = CEntityHandle::operator CEntityInstance *(&g_pGameRules[55].m_nQuestPhase);
      CEntityIOOutput::FireOutput(&v25[17].m_worldGroupId, 0, 0);
      CDOTAGamerules::SetGameWinner(g_pGameRules, 2);
    }
    v4 = 0;
    while ( ++v4 != 14 )
    {
      while ( (v4 - 6) <= 7 || (v4 - 2) <= 1 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v6 = v4++;
        CDOTAFogOfWarSystem::AddTempViewer(
          &g_DOTAFogOfWarSystem,
          FoWViewerType_t::FOWVIEWERTYPE_ENDGAME,
          v6,
          AbsOrigin,
          1500.0,
          180.0,
          0);
        if ( v4 == 14 )
          goto LABEL_10;
      }
    }
LABEL_10:
    hUnits.m_Size = 0;
    hUnits.m_Memory.m_pMemory = 0;
    hUnits.m_Memory.m_nAllocationCount = 0;
    hUnits.m_Memory.m_nGrowSize = 0;
    v7 = CBaseEntity::GetAbsOrigin(this);
    FindUnitsInRadius(this->m_iTeamNum.m_Value, v7, this, 1500.0, &hUnits, 3, 3, 16, 0, 0);
    if ( hUnits.m_Size > 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        while ( 1 )
        {
          v10 = &hUnits.m_Memory.m_pMemory[v8];
          m_Index = hUnits.m_Memory.m_pMemory[v8].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v12 = v10->m_Index;
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[v12 & 0x1FF];
              if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
              {
                m_pInstance = v14->m_pInstance;
                if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  break;
              }
            }
          }
          ++v9;
          ++v8;
          if ( hUnits.m_Size <= v9 )
            goto LABEL_20;
        }
        KeyValues::KeyValues(&kv, "modifier_knockback");
        CBaseEntity::GetAbsOrigin(this);
        KeyValues::SetFloat(&kv, "center_x", v16);
        CBaseEntity::GetAbsOrigin(this);
        KeyValues::SetFloat(&kv, "center_y", v17);
        CBaseEntity::GetAbsOrigin(this);
        KeyValues::SetFloat(&kv, "center_z", v18);
        KeyValues::SetFloat(&kv, "knockback_duration", v19);
        KeyValues::SetFloat(&kv, "knockback_distance", v20);
        KeyValues::SetFloat(&kv, "duration", v21);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, this, 0, "modifier_knockback", &kv, 0);
        ++v9;
        ++v8;
        KeyValues::~KeyValues(&kv);
      }
      while ( hUnits.m_Size > v9 );
    }
LABEL_20:
    v22 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( v22 != 0 && *&g_pGameRules[6].m_szQuestName[68] != 21 )
    {
      v23.m_Data = CEntityInstance::GetEntityIndex(v22).m_Data;
      v24.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CreateUnitEvent(v24, v23, 200, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_ANCIENT_KILL);
    }
    CDOTA_BaseNPC_Building::Event_Killed(this, info);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
  }
}


// CDOTA_BaseNPC_Fort::KillFort  (line 883, @0x000000000290aef0, libserver.so)
// calls: CDOTA_BaseNPC::ModifyHealth
// callers: CDOTAGamerules::MakeTeamLose
void __fastcall CDOTA_BaseNPC_Fort::KillFort(CDOTA_BaseNPC_Fort *const this)
{
  CDOTA_BaseNPC::ModifyHealth(this, 0, 0, 1, 0);
}


// CDOTA_BaseNPC_Fort::OnTakeDamage_Alive  (line 888, @0x00000000029576c0, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC_Building::OnTakeDamage_Alive, CEntityInstance::GetEntityIndex, CreateUnitEvent
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC_Fort::OnTakeDamage_Alive(
        CDOTA_BaseNPC_Fort *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityIndex v8; // eax

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  v6 = &v5[info->m_hAttacker.m_Index & 0x1FF];
  if ( v6 == 0 || m_Index != v6->m_EHandle.m_Index || v6->m_pInstance == 0 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CreateUnitEvent(v8, 0, 15, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_ANCIENT_UNDER_ATTACK);
  return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
}


// CDOTA_BaseNPC_Tower::Spawn  (line 902, @0x0000000002952ee0, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTA_BaseNPC_Building::Spawn, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BaseNPC_HoldoutTower::Spawn
// strings: "modifier_tower_truesight_aura", "modifier_tower_aura"
void __fastcall CDOTA_BaseNPC_Tower::Spawn(CDOTA_BaseNPC_Tower *const this, const CEntityKeyValues *pKeyValues)
{
  float v3; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Building::Spawn(this, pKeyValues);
  this->m_iUnitType |= 4u;
  if ( dota_easy_mode.m_pParent->m_Value.m_nValue != 0 )
  {
    v3 = ((*(this->_vptr_IHandleEntity + 156))(this) - 300);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_flBaseMaxHealth = v3;
    this->m_iBaseDamageMin = (vptr_IHandleEntity[416])(this) - 30;
    this->m_iBaseDamageMax = (*(this->_vptr_IHandleEntity + 417))(this) - 30;
  }
  KeyValues::KeyValues(&kv, "modifier_tower_truesight_aura");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_tower_truesight_aura", &kv, 0);
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_tower_aura", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_BaseNPC_Tower::OnTakeDamage_Alive  (line 924, @0x0000000002957760, libserver.so)
// calls: CDOTA_BaseNPC_Building::OnTakeDamage_Alive
int __fastcall CDOTA_BaseNPC_Tower::OnTakeDamage_Alive(
        CDOTA_BaseNPC_Tower *const this,
        const CTakeDamageInfo *const info)
{
  return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
}


// CDOTA_BaseNPC_Tower::Event_Killed  (line 931, @0x0000000002963610, libserver.so)  // inlines: CEntityIndex, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, FireOutput, Free, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CVariantBase
// calls: CDOTA_BaseNPC_Building::GetLinkedEntities, __dynamic_cast, CDOTA_BaseNPC_Building::ReduceInvulnCount, CResponseCriteriaSet::CResponseCriteriaSet, CDOTA_BaseNPC_Building::AddBuildingCriteria, CEntityHandle::operator CEntityInstance*, CResponseCriteriaSet::AppendCriteria, CDOTA_BaseNPC_Building::AnnounceBuildingEvent, CEntityInstance::GetEntityIndex, CreateUnitEvent, CDOTA_BaseNPC_Building::Event_Killed, CEntityIOOutput::FireOutputInternal (16 total)
// callers: CDOTA_BaseNPC_HoldoutTower::Event_Killed
// strings: "deny", "tower_killed"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_BaseNPC_Building, `typeinfo for'CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Tower::Event_Killed(CDOTA_BaseNPC_Tower *const this, const CTakeDamageInfo *const info)
{
  __int64 v4; // r15
  int i; // r12d
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTA_BaseNPC_Building *v12; // rdi
  CEntityInstance *v13; // rax
  const char *v14; // rdx
  CEntityInstance *v15; // rax
  int v16; // r15d
  CEntityIndex v17; // eax
  int32 iUnitID2; // [rsp+Ch] [rbp-A4h]
  CVariant value; // [rsp+10h] [rbp-A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hLinkedEntities; // [rsp+20h] [rbp-90h] BYREF
  CResponseCriteriaSet criteria; // [rsp+40h] [rbp-70h] BYREF

  hLinkedEntities.m_Memory.m_nAllocationCount = 0;
  hLinkedEntities.m_Size = 0;
  hLinkedEntities.m_Memory.m_pMemory = 0;
  hLinkedEntities.m_Memory.m_nGrowSize = 0;
  CDOTA_BaseNPC_Building::GetLinkedEntities(this, &hLinkedEntities);
  v4 = 0;
  for ( i = 0; hLinkedEntities.m_Size > i; ++v4 )
  {
    v6 = &hLinkedEntities.m_Memory.m_pMemory[v4];
    m_Index = hLinkedEntities.m_Memory.m_pMemory[v4].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v8 = v6->m_Index;
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[v8 & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            v12 = __dynamic_cast(m_pInstance, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_BaseNPC_Building, 0);
            if ( v12 != 0 )
              CDOTA_BaseNPC_Building::ReduceInvulnCount(v12);
          }
        }
      }
    }
    ++i;
  }
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CDOTA_BaseNPC_Building::AddBuildingCriteria(this, &criteria);
  v13 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  v14 = "0";
  if ( v13 != 0 && HIBYTE(v13[7].m_CScriptComponent) == this->m_iTeamNum.m_Value )
    v14 = "1";
  CResponseCriteriaSet::AppendCriteria(&criteria, "deny", v14, 1.0);
  CDOTA_BaseNPC_Building::AnnounceBuildingEvent(this, &criteria, "tower_killed");
  iUnitID2 = 0;
  v15 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 && (v15[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    iUnitID2 = CEntityInstance::GetEntityIndex(v15).m_Data;
    v16 = 20;
  }
  else
  {
    v16 = 15;
  }
  v17.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CreateUnitEvent(v17, iUnitID2, v16, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_TOWER_KILL);
  CDOTA_BaseNPC_Building::Event_Killed(this, info);
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnTowerKilled, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hLinkedEntities);
}


// CDOTA_BaseNPC_Barracks::Spawn  (line 981, @0x0000000002952c40, libserver.so)
// calls: CDOTA_BaseNPC_Building::Spawn, KeyValues::KeyValues, KeyValues::~KeyValues, __stack_chk_fail
// strings: "modifier_tower_truesight_aura"
void __fastcall CDOTA_BaseNPC_Barracks::Spawn(CDOTA_BaseNPC_Barracks *const this, const CEntityKeyValues *pKeyValues)
{
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Building::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x40u;
  KeyValues::KeyValues(&kv, "modifier_tower_truesight_aura");
  KeyValues::~KeyValues(&kv);
}


// CDOTA_BaseNPC_Barracks::Event_Killed  (line 990, @0x00000000029638f0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, Get, GetAttacker, GetGlobalDOTATeam, GetInstance, GetMainControllingPlayer, GetOpposingTeamNumber, GetTeamNumber, GetUpgradeIdentifier, GrowMemory, IncrementBarracksKills, NetworkStateChanged, Purge, RemoveAll, Set, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetGlobalTeam, CEntityHandle::operator CEntityInstance*, CUtlMemory<int, int>::Grow, SendChatEventMessage, CEntityInstance::GetEntityIndex, CreateUnitEvent, CResponseCriteriaSet::CResponseCriteriaSet, CDOTA_BaseNPC_Building::AddBuildingCriteria, CResponseCriteriaSet::AppendCriteria, CDOTA_BaseNPC_Building::AnnounceBuildingEvent, CDOTA_BaseNPC_Building::Event_Killed, CResponseCriteriaSet::~CResponseCriteriaSet (15 total)
// strings: "deny", "barracks_killed"
void __fastcall CDOTA_BaseNPC_Barracks::Event_Killed(
        CDOTA_BaseNPC_Barracks *const this,
        const CTakeDamageInfo *const info)
{
  CTeam *GlobalTeam; // rax
  CTeam *v4; // r12
  int v5; // r13d
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // r13
  int m_CScriptComponent_high; // r15d
  int m_iUpgradeIdentifier; // eax
  int m_Size; // r12d
  int v11; // eax
  int *v12; // rax
  CEntityIndex v13; // r12d
  CEntityIndex v14; // eax
  const char *v15; // rdx
  int v16; // [rsp+0h] [rbp-C0h]
  int nKillerPlayerID; // [rsp+4h] [rbp-BCh]
  CUtlVector<int,CUtlMemory<int,int> > values; // [rsp+10h] [rbp-B0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > playerIDs; // [rsp+30h] [rbp-90h] BYREF
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-70h] BYREF

  GlobalTeam = GetGlobalTeam((this->m_iTeamNum.m_Value == 2) + 2);
  v4 = GlobalTeam;
  if ( GlobalTeam != 0 )
  {
    v5 = HIDWORD(GlobalTeam[1].m_hPrivateScope.m_hScope) + 1;
    (*(GlobalTeam->_vptr_IHandleEntity + 22))(GlobalTeam, 996, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    HIDWORD(v4[1].m_hPrivateScope.m_hScope) = v5;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  v7 = v6;
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
  {
    nKillerPlayerID = (*(v6->_vptr_IHandleEntity + 414))(v6);
    if ( LOBYTE(v7[71].m_pEntity) != 0 )
      nKillerPlayerID = v7[61].m_iszPrivateVScripts.u.m_Id;
    m_CScriptComponent_high = HIBYTE(v7[7].m_CScriptComponent);
  }
  else
  {
    nKillerPlayerID = -1;
    v7 = 0;
    m_CScriptComponent_high = 0;
  }
  m_iUpgradeIdentifier = this->m_iUpgradeIdentifier;
  values.m_Memory.m_pMemory = 0;
  values.m_Memory.m_nAllocationCount = 0;
  values.m_Memory.m_nGrowSize = 0;
  v16 = m_iUpgradeIdentifier;
  CUtlMemory<int,int>::Grow(&values.m_Memory, 1);
  m_Size = 1;
  values.m_Size = 1;
  if ( values.m_Memory.m_pMemory != 0 )
  {
    *values.m_Memory.m_pMemory = v16;
    m_Size = values.m_Size;
  }
  v11 = m_Size;
  if ( m_Size == values.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&values.m_Memory, 1);
    v11 = values.m_Size;
  }
  values.m_Size = v11 + 1;
  v12 = &values.m_Memory.m_pMemory[m_Size];
  if ( v12 != 0 )
    *v12 = m_CScriptComponent_high;
  playerIDs.m_Size = 0;
  playerIDs.m_Memory.m_nAllocationCount = 0;
  playerIDs.m_Memory.m_pMemory = 0;
  playerIDs.m_Memory.m_nGrowSize = 0;
  CUtlMemory<int,int>::Grow(&playerIDs.m_Memory, 1);
  ++playerIDs.m_Size;
  if ( playerIDs.m_Memory.m_pMemory != 0 )
    *playerIDs.m_Memory.m_pMemory = nKillerPlayerID;
  SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_BARRACKS_KILL, &values, &playerIDs, 0);
  if ( v7 != 0 )
  {
    v13.m_Data = CEntityInstance::GetEntityIndex(v7).m_Data;
    v14.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CreateUnitEvent(v14, v13, 50, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_BARRACK_KILL);
  }
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CDOTA_BaseNPC_Building::AddBuildingCriteria(this, &criteria);
  v15 = "0";
  if ( v7 != 0 && HIBYTE(v7[7].m_CScriptComponent) == this->m_iTeamNum.m_Value )
    v15 = "1";
  CResponseCriteriaSet::AppendCriteria(&criteria, "deny", v15, 1.0);
  CDOTA_BaseNPC_Building::AnnounceBuildingEvent(this, &criteria, "barracks_killed");
  CDOTA_BaseNPC_Building::Event_Killed(this, info);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  playerIDs.m_Size = 0;
  if ( (playerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&playerIDs.m_Memory);
    if ( (playerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&playerIDs.m_Memory);
  }
  values.m_Size = 0;
  if ( (values.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&values.m_Memory);
    if ( (values.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&values.m_Memory);
  }
}


// CDOTA_BaseNPC_Barracks::OnTakeDamage_Alive  (line 1031, @0x0000000002957770, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC_Building::OnTakeDamage_Alive, CEntityInstance::GetEntityIndex, CreateUnitEvent
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC_Barracks::OnTakeDamage_Alive(
        CDOTA_BaseNPC_Barracks *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rax
  CEntityIndex v9; // eax

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  v6 = &v5[info->m_hAttacker.m_Index & 0x1FF];
  if ( v6 == 0 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  if ( m_Index != v6->m_EHandle.m_Index )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || m_pInstance[61].m_hPrivateScope.m_hScope == 0 )
  {
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  }
  v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CreateUnitEvent(v9, 0, 9, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_BARRACKS_UNDER_ATTACK);
  return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
}


// CDOTA_BaseNPC_HoldoutTower::GetDataDescMap  (line 1051, @0x00000000028f5370, libserver.so)
// globals: CDOTA_BaseNPC_HoldoutTower::m_DataMap
datamap_t *__fastcall CDOTA_BaseNPC_HoldoutTower::GetDataDescMap(CDOTA_BaseNPC_HoldoutTower *const this)
{
  return &CDOTA_BaseNPC_HoldoutTower::m_DataMap;
}


// CDOTA_BaseNPC_HoldoutTower::AddDatadescMetadataKeys  (line 1051, @0x000000000290af10, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_BaseNPC_HoldoutTower::GetEntityClass(void)
void __fastcall CDOTA_BaseNPC_HoldoutTower::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_BaseNPC_HoldoutTower::GetEntityClass);
}


// CDOTA_BaseNPC_HoldoutTower::GetBaseMap  (line 1051, @0x000000000290af30, libserver.so)
// globals: CDOTA_BaseNPC_Tower::m_DataMap
datamap_t *__cdecl CDOTA_BaseNPC_HoldoutTower::GetBaseMap()
{
  return &CDOTA_BaseNPC_Tower::m_DataMap;
}


// DataMapInit<CDOTA_BaseNPC_HoldoutTower>  (line 1051, @0x000000000290af40, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CDOTA_BaseNPC_HoldoutTower"
// globals: `guard variable for'DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder, CDOTA_BaseNPC_Tower::m_DataMap, CDOTA_BaseNPC_HoldoutTower::GetEntityClass(void), DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::dataDesc, CDOTA_BaseNPC_HoldoutTower::m_DataMap, DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder.m_pszBase = "CDOTA_BaseNPC_HoldoutTower";
    DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder.m_nLenBase = 26;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_BaseNPC_HoldoutTower::m_DataMap.dataNumFields = 1;
  CDOTA_BaseNPC_HoldoutTower::m_DataMap.baseMap = &CDOTA_BaseNPC_Tower::m_DataMap;
  CDOTA_BaseNPC_HoldoutTower::m_DataMap.dataDesc = DataMapInit<CDOTA_BaseNPC_HoldoutTower>(CDOTA_BaseNPC_HoldoutTower *)::dataDesc;
  AddDatadescMetadataKeys(&CDOTA_BaseNPC_HoldoutTower::m_DataMap, CDOTA_BaseNPC_HoldoutTower::GetEntityClass);
  return &CDOTA_BaseNPC_HoldoutTower::m_DataMap;
}


// CDOTA_BaseNPC_HoldoutTower::YouForgotToImplementOrDeclareServerClass  (line 1057, @0x00000000028f5380, libserver.so)
int __fastcall CDOTA_BaseNPC_HoldoutTower::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_HoldoutTower *const this)
{
  return 0;
}


// CDOTA_BaseNPC_HoldoutTower::GetServerClass  (line 1057, @0x0000000002900a50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_HoldoutTower::GetServerClass(CDOTA_BaseNPC_HoldoutTower *const this)
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


// CDOTA_BaseNPC_HoldoutTower::Spawn  (line 1062, @0x0000000002952ff0, libserver.so)  // inlines: RemoveModifierByName
// calls: CDOTA_BaseNPC_Tower::Spawn, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_ModifierManager::RemoveModifierByName, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BaseNPC_HoldoutTower_LightFast::Spawn, CDOTA_BaseNPC_HoldoutTower_HeavySlow::Spawn, CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::Spawn
// strings: "modifier_tower_truesight_aura", "modifier_invulnerable"
void __fastcall CDOTA_BaseNPC_HoldoutTower::Spawn(
        CDOTA_BaseNPC_HoldoutTower *const this,
        const CEntityKeyValues *pKeyValues)
{
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Tower::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x4000u;
  this->m_iTowerType = DOTA_HOLDOUT_TOWER_TYPE::DOTA_HOLDOUT_TOWER_NONE;
  KeyValues::KeyValues(&kv, "modifier_tower_truesight_aura");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_tower_truesight_aura", &kv, 0);
  CDOTA_ModifierManager::RemoveModifierByName(&this->m_ModifierManager, "modifier_invulnerable");
  KeyValues::~KeyValues(&kv);
}


// CDOTA_BaseNPC_HoldoutTower::Event_Killed  (line 1078, @0x00000000029638c0, libserver.so)
// calls: SendChatEventMessage, CDOTA_BaseNPC_Tower::Event_Killed
void __fastcall CDOTA_BaseNPC_HoldoutTower::Event_Killed(
        CDOTA_BaseNPC_HoldoutTower *const this,
        const CTakeDamageInfo *const info)
{
  SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_HOLDOUT_TOWER_DESTROYED, this->m_iTowerType, 0);
  CDOTA_BaseNPC_Tower::Event_Killed(this, info);
}


// CDOTA_BaseNPC_HoldoutTower::RespawnHoldoutTower  (line 1085, @0x000000000290b010, libserver.so)  // inlines: DirectRespawn
// calls: CBaseEntity::ClearFlags, CBaseEntity::SetLifeState, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::ModifyHealth, CEntityKeyValues::CEntityKeyValues, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CEntityKeyValues::~CEntityKeyValues, __stack_chk_fail, _Unwind_Resume
void __fastcall CDOTA_BaseNPC_HoldoutTower::RespawnHoldoutTower(CDOTA_BaseNPC_HoldoutTower *const this)
{
  CEntityKeyValues emptyKeyValues; // [rsp+10h] [rbp-A0h] BYREF
  unsigned __int64 v3; // [rsp+88h] [rbp-28h]
  Vector v4; // 0:xmm0_8.8,8:xmm1_4.4

  v3 = __readfsqword(0x28u);
  CBaseEntity::ClearFlags(this);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  CBaseEntity::SetMaxHealth(this, this->m_flBaseMaxHealth);
  CDOTA_BaseNPC::ModifyHealth(this, this->m_flBaseMaxHealth, 0, 0, 0);
  CEntityKeyValues::CEntityKeyValues(&emptyKeyValues);
  g_bReceivedChainedSpawn = 0;
  (*(this->_vptr_IHandleEntity + 8))(this, &emptyKeyValues);
  g_bReceivedChainedSpawn = 0;
  v4 = *CBaseEntity::GetAbsOrigin(this);
  FindClearSpaceForUnit(this, v4, 0);
  CEntityKeyValues::~CEntityKeyValues(&emptyKeyValues);
}


// CDOTA_BaseNPC_SDKTower::YouForgotToImplementOrDeclareServerClass  (line 1105, @0x00000000028f5390, libserver.so)
int __fastcall CDOTA_BaseNPC_SDKTower::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_SDKTower *const this)
{
  return 0;
}


// CDOTA_BaseNPC_SDKTower::GetServerClass  (line 1105, @0x00000000029006d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_SDKTower::GetServerClass(CDOTA_BaseNPC_SDKTower *const this)
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


// CDOTA_BaseNPC_HoldoutTower_LightFast::YouForgotToImplementOrDeclareServerClass  (line 1115, @0x00000000028f53a0, libserver.so)
int __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_HoldoutTower_LightFast *const this)
{
  return 0;
}


// CDOTA_BaseNPC_HoldoutTower_LightFast::GetServerClass  (line 1115, @0x00000000029009d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::GetServerClass(
        CDOTA_BaseNPC_HoldoutTower_LightFast *const this)
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


// CDOTA_BaseNPC_HoldoutTower_LightFast::Spawn  (line 1122, @0x00000000029530a0, libserver.so)
// calls: CDOTA_BaseNPC_HoldoutTower::Spawn
void __fastcall CDOTA_BaseNPC_HoldoutTower_LightFast::Spawn(
        CDOTA_BaseNPC_HoldoutTower_LightFast *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_HoldoutTower::Spawn(this, pKeyValues);
  this->m_iTowerType = DOTA_HOLDOUT_TOWER_TYPE::DOTA_HOLDOUT_TOWER_LIGHTFAST;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::YouForgotToImplementOrDeclareServerClass  (line 1134, @0x00000000028f53b0, libserver.so)
int __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow *const this)
{
  return 0;
}


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetServerClass  (line 1134, @0x0000000002900890, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::GetServerClass(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow *const this)
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


// CDOTA_BaseNPC_HoldoutTower_HeavySlow::Spawn  (line 1141, @0x00000000029530d0, libserver.so)
// calls: CDOTA_BaseNPC_HoldoutTower::Spawn
void __fastcall CDOTA_BaseNPC_HoldoutTower_HeavySlow::Spawn(
        CDOTA_BaseNPC_HoldoutTower_HeavySlow *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_HoldoutTower::Spawn(this, pKeyValues);
  this->m_iTowerType = DOTA_HOLDOUT_TOWER_TYPE::DOTA_HOLDOUT_TOWER_HEAVYSLOW;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::YouForgotToImplementOrDeclareServerClass  (line 1153, @0x00000000028f53c0, libserver.so)
int __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed *const this)
{
  return 0;
}


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetServerClass  (line 1153, @0x0000000002900ad0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::GetServerClass(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed *const this)
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


// CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::Spawn  (line 1160, @0x0000000002953100, libserver.so)
// calls: CDOTA_BaseNPC_HoldoutTower::Spawn
void __fastcall CDOTA_BaseNPC_HoldoutTower_ReduceSpeed::Spawn(
        CDOTA_BaseNPC_HoldoutTower_ReduceSpeed *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_HoldoutTower::Spawn(this, pKeyValues);
  this->m_iTowerType = DOTA_HOLDOUT_TOWER_TYPE::DOTA_HOLDOUT_TOWER_REDUCESPEED;
}


// CDOTA_BaseNPC_Effigy_Statue::YouForgotToImplementOrDeclareServerClass  (line 1171, @0x00000000028f53d0, libserver.so)
int __fastcall CDOTA_BaseNPC_Effigy_Statue::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_Effigy_Statue *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Effigy_Statue::GetServerClass  (line 1171, @0x0000000002900bf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Effigy_Statue::GetServerClass(CDOTA_BaseNPC_Effigy_Statue *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue  (line 1173, @0x000000000290b110, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<CAttribute_HeroStatue>, FindAttribute<IEconItemInterface, CAttribute_HeroStatue>, FindAttribute_UnsafeBitwiseCast<CAttribute_HeroStatue, CAttribute_HeroStatue, IEconItemInterface>, Get, GetItemInLoadoutForHeroBySlotTypeAndPlayerID, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: CDOTA_BaseNPC_Effigy_Statue::Precache, CDOTA_BaseNPC_Effigy_Statue::Spawn
// strings: "hero statue"
// globals: `guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue, CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(
        CDOTA_BaseNPC_Effigy_Statue *const this,
        int iPlayerID,
        CAttribute_HeroStatue *pAttribHeroStatueOut)
{
  CDOTAInventoryManager *v5; // rax
  CEconItemView *ItemInLoadoutForHeroBySlotType; // rbx
  uint32 v7; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSchema *v10; // rax
  CEconItemSchema *v12; // rax
  uint32 m_unResetCount; // eax
  int pPlayerID; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-40h] BYREF
  bool v16; // [rsp+28h] [rbp-28h]

  v5 = DOTAInventoryManager();
  pPlayerID = iPlayerID;
  ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v5, 1000, 37, &pPlayerID);
  if ( ItemInLoadoutForHeroBySlotType == 0 )
    return 0;
  if ( `guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue) != 0 )
  {
    CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_szName = "hero statue";
    v12 = GEconItemSchema();
    CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v12, "hero statue");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_bDestructName = 0;
    CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue,
      &_dso_handle);
  }
  if ( CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_szName == 0 )
    return 0;
  v7 = GEconItemSchema()->m_unResetCount;
  m_pRef = CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_pRef;
  if ( v7 != CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_unSchemaGeneration )
  {
    m_szName = CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_szName;
    v10 = GEconItemSchema();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v10, m_szName);
    CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_unSchemaGeneration = v7;
    CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(int,CAttribute_HeroStatue *)::pAttrDef_HeroStatue.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 )
    return 0;
  v15[2] = pAttribHeroStatueOut;
  v15[0] = off_40FE0D0;
  v15[1] = m_pRef;
  v16 = 0;
  (*(ItemInLoadoutForHeroBySlotType->_vptr_IEconItemInterface + 28))(ItemInLoadoutForHeroBySlotType, v15);
  return v16;
}


// CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName  (line 1183, @0x000000000295dbf0, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CEconItemView, CEntityModelModifier>, FindAssetModifier<CEntityModelModifier>, GetAssetModifiers<CEntityModelModifier>, GetModelName, GetModifier, IsIdxValid, IsValidIndex, LeftChild, V_strncpy<int>, operator[], wearable
// calls: DOTAGameManager, CDOTAGameManager::GetHeroDataByHeroID, CDOTAGameManager::GetHeroUnitNameByID, _V_strncpy, KeyValues::GetString, CEconItemView::CEconItemView, CEconItemView::Init, CEntityModelModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, CEconItemView::~CEconItemView, CUtlString::Get, _Unwind_Resume
// callers: CDOTA_BaseNPC_Effigy_Statue::Precache, CDOTA_BaseNPC_Effigy_Statue::Spawn
// strings: "models/heroes/wisp/wisp_effigy.vmdl"
// globals: INVALID_STYLE_INDEX
void __fastcall CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName(
        CDOTA_BaseNPC_Effigy_Statue *const this,
        const CProtoItemHeroStatue *const heroStatue,
        char *pModelName,
        int nModelNameSize)
{
  int v5; // ebx
  CDOTAGameManager *v6; // rax
  int v7; // ebx
  __int64 v8; // r14
  CDOTAGameManager *v9; // rax
  const char *String; // rax
  unsigned __int16 v11; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v12; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v14; // rbx
  const CUtlString *v15; // r12
  const char *v16; // rax
  KeyValues *pKVHero; // [rsp+8h] [rbp-158h]
  const char *pUnitName; // [rsp+38h] [rbp-128h]
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v21; // [rsp+40h] [rbp-120h] BYREF
  CEconItemView itemView; // [rsp+50h] [rbp-110h] BYREF

  *pModelName = 0;
  v5 = *(heroStatue + 6);
  v6 = DOTAGameManager();
  pKVHero = CDOTAGameManager::GetHeroDataByHeroID(v6, v5);
  if ( pKVHero == 0 )
    return;
  v7 = *(heroStatue + 6);
  v8 = 0;
  v9 = DOTAGameManager();
  pUnitName = CDOTAGameManager::GetHeroUnitNameByID(v9, v7);
  while ( 1 )
  {
    if ( *(heroStatue + 12) <= v8 )
      goto LABEL_4;
    if ( *(*(heroStatue + 5) + 4 * v8) != 0 )
    {
      CEconItemView::CEconItemView(&itemView);
      CEconItemView::Init(&itemView, *(*(heroStatue + 5) + 4 * v8), 9999, 9999, 0, 0, INVALID_STYLE_INDEX);
      if ( pUnitName != 0 )
      {
        v21.key.m_nType = CEntityModelModifier::StaticType();
        v11 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
                &itemView.m_AssetModifiers.m_mapAssetModifiers.m_Tree,
                &v21);
        if ( v11 < itemView.m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
          && v11 <= itemView.m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
          && v11 != 0xFFFF )
        {
          v12 = &itemView.m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v11];
          if ( v11 != v12->m_Left )
          {
            elem = v12->m_Data.elem;
            if ( elem != 0 && elem->m_Size > 0 )
              break;
          }
        }
      }
LABEL_23:
      CEconItemView::~CEconItemView(&itemView);
    }
    if ( ++v8 == 16 )
    {
      if ( *(heroStatue + 6) != 91 )
        goto LABEL_5;
      goto LABEL_10;
    }
  }
  v14 = 0;
  while ( 1 )
  {
    v15 = elem->m_Memory.m_pMemory[v14];
    if ( v15 != 0 && (*(v15->m_pString + 6))(v15, pUnitName) != 0 )
      break;
    if ( elem->m_Size <= ++v14 )
      goto LABEL_23;
  }
  v16 = CUtlString::Get(v15 + 2);
  _V_strncpy(pModelName, v16, nModelNameSize);
  CEconItemView::~CEconItemView(&itemView);
LABEL_4:
  if ( *(heroStatue + 6) != 91 )
  {
LABEL_5:
    if ( *pModelName != 0 )
      return;
    goto LABEL_11;
  }
LABEL_10:
  _V_strncpy(pModelName, "models/heroes/wisp/wisp_effigy.vmdl", nModelNameSize);
  if ( *pModelName != 0 )
    return;
LABEL_11:
  String = KeyValues::GetString(pKVHero, "Model", "", 0, 0);
  _V_strncpy(pModelName, String, nModelNameSize);
}


// CDOTA_BaseNPC_Effigy_Statue::Precache  (line 1222, @0x000000000295de60, libserver.so)  // inlines: AssignTo, Base, CAttribute_HeroStatue, Element, FindKeyHash, GetValue, GetValue<bool>, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, _V_strcmp, atoi, operator[], wearable, ~CAttribute_HeroStatue
// calls: CDOTA_BaseNPC_Building::Precache, Warning, VariantFieldTypeName, CProtoItemHeroStatue::CProtoItemHeroStatue, CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue, CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName, CProtoItemHeroStatue::~CProtoItemHeroStatue, strtol, CEconItemView::CEconItemView, CEconItemView::Init, ItemGeneration, CItemGeneration::PrecacheItemFromScriptData (15 total)
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n", "No conversion from %s to int now\n"
// globals: jpt_295DF1E, CEntityKeyValues::sm_EmptyVariant, jpt_295E00B
void __fastcall CDOTA_BaseNPC_Effigy_Statue::Precache(
        CDOTA_BaseNPC_Effigy_Statue *const this,
        const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v5; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rcx
  CEntityVariant *p_m_value; // rsi
  const CEntityKeyValues *v11; // rcx
  int16 m_type; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // si
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  CEntityVariant *v17; // rcx
  char m_char; // al
  int16 v19; // ax
  const char *m_uint64; // rax
  const char *v21; // rax
  uint64 v22; // r13
  __int64 j; // rbx
  const char *v24; // rax
  CItemGeneration *v25; // rax
  _BYTE v26[40]; // [rsp+10h] [rbp-280h] BYREF
  __int64 v27; // [rsp+38h] [rbp-258h]
  int v28; // [rsp+40h] [rbp-250h]
  __int64 v29; // [rsp+58h] [rbp-238h]
  CEconItemView itemView; // [rsp+70h] [rbp-220h] BYREF
  char pBaseModelName[264]; // [rsp+150h] [rbp-140h] BYREF
  unsigned __int64 v32; // [rsp+258h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Building::Precache(this, pContext);
  m_pKeyValues = pContext->m_pKeyValues;
  v5 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v5 > 0 )
  {
    m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; *&v5 > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == 770621253 )
        {
LABEL_9:
          if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
            v9 = m_pKeyValues->m_keyValues.m_pElements;
          else
            v9 = 0;
          p_m_value = &v9[i].m_value;
          v11 = pContext->m_pKeyValues;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          goto LABEL_14;
        }
      }
      else if ( *(4 * i) == 770621253 )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  v11 = pContext->m_pKeyValues;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    switch ( m_type )
    {
      case 1:
        m_char = p_m_value->m_float != 0.0;
        goto LABEL_26;
      case 5:
      case 37:
        m_char = p_m_value->m_int != 0;
        goto LABEL_26;
      case 6:
        m_char = p_m_value->m_char;
        goto LABEL_26;
      case 26:
      case 33:
        m_char = p_m_value->m_uint64 != 0;
        goto LABEL_26;
      case 30:
        m_uint64 = p_m_value->m_uint64;
        if ( strcmp(p_m_value->m_pszString, "0") == 0 || strcmp(m_uint64, "false") == 0 || strcmp(m_uint64, "no") == 0 )
          goto LABEL_69;
        if ( strcmp(m_uint64, "1") == 0 || strcmp(m_uint64, "true") == 0 || strcmp(m_uint64, "yes") == 0 )
          return;
        Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
LABEL_40:
        v11 = pContext->m_pKeyValues;
        v5 = pContext->m_pKeyValues->m_keyHashes.0;
        break;
      case 34:
        m_char = p_m_value->m_float64 != 0.0;
LABEL_26:
        if ( m_char != 0 )
          return;
LABEL_69:
        v11 = pContext->m_pKeyValues;
        break;
      default:
        v21 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to bool now\n", v21);
        goto LABEL_40;
    }
  }
LABEL_14:
  if ( *&v5 <= 0 )
  {
LABEL_29:
    v17 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_30;
  }
  v13 = v11->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( v13 == 0 )
  {
    if ( *(4 * v14) == 522802255 )
      goto LABEL_22;
LABEL_19:
    if ( *&v5 <= ++v14 )
      goto LABEL_29;
  }
  v15 = (&v11->m_keyHashes.m_nAllocAllocated + 1);
  if ( v13 > 9 )
    v15 = v11->m_keyHashes.m_pElements;
  if ( v15[v14] != 522802255 )
    goto LABEL_19;
LABEL_22:
  if ( v11->m_keyValues.m_nAllocated != 0 )
    v16 = v11->m_keyValues.m_pElements;
  else
    v16 = 0;
  v17 = &v16[v14].m_value;
LABEL_30:
  v19 = v17->m_type;
  if ( v19 != 0 )
  {
    switch ( v19 )
    {
      case 1:
        LODWORD(v22) = v17->m_float;
        goto LABEL_45;
      case 5:
        LODWORD(v22) = v17->m_int;
        goto LABEL_45;
      case 6:
        LODWORD(v22) = v17->m_char;
        goto LABEL_46;
      case 26:
        if ( v17->m_int64 > 0x7FFFFFFF )
        {
          LODWORD(v22) = 0x7FFFFFFF;
LABEL_46:
          CProtoItemHeroStatue::CProtoItemHeroStatue(v26);
          if ( CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(this, v22, v26) )
          {
            CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName(this, v26, pBaseModelName, 260);
            (**pContext->m_pManifest)(pContext->m_pManifest, pBaseModelName);
            for ( j = 0; j != 16; ++j )
            {
              if ( v28 <= j )
                break;
              if ( *(v27 + 4 * j) != 0 )
              {
                CEconItemView::CEconItemView(&itemView);
                CEconItemView::Init(&itemView, *(v27 + 4 * j), 9999, 9999, 0, 0, *(v29 + 4 * j));
                v25 = ItemGeneration();
                CItemGeneration::PrecacheItemFromScriptData(v25, &itemView, pContext);
                CEconItemView::~CEconItemView(&itemView);
              }
            }
          }
          CProtoItemHeroStatue::~CProtoItemHeroStatue(v26);
          return;
        }
        LODWORD(v22) = 0x80000000;
        if ( v17->m_uint64 >= 0xFFFFFFFF80000000LL )
          v22 = v17->m_uint64;
LABEL_45:
        if ( (v22 & 0x80000000) == 0LL )
          goto LABEL_46;
        break;
      case 30:
        LODWORD(v22) = strtol(v17->m_pszString, 0, 10);
        goto LABEL_45;
      case 33:
        LODWORD(v22) = 0x7FFFFFFF;
        if ( v17->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v22) = v17->m_uint64;
        goto LABEL_46;
      case 34:
        LODWORD(v22) = v17->m_float64;
        goto LABEL_45;
      case 37:
        LODWORD(v22) = 0x7FFFFFFF;
        if ( v17->m_int <= 0x7FFFFFFEu )
          LODWORD(v22) = v17->m_int;
        goto LABEL_46;
      default:
        v24 = VariantFieldTypeName(v19);
        Warning("No conversion from %s to int now\n", v24);
        return;
    }
  }
}


// CDOTA_BaseNPC_Effigy_Statue::Spawn  (line 1255, @0x000000000295e300, libserver.so)  // inlines: AssignTo, AssignTo<CBaseEntity>, Base, CAttribute_HeroStatue, CEntityHandle, CHandle, Element, EmptyValue<CHandle<CBaseEntity> >, FindKeyHash, Get, Get<CHandle<CBaseEntity> >, GetInstance, GetValue, GetValue<CHandle<CBaseEntity> >, GetValue<bool>, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, SetHeroStatueOwner, SetPlaybackRate, VectorAdd, _M_data, _V_strcmp, atoi, c_str, operator CBaseEntity*, operator+, operator=, operator=<int>, operator[], wearable, ~CAttribute_HeroStatue
// calls: CDOTA_BaseNPC_Building::Spawn, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, VariantFieldTypeName, Warning, CEntityHandle::operator CEntityInstance*, UTIL_Remove, CEntitySystem::FindFirstEntityHandleByName, CProtoItemHeroStatue::CProtoItemHeroStatue, CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue, DOTAGameManager (37 total)
// strings: "modifier_hero_statue_pedestal", "No free conversion of %s variant to CHandle<T> right now\n", "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n" (9 total)
// globals: jpt_295E3BB, CEntityKeyValues::sm_EmptyVariant, jpt_295E45B
void __fastcall CDOTA_BaseNPC_Effigy_Statue::Spawn(
        CDOTA_BaseNPC_Effigy_Statue *const this,
        const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v11; // cx
  __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v13; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v14; // rdx
  CEntityVariant *v15; // rcx
  int16 v16; // ax
  char m_char; // al
  int v18; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v19; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v21; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rdx
  CEntityVariant *v23; // rdx
  int16 v24; // ax
  const char *v25; // rax
  CEntityInstance *v26; // rax
  const char *v27; // rax
  uint64 m_uint64; // r15
  int v29; // r12d
  CDOTAGameManager *v30; // rax
  HSequence v31; // eax
  float v32; // xmm1_4
  CBaseAnimatingController *BaseAnimatingController; // rax
  const Vector *AbsOrigin; // rax
  float v35; // xmm2_4
  float v36; // xmm1_4
  void (__fastcall *v37)(CDOTA_BaseNPC_Effigy_Statue *const, float); // r12
  float v38; // xmm1_4
  float Float; // xmm0_4
  __int64 j; // r12
  const QAngle *AbsAngles; // r15
  CItemGeneration *v42; // rax
  CBaseEntity *v43; // rax
  CBaseEntity *v44; // r15
  const char *v45; // rax
  KeyValues *pKVHero; // [rsp+10h] [rbp-2D0h]
  const Vector *pKVHeroa; // [rsp+10h] [rbp-2D0h]
  Vector vRootBone; // [rsp+20h] [rbp-2C0h] BYREF
  QAngle angRootBone; // [rsp+30h] [rbp-2B0h] BYREF
  CEntityHandle v50; // [rsp+40h] [rbp-2A0h] BYREF
  int iHeroID; // [rsp+58h] [rbp-288h]
  int iStatusEffectIndex; // [rsp+5Ch] [rbp-284h]
  const char **v53; // [rsp+60h] [rbp-280h]
  __int64 v54; // [rsp+68h] [rbp-278h]
  int v55; // [rsp+70h] [rbp-270h]
  const char **v56; // [rsp+78h] [rbp-268h]
  float fCycle; // [rsp+80h] [rbp-260h]
  __int64 v58; // [rsp+88h] [rbp-258h]
  CEconItemView itemView; // [rsp+A0h] [rbp-240h] BYREF
  KeyValues kv; // [rsp+180h] [rbp-160h] BYREF
  KeyValues kv_0; // [rsp+1A0h] [rbp-140h] BYREF
  unsigned __int64 v62; // [rsp+2A8h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Building::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == 770621253 )
        {
LABEL_9:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v8 = pKeyValues->m_keyValues.m_pElements;
          else
            v8 = 0;
          p_m_value = &v8[i].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          goto LABEL_14;
        }
      }
      else if ( *(4 * i) == 770621253 )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    switch ( m_type )
    {
      case 1:
        m_char = p_m_value->m_float != 0.0;
        goto LABEL_29;
      case 5:
      case 37:
        m_char = p_m_value->m_int != 0;
        goto LABEL_29;
      case 6:
        m_char = p_m_value->m_char;
        goto LABEL_29;
      case 26:
      case 33:
        m_char = p_m_value->m_uint64 != 0;
        goto LABEL_29;
      case 30:
        if ( strcmp(p_m_value->m_pszString, "0") == 0
          || strcmp(p_m_value->m_pszString, "false") == 0
          || strcmp(p_m_value->m_pszString, "no") == 0 )
        {
          break;
        }
        if ( strcmp(p_m_value->m_pszString, "1") == 0
          || strcmp(p_m_value->m_pszString, "true") == 0
          || strcmp(p_m_value->m_pszString, "yes") == 0 )
        {
          goto LABEL_30;
        }
        Warning("Invalid conversion : CString '%s' to bool\n", p_m_value->m_pszString);
        goto LABEL_60;
      case 34:
        m_char = p_m_value->m_float64 != 0.0;
LABEL_29:
        if ( m_char == 0 )
          break;
LABEL_30:
        KeyValues::KeyValues(&kv_0, "modifier_hero_statue_pedestal");
        CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_hero_statue_pedestal", &kv_0, 0);
        KeyValues::~KeyValues(&kv_0);
        goto LABEL_31;
      default:
        v27 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to bool now\n", v27);
LABEL_60:
        m_nCount = pKeyValues->m_keyHashes.m_nCount;
        break;
    }
  }
LABEL_14:
  if ( m_nCount <= 0 )
  {
LABEL_26:
    v15 = &CEntityKeyValues::sm_EmptyVariant;
    v16 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v16 != 0 )
      goto LABEL_25;
    return;
  }
  v11 = pKeyValues->m_keyHashes.m_nAllocated;
  v12 = 0;
  while ( v11 == 0 )
  {
    if ( *(4 * v12) == 522802255 )
      goto LABEL_22;
LABEL_19:
    if ( m_nCount <= ++v12 )
      goto LABEL_26;
  }
  v13 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v11 > 9 )
    v13 = pKeyValues->m_keyHashes.m_pElements;
  if ( v13[v12] != 522802255 )
    goto LABEL_19;
LABEL_22:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v14 = pKeyValues->m_keyValues.m_pElements;
  else
    v14 = 0;
  v15 = &v14[v12].m_value;
  v16 = v15->m_type;
  if ( v16 != 0 )
  {
LABEL_25:
    switch ( v16 )
    {
      case 1:
        LODWORD(m_uint64) = v15->m_float;
        goto LABEL_65;
      case 5:
        LODWORD(m_uint64) = v15->m_int;
        goto LABEL_65;
      case 6:
        LODWORD(m_uint64) = v15->m_char;
        goto LABEL_66;
      case 26:
        if ( v15->m_int64 > 0x7FFFFFFF )
        {
          LODWORD(m_uint64) = 0x7FFFFFFF;
        }
        else
        {
          LODWORD(m_uint64) = 0x80000000;
          if ( v15->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = v15->m_uint64;
LABEL_65:
          if ( (m_uint64 & 0x80000000) != 0LL )
            return;
        }
LABEL_66:
        CProtoItemHeroStatue::CProtoItemHeroStatue(&v50);
        if ( !CDOTA_BaseNPC_Effigy_Statue::GetHeroItemStatue(this, m_uint64, &v50)
          || (v29 = iHeroID, v30 = DOTAGameManager(), (pKVHero = CDOTAGameManager::GetHeroDataByHeroID(v30, v29)) == 0) )
        {
          CProtoItemHeroStatue::~CProtoItemHeroStatue(&v50);
          return;
        }
        CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName(this, &v50, &kv_0, 260);
        CBaseModelEntity::SetModel(this, &kv_0);
        CBaseEntity::GetModelName(&itemView, this);
        this->m_iszOriginalModel.u.m_Id = itemView._vptr_IEconItemInterface;
        v31.m_Data = CBaseAnimating::LookupSequence(this, *v53).m_Data;
        CBaseAnimating::SetSequence(this, v31, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
        CBaseAnimating::SetCycle(this, COERCE_DOUBLE(LODWORD(fCycle)), v32);
        BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
        (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 0.0);
        CBaseAnimating::GetBonePosition(this, 0, &vRootBone, &angRootBone);
        CBaseEntity::GetAbsOrigin(this);
        CBaseEntity::GetAbsOrigin(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v35 = (AbsOrigin->x + 0.0) + 0.0;
        v36 = (AbsOrigin->z + 25.0) + 0.0;
        *(&itemView._vptr_IEconItemInterface + 1) = (AbsOrigin->y + 0.0) + 0.0;
        *&itemView._vptr_IEconItemInterface = v35;
        *&itemView.m_iItemDefinitionIndex.m_Value.m_Data = v36;
        CBaseEntity::SetAbsOrigin(this, &itemView);
        CDOTA_BaseNPC_Building::SetHeroStatue(this, *v53, fCycle, 0x43870000u, iStatusEffectIndex, *v56);
        v37 = *(this->_vptr_IHandleEntity + 222);
        Float = KeyValues::GetFloat(pKVHero, "ModelScale", v38);
        v37(this, Float);
        if ( this->m_iHeroStatueOwnerPlayerID.m_Value != m_uint64 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4580, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iHeroStatueOwnerPlayerID.m_Value = m_uint64;
        }
        KeyValues::KeyValues(&kv, "modifier_hero_statue");
        KeyValues::SetInt(&kv, "status_effect_index", iStatusEffectIndex);
        CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_hero_statue", &kv, 0);
        for ( j = 0; j != 16; ++j )
        {
          if ( v55 <= j )
            break;
          if ( *(v54 + 4 * j) != 0 )
          {
            CEconItemView::CEconItemView(&itemView);
            CEconItemView::Init(&itemView, *(v54 + 4 * j), 9999, 9999, 0, 0, *(v58 + 4 * j));
            AbsAngles = CBaseEntity::GetAbsAngles(this);
            pKVHeroa = CBaseEntity::GetAbsOrigin(this);
            v42 = ItemGeneration();
            v43 = CItemGeneration::GenerateItemFromScriptData(v42, &itemView, pKVHeroa, AbsAngles, 0, 0, 0xFFFFFFFF);
            v44 = v43;
            if ( v43 != 0 )
            {
              (*(v43->_vptr_IHandleEntity + 262))(v43, this);
              CBaseEntity::SetTransmitState(v44, 4);
            }
            CEconItemView::~CEconItemView(&itemView);
          }
        }
        KeyValues::~KeyValues(&kv);
        CProtoItemHeroStatue::~CProtoItemHeroStatue(&v50);
        break;
      case 30:
        LODWORD(m_uint64) = strtol(v15->m_pszString, 0, 10);
        goto LABEL_65;
      case 33:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( v15->m_uint64 <= 0x7FFFFFFE )
          LODWORD(m_uint64) = v15->m_uint64;
        goto LABEL_66;
      case 34:
        LODWORD(m_uint64) = v15->m_float64;
        goto LABEL_65;
      case 37:
        LODWORD(m_uint64) = 0x7FFFFFFF;
        if ( v15->m_int <= 0x7FFFFFFEu )
          LODWORD(m_uint64) = v15->m_int;
        goto LABEL_66;
      default:
        v45 = VariantFieldTypeName(v16);
        Warning("No conversion from %s to int now\n", v45);
        return;
    }
LABEL_31:
    v18 = pKeyValues->m_keyHashes.m_nCount;
    if ( v18 > 0 )
    {
      v19 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( k = 0; v18 > k; ++k )
      {
        if ( v19 != 0 )
        {
          v21 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v19 > 9 )
            v21 = pKeyValues->m_keyHashes.m_pElements;
          if ( v21[k] == 617813505 )
          {
LABEL_39:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v22 = pKeyValues->m_keyValues.m_pElements;
            else
              v22 = 0;
            v23 = &v22[k].m_value;
            goto LABEL_44;
          }
        }
        else if ( *(4 * k) == 617813505 )
        {
          goto LABEL_39;
        }
      }
    }
    v23 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_44:
    v50.m_Index = -1;
    v24 = v23->m_type;
    switch ( v24 )
    {
      case 13:
        v50.m_Index = v23->m_int;
        break;
      case 30:
        CEntitySystem::FindFirstEntityHandleByName(g_pEntitySystem, v23->m_pszString);
        v50.m_Index = itemView._vptr_IEconItemInterface;
        break;
      case 0:
LABEL_100:
        break;
      default:
        v25 = VariantFieldTypeName(v24);
        Warning("No free conversion of %s variant to CHandle<T> right now\n", v25);
        goto LABEL_100;
    }
    v26 = CEntityHandle::operator CEntityInstance *(&v50);
    if ( v26 != 0 )
      UTIL_Remove(v26);
  }
}


// CDOTA_BaseNPC_Effigy_Statue::Event_Killed  (line 1347, @0x0000000002963c60, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC_Building::Event_Killed, IncrementCommunityGoal
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Effigy_Statue::Event_Killed(
        CDOTA_BaseNPC_Effigy_Statue *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v8; // eax

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1
    && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F]) != 0
    && (v6 = &v5[info->m_hAttacker.m_Index & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    v8 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
    IncrementCommunityGoal(
      EEvent::EVENT_ID_INTERNATIONAL_2016,
      EEventCommunityGoals_t::ECG_TI6_EffigiesDestroyed,
      1u,
      v8);
    CDOTA_BaseNPC_Building::Event_Killed(this, info);
  }
  else
  {
    CDOTA_BaseNPC_Building::Event_Killed(this, info);
  }
}


// CDOTA_BaseNPC_Effigy_BattleCup::YouForgotToImplementOrDeclareServerClass  (line 1358, @0x00000000028f53e0, libserver.so)
int __fastcall CDOTA_BaseNPC_Effigy_BattleCup::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_Effigy_BattleCup *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Effigy_BattleCup::GetServerClass  (line 1358, @0x0000000002900990, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Effigy_BattleCup::GetServerClass(CDOTA_BaseNPC_Effigy_BattleCup *const this)
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


// CDOTA_BaseNPC_Effigy_BattleCup::Precache  (line 1361, @0x000000000294bae0, libserver.so)
// calls: CDOTA_BaseNPC_Building::Precache
// strings: "models/ui/battle_cup_trophy/battle_cup_fall_trophy.vmdl", "particles/econ/events/battlecup/battlecup_fall_ambient.vpcf", "particles/econ/events/battlecup/battle_cup_fall_destroy.vpcf"
void __fastcall CDOTA_BaseNPC_Effigy_BattleCup::Precache(
        CDOTA_BaseNPC_Effigy_BattleCup *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Building::Precache(this, pContext);
  (**pContext->m_pManifest)(pContext->m_pManifest, "models/ui/battle_cup_trophy/battle_cup_fall_trophy.vmdl");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/econ/events/battlecup/battlecup_fall_ambient.vpcf");
  (**pContext->m_pManifest)(pContext->m_pManifest, "particles/econ/events/battlecup/battle_cup_fall_destroy.vpcf");
}


// CDOTA_BaseNPC_Effigy_BattleCup::Spawn  (line 1370, @0x0000000002953130, libserver.so)  // inlines: AssignTo, AssignTo<CBaseEntity>, Base, CEntityHandle, CHandle, Element, EmptyValue<CHandle<CBaseEntity> >, FindKeyHash, Get, Get<CHandle<CBaseEntity> >, GetInstance, GetValue, GetValue<CHandle<CBaseEntity> >, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, SetHeroStatueOwner, atoi, operator CBaseEntity*, operator=, operator=<int>, operator[]
// calls: CDOTA_BaseNPC_Building::Spawn, CBaseModelEntity::SetModel, CBaseEntity::GetModelName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC_Building::OverrideDestructionEffect, strtol, VariantFieldTypeName, Warning, CEntityHandle::operator CEntityInstance*, UTIL_Remove, KeyValues::~KeyValues (15 total)
// strings: "models/ui/battle_cup_trophy/battle_cup_fall_trophy.vmdl", "modifier_battle_cup_effigy", "particles/econ/events/battlecup/battle_cup_fall_destroy.vpcf", "No conversion from %s to int now\n", "No free conversion of %s variant to CHandle<T> right now\n"
// globals: jpt_29531EB, CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_BaseNPC_Effigy_BattleCup::Spawn(
        CDOTA_BaseNPC_Effigy_BattleCup *const this,
        const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  uint64 m_uint64; // r13
  int v12; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  CEntityVariant *v17; // rdx
  const char *v18; // rax
  int16 v19; // ax
  const char *v20; // rax
  CEntityInstance *v21; // rax
  CEntityHandle v22; // [rsp+0h] [rbp-60h] BYREF
  UtlSymLargeId_t v23[2]; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-28h]

  v25 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Building::Spawn(this, pKeyValues);
  if ( !this->m_bBattleCup.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4545, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bBattleCup.m_Value = 1;
  }
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_15:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_14;
  }
  else
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    v6 = 0;
    while ( m_nAllocated == 0 )
    {
      if ( *(4 * v6) == 522802255 )
        goto LABEL_11;
LABEL_8:
      if ( m_nCount <= ++v6 )
        goto LABEL_15;
    }
    m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      m_pElements = pKeyValues->m_keyHashes.m_pElements;
    if ( m_pElements[v6] != 522802255 )
      goto LABEL_8;
LABEL_11:
    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
      v8 = pKeyValues->m_keyValues.m_pElements;
    else
      v8 = 0;
    p_m_value = &v8[v6].m_value;
    m_type = p_m_value->m_type;
    if ( m_type != 0 )
    {
LABEL_14:
      switch ( m_type )
      {
        case 1:
          LODWORD(m_uint64) = p_m_value->m_float;
          goto LABEL_18;
        case 5:
          LODWORD(m_uint64) = p_m_value->m_int;
          goto LABEL_18;
        case 6:
          LODWORD(m_uint64) = p_m_value->m_char;
          goto LABEL_19;
        case 26:
          if ( p_m_value->m_int64 > 0x7FFFFFFF )
          {
            LODWORD(m_uint64) = 0x7FFFFFFF;
            goto LABEL_19;
          }
          LODWORD(m_uint64) = 0x80000000;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = p_m_value->m_uint64;
LABEL_18:
          if ( (m_uint64 & 0x80000000) == 0LL )
          {
LABEL_19:
            if ( this->m_iHeroStatueOwnerPlayerID.m_Value != m_uint64 )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 4580, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_iHeroStatueOwnerPlayerID.m_Value = m_uint64;
            }
            CBaseModelEntity::SetModel(this, "models/ui/battle_cup_trophy/battle_cup_fall_trophy.vmdl");
            CBaseEntity::GetModelName(v23, this);
            this->m_iszOriginalModel.u.m_Id = v23[0];
            KeyValues::KeyValues(&kv, "modifier_battle_cup_effigy");
            CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_battle_cup_effigy", &kv, 0);
            CDOTA_BaseNPC_Building::OverrideDestructionEffect(
              this,
              "particles/econ/events/battlecup/battle_cup_fall_destroy.vpcf");
            v12 = pKeyValues->m_keyHashes.m_nCount;
            if ( v12 > 0 )
            {
              v13 = pKeyValues->m_keyHashes.m_nAllocated;
              for ( i = 0; v12 > i; ++i )
              {
                if ( v13 != 0 )
                {
                  v15 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
                  if ( v13 > 9 )
                    v15 = pKeyValues->m_keyHashes.m_pElements;
                  if ( v15[i] == 617813505 )
                  {
LABEL_29:
                    if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
                      v16 = pKeyValues->m_keyValues.m_pElements;
                    else
                      v16 = 0;
                    v17 = &v16[i].m_value;
                    goto LABEL_48;
                  }
                }
                else if ( *(4 * i) == 617813505 )
                {
                  goto LABEL_29;
                }
              }
            }
            v17 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_48:
            v19 = v17->m_type;
            v22.m_Index = -1;
            switch ( v19 )
            {
              case 13:
                v22.m_Index = v17->m_int;
                break;
              case 30:
                CEntitySystem::FindFirstEntityHandleByName(g_pEntitySystem, v17->m_pszString);
                v22.m_Index = v23[0];
                break;
              case 0:
LABEL_62:
                break;
              default:
                v20 = VariantFieldTypeName(v19);
                Warning("No free conversion of %s variant to CHandle<T> right now\n", v20);
                goto LABEL_62;
            }
            v21 = CEntityHandle::operator CEntityInstance *(&v22);
            if ( v21 != 0 )
              UTIL_Remove(v21);
            KeyValues::~KeyValues(&kv);
            return;
          }
          break;
        case 30:
          LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
          goto LABEL_18;
        case 33:
          LODWORD(m_uint64) = 0x7FFFFFFF;
          if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
            LODWORD(m_uint64) = p_m_value->m_uint64;
          goto LABEL_19;
        case 34:
          LODWORD(m_uint64) = p_m_value->m_float64;
          goto LABEL_18;
        case 37:
          LODWORD(m_uint64) = 0x7FFFFFFF;
          if ( p_m_value->m_int <= 0x7FFFFFFEu )
            LODWORD(m_uint64) = p_m_value->m_int;
          goto LABEL_19;
        default:
          v18 = VariantFieldTypeName(m_type);
          Warning("No conversion from %s to int now\n", v18);
          return;
      }
    }
  }
}


// CDOTA_BaseNPC_Healer::OnTakeDamage_Alive  (line 1397, @0x0000000002957820, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC_Building::OnTakeDamage_Alive, CEntityInstance::GetEntityIndex, CreateUnitEvent
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC_Healer::OnTakeDamage_Alive(
        CDOTA_BaseNPC_Healer *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityIndex v8; // eax

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  v6 = &v5[info->m_hAttacker.m_Index & 0x1FF];
  if ( v6 == 0 || m_Index != v6->m_EHandle.m_Index || v6->m_pInstance == 0 )
    return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
  v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CreateUnitEvent(v8, 0, 9, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_BARRACKS_UNDER_ATTACK);
  return CDOTA_BaseNPC_Building::OnTakeDamage_Alive(this, info);
}


