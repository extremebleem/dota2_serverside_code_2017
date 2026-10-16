// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc:136
struct StaticDescriptorInitializer_econ_5fshared_5fenums_2eproto {
	StaticDescriptorInitializer_econ_5fshared_5fenums_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_econ_5fshared_5fenums_2eproto  (line 39, @0x0000000001e3c780, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_econ_5fshared_5fenums_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "econ_shared_enums.proto", "generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CMsgGenericResult_descriptor_, CMsgGenericResult::default_instance_, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void)::CMsgGenericResult_offsets_, `anonymous namespace'::CMsgGenericResult_reflection_, `anonymous namespace'::EGCEconBaseMsg_descriptor_, `anonymous namespace'::EGCMsgResponse_descriptor_, `anonymous namespace'::EGCPartnerRequestResponse_descriptor_, `anonymous namespace'::EGCMsgUseItemResponse_descriptor_
void __cdecl protobuf_AssignDesc_econ_5fshared_5fenums_2eproto()
{
  google::protobuf::DescriptorPool *v0; // rdi
  google::protobuf::DescriptorPool *v1; // rax
  __int64 FileByName; // rbx
  __int64 v3; // rdi
  const google::protobuf::DescriptorPool *v4; // r13
  google::protobuf::MessageFactory *v5; // rdi
  google::protobuf::MessageFactory *v6; // r14
  google::protobuf::internal::GeneratedMessageReflection *v7; // r12
  const google::protobuf::EnumDescriptor *v8; // rax
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  char v12; // [rsp+3Eh] [rbp-42h] BYREF
  char v13; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v14; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_econ_5fshared_5fenums_2eproto();
  std::string::string(&v14, "econ_shared_enums.proto", &v12);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v14);
  v3 = *&v14.level_ - 24LL;
  if ( (*&v14.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v10 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v11 = *(*&v14.level_ - 8LL);
      *(*&v14.level_ - 8LL) = v11 - 1;
      v10 = v11;
    }
    if ( v10 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v13);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v14,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc",
      44);
    v9 = google::protobuf::internal::LogMessage::operator<<(&v14, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  `anonymous namespace'::CMsgGenericResult_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CMsgGenericResult_descriptor_,
    CMsgGenericResult::default_instance_,
    protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void)::CMsgGenericResult_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    40);
  v8 = *(FileByName + 96);
  `anonymous namespace'::CMsgGenericResult_reflection_ = v7;
  `anonymous namespace'::EGCEconBaseMsg_descriptor_ = v8;
  `anonymous namespace'::EGCMsgResponse_descriptor_ = v8 + 1;
  `anonymous namespace'::EGCPartnerRequestResponse_descriptor_ = v8 + 2;
  `anonymous namespace'::EGCMsgUseItemResponse_descriptor_ = v8 + 3;
}


// protobuf_RegisterTypes  (line 75, @0x0000000001e3c6e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_econ_5fshared_5fenums_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void), CMsgGenericResult::default_instance_, `anonymous namespace'::CMsgGenericResult_descriptor_
void __fastcall `anonymous namespace'::protobuf_RegisterTypes(const std::string *const a1)
{
  google::protobuf::Closure *v1; // rdx
  const google::protobuf::Descriptor *v2; // rsi
  __int64 v3[2]; // [rsp+0h] [rbp-30h] BYREF
  char v4; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v4 = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_econ_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  v2 = CMsgGenericResult::default_instance_;
  if ( CMsgGenericResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_econ_5fshared_5fenums_2eproto();
    v2 = CMsgGenericResult::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgGenericResult_descriptor_,
    v2,
    v1);
}


// protobuf_ShutdownFile_econ_5fshared_5fenums_2eproto  (line 83, @0x0000000001e3bdc0, libserver.so)
// globals: CMsgGenericResult::default_instance_, `anonymous namespace'::CMsgGenericResult_reflection_
void __cdecl protobuf_ShutdownFile_econ_5fshared_5fenums_2eproto()
{
  if ( CMsgGenericResult::default_instance_ != 0 )
    (CMsgGenericResult::default_instance_->name_[1]._M_dataplus._M_p)(CMsgGenericResult::default_instance_);
  if ( `anonymous namespace'::CMsgGenericResult_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgGenericResult_reflection_ + 8LL))(`anonymous namespace'::CMsgGenericResult_reflection_);
}


// protobuf_AddDesc_econ_5fshared_5fenums_2eproto  (line 88, @0x0000000001e3c640, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CMsgGenericResult::CMsgGenericResult, google::protobuf::internal::OnShutdown(void (*)(void)), operator delete, _Unwind_Resume
// callers: protobuf_RegisterTypes, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto, CMsgGenericResult::default_instance, _GLOBAL__sub_I_econ_shared_enums.pb.cc, protobuf_AddDesc_econ_5fgcmessages_2eproto
// strings: "generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc", "econ_shared_enums.proto"
// globals: protobuf_AddDesc_econ_5fshared_5fenums_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CMsgGenericResult::default_instance_, protobuf_ShutdownFile_econ_5fshared_5fenums_2eproto(void)
void __cdecl protobuf_AddDesc_econ_5fshared_5fenums_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CMsgGenericResult *v3; // rbx
  void (*v4)(void); // rsi

  if ( !protobuf_AddDesc_econ_5fshared_5fenums_2eproto(void)::already_here )
  {
    protobuf_AddDesc_econ_5fshared_5fenums_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc",
      v0);
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_32BFBC8, &stru_10.m_PVSBits.m_Ints[43] + 1, v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "econ_shared_enums.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x28u);
    CMsgGenericResult::CMsgGenericResult(v3);
    CMsgGenericResult::default_instance_ = v3;
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_econ_5fshared_5fenums_2eproto, v4);
  }
}


