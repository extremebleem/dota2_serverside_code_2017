// Reconstructed from DWARF by pahole; not original source.

// src/common/protobuf_helpers.cpp:23
class CProtobufLogHandler {
	CProtobufLogHandler();
	~CProtobufLogHandler();
	void LogHandler(LogLevel, const char *, int, const string &);

	// sizeof = 1
};

// src/common/protobuf_helpers.cpp:1793
struct JSONParserMessageField_t {
	const FieldDescriptor * pField;  // +0x8
	int nArrayIndex;  // +0x10

	// sizeof = 24
};

// src/common/protobuf_helpers.cpp:1800
struct ProtobufJSONParserContext_t {
	bool bIgnoredOutermostObject;  // +0x20
	ProtobufJSONParserContext_t();
	~ProtobufJSONParserContext_t();

	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_protobuf_helpers.cpp  (line 0, @0x000000000199b280, libserver.so)  // inlines: CProtobufLogHandler, Color, SetColor, __static_initialization_and_destruction_0
// calls: google::protobuf::SetLogHandler(void (*)(google::protobuf::LogLevel,char const*,int,std::string const&)), __cxa_atexit
// globals: CProtobufLogHandler::LogHandler(google::protobuf::LogLevel,char const*,int,std::string const&), UNSPECIFIED_LOGGING_COLOR, __dso_handle, g_ProtobufLogHandler, CProtobufLogHandler::~CProtobufLogHandler()
void __cdecl GLOBAL__sub_I_protobuf_helpers_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  google::protobuf::SetLogHandler(CProtobufLogHandler::LogHandler);
  __cxa_atexit(CProtobufLogHandler::~CProtobufLogHandler, &g_ProtobufLogHandler, &_dso_handle);
}


// CProtobufLogHandler::~CProtobufLogHandler  (line 32, @0x0000000001a748f0, libserver.so)
// calls: google::protobuf::SetLogHandler(void (*)(google::protobuf::LogLevel,char const*,int,std::string const&))
void __fastcall CProtobufLogHandler::~CProtobufLogHandler(CProtobufLogHandler *const this)
{
  google::protobuf::SetLogHandler(0);
}


// CProtobufLogHandler::LogHandler  (line 37, @0x0000000001a74900, libserver.so)  // inlines: LeafCodeInfo_t, _M_data, c_str
// calls: DevMsg(char const*,...), LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, Warning, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "Protobuf: %s(%d): %s\n", "../../common/protobuf_helpers.cpp", "LogHandler"
void __fastcall CProtobufLogHandler::LogHandler(
        google::protobuf::LogLevel level,
        const char *filename,
        int line,
        const std::string *const message)
{
  char IsChannelEnabled; // al
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  const std::string *v9; // rcx
  char *M_p; // rcx
  LeafCodeInfo_t v13; // [rsp+20h] [rbp-30h] BYREF

  if ( level == google::protobuf::LogLevel::LOGLEVEL_ERROR )
    goto LABEL_12;
  if ( level > google::protobuf::LogLevel::LOGLEVEL_ERROR )
  {
    if ( level != google::protobuf::LogLevel::LOGLEVEL_FATAL )
      return;
    IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4);
    v8 = line;
    v9 = message;
    if ( IsChannelEnabled != 0 )
    {
      M_p = message->_M_dataplus._M_p;
      v13.m_szFile = "../../common/protobuf_helpers.cpp";
      v13.m_szFunction = "LogHandler";
      v13.m_nLine = 51;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v13, "Protobuf: %s(%d): %s\n", filename, line, M_p);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v6, v7, v8, v9) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_12:
    Warning("Protobuf: %s(%d): %s\n", filename, line, message->_M_dataplus._M_p);
    return;
  }
  if ( level >= google::protobuf::LogLevel::LOGLEVEL_INFO )
    DevMsg("Protobuf: %s(%d): %s\n", filename, line, message->_M_dataplus._M_p);
}


// ProtoBufHelper::RecursiveAddProtoBufToKV  (line 481, @0x0000000001a6fc90, libserver.so)  // inlines: GetDescriptor, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, c_str, cpp_type, field, ~basic_string
// calls: KeyValues::FindKey, std::string::_Rep::_M_destroy(std::allocator<char> const&), KeyValues::SetInt, KeyValues::SetFloat, KeyValues::SetUint64, KeyValues::CreateNewKey, KeyValues::SetString, std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: ProtoBufHelper::CreateKVFromProtoBuf
// globals: jpt_1A6FD67, jpt_1A70020
void __fastcall ProtoBufHelper::RecursiveAddProtoBufToKV(
        KeyValues *pKVDest,
        const google::protobuf::Message *const msg,
        bool bKeyValuesUsedByPHP)
{
  __int64 v4; // r14
  __int64 v6; // r12
  __int64 v7; // rbx
  const char *v8; // r13
  __int64 v9; // rax
  KeyValues *Key; // r13
  const google::protobuf::Message *v11; // rax
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  unsigned __int8 v15; // al
  float v16; // xmm1_4
  float v17; // xmm1_4
  uint64 v18; // rax
  int v19; // eax
  int v20; // eax
  uint64 v21; // rax
  const char *v22; // rsi
  unsigned int v23; // r13d
  const google::protobuf::Message *v24; // rax
  char *v25; // rdi
  int v26; // eax
  __int64 v27; // rax
  unsigned __int8 v28; // al
  float v29; // xmm1_4
  float v30; // xmm1_4
  uint64 v31; // rax
  int v32; // eax
  int v33; // eax
  uint64 v34; // rax
  int v35; // edx
  int v36; // edx
  bool bKeyValuesUsedByPHPa; // [rsp+1Ch] [rbp-84h]
  KeyValues *pKVContainer; // [rsp+28h] [rbp-78h]
  const google::protobuf::Descriptor *pDescriptor; // [rsp+30h] [rbp-70h]
  KeyValues *pKVNode; // [rsp+38h] [rbp-68h]
  char v42; // [rsp+4Fh] [rbp-51h] BYREF
  char *value; // [rsp+50h] [rbp-50h] BYREF
  char *v44; // [rsp+60h] [rbp-40h] BYREF

  v4 = 0;
  pDescriptor = (*(*msg + 152LL))(msg);
  v6 = (*(*msg + 144LL))(msg);
  if ( pDescriptor->field_count_ > 0 )
  {
    bKeyValuesUsedByPHPa = bKeyValuesUsedByPHP;
    do
    {
      v7 = &pDescriptor->fields_[v4];
      v8 = **v7;
      v9 = *v6;
      if ( *(v7 + 48) == 3 )
      {
        if ( (*(v9 + 48))(v6, msg, v7) != 0 )
        {
          v22 = v8;
          v23 = 0;
          pKVContainer = KeyValues::FindKey(pKVDest, v22, 1);
          while ( v23 < (*(*v6 + 48LL))(v6, msg, v7) )
          {
            pKVNode = KeyValues::CreateNewKey(pKVContainer);
            switch ( *(v7 + 44) )
            {
              case 1:
                (*(*v6 + 360LL))(v6, msg, v7, v23);
                KeyValues::SetFloat(pKVNode, 0, v30);
                break;
              case 2:
                (*(*v6 + 352LL))(v6, msg, v7, v23);
                KeyValues::SetFloat(pKVNode, 0, v29);
                break;
              case 3:
              case 0x10:
              case 0x12:
                v34 = (*(*v6 + 328LL))(v6, msg, v7, v23);
                KeyValues::SetUint64(pKVNode, 0, v34);
                break;
              case 4:
              case 6:
                v31 = (*(*v6 + 344LL))(v6, msg, v7, v23);
                KeyValues::SetUint64(pKVNode, 0, v31);
                break;
              case 5:
              case 0xF:
              case 0x11:
                v33 = (*(*v6 + 320LL))(v6, msg, v7, v23);
                KeyValues::SetInt(pKVNode, 0, v33);
                break;
              case 7:
              case 0xD:
                v32 = (*(*v6 + 336LL))(v6, msg, v7, v23);
                KeyValues::SetInt(pKVNode, 0, v32);
                break;
              case 8:
                v28 = (*(*v6 + 368LL))(v6, msg, v7, v23);
                KeyValues::SetInt(pKVNode, 0, v28);
                break;
              case 9:
              case 0xC:
                (*(*v6 + 376LL))(&value, v6, msg, v7, v23);
                if ( *(v7 + 44) == 9 )
                  KeyValues::SetString(pKVNode, 0, value);
                v25 = value - 24;
                if ( value - 24 != &std::string::_Rep::_S_empty_rep_storage )
                {
                  if ( &_pthread_key_create != 0 )
                  {
                    v26 = _InterlockedExchangeAdd(v25 + 4, 0xFFFFFFFF);
                  }
                  else
                  {
                    v35 = *(value - 2);
                    *(value - 2) = v35 - 1;
                    v26 = v35;
                  }
                  if ( v26 <= 0 )
                    std::string::_Rep::_M_destroy(v25, &v42);
                }
                break;
              case 0xA:
              case 0xB:
                v24 = (*(*v6 + 392LL))(v6, msg, v7, v23);
                ProtoBufHelper::RecursiveAddProtoBufToKV(pKVNode, v24, bKeyValuesUsedByPHPa);
                break;
              case 0xE:
                v27 = (*(*v6 + 384LL))(v6, msg, v7, v23);
                KeyValues::SetInt(pKVNode, 0, *(v27 + 16));
                break;
              default:
                break;
            }
            ++v23;
          }
        }
      }
      else if ( (*(v9 + 40))(v6, msg, v7) != 0 || *(v7 + 120) != 0 )
      {
        switch ( *(v7 + 44) )
        {
          case 1:
            (*(*v6 + 176LL))(v6, msg, v7);
            KeyValues::SetFloat(pKVDest, v8, v17);
            break;
          case 2:
            (*(*v6 + 168LL))(v6, msg, v7);
            KeyValues::SetFloat(pKVDest, v8, v16);
            break;
          case 3:
          case 0x10:
          case 0x12:
            v21 = (*(*v6 + 144LL))(v6, msg, v7);
            KeyValues::SetUint64(pKVDest, v8, v21);
            break;
          case 4:
          case 6:
            v18 = (*(*v6 + 160LL))(v6, msg, v7);
            KeyValues::SetUint64(pKVDest, v8, v18);
            break;
          case 5:
          case 0xF:
          case 0x11:
            v19 = (*(*v6 + 136LL))(v6, msg, v7);
            KeyValues::SetInt(pKVDest, v8, v19);
            break;
          case 7:
          case 0xD:
            v20 = (*(*v6 + 152LL))(v6, msg, v7);
            KeyValues::SetInt(pKVDest, v8, v20);
            break;
          case 8:
            v15 = (*(*v6 + 184LL))(v6, msg, v7);
            KeyValues::SetInt(pKVDest, v8, v15);
            break;
          case 9:
          case 0xC:
            (*(*v6 + 192LL))(&v44, v6, msg, v7);
            if ( *(v7 + 44) == 9 )
              KeyValues::SetString(pKVDest, v8, v44);
            v12 = v44 - 24;
            if ( v44 - 24 != &std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create != 0 )
              {
                v13 = _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF);
              }
              else
              {
                v36 = *(v44 - 2);
                *(v44 - 2) = v36 - 1;
                v13 = v36;
              }
              if ( v13 <= 0 )
                std::string::_Rep::_M_destroy(v12, &v42);
            }
            break;
          case 0xA:
          case 0xB:
            Key = KeyValues::FindKey(pKVDest, v8, 1);
            v11 = (*(*v6 + 208LL))(v6, msg, v7, 0);
            ProtoBufHelper::RecursiveAddProtoBufToKV(Key, v11, bKeyValuesUsedByPHPa);
            break;
          case 0xE:
            v14 = (*(*v6 + 200LL))(v6, msg, v7);
            KeyValues::SetInt(pKVDest, v8, *(v14 + 16));
            break;
          default:
            break;
        }
      }
      ++v4;
    }
    while ( pDescriptor->field_count_ > v4 );
  }
}


// ProtoBufHelper::CreateKVFromProtoBuf  (line 694, @0x0000000001a702d0, libserver.so)  // inlines: GetDescriptor, _M_data, c_str
// calls: KeyValues::operator new, KeyValues::KeyValues, ProtoBufHelper::RecursiveAddProtoBufToKV, KeyValues::operator delete, _Unwind_Resume
KeyValues *__fastcall ProtoBufHelper::CreateKVFromProtoBuf(
        const google::protobuf::Message *const msg,
        bool bKeyValuesUsedByPHP)
{
  const char *v4; // r14
  KeyValues *v5; // rbx

  v4 = **(*(*msg + 152LL))(msg);
  v5 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v5, v4);
  ProtoBufHelper::RecursiveAddProtoBufToKV(v5, msg, bKeyValuesUsedByPHP);
  return v5;
}


