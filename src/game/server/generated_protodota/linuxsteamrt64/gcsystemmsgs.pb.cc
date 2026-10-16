// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/gcsystemmsgs.pb.cc:180
struct StaticDescriptorInitializer_gcsystemmsgs_2eproto {
	StaticDescriptorInitializer_gcsystemmsgs_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_gcsystemmsgs_2eproto  (line 36, @0x0000000001df8520, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, protobuf_AddDesc_gcsystemmsgs_2eproto, ~basic_string
// calls: std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), protobuf_AddDesc_gcsystemmsgs_2eproto, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&), _Unwind_Resume, std::string::_Rep::_M_dispose(std::allocator<char> const&)
// strings: "gcsystemmsgs.proto", "generated_protodota/linuxsteamrt64/gcsystemmsgs.pb.cc", "CHECK failed: file != NULL: "
// globals: protobuf_AddDesc_gcsystemmsgs_2eproto(void)::already_here, `anonymous namespace'::EGCSystemMsg_descriptor_, `anonymous namespace'::ESOMsg_descriptor_, `anonymous namespace'::EGCBaseClientMsg_descriptor_, `anonymous namespace'::EGCToGCMsg_descriptor_
void __cdecl protobuf_AssignDesc_gcsystemmsgs_2eproto()
{
  google::protobuf::DescriptorPool *v0; // rdi
  google::protobuf::DescriptorPool *v1; // rax
  __int64 FileByName; // r12
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  int v6; // edx
  char v7; // [rsp+1Eh] [rbp-32h] BYREF
  char v8; // [rsp+1Fh] [rbp-31h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-30h] BYREF

  if ( !protobuf_AddDesc_gcsystemmsgs_2eproto(void)::already_here )
    protobuf_AddDesc_gcsystemmsgs_2eproto();
  std::string::string(&v9, "gcsystemmsgs.proto", &v7);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v9);
  v3 = *&v9.level_ - 24LL;
  if ( (*&v9.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v5 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v6 = *(*&v9.level_ - 8LL);
      *(*&v9.level_ - 8LL) = v6 - 1;
      v5 = v6;
    }
    if ( v5 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v8);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gcsystemmsgs.pb.cc",
      41);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
  }
  `anonymous namespace'::EGCSystemMsg_descriptor_ = *(FileByName + 96);
  `anonymous namespace'::ESOMsg_descriptor_ = `anonymous namespace'::EGCSystemMsg_descriptor_ + 1;
  `anonymous namespace'::EGCBaseClientMsg_descriptor_ = `anonymous namespace'::EGCSystemMsg_descriptor_ + 2;
  `anonymous namespace'::EGCToGCMsg_descriptor_ = `anonymous namespace'::EGCSystemMsg_descriptor_ + 3;
}


// protobuf_RegisterTypes  (line 56, @0x0000000001df84b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gcsystemmsgs_2eproto(void)
void __fastcall `anonymous namespace'::protobuf_RegisterTypes(const std::string *const a1)
{
  google::protobuf::Closure *v1; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gcsystemmsgs_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
}


// protobuf_ShutdownFile_gcsystemmsgs_2eproto  (line 62, @0x0000000001df8440, libserver.so)
void __cdecl protobuf_ShutdownFile_gcsystemmsgs_2eproto()
{
  ;
}


// protobuf_AddDesc_gcsystemmsgs_2eproto  (line 65, @0x0000000001df8450, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), google::protobuf::internal::OnShutdown(void (*)(void))
// callers: protobuf_AssignDesc_gcsystemmsgs_2eproto, protobuf_AddDesc_gcsystemmsgs_2eproto, _GLOBAL__sub_I_gcsystemmsgs.pb.cc
// strings: "generated_protodota/linuxsteamrt64/gcsystemmsgs.pb.cc", "gcsystemmsgs.proto"
// globals: protobuf_AddDesc_gcsystemmsgs_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), protobuf_ShutdownFile_gcsystemmsgs_2eproto(void)
void __cdecl protobuf_AddDesc_gcsystemmsgs_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  void (*v3)(void); // rsi

  protobuf_AddDesc_gcsystemmsgs_2eproto(void)::already_here = 1;
  google::protobuf::internal::VerifyVersion(
    (&stru_1E9BE8.r_info + 1),
    2006000,
    "generated_protodota/linuxsteamrt64/gcsystemmsgs.pb.cc",
    v0);
  google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_32BAC40, &stru_FE0.st_value + 2, v1);
  google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gcsystemmsgs.proto",
    `anonymous namespace'::protobuf_RegisterTypes,
    v2);
  google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_gcsystemmsgs_2eproto, v3);
}