// EGCEconBaseMsg_descriptor  (line 141, @0x0000000001e3c290, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void), `anonymous namespace'::EGCEconBaseMsg_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EGCEconBaseMsg_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_econ_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EGCEconBaseMsg_descriptor_;
}


// EGCEconBaseMsg_IsValid  (line 145, @0x0000000001e3c320, libserver.so)
bool __fastcall EGCEconBaseMsg_IsValid(int value)
{
  return value == 2579;
}


// EGCMsgResponse_descriptor  (line 154, @0x0000000001e3c330, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void), `anonymous namespace'::EGCMsgResponse_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EGCMsgResponse_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_econ_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EGCMsgResponse_descriptor_;
}


// EGCMsgResponse_IsValid  (line 158, @0x0000000001e3c3c0, libserver.so)
// callers: CMsgClientToGCWrapAndDeliverGiftResponse::MergePartialFromCodedStream, CMsgClientToGCUnlockCrateResponse::MergePartialFromCodedStream
bool __fastcall EGCMsgResponse_IsValid(int value)
{
  return value <= 8;
}


// EGCPartnerRequestResponse_descriptor  (line 175, @0x0000000001e3c3d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void), `anonymous namespace'::EGCPartnerRequestResponse_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EGCPartnerRequestResponse_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_econ_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EGCPartnerRequestResponse_descriptor_;
}


// EGCPartnerRequestResponse_IsValid  (line 179, @0x0000000001e3c460, libserver.so)
// callers: CMsgGCPartnerRechargeRedirectURLResponse::MergePartialFromCodedStream, CMsgGCPartnerBalanceResponse::MergePartialFromCodedStream
bool __fastcall EGCPartnerRequestResponse_IsValid(int value)
{
  return (value - 1) <= 3;
}


// EGCMsgUseItemResponse_descriptor  (line 191, @0x0000000001e3c470, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void), `anonymous namespace'::EGCMsgUseItemResponse_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EGCMsgUseItemResponse_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_econ_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EGCMsgUseItemResponse_descriptor_;
}


// EGCMsgUseItemResponse_IsValid  (line 195, @0x0000000001e3c500, libserver.so)
bool __fastcall EGCMsgUseItemResponse_IsValid(int value)
{
  return value <= 0xD;
}