// ProtoBufHelper::ParseKV  (line 702, @0x0000000001a70340, libserver.so)  // inlines: GetBool, GetDescriptor, V_isalpha, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, c_str, cpp_type, field, ~basic_string
// calls: KeyValues::FindKey, KeyValues::GetDataType, KeyValues::GetPtr, KeyValues::GetString, std::string::string(char const*,std::allocator<char> const&), std::string::_Rep::_M_destroy(std::allocator<char> const&), V_atoi, google::protobuf::EnumDescriptor::FindValueByNumber(int), KeyValues::GetInt, KeyValues::GetFloat, KeyValues::GetUint64, KeyValues::GetFirstSubKey (16 total)
// callers: CDOTACompendiumDefinition::LoadCompendiumDefinition, CDOTAEventDefinition::InitFromKeyValues
// globals: jpt_1A7041F, jpt_1A70753
bool __fastcall ProtoBufHelper::ParseKV(google::protobuf::Message *const msg, KeyValues *pKV, bool bEnforceRequired)
{
  __int64 v4; // r13
  __int64 i; // r12
  __int64 v6; // rbx
  KeyValues *Key; // rax
  KeyValues *v8; // r15
  float v9; // xmm1_4
  int v10; // edx
  google::protobuf::Message *v11; // rbx
  void (__fastcall *v13)(const google::protobuf::Reflection *, google::protobuf::Message *const, __int64, std::string *); // r14
  const char *String; // rax
  char *v15; // rdi
  int v16; // eax
  const char *v17; // rax
  int v18; // eax
  __int64 ValueByName; // rax
  int v20; // eax
  float v21; // xmm0_4
  float Float; // xmm0_4
  uint64 v23; // rax
  unsigned int v24; // eax
  uint64 Uint64; // rax
  unsigned int Int; // eax
  KeyValues *FirstSubKey; // r15
  float v28; // xmm1_4
  int v29; // edx
  const char *v30; // rax
  char *v31; // rdi
  int v32; // eax
  const char *v33; // rax
  int v34; // eax
  __int64 ValueByNumber; // rax
  int v36; // eax
  float v37; // xmm0_4
  float v38; // xmm0_4
  uint64 v39; // rax
  unsigned int v40; // eax
  uint64 v41; // rax
  unsigned int v42; // eax
  char *v43; // rdi
  int v44; // edx
  char *v45; // rdi
  int v46; // edx
  int v47; // edx
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  google::protobuf::Message *pValue; // [rsp+0h] [rbp-90h]
  const google::protobuf::EnumValueDescriptor *pValuea; // [rsp+0h] [rbp-90h]
  const google::protobuf::EnumValueDescriptor *pValueb; // [rsp+0h] [rbp-90h]
  const google::protobuf::EnumValueDescriptor *pValuec; // [rsp+0h] [rbp-90h]
  const google::protobuf::Reflection *pReflection; // [rsp+30h] [rbp-60h]
  char v59; // [rsp+4Eh] [rbp-42h] BYREF
  char v60; // [rsp+4Fh] [rbp-41h] BYREF
  std::string v61[8]; // [rsp+50h] [rbp-40h] BYREF

  v4 = (*(*msg + 152LL))(msg);
  pReflection = (*(*msg + 144LL))(msg);
  if ( *(v4 + 44) > 0 )
  {
    for ( i = 0; i < *(v4 + 44); ++i )
    {
      v6 = *(v4 + 48) + 136 * i;
      Key = KeyValues::FindKey(pKV, **v6, 0);
      v8 = Key;
      if ( Key != 0
        && (KeyValues::GetDataType(Key, 0) != CKeyValues_Data::types_t::TYPE_PTR || KeyValues::GetPtr(v8, 0, 0) != 0) )
      {
        if ( *(v6 + 48) != 3 )
        {
          v10 = *(v6 + 44);
          switch ( v10 )
          {
            case 1:
              Float = KeyValues::GetFloat(v8, 0, v9);
              (*(*pReflection + 264LL))(pReflection, msg, v6, Float);
              continue;
            case 2:
              v21 = KeyValues::GetFloat(v8, 0, v9);
              (*(*pReflection + 256LL))(pReflection, msg, v6, v21);
              continue;
            case 3:
            case 16:
            case 18:
              Uint64 = KeyValues::GetUint64(v8, 0, 0);
              (*(*pReflection + 232LL))(pReflection, msg, v6, Uint64);
              continue;
            case 4:
            case 6:
              v23 = KeyValues::GetUint64(v8, 0, 0);
              (*(*pReflection + 248LL))(pReflection, msg, v6, v23);
              continue;
            case 5:
            case 15:
            case 17:
              Int = KeyValues::GetInt(v8, 0, 0);
              (*(*pReflection + 224LL))(pReflection, msg, v6, Int);
              continue;
            case 7:
            case 13:
              v24 = KeyValues::GetInt(v8, 0, 0);
              (*(*pReflection + 240LL))(pReflection, msg, v6, v24);
              continue;
            case 8:
              v20 = KeyValues::GetInt(v8, 0, 0);
              (*(*pReflection + 272LL))(pReflection, msg, v6, v20 != 0);
              continue;
            case 9:
            case 12:
              if ( v10 == 9 )
              {
                v13 = *(*pReflection + 280LL);
                String = KeyValues::GetString(v8, 0, "", 0, 0);
                std::string::string(v61, String, &v59);
                v13(pReflection, msg, v6, v61);
                v15 = v61[0]._M_dataplus._M_p - 24;
                if ( v61[0]._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
                {
                  if ( &_pthread_key_create != 0 )
                  {
                    v16 = _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF);
                  }
                  else
                  {
                    v48 = *(v61[0]._M_dataplus._M_p - 2);
                    *(v61[0]._M_dataplus._M_p - 2) = v48 - 1;
                    v16 = v48;
                  }
                  if ( v16 <= 0 )
                    std::string::_Rep::_M_destroy(v15, &v60);
                }
              }
              continue;
            case 10:
            case 11:
              v11 = (*(*pReflection + 296LL))(pReflection, msg, v6, 0);
              KeyValues::GetDataType(v8, 0);
              if ( !ProtoBufHelper::ParseKV(v11, v8, bEnforceRequired) )
                return 0;
              continue;
            case 14:
              v17 = KeyValues::GetString(v8, 0, "", 0, 0);
              if ( ((*v17 & 0xDF) - 65) <= 0x19u )
              {
                std::string::string(v61, v17, &v59);
                ValueByName = google::protobuf::EnumDescriptor::FindValueByName(*(v6 + 96), v61);
                v45 = v61[0]._M_dataplus._M_p - 24;
                if ( v61[0]._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
                {
                  if ( &_pthread_key_create != 0 )
                  {
                    v46 = _InterlockedExchangeAdd(v45 + 4, 0xFFFFFFFF);
                  }
                  else
                  {
                    v49 = *(v61[0]._M_dataplus._M_p - 2);
                    *(v61[0]._M_dataplus._M_p - 2) = v49 - 1;
                    v46 = v49;
                  }
                  if ( v46 <= 0 )
                  {
                    pValuec = ValueByName;
                    std::string::_Rep::_M_destroy(v45, &v60);
                    ValueByName = pValuec;
                  }
                }
              }
              else
              {
                v18 = V_atoi(v17);
                ValueByName = google::protobuf::EnumDescriptor::FindValueByNumber(*(v6 + 96), v18);
              }
              if ( ValueByName != 0 )
                (*(*pReflection + 288LL))(pReflection, msg, v6, ValueByName);
              continue;
            default:
              return 0;
          }
        }
        FirstSubKey = KeyValues::GetFirstSubKey(v8);
        if ( FirstSubKey != 0 )
        {
          while ( 2 )
          {
            v29 = *(v6 + 44);
            switch ( v29 )
            {
              case 1:
                v38 = KeyValues::GetFloat(FirstSubKey, 0, v28);
                (*(*pReflection + 528LL))(pReflection, msg, v6, v38);
                goto LABEL_34;
              case 2:
                v37 = KeyValues::GetFloat(FirstSubKey, 0, v28);
                (*(*pReflection + 520LL))(pReflection, msg, v6, v37);
                goto LABEL_34;
              case 3:
              case 16:
              case 18:
                v41 = KeyValues::GetUint64(FirstSubKey, 0, 0);
                (*(*pReflection + 496LL))(pReflection, msg, v6, v41);
                goto LABEL_34;
              case 4:
              case 6:
                v39 = KeyValues::GetUint64(FirstSubKey, 0, 0);
                (*(*pReflection + 512LL))(pReflection, msg, v6, v39);
                goto LABEL_34;
              case 5:
              case 15:
              case 17:
                v42 = KeyValues::GetInt(FirstSubKey, 0, 0);
                (*(*pReflection + 488LL))(pReflection, msg, v6, v42);
                goto LABEL_34;
              case 7:
              case 13:
                v40 = KeyValues::GetInt(FirstSubKey, 0, 0);
                (*(*pReflection + 504LL))(pReflection, msg, v6, v40);
                goto LABEL_34;
              case 8:
                v36 = KeyValues::GetInt(FirstSubKey, 0, 0);
                (*(*pReflection + 536LL))(pReflection, msg, v6, v36 != 0);
                goto LABEL_34;
              case 9:
              case 12:
                if ( v29 == 9 )
                {
                  pValuea = *(*pReflection + 544LL);
                  v30 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
                  std::string::string(v61, v30, &v59);
                  (pValuea)(pReflection, msg, v6, v61);
                  v31 = v61[0]._M_dataplus._M_p - 24;
                  if ( v61[0]._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
                  {
                    if ( &_pthread_key_create != 0 )
                    {
                      v32 = _InterlockedExchangeAdd(v31 + 4, 0xFFFFFFFF);
                    }
                    else
                    {
                      v47 = *(v61[0]._M_dataplus._M_p - 2);
                      *(v61[0]._M_dataplus._M_p - 2) = v47 - 1;
                      v32 = v47;
                    }
                    if ( v32 <= 0 )
                      std::string::_Rep::_M_destroy(v31, &v60);
                  }
                }
                goto LABEL_34;
              case 10:
              case 11:
                pValue = (*(*pReflection + 560LL))(pReflection, msg, v6, 0);
                KeyValues::GetDataType(FirstSubKey, 0);
                if ( ProtoBufHelper::ParseKV(pValue, FirstSubKey, bEnforceRequired) )
                  goto LABEL_34;
                return 0;
              case 14:
                v33 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
                if ( ((*v33 & 0xDF) - 65) <= 0x19u )
                {
                  std::string::string(v61, v33, &v59);
                  ValueByNumber = google::protobuf::EnumDescriptor::FindValueByName(*(v6 + 96), v61);
                  v43 = v61[0]._M_dataplus._M_p - 24;
                  if ( v61[0]._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
                  {
                    if ( &_pthread_key_create != 0 )
                    {
                      v44 = _InterlockedExchangeAdd(v43 + 4, 0xFFFFFFFF);
                    }
                    else
                    {
                      v50 = *(v61[0]._M_dataplus._M_p - 2);
                      *(v61[0]._M_dataplus._M_p - 2) = v50 - 1;
                      v44 = v50;
                    }
                    if ( v44 <= 0 )
                    {
                      pValueb = ValueByNumber;
                      std::string::_Rep::_M_destroy(v43, &v60);
                      ValueByNumber = pValueb;
                    }
                  }
                }
                else
                {
                  v34 = V_atoi(v33);
                  ValueByNumber = google::protobuf::EnumDescriptor::FindValueByNumber(*(v6 + 96), v34);
                }
                if ( ValueByNumber != 0 )
                  (*(*pReflection + 552LL))(pReflection, msg, v6, ValueByNumber);
LABEL_34:
                FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
                if ( FirstSubKey == 0 )
                  break;
                continue;
              default:
                return 0;
            }
            break;
          }
        }
      }
      else if ( bEnforceRequired && *(v6 + 48) == 2 )
      {
        return 0;
      }
    }
  }
  return 1;
}


// IsFieldDifferent  (line 1030, @0x0000000001a6f4a0, libserver.so)  // inlines: GetDescriptor, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, compare, cpp_type, field, operator!=<char, std::char_traits<char>, std::allocator<char> >, operator==<char>, size, ~basic_string
// calls: std::string::_Rep::_M_destroy(std::allocator<char> const&), memcmp, std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: ProtoBufHelper::GenerateMessageChangeString
// globals: jpt_1A6F566
bool __fastcall IsFieldDifferent(
        const google::protobuf::Message *const src,
        const google::protobuf::Message *const dest,
        const google::protobuf::FieldDescriptor *field,
        int src_field_index,
        int dest_field_index)
{
  __int64 v8; // r13
  __int64 v9; // r14
  bool result; // al
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  double v20; // xmm0_8
  __int64 v21; // rax
  double v22; // xmm0_8
  __int64 v23; // rax
  double v24; // xmm0_8
  __int64 v25; // rax
  float v26; // xmm0_4
  __int64 v27; // rax
  char v28; // r13
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _DWORD *v35; // r13
  _DWORD *v36; // rbx
  size_t v37; // rdx
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rdi
  int v40; // edx
  __int64 v41; // rax
  const google::protobuf::Message *v42; // r13
  __int64 v43; // rax
  const google::protobuf::Message *v44; // r12
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  int v48; // r14d
  __int64 v49; // rax
  int v50; // r15d
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // edx
  char v56; // [rsp+Fh] [rbp-71h]
  __int64 dest_field_indexb; // [rsp+10h] [rbp-70h]
  double ia; // [rsp+18h] [rbp-68h]
  float ib; // [rsp+18h] [rbp-68h]
  bool id; // [rsp+18h] [rbp-68h]
  int ic; // [rsp+18h] [rbp-68h]
  bool ie; // [rsp+18h] [rbp-68h]
  char v65; // [rsp+2Fh] [rbp-51h] BYREF
  void *s1[2]; // [rsp+30h] [rbp-50h] BYREF
  void *s2[8]; // [rsp+40h] [rbp-40h] BYREF

  v8 = (*(*src + 144LL))(src);
  v9 = (*(*dest + 144LL))(dest);
  if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
    goto LABEL_6;
  v56 = (*(*v8 + 40LL))(v8, src, field);
  if ( v56 == (*(*v9 + 40LL))(v9, dest, field) )
  {
    if ( (*(*v9 + 40LL))(v9, dest, field) == 0 )
      return 0;
LABEL_6:
    switch ( field->type_ )
    {
      case google::protobuf::FieldDescriptor::Type::TYPE_DOUBLE:
        v19 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v20 = (*(v19 + 360))(v8, src, field, src_field_index);
        else
          v20 = (*(v19 + 176))(v8, src, field);
        ia = v20;
        v21 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          (*(v21 + 360))(v9, dest, field, dest_field_index);
        else
          (*(v21 + 176))(v9, dest, field);
        return ia != v22;
      case google::protobuf::FieldDescriptor::Type::TYPE_FLOAT:
        v23 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v24 = (*(v23 + 352))(v8, src, field, src_field_index);
        else
          v24 = (*(v23 + 168))(v8, src, field);
        ib = *&v24;
        v25 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          (*(v25 + 352))(v9, dest, field, dest_field_index);
        else
          (*(v25 + 168))(v9, dest, field);
        return ib != v26;
      case google::protobuf::FieldDescriptor::Type::TYPE_INT64:
      case google::protobuf::FieldDescriptor::Type::TYPE_SFIXED64:
      case google::protobuf::FieldDescriptor::Type::TYPE_SINT64:
        v53 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v16 = (*(v53 + 328))(v8, src, field, src_field_index);
        else
          v16 = (*(v53 + 144))(v8, src, field);
        v54 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v18 = (*(v54 + 328))(v9, dest, field, dest_field_index);
        else
          v18 = (*(v54 + 144))(v9, dest, field);
        return v16 != v18;
      case google::protobuf::FieldDescriptor::Type::TYPE_UINT64:
      case google::protobuf::FieldDescriptor::Type::TYPE_FIXED64:
        v15 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v16 = (*(v15 + 344))(v8, src, field, src_field_index);
        else
          v16 = (*(v15 + 160))(v8, src, field);
        v17 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v18 = (*(v17 + 344))(v9, dest, field, dest_field_index);
        else
          v18 = (*(v17 + 160))(v9, dest, field);
        return v16 != v18;
      case google::protobuf::FieldDescriptor::Type::TYPE_INT32:
      case google::protobuf::FieldDescriptor::Type::TYPE_SFIXED32:
      case google::protobuf::FieldDescriptor::Type::TYPE_SINT32:
        v51 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v12 = (*(v51 + 320))(v8, src, field, src_field_index);
        else
          v12 = (*(v51 + 136))(v8, src, field);
        v52 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v14 = (*(v52 + 320))(v9, dest, field, dest_field_index);
        else
          v14 = (*(v52 + 136))(v9, dest, field);
        return v12 != v14;
      case google::protobuf::FieldDescriptor::Type::TYPE_FIXED32:
      case google::protobuf::FieldDescriptor::Type::TYPE_UINT32:
        v11 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v12 = (*(v11 + 336))(v8, src, field, src_field_index);
        else
          v12 = (*(v11 + 152))(v8, src, field);
        v13 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v14 = (*(v13 + 336))(v9, dest, field, dest_field_index);
        else
          v14 = (*(v13 + 152))(v9, dest, field);
        return v12 != v14;
      case google::protobuf::FieldDescriptor::Type::TYPE_BOOL:
        v27 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v28 = (*(v27 + 368))(v8, src, field, src_field_index);
        else
          v28 = (*(v27 + 184))(v8, src, field);
        v29 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v30 = (*(v29 + 368))(v9, dest, field, dest_field_index);
        else
          v30 = (*(v29 + 184))(v9, dest, field);
        return (v28 ^ v30) & 1;
      case google::protobuf::FieldDescriptor::Type::TYPE_STRING:
      case google::protobuf::FieldDescriptor::Type::TYPE_BYTES:
        v33 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          (*(v33 + 376))(s2, v9, dest, field, dest_field_index);
        else
          (*(v33 + 192))(s2, v9, dest, field);
        v34 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          (*(v34 + 376))(s1, v8, src, field, src_field_index);
        else
          (*(v34 + 192))(s1, v8, src, field);
        v35 = s1[0];
        result = 1;
        v36 = s2[0];
        v37 = *(s1[0] - 3);
        if ( v37 == *(s2[0] - 3) )
          result = memcmp(s1[0], s2[0], v37) != 0;
        v38 = v35 - 6;
        if ( v35 - 6 != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create != 0 )
          {
            v55 = _InterlockedExchangeAdd(v38 + 4, 0xFFFFFFFF);
          }
          else
          {
            v55 = *(v35 - 2);
            *(v35 - 2) = v55 - 1;
          }
          if ( v55 <= 0 )
          {
            ie = result;
            std::string::_Rep::_M_destroy(v38, &v65);
            v36 = s2[0];
            result = ie;
          }
          else
          {
            v36 = s2[0];
          }
        }
        v39 = v36 - 6;
        if ( v36 - 6 != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create != 0 )
          {
            v40 = _InterlockedExchangeAdd(v39 + 4, 0xFFFFFFFF);
          }
          else
          {
            v40 = *(v36 - 2);
            *(v36 - 2) = v40 - 1;
          }
          if ( v40 <= 0 )
          {
            id = result;
            std::string::_Rep::_M_destroy(v39, s1);
            return id;
          }
        }
        return result;
      case google::protobuf::FieldDescriptor::Type::TYPE_GROUP:
      case google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE:
        v41 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v42 = (*(v41 + 392))(v8, src, field, src_field_index);
        else
          v42 = (*(v41 + 208))(v8, src, field, 0);
        v43 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v44 = (*(v43 + 392))(v9, dest, field, dest_field_index);
        else
          v44 = (*(v43 + 208))(v9, dest, field, 0);
        dest_field_indexb = 0;
        ic = 0;
        break;
      case google::protobuf::FieldDescriptor::Type::TYPE_ENUM:
        v31 = *v8;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v16 = (*(v31 + 384))(v8, src, field, src_field_index);
        else
          v16 = (*(v31 + 200))(v8, src, field);
        v32 = *v9;
        if ( field->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v18 = (*(v32 + 384))(v9, dest, field, dest_field_index);
        else
          v18 = (*(v32 + 200))(v9, dest, field);
        return v16 != v18;
      default:
        return 0;
    }
    while ( ic < *((*(*v42 + 152LL))(v42) + 44) )
    {
      v45 = (*(*v42 + 152LL))(v42);
      v46 = *(v45 + 48) + dest_field_indexb;
      if ( *(v46 + 48) == 3 )
      {
        v47 = (*(*v42 + 144LL))(v42);
        v48 = (*(*v47 + 48LL))(v47, v42, v46);
        v49 = (*(*v44 + 144LL))(v44);
        if ( v48 != (*(*v49 + 48LL))(v49, v44, v46) )
          return 1;
        v50 = 0;
        if ( v48 > 0 )
        {
          while ( !IsFieldDifferent(v42, v44, v46, v50, v50) )
          {
            if ( ++v50 == v48 )
              goto LABEL_52;
          }
          return 1;
        }
      }
      else if ( IsFieldDifferent(v42, v44, (*(v45 + 48) + dest_field_indexb), -1, -1) )
      {
        return 1;
      }
LABEL_52:
      ++ic;
      dest_field_indexb += 136;
    }
    return 0;
  }
  return 1;
}


// PrintFieldValueWithPrefix  (line 1107, @0x0000000001a73690, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, _Alloc_hider, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, append, basic_string, length, operator+=, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~basic_string
// calls: google::protobuf::TextFormat::PrintFieldValueToString(google::protobuf::Message const&,google::protobuf::FieldDescriptor const*,int,std::string *), std::string::find(char,ulong), V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), strlen, std::string::append(char const*,ulong), CUtlMemory<char*, int>::Purge, std::string::append(std::string const&), std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase
// callers: ProtoBufHelper::GenerateMessageChangeString
// local variable allocation has failed, the output may be wrong!
void __fastcall PrintFieldValueWithPrefix(
        const google::protobuf::Message *const msg,
        const google::protobuf::FieldDescriptor *field,
        int index,
        const char *prefix,
        std::string *output)
{
  __int64 v7; // rbx
  size_t v8; // rax
  const char *v9; // r14
  size_t v10; // rax
  __int64 v11; // r12
  int v12; // ebx
  char *v13; // rsi
  size_t v14; // rax
  char *v15; // rdi
  int v16; // eax
  int v17; // edx
  std::string field_output; // [rsp+0h] [rbp-60h] BYREF
  CUtlStringList lines; // [rsp+10h] [rbp-50h] BYREF

  if ( output != 0 )
  {
    field_output._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
    google::protobuf::TextFormat::PrintFieldValueToString(msg, field, *&index, &field_output, output);
    if ( std::string::find(&field_output, 10, 0) == -1 )
    {
      if ( prefix != 0 )
      {
        v14 = strlen(prefix);
        std::string::append(output, prefix, v14);
      }
      std::string::append(output, &field_output);
      std::string::append(output, "\n", 1u);
    }
    else
    {
      lines.m_Size = 0;
      lines.m_Memory.m_pMemory = 0;
      lines.m_Memory.m_nAllocationCount = 0;
      lines.m_Memory.m_nGrowSize = 0;
      V_SplitString(field_output._M_dataplus._M_p, "\n", &lines);
      if ( lines.m_Size > 0 )
      {
        v7 = 0;
        do
        {
          if ( prefix != 0 )
          {
            v8 = strlen(prefix);
            std::string::append(output, prefix, v8);
          }
          v9 = lines.m_Memory.m_pMemory[v7];
          v10 = strlen(v9);
          std::string::append(output, v9, v10);
          std::string::append(output, "\n", 1u);
          ++v7;
        }
        while ( lines.m_Size > v7 );
        if ( lines.m_Size > 0 )
        {
          v11 = 0;
          v12 = 0;
          do
          {
            ++v12;
            v13 = lines.m_Memory.m_pMemory[v11++];
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13);
          }
          while ( v12 < lines.m_Size );
        }
      }
      lines.m_Size = 0;
      if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<char *,int>::Purge(&lines.m_Memory);
        if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<char *,int>::Purge(&lines.m_Memory);
      }
    }
    v15 = field_output._M_dataplus._M_p - 24;
    if ( field_output._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v16 = _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF);
      }
      else
      {
        v17 = *(field_output._M_dataplus._M_p - 2);
        *(field_output._M_dataplus._M_p - 2) = v17 - 1;
        v16 = v17;
      }
      if ( v16 <= 0 )
        std::string::_Rep::_M_destroy(v15, &lines);
    }
  }
}