// protobuf_AddDesc_gcsystemmsgs_2eproto  (line 65, @0x0000000001df8680, libserver.so)
// calls: protobuf_AddDesc_gcsystemmsgs_2eproto
// globals: protobuf_AddDesc_gcsystemmsgs_2eproto(void)::already_here
void __cdecl protobuf_AddDesc_gcsystemmsgs_2eproto()
{
  if ( !protobuf_AddDesc_gcsystemmsgs_2eproto(void)::already_here )
    protobuf_AddDesc_gcsystemmsgs_2eproto();
}


// EGCSystemMsg_descriptor  (line 185, @0x0000000001df86a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: GCSDK::CGCClient::BInit
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gcsystemmsgs_2eproto(void), `anonymous namespace'::EGCSystemMsg_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EGCSystemMsg_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gcsystemmsgs_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EGCSystemMsg_descriptor_;
}


// EGCSystemMsg_IsValid  (line 189, @0x0000000001df8730, libserver.so)
bool __fastcall EGCSystemMsg_IsValid(int value)
{
  if ( value > 105 )
  {
    if ( value > 227 )
      return value >= 500 && (value <= 509 || (value - 512) <= 7);
    if ( value < 220 )
    {
      if ( value < 200 )
        return 0;
      if ( value > 205 && (value - 210) > 1 )
        return 0;
    }
    return 1;
  }
  if ( value >= 104 )
    return 1;
  if ( value <= 71 )
    return value >= 50 || value >= 0 && (value <= 1 || value == 10);
  if ( value < 73 )
    return 0;
  return value <= 97 || (value - 101) <= 1;
}


// ESOMsg_descriptor  (line 285, @0x0000000001df87e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gcsystemmsgs_2eproto(void), `anonymous namespace'::ESOMsg_descriptor_
const google::protobuf::EnumDescriptor *__cdecl ESOMsg_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gcsystemmsgs_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ESOMsg_descriptor_;
}


// ESOMsg_IsValid  (line 289, @0x0000000001df8870, libserver.so)
bool __fastcall ESOMsg_IsValid(int value)
{
  bool result; // al

  result = 0;
  if ( (value - 21) <= 8 )
    return ((1LL << (value - 21)) & 0x1BF) != 0;
  return result;
}


// EGCBaseClientMsg_descriptor  (line 305, @0x0000000001df8890, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gcsystemmsgs_2eproto(void), `anonymous namespace'::EGCBaseClientMsg_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EGCBaseClientMsg_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gcsystemmsgs_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EGCBaseClientMsg_descriptor_;
}


// EGCBaseClientMsg_IsValid  (line 309, @0x0000000001df8920, libserver.so)
bool __fastcall EGCBaseClientMsg_IsValid(int value)
{
  if ( value > 4007 )
  {
    if ( (value - 4009) > 1 )
      return 0;
  }
  else if ( value < 4004 && (value - 3001) > 3 )
  {
    return 0;
  }
  return 1;
}


// EGCToGCMsg_descriptor  (line 327, @0x0000000001df8960, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gcsystemmsgs_2eproto(void), `anonymous namespace'::EGCToGCMsg_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EGCToGCMsg_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gcsystemmsgs_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EGCToGCMsg_descriptor_;
}


// EGCToGCMsg_IsValid  (line 331, @0x0000000001df89f0, libserver.so)
bool __fastcall EGCToGCMsg_IsValid(int value)
{
  return (value - 150) <= 0xF;
}


