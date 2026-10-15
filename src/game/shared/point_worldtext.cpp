// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_worldtext.cpp:123
class C_CPointWorldText_MapInstall {
	C_CPointWorldText_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointWorldText::GetDataDescMap  (line 98, @0x000000000231ece0, libserver.so)
// globals: CPointWorldText::m_DataMap
datamap_t *__fastcall CPointWorldText::GetDataDescMap(CPointWorldText *const this)
{
  return &CPointWorldText::m_DataMap;
}


// CPointWorldText::AddDatadescMetadataKeys  (line 98, @0x000000000232bef0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointWorldText::GetEntityClass(void)
void __fastcall CPointWorldText::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointWorldText::GetEntityClass);
}


// CPointWorldText::GetBaseMap  (line 98, @0x000000000232bf10, libserver.so)
datamap_t *__cdecl CPointWorldText::GetBaseMap()
{
  return &CModelPointEntity::m_DataMap;
}


// DataMapInit<CPointWorldText>  (line 98, @0x000000000232bf20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointWorldText"
// globals: `guard variable for'DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder, CPointWorldText::GetEntityClass(void), CPointWorldText::m_DataMap, DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointWorldText>(CPointWorldText *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder) != 0 )
  {
    DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder.m_pszBase = "CPointWorldText";
    DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointWorldText>(CPointWorldText *)::nameHolder,
      &_dso_handle);
  }
  CPointWorldText::m_DataMap.dataNumFields = 16;
  CPointWorldText::m_DataMap.baseMap = &CModelPointEntity::m_DataMap;
  CPointWorldText::m_DataMap.dataDesc = &DataMapInit<CPointWorldText>(CPointWorldText *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointWorldText::m_DataMap, CPointWorldText::GetEntityClass);
  return &CPointWorldText::m_DataMap;
}


// CPointWorldText::YouForgotToImplementOrDeclareServerClass  (line 123, @0x000000000231ecf0, libserver.so)
int __fastcall CPointWorldText::YouForgotToImplementOrDeclareServerClass(CPointWorldText *const this)
{
  return 0;
}


// CPointWorldText::GetServerClass  (line 123, @0x0000000002324150, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointWorldText::GetServerClass(CPointWorldText *const this)
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


// CPointWorldText::CPointWorldText  (line 128, @0x000000000232bff0, libserver.so)  // inlines: CModelPointEntity, CNetworkVarBase, Color, EnsureValidValue<PointWorldTextJustifyHorizontal_t>, EnsureValidValue<PointWorldTextJustifyVertical_t>, EnsureValidValue<PointWorldTextReorientMode_t>, EnsureValidValue<bool>, EnsureValidValue<float>, NetworkStateChanged, Set, operator=<float>, ~CModelPointEntity
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CPointWorldText::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointWorldText::CPointWorldText(CPointWorldText *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_4090D70;
  this->m_bEnabled.m_Value = 0;
  this->m_bFullbright.m_Value = 0;
  this->m_flWorldUnitsPerPx.m_Value = 0.0;
  this->m_flFontSize.m_Value = 0.0;
  this->m_flDepthOffset.m_Value = 0.0;
  this->m_Color = 0;
  this->m_nJustifyHorizontal.m_Value = PointWorldTextJustifyHorizontal_t::POINT_WORLD_TEXT_JUSTIFY_HORIZONTAL_LEFT;
  this->m_nJustifyVertical.m_Value = PointWorldTextJustifyVertical_t::POINT_WORLD_TEXT_JUSTIFY_VERTICAL_BOTTOM;
  this->m_nReorientMode.m_Value = PointWorldTextReorientMode_t::POINT_WORLD_TEXT_REORIENT_NONE;
  CBaseEntity::NetworkStateChanged(this, 0x6CCu, -1, -1);
  this->m_flDepthOffset.m_Value = 0.125;
}


// CPointWorldText::Spawn  (line 141, @0x000000000231f0e0, libserver.so)
// calls: CModelPointEntity::Spawn
void __fastcall CPointWorldText::Spawn(CPointWorldText *const this, const CEntityKeyValues *pKeyValues)
{
  CModelPointEntity::Spawn(this, pKeyValues);
}


// CPointWorldText::SetEnabled  (line 146, @0x000000000232c0b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CPointWorldText::InputToggle, CPointWorldText::InputEnable, CPointWorldText::InputDisable
void __fastcall CPointWorldText::SetEnabled(CPointWorldText *const this, bool bEnabled)
{
  if ( this->m_bEnabled.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1728, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = bEnabled;
  }
}


// CPointWorldText::InputToggle  (line 153, @0x000000000232c0f0, libserver.so)
// calls: CPointWorldText::SetEnabled
void __fastcall CPointWorldText::InputToggle(CPointWorldText *const this, inputdata_t *const inputdata)
{
  CPointWorldText::SetEnabled(this, !this->m_bEnabled.m_Value);
}


// CPointWorldText::InputEnable  (line 161, @0x000000000232c110, libserver.so)
// calls: CPointWorldText::SetEnabled
void __fastcall CPointWorldText::InputEnable(CPointWorldText *const this, inputdata_t *const inputdata)
{
  CPointWorldText::SetEnabled(this, 1);
}


// CPointWorldText::InputDisable  (line 169, @0x000000000232c120, libserver.so)
// calls: CPointWorldText::SetEnabled
void __fastcall CPointWorldText::InputDisable(CPointWorldText *const this, inputdata_t *const inputdata)
{
  CPointWorldText::SetEnabled(this, 0);
}


// CPointWorldText::InputSetMessage  (line 177, @0x0000000002322260, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, SetMessage, TempString, ToString, V_strcpy_safe<512ul>
// calls: _V_strncpy, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2322291, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPointWorldText::InputSetMessage(CPointWorldText *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  const char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  _V_strncpy(&this->m_messageText, m_pszString, 512);
  (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CPointWorldText::InputSetIntMessage  (line 185, @0x000000000231f1e0, libserver.so)  // inlines: CUtlString, Int, NetworkStateChanged, Set, SetMessage, V_strcpy_safe<512ul>, operator int, ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, _V_strncpy, CUtlString::FreeMemoryBlock, _Unwind_Resume
void __fastcall CPointWorldText::InputSetIntMessage(CPointWorldText *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float; // edx
  const char *v5; // rax
  CUtlString strInt; // [rsp+0h] [rbp-20h] BYREF

  strInt.m_pString = 0;
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  CUtlString::Format(&strInt, "%d", m_float);
  v5 = CUtlString::Get(&strInt);
  _V_strncpy(&this->m_messageText, v5, 512);
  (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( strInt.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&strInt);
}


// CPointWorldText::SetMessage  (line 195, @0x0000000002320030, libserver.so)  // inlines: NetworkStateChanged, Set, V_strcpy_safe<512ul>
// calls: _V_strncpy
void __fastcall CPointWorldText::SetMessage(CPointWorldText *const this, const char *pMessage)
{
  _V_strncpy(&this->m_messageText, pMessage, 512);
  (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CPointWorldText::SetColor  (line 200, @0x000000000232c130, libserver.so)  // inlines: NetworkStateChanged, Set, SetRawColor, operator=, operator=<Color>
void __fastcall CPointWorldText::SetColor(CPointWorldText *const this, Color rgbaColor)
{
  if ( rgbaColor != *&this->m_Color )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1744, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Color.m_Value = rgbaColor;
  }
}


// CPointWorldText::UpdateTransmitState  (line 207, @0x000000000231ee60, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPointWorldText::UpdateTransmitState(CPointWorldText *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