// ProtoBufHelper::GenerateMessageChangeString  (line 1137, @0x0000000001a73a40, libserver.so)  // inlines: GetDescriptor, _M_data, _M_deallocate, _M_dispose, _M_leak, _M_rep, _S_construct<int, int const&>, _Vector_base, _Vector_impl, __copy_m<int>, __copy_move_a2<true, __gnu_cxx::__normal_iterator<int*, std::vector<int> >, __gnu_cxx::__normal_iterator<int*, std::vector<int> > >, __copy_move_a<true, int*, int*>, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, __find<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, int>, __normal_iterator, append<__gnu_cxx::__normal_iterator<char*, std::basic_string<char> > >, begin, c_str, construct<int, int const&>, deallocate, empty, end, erase, field, find, find<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, int>, length, move<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, __gnu_cxx::__normal_iterator<int*, std::vector<int> > >, operator+, operator++, operator-<char*, std::basic_string<char> >, operator-<int*, std::vector<int> >, push_back, remove<__gnu_cxx::__normal_iterator<int*, std::vector<int> >, int>, replace, size, vector, ~_Vector_base, ~basic_string, ~vector
// calls: Warning, IsFieldDifferent, std::vector<int, std::allocator<int> >::reserve, std::vector<int, std::allocator<int> >::_M_emplace_back_aux<int const&>, CFmtStrN<256, false>::CFmtStrN, PrintFieldValueWithPrefix, operator delete, memmove, std::string::_M_leak_hard(void), std::string::erase(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>), std::string::find(char const*,ulong,ulong), std::string::string(char const*,std::allocator<char> const&) (17 total)
// callers: CDOTAGCServerSystem::SOChanged
// strings: "Tried to calc delta to a src message of a different type.", "--- %s[%d]: ", "+++ %s[%d]: ", "+++ %s: ", "--- %s: ", "+++"
bool __fastcall ProtoBufHelper::GenerateMessageChangeString(
        const google::protobuf::Message *const src,
        const google::protobuf::Message *const dest,
        std::string *output)
{
  __int64 v5; // rbx
  google::protobuf::FieldDescriptor *v7; // r12
  google::protobuf::FieldDescriptor *v8; // rdx
  int v9; // r13d
  int j; // eax
  char *v11; // rax
  int v12; // ebx
  char *v13; // r8
  char *M_p; // rdx
  signed __int64 v15; // rcx
  signed __int64 v16; // rax
  int v17; // ebx
  std::_Vector_base<int>::pointer M_start; // rdx
  unsigned __int64 v19; // rbx
  char *v20; // rdx
  void *v21; // rdi
  unsigned __int64 v22; // rbx
  std::_Vector_base<int>::pointer M_finish; // rax
  char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  char *v27; // r9
  char *v28; // rsi
  char *v29; // rdx
  char *v30; // rax
  char *v31; // r13
  char *v32; // rdi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rbx
  char *v36; // rax
  char *v37; // r13
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r13
  char *v40; // rax
  char *v41; // rdx
  __int64 v42; // rbx
  char *v43; // rsi
  char *v44; // rbx
  int v45; // eax
  int v46; // edx
  const google::protobuf::Reflection *dest_reflection; // [rsp+8h] [rbp-1F8h]
  const google::protobuf::Reflection *src_reflection; // [rsp+10h] [rbp-1F0h]
  __int64 v49; // [rsp+28h] [rbp-1D8h]
  char *v50; // [rsp+30h] [rbp-1D0h]
  const google::protobuf::Descriptor *descriptor; // [rsp+38h] [rbp-1C8h]
  int i; // [rsp+40h] [rbp-1C0h]
  int src_count; // [rsp+44h] [rbp-1BCh]
  char *v54; // [rsp+48h] [rbp-1B8h]
  char *v55; // [rsp+48h] [rbp-1B8h]
  char *v56; // [rsp+48h] [rbp-1B8h]
  size_t curPos; // [rsp+50h] [rbp-1B0h]
  int src_index; // [rsp+6Ch] [rbp-194h] BYREF
  std::vector<int> src_missing_indexes; // [rsp+70h] [rbp-190h] BYREF
  std::string changeCompString; // [rsp+90h] [rbp-170h] BYREF
  void *v62; // [rsp+98h] [rbp-168h]
  void *v63; // [rsp+A0h] [rbp-160h]
  CFmtStr prefix; // [rsp+B0h] [rbp-150h] BYREF
  unsigned __int64 v65; // [rsp+1C8h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  if ( output == 0 )
    return 0;
  v5 = (*(*src + 152LL))(src);
  descriptor = v5;
  if ( v5 == 0 )
    return 0;
  if ( v5 != (*(*dest + 152LL))(dest) )
  {
    Warning("Tried to calc delta to a src message of a different type.");
    return 0;
  }
  src_reflection = (*(*src + 144LL))(src);
  dest_reflection = (*(*dest + 144LL))(dest);
  if ( *(v5 + 44) > 0 )
  {
    v49 = 0;
    for ( i = 0; descriptor->field_count_ > i; ++i )
    {
      v7 = &descriptor->fields_[v49];
      if ( v7->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
      {
        v8 = &descriptor->fields_[v49];
        memset(&src_missing_indexes, 0, sizeof(src_missing_indexes));
        changeCompString._M_dataplus._M_p = 0;
        v62 = 0;
        v63 = 0;
        src_count = (*(*src_reflection + 48LL))(src_reflection, src, v8);
        v9 = (*(*dest_reflection + 48LL))(dest_reflection, dest, v7);
        std::vector<int>::reserve(&changeCompString, v9);
        src_index = 0;
        for ( j = 0; v9 > src_index; j = src_index )
        {
          if ( v62 == v63 )
          {
            std::vector<int>::_M_emplace_back_aux<int const&>(&changeCompString, &src_index);
          }
          else
          {
            if ( v62 != 0 )
            {
              *v62 = j;
              v11 = v62;
            }
            else
            {
              v11 = 0;
            }
            v62 = v11 + 4;
          }
          ++src_index;
        }
        v12 = 0;
        src_index = 0;
        if ( src_count > 0 )
        {
          while ( 1 )
          {
            if ( v9 <= v12 )
            {
LABEL_56:
              if ( src_missing_indexes._M_impl._M_finish != src_missing_indexes._M_impl._M_end_of_storage )
              {
                v17 = src_index;
                if ( src_missing_indexes._M_impl._M_finish != 0 )
                {
                  *src_missing_indexes._M_impl._M_finish = src_index;
                  M_finish = src_missing_indexes._M_impl._M_finish;
                  v17 = src_index;
                }
                else
                {
                  M_finish = 0;
                }
                src_missing_indexes._M_impl._M_finish = M_finish + 1;
                goto LABEL_42;
              }
              std::vector<int>::_M_emplace_back_aux<int const&>(&src_missing_indexes, &src_index);
              goto LABEL_41;
            }
            while ( IsFieldDifferent(src, dest, v7, src_index, v12) )
            {
              if ( ++v12 == v9 )
                goto LABEL_56;
            }
            v13 = v62;
            M_p = changeCompString._M_dataplus._M_p;
            v15 = (v62 - changeCompString._M_dataplus._M_p) >> 4;
            v16 = (v62 - changeCompString._M_dataplus._M_p) >> 2;
            if ( v15 > 0 )
            {
              if ( *changeCompString._M_dataplus._M_p == v12 )
              {
                v27 = changeCompString._M_dataplus._M_p;
              }
              else if ( v12 == *(changeCompString._M_dataplus._M_p + 1) )
              {
                v27 = changeCompString._M_dataplus._M_p + 4;
              }
              else if ( v12 == *(changeCompString._M_dataplus._M_p + 2) )
              {
                v27 = changeCompString._M_dataplus._M_p + 8;
              }
              else if ( *(changeCompString._M_dataplus._M_p + 3) == v12 )
              {
                v27 = changeCompString._M_dataplus._M_p + 12;
              }
              else
              {
                while ( 1 )
                {
                  --v15;
                  v27 = M_p + 16;
                  if ( v15 == 0 )
                  {
                    v16 = (v62 - v27) >> 2;
                    goto LABEL_38;
                  }
                  if ( *(M_p + 4) == v12 )
                    goto LABEL_61;
                  if ( *(M_p + 5) == v12 )
                  {
                    v27 = M_p + 20;
                    goto LABEL_61;
                  }
                  if ( *(M_p + 6) == v12 )
                  {
                    v27 = M_p + 24;
                    goto LABEL_61;
                  }
                  if ( *(M_p + 7) == v12 )
                    break;
                  M_p += 16;
                }
                v27 = M_p + 28;
              }
              goto LABEL_61;
            }
            v27 = changeCompString._M_dataplus._M_p;
LABEL_38:
            if ( v16 == 2 )
              goto LABEL_77;
            if ( v16 != 3 )
            {
              if ( v16 != 1 )
                goto LABEL_41;
              goto LABEL_79;
            }
            if ( *v27 != v12 )
              break;
LABEL_61:
            if ( v62 != v27 )
            {
              v24 = v27 + 4;
              if ( v62 == v27 + 4 )
                goto LABEL_71;
              do
              {
                if ( *v24 != v12 )
                {
                  *v27 = *v24;
                  v27 += 4;
                }
                v24 += 4;
              }
              while ( v13 != v24 );
              if ( v13 == v27 )
                goto LABEL_41;
              if ( v13 == v62 )
              {
LABEL_71:
                v25 = 0;
              }
              else
              {
                v25 = 0;
                v26 = (v62 - v13) >> 2;
                if ( v26 != 0 )
                {
                  v50 = v13;
                  v27 = memmove(v27, v13, 4 * v26);
                  v25 = (v62 - v50) >> 2;
                }
              }
              v62 = &v27[4 * v25];
            }
LABEL_41:
            v17 = src_index;
LABEL_42:
            v12 = v17 + 1;
            src_index = v12;
            if ( src_count <= v12 )
              goto LABEL_43;
          }
          v27 += 4;
LABEL_77:
          if ( *v27 != v12 )
          {
            v27 += 4;
LABEL_79:
            if ( *v27 != v12 )
              goto LABEL_41;
            goto LABEL_61;
          }
          goto LABEL_61;
        }
LABEL_43:
        M_start = src_missing_indexes._M_impl._M_start;
        if ( src_missing_indexes._M_impl._M_finish != src_missing_indexes._M_impl._M_start
          && src_missing_indexes._M_impl._M_finish - src_missing_indexes._M_impl._M_start != 0 )
        {
          v19 = 0;
          do
          {
            CFmtStrN<256,false>::CFmtStrN(&prefix, "--- %s[%d]: ", v7->full_name_->_M_dataplus._M_p, M_start[v19]);
            PrintFieldValueWithPrefix(src, v7, src_missing_indexes._M_impl._M_start[v19], prefix.m_szBuf, output);
            M_start = src_missing_indexes._M_impl._M_start;
            ++v19;
          }
          while ( v19 < src_missing_indexes._M_impl._M_finish - src_missing_indexes._M_impl._M_start );
        }
        v20 = changeCompString._M_dataplus._M_p;
        v21 = v62;
        if ( v62 != changeCompString._M_dataplus._M_p )
        {
          if ( (v62 - changeCompString._M_dataplus._M_p) >> 2 != 0 )
          {
            v22 = 0;
            do
            {
              CFmtStrN<256,false>::CFmtStrN(&prefix, "+++ %s[%d]: ", v7->full_name_->_M_dataplus._M_p, *&v20[4 * v22]);
              PrintFieldValueWithPrefix(dest, v7, *&changeCompString._M_dataplus._M_p[4 * v22], prefix.m_szBuf, output);
              v20 = changeCompString._M_dataplus._M_p;
              ++v22;
            }
            while ( v22 < (v62 - changeCompString._M_dataplus._M_p) >> 2 );
          }
          v21 = v20;
        }
        if ( v21 != 0 )
          operator delete(v21);
        if ( src_missing_indexes._M_impl._M_start != 0 )
          operator delete(src_missing_indexes._M_impl._M_start);
      }
      else if ( IsFieldDifferent(src, dest, &descriptor->fields_[v49], -1, -1) )
      {
        if ( (*(*src_reflection + 40LL))(src_reflection, src, v7) != 0 )
        {
          CFmtStrN<256,false>::CFmtStrN(&prefix, "--- %s: ", v7->full_name_->_M_dataplus._M_p);
          PrintFieldValueWithPrefix(src, v7, -1, prefix.m_szBuf, output);
        }
        if ( (*(*dest_reflection + 40LL))(dest_reflection, dest, v7) != 0 )
        {
          CFmtStrN<256,false>::CFmtStrN(&prefix, "+++ %s: ", v7->full_name_->_M_dataplus._M_p);
          PrintFieldValueWithPrefix(dest, v7, -1, prefix.m_szBuf, output);
        }
      }
      ++v49;
    }
  }
  curPos = 0;
  while ( 1 )
  {
    v33 = std::string::find(output, "---", curPos, 3u);
    v34 = v33;
    if ( v33 == -1 )
      break;
    v35 = std::string::find(output, "\n", v33, 1u);
    if ( v35 == -1 )
      break;
    std::string::string(&changeCompString, "+++", &src_missing_indexes);
    v36 = output->_M_dataplus._M_p;
    v37 = &output->_M_dataplus._M_p[v35 + 1];
    if ( *(output->_M_dataplus._M_p - 2) >= 0 )
    {
      std::string::_M_leak_hard(output);
      v36 = output->_M_dataplus._M_p;
      v37 = &output->_M_dataplus._M_p[v35 + 1];
      if ( *(output->_M_dataplus._M_p - 2) >= 0 )
      {
        std::string::_M_leak_hard(output);
        v36 = output->_M_dataplus._M_p;
      }
    }
    std::string::replace(
      &changeCompString,
      *(changeCompString._M_dataplus._M_p - 3),
      0,
      &v36[v34 + 3],
      v37 - &v36[v34 + 3]);
    v38 = std::string::find(output, changeCompString._M_dataplus._M_p, v35, *(changeCompString._M_dataplus._M_p - 3));
    v39 = v38;
    if ( v38 == -1 )
    {
      curPos = v35;
    }
    else if ( v38 > v34 )
    {
      if ( *(output->_M_dataplus._M_p - 2) < 0 )
      {
        v28 = &output->_M_dataplus._M_p[v38];
        v29 = &v28[*(changeCompString._M_dataplus._M_p - 3)];
      }
      else
      {
        v54 = *(changeCompString._M_dataplus._M_p - 3);
        std::string::_M_leak_hard(output);
        v28 = &output->_M_dataplus._M_p[v39];
        v29 = &v54[v28];
        if ( *(output->_M_dataplus._M_p - 2) >= 0 )
        {
          v55 = &v54[v28];
          std::string::_M_leak_hard(output);
          v29 = v55;
          v28 = &output->_M_dataplus._M_p[v39];
        }
      }
      std::string::erase(output, v28, v29);
      v30 = output->_M_dataplus._M_p;
      v31 = &output->_M_dataplus._M_p[v35 + 1];
      if ( *(output->_M_dataplus._M_p - 2) >= 0 )
      {
        std::string::_M_leak_hard(output);
        v30 = output->_M_dataplus._M_p;
        v31 = &output->_M_dataplus._M_p[v35 + 1];
        if ( *(output->_M_dataplus._M_p - 2) >= 0 )
        {
          std::string::_M_leak_hard(output);
          v30 = output->_M_dataplus._M_p;
        }
      }
      std::string::erase(output, &v30[v34], v31);
    }
    else
    {
      v40 = output->_M_dataplus._M_p;
      v41 = &output->_M_dataplus._M_p[v35 + 1];
      if ( *(output->_M_dataplus._M_p - 2) >= 0 )
      {
        std::string::_M_leak_hard(output);
        v40 = output->_M_dataplus._M_p;
        v41 = &output->_M_dataplus._M_p[v35 + 1];
        if ( *(output->_M_dataplus._M_p - 2) >= 0 )
        {
          v56 = &output->_M_dataplus._M_p[v35 + 1];
          std::string::_M_leak_hard(output);
          v40 = output->_M_dataplus._M_p;
          v41 = v56;
        }
      }
      std::string::erase(output, &v40[v34], v41);
      v42 = *(changeCompString._M_dataplus._M_p - 3);
      if ( *(output->_M_dataplus._M_p - 2) < 0 )
      {
        v43 = &output->_M_dataplus._M_p[v39];
        v44 = &v43[v42];
      }
      else
      {
        std::string::_M_leak_hard(output);
        v43 = &output->_M_dataplus._M_p[v39];
        v44 = &v43[v42];
        if ( *(output->_M_dataplus._M_p - 2) >= 0 )
        {
          std::string::_M_leak_hard(output);
          v43 = &output->_M_dataplus._M_p[v39];
        }
      }
      std::string::erase(output, v43, v44);
    }
    v32 = changeCompString._M_dataplus._M_p - 24;
    if ( changeCompString._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v45 = _InterlockedExchangeAdd(v32 + 4, 0xFFFFFFFF);
      }
      else
      {
        v46 = *(changeCompString._M_dataplus._M_p - 2);
        *(changeCompString._M_dataplus._M_p - 2) = v46 - 1;
        v45 = v46;
      }
      if ( v45 <= 0 )
        std::string::_Rep::_M_destroy(v32, &src_missing_indexes);
    }
  }
  return *(output->_M_dataplus._M_p - 3) != 0;
}


