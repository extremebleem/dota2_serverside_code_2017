// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/fish_shared.cpp:54
class CFishPos0 : public CFishPos<0> {
public:

	// sizeof = 1
};

// src/game/shared/fish_shared.cpp:58
class CFishPos1 : public CFishPos<1> {
public:

	// sizeof = 1
};

// src/game/shared/fish_shared.cpp:62
class CFishPos2 : public CFishPos<2> {
public:

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFishPos<2>::Serialize  (line 14, @0x0000000002211830, libserver.so)  // inlines: Set<float>, operator[]
NetworkFieldResult_t __fastcall CFishPos<2>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  float v3; // xmm0_4

  v3 = *info->m_pFieldData - *(info->m_pStructBase + 319);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 1;
  pOut->m_flVal32[0] = v3;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CFishPos<1>::Serialize  (line 14, @0x0000000002211870, libserver.so)  // inlines: Set<float>, operator[]
NetworkFieldResult_t __fastcall CFishPos<1>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  float v3; // xmm0_4

  v3 = *info->m_pFieldData - *(info->m_pStructBase + 318);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 1;
  pOut->m_flVal32[0] = v3;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CFishPos<0>::Serialize  (line 14, @0x00000000022118b0, libserver.so)  // inlines: Set<float>, operator[]
NetworkFieldResult_t __fastcall CFishPos<0>::Serialize(
        const NetworkSerializerInfo_t *const info,
        int iElement,
        NetworkableData_t *pOut)
{
  float v3; // xmm0_4

  v3 = *info->m_pFieldData - *(info->m_pStructBase + 317);
  pOut->m_nType = NetworkableDataType_t::NET_DATA_TYPE_FLOAT32;
  pOut->m_nNumComponents = 1;
  pOut->m_flVal32[0] = v3;
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CFishPos<2>::Unserialize  (line 27, @0x00000000022118f0, libserver.so)  // inlines: operator[]
NetworkFieldResult_t __fastcall CFishPos<2>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  *info->m_pFieldData = *(info->m_pStructBase + 319);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CFishPos<1>::Unserialize  (line 27, @0x0000000002211950, libserver.so)  // inlines: operator[]
NetworkFieldResult_t __fastcall CFishPos<1>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  *info->m_pFieldData = *(info->m_pStructBase + 318);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CFishPos<0>::Unserialize  (line 27, @0x00000000022119b0, libserver.so)  // inlines: operator[]
NetworkFieldResult_t __fastcall CFishPos<0>::Unserialize(
        const NetworkUnserializerInfo_t *const info,
        int iElement,
        const NetworkableData_t *pIn)
{
  *info->m_pFieldData = *(info->m_pStructBase + 317);
  return NetworkFieldResult_t::NET_FIELD_OK;
}


// CFishPos<0>::GetEntityReportDescString  (line 43, @0x000000000220ed10, libserver.so)
bool __fastcall CFishPos<0>::GetEntityReportDescString(const NetworkableData_t *pData, CUtlString *const desc)
{
  return 0;
}


// CFishPos<1>::GetEntityReportDescString  (line 43, @0x000000000220ed30, libserver.so)
bool __fastcall CFishPos<1>::GetEntityReportDescString(const NetworkableData_t *pData, CUtlString *const desc)
{
  return 0;
}


// CFishPos<2>::GetEntityReportDescString  (line 43, @0x000000000220ed50, libserver.so)
bool __fastcall CFishPos<2>::GetEntityReportDescString(const NetworkableData_t *pData, CUtlString *const desc)
{
  return 0;
}


// CFishPos<0>::GetSerializerName  (line 48, @0x000000000220ed20, libserver.so)
// strings: "fish_pos"
const char *__cdecl CFishPos<0>::GetSerializerName()
{
  return "fish_pos";
}


// CFishPos<1>::GetSerializerName  (line 48, @0x000000000220ed40, libserver.so)
// strings: "fish_pos"
const char *__cdecl CFishPos<1>::GetSerializerName()
{
  return "fish_pos";
}


// CFishPos<2>::GetSerializerName  (line 48, @0x000000000220ed60, libserver.so)
// strings: "fish_pos"
const char *__cdecl CFishPos<2>::GetSerializerName()
{
  return "fish_pos";
}


// InitCFishPos0FieldSerializer  (line 66, @0x00000000021ee970, libserver.so)
// strings: "fish_pos_x"
// globals: CValidatingNetworkFieldSerializer<CFishPos0>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CFishPos<0>::GetSerializerName(void), CFishPos<0>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CFishPos<0>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,1>::GetDataSize(NetworkFieldInfo_t const&), CFishPos<0>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCFishPos0FieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "fish_pos_x",
    mode,
    3,
    1,
    CFishPos<0>::Serialize,
    CFishPos<0>::Unserialize,
    CGameNetworkFieldSerializerBase<3,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,1>::ParseData,
    CFishPos<0>::GetEntityReportDescString,
    CFishPos<0>::GetSerializerName,
    CFishPos<0>::Serialize,
    CValidatingNetworkFieldSerializer<CFishPos0>::ValidatingUnserialize);
}


// InitCFishPos1FieldSerializer  (line 67, @0x00000000021eea00, libserver.so)
// strings: "fish_pos_y"
// globals: CValidatingNetworkFieldSerializer<CFishPos1>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CFishPos<1>::GetSerializerName(void), CFishPos<1>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CFishPos<1>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,1>::GetDataSize(NetworkFieldInfo_t const&), CFishPos<1>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCFishPos1FieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "fish_pos_y",
    mode,
    3,
    1,
    CFishPos<1>::Serialize,
    CFishPos<1>::Unserialize,
    CGameNetworkFieldSerializerBase<3,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,1>::ParseData,
    CFishPos<1>::GetEntityReportDescString,
    CFishPos<1>::GetSerializerName,
    CFishPos<1>::Serialize,
    CValidatingNetworkFieldSerializer<CFishPos1>::ValidatingUnserialize);
}


// InitCFishPos2FieldSerializer  (line 68, @0x00000000021eea90, libserver.so)
// strings: "fish_pos_z"
// globals: CValidatingNetworkFieldSerializer<CFishPos2>::ValidatingUnserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*), CFishPos<2>::GetSerializerName(void), CFishPos<2>::Serialize(NetworkSerializerInfo_t const&,int,NetworkableData_t *), CFishPos<2>::GetEntityReportDescString(NetworkableData_t const*,CUtlString &), CGameNetworkFieldSerializerBase<3,1>::ParseData(FieldMetaInfo_t const&,CSchemaClassBindingBase const*,NetworkFieldInfo_t const&,void *), CGameNetworkFieldSerializerBase<3,1>::GetDataSize(NetworkFieldInfo_t const&), CFishPos<2>::Unserialize(NetworkUnserializerInfo_t const&,int,NetworkableData_t const*)
void __fastcall InitCFishPos2FieldSerializer(NetworkSerializationMode_t mode)
{
  (*(*g_pNetworkMessages + 80LL))(
    g_pNetworkMessages,
    "fish_pos_z",
    mode,
    3,
    1,
    CFishPos<2>::Serialize,
    CFishPos<2>::Unserialize,
    CGameNetworkFieldSerializerBase<3,1>::GetDataSize,
    CGameNetworkFieldSerializerBase<3,1>::ParseData,
    CFishPos<2>::GetEntityReportDescString,
    CFishPos<2>::GetSerializerName,
    CFishPos<2>::Serialize,
    CValidatingNetworkFieldSerializer<CFishPos2>::ValidatingUnserialize);
}


