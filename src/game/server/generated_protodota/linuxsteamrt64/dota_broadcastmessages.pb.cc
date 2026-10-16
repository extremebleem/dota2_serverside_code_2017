// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc:191
struct StaticDescriptorInitializer_dota_5fbroadcastmessages_2eproto {
	StaticDescriptorInitializer_dota_5fbroadcastmessages_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto  (line 45, @0x0000000001d64bf0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_dota_5fbroadcastmessages_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "dota_broadcastmessages.proto", "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CDOTABroadcastMsg_descriptor_, CDOTABroadcastMsg::default_instance_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void)::CDOTABroadcastMsg_offsets_, `anonymous namespace'::CDOTABroadcastMsg_reflection_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_, CDOTABroadcastMsg_LANLobbyRequest::default_instance_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void)::CDOTABroadcastMsg_LANLobbyRequest_offsets_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_reflection_ (17 total)
void __cdecl protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto()
{
  google::protobuf::DescriptorPool *v0; // rdi
  google::protobuf::DescriptorPool *v1; // rax
  __int64 FileByName; // rbx
  __int64 v3; // rdi
  const google::protobuf::DescriptorPool *v4; // r13
  google::protobuf::MessageFactory *v5; // rdi
  google::protobuf::MessageFactory *v6; // r14
  google::protobuf::internal::GeneratedMessageReflection *v7; // r12
  const google::protobuf::Descriptor *v8; // rax
  google::protobuf::DescriptorPool *v9; // rdi
  const google::protobuf::DescriptorPool *v10; // r13
  google::protobuf::MessageFactory *v11; // rdi
  google::protobuf::MessageFactory *v12; // r14
  google::protobuf::internal::GeneratedMessageReflection *v13; // r12
  const google::protobuf::Descriptor *v14; // rax
  google::protobuf::DescriptorPool *v15; // rdi
  const google::protobuf::DescriptorPool *v16; // r13
  google::protobuf::MessageFactory *v17; // rdi
  google::protobuf::MessageFactory *v18; // r14
  google::protobuf::internal::GeneratedMessageReflection *v19; // r12
  google::protobuf::DescriptorPool *v20; // rdi
  const google::protobuf::DescriptorPool *v21; // r13
  google::protobuf::MessageFactory *v22; // rdi
  google::protobuf::MessageFactory *v23; // r14
  google::protobuf::internal::GeneratedMessageReflection *v24; // r12
  const google::protobuf::EnumDescriptor *v25; // rax
  __int64 v26; // rax
  int v27; // eax
  int v28; // edx
  char v29; // [rsp+3Eh] [rbp-42h] BYREF
  char v30; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v31; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
  std::string::string(&v31, "dota_broadcastmessages.proto", &v29);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v31);
  v3 = *&v31.level_ - 24LL;
  if ( (*&v31.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v27 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v28 = *(*&v31.level_ - 8LL);
      *(*&v31.level_ - 8LL) = v28 - 1;
      v27 = v28;
    }
    if ( v27 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v30);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v31,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      50);
    v26 = google::protobuf::internal::LogMessage::operator<<(&v31, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v30, v26);
    google::protobuf::internal::LogMessage::~LogMessage(&v31);
  }
  `anonymous namespace'::CDOTABroadcastMsg_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CDOTABroadcastMsg_descriptor_,
    CDOTABroadcastMsg::default_instance_,
    protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void)::CDOTABroadcastMsg_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    40);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CDOTABroadcastMsg_reflection_ = v7;
  `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_,
    CDOTABroadcastMsg_LANLobbyRequest::default_instance_,
    protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void)::CDOTABroadcastMsg_LANLobbyRequest_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    24);
  v14 = *(FileByName + 80);
  `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_reflection_ = v13;
  `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_ = v14 + 2;
  v16 = google::protobuf::DescriptorPool::generated_pool(v15);
  v18 = google::protobuf::MessageFactory::generated_factory(v17);
  v19 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v19,
    `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_,
    CDOTABroadcastMsg_LANLobbyReply::default_instance_,
    protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void)::CDOTABroadcastMsg_LANLobbyReply_offsets_,
    16,
    8,
    -1,
    v16,
    v18,
    88);
  `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_reflection_ = v19;
  `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_descriptor_ = `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_->nested_types_;
  v21 = google::protobuf::DescriptorPool::generated_pool(v20);
  v23 = google::protobuf::MessageFactory::generated_factory(v22);
  v24 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v24,
    `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_descriptor_,
    CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_,
    protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void)::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_offsets_,
    16,
    8,
    -1,
    v21,
    v23,
    40);
  v25 = *(FileByName + 96);
  `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_reflection_ = v24;
  `anonymous namespace'::EDotaBroadcastMessages_descriptor_ = v25;
}


// protobuf_RegisterTypes  (line 131, @0x0000000001d64fa0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_dota_5fbroadcastmessages_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), CDOTABroadcastMsg::default_instance_, `anonymous namespace'::CDOTABroadcastMsg_descriptor_, CDOTABroadcastMsg_LANLobbyRequest::default_instance_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_, CDOTABroadcastMsg_LANLobbyReply::default_instance_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_ (10 total)
void __fastcall `anonymous namespace'::protobuf_RegisterTypes(const std::string *const a1)
{
  google::protobuf::Closure *v1; // rdx
  const google::protobuf::Descriptor *v2; // rsi
  const google::protobuf::Message *v3; // rdx
  const google::protobuf::Descriptor *v4; // rsi
  const google::protobuf::Message *v5; // rdx
  const google::protobuf::Descriptor *v6; // rsi
  const google::protobuf::Message *v7; // rdx
  const google::protobuf::Descriptor *v8; // rsi
  __int64 v9[2]; // [rsp+0h] [rbp-30h] BYREF
  char v10; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v10 = 0;
    v9[0] = off_47BFB70;
    v9[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v9, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v9);
  }
  v2 = CDOTABroadcastMsg::default_instance_;
  if ( CDOTABroadcastMsg::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
    v2 = CDOTABroadcastMsg::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTABroadcastMsg_descriptor_,
    v2,
    v1);
  v4 = CDOTABroadcastMsg_LANLobbyRequest::default_instance_;
  if ( CDOTABroadcastMsg_LANLobbyRequest::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
    v4 = CDOTABroadcastMsg_LANLobbyRequest::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_,
    v4,
    v3);
  v6 = CDOTABroadcastMsg_LANLobbyReply::default_instance_;
  if ( CDOTABroadcastMsg_LANLobbyReply::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
    v6 = CDOTABroadcastMsg_LANLobbyReply::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_,
    v6,
    v5);
  v8 = CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_;
  if ( CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
    v8 = CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_descriptor_,
    v8,
    v7);
}


// protobuf_ShutdownFile_dota_5fbroadcastmessages_2eproto  (line 145, @0x0000000001d61e50, libserver.so)
// globals: CDOTABroadcastMsg::default_instance_, `anonymous namespace'::CDOTABroadcastMsg_reflection_, CDOTABroadcastMsg_LANLobbyRequest::default_instance_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_reflection_, CDOTABroadcastMsg_LANLobbyReply::default_instance_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_reflection_, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_reflection_
void __cdecl protobuf_ShutdownFile_dota_5fbroadcastmessages_2eproto()
{
  if ( CDOTABroadcastMsg::default_instance_ != 0 )
    (CDOTABroadcastMsg::default_instance_->name_[1]._M_dataplus._M_p)(CDOTABroadcastMsg::default_instance_);
  if ( `anonymous namespace'::CDOTABroadcastMsg_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTABroadcastMsg_reflection_ + 8LL))(`anonymous namespace'::CDOTABroadcastMsg_reflection_);
  if ( CDOTABroadcastMsg_LANLobbyRequest::default_instance_ != 0 )
    (CDOTABroadcastMsg_LANLobbyRequest::default_instance_->name_[1]._M_dataplus._M_p)(CDOTABroadcastMsg_LANLobbyRequest::default_instance_);
  if ( `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_reflection_ + 8LL))(`anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_reflection_);
  if ( CDOTABroadcastMsg_LANLobbyReply::default_instance_ != 0 )
    (CDOTABroadcastMsg_LANLobbyReply::default_instance_->name_[1]._M_dataplus._M_p)(CDOTABroadcastMsg_LANLobbyReply::default_instance_);
  if ( `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_reflection_ + 8LL))(`anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_reflection_);
  if ( CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_ != 0 )
    (CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_->name_[1]._M_dataplus._M_p)(CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_);
  if ( `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_reflection_ + 8LL))(`anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_reflection_);
}


// protobuf_AddDesc_dota_5fbroadcastmessages_2eproto  (line 156, @0x0000000001d64ac0, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CDOTABroadcastMsg::CDOTABroadcastMsg, CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest, CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember, google::protobuf::internal::OnShutdown(void (*)(void)), operator delete, _Unwind_Resume
// callers: protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto, CDOTABroadcastMsg::default_instance, CDOTABroadcastMsg_LANLobbyRequest::default_instance, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance, protobuf_RegisterTypes, CDOTABroadcastMsg_LANLobbyReply::default_instance, _GLOBAL__sub_I_dota_broadcastmessages.pb.cc
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "dota_broadcastmessages.proto"
// globals: protobuf_AddDesc_dota_5fbroadcastmessages_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CDOTABroadcastMsg::default_instance_, CDOTABroadcastMsg_LANLobbyRequest::default_instance_, CDOTABroadcastMsg_LANLobbyReply::default_instance_, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_, protobuf_ShutdownFile_dota_5fbroadcastmessages_2eproto(void)
void __cdecl protobuf_AddDesc_dota_5fbroadcastmessages_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CDOTABroadcastMsg *v3; // rbx
  CDOTABroadcastMsg_LANLobbyRequest *v4; // rbx
  CDOTABroadcastMsg_LANLobbyReply *v5; // rbx
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *v6; // rbx
  void (*v7)(void); // rsi

  if ( !protobuf_AddDesc_dota_5fbroadcastmessages_2eproto(void)::already_here )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      v0);
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_32B2468, &stru_10.m_pEntityIdChunks[1] + 1, v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "dota_broadcastmessages.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x28u);
    CDOTABroadcastMsg::CDOTABroadcastMsg(v3);
    CDOTABroadcastMsg::default_instance_ = v3;
    v4 = operator new(0x18u);
    CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest(v4);
    CDOTABroadcastMsg_LANLobbyRequest::default_instance_ = v4;
    v5 = operator new(0x58u);
    CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply(v5);
    CDOTABroadcastMsg_LANLobbyReply::default_instance_ = v5;
    v6 = operator new(0x28u);
    CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(v6);
    CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_ = v6;
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_dota_5fbroadcastmessages_2eproto, v7);
  }
}