// ProtoBufHelper::MsgMultilineDebugString  (line 1286, @0x0000000001a738b0, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~basic_string
// calls: google::protobuf::Message::DebugString(void), V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), Msg, CUtlMemory<char*, int>::Purge, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements, CUtlVectorBase<char*, CUtlMemory<char*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAGCServerSystem::SendConnectionStats, CDOTAGCServerSystem::MatchSignOut
void __fastcall ProtoBufHelper::MsgMultilineDebugString(const google::protobuf::Message *const msg)
{
  __int64 v1; // r12
  int i; // ebx
  char *v3; // rdi
  __int64 v4; // r12
  int v5; // ebx
  char *v6; // rsi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-51h] BYREF
  std::string output; // [rsp+10h] [rbp-50h] BYREF
  CUtlStringList lines; // [rsp+20h] [rbp-40h] BYREF

  lines.m_Size = 0;
  lines.m_Memory.m_pMemory = 0;
  lines.m_Memory.m_nAllocationCount = 0;
  lines.m_Memory.m_nGrowSize = 0;
  google::protobuf::Message::DebugString(&output);
  V_SplitString(output._M_dataplus._M_p, "\n", &lines);
  v1 = 0;
  for ( i = 0; lines.m_Size > i; ++v1 )
  {
    Msg("%s\n", lines.m_Memory.m_pMemory[v1]);
    ++i;
  }
  v3 = output._M_dataplus._M_p - 24;
  if ( output._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(output._M_dataplus._M_p - 2);
      *(output._M_dataplus._M_p - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v9);
  }
  if ( lines.m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = lines.m_Memory.m_pMemory[v4++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
    }
    while ( v5 < lines.m_Size );
  }
  lines.m_Size = 0;
  if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&lines.m_Memory);
    if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&lines.m_Memory);
  }
}