// CMsgGenericResult::CMsgGenericResult  (line 225, @0x0000000001e3c5e0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgGenericResult::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: protobuf_AddDesc_econ_5fshared_5fenums_2eproto, CMsgGenericResult::New, GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::InternalAlloc, GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11>::BYieldingRunJob, CGCServerJobSendFantasyMatch::BYieldingRunJob
void __fastcall CMsgGenericResult::CMsgGenericResult(CMsgGenericResult *const this)
{
  *this = off_3FA87B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgGenericResult::SharedCtor(this);
}


// CMsgGenericResult::InitAsDefaultInstance  (line 231, @0x0000000001e3c510, libserver.so)
void __fastcall CMsgGenericResult::InitAsDefaultInstance(CMsgGenericResult *const this)
{
  ;
}


// CMsgGenericResult::CMsgGenericResult  (line 234, @0x0000000001e3cc10, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgGenericResult::SharedCtor, CMsgGenericResult::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgGenericResult::CMsgGenericResult(
        CMsgGenericResult *const this,
        const CMsgGenericResult *const from)
{
  *this = off_3FA87B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgGenericResult::SharedCtor(this);
  CMsgGenericResult::MergeFrom(this, from);
}


// CMsgGenericResult::SharedCtor  (line 241, @0x0000000001e3c520, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgGenericResult::CMsgGenericResult
void __fastcall CMsgGenericResult::SharedCtor(CMsgGenericResult *const this)
{
  google::protobuf::Closure *v1; // rdx
  const std::string *v3; // r13
  std::string *v4; // r12
  __int64 v5[2]; // [rsp+0h] [rbp-40h] BYREF
  char v6; // [rsp+10h] [rbp-30h]

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v6 = 0;
    v5[0] = off_47BFB70;
    v5[1] = google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, v5, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v5);
  }
  *(this + 5) = 0;
  *(this + 8) = 2;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 3) = v4;
  *(this + 4) = 0;
}


// CMsgGenericResult::~CMsgGenericResult  (line 249, @0x0000000001e3ca10, libserver.so)
// calls: CMsgGenericResult::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgGenericResult::~CMsgGenericResult, GCSDK::GCClientJobLambda<CDOTAGCServerSystem::UpdateLiveFantasyStats()::__lambda11>::BYieldingRunJob, CGCServerJobSendFantasyMatch::BYieldingRunJob
void __fastcall CMsgGenericResult::~CMsgGenericResult(CMsgGenericResult *const this)
{
  *this = off_3FA87B0;
  CMsgGenericResult::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgGenericResult::~CMsgGenericResult  (line 249, @0x0000000001e3ca50, libserver.so)
// calls: CMsgGenericResult::~CMsgGenericResult, operator delete
void __fastcall CMsgGenericResult::~CMsgGenericResult(CMsgGenericResult *const this)
{
  CMsgGenericResult::~CMsgGenericResult(this);
  operator delete(this);
}


// CMsgGenericResult::SharedDtor  (line 254, @0x0000000001e3c9a0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgGenericResult::~CMsgGenericResult
void __fastcall CMsgGenericResult::SharedDtor(CMsgGenericResult *const this)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  _BYTE v6[17]; // [rsp+Fh] [rbp-11h] BYREF

  v1 = *(this + 3);
  if ( v1 != 0 )
  {
    v2 = *v1;
    v3 = *v1 - 24;
    if ( v3 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v4 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
      }
      else
      {
        v5 = *(v2 - 8);
        *(v2 - 8) = v5 - 1;
        v4 = v5;
      }
      if ( v4 <= 0 )
        std::string::_Rep::_M_destroy(v3, v6);
    }
    operator delete(v1);
  }
}


// CMsgGenericResult::SetCachedSize  (line 260, @0x0000000001e3be00, libserver.so)
void __fastcall CMsgGenericResult::SetCachedSize(const CMsgGenericResult *const this, int size)
{
  *(this + 5) = size;
}