// EDotaBroadcastMessages_descriptor  (line 196, @0x0000000001d63340, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::EDotaBroadcastMessages_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EDotaBroadcastMessages_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EDotaBroadcastMessages_descriptor_;
}


// EDotaBroadcastMessages_IsValid  (line 200, @0x0000000001d633d0, libserver.so)
bool __fastcall EDotaBroadcastMessages_IsValid(int value)
{
  return (value - 1) <= 1;
}


// CDOTABroadcastMsg::CDOTABroadcastMsg  (line 218, @0x0000000001d634b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTABroadcastMsg::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTABroadcastMsg::New, protobuf_AddDesc_dota_5fbroadcastmessages_2eproto
void __fastcall CDOTABroadcastMsg::CDOTABroadcastMsg(CDOTABroadcastMsg *const this)
{
  *this = off_3F9B6F0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTABroadcastMsg::SharedCtor(this);
}


// CDOTABroadcastMsg::InitAsDefaultInstance  (line 224, @0x0000000001d633e0, libserver.so)
void __fastcall CDOTABroadcastMsg::InitAsDefaultInstance(CDOTABroadcastMsg *const this)
{
  ;
}


// CDOTABroadcastMsg::CDOTABroadcastMsg  (line 227, @0x0000000001d63790, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTABroadcastMsg::SharedCtor, CDOTABroadcastMsg::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTABroadcastMsg::CDOTABroadcastMsg(
        CDOTABroadcastMsg *const this,
        const CDOTABroadcastMsg *const from)
{
  *this = off_3F9B6F0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTABroadcastMsg::SharedCtor(this);
  CDOTABroadcastMsg::MergeFrom(this, from);
}


// CDOTABroadcastMsg::SharedCtor  (line 234, @0x0000000001d633f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTABroadcastMsg::CDOTABroadcastMsg
void __fastcall CDOTABroadcastMsg::SharedCtor(CDOTABroadcastMsg *const this)
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
  *(this + 8) = 1;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 3) = v4;
  *(this + 4) = 0;
}


// CDOTABroadcastMsg::~CDOTABroadcastMsg  (line 242, @0x0000000001d635c0, libserver.so)
// calls: CDOTABroadcastMsg::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTABroadcastMsg::~CDOTABroadcastMsg
void __fastcall CDOTABroadcastMsg::~CDOTABroadcastMsg(CDOTABroadcastMsg *const this)
{
  *this = off_3F9B6F0;
  CDOTABroadcastMsg::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTABroadcastMsg::~CDOTABroadcastMsg  (line 242, @0x0000000001d63600, libserver.so)
// calls: CDOTABroadcastMsg::~CDOTABroadcastMsg, operator delete
void __fastcall CDOTABroadcastMsg::~CDOTABroadcastMsg(CDOTABroadcastMsg *const this)
{
  CDOTABroadcastMsg::~CDOTABroadcastMsg(this);
  operator delete(this);
}


// CDOTABroadcastMsg::SharedDtor  (line 247, @0x0000000001d63550, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTABroadcastMsg::~CDOTABroadcastMsg
void __fastcall CDOTABroadcastMsg::SharedDtor(CDOTABroadcastMsg *const this)
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


// CDOTABroadcastMsg::SetCachedSize  (line 253, @0x0000000001d61f00, libserver.so)
void __fastcall CDOTABroadcastMsg::SetCachedSize(const CDOTABroadcastMsg *const this, int size)
{
  *(this + 5) = size;
}


// CDOTABroadcastMsg::descriptor  (line 258, @0x0000000001d63620, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::CDOTABroadcastMsg_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTABroadcastMsg::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTABroadcastMsg_descriptor_;
}


// CDOTABroadcastMsg::default_instance  (line 263, @0x0000000001d64f10, libserver.so)
// calls: protobuf_AddDesc_dota_5fbroadcastmessages_2eproto
// globals: CDOTABroadcastMsg::default_instance_
const CDOTABroadcastMsg *__cdecl CDOTABroadcastMsg::default_instance()
{
  const CDOTABroadcastMsg *result; // rax

  result = CDOTABroadcastMsg::default_instance_;
  if ( CDOTABroadcastMsg::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
    return CDOTABroadcastMsg::default_instance_;
  }
  return result;
}


// CDOTABroadcastMsg::New  (line 270, @0x0000000001d63510, libserver.so)
// calls: operator new, CDOTABroadcastMsg::CDOTABroadcastMsg, operator delete, _Unwind_Resume
CDOTABroadcastMsg *__fastcall CDOTABroadcastMsg::New(const CDOTABroadcastMsg *const this)
{
  CDOTABroadcastMsg *v1; // rbx

  v1 = operator new(0x28u);
  CDOTABroadcastMsg::CDOTABroadcastMsg(v1);
  return v1;
}


// CDOTABroadcastMsg::Clear  (line 274, @0x0000000001d62120, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDOTABroadcastMsg::Clear(CDOTABroadcastMsg *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    *(this + 8) = 1;
    if ( (v2 & 2) != 0 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTABroadcastMsg::MergePartialFromCodedStream  (line 285, @0x0000000001d63190, libserver.so)  // inlines: Advance, EDotaBroadcastMessages_IsValid, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)14u>, ReadTagWithCutoff, ReadVarint32, mutable_msg, set_has_msg, set_has_type, set_type
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::UnknownFieldSet::AddVarint(int,ulong), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CDOTABroadcastMsg::MergePartialFromCodedStream(
        CDOTABroadcastMsg *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v3; // r12
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  unsigned __int8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  google::protobuf::uint8 *v9; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  google::protobuf::uint8 v13; // dl
  signed int v14; // eax
  unsigned int v15[9]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = (this + 8);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
      goto LABEL_12;
LABEL_3:
    v7 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_12:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v8 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_9:
        if ( (v8 & 7) == 4 )
          return 1;
        if ( google::protobuf::internal::WireFormat::SkipField(input, v8, v3, buffer_end) == 0 )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end )
          goto LABEL_3;
      }
    }
    else
    {
      v8 = v7;
      input->last_tag_ = v7;
      input->buffer_ = buffer + 1;
    }
    v9 = (v8 >> 3);
    if ( v9 != 1 )
      break;
    if ( v8 != 8 )
      goto handle_unusual;
    v12 = input->buffer_;
    if ( v12 >= input->buffer_end_ || (v13 = *v12, *v12 < 0) )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v15);
      if ( !result )
        return result;
      v14 = v15[0];
      if ( v15[0] - 1 > 1 )
      {
LABEL_20:
        google::protobuf::UnknownFieldSet::AddVarint(v3, 1, v14);
        goto LABEL_21;
      }
    }
    else
    {
      input->buffer_ = v12 + 1;
      v14 = v13;
      if ( v13 - 1 > 1 )
        goto LABEL_20;
    }
    *(this + 4) |= 1u;
    *(this + 8) = v14;