// ProtoBufHelper::GenerateDeltaMsg  (line 1297, @0x0000000001a70b60, libserver.so)  // inlines: GetDescriptor, _M_data, _M_dispose, _M_rep, _V_strcmp, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, c_str, field, ~basic_string
// calls: google::protobuf::Descriptor::FindFieldByNumber(int), strcmp, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::string(std::string const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
// globals: jpt_1A70CE3, jpt_1A70E9B, jpt_1A714BD, jpt_1A71A1F
bool __fastcall ProtoBufHelper::GenerateDeltaMsg(
        const google::protobuf::Message *const msgBase,
        const google::protobuf::Message *const msgNew,
        google::protobuf::Message *pMsgDelta,
        bool bForceInclude)
{
  __int64 v7; // rax
  const google::protobuf::Message *v8; // rdi
  __int64 v9; // rax
  const google::protobuf::Message *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rax
  const google::protobuf::Message *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // r12
  char v17; // bl
  char v18; // al
  int v19; // eax
  int v20; // ebx
  const char *v21; // r14
  __int64 v23; // rbx
  int v24; // ebx
  __int64 v25; // rbx
  char v26; // bl
  char v27; // cl
  __int64 v28; // rax
  __int64 v29; // r14
  void (__fastcall *v30)(const google::protobuf::Reflection *, google::protobuf::Message *, __int64, __int64); // r8
  __int64 v31; // rcx
  void (__fastcall *v32)(const google::protobuf::Reflection *, google::protobuf::Message *, __int64, _QWORD); // r8
  unsigned int v33; // eax
  __int64 v34; // rax
  char *v35; // rbx
  int v36; // eax
  char *v37; // rdi
  char *v38; // rdi
  int v39; // eax
  int v40; // ebx
  __int64 v41; // rbx
  char *v42; // rdi
  int v43; // eax
  __int64 v44; // rax
  const google::protobuf::Message *v45; // rbx
  const google::protobuf::Message *v46; // rax
  bool v47; // r12
  __int64 v48; // rax
  int v49; // eax
  int v50; // edi
  __int64 FieldByNumber; // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  int v54; // eax
  unsigned int v55; // ebx
  void (__fastcall *v56)(const google::protobuf::Reflection *, google::protobuf::Message *, char *, __int64, __int64); // r14
  __int64 v57; // rcx
  void (__fastcall *v58)(const google::protobuf::Reflection *, google::protobuf::Message *, char *, __int64, __int64); // r14
  __int64 v59; // rcx
  void (__fastcall *v60)(const google::protobuf::Reflection *, google::protobuf::Message *, char *, __int64, __int64, double); // r14
  double v61; // xmm0_8
  void (__fastcall *v62)(const google::protobuf::Reflection *, google::protobuf::Message *, char *, char **); // r14
  char *v63; // rdi
  int v64; // eax
  __int64 v65; // rax
  bool DeltaMsg; // al
  __int64 v67; // rax
  __int64 v68; // rax
  const google::protobuf::Message *v69; // rsi
  __int64 v70; // rcx
  const google::protobuf::Message *v71; // r14
  __int64 v72; // rax
  const google::protobuf::FieldDescriptor *v73; // rdx
  __int64 v74; // rdi
  const google::protobuf::Message *v75; // rax
  bool v76; // cl
  __int64 v77; // rax
  unsigned int v78; // eax
  int v79; // ecx
  char v80; // al
  unsigned int v81; // eax
  unsigned int v82; // ebx
  char v83; // dl
  bool v84; // zf
  const char *v85; // rsi
  char *v86; // rdi
  char *v87; // rdi
  int v88; // edx
  __int64 v89; // rax
  const google::protobuf::Message *v90; // rbx
  const google::protobuf::Message *v91; // rax
  double v92; // xmm0_8
  unsigned __int8 v93; // al
  double v94; // xmm0_8
  int v95; // eax
  int v96; // edx
  int v97; // edx
  int v98; // ecx
  int v99; // ecx
  int v100; // edx
  int v101; // edx
  char bAddedAnythingInThisRepeated; // [rsp+10h] [rbp-F0h]
  int nRepeatedLengthBase; // [rsp+1Ch] [rbp-E4h]
  bool v104; // [rsp+20h] [rbp-E0h]
  google::protobuf::Message *v105; // [rsp+20h] [rbp-E0h]
  google::protobuf::Descriptor *pDescriptorDelta; // [rsp+28h] [rbp-D8h]
  bool bContainedAnything; // [rsp+44h] [rbp-BCh]
  unsigned int bContainedAnythinga; // [rsp+44h] [rbp-BCh]
  google::protobuf::Descriptor *pDescriptorBase; // [rsp+48h] [rbp-B8h]
  char *v111; // [rsp+50h] [rbp-B0h]
  int v112; // [rsp+50h] [rbp-B0h]
  char *v113; // [rsp+50h] [rbp-B0h]
  int v114; // [rsp+50h] [rbp-B0h]
  char *v115; // [rsp+50h] [rbp-B0h]
  double v116; // [rsp+50h] [rbp-B0h]
  char *v117; // [rsp+50h] [rbp-B0h]
  char *v118; // [rsp+50h] [rbp-B0h]
  char v119; // [rsp+50h] [rbp-B0h]
  char v120; // [rsp+50h] [rbp-B0h]
  char *v121; // [rsp+50h] [rbp-B0h]
  float v122; // [rsp+50h] [rbp-B0h]
  char v123; // [rsp+50h] [rbp-B0h]
  __int64 v125; // [rsp+60h] [rbp-A0h]
  int nRepeatedLengthNew; // [rsp+68h] [rbp-98h]
  int iField; // [rsp+6Ch] [rbp-94h]
  __int64 v128; // [rsp+70h] [rbp-90h]
  const google::protobuf::Reflection *pReflectionDelta; // [rsp+78h] [rbp-88h]
  float pSubMsgDeltaa; // [rsp+88h] [rbp-78h]
  double pSubMsgDeltab; // [rsp+88h] [rbp-78h]
  google::protobuf::Message *pSubMsgDeltac; // [rsp+88h] [rbp-78h]
  int pSubMsgDelta; // [rsp+88h] [rbp-78h]
  google::protobuf::Message *pSubMsgDeltad; // [rsp+88h] [rbp-78h]
  const google::protobuf::FieldDescriptor *pFieldBase; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBaseb; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBasec; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBasea; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBased; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBasee; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBasef; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBaseg; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBaseh; // [rsp+98h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldBasei; // [rsp+98h] [rbp-68h]
  char v147; // [rsp+AFh] [rbp-51h] BYREF
  char *s1[2]; // [rsp+B0h] [rbp-50h] BYREF
  char *s2[8]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = (*(*msgBase + 152LL))(msgBase);
  v8 = msgBase;
  pDescriptorBase = v7;
  v9 = *msgBase;
  v10 = msgNew;
  v11 = (*(v9 + 144))(v8);
  v12 = (*(*msgNew + 152LL))(msgNew);
  v13 = msgNew;
  v14 = v12;
  v125 = v12;
  v15 = (*(*v10 + 144LL))(v13);
  pDescriptorDelta = (*(*pMsgDelta + 152LL))(pMsgDelta);
  pReflectionDelta = (*(*pMsgDelta + 144LL))(pMsgDelta);
  if ( *(v14 + 44) > 0 )
  {
    v128 = 0;
    iField = 0;
    bContainedAnything = 0;
    while ( 1 )
    {
      v16 = *(v125 + 48) + v128;
      pFieldBase = google::protobuf::Descriptor::FindFieldByNumber(pDescriptorBase, *(v16 + 40));
      if ( pFieldBase == 0 )
        goto LABEL_12;
      if ( *(v16 + 48) != 3 )
        break;
      nRepeatedLengthBase = (*(*v11 + 48LL))(v11, msgBase, pFieldBase);
      v49 = (*(*v15 + 48LL))(v15, msgNew, v16);
      v50 = nRepeatedLengthBase;
      nRepeatedLengthNew = v49;
      if ( v49 >= nRepeatedLengthBase )
        v50 = v49;
      pSubMsgDelta = v50;
      if ( !bForceInclude && nRepeatedLengthBase == v49 )
      {
        v79 = *(v16 + 44);
        v80 = v79 == 11;
        v104 = v50 > 0 && v79 != 11;
        if ( v104 )
        {
          v81 = *(v16 + 44);
          v82 = 0;
LABEL_128:
          switch ( v81 )
          {
            case 1u:
              v116 = (*(*v15 + 360LL))(v15, msgNew, v16, v82);
              v84 = v116 == (*(*v11 + 360LL))(v11, msgBase, pFieldBase, v82);
              goto LABEL_141;
            case 2u:
              v122 = (*(*v15 + 352LL))(v15, msgNew, v16, v82);
              v84 = v122 == (*(*v11 + 352LL))(v11, msgBase, pFieldBase, v82);
LABEL_141:
              v80 = !v84;
              v83 = v84;
              goto LABEL_131;
            case 3u:
            case 0x10u:
            case 0x12u:
              v113 = (*(*v15 + 328LL))(v15, msgNew, v16, v82);
              v80 = v113 != (*(*v11 + 328LL))(v11, msgBase, pFieldBase, v82);
              v83 = v80 ^ 1;
              goto LABEL_131;
            case 4u:
            case 6u:
              v115 = (*(*v15 + 344LL))(v15, msgNew, v16, v82);
              v80 = v115 != (*(*v11 + 344LL))(v11, msgBase, pFieldBase, v82);
              v83 = v80 ^ 1;
              goto LABEL_131;
            case 5u:
            case 0xFu:
            case 0x11u:
              v112 = (*(*v15 + 320LL))(v15, msgNew, v16, v82);
              v80 = v112 != (*(*v11 + 320LL))(v11, msgBase, pFieldBase, v82);
              goto LABEL_130;
            case 7u:
            case 0xDu:
              v114 = (*(*v15 + 336LL))(v15, msgNew, v16, v82);
              v80 = v114 != (*(*v11 + 336LL))(v11, msgBase, pFieldBase, v82);
              v83 = v80 ^ 1;
              goto LABEL_131;
            case 8u:
              v120 = (*(*v15 + 368LL))(v15, msgNew, v16, v82);
              v80 = v120 ^ (*(*v11 + 368LL))(v11, msgBase, pFieldBase, v82);
              v83 = v80 ^ 1;
              goto LABEL_131;
            case 9u:
            case 0xCu:
              (*(*v11 + 376LL))(s2, v11, msgBase, pFieldBase, v82);
              v117 = s2[0];
              (*(*v15 + 376LL))(s1, v15, msgNew, v16, v82);
              v85 = v117;
              v118 = s1[0];
              v80 = strcmp(s1[0], v85) != 0;
              v86 = v118 - 24;
              if ( v118 - 24 != &std::string::_Rep::_S_empty_rep_storage )
              {
                if ( &_pthread_key_create != 0 )
                {
                  v97 = _InterlockedExchangeAdd(v86 + 4, 0xFFFFFFFF);
                }
                else
                {
                  v99 = *(v118 - 2);
                  *(v118 - 2) = v99 - 1;
                  v97 = v99;
                }
                if ( v97 <= 0 )
                {
                  v123 = v80;
                  std::string::_Rep::_M_destroy(v86, &v147);
                  v80 = v123;
                }
              }
              v87 = s2[0] - 24;
              if ( s2[0] - 24 != &std::string::_Rep::_S_empty_rep_storage )
              {
                if ( &_pthread_key_create != 0 )
                {
                  v88 = _InterlockedExchangeAdd(v87 + 4, 0xFFFFFFFF);
                }
                else
                {
                  v98 = *(s2[0] - 2);
                  *(s2[0] - 2) = v98 - 1;
                  v88 = v98;
                }
                if ( v88 <= 0 )
                {
                  v119 = v80;
                  std::string::_Rep::_M_destroy(v87, s1);
                  v80 = v119;
                }
              }
LABEL_130:
              v83 = v80 ^ 1;
              goto LABEL_131;
            case 0xEu:
              v121 = (*(*v15 + 384LL))(v15, msgNew, v16, v82);
              v80 = v121 != (*(*v11 + 384LL))(v11, msgBase, pFieldBase, v82);
              v83 = v80 ^ 1;
LABEL_131:
              ++v82;
              if ( v83 != 0 )
                goto LABEL_132;
              goto LABEL_135;
            default:
              break;
          }
          while ( 1 )
          {
            v80 = 0;
            ++v82;
LABEL_132:
            if ( v82 >= pSubMsgDelta )
              break;
            v81 = *(v16 + 44);
            if ( v81 <= 0x12 )
              goto LABEL_128;
          }
        }
        else
        {
          v104 = v50 > 0;
        }
LABEL_135:
        if ( v80 == 0 )
          goto LABEL_12;
      }
      else
      {
        v104 = v50 > 0;
      }
      FieldByNumber = google::protobuf::Descriptor::FindFieldByNumber(pDescriptorDelta, *(v16 + 40));
      v53 = bContainedAnything;
      v111 = FieldByNumber;
      v54 = *(v16 + 44);
      if ( v54 != 11 )
        v53 = 1;
      bAddedAnythingInThisRepeated = v54 != 11;
      bContainedAnything = v53;
      if ( v104 )
      {
        v55 = 0;
        while ( 1 )
        {
          LOBYTE(v52) = v55 < nRepeatedLengthNew;
          switch ( v54 )
          {
            case 1:
              v60 = *(*pReflectionDelta + 528LL);
              if ( v55 < nRepeatedLengthNew )
                (*(*v15 + 360LL))(v15, msgNew, v16, v55, v52);
              else
                v61 = *(v16 + 128);
              goto LABEL_94;
            case 2:
              v60 = *(*pReflectionDelta + 520LL);
              if ( v55 < nRepeatedLengthNew )
                (*(*v15 + 352LL))(v15, msgNew, v16, v55, v52);
              else
                *&v61 = *(v16 + 128);
LABEL_94:
              v60(pReflectionDelta, pMsgDelta, v111, v53, v52, v61);
              goto LABEL_81;
            case 3:
            case 16:
            case 18:
              v58 = *(*pReflectionDelta + 496LL);
              if ( v55 >= nRepeatedLengthNew )
                goto LABEL_84;
              v59 = (*(*v15 + 328LL))(v15, msgNew, v16, v55, v52);
              goto LABEL_85;
            case 4:
            case 6:
              v58 = *(*pReflectionDelta + 512LL);
              if ( v55 >= nRepeatedLengthNew )
                goto LABEL_84;
              v59 = (*(*v15 + 344LL))(v15, msgNew, v16, v55, v52);
              goto LABEL_85;
            case 5:
            case 15:
            case 17:
              v56 = *(*pReflectionDelta + 488LL);
              if ( v55 >= nRepeatedLengthNew )
                goto LABEL_79;
              v57 = (*(*v15 + 320LL))(v15, msgNew, v16, v55, v52);
              goto LABEL_80;
            case 7:
            case 13:
              v56 = *(*pReflectionDelta + 504LL);
              if ( v55 >= nRepeatedLengthNew )
LABEL_79:
                v57 = *(v16 + 128);
              else
                v57 = (*(*v15 + 336LL))(v15, msgNew, v16, v55, v52);
              goto LABEL_80;
            case 8:
              v56 = *(*pReflectionDelta + 536LL);
              if ( v55 < nRepeatedLengthNew )
                v57 = (*(*v15 + 368LL))(v15, msgNew, v16, v55, v52);
              else
                v57 = *(v16 + 128);
LABEL_80:
              v56(pReflectionDelta, pMsgDelta, v111, v57, v52);
              goto LABEL_81;
            case 9:
              v62 = *(*pReflectionDelta + 544LL);
              if ( v55 < nRepeatedLengthNew )
                goto LABEL_98;
              goto LABEL_115;
            case 11:
              bContainedAnythinga = v52;
              v65 = (*(*pReflectionDelta + 560LL))(pReflectionDelta, pMsgDelta, v111, 0);
              v52 = bContainedAnythinga;
              v105 = v65;
              if ( bContainedAnythinga == 0 )
              {
                DeltaMsg = 0;
                if ( v55 >= nRepeatedLengthBase )
                  goto LABEL_106;
                v89 = (*(*v11 + 392LL))(v11, msgBase, pFieldBase, v55);
                v70 = v55;
                v73 = pFieldBase;
                v71 = v89;
                v69 = msgBase;
                v74 = v11;
                v72 = *v11;
                goto LABEL_121;
              }
              v67 = *v15;
              if ( v55 >= nRepeatedLengthBase )
              {
                v68 = (*(v67 + 392))(v15, msgNew, v16, v55);
                v69 = msgNew;
                v70 = v55;
                v71 = v68;
                v72 = *v15;
                v73 = v16;
                v74 = v15;
LABEL_121:
                v75 = (*(v72 + 392))(v74, v69, v73, v70);
                v76 = 1;
                goto LABEL_122;
              }
              v71 = (*(v67 + 392))(v15, msgNew, v16, v55);
              v75 = (*(*v11 + 392LL))(v11, msgBase, pFieldBase, v55);
              v76 = 0;
LABEL_122:
              DeltaMsg = ProtoBufHelper::GenerateDeltaMsg(v75, v71, v105, v76);
LABEL_106:
              bAddedAnythingInThisRepeated |= DeltaMsg;
              bContainedAnything = 1;
LABEL_81:
              if ( ++v55 >= pSubMsgDelta )
                goto LABEL_86;
LABEL_82:
              v54 = *(v16 + 44);
              break;
            case 12:
              v62 = *(*pReflectionDelta + 544LL);
              if ( v55 >= nRepeatedLengthNew )
LABEL_115:
                std::string::string(s2, *(v16 + 128));
              else
LABEL_98:
                (*(*v15 + 376LL))(s2, v15, msgNew, v16, v55);
              v62(pReflectionDelta, pMsgDelta, v111, s2);
              v63 = s2[0] - 24;
              if ( s2[0] - 24 != &std::string::_Rep::_S_empty_rep_storage )
              {
                if ( &_pthread_key_create != 0 )
                {
                  v64 = _InterlockedExchangeAdd(v63 + 4, 0xFFFFFFFF);
                }
                else
                {
                  v101 = *(s2[0] - 2);
                  v53 = (v101 - 1);
                  *(s2[0] - 2) = v53;
                  v64 = v101;
                }
                if ( v64 <= 0 )
                  std::string::_Rep::_M_destroy(v63, s1);
              }
              goto LABEL_81;
            case 14:
              v58 = *(*pReflectionDelta + 552LL);
              if ( v55 >= nRepeatedLengthNew )
LABEL_84:
                v59 = *(v16 + 128);
              else
                v59 = (*(*v15 + 384LL))(v15, msgNew, v16, v55, v52);
LABEL_85:
              ++v55;
              v58(pReflectionDelta, pMsgDelta, v111, v59, v52);
              if ( v55 >= pSubMsgDelta )
                goto LABEL_86;
              goto LABEL_82;
            default:
              goto LABEL_81;
          }
        }
      }
LABEL_86:
      if ( bAddedAnythingInThisRepeated == 0 )
        (*(*pReflectionDelta + 56LL))(pReflectionDelta, pMsgDelta, v111);
LABEL_12:
      ++iField;
      v128 += 136;
      if ( *(v125 + 44) <= iField )
        return bContainedAnything;
    }
    if ( v11 != 0 )
    {
      v17 = (*(*v11 + 40LL))(v11, msgBase, pFieldBase);
      v18 = (*(*v15 + 40LL))(v15, msgNew, v16);
      if ( v18 != 0 && v17 != 0 )
      {
        v19 = *(v16 + 44);
        switch ( v19 )
        {
          case 1:
            pSubMsgDeltab = (*(*v15 + 176LL))(v15, msgNew, v16);
            LOBYTE(v21) = pSubMsgDeltab != (*(*v11 + 176LL))(v11, msgBase, pFieldBase);
            goto LABEL_10;
          case 2:
            pSubMsgDeltaa = (*(*v15 + 168LL))(v15, msgNew, v16);
            LOBYTE(v21) = pSubMsgDeltaa != (*(*v11 + 168LL))(v11, msgBase, pFieldBase);
            goto LABEL_10;
          case 3:
          case 16:
          case 18:
            v23 = (*(*v15 + 144LL))(v15, msgNew, v16);
            LOBYTE(v21) = v23 != (*(*v11 + 144LL))(v11, msgBase, pFieldBase);
            goto LABEL_10;
          case 4:
          case 6:
            v25 = (*(*v15 + 160LL))(v15, msgNew, v16);
            LOBYTE(v21) = v25 != (*(*v11 + 160LL))(v11, msgBase, pFieldBase);
            goto LABEL_10;
          case 5:
          case 15:
          case 17:
            v20 = (*(*v15 + 136LL))(v15, msgNew, v16);
            LOBYTE(v21) = v20 != (*(*v11 + 136LL))(v11, msgBase, pFieldBase);
            goto LABEL_10;
          case 7:
          case 13:
            v24 = (*(*v15 + 152LL))(v15, msgNew, v16);
            LOBYTE(v21) = v24 != (*(*v11 + 152LL))(v11, msgBase, pFieldBase);
            goto LABEL_10;
          case 8:
            v40 = (*(*v15 + 184LL))(v15, msgNew, v16);
            LODWORD(v21) = v40 ^ (*(*v11 + 184LL))(v11, msgBase, pFieldBase);
            goto LABEL_10;
          case 9:
          case 12:
            (*(*v11 + 192LL))(s2, v11, msgBase, pFieldBase);
            v21 = s2[0];
            (*(*v15 + 192LL))(s1, v15, msgNew, v16);
            v35 = s1[0];
            v36 = strcmp(s1[0], v21);
            v37 = v35 - 24;
            LOBYTE(v21) = v36 != 0;
            if ( v35 - 24 != &std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create != 0 )
              {
                v95 = _InterlockedExchangeAdd(v37 + 4, 0xFFFFFFFF);
              }
              else
              {
                v95 = *(v35 - 2);
                *(v35 - 2) = v95 - 1;
              }
              if ( v95 <= 0 )
                std::string::_Rep::_M_destroy(v37, &v147);
            }
            v38 = s2[0] - 24;
            if ( s2[0] - 24 != &std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create != 0 )
              {
                v39 = _InterlockedExchangeAdd(v38 + 4, 0xFFFFFFFF);
              }
              else
              {
                v96 = *(s2[0] - 2);
                *(s2[0] - 2) = v96 - 1;
                v39 = v96;
              }
              if ( v39 <= 0 )
                std::string::_Rep::_M_destroy(v38, s1);
            }
            goto LABEL_10;
          case 11:
            goto LABEL_20;
          case 14:
            v41 = (*(*v15 + 200LL))(v15, msgNew, v16);
            LOBYTE(v21) = v41 != (*(*v11 + 200LL))(v11, msgBase, pFieldBase);
LABEL_10:
            if ( v21 == 0 )
              goto LABEL_11;
            goto LABEL_19;
          default:
            goto LABEL_11;
        }
      }
      if ( v18 != 1 && v17 != 0 )
      {
        v19 = *(v16 + 44);
        v26 = 1;
        goto LABEL_21;
      }
      if ( v17 == 1 )
        goto LABEL_11;
    }
    else
    {
      v18 = (*(*v15 + 40LL))(v15, msgNew, v16);
    }
    if ( v18 != 0 )
    {
LABEL_19:
      v19 = *(v16 + 44);
LABEL_20:
      v26 = 0;
LABEL_21:
      v27 = bContainedAnything;
      if ( v19 != 11 )
        v27 = 1;
      bContainedAnything = v27;
      v28 = google::protobuf::Descriptor::FindFieldByNumber(pDescriptorDelta, *(v16 + 40));
      v29 = v28;
      switch ( *(v16 + 44) )
      {
        case 1:
          if ( v26 != 0 )
          {
            (*(*pReflectionDelta + 264LL))(pReflectionDelta, pMsgDelta, v28, *(v16 + 128));
          }
          else
          {
            pFieldBaseg = *(*pReflectionDelta + 264LL);
            (*(*v15 + 176LL))(v15, msgNew, v16);
            (pFieldBaseg)(pReflectionDelta, pMsgDelta, v29, v92);
          }
          goto LABEL_12;
        case 2:
          if ( v26 != 0 )
          {
            (*(*pReflectionDelta + 256LL))(pReflectionDelta, pMsgDelta, v28, COERCE_DOUBLE(*(v16 + 128)));
          }
          else
          {
            pFieldBasei = *(*pReflectionDelta + 256LL);
            (*(*v15 + 168LL))(v15, msgNew, v16);
            (pFieldBasei)(pReflectionDelta, pMsgDelta, v29, v94);
          }
          goto LABEL_12;
        case 3:
        case 0x10:
        case 0x12:
          v32 = *(*pReflectionDelta + 232LL);
          if ( v26 != 0 )
            goto LABEL_28;
          pFieldBasee = *(*pReflectionDelta + 232LL);
          v77 = (*(*v15 + 144LL))(v15, msgNew, v16);
          (pFieldBasee)(pReflectionDelta, pMsgDelta, v29, v77);
          goto LABEL_12;
        case 4:
        case 6:
          v32 = *(*pReflectionDelta + 248LL);
          if ( v26 != 0 )
            goto LABEL_28;
          pFieldBasec = *(*pReflectionDelta + 248LL);
          v34 = (*(*v15 + 160LL))(v15, msgNew, v16);
          (pFieldBasec)(pReflectionDelta, pMsgDelta, v29, v34);
          goto LABEL_12;
        case 5:
        case 0xF:
        case 0x11:
          v30 = *(*pReflectionDelta + 224LL);
          if ( v26 != 0 )
            goto LABEL_25;
          pFieldBasef = *(*pReflectionDelta + 224LL);
          v78 = (*(*v15 + 136LL))(v15, msgNew, v16);
          (pFieldBasef)(pReflectionDelta, pMsgDelta, v29, v78);
          goto LABEL_12;
        case 7:
        case 0xD:
          v30 = *(*pReflectionDelta + 240LL);
          if ( v26 != 0 )
          {
LABEL_25:
            v31 = *(v16 + 128);
            goto LABEL_26;
          }
          pFieldBaseb = *(*pReflectionDelta + 240LL);
          v33 = (*(*v15 + 152LL))(v15, msgNew, v16);
          (pFieldBaseb)(pReflectionDelta, pMsgDelta, v29, v33);
          goto LABEL_12;
        case 8:
          v30 = *(*pReflectionDelta + 272LL);
          if ( v26 != 0 )
          {
            v31 = *(v16 + 128);
LABEL_26:
            v30(pReflectionDelta, pMsgDelta, v28, v31);
          }
          else
          {
            pFieldBaseh = *(*pReflectionDelta + 272LL);
            v93 = (*(*v15 + 184LL))(v15, msgNew, v16);
            (pFieldBaseh)(pReflectionDelta, pMsgDelta, v29, v93);
          }
          goto LABEL_12;
        case 9:
          pFieldBasea = *(*pReflectionDelta + 280LL);
          if ( v26 == 0 )
            goto LABEL_152;
          goto LABEL_48;
        case 0xB:
          v44 = (*(*pReflectionDelta + 296LL))(pReflectionDelta, pMsgDelta, v28, 0);
          if ( v26 != 0 )
          {
            pSubMsgDeltac = v44;
            v45 = (*(*v44 + 24LL))(v44);
            v46 = (*(*v11 + 208LL))(v11, msgBase, pFieldBase, 0);
            v47 = ProtoBufHelper::GenerateDeltaMsg(v46, v45, pSubMsgDeltac, 0);
            if ( v45 != 0 )
              (*(*v45 + 8LL))(v45);
            if ( v47 )
            {
LABEL_58:
              bContainedAnything = 1;
              goto LABEL_12;
            }
          }
          else
          {
            pSubMsgDeltad = v44;
            v90 = (*(*v15 + 208LL))(v15, msgNew, v16, 0, v44);
            v91 = (*(*v11 + 208LL))(v11, msgBase, pFieldBase, 0);
            if ( ProtoBufHelper::GenerateDeltaMsg(v91, v90, pSubMsgDeltad, 0) )
              goto LABEL_58;
          }
          (*(*pReflectionDelta + 56LL))(pReflectionDelta, pMsgDelta, v29);
          break;
        case 0xC:
          pFieldBasea = *(*pReflectionDelta + 280LL);
          if ( v26 != 0 )
LABEL_48:
            std::string::string(s2, *(v16 + 128));
          else
LABEL_152:
            (*(*v15 + 192LL))(s2, v15, msgNew, v16);
          (pFieldBasea)(pReflectionDelta, pMsgDelta, v29, s2);
          v42 = s2[0] - 24;
          if ( s2[0] - 24 != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create != 0 )
            {
              v43 = _InterlockedExchangeAdd(v42 + 4, 0xFFFFFFFF);
            }
            else
            {
              v100 = *(s2[0] - 2);
              *(s2[0] - 2) = v100 - 1;
              v43 = v100;
            }
            if ( v43 <= 0 )
              std::string::_Rep::_M_destroy(v42, s1);
          }
          goto LABEL_12;
        case 0xE:
          v32 = *(*pReflectionDelta + 288LL);
          if ( v26 != 0 )
          {
LABEL_28:
            v32(pReflectionDelta, pMsgDelta, v28, *(v16 + 128));
          }
          else
          {
            pFieldBased = *(*pReflectionDelta + 288LL);
            v48 = (*(*v15 + 200LL))(v15, msgNew, v16);
            (pFieldBased)(pReflectionDelta, pMsgDelta, v29, v48);
          }
          goto LABEL_12;
        default:
          goto LABEL_12;
      }
      goto LABEL_12;
    }
