
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_memoverride.cpp  (line 0, @0x0000000001a66f40, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_memoverride_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GetNameOfModule  (line 59, @0x0000000002f694d0, libserver.so)
// callers: CSchemaRegistration_server::RegisterAllBindings, CDevtestHierarchy::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CSchemaUtlVectorManipulator<CUtlVector<CUtlSymbolLarge, CNetworkUtlVector_MemoryType<CUtlSymbolLarge, -1> >, CUtlSymbolLarge>::CollectionOfType, CRenderComponent::Connect, CSchemaUtlVectorManipulator<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, CHandle<CLightEntity> >::CollectionOfType, SchemaTypeOf<char*>, InitDataDescSchema, CSchemaUtlVectorManipulator<CUtlVector<CHandle<CInfoLadderDismount>, CUtlMemory<CHandle<CInfoLadderDismount>, int> >, CHandle<CInfoLadderDismount> >::CollectionOfType, CSchemaUtlVectorManipulator<CUtlVector<CFuncLadder*, CUtlMemory<CFuncLadder*, int> >, CFuncLadder*>::CollectionOfType, CSchemaUtlVectorManipulator<CUtlVector<CHintMessage*, CUtlMemory<CHintMessage*, int> >, CHintMessage*>::CollectionOfType, CSchemaUtlVectorManipulator<CUtlVector<char*, CUtlMemory<char*, int> >, char*>::CollectionOfType, CSchemaUtlVectorManipulator<CUtlVector<CAnimationLayer, CUtlMemory<CAnimationLayer, int> >, CAnimationLayer>::CollectionOfType (184 total)
// strings: "libserver.so"
const char *__cdecl GetNameOfModule()
{
  return "libserver.so";
}


// operator new  (line 411, @0x0000000002f694e0, libserver.so)
// calls: EarlyInit_Tier0
// callers: std::vector<int, std::allocator<int> >::reserve, std::vector<int, std::allocator<int> >::_M_emplace_back_aux<int const&>, CMsgVector::New, CMsgVector2D::New, CMsgQAngle::New, CNETMsg_SpawnGroup_Load::MergePartialFromCodedStream, CMsgPlayerInfo::SharedCtor, CMsgPlayerInfo::New, CMsg_CVars_CVar::SharedCtor, CMsg_CVars_CVar::New, CMsg_CVars::MergePartialFromCodedStream, CMsg_CVars::New (6464 total)
void *__fastcall operator new(size_t nSize)
{
  if ( g_pMemAlloc != 0 )
    return (**g_pMemAlloc)(g_pMemAlloc, nSize);
  EarlyInit_Tier0();
  return (**g_pMemAlloc)(g_pMemAlloc, nSize);
}


// operator new  (line 426, @0x0000000002f69530, libserver.so)
void *__fastcall operator new(size_t nSize, int nBlockUse, const char *pFileName, int nLine)
{
  return (**g_pMemAlloc)(g_pMemAlloc, nSize, pFileName, nLine);
}


// operator delete  (line 434, @0x0000000002f69550, libserver.so)
// callers: std::vector<int, std::allocator<int> >::reserve, std::vector<int, std::allocator<int> >::_M_emplace_back_aux<int const&>, ProtoBufHelper::GenerateMessageChangeString, CMsgVector::~CMsgVector, CMsgVector2D::~CMsgVector2D, CMsgQAngle::~CMsgQAngle, CNETMsg_NOP::~CNETMsg_NOP, CNETMsg_SplitScreenUser::~CNETMsg_SplitScreenUser, CNETMsg_Disconnect::~CNETMsg_Disconnect, CNETMsg_Tick::~CNETMsg_Tick, CNETMsg_SetConVar::~CNETMsg_SetConVar, CSVCMsgList_GameEvents_event_t::~CSVCMsgList_GameEvents_event_t (12236 total)
void __fastcall operator delete(void *pMem)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMem);
}


// operator new []  (line 452, @0x0000000002f69570, libserver.so)
// calls: EarlyInit_Tier0
// callers: google::protobuf::RepeatedField<int>::Reserve, google::protobuf::RepeatedField<unsigned int>::Reserve, google::protobuf::RepeatedField<long unsigned int>::Reserve, google::protobuf::RepeatedField<float>::Reserve, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Setup, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetInterpolationTimeType, CRenderComponent::CRenderComponent, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString, ent_text_filter, DataMapInit<CFogController>, DataMapInit<CMultiLightProxy>, InitDataDescSchema (240 total)
void *__fastcall operator new[](size_t nSize)
{
  if ( g_pMemAlloc != 0 )
    return (**g_pMemAlloc)(g_pMemAlloc, nSize);
  EarlyInit_Tier0();
  return (**g_pMemAlloc)(g_pMemAlloc, nSize);
}


// operator new []  (line 467, @0x0000000002f695c0, libserver.so)
void *__fastcall operator new[](size_t nSize, int nBlockUse, const char *pFileName, int nLine)
{
  return (**g_pMemAlloc)(g_pMemAlloc, nSize, pFileName, nLine);
}


// operator delete []  (line 475, @0x0000000002f695e0, libserver.so)
// callers: ProtoBufHelper::ConvertProtoBufToJSON, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, CCLCMsg_ListenEvents::~CCLCMsg_ListenEvents, ProtoFlattenedSerializer_t::~ProtoFlattenedSerializer_t, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_ClassInfo_class_t>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_Sounds_sounddata_t>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_SendTable_sendprop_t>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEventList_key_t>::TypeHandler> (603 total)
void __fastcall operator delete[](void *pMem)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMem);
}


// _nh_malloc_dbg  (line 542, @0x0000000002f69600, libserver.so)
void *__fastcall nh_malloc_dbg(size_t nSize, int nFlag, int nBlockUse, const char *pFileName, int nLine)
{
  return (**g_pMemAlloc)(g_pMemAlloc, nSize, nBlockUse, pFileName, nLine);
}


// _malloc_dbg  (line 549, @0x0000000002f69620, libserver.so)
void *__fastcall malloc_dbg(size_t nSize, int nBlockUse, const char *pFileName, int nLine)
{
  return (**g_pMemAlloc)(g_pMemAlloc, nSize, pFileName, nLine);
}


// _calloc_dbg  (line 568, @0x0000000002f69640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall calloc_dbg(size_t nNum, size_t nSize, int nBlockUse, const char *pFileName, int nLine)
{
  size_t v5; // rbx
  void *v6; // r12

  v5 = nNum * nSize;
  v6 = (**g_pMemAlloc)(g_pMemAlloc, nNum * nSize, *g_pMemAlloc, pFileName, nLine);
  memset(v6, 0, v5);
  return v6;
}


// _realloc_dbg  (line 577, @0x0000000002f69680, libserver.so)
void *__fastcall realloc_dbg(void *pMem, size_t nNewSize, int nBlockUse, const char *pFileName, int nLine)
{
  return (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, pMem, nNewSize);
}


// _expand_dbg  (line 584, @0x0000000002f696b0, libserver.so)
void *__fastcall expand_dbg(void *pMem, size_t nNewSize, int nBlockUse, const char *pFileName, int nLine)
{
  return 0;
}


// _free_dbg  (line 591, @0x0000000002f696c0, libserver.so)  // inlines: FreeUnattributed
void __fastcall free_dbg(void *pMem, int nBlockUse)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMem);
}


// _msize_dbg  (line 597, @0x0000000002f696e0, libserver.so)
size_t __fastcall msize_dbg(void *pMem, int nBlockUse)
{
  return 0;
}