LABEL_21:
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      v9 = (buffer + 1);
      input->buffer_ = v9;
parse_msg:
      *(this + 4) |= 2u;
      result = google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 3), v9);
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
  if ( v9 == 2 && v8 == 18 )
    goto parse_msg;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTABroadcastMsg::SerializeWithCachedSizes  (line 349, @0x0000000001d622d0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTABroadcastMsg::SerializeWithCachedSizes(
        const CDOTABroadcastMsg *const this,
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
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2, *(this + 3), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteEnum(&loc_0 + 1, *(this + 8), output, v3);
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


// CDOTABroadcastMsg::SerializeWithCachedSizesToArray  (line 371, @0x0000000001d62790, libserver.so)  // inlines: WriteBytesToArray, WriteEnumNoTagToArray, WriteEnumToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CDOTABroadcastMsg::SerializeWithCachedSizesToArray(
        const CDOTABroadcastMsg *const this,
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
    if ( v5 < 0 )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v5, (target + 1), v2);
    }
    else if ( v5 > 0x7F )
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


// CDOTABroadcastMsg::ByteSize  (line 395, @0x0000000001d62400, libserver.so)  // inlines: BytesSize, EnumSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDOTABroadcastMsg::ByteSize(const CDOTABroadcastMsg *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v10; // r13
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    LOBYTE(v5) = *(this + 4);
    if ( (v4 & 1) != 0 )
    {
      v6 = *(this + 8);
      if ( v6 < 0 )
      {
        LOBYTE(v5) = v4;
        v3 = 11;
      }
      else
      {
        LOBYTE(v3) = 2;
        if ( v6 > 0x7F )
        {
          v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
          v5 = *(this + 4);
          v3 = v7 + 1;
        }
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v10 = *(this + 3);
      v11 = *(*v10 - 24LL);
      v12 = 1;
      v13 = v11;
      if ( v11 > 0x7F )
      {
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
        v13 = *(*v10 - 24LL);
      }
      v3 += v12 + v13 + 1;
    }
  }
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTABroadcastMsg::MergeFrom  (line 424, @0x0000000001d63800, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTABroadcastMsg*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTABroadcastMsg::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTABroadcastMsg
void __fastcall CDOTABroadcastMsg::MergeFrom(
        CDOTABroadcastMsg *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTABroadcastMsg *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      425);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTABroadcastMsg, 0)) != 0 )
  {
    CDOTABroadcastMsg::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTABroadcastMsg::MergeFrom  (line 436, @0x0000000001d636b0, libserver.so)  // inlines: set_has_msg, set_has_type, set_msg, set_type
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTABroadcastMsg::CDOTABroadcastMsg, CDOTABroadcastMsg::MergeFrom, CDOTABroadcastMsg::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTABroadcastMsg::MergeFrom(CDOTABroadcastMsg *const this, const CDOTABroadcastMsg *const from)
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
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      437);
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


// CDOTABroadcastMsg::CopyFrom  (line 449, @0x0000000001d61f10, libserver.so)
void __fastcall CDOTABroadcastMsg::CopyFrom(CDOTABroadcastMsg *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTABroadcastMsg::CopyFrom  (line 455, @0x0000000001d638e0, libserver.so)
// calls: CDOTABroadcastMsg::MergeFrom
void __fastcall CDOTABroadcastMsg::CopyFrom(CDOTABroadcastMsg *const this, const CDOTABroadcastMsg *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTABroadcastMsg::MergeFrom(this, from);
  }
}


// CDOTABroadcastMsg::IsInitialized  (line 461, @0x0000000001d61f50, libserver.so)
bool __fastcall CDOTABroadcastMsg::IsInitialized(const CDOTABroadcastMsg *const this)
{
  return *(this + 4) & 1;
}


// CDOTABroadcastMsg::Swap  (line 467, @0x0000000001d63920, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTABroadcastMsg::Swap(CDOTABroadcastMsg *const this, CDOTABroadcastMsg *other)
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