// CMsgGenericResult::descriptor  (line 265, @0x0000000001e3ca70, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CGCSubmitGameserverCrashReportJob::BYieldingRunGCJob
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void), `anonymous namespace'::CMsgGenericResult_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgGenericResult::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_econ_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgGenericResult_descriptor_;
}


// CMsgGenericResult::default_instance  (line 270, @0x0000000001e3cb00, libserver.so)
// calls: protobuf_AddDesc_econ_5fshared_5fenums_2eproto
// callers: GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::GetName
// globals: CMsgGenericResult::default_instance_
const CMsgGenericResult *__cdecl CMsgGenericResult::default_instance()
{
  const CMsgGenericResult *result; // rax

  result = CMsgGenericResult::default_instance_;
  if ( CMsgGenericResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_econ_5fshared_5fenums_2eproto();
    return CMsgGenericResult::default_instance_;
  }
  return result;
}


// CMsgGenericResult::New  (line 277, @0x0000000001e3c960, libserver.so)
// calls: operator new, CMsgGenericResult::CMsgGenericResult, operator delete, _Unwind_Resume
CMsgGenericResult *__fastcall CMsgGenericResult::New(const CMsgGenericResult *const this)
{
  CMsgGenericResult *v1; // rbx

  v1 = operator new(0x28u);
  CMsgGenericResult::CMsgGenericResult(v1);
  return v1;
}


// CMsgGenericResult::Clear  (line 281, @0x0000000001e3be60, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgGenericResult::Clear(CMsgGenericResult *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    *(this + 8) = 2;
    if ( (v2 & 2) != 0 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CMsgGenericResult::MergePartialFromCodedStream  (line 292, @0x0000000001e3c080, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, mutable_debug_message, set_has_debug_message, set_has_eresult
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CMsgGenericResult::MergePartialFromCodedStream(
        CMsgGenericResult *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int *v2; // r14
  unsigned int v4; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  unsigned __int8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  google::protobuf::uint8 *v10; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v13; // rax
  int v14; // eax

  v2 = (this + 32);
  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
      goto LABEL_12;
LABEL_3:
    v8 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_12:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v9 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_9:
        if ( (v9 & 7) == 4 )
          return 1;
        if ( google::protobuf::internal::WireFormat::SkipField(input, v9, v4, buffer_end) == 0 )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end )
          goto LABEL_3;
      }
    }
    else
    {
      v9 = v8;
      input->last_tag_ = v8;
      input->buffer_ = buffer + 1;
    }
    v10 = (v9 >> 3);
    if ( v10 != 1 )
      break;
    if ( v9 != 8 )
      goto handle_unusual;
    v13 = input->buffer_;
    if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v2) == 0 )
        return 0;
    }
    else
    {
      *(this + 8) = v14;
      ++input->buffer_;
    }
    *(this + 4) |= 1u;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      v10 = (buffer + 1);
      input->buffer_ = v10;
parse_debug_message:
      *(this + 4) |= 2u;
      result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v10);
      if ( !result )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer == buffer_end )
      {
        if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
        {
          input->last_tag_ = 0;
          input->legitimate_message_end_ = 1;
          return result;
        }
        buffer_end = input->buffer_;
      }
    }
  }
  if ( v10 == 2 && v9 == 18 )
    goto parse_debug_message;
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgGenericResult::SerializeWithCachedSizes  (line 355, @0x0000000001e3bed0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgGenericResult::SerializeWithCachedSizes(
        const CMsgGenericResult *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 2) == 0 )
      goto LABEL_3;
LABEL_7:
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2, *(this + 3), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 8), output, v3);
  if ( (*(this + 4) & 2) != 0 )
    goto LABEL_7;
LABEL_3:
  v7 = *(this + 1);
  if ( v7 == 0 )
    return;
LABEL_4:
  if ( v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CMsgGenericResult::SerializeWithCachedSizesToArray  (line 380, @0x0000000001e3bff0, libserver.so)  // inlines: WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CMsgGenericResult::SerializeWithCachedSizesToArray(
        const CMsgGenericResult *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  const std::string *v7; // rsi
  __int64 v8; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 8);
    *target = 8;
    if ( v5 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v5, target + 1, v2);
    }
    else
    {
      target[1] = v5;
      target += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v6 = *(this + 3);
    v7 = (target + 1);
    HIBYTE(v7[-1]._M_dataplus._M_p) = 18;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v6, v7, v2);
  }
  v8 = *(this + 1);
  if ( v8 == 0 || *(v8 + 8) == *v8 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v8);
}


// CMsgGenericResult::ByteSize  (line 407, @0x0000000001e3bf50, libserver.so)  // inlines: StringSize, UInt32Size, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CMsgGenericResult::ByteSize(const CMsgGenericResult *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v9; // r13
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  int v12; // edx
  int v13; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    LOBYTE(v5) = *(this + 4);
    if ( (v4 & 1) != 0 )
    {
      v6 = *(this + 8);
      LOBYTE(v3) = 2;
      if ( v6 > 0x7F )
      {
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v3 = v13 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v9 = *(this + 3);
      v10 = *(*v9 - 24LL);
      v11 = 1;
      v12 = v10;
      if ( v10 > 0x7F )
      {
        v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
        v12 = *(*v9 - 24LL);
      }
      v3 += v11 + v12 + 1;
    }
  }
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgGenericResult::MergeFrom  (line 437, @0x0000000001e3cc80, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgGenericResult*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgGenericResult::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgGenericResult
void __fastcall CMsgGenericResult::MergeFrom(
        CMsgGenericResult *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgGenericResult *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc",
      438);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgGenericResult, 0)) != 0 )
  {
    CMsgGenericResult::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgGenericResult::MergeFrom  (line 449, @0x0000000001e3cb30, libserver.so)  // inlines: set_debug_message, set_eresult, set_has_debug_message, set_has_eresult
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgGenericResult::CMsgGenericResult, CMsgGenericResult::MergeFrom, CMsgGenericResult::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgGenericResult::MergeFrom(CMsgGenericResult *const this, const CMsgGenericResult *const from)
{
  int v4; // eax
  int v5; // eax
  const std::string *v6; // rsi
  std::string *v7; // rdi
  __int64 v8; // rax
  char v9; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v10; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/econ_shared_enums.pb.cc",
      450);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = *(from + 8);
      *(this + 4) |= 1u;
      *(this + 8) = v5;
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      v6 = *(from + 3);
      v7 = *(this + 3);
      *(this + 4) |= 2u;
      std::string::assign(v7, v6);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgGenericResult::CopyFrom  (line 462, @0x0000000001e3be10, libserver.so)
void __fastcall CMsgGenericResult::CopyFrom(CMsgGenericResult *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgGenericResult::CopyFrom  (line 468, @0x0000000001e3cd60, libserver.so)
// calls: CMsgGenericResult::MergeFrom
void __fastcall CMsgGenericResult::CopyFrom(CMsgGenericResult *const this, const CMsgGenericResult *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgGenericResult::MergeFrom(this, from);
  }
}


// CMsgGenericResult::IsInitialized  (line 474, @0x0000000001e3be50, libserver.so)
bool __fastcall CMsgGenericResult::IsInitialized(const CMsgGenericResult *const this)
{
  return 1;
}


// CMsgGenericResult::Swap  (line 479, @0x0000000001e3cda0, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgGenericResult::Swap(CMsgGenericResult *const this, CMsgGenericResult *other)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( other != this )
  {
    v2 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v2;
    v3 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v3;
    LODWORD(v3) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v3;
    v4 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v4;
    LODWORD(v4) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
  }
}


// CMsgGenericResult::GetMetadata  (line 489, @0x0000000001e3c1f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_econ_5fshared_5fenums_2eproto(void), `anonymous namespace'::CMsgGenericResult_descriptor_, `anonymous namespace'::CMsgGenericResult_reflection_
google::protobuf::Metadata __fastcall CMsgGenericResult::GetMetadata(const CMsgGenericResult *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_econ_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgGenericResult_descriptor_;
  result.reflection = `anonymous namespace'::CMsgGenericResult_reflection_;
  return result;
}