LABEL_11:
    if ( !bForceInclude )
      goto LABEL_12;
    goto LABEL_19;
  }
  return 0;
}


// ProtoBufHelper::ApplyDeltaMsg  (line 1546, @0x0000000001a72060, libserver.so)  // inlines: GetDescriptor, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, field, ~basic_string
// calls: google::protobuf::Descriptor::FindFieldByNumber(int), std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// globals: jpt_1A72168, jpt_1A72443, jpt_1A724AC
void __fastcall ProtoBufHelper::ApplyDeltaMsg(
        google::protobuf::Message *pMsg,
        const google::protobuf::Message *const msgDelta)
{
  __int64 v4; // rax
  google::protobuf::Message *v5; // rdi
  __int64 v6; // rax
  const google::protobuf::Message *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  const google::protobuf::Message *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r13
  int *v13; // r12
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD); // rbx
  unsigned int v16; // eax
  void (__fastcall *v17)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64); // rbx
  __int64 v18; // rax
  void (__fastcall *v19)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD); // rbx
  unsigned int v20; // eax
  void (__fastcall *v21)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rbx
  void (__fastcall *v22)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rbx
  void (__fastcall *v23)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD *); // rbx
  __int64 v24; // rdi
  int v25; // eax
  void (__fastcall *v26)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD); // rbx
  unsigned __int8 v27; // al
  const google::protobuf::Message *v28; // rbx
  google::protobuf::Message *v29; // rax
  int v30; // eax
  unsigned int v31; // ebx
  void (__fastcall *v32)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD, _QWORD); // r15
  unsigned int v33; // eax
  void (__fastcall *v34)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD, __int64); // r15
  __int64 v35; // rax
  void (__fastcall *v36)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD, _QWORD); // r15
  unsigned int v37; // eax
  void (__fastcall *v38)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD); // r15
  void (__fastcall *v39)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD); // r15
  void (__fastcall *v40)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD, _QWORD *); // r15
  __int64 v41; // rdi
  int v42; // eax
  const google::protobuf::Message *v43; // r15
  google::protobuf::Message *v44; // rax
  void (__fastcall *v45)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD, __int64); // r15
  __int64 v46; // r8
  void (__fastcall *v47)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64); // r15
  __int64 v48; // rax
  void (__fastcall *v49)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD); // r15
  unsigned int v50; // eax
  void (__fastcall *v51)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD); // r15
  unsigned __int8 v52; // al
  google::protobuf::Message *v53; // r15
  const google::protobuf::Message *v54; // rax
  void (__fastcall *v55)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD *); // r15
  void (__fastcall *v56)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // r15
  void (__fastcall *v57)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // r15
  int v58; // edx
  int v59; // edx
  google::protobuf::Descriptor *pDescriptor; // [rsp+8h] [rbp-98h]
  __int64 v61; // [rsp+10h] [rbp-90h]
  __int64 v62; // [rsp+18h] [rbp-88h]
  int iField; // [rsp+24h] [rbp-7Ch]
  int v65; // [rsp+38h] [rbp-68h]
  int nRepeatedDeltaSize; // [rsp+3Ch] [rbp-64h]
  const google::protobuf::FieldDescriptor *pField; // [rsp+48h] [rbp-58h]
  char v69; // [rsp+5Fh] [rbp-41h] BYREF
  _QWORD v70[8]; // [rsp+60h] [rbp-40h] BYREF

  v4 = (*(*pMsg + 152LL))(pMsg);
  v5 = pMsg;
  pDescriptor = v4;
  v6 = *pMsg;
  v7 = msgDelta;
  v8 = (*(v6 + 144))(v5);
  v9 = (*(*msgDelta + 152LL))(msgDelta);
  v10 = msgDelta;
  v11 = v9;
  v62 = v9;
  v12 = (*(*v7 + 144LL))(v10);
  if ( *(v11 + 44) > 0 )
  {
    iField = 0;
    v61 = 0;
    do
    {
      v13 = (*(v62 + 48) + v61);
      pField = google::protobuf::Descriptor::FindFieldByNumber(pDescriptor, v13[10]);
      if ( pField != 0 )
      {
        v14 = *v12;
        if ( v13[12] == 3 )
        {
          nRepeatedDeltaSize = (*(v14 + 48))(v12, msgDelta, v13);
          v30 = (*(*v8 + 48LL))(v8, pMsg, pField);
          v65 = v30;
          if ( nRepeatedDeltaSize > 0 )
          {
            v31 = 0;
            if ( v30 > 0 )
            {
LABEL_26:
              switch ( v13[11] )
              {
                case 1:
                  v39 = *(*v8 + 448LL);
                  (*(*v12 + 360LL))(v12, msgDelta, v13, v31);
                  v39(v8, pMsg, pField, v31);
                  goto LABEL_29;
                case 2:
                  v38 = *(*v8 + 440LL);
                  (*(*v12 + 352LL))(v12, msgDelta, v13, v31);
                  v38(v8, pMsg, pField, v31);
                  goto LABEL_29;
                case 3:
                case 16:
                case 18:
                  v34 = *(*v8 + 416LL);
                  v35 = (*(*v12 + 328LL))(v12, msgDelta, v13, v31);
                  goto LABEL_33;
                case 4:
                case 6:
                  v34 = *(*v8 + 432LL);
                  v35 = (*(*v12 + 344LL))(v12, msgDelta, v13, v31);
                  goto LABEL_33;
                case 5:
                case 15:
                case 17:
                  v32 = *(*v8 + 408LL);
                  v33 = (*(*v12 + 320LL))(v12, msgDelta, v13, v31);
                  v32(v8, pMsg, pField, v31, v33);
                  goto LABEL_29;
                case 7:
                case 13:
                  v36 = *(*v8 + 424LL);
                  v37 = (*(*v12 + 336LL))(v12, msgDelta, v13, v31);
                  v36(v8, pMsg, pField, v31, v37);
                  goto LABEL_29;
                case 8:
                  v45 = *(*v8 + 456LL);
                  v46 = (*(*v12 + 368LL))(v12, msgDelta, v13, v31);
                  v45(v8, pMsg, pField, v31, v46);
                  goto LABEL_29;
                case 9:
                case 12:
                  v40 = *(*v8 + 464LL);
                  (*(*v12 + 376LL))(v70, v12, msgDelta, v13, v31);
                  v40(v8, pMsg, pField, v31, v70);
LABEL_40:
                  v41 = v70[0] - 24LL;
                  if ( (v70[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
                  {
                    if ( &_pthread_key_create != 0 )
                    {
                      v42 = _InterlockedExchangeAdd((v41 + 16), 0xFFFFFFFF);
                    }
                    else
                    {
                      v59 = *(v70[0] - 8LL);
                      *(v70[0] - 8LL) = v59 - 1;
                      v42 = v59;
                    }
                    if ( v42 <= 0 )
                      std::string::_Rep::_M_destroy(v41, &v69);
                  }
                  goto LABEL_29;
                case 11:
                  v43 = (*(*v12 + 392LL))(v12, msgDelta, v13, v31);
                  v44 = (*(*v8 + 480LL))(v8, pMsg, pField, v31);
                  ProtoBufHelper::ApplyDeltaMsg(v44, v43);
                  goto LABEL_29;
                case 14:
                  v34 = *(*v8 + 472LL);
                  v35 = (*(*v12 + 384LL))(v12, msgDelta, v13, v31);
LABEL_33:
                  v34(v8, pMsg, pField, v31, v35);
                  break;
                default:
                  goto LABEL_29;
              }
              goto LABEL_29;
            }
            while ( 1 )
            {
              switch ( v13[11] )
              {
                case 1:
                  v57 = *(*v8 + 528LL);
                  (*(*v12 + 360LL))(v12, msgDelta, v13, v31);
                  v57(v8, pMsg, pField);
                  break;
                case 2:
                  v56 = *(*v8 + 520LL);
                  (*(*v12 + 352LL))(v12, msgDelta, v13, v31);
                  v56(v8, pMsg, pField);
                  break;
                case 3:
                case 16:
                case 18:
                  v47 = *(*v8 + 496LL);
                  v48 = (*(*v12 + 328LL))(v12, msgDelta, v13, v31);
                  goto LABEL_48;
                case 4:
                case 6:
                  v47 = *(*v8 + 512LL);
                  v48 = (*(*v12 + 344LL))(v12, msgDelta, v13, v31);
                  goto LABEL_48;
                case 5:
                case 15:
                case 17:
                  v49 = *(*v8 + 488LL);
                  v50 = (*(*v12 + 320LL))(v12, msgDelta, v13, v31);
                  goto LABEL_50;
                case 7:
                case 13:
                  v49 = *(*v8 + 504LL);
                  v50 = (*(*v12 + 336LL))(v12, msgDelta, v13, v31);
LABEL_50:
                  v49(v8, pMsg, pField, v50);
                  break;
                case 8:
                  v51 = *(*v8 + 536LL);
                  v52 = (*(*v12 + 368LL))(v12, msgDelta, v13, v31);
                  v51(v8, pMsg, pField, v52);
                  break;
                case 9:
                case 12:
                  v55 = *(*v8 + 544LL);
                  (*(*v12 + 376LL))(v70, v12, msgDelta, v13, v31);
                  v55(v8, pMsg, pField, v70);
                  goto LABEL_40;
                case 11:
                  v53 = (*(*v8 + 560LL))(v8, pMsg, pField, 0);
                  v54 = (*(*v12 + 392LL))(v12, msgDelta, v13, v31);
                  ProtoBufHelper::ApplyDeltaMsg(v53, v54);
                  break;
                case 14:
                  v47 = *(*v8 + 552LL);
                  v48 = (*(*v12 + 384LL))(v12, msgDelta, v13, v31);
LABEL_48:
                  v47(v8, pMsg, pField, v48);
                  break;
                default:
                  break;
              }
LABEL_29:
              if ( ++v31 == nRepeatedDeltaSize )
                break;
              if ( v65 > v31 )
                goto LABEL_26;
            }
          }
        }
        else if ( (*(v14 + 40))(v12, msgDelta, v13) != 0 )
        {
          switch ( v13[11] )
          {
            case 1:
              v22 = *(*v8 + 264LL);
              (*(*v12 + 176LL))(v12, msgDelta, v13);
              v22(v8, pMsg, pField);
              break;
            case 2:
              v21 = *(*v8 + 256LL);
              (*(*v12 + 168LL))(v12, msgDelta, v13);
              v21(v8, pMsg, pField);
              break;
            case 3:
            case 16:
            case 18:
              v17 = *(*v8 + 232LL);
              v18 = (*(*v12 + 144LL))(v12, msgDelta, v13);
              goto LABEL_11;
            case 4:
            case 6:
              v17 = *(*v8 + 248LL);
              v18 = (*(*v12 + 160LL))(v12, msgDelta, v13);
              goto LABEL_11;
            case 5:
            case 15:
            case 17:
              v15 = *(*v8 + 224LL);
              v16 = (*(*v12 + 136LL))(v12, msgDelta, v13);
              v15(v8, pMsg, pField, v16);
              break;
            case 7:
            case 13:
              v19 = *(*v8 + 240LL);
              v20 = (*(*v12 + 152LL))(v12, msgDelta, v13);
              v19(v8, pMsg, pField, v20);
              break;
            case 8:
              v26 = *(*v8 + 272LL);
              v27 = (*(*v12 + 184LL))(v12, msgDelta, v13);
              v26(v8, pMsg, pField, v27);
              break;
            case 9:
            case 12:
              v23 = *(*v8 + 280LL);
              (*(*v12 + 192LL))(v70, v12, msgDelta, v13);
              v23(v8, pMsg, pField, v70);
              v24 = v70[0] - 24LL;
              if ( (v70[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
              {
                if ( &_pthread_key_create != 0 )
                {
                  v25 = _InterlockedExchangeAdd((v24 + 16), 0xFFFFFFFF);
                }
                else
                {
                  v58 = *(v70[0] - 8LL);
                  *(v70[0] - 8LL) = v58 - 1;
                  v25 = v58;
                }
                if ( v25 <= 0 )
                  std::string::_Rep::_M_destroy(v24, &v69);
              }
              break;
            case 11:
              v28 = (*(*v12 + 208LL))(v12, msgDelta, v13, 0);
              v29 = (*(*v8 + 296LL))(v8, pMsg, pField, 0);
              ProtoBufHelper::ApplyDeltaMsg(v29, v28);
              break;
            case 14:
              v17 = *(*v8 + 288LL);
              v18 = (*(*v12 + 200LL))(v12, msgDelta, v13);
LABEL_11:
              v17(v8, pMsg, pField, v18);
              break;
            default:
              break;
          }
        }
      }
      ++iField;
      v61 += 136;
    }
    while ( *(v62 + 44) > iField );
  }
}


// ProtoBufHelper::ConvertProtoBufToJSON  (line 1664, @0x0000000001a729b0, libserver.so)  // inlines: GetDescriptor, PeekPut, PutChar, PutTabs, PutTypeBin<char>, WasLastCharacterCR, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, c_str, cpp_type, field, operator[], ~basic_string
// calls: CUtlBuffer::SetBufferType, CUtlBuffer::PutString, CUtlBuffer::Printf, std::string::_Rep::_M_destroy(std::allocator<char> const&), V_AddBackSlashesToSpecialChars, operator delete [], CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// strings: "\"%s\":", "\"%s\":%u", "\"%s\":%d", "\"%s\":%lld", "true", "false" (13 total)
// globals: jpt_1A72DCC, jpt_1A72ACE
void __fastcall ProtoBufHelper::ConvertProtoBufToJSON(
        const google::protobuf::Message *const msg,
        CUtlBuffer *const buffer,
        bool bZeroTerminate)
{
  __int64 v5; // r13
  __int64 v6; // r12
  const char *v7; // rbx
  __int64 v8; // rax
  const google::protobuf::Message *v9; // r12
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rax
  char v14; // al
  const char *v15; // rcx
  double v16; // xmm0_8
  double v17; // xmm0_8
  __int64 v18; // rax
  const char *v19; // rdi
  int v20; // eax
  const char *v21; // rdx
  unsigned int v22; // ebx
  const google::protobuf::Message *v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  char v27; // al
  const char *v28; // rdx
  double v29; // xmm0_8
  double v30; // xmm0_8
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  int m_Put; // eax
  CUtlBuffer *v36; // r12
  int m_nTab; // ebx
  int m_nOffset; // esi
  int v39; // edx
  int v40; // edx
  char *pszString; // [rsp+18h] [rbp-88h]
  int nFieldCount; // [rsp+24h] [rbp-7Ch]
  const google::protobuf::Descriptor *pDescriptor; // [rsp+28h] [rbp-78h]
  __int64 iField; // [rsp+30h] [rbp-70h]
  char v47; // [rsp+4Fh] [rbp-51h] BYREF
  __int64 v48; // [rsp+50h] [rbp-50h] BYREF
  const char *v49; // [rsp+60h] [rbp-40h] BYREF

  pDescriptor = (*(*msg + 152LL))(msg);
  v5 = (*(*msg + 144LL))(msg);
  CUtlBuffer::SetBufferType(buffer, 1, 1);
  CUtlBuffer::PutString(buffer, "{");
  nFieldCount = 0;
  iField = 0;
  if ( pDescriptor->field_count_ > 0 )
  {
    do
    {
      v6 = &pDescriptor->fields_[iField];
      v7 = **v6;
      v8 = *v5;
      if ( *(v6 + 48) == 3 )
      {
        if ( (*(v8 + 48))(v5, msg, v6) == 0 )
          goto LABEL_10;
        if ( nFieldCount != 0 )
          CUtlBuffer::PutString(buffer, ",");
        v21 = v7;
        v22 = 0;
        CUtlBuffer::Printf(buffer, "\"%s\":[", v21);
        while ( v22 < (*(*v5 + 48LL))(v5, msg, v6) )
        {
          if ( v22 != 0 )
            CUtlBuffer::PutString(buffer, ",");
          switch ( *(v6 + 44) )
          {
            case 1:
              (*(*v5 + 360LL))(v5, msg, v6, v22);
              CUtlBuffer::Printf(buffer, "%f", v30);
              break;
            case 2:
              v29 = (*(*v5 + 352LL))(v5, msg, v6, v22);
              CUtlBuffer::Printf(buffer, "%.3f", *&v29);
              break;
            case 3:
            case 0x10:
            case 0x12:
              v34 = (*(*v5 + 328LL))(v5, msg, v6, v22);
              CUtlBuffer::Printf(buffer, "%lld", v34);
              break;
            case 4:
            case 6:
              v31 = (*(*v5 + 344LL))(v5, msg, v6, v22);
              CUtlBuffer::Printf(buffer, "%llu", v31);
              break;
            case 5:
            case 0xF:
            case 0x11:
              v33 = (*(*v5 + 320LL))(v5, msg, v6, v22);
              CUtlBuffer::Printf(buffer, "%d", v33);
              break;
            case 7:
            case 0xD:
              v32 = (*(*v5 + 336LL))(v5, msg, v6, v22);
              CUtlBuffer::Printf(buffer, "%u", v32);
              break;
            case 8:
              v27 = (*(*v5 + 368LL))(v5, msg, v6, v22);
              v28 = "true";
              if ( v27 == 0 )
                v28 = "false";
              CUtlBuffer::Printf(buffer, "%s", v28);
              break;
            case 9:
            case 0xC:
              (*(*v5 + 376LL))(&v48, v5, msg, v6, v22);
              pszString = V_AddBackSlashesToSpecialChars(v48);
              CUtlBuffer::Printf(buffer, "\"%s\",", pszString);
              if ( pszString != 0 )
                operator delete[](pszString);
              v24 = v48 - 24;
              if ( (v48 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              {
                if ( &_pthread_key_create != 0 )
                {
                  v25 = _InterlockedExchangeAdd((v24 + 16), 0xFFFFFFFF);
                }
                else
                {
                  v40 = *(v48 - 8);
                  *(v48 - 8) = v40 - 1;
                  v25 = v40;
                }
                if ( v25 <= 0 )
                  std::string::_Rep::_M_destroy(v24, &v47);
              }
              break;
            case 0xA:
            case 0xB:
              v23 = (*(*v5 + 392LL))(v5, msg, v6, v22);
              ProtoBufHelper::ConvertProtoBufToJSON(v23, buffer, 0);
              break;
            case 0xE:
              v26 = (*(*v5 + 384LL))(v5, msg, v6, v22);
              CUtlBuffer::Printf(buffer, "%d", *(v26 + 16));
              break;
            default:
              break;
          }
          ++v22;
        }
        CUtlBuffer::PutString(buffer, "]");
      }
      else
      {
        if ( (*(v8 + 40))(v5, msg, v6) == 0 && *(v6 + 120) == 0 )
          goto LABEL_10;
        if ( nFieldCount != 0 )
          CUtlBuffer::PutString(buffer, ",");
        switch ( *(v6 + 44) )
        {
          case 1:
            (*(*v5 + 176LL))(v5, msg, v6);
            CUtlBuffer::Printf(buffer, "\"%s\":%f", v7, v17);
            break;
          case 2:
            v16 = (*(*v5 + 168LL))(v5, msg, v6);
            CUtlBuffer::Printf(buffer, "\"%s\":%.3f", v7, *&v16);
            break;
          case 3:
          case 0x10:
          case 0x12:
            v13 = (*(*v5 + 144LL))(v5, msg, v6);
            CUtlBuffer::Printf(buffer, "\"%s\":%lld", v7, v13);
            break;
          case 4:
          case 6:
            v18 = (*(*v5 + 160LL))(v5, msg, v6);
            CUtlBuffer::Printf(buffer, "\"%s\":%llu", v7, v18);
            break;
          case 5:
          case 0xF:
          case 0x11:
            v12 = (*(*v5 + 136LL))(v5, msg, v6);
            goto LABEL_15;
          case 7:
          case 0xD:
            v11 = (*(*v5 + 152LL))(v5, msg, v6);
            CUtlBuffer::Printf(buffer, "\"%s\":%u", v7, v11);
            break;
          case 8:
            v14 = (*(*v5 + 184LL))(v5, msg, v6);
            v15 = "true";
            if ( v14 == 0 )
              v15 = "false";
            CUtlBuffer::Printf(buffer, "\"%s\":%s", v7, v15);
            break;
          case 9:
          case 0xC:
            (*(*v5 + 192LL))(&v49, v5, msg, v6);
            CUtlBuffer::Printf(buffer, "\"%s\":\"%s\"", v7, v49);
            v19 = v49 - 24;
            if ( v49 - 24 != &std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create != 0 )
              {
                v20 = _InterlockedExchangeAdd(v19 + 4, 0xFFFFFFFF);
              }
              else
              {
                v39 = *(v49 - 2);
                *(v49 - 2) = v39 - 1;
                v20 = v39;
              }
              if ( v20 <= 0 )
                std::string::_Rep::_M_destroy(v19, &v47);
            }
            break;
          case 0xA:
          case 0xB:
            v9 = (*(*v5 + 208LL))(v5, msg, v6, 0);
            CUtlBuffer::Printf(buffer, "\"%s\":", v7);
            ProtoBufHelper::ConvertProtoBufToJSON(v9, buffer, 0);
            break;
          case 0xE:
            v12 = *((*(*v5 + 200LL))(v5, msg, v6) + 16);
LABEL_15:
            CUtlBuffer::Printf(buffer, "\"%s\":%d", v7, v12);
            break;
          default:
            break;
        }
      }
      ++nFieldCount;
LABEL_10:
      v10 = iField++;
    }
    while ( pDescriptor->field_count_ > v10 + 1 );
  }
  CUtlBuffer::PutString(buffer, "}");
  if ( bZeroTerminate )
  {
    if ( (buffer->m_Flags & 1) != 0 )
    {
      m_Put = buffer->m_Put;
      m_nOffset = buffer->m_nOffset;
      if ( m_Put != m_nOffset && buffer->m_Memory.m_pMemory[m_Put - 1 - m_nOffset] == 10 )
      {
        if ( (buffer->m_Flags & 0x10) != 0 )
        {
LABEL_61:
          v36 = buffer;
          m_nTab = 0;
          goto LABEL_62;
        }
LABEL_70:
        m_nTab = buffer->m_nTab;
        v36 = buffer;
LABEL_62:
        while ( --m_nTab >= 0 )
        {
          while ( CUtlBuffer::CheckPut(v36, 1) )
          {
            v36->m_Memory.m_pMemory[v36->m_Put - v36->m_nOffset] = 9;
            ++v36->m_Put;
            CUtlBuffer::AddNullTermination(v36);
            if ( --m_nTab < 0 )
              goto LABEL_65;
          }
        }
        goto LABEL_65;
      }
    }
    else
    {
      m_Put = buffer->m_Put;
    }
    if ( m_Put != 0 )
    {
LABEL_65:
      if ( CUtlBuffer::CheckPut(buffer, 1) )
      {
        buffer->m_Memory.m_pMemory[buffer->m_Put - buffer->m_nOffset] = 0;
        ++buffer->m_Put;
        CUtlBuffer::AddNullTermination(buffer);
      }
      return;
    }
    if ( (buffer->m_Flags & 0x10) != 0 )
      goto LABEL_61;
    goto LABEL_70;
  }
}


// SetProtobufFieldFromJSON  (line 1808, @0x0000000001a731e0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, c_str, ~basic_string
// calls: Warning, google::protobuf::EnumDescriptor::FindValueByNumber(int), V_atoui64, V_atoi, std::string::string(char const*,std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: JSONParserCallback
// strings: "ProtoBufHelper::ParseJSON: Failed to parse JSON type %d into protobuf type %d for field ', "ProtoBufHelper::ParseJSON: Array size mismatch in field '%s' - JSON %d, protobuf %d\n"
// globals: jpt_1A7321C
// local variable allocation has failed, the output may be wrong!
bool __fastcall SetProtobufFieldFromJSON(
        google::protobuf::Message *pMessage,
        const google::protobuf::FieldDescriptor *pField,
        const google::protobuf::Reflection *pReflection,
        int nArrayIndex,
        JSON_type eJSONType,
        const JSON_value *pJSONValue)
{
  double v6; // xmm0_8
  google::protobuf::FieldDescriptor::Type type; // eax
  __int64 v11; // rdx
  bool result; // al
  __int64 ValueByNumber; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  double float_value; // xmm0_8
  const google::protobuf::FieldDescriptor *v17; // rdx
  google::protobuf::Message *v18; // rsi
  __int64 v19; // rax
  const google::protobuf::Reflection *v20; // rdi
  __int64 v21; // rax
  void (__fastcall *v22)(const google::protobuf::Reflection *, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, __int64); // r14
  __int64 v23; // rax
  __int64 v24; // rax
  void (__fastcall *v25)(const google::protobuf::Reflection *, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD); // r14
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  void (__fastcall *v29)(const google::protobuf::Reflection *, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD *); // r15
  __int64 v30; // rdi
  int v32; // eax
  int v33; // eax
  _BOOL8 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  JSON_int_t v37; // rcx
  __int64 v38; // rax
  JSON_int_t v39; // rcx
  __int64 v40; // rax
  JSON_int_t integer_value; // rcx
  int v42; // eax
  int v43; // edx
  const JSON_value *pJSONValuea; // [rsp+0h] [rbp-60h]
  JSON_type eJSONTypea; // [rsp+Ch] [rbp-54h]
  char v46; // [rsp+1Eh] [rbp-42h] BYREF
  char v47; // [rsp+1Fh] [rbp-41h] BYREF
  _QWORD v48[8]; // [rsp+20h] [rbp-40h] BYREF

  if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
  {
    pJSONValuea = pJSONValue;
    eJSONTypea = eJSONType;
    v32 = (*(*pReflection + 48LL))(pReflection, pMessage, pField);
    *&eJSONType = eJSONTypea;
    pJSONValue = pJSONValuea;
    if ( v32 != nArrayIndex )
    {
      v33 = (*(*pReflection + 48LL))(pReflection, pMessage, pField, *&nArrayIndex, eJSONTypea, pJSONValuea);
      Warning(
        "ProtoBufHelper::ParseJSON: Array size mismatch in field '%s' - JSON %d, protobuf %d\n",
        pField->full_name_->_M_dataplus._M_p,
        nArrayIndex,
        v33);
      return 0;
    }
  }
  type = pField->type_;
  v11 = type;
  switch ( type )
  {
    case google::protobuf::FieldDescriptor::Type::TYPE_DOUBLE:
      if ( eJSONType != JSON_T_FLOAT )
        goto LABEL_4;
      v15 = *pReflection;
      float_value = pJSONValue->vu.float_value;
      if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
        (*(v15 + 528))(pReflection, pMessage, pField, *&nArrayIndex, float_value);
      else
        (*(v15 + 264))(pReflection, pMessage, pField, *&nArrayIndex, float_value);
      return 1;
    case google::protobuf::FieldDescriptor::Type::TYPE_FLOAT:
      if ( eJSONType == JSON_T_FLOAT )
      {
        v17 = pField;
        v19 = *pReflection;
        v6 = pJSONValue->vu.float_value;
        v18 = pMessage;
        v20 = pReflection;
        if ( pField->label_ != google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
        {
LABEL_18:
          (*(v19 + 256))(v20, v18, v17, *&nArrayIndex, v6);
          return 1;
        }
      }
      else
      {
        if ( eJSONType != JSON_T_INTEGER )
          goto LABEL_4;
        v17 = pField;
        v18 = pMessage;
        v19 = *pReflection;
        v20 = pReflection;
        *&v6 = pJSONValue->vu.integer_value;
        if ( pField->label_ != google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          goto LABEL_18;
      }
      (*(v19 + 520))(v20, v18, v17, *&nArrayIndex, v6);
      return 1;
    case google::protobuf::FieldDescriptor::Type::TYPE_UINT64:
    case google::protobuf::FieldDescriptor::Type::TYPE_FIXED64:
      if ( eJSONType != JSON_T_INTEGER )
      {
        if ( eJSONType != JSON_T_STRING )
          goto LABEL_4;
        v21 = *pReflection;
        if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v22 = *(v21 + 512);
        else
          v22 = *(v21 + 248);
        v23 = V_atoui64(pJSONValue->vu.integer_value, pField, v11, *&nArrayIndex);
        v22(pReflection, pMessage, pField, v23);
        return 1;
      }
      v40 = *pReflection;
      integer_value = pJSONValue->vu.integer_value;
      if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
        (*(v40 + 512))(pReflection, pMessage, pField, integer_value);
      else
        (*(v40 + 248))(pReflection, pMessage, pField, integer_value);
      return 1;
    case google::protobuf::FieldDescriptor::Type::TYPE_INT32:
      if ( eJSONType != JSON_T_INTEGER )
      {
        if ( eJSONType != JSON_T_STRING )
          goto LABEL_4;
        v24 = *pReflection;
        if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v25 = *(v24 + 488);
        else
          v25 = *(v24 + 224);
        goto LABEL_32;
      }
      v38 = *pReflection;
      v39 = pJSONValue->vu.integer_value;
      if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
        (*(v38 + 488))(pReflection, pMessage, pField, v39);
      else
        (*(v38 + 224))(pReflection, pMessage, pField, v39);
      return 1;
    case google::protobuf::FieldDescriptor::Type::TYPE_FIXED32:
    case google::protobuf::FieldDescriptor::Type::TYPE_UINT32:
      if ( eJSONType != JSON_T_INTEGER )
      {
        if ( eJSONType != JSON_T_STRING )
          goto LABEL_4;
        v26 = *pReflection;
        if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
          v25 = *(v26 + 504);
        else
          v25 = *(v26 + 240);
LABEL_32:
        v27 = V_atoi(pJSONValue->vu.integer_value);
        v25(pReflection, pMessage, pField, v27);
        return 1;
      }
      v36 = *pReflection;
      v37 = pJSONValue->vu.integer_value;
      if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
        (*(v36 + 504))(pReflection, pMessage, pField, v37);
      else
        (*(v36 + 240))(pReflection, pMessage, pField, v37);
      return 1;
    case google::protobuf::FieldDescriptor::Type::TYPE_BOOL:
      if ( (eJSONType - 8) > 1 )
        goto LABEL_4;
      v34 = eJSONType == JSON_T_TRUE;
      v35 = *pReflection;
      if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
        (*(v35 + 536))(pReflection, pMessage, pField, v34, *&eJSONType, pJSONValue);
      else
        (*(v35 + 272))(pReflection, pMessage, pField, v34, *&eJSONType, pJSONValue);
      return 1;
    case google::protobuf::FieldDescriptor::Type::TYPE_STRING:
      if ( eJSONType != JSON_T_STRING )
        goto LABEL_4;
      v28 = *pReflection;
      if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
        v29 = *(v28 + 544);
      else
        v29 = *(v28 + 280);
      std::string::string(v48, pJSONValue->vu.integer_value, &v46);
      v29(pReflection, pMessage, pField, v48);
      v30 = v48[0] - 24LL;
      if ( (v48[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create != 0 )
        {
          v42 = _InterlockedExchangeAdd((v30 + 16), 0xFFFFFFFF);
        }
        else
        {
          v43 = *(v48[0] - 8LL);
          *(v48[0] - 8LL) = v43 - 1;
          v42 = v43;
        }
        if ( v42 <= 0 )
          std::string::_Rep::_M_destroy(v30, &v47);
      }
      return 1;
    case google::protobuf::FieldDescriptor::Type::TYPE_ENUM:
      result = 0;
      if ( eJSONType == JSON_T_INTEGER )
      {
        ValueByNumber = google::protobuf::EnumDescriptor::FindValueByNumber(
                          pField->enum_type_,
                          pJSONValue->vu.integer_value);
        if ( ValueByNumber != 0 )
        {
          v14 = *pReflection;
          if ( pField->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
            (*(v14 + 552))(pReflection, pMessage, pField, ValueByNumber);
          else
            (*(v14 + 288))(pReflection, pMessage, pField, ValueByNumber);
          return 1;
        }
        else
        {
          return 1;
        }
      }
      return result;
    default:
LABEL_4:
      Warning(
        "ProtoBufHelper::ParseJSON: Failed to parse JSON type %d into protobuf type %d for field '%s'!\n",
        eJSONType,
        type,
        pField->full_name_->_M_dataplus._M_p);
      return 0;
  }
}


// JSONParserCallback  (line 2042, @0x0000000001a744c0, libserver.so)  // inlines: Element, GetDescriptor, Pop, Top, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, c_str, operator[], ~basic_string
// calls: std::string::string(char const*,std::allocator<char> const&), google::protobuf::Descriptor::FindFieldByName(std::string const&), Msg, std::string::_Rep::_M_destroy(std::allocator<char> const&), SetProtobufFieldFromJSON, Warning, CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> >::Push, std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// strings: "ProtoBufHelper::ParseJSON: Ignoring extra JSON key '%s', which is not found in protobuf m, "ProtoBufHelper::ParseJSON: Array Begin found on non-repeated field: '%s'!\n", "ProtoBufHelper::ParseJSON: Array End found on non-repeated field: '%s'!\n"
// globals: jpt_1A74523
int __fastcall JSONParserCallback(void *void_ctx, int type, const JSON_value *value)
{
  _QWORD *v6; // rbx
  google::protobuf::Descriptor *v7; // r15
  const google::protobuf::Reflection *v8; // rax
  __int64 FieldByName; // rax
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  int v12; // eax
  int result; // eax
  const google::protobuf::FieldDescriptor *v14; // rsi
  bool v15; // dl
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // edx
  char v21; // [rsp+Eh] [rbp-52h] BYREF
  char v22; // [rsp+Fh] [rbp-51h] BYREF
  JSONParserMessageField_t newMessageField; // [rsp+10h] [rbp-50h] BYREF

  v6 = (*void_ctx + 24LL * (*(void_ctx + 4) - 1));
  v7 = (*(**v6 + 152LL))(*v6);
  v8 = (*(**v6 + 144LL))(*v6);
  switch ( type )
  {
    case 1:
      v16 = v6[1];
      if ( *(v16 + 48) == 3 )
        return 1;
      Warning("ProtoBufHelper::ParseJSON: Array Begin found on non-repeated field: '%s'!\n", **(v16 + 8));
      return 0;
    case 2:
      v17 = v6[1];
      if ( *(v17 + 48) == 3 )
        return 1;
      Warning("ProtoBufHelper::ParseJSON: Array End found on non-repeated field: '%s'!\n", **(v17 + 8));
      return 0;
    case 3:
      if ( *(void_ctx + 4) != 1 || *(void_ctx + 32) != 0 )
      {
        newMessageField.pField = 0;
        newMessageField.nArrayIndex = 0;
        v18 = v6[1];
        if ( *(v18 + 48) == 3 )
        {
          newMessageField.pMessage = (*(*v8 + 560LL))(v8, *v6, v18, 0);
          ++*(v6 + 4);
        }
        else
        {
          newMessageField.pMessage = (*(*v8 + 296LL))(v8, *v6, v18, 0);
        }
        CUtlStack<JSONParserMessageField_t,CUtlMemory<JSONParserMessageField_t,int>>::Push(void_ctx, &newMessageField);
      }
      else
      {
        *(void_ctx + 32) = 1;
      }
      return 1;
    case 4:
      --*(void_ctx + 4);
      return 1;
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
      v14 = v6[1];
      if ( v14 == 0 )
        return 1;
      v15 = SetProtobufFieldFromJSON(*v6, v14, v8, *(v6 + 4), type, value);
      result = 0;
      if ( v15 )
      {
        if ( *(v6[1] + 48LL) == 3 )
          ++*(v6 + 4);
        return 1;
      }
      return result;
    case 11:
      std::string::string(&newMessageField, value->vu.integer_value, &v21);
      FieldByName = google::protobuf::Descriptor::FindFieldByName(v7, &newMessageField);
      v6[1] = FieldByName;
      v10 = (newMessageField.pMessage - 24);
      if ( (newMessageField.pMessage - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create != 0 )
        {
          v19 = _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF);
        }
        else
        {
          v19 = *(newMessageField.pMessage - 2);
          *(newMessageField.pMessage - 2) = v19 - 1;
        }
        if ( v19 <= 0 )
          std::string::_Rep::_M_destroy(v10, &v22);
        FieldByName = v6[1];
      }
      *(v6 + 4) = 0;
      if ( FieldByName == 0 )
      {
        (*(**v6 + 16LL))(&newMessageField);
        Msg(
          "ProtoBufHelper::ParseJSON: Ignoring extra JSON key '%s', which is not found in protobuf message '%s'!\n",
          value->vu.str.value,
          newMessageField.pMessage);
        v11 = (newMessageField.pMessage - 24);
        if ( (newMessageField.pMessage - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create != 0 )
          {
            v12 = _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF);
          }
          else
          {
            v20 = *(newMessageField.pMessage - 2);
            *(newMessageField.pMessage - 2) = v20 - 1;
            v12 = v20;
          }
          if ( v12 <= 0 )
            std::string::_Rep::_M_destroy(v11, &v22);
        }
      }
      return 1;
    default:
      return 1;
  }
}


// ProtoBufHelper::ParseJSON  (line 2171, @0x0000000001a74780, libserver.so)  // inlines: CUtlMemory, CUtlStack, GetBytesRemaining, GetChar, GetTypeBin<char>, PeekGet, ProtobufJSONParserContext_t, ResetDbgInfo, operator[], ~ProtobufJSONParserContext_t
// calls: init_JSON_config, CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> >::Push, new_JSON_parser, CUtlBuffer::CheckGet, JSON_parser_char, JSON_parser_done, delete_JSON_parser, CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> >::~CUtlStack, _Unwind_Resume
// globals: JSONParserCallback(void *,int,JSON_value_struct const*)
bool __fastcall ProtoBufHelper::ParseJSON(google::protobuf::Message *const msg, CUtlBuffer *const buffer)
{
  JSON_parser_struct *v4; // r12
  bool v5; // al
  int v6; // esi
  int m_Get; // edx
  bool v8; // bl
  JSONParserMessageField_t messageField; // [rsp+0h] [rbp-A0h] BYREF
  ProtobufJSONParserContext_t context; // [rsp+20h] [rbp-80h] BYREF
  JSON_config config; // [rsp+50h] [rbp-50h] BYREF

  (*(*msg + 32LL))(msg);
  init_JSON_config(&config);
  messageField.pMessage = msg;
  messageField.pField = 0;
  messageField.nArrayIndex = 0;
  memset(&context, 0, 20);
  context.messageFieldStack.m_pElements = 0;
  CUtlStack<JSONParserMessageField_t,CUtlMemory<JSONParserMessageField_t,int>>::Push(
    &context.messageFieldStack,
    &messageField);
  context.bIgnoredOutermostObject = 0;
  config.callback = JSONParserCallback;
  config.depth = -1;
  config.allow_comments = 1;
  config.handle_floats_manually = 0;
  config.malloc = &malloc;
  config.callback_ctx = &context;
  config.free = &free;
  v4 = new_JSON_parser(&config);
  do
  {
    if ( buffer->m_nMaxPut - buffer->m_Get <= 0 )
    {
      v8 = JSON_parser_done(v4) != 0;
      goto LABEL_7;
    }
    v5 = CUtlBuffer::CheckGet(buffer, 1);
    v6 = 0;
    if ( v5 )
    {
      m_Get = buffer->m_Get;
      v6 = buffer->m_Memory.m_pMemory[m_Get - buffer->m_nOffset];
      buffer->m_Get = m_Get + 1;
    }
  }
  while ( JSON_parser_char(v4, v6) != 0 );
  v8 = 0;
LABEL_7:
  delete_JSON_parser(v4);
  CUtlStack<JSONParserMessageField_t,CUtlMemory<JSONParserMessageField_t,int>>::~CUtlStack(&context.messageFieldStack);
  return v8;
}