// CDOTABroadcastMsg::GetMetadata  (line 477, @0x0000000001d62bd0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::CDOTABroadcastMsg_descriptor_, `anonymous namespace'::CDOTABroadcastMsg_reflection_
google::protobuf::Metadata __fastcall CDOTABroadcastMsg::GetMetadata(const CDOTABroadcastMsg *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTABroadcastMsg_descriptor_;
  result.reflection = `anonymous namespace'::CDOTABroadcastMsg_reflection_;
  return result;
}


// CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest  (line 491, @0x0000000001d63970, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTABroadcastMsg_LANLobbyRequest::New, protobuf_AddDesc_dota_5fbroadcastmessages_2eproto
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest(
        CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  *this = off_3F9B7B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDOTABroadcastMsg_LANLobbyRequest::InitAsDefaultInstance  (line 497, @0x0000000001d63a00, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::InitAsDefaultInstance(CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  ;
}


// CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest  (line 500, @0x0000000001d63b70, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTABroadcastMsg_LANLobbyRequest::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest(
        CDOTABroadcastMsg_LANLobbyRequest *const this,
        const CDOTABroadcastMsg_LANLobbyRequest *const from)
{
  *this = off_3F9B7B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
  CDOTABroadcastMsg_LANLobbyRequest::MergeFrom(this, from);
}


// CDOTABroadcastMsg_LANLobbyRequest::SharedCtor  (line 507, @0x0000000001d63a10, libserver.so)  // inlines: memset
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::SharedCtor(CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDOTABroadcastMsg_LANLobbyRequest::~CDOTABroadcastMsg_LANLobbyRequest  (line 512, @0x0000000001d62080, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::~CDOTABroadcastMsg_LANLobbyRequest(
        CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F9B7B0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTABroadcastMsg_LANLobbyRequest::~CDOTABroadcastMsg_LANLobbyRequest  (line 512, @0x0000000001d620b0, libserver.so)  // inlines: ~CDOTABroadcastMsg_LANLobbyRequest
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::~CDOTABroadcastMsg_LANLobbyRequest(
        CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F9B7B0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTABroadcastMsg_LANLobbyRequest::SharedDtor  (line 517, @0x0000000001d63a30, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::SharedDtor(CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  ;
}


// CDOTABroadcastMsg_LANLobbyRequest::SetCachedSize  (line 522, @0x0000000001d61f60, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::SetCachedSize(
        const CDOTABroadcastMsg_LANLobbyRequest *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTABroadcastMsg_LANLobbyRequest::descriptor  (line 527, @0x0000000001d63a40, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTABroadcastMsg_LANLobbyRequest::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_;
}


// CDOTABroadcastMsg_LANLobbyRequest::default_instance  (line 532, @0x0000000001d64f40, libserver.so)
// calls: protobuf_AddDesc_dota_5fbroadcastmessages_2eproto
// globals: CDOTABroadcastMsg_LANLobbyRequest::default_instance_
const CDOTABroadcastMsg_LANLobbyRequest *__cdecl CDOTABroadcastMsg_LANLobbyRequest::default_instance()
{
  const CDOTABroadcastMsg_LANLobbyRequest *result; // rax

  result = CDOTABroadcastMsg_LANLobbyRequest::default_instance_;
  if ( CDOTABroadcastMsg_LANLobbyRequest::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
    return CDOTABroadcastMsg_LANLobbyRequest::default_instance_;
  }
  return result;
}


// CDOTABroadcastMsg_LANLobbyRequest::New  (line 539, @0x0000000001d639c0, libserver.so)
// calls: operator new, CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest, operator delete, _Unwind_Resume
CDOTABroadcastMsg_LANLobbyRequest *__fastcall CDOTABroadcastMsg_LANLobbyRequest::New(
        const CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  CDOTABroadcastMsg_LANLobbyRequest *v1; // rbx

  v1 = operator new(0x18u);
  CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest(v1);
  return v1;
}


// CDOTABroadcastMsg_LANLobbyRequest::Clear  (line 543, @0x0000000001d620f0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::Clear(CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  *(this + 4) = 0;
  v2 = (this + 8);
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTABroadcastMsg_LANLobbyRequest::MergePartialFromCodedStream  (line 548, @0x0000000001d62830, libserver.so)  // inlines: Advance, GetTagWireType, ReadTagWithCutoff
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void)
bool __fastcall CDOTABroadcastMsg_LANLobbyRequest::MergePartialFromCodedStream(
        CDOTABroadcastMsg_LANLobbyRequest *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::io::CodedInputStream *v6; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax

  v3 = this + 8;
  while ( 1 )
  {
    buffer = input->buffer_;
    if ( buffer < input->buffer_end_ )
    {
      v6 = *buffer;
      if ( v6 > 0 )
      {
        input->last_tag_ = v6;
        input->buffer_ = buffer + 1;
        goto handle_unusual;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v6 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback == 0 )
      return 1;
handle_unusual:
    if ( (v6 & 7) == 4 )
      return 1;
    result = google::protobuf::internal::WireFormat::SkipField(input, v6, v3, v2);
    if ( !result )
      return result;
  }
}


// CDOTABroadcastMsg_LANLobbyRequest::SerializeWithCachedSizes  (line 575, @0x0000000001d62350, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::SerializeWithCachedSizes(
        const CDOTABroadcastMsg_LANLobbyRequest *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  __int64 v2; // rax

  v2 = *(this + 1);
  if ( v2 != 0 && *(v2 + 8) != *v2 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v2);
}


// CDOTABroadcastMsg_LANLobbyRequest::SerializeWithCachedSizesToArray  (line 585, @0x0000000001d62380, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDOTABroadcastMsg_LANLobbyRequest::SerializeWithCachedSizesToArray(
        const CDOTABroadcastMsg_LANLobbyRequest *const this,
        google::protobuf::uint8 *target)
{
  __int64 v2; // rdx

  v2 = *(this + 1);
  if ( v2 == 0 || *(v2 + 8) == *v2 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, v2);
}


// CDOTABroadcastMsg_LANLobbyRequest::ByteSize  (line 596, @0x0000000001d623b0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDOTABroadcastMsg_LANLobbyRequest::ByteSize(const CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  _QWORD *v3; // rax
  int result; // eax

  v3 = *(this + 1);
  if ( v3 == 0 || v3[1] == *v3 )
  {
    *(this + 5) = 0;
    return 0;
  }
  else
  {
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
    *(this + 5) = result;
  }
  return result;
}


// CDOTABroadcastMsg_LANLobbyRequest::MergeFrom  (line 610, @0x0000000001d63be0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTABroadcastMsg_LANLobbyRequest*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTABroadcastMsg_LANLobbyRequest::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTABroadcastMsg_LANLobbyRequest
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::MergeFrom(
        CDOTABroadcastMsg_LANLobbyRequest *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTABroadcastMsg_LANLobbyRequest *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      611);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTABroadcastMsg_LANLobbyRequest,
               0)) != 0 )
  {
    CDOTABroadcastMsg_LANLobbyRequest::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTABroadcastMsg_LANLobbyRequest::MergeFrom  (line 622, @0x0000000001d63ad0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTABroadcastMsg_LANLobbyRequest::CDOTABroadcastMsg_LANLobbyRequest, CDOTABroadcastMsg_LANLobbyRequest::MergeFrom, CDOTABroadcastMsg_LANLobbyRequest::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::MergeFrom(
        CDOTABroadcastMsg_LANLobbyRequest *const this,
        const CDOTABroadcastMsg_LANLobbyRequest *const from)
{
  __int64 v4; // rax
  char v5; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v6; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      623);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTABroadcastMsg_LANLobbyRequest::CopyFrom  (line 627, @0x0000000001d61f70, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::CopyFrom(
        CDOTABroadcastMsg_LANLobbyRequest *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTABroadcastMsg_LANLobbyRequest::CopyFrom  (line 633, @0x0000000001d63cc0, libserver.so)
// calls: CDOTABroadcastMsg_LANLobbyRequest::MergeFrom
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::CopyFrom(
        CDOTABroadcastMsg_LANLobbyRequest *const this,
        const CDOTABroadcastMsg_LANLobbyRequest *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTABroadcastMsg_LANLobbyRequest::MergeFrom(this, from);
  }
}


// CDOTABroadcastMsg_LANLobbyRequest::IsInitialized  (line 639, @0x0000000001d61fb0, libserver.so)
bool __fastcall CDOTABroadcastMsg_LANLobbyRequest::IsInitialized(const CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  return 1;
}


// CDOTABroadcastMsg_LANLobbyRequest::Swap  (line 644, @0x0000000001d63d00, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>
void __fastcall CDOTABroadcastMsg_LANLobbyRequest::Swap(
        CDOTABroadcastMsg_LANLobbyRequest *const this,
        CDOTABroadcastMsg_LANLobbyRequest *other)
{
  __int64 v2; // rax

  if ( other != this )
  {
    v2 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v2;
    LODWORD(v2) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v2;
  }
}


// CDOTABroadcastMsg_LANLobbyRequest::GetMetadata  (line 651, @0x0000000001d62d10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_reflection_
google::protobuf::Metadata __fastcall CDOTABroadcastMsg_LANLobbyRequest::GetMetadata(
        const CDOTABroadcastMsg_LANLobbyRequest *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_descriptor_;
  result.reflection = `anonymous namespace'::CDOTABroadcastMsg_LANLobbyRequest_reflection_;
  return result;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember  (line 667, @0x0000000001d63e00, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::New, CDOTABroadcastMsg_LANLobbyReply::MergePartialFromCodedStream, protobuf_AddDesc_dota_5fbroadcastmessages_2eproto, CDOTABroadcastMsg_LANLobbyReply::MergeFrom
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
{
  *this = off_3F9B870;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedCtor(this);
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::InitAsDefaultInstance  (line 673, @0x0000000001d63d30, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::InitAsDefaultInstance(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
{
  ;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember  (line 676, @0x0000000001d64750, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedCtor, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const from)
{
  *this = off_3F9B870;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedCtor(this);
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom(this, from);
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedCtor  (line 683, @0x0000000001d63d40, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedCtor(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
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
  *(this + 8) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 3) = v4;
  *(this + 4) = 0;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember  (line 691, @0x0000000001d64580, libserver.so)
// calls: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
{
  *this = off_3F9B870;
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember  (line 691, @0x0000000001d645c0, libserver.so)
// calls: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember, operator delete
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
{
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(this);
  operator delete(this);
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedDtor  (line 696, @0x0000000001d64510, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SharedDtor(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
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


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SetCachedSize  (line 702, @0x0000000001d61fc0, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SetCachedSize(
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::descriptor  (line 707, @0x0000000001d645e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_descriptor_;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance  (line 712, @0x0000000001d64f70, libserver.so)
// calls: protobuf_AddDesc_dota_5fbroadcastmessages_2eproto
// globals: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_
const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *__cdecl CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance()
{
  const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *result; // rax

  result = CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_;
  if ( CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
    return CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::default_instance_;
  }
  return result;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::New  (line 719, @0x0000000001d63e60, libserver.so)
// calls: operator new, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember, operator delete, _Unwind_Resume
CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *__fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::New(
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
{
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *v1; // rbx

  v1 = operator new(0x28u);
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(v1);
  return v1;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::Clear  (line 723, @0x0000000001d62190, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::Clear(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    *(this + 8) = 0;
    if ( (v2 & 2) != 0 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergePartialFromCodedStream  (line 734, @0x0000000001d63020, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, mutable_player_name, set_has_account_id, set_has_player_name
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDOTABroadcastMsg_LANLobbyReply::MergePartialFromCodedStream
bool __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergePartialFromCodedStream(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
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
parse_player_name:
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
    goto parse_player_name;
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SerializeWithCachedSizes  (line 797, @0x0000000001d624c0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SerializeWithCachedSizes(
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
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


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SerializeWithCachedSizesToArray  (line 822, @0x0000000001d62b40, libserver.so)  // inlines: WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CDOTABroadcastMsg_LANLobbyReply::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SerializeWithCachedSizesToArray(
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
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


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::ByteSize  (line 849, @0x0000000001d628a0, libserver.so)  // inlines: StringSize, UInt32Size, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTABroadcastMsg_LANLobbyReply::ByteSize
int __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::ByteSize(
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
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


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom  (line 879, @0x0000000001d647c0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTABroadcastMsg_LANLobbyReply_CLobbyMember
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      880);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTABroadcastMsg_LANLobbyReply_CLobbyMember,
               0)) != 0 )
  {
    CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom  (line 891, @0x0000000001d64670, libserver.so)  // inlines: set_account_id, set_has_account_id, set_has_player_name, set_player_name
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CopyFrom, CDOTABroadcastMsg_LANLobbyReply::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const from)
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
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      892);
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


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CopyFrom  (line 904, @0x0000000001d61fd0, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CopyFrom(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CopyFrom  (line 910, @0x0000000001d648a0, libserver.so)
// calls: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CopyFrom(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom(this, from);
  }
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::IsInitialized  (line 916, @0x0000000001d62010, libserver.so)
bool __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::IsInitialized(
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
{
  return 1;
}


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::Swap  (line 921, @0x0000000001d648e0, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::Swap(
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this,
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *other)
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


// CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::GetMetadata  (line 931, @0x0000000001d62db0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_descriptor_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_reflection_
google::protobuf::Metadata __fastcall CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::GetMetadata(
        const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_descriptor_;
  result.reflection = `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember_reflection_;
  return result;
}


// CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply  (line 954, @0x0000000001d64a30, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTABroadcastMsg_LANLobbyReply::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: protobuf_AddDesc_dota_5fbroadcastmessages_2eproto, CDOTABroadcastMsg_LANLobbyReply::New
void __fastcall CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply(
        CDOTABroadcastMsg_LANLobbyReply *const this)
{
  *this = off_3F9B930;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  CDOTABroadcastMsg_LANLobbyReply::SharedCtor(this);
}


// CDOTABroadcastMsg_LANLobbyReply::InitAsDefaultInstance  (line 960, @0x0000000001d64930, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyReply::InitAsDefaultInstance(CDOTABroadcastMsg_LANLobbyReply *const this)
{
  ;
}


// CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply  (line 963, @0x0000000001d65530, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTABroadcastMsg_LANLobbyReply::SharedCtor, CDOTABroadcastMsg_LANLobbyReply::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply(
        CDOTABroadcastMsg_LANLobbyReply *const this,
        const CDOTABroadcastMsg_LANLobbyReply *const from)
{
  *this = off_3F9B930;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  CDOTABroadcastMsg_LANLobbyReply::SharedCtor(this);
  CDOTABroadcastMsg_LANLobbyReply::MergeFrom(this, from);
}


// CDOTABroadcastMsg_LANLobbyReply::SharedCtor  (line 970, @0x0000000001d64940, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply
void __fastcall CDOTABroadcastMsg_LANLobbyReply::SharedCtor(CDOTABroadcastMsg_LANLobbyReply *const this)
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
  *(this + 64) = 0;
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 8) = 0;
  v3 = google::protobuf::internal::empty_string_;
  *(this + 9) = 0;
  *(this + 17) = 0;
  *(this + 20) = 0;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 9) = v4;
  *(this + 21) = 0;
  *(this + 4) = 0;
}


// CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply  (line 984, @0x0000000001d65180, libserver.so)  // inlines: ~RepeatedPtrField
// calls: CDOTABroadcastMsg_LANLobbyReply::SharedDtor, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply
void __fastcall CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply(
        CDOTABroadcastMsg_LANLobbyReply *const this)
{
  *this = off_3F9B930;
  CDOTABroadcastMsg_LANLobbyReply::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>(
    (this + 40),
    (this + 52));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply  (line 984, @0x0000000001d651c0, libserver.so)
// calls: CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply, operator delete
void __fastcall CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply(
        CDOTABroadcastMsg_LANLobbyReply *const this)
{
  CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply(this);
  operator delete(this);
}


// CDOTABroadcastMsg_LANLobbyReply::SharedDtor  (line 989, @0x0000000001d65110, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply
void __fastcall CDOTABroadcastMsg_LANLobbyReply::SharedDtor(CDOTABroadcastMsg_LANLobbyReply *const this)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  _BYTE v6[17]; // [rsp+Fh] [rbp-11h] BYREF

  v1 = *(this + 9);
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


// CDOTABroadcastMsg_LANLobbyReply::SetCachedSize  (line 995, @0x0000000001d62020, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyReply::SetCachedSize(
        const CDOTABroadcastMsg_LANLobbyReply *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTABroadcastMsg_LANLobbyReply::descriptor  (line 1000, @0x0000000001d651e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTABroadcastMsg_LANLobbyReply::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_;
}


// CDOTABroadcastMsg_LANLobbyReply::default_instance  (line 1005, @0x0000000001d65270, libserver.so)
// calls: protobuf_AddDesc_dota_5fbroadcastmessages_2eproto
// globals: CDOTABroadcastMsg_LANLobbyReply::default_instance_
const CDOTABroadcastMsg_LANLobbyReply *__cdecl CDOTABroadcastMsg_LANLobbyReply::default_instance()
{
  const CDOTABroadcastMsg_LANLobbyReply *result; // rax

  result = CDOTABroadcastMsg_LANLobbyReply::default_instance_;
  if ( CDOTABroadcastMsg_LANLobbyReply::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fbroadcastmessages_2eproto();
    return CDOTABroadcastMsg_LANLobbyReply::default_instance_;
  }
  return result;
}


// CDOTABroadcastMsg_LANLobbyReply::New  (line 1012, @0x0000000001d650d0, libserver.so)
// calls: operator new, CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply, operator delete, _Unwind_Resume
CDOTABroadcastMsg_LANLobbyReply *__fastcall CDOTABroadcastMsg_LANLobbyReply::New(
        const CDOTABroadcastMsg_LANLobbyReply *const this)
{
  CDOTABroadcastMsg_LANLobbyReply *v1; // rbx

  v1 = operator new(0x58u);
  CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply(v1);
  return v1;
}


// CDOTABroadcastMsg_LANLobbyReply::Clear  (line 1016, @0x0000000001d62200, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDOTABroadcastMsg_LANLobbyReply::Clear(CDOTABroadcastMsg_LANLobbyReply *const this)
{
  int v2; // eax
  __int64 v3; // r12
  int v4; // ebx
  __int64 v5; // rdi
  bool v6; // zf

  if ( (*(this + 16) & 0xF7) != 0 )
  {
    v6 = *(this + 16) >= 0;
    *(this + 3) = 0;
    *(this + 4) = 0;
    *(this + 8) = 0;
    *(this + 20) = 0;
    if ( !v6 )
      std::string::_M_mutate(*(this + 9), 0, *(**(this + 9) - 24LL), 0);
  }
  v2 = *(this + 12);
  v3 = 0;
  v4 = 0;
  *(this + 21) = 0;
  if ( v2 > 0 )
  {
    do
    {
      ++v4;
      v5 = *(*(this + 5) + v3);
      v3 += 8;
      (*(*v5 + 32LL))(v5);
    }
    while ( v4 < *(this + 12) );
  }
  v6 = *(this + 1) == 0;
  *(this + 12) = 0;
  *(this + 4) = 0;
  if ( !v6 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTABroadcastMsg_LANLobbyReply::MergePartialFromCodedStream  (line 1045, @0x0000000001d63ea0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)4u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, add_members, mutable_name, set_has_game_mode, set_has_id, set_has_leader_account_id, set_has_name, set_has_players, set_has_requires_pass_key, set_has_tournament_game_id, set_has_tournament_id
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), operator new, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember, google::protobuf::io::CodedInputStream::PushLimit(int), CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), operator delete (13 total)
// globals: jpt_1D63F18
bool __fastcall CDOTABroadcastMsg_LANLobbyReply::MergePartialFromCodedStream(
        CDOTABroadcastMsg_LANLobbyReply *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  const google::protobuf::uint8 *buffer; // rax
  unsigned __int64 current_limit; // rcx
  std::string *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  const google::protobuf::uint8 *v9; // rax
  const google::protobuf::uint8 *v10; // rax
  int v11; // eax
  const google::protobuf::uint8 *v12; // rax
  int v13; // eax
  const google::protobuf::uint8 *v14; // rax
  __int64 v15; // rdx
  const google::protobuf::uint8 *v16; // rax
  int v17; // eax
  const google::protobuf::uint8 *v18; // rax
  const google::protobuf::uint8 *v19; // rax
  __int64 v20; // rax
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  const google::protobuf::uint8 *v24; // rax
  int v25; // eax
  bool v26; // cc
  int recursion_depth; // eax
  __int64 v28; // rax
  int v29; // esi
  __int64 v30; // rdx
  int v31; // eax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  int v34; // eax
  unsigned int *v35; // [rsp+8h] [rbp-58h]
  unsigned int *v36; // [rsp+10h] [rbp-50h]
  int v37; // [rsp+1Ch] [rbp-44h]
  unsigned int v38[2]; // [rsp+28h] [rbp-38h] BYREF

  v2 = this + 8;
  v36 = (this + 84);
  buffer = input->buffer_;
  current_limit = this + 80;
  buffer_end = input->buffer_end_;
  v35 = (this + 80);
  while ( 1 )
  {
LABEL_2:
    while ( buffer_end > buffer )
    {
      v8 = *buffer;
      if ( v8 <= 0 )
        break;
      input->last_tag_ = v8;
      input->buffer_ = buffer + 1;
LABEL_5:
      switch ( v8 >> 3 )
      {
        case 1u:
          if ( v8 != 8 )
            goto handle_unusual;
          v19 = input->buffer_;
          if ( v19 >= input->buffer_end_ || ((v20 = *v19) & 0x80u) != 0LL )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, this + 3) == 0 )
              return 0;
          }
          else
          {
            *(this + 3) = v20;
            ++input->buffer_;
          }
          *(this + 4) |= 1u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer < buffer_end && *buffer == 16 )
          {
            v16 = buffer + 1;
            input->buffer_ = v16;
            goto parse_tournament_id;
          }
          continue;
        case 2u:
          if ( v8 != 16 )
            goto handle_unusual;
          v16 = input->buffer_;
          buffer_end = input->buffer_end_;
parse_tournament_id:
          if ( buffer_end <= v16 || ((v17 = *v16) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 8) == 0 )
              return 0;
          }
          else
          {
            *(this + 8) = v17;
            ++input->buffer_;
          }
          *(this + 4) |= 2u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 24 )
            continue;
          v18 = buffer + 1;
          input->buffer_ = v18;
parse_tournament_game_id:
          if ( v18 >= buffer_end || ((v31 = *v18) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 9) == 0 )
              return 0;
          }
          else
          {
            *(this + 9) = v31;
            ++input->buffer_;
          }
          *(this + 4) |= 4u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 34 )
            continue;
          for ( input->buffer_ = buffer + 1; ; input->buffer_ = buffer + 1 )
          {
LABEL_71:
            v28 = *(this + 12);
            v29 = *(this + 13);
            if ( v28 >= v29 )
            {
              if ( v29 == *(this + 14) )
                google::protobuf::internal::RepeatedPtrFieldBase::Reserve((this + 40), v29 + 1);
              v21 = operator new(0x28u);
              CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(v21);
              v22 = *(this + 12);
              v23 = *(this + 5);
              ++*(this + 13);
              *(this + 12) = v22 + 1;
              *(v23 + 8 * v22) = v21;
            }
            else
            {
              v30 = *(this + 5);
              *(this + 12) = v28 + 1;
              v21 = *(v30 + 8 * v28);
            }
            v24 = input->buffer_;
            if ( v24 >= input->buffer_end_ || *v24 < 0 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v38) == 0 )
                return 0;
            }
            else
            {
              v38[0] = *v24;
              input->buffer_ = v24 + 1;
            }
            v25 = input->recursion_depth_ + 1;
            v26 = input->recursion_limit_ < v25;
            input->recursion_depth_ = v25;
            if ( v26 )
              return 0;
            v37 = google::protobuf::io::CodedInputStream::PushLimit(input, v38[0]);
            if ( !CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergePartialFromCodedStream(v21, input)
              || !input->legitimate_message_end_ )
            {
              return 0;
            }
            google::protobuf::io::CodedInputStream::PopLimit(input, v37);
            recursion_depth = input->recursion_depth_;
            if ( recursion_depth > 0 )
              input->recursion_depth_ = recursion_depth - 1;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer >= buffer_end )
              goto LABEL_2;
            current_limit = *buffer;
            if ( current_limit != 34 )
              break;
          }
          if ( current_limit != 40 )
            continue;
          v14 = buffer + 1;
          input->buffer_ = v14;
parse_requires_pass_key:
          if ( v14 >= buffer_end || ((v15 = *v14) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v38);
            if ( !result )
              return result;
            v15 = *v38;
          }
          else
          {
            input->buffer_ = v14 + 1;
          }
          *(this + 64) = v15 != 0;
          *(this + 4) |= 0x10u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 48 )
            continue;
          v12 = buffer + 1;
          input->buffer_ = v12;
parse_leader_account_id:
          if ( v12 >= buffer_end || ((v13 = *v12) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 17) == 0 )
              return 0;
          }
          else
          {
            *(this + 17) = v13;
            ++input->buffer_;
          }
          *(this + 4) |= 0x20u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 56 )
            continue;
          v10 = buffer + 1;
          input->buffer_ = v10;
parse_game_mode:
          if ( buffer_end <= v10 || ((v11 = *v10) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v35) == 0 )
              return 0;
          }
          else
          {
            *(this + 20) = v11;
            ++input->buffer_;
          }
          *(this + 4) |= 0x40u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 66 )
            continue;
          input->buffer_ = buffer + 1;
parse_name:
          *(this + 4) |= 0x80u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 9), buffer_end) == 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 72 )
            continue;
          v9 = buffer + 1;
          input->buffer_ = v9;
parse_players:
          if ( buffer_end <= v9 || ((v34 = *v9) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v36) == 0 )
              return 0;
          }
          else
          {
            *(this + 21) = v34;
            ++input->buffer_;
          }
          *(this + 4) |= 0x100u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer != buffer_end )
            continue;
          if ( input->buffer_size_after_limit_ != 0
            || (current_limit = input->current_limit_, input->total_bytes_read_ == current_limit) )
          {
            input->last_tag_ = 0;
            input->legitimate_message_end_ = 1;
            return 1;
          }
          buffer_end = input->buffer_;
          break;
        case 3u:
          if ( v8 != 24 )
            goto handle_unusual;
          v18 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_tournament_game_id;
        case 4u:
          if ( v8 == 34 )
            goto LABEL_71;
          goto handle_unusual;
        case 5u:
          if ( v8 != 40 )
            goto handle_unusual;
          v14 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_requires_pass_key;
        case 6u:
          if ( v8 != 48 )
            goto handle_unusual;
          v12 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_leader_account_id;
        case 7u:
          if ( v8 != 56 )
            goto handle_unusual;
          v10 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_game_mode;
        case 8u:
          if ( v8 == 66 )
            goto parse_name;
          goto handle_unusual;
        case 9u:
          if ( v8 != 72 )
            goto handle_unusual;
          v9 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_players;
        default:
handle_unusual:
          if ( v8 != 0 )
            goto LABEL_8;
          return 1;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v8 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      goto LABEL_5;
    if ( TagFallback == 0 )
      return 1;
LABEL_8:
    if ( (v8 & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v8, v2, current_limit) == 0 )
      return 0;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
  }
}


// CDOTABroadcastMsg_LANLobbyReply::SerializeWithCachedSizes  (line 1212, @0x0000000001d62540, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, empty, members
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTABroadcastMsg_LANLobbyReply::SerializeWithCachedSizes(
        const CDOTABroadcastMsg_LANLobbyReply *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rcx
  int v5; // eax
  google::protobuf::io::CodedOutputStream *v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  _QWORD *v9; // rax

  v5 = *(this + 4);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) == 0 )
      goto LABEL_3;
LABEL_19:
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(this + 8), output, v2);
    if ( (*(this + 4) & 4) == 0 )
      goto LABEL_4;
    goto LABEL_20;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt64(&loc_0 + 1, *(this + 3), output, v2);
  v5 = *(this + 4);
  if ( (v5 & 2) != 0 )
    goto LABEL_19;
LABEL_3:
  if ( (v5 & 4) != 0 )
LABEL_20:
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 9), output, v2);
LABEL_4:
  v6 = *(this + 12);
  v7 = 0;
  if ( v6 > 0 )
  {
    do
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        &loc_2 + 2,
        *(*(this + 5) + 8 * v7++),
        output,
        v2);
    while ( v7 < *(this + 12) );
  }
  v8 = *(this + 4);
  if ( (v8 & 0x10) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 3, *(this + 64), output, v2);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x20) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6, *(this + 17), output, v2);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x40) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6 + 1, *(this + 20), output, v2);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x80u) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_8, *(this + 9), output, v2);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x100) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_9, *(this + 21), output, v2);
    v9 = *(this + 1);
    if ( v9 == 0 )
      return;
  }
  else
  {
    v9 = *(this + 1);
    if ( v9 == 0 )
      return;
  }
  if ( v9[1] != *v9 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v6);
}


// CDOTABroadcastMsg_LANLobbyReply::SerializeWithCachedSizesToArray  (line 1273, @0x0000000001d62e50, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, GetCachedSize, WriteBoolNoTagToArray, WriteBoolToArray, WriteMessageNoVirtualToArray<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>, WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteUInt64NoTagToArray, WriteUInt64ToArray, WriteVarint32ToArray, empty, members
// calls: google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *), CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDOTABroadcastMsg_LANLobbyReply::SerializeWithCachedSizesToArray(
        const CDOTABroadcastMsg_LANLobbyReply *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  unsigned __int8 *v8; // rdx
  google::protobuf::io::CodedOutputStream *v9; // rdi
  __int64 v10; // r13
  int v11; // r12d
  google::protobuf::uint8 *v12; // rsi
  unsigned __int8 *v13; // rdx
  unsigned int *v14; // r14
  google::protobuf::io::CodedOutputStream *v15; // rdi
  unsigned __int8 *v16; // rdx
  google::protobuf::uint8 v17; // dl
  google::protobuf::io::CodedOutputStream *v18; // rdi
  google::protobuf::io::CodedOutputStream *v19; // rdi
  google::protobuf::io::CodedOutputStream *v20; // rdi
  google::protobuf::io::CodedOutputStream *v21; // rdi
  __int64 v22; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 3);
    v6 = target + 1;
    *(v6 - 1) = 8;
    result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v5, v6, v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v7 = *(this + 8);
    *result = 16;
    if ( v7 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, result + 1, v4);
    }
    else
    {
      result[1] = v7;
      result += 2;
    }
    LODWORD(v4) = *(this + 4);
  }
  v8 = (v4 & 4);
  if ( v8 != 0 )
  {
    v9 = *(this + 9);
    *result = 24;
    if ( v9 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, result + 1, v8);
    }
    else
    {
      result[1] = v9;
      result += 2;
    }
  }
  if ( *(this + 12) > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v13 = *(this + 5);
      v14 = *&v13[v10];
      *result = 34;
      v15 = v14[5];
      if ( v15 <= 0x7F )
      {
        result[1] = v15;
        v12 = result + 2;
      }
      else
      {
        v12 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v15, result + 1, v13);
      }
      ++v11;
      v10 += 8;
      result = CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::SerializeWithCachedSizesToArray(v14, v12);
    }
    while ( v11 < *(this + 12) );
  }
  v16 = *(this + 4);
  if ( (v16 & 0x10) != 0 )
  {
    v17 = *(this + 64);
    *result = 40;
    result += 2;
    *(result - 1) = v17;
    v16 = *(this + 4);
  }
  if ( (v16 & 0x20) != 0 )
  {
    v18 = *(this + 17);
    *result = 48;
    if ( v18 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v18, result + 1, v16);
    }
    else
    {
      result[1] = v18;
      result += 2;
    }
    v16 = *(this + 4);
  }
  if ( (v16 & 0x40) != 0 )
  {
    v19 = *(this + 20);
    *result = 56;
    if ( v19 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v19, result + 1, v16);
    }
    else
    {
      result[1] = v19;
      result += 2;
    }
    v16 = *(this + 4);
  }
  if ( v16 < 0 )
  {
    v20 = *(this + 9);
    *result = 66;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v20, (result + 1), v16);
    v16 = *(this + 4);
  }
  BYTE1(v16) &= 1u;
  if ( BYTE1(v16) != 0 )
  {
    v21 = *(this + 21);
    *result = 72;
    if ( v21 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v21, result + 1, v16);
    }
    else
    {
      result[1] = v21;
      result += 2;
    }
  }
  v22 = *(this + 1);
  if ( v22 != 0 && *(v22 + 8) != *v22 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v22);
  return result;
}


// CDOTABroadcastMsg_LANLobbyReply::ByteSize  (line 1337, @0x0000000001d62940, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>, StringSize, UInt32Size, UInt64Size, VarintSize32, empty, members, size
// calls: CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
int __fastcall CDOTABroadcastMsg_LANLobbyReply::ByteSize(const CDOTABroadcastMsg_LANLobbyReply *const this)
{
  unsigned __int64 v1; // rsi
  int v2; // r15d
  int v4; // edx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  int v6; // eax
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  google::protobuf::io::CodedOutputStream *v9; // rdi
  int v10; // eax
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // r15d
  __int64 v15; // r13
  int v16; // r12d
  unsigned int v17; // ebx
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rax
  google::protobuf::io::CodedOutputStream *v22; // rdi
  int v23; // eax
  _QWORD *v24; // rbx
  google::protobuf::io::CodedOutputStream *v25; // rdi
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_22;
  if ( (v4 & 1) != 0 )
  {
    v28 = google::protobuf::io::CodedOutputStream::VarintSize64(*(this + 3), v1);
    v4 = *(this + 4);
    v2 = v28 + 1;
    if ( (v4 & 2) != 0 )
      goto LABEL_4;
  }
  else if ( (v4 & 2) != 0 )
  {
LABEL_4:
    v5 = *(this + 8);
    v6 = 2;
    if ( v5 > 0x7F )
    {
      v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
      v4 = *(this + 4);
      v6 = v30 + 1;
    }
    v2 += v6;
  }
  if ( (v4 & 4) != 0 )
  {
    v7 = *(this + 9);
    v8 = 2;
    if ( v7 > 0x7F )
    {
      v29 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
      v4 = *(this + 4);
      v8 = v29 + 1;
    }
    v2 += v8;
  }
  if ( (v4 & 0x10) != 0 )
    v2 += 2;
  if ( (v4 & 0x20) != 0 )
  {
    v9 = *(this + 17);
    v10 = 2;
    if ( v9 > 0x7F )
    {
      v31 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      v4 = *(this + 4);
      v10 = v31 + 1;
    }
    v2 += v10;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v11 = *(this + 20);
    v12 = 2;
    if ( v11 > 0x7F )
    {
      v32 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
      v4 = *(this + 4);
      v12 = v32 + 1;
    }
    v2 += v12;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v24 = *(this + 9);
    v25 = *(*v24 - 24LL);
    v26 = 1;
    v27 = v25;
    if ( v25 > 0x7F )
    {
      v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v25, v1);
      v27 = *(*v24 - 24LL);
      v4 = *(this + 4);
    }
    v2 += v26 + v27 + 1;
  }
LABEL_22:
  if ( BYTE1(v4) != 0 && (v4 & 0x100) != 0 )
  {
    v22 = *(this + 21);
    v23 = 2;
    if ( v22 > 0x7F )
      v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, v1) + 1;
    v2 += v23;
  }
  v13 = *(this + 12);
  v14 = v13 + v2;
  if ( v13 > 0 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      v17 = CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::ByteSize(*(*(this + 5) + v15));
      v19 = 1;
      if ( v17 > 0x7F )
        v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, v18);
      ++v16;
      v15 += 8;
      v14 += v19 + v17;
    }
    while ( v16 < *(this + 12) );
  }
  v20 = *(this + 1);
  if ( v20 != 0 && *(v20 + 8) != *v20 )
    v14 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v20);
  *(this + 5) = v14;
  return v14;
}


// CDOTABroadcastMsg_LANLobbyReply::MergeFrom  (line 1417, @0x0000000001d655d0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTABroadcastMsg_LANLobbyReply*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTABroadcastMsg_LANLobbyReply::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTABroadcastMsg_LANLobbyReply
void __fastcall CDOTABroadcastMsg_LANLobbyReply::MergeFrom(
        CDOTABroadcastMsg_LANLobbyReply *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTABroadcastMsg_LANLobbyReply *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      1418);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTABroadcastMsg_LANLobbyReply,
               0)) != 0 )
  {
    CDOTABroadcastMsg_LANLobbyReply::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTABroadcastMsg_LANLobbyReply::MergeFrom  (line 1429, @0x0000000001d652a0, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>, New, set_game_mode, set_has_game_mode, set_has_id, set_has_leader_account_id, set_has_name, set_has_players, set_has_requires_pass_key, set_has_tournament_game_id, set_has_tournament_id, set_id, set_leader_account_id, set_name, set_players, set_requires_pass_key, set_tournament_game_id, set_tournament_id
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember, CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply, CDOTABroadcastMsg_LANLobbyReply::MergeFrom, CDOTABroadcastMsg_LANLobbyReply::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CDOTABroadcastMsg_LANLobbyReply::MergeFrom(
        CDOTABroadcastMsg_LANLobbyReply *const this,
        const CDOTABroadcastMsg_LANLobbyReply *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *v6; // r15
  __int64 v7; // rax
  CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *v8; // rdi
  __int64 v9; // rdx
  const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  char v18; // al
  int v19; // eax
  int v20; // eax
  int v21; // eax
  const std::string *v22; // rsi
  std::string *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v26; // [rsp+8h] [rbp-68h]
  char v27; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v28; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v28,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.cc",
      1430);
    v24 = google::protobuf::internal::LogMessage::operator<<(&v28, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v27, v24);
    google::protobuf::internal::LogMessage::~LogMessage(&v28);
  }
  v26 = (this + 40);
  if ( this + 40 == from + 40 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v28,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v25 = google::protobuf::internal::LogMessage::operator<<(&v28, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v27, v25);
    google::protobuf::internal::LogMessage::~LogMessage(&v28);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v26, *(from + 12) + *(this + 12));
  if ( *(from + 12) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v11 = *(this + 12);
      v12 = *(this + 13);
      if ( v11 >= v12 )
      {
        if ( v12 == *(this + 14) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v26, v12 + 1);
        v6 = operator new(0x28u);
        CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(v6);
        v7 = *(this + 12);
        v8 = v6;
        v9 = *(this + 5);
        ++*(this + 13);
        *(this + 12) = v7 + 1;
        *(v9 + 8 * v7) = v6;
      }
      else
      {
        v13 = *(this + 5);
        *(this + 12) = v11 + 1;
        v8 = *(v13 + 8 * v11);
      }
      ++v5;
      v10 = *(*(from + 5) + v4);
      v4 += 8;
      CDOTABroadcastMsg_LANLobbyReply_CLobbyMember::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 12) );
  }
  v14 = *(from + 4);
  if ( v14 != 0 )
  {
    if ( (v14 & 1) != 0 )
    {
      v15 = *(from + 3);
      *(this + 4) |= 1u;
      *(this + 3) = v15;
      v14 = *(from + 4);
    }
    if ( (v14 & 2) != 0 )
    {
      v16 = *(from + 8);
      *(this + 4) |= 2u;
      *(this + 8) = v16;
      v14 = *(from + 4);
    }
    if ( (v14 & 4) != 0 )
    {
      v17 = *(from + 9);
      *(this + 4) |= 4u;
      *(this + 9) = v17;
      v14 = *(from + 4);
    }
    if ( (v14 & 0x10) != 0 )
    {
      v18 = *(from + 64);
      *(this + 4) |= 0x10u;
      *(this + 64) = v18;
      v14 = *(from + 4);
    }
    if ( (v14 & 0x20) != 0 )
    {
      v19 = *(from + 17);
      *(this + 4) |= 0x20u;
      *(this + 17) = v19;
      v14 = *(from + 4);
    }
    if ( (v14 & 0x40) != 0 )
    {
      v20 = *(from + 20);
      *(this + 4) |= 0x40u;
      *(this + 20) = v20;
      v14 = *(from + 4);
    }
    if ( (v14 & 0x80u) != 0 )
    {
      v22 = *(from + 9);
      v23 = *(this + 9);
      *(this + 4) |= 0x80u;
      std::string::assign(v23, v22);
      v14 = *(from + 4);
    }
  }
  if ( BYTE1(v14) != 0 && (v14 & 0x100) != 0 )
  {
    v21 = *(from + 21);
    *(this + 4) |= 0x100u;
    *(this + 21) = v21;
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTABroadcastMsg_LANLobbyReply::CopyFrom  (line 1463, @0x0000000001d62030, libserver.so)
void __fastcall CDOTABroadcastMsg_LANLobbyReply::CopyFrom(
        CDOTABroadcastMsg_LANLobbyReply *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTABroadcastMsg_LANLobbyReply::CopyFrom  (line 1469, @0x0000000001d656b0, libserver.so)
// calls: CDOTABroadcastMsg_LANLobbyReply::MergeFrom
void __fastcall CDOTABroadcastMsg_LANLobbyReply::CopyFrom(
        CDOTABroadcastMsg_LANLobbyReply *const this,
        const CDOTABroadcastMsg_LANLobbyReply *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTABroadcastMsg_LANLobbyReply::MergeFrom(this, from);
  }
}


// CDOTABroadcastMsg_LANLobbyReply::IsInitialized  (line 1475, @0x0000000001d62070, libserver.so)
bool __fastcall CDOTABroadcastMsg_LANLobbyReply::IsInitialized(const CDOTABroadcastMsg_LANLobbyReply *const this)
{
  return 1;
}


// CDOTABroadcastMsg_LANLobbyReply::Swap  (line 1480, @0x0000000001d656f0, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTABroadcastMsg_LANLobbyReply::Swap(
        CDOTABroadcastMsg_LANLobbyReply *const this,
        CDOTABroadcastMsg_LANLobbyReply *other)
{
  __int64 v4; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // rdi
  char v7; // al
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( other != this )
  {
    v4 = *(this + 3);
    v5 = (other + 40);
    v6 = (this + 40);
    *&v6[-1].current_size_ = *&v5[-1].current_size_;
    *&v5[-1].current_size_ = v4;
    LODWORD(v4) = v6[-1].total_size_;
    v6[-1].total_size_ = v5[-1].total_size_;
    v5[-1].total_size_ = v4;
    LODWORD(v4) = *(&v6[-1].total_size_ + 1);
    *(&v6[-1].total_size_ + 1) = *(&v5[-1].total_size_ + 1);
    *(&v5[-1].total_size_ + 1) = v4;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v6, v5);
    v7 = *(this + 64);
    *(this + 64) = *(other + 64);
    *(other + 64) = v7;
    v8 = *(this + 17);
    *(this + 17) = *(other + 17);
    *(other + 17) = v8;
    v9 = *(this + 20);
    *(this + 20) = *(other + 20);
    *(other + 20) = v9;
    v10 = *(this + 9);
    *(this + 9) = *(other + 9);
    *(other + 9) = v10;
    LODWORD(v10) = *(this + 21);
    *(this + 21) = *(other + 21);
    *(other + 21) = v10;
    LODWORD(v10) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v10;
    v11 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v11;
    LODWORD(v11) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v11;
  }
}


// CDOTABroadcastMsg_LANLobbyReply::GetMetadata  (line 1497, @0x0000000001d62c70, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto(void), `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_, `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_reflection_
google::protobuf::Metadata __fastcall CDOTABroadcastMsg_LANLobbyReply::GetMetadata(
        const CDOTABroadcastMsg_LANLobbyReply *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fbroadcastmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_descriptor_;
  result.reflection = `anonymous namespace'::CDOTABroadcastMsg_LANLobbyReply_reflection_;
  return result;
}


