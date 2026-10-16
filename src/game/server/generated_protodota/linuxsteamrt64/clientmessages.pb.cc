// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/clientmessages.pb.cc:220
struct StaticDescriptorInitializer_clientmessages_2eproto {
	StaticDescriptorInitializer_clientmessages_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_clientmessages_2eproto  (line 49, @0x0000000001afd510, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_clientmessages_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_, CClientMsg_CustomGameEvent::default_instance_, protobuf_AssignDesc_clientmessages_2eproto(void)::CClientMsg_CustomGameEvent_offsets_, `anonymous namespace'::CClientMsg_CustomGameEvent_reflection_, `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_, CClientMsg_ClientUIEvent::default_instance_, protobuf_AssignDesc_clientmessages_2eproto(void)::CClientMsg_ClientUIEvent_offsets_, `anonymous namespace'::CClientMsg_ClientUIEvent_reflection_ (22 total)
void __cdecl protobuf_AssignDesc_clientmessages_2eproto()
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
  const google::protobuf::Descriptor *v20; // rax
  google::protobuf::DescriptorPool *v21; // rdi
  const google::protobuf::DescriptorPool *v22; // r13
  google::protobuf::MessageFactory *v23; // rdi
  google::protobuf::MessageFactory *v24; // r14
  google::protobuf::internal::GeneratedMessageReflection *v25; // r12
  const google::protobuf::Descriptor *v26; // rax
  google::protobuf::DescriptorPool *v27; // rdi
  const google::protobuf::DescriptorPool *v28; // r13
  google::protobuf::MessageFactory *v29; // rdi
  google::protobuf::MessageFactory *v30; // r14
  google::protobuf::internal::GeneratedMessageReflection *v31; // r12
  const google::protobuf::EnumDescriptor *v32; // rax
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  char v36; // [rsp+3Eh] [rbp-42h] BYREF
  char v37; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v38; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_clientmessages_2eproto();
  std::string::string(&v38, "clientmessages.proto", &v36);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v38);
  v3 = *&v38.level_ - 24LL;
  if ( (*&v38.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v34 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v35 = *(*&v38.level_ - 8LL);
      *(*&v38.level_ - 8LL) = v35 - 1;
      v34 = v35;
    }
    if ( v34 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v37);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v38,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      54);
    v33 = google::protobuf::internal::LogMessage::operator<<(&v38, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v37, v33);
    google::protobuf::internal::LogMessage::~LogMessage(&v38);
  }
  `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_,
    CClientMsg_CustomGameEvent::default_instance_,
    protobuf_AssignDesc_clientmessages_2eproto(void)::CClientMsg_CustomGameEvent_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    40);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CClientMsg_CustomGameEvent_reflection_ = v7;
  `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_,
    CClientMsg_ClientUIEvent::default_instance_,
    protobuf_AssignDesc_clientmessages_2eproto(void)::CClientMsg_ClientUIEvent_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    56);
  v14 = *(FileByName + 80);
  `anonymous namespace'::CClientMsg_ClientUIEvent_reflection_ = v13;
  `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_descriptor_ = v14 + 2;
  v16 = google::protobuf::DescriptorPool::generated_pool(v15);
  v18 = google::protobuf::MessageFactory::generated_factory(v17);
  v19 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v19,
    `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_descriptor_,
    CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_,
    protobuf_AssignDesc_clientmessages_2eproto(void)::CClientMsg_DevPaletteVisibilityChangedEvent_offsets_,
    16,
    8,
    -1,
    v16,
    v18,
    32);
  v20 = *(FileByName + 80);
  `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_reflection_ = v19;
  `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_descriptor_ = v20 + 3;
  v22 = google::protobuf::DescriptorPool::generated_pool(v21);
  v24 = google::protobuf::MessageFactory::generated_factory(v23);
  v25 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v25,
    `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_descriptor_,
    CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_,
    protobuf_AssignDesc_clientmessages_2eproto(void)::CClientMsg_WorldUIControllerHasPanelChangedEvent_offsets_,
    16,
    8,
    -1,
    v22,
    v24,
    40);
  v26 = *(FileByName + 80);
  `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_reflection_ = v25;
  `anonymous namespace'::CClientMsg_RotateAnchor_descriptor_ = v26 + 4;
  v28 = google::protobuf::DescriptorPool::generated_pool(v27);
  v30 = google::protobuf::MessageFactory::generated_factory(v29);
  v31 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v31,
    `anonymous namespace'::CClientMsg_RotateAnchor_descriptor_,
    CClientMsg_RotateAnchor::default_instance_,
    protobuf_AssignDesc_clientmessages_2eproto(void)::CClientMsg_RotateAnchor_offsets_,
    16,
    8,
    -1,
    v28,
    v30,
    32);
  v32 = *(FileByName + 96);
  `anonymous namespace'::CClientMsg_RotateAnchor_reflection_ = v31;
  `anonymous namespace'::EBaseClientMessages_descriptor_ = v32;
  `anonymous namespace'::EClientUIEvent_descriptor_ = v32 + 1;
}


// protobuf_RegisterTypes  (line 149, @0x0000000001afd3a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_clientmessages_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), CClientMsg_CustomGameEvent::default_instance_, `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_, CClientMsg_ClientUIEvent::default_instance_, `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_, CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_, `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_descriptor_ (12 total)
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
  const google::protobuf::Message *v9; // rdx
  const google::protobuf::Descriptor *v10; // rsi
  __int64 v11[2]; // [rsp+0h] [rbp-30h] BYREF
  char v12; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v12 = 0;
    v11[0] = off_47BFB70;
    v11[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v11, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v11);
  }
  v2 = CClientMsg_CustomGameEvent::default_instance_;
  if ( CClientMsg_CustomGameEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    v2 = CClientMsg_CustomGameEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_,
    v2,
    v1);
  v4 = CClientMsg_ClientUIEvent::default_instance_;
  if ( CClientMsg_ClientUIEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    v4 = CClientMsg_ClientUIEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_,
    v4,
    v3);
  v6 = CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_;
  if ( CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    v6 = CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_descriptor_,
    v6,
    v5);
  v8 = CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_;
  if ( CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    v8 = CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_descriptor_,
    v8,
    v7);
  v10 = CClientMsg_RotateAnchor::default_instance_;
  if ( CClientMsg_RotateAnchor::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    v10 = CClientMsg_RotateAnchor::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CClientMsg_RotateAnchor_descriptor_,
    v10,
    v9);
}


// protobuf_ShutdownFile_clientmessages_2eproto  (line 165, @0x0000000001af9f40, libserver.so)
// globals: CClientMsg_CustomGameEvent::default_instance_, `anonymous namespace'::CClientMsg_CustomGameEvent_reflection_, CClientMsg_ClientUIEvent::default_instance_, `anonymous namespace'::CClientMsg_ClientUIEvent_reflection_, CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_, `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_reflection_, CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_, `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_reflection_ (10 total)
void __cdecl protobuf_ShutdownFile_clientmessages_2eproto()
{
  if ( CClientMsg_CustomGameEvent::default_instance_ != 0 )
    (CClientMsg_CustomGameEvent::default_instance_->name_[1]._M_dataplus._M_p)(CClientMsg_CustomGameEvent::default_instance_);
  if ( `anonymous namespace'::CClientMsg_CustomGameEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CClientMsg_CustomGameEvent_reflection_ + 8LL))(`anonymous namespace'::CClientMsg_CustomGameEvent_reflection_);
  if ( CClientMsg_ClientUIEvent::default_instance_ != 0 )
    (CClientMsg_ClientUIEvent::default_instance_->name_[1]._M_dataplus._M_p)(CClientMsg_ClientUIEvent::default_instance_);
  if ( `anonymous namespace'::CClientMsg_ClientUIEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CClientMsg_ClientUIEvent_reflection_ + 8LL))(`anonymous namespace'::CClientMsg_ClientUIEvent_reflection_);
  if ( CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_ != 0 )
    (CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_->name_[1]._M_dataplus._M_p)(CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_);
  if ( `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_reflection_ + 8LL))(`anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_reflection_);
  if ( CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_ != 0 )
    (CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_->name_[1]._M_dataplus._M_p)(CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_);
  if ( `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_reflection_ + 8LL))(`anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_reflection_);
  if ( CClientMsg_RotateAnchor::default_instance_ != 0 )
    (CClientMsg_RotateAnchor::default_instance_->name_[1]._M_dataplus._M_p)(CClientMsg_RotateAnchor::default_instance_);
  if ( `anonymous namespace'::CClientMsg_RotateAnchor_reflection_ != 0 )
    (*(*`anonymous namespace'::CClientMsg_RotateAnchor_reflection_ + 8LL))(`anonymous namespace'::CClientMsg_RotateAnchor_reflection_);
}


// protobuf_AddDesc_clientmessages_2eproto  (line 178, @0x0000000001afd180, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent, CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent, CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent, CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent, CClientMsg_RotateAnchor::CClientMsg_RotateAnchor, google::protobuf::internal::OnShutdown(void (*)(void)), operator delete, _Unwind_Resume
// callers: CClientMsg_CustomGameEvent::default_instance, CClientMsg_ClientUIEvent::default_instance, CClientMsg_DevPaletteVisibilityChangedEvent::default_instance, CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance, protobuf_RegisterTypes, protobuf_AssignDesc_clientmessages_2eproto, CClientMsg_RotateAnchor::default_instance, _GLOBAL__sub_I_clientmessages.pb.cc
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc"
// globals: protobuf_AddDesc_clientmessages_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CClientMsg_CustomGameEvent::default_instance_, CClientMsg_ClientUIEvent::default_instance_, CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_, CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_, CClientMsg_RotateAnchor::default_instance_, protobuf_ShutdownFile_clientmessages_2eproto(void)
void __cdecl protobuf_AddDesc_clientmessages_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CClientMsg_CustomGameEvent *v3; // rbx
  CClientMsg_ClientUIEvent *v4; // rbx
  CClientMsg_DevPaletteVisibilityChangedEvent *v5; // rbx
  CClientMsg_WorldUIControllerHasPanelChangedEvent *v6; // rbx
  CClientMsg_RotateAnchor *v7; // rbx
  void (*v8)(void); // rsi

  if ( !protobuf_AddDesc_clientmessages_2eproto(void)::already_here )
  {
    protobuf_AddDesc_clientmessages_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      v0);
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_327C4B8, &stru_10.m_pEntityIdChunks[27], v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "clientmessages.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x28u);
    CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent(v3);
    CClientMsg_CustomGameEvent::default_instance_ = v3;
    v4 = operator new(0x38u);
    CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent(v4);
    CClientMsg_ClientUIEvent::default_instance_ = v4;
    v5 = operator new(0x20u);
    CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent(v5);
    CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_ = v5;
    v6 = operator new(0x28u);
    CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent(v6);
    CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_ = v6;
    v7 = operator new(0x20u);
    CClientMsg_RotateAnchor::CClientMsg_RotateAnchor(v7);
    CClientMsg_RotateAnchor::default_instance_ = v7;
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_clientmessages_2eproto, v8);
  }
}


// EBaseClientMessages_descriptor  (line 225, @0x0000000001afbaa0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::EBaseClientMessages_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EBaseClientMessages_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EBaseClientMessages_descriptor_;
}


// EBaseClientMessages_IsValid  (line 229, @0x0000000001afbb30, libserver.so)
bool __fastcall EBaseClientMessages_IsValid(int value)
{
  bool result; // al

  result = 0;
  if ( (value - 280) <= 0x14 )
    return ((1LL << (value - 24)) & 0x10003D) != 0;
  return result;
}


// EClientUIEvent_descriptor  (line 243, @0x0000000001afbb60, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::EClientUIEvent_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EClientUIEvent_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EClientUIEvent_descriptor_;
}


// EClientUIEvent_IsValid  (line 247, @0x0000000001afbbf0, libserver.so)
bool __fastcall EClientUIEvent_IsValid(int value)
{
  return value <= 2;
}


// CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent  (line 266, @0x0000000001afbcf0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CClientMsg_CustomGameEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CClientMsg_CustomGameEvent::New, protobuf_AddDesc_clientmessages_2eproto, CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage
void __fastcall CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent(CClientMsg_CustomGameEvent *const this)
{
  *this = off_3F76690;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CClientMsg_CustomGameEvent::SharedCtor(this);
}


// CClientMsg_CustomGameEvent::InitAsDefaultInstance  (line 272, @0x0000000001afbc00, libserver.so)
void __fastcall CClientMsg_CustomGameEvent::InitAsDefaultInstance(CClientMsg_CustomGameEvent *const this)
{
  ;
}


// CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent  (line 275, @0x0000000001afc030, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CClientMsg_CustomGameEvent::SharedCtor, CClientMsg_CustomGameEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent(
        CClientMsg_CustomGameEvent *const this,
        const CClientMsg_CustomGameEvent *const from)
{
  *this = off_3F76690;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CClientMsg_CustomGameEvent::SharedCtor(this);
  CClientMsg_CustomGameEvent::MergeFrom(this, from);
}


// CClientMsg_CustomGameEvent::SharedCtor  (line 282, @0x0000000001afbc10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent
void __fastcall CClientMsg_CustomGameEvent::SharedCtor(CClientMsg_CustomGameEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  const std::string *v3; // r14
  std::string *v4; // r12
  const std::string *v5; // r13
  std::string *v6; // r12
  __int64 v7[2]; // [rsp+0h] [rbp-40h] BYREF
  char v8; // [rsp+10h] [rbp-30h]

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v8 = 0;
    v7[0] = off_47BFB70;
    v7[1] = google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, v7, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v7);
  }
  *(this + 5) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  v5 = google::protobuf::internal::empty_string_;
  *(this + 3) = v4;
  v6 = operator new(8u);
  std::string::string(v6, v5);
  *(this + 4) = v6;
  *(this + 4) = 0;
}


// CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent  (line 290, @0x0000000001afbe50, libserver.so)
// calls: CClientMsg_CustomGameEvent::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>::~CBaseCmdKeyValues, CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent(CClientMsg_CustomGameEvent *const this)
{
  *this = off_3F76690;
  CClientMsg_CustomGameEvent::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent  (line 290, @0x0000000001afbe90, libserver.so)
// calls: CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent, operator delete
void __fastcall CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent(CClientMsg_CustomGameEvent *const this)
{
  CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent(this);
  operator delete(this);
}


// CClientMsg_CustomGameEvent::SharedDtor  (line 295, @0x0000000001afbd90, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent
void __fastcall CClientMsg_CustomGameEvent::SharedDtor(CClientMsg_CustomGameEvent *const this)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edx
  _BYTE v12[17]; // [rsp+Fh] [rbp-11h] BYREF

  v2 = *(this + 3);
  if ( v2 != 0 )
  {
    v3 = *v2;
    v4 = *v2 - 24;
    if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v8 = _InterlockedExchangeAdd((v4 + 16), 0xFFFFFFFF);
      }
      else
      {
        v10 = *(v3 - 8);
        *(v3 - 8) = v10 - 1;
        v8 = v10;
      }
      if ( v8 <= 0 )
        std::string::_Rep::_M_destroy(v4, v12);
    }
    operator delete(v2);
  }
  v5 = *(this + 4);
  if ( v5 != 0 )
  {
    v6 = *v5;
    v7 = *v5 - 24;
    if ( v7 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v9 = _InterlockedExchangeAdd((v7 + 16), 0xFFFFFFFF);
      }
      else
      {
        v11 = *(v6 - 8);
        *(v6 - 8) = v11 - 1;
        v9 = v11;
      }
      if ( v9 <= 0 )
        std::string::_Rep::_M_destroy(v7, v12);
    }
    operator delete(v5);
  }
}


// CClientMsg_CustomGameEvent::SetCachedSize  (line 302, @0x0000000001afa010, libserver.so)
void __fastcall CClientMsg_CustomGameEvent::SetCachedSize(const CClientMsg_CustomGameEvent *const this, int size)
{
  *(this + 5) = size;
}


// CClientMsg_CustomGameEvent::descriptor  (line 307, @0x0000000001afbeb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CClientMsg_CustomGameEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_;
}


// CClientMsg_CustomGameEvent::default_instance  (line 312, @0x0000000001afd2e0, libserver.so)
// calls: protobuf_AddDesc_clientmessages_2eproto
// globals: CClientMsg_CustomGameEvent::default_instance_
const CClientMsg_CustomGameEvent *__cdecl CClientMsg_CustomGameEvent::default_instance()
{
  const CClientMsg_CustomGameEvent *result; // rax

  result = CClientMsg_CustomGameEvent::default_instance_;
  if ( CClientMsg_CustomGameEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    return CClientMsg_CustomGameEvent::default_instance_;
  }
  return result;
}


// CClientMsg_CustomGameEvent::New  (line 319, @0x0000000001afbd50, libserver.so)
// calls: operator new, CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent, operator delete, _Unwind_Resume
CClientMsg_CustomGameEvent *__fastcall CClientMsg_CustomGameEvent::New(const CClientMsg_CustomGameEvent *const this)
{
  CClientMsg_CustomGameEvent *v1; // rbx

  v1 = operator new(0x28u);
  CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent(v1);
  return v1;
}


// CClientMsg_CustomGameEvent::Clear  (line 323, @0x0000000001afa3f0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CClientMsg_CustomGameEvent::Clear(CClientMsg_CustomGameEvent *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 1) == 0 )
    {
      if ( (v2 & 2) == 0 )
        goto LABEL_4;
      goto LABEL_7;
    }
    std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
    if ( (*(this + 4) & 2) != 0 )
LABEL_7:
      std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
  }
LABEL_4:
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CClientMsg_CustomGameEvent::MergePartialFromCodedStream  (line 336, @0x0000000001afb260, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, mutable_data, mutable_event_name, set_has_data, set_has_event_name
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
bool __fastcall CClientMsg_CustomGameEvent::MergePartialFromCodedStream(
        CClientMsg_CustomGameEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  google::protobuf::UnknownFieldSet *v9; // rcx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al

  v3 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
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
        if ( google::protobuf::internal::WireFormat::SkipField(input, v8, v3, v9) == 0 )
          return 0;
        buffer = input->buffer_;
        if ( input->buffer_end_ > buffer )
          goto LABEL_3;
      }
    }
    else
    {
      v8 = v7;
      v9 = (buffer + 1);
      input->last_tag_ = v7;
      input->buffer_ = v9;
    }
    buffer_end = (v8 >> 3);
    if ( buffer_end != 1 )
      break;
    if ( v8 != 10 )
      goto handle_unusual;
    *(this + 4) |= 1u;
    if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), buffer_end) == 0 )
      return 0;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      input->buffer_ = buffer + 1;
parse_data:
      *(this + 4) |= 2u;
      result = google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 4), buffer_end);
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
  if ( buffer_end == 2 && v8 == 18 )
    goto parse_data;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CClientMsg_CustomGameEvent::SerializeWithCachedSizes  (line 397, @0x0000000001afa510, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CClientMsg_CustomGameEvent::SerializeWithCachedSizes(
        const CClientMsg_CustomGameEvent *const this,
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
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2, *(this + 4), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
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


// CClientMsg_CustomGameEvent::SerializeWithCachedSizesToArray  (line 423, @0x0000000001afa960, libserver.so)  // inlines: WriteBytesToArray, WriteStringToArray, WriteTagToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CClientMsg_CustomGameEvent::SerializeWithCachedSizesToArray(
        const CClientMsg_CustomGameEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  const std::string *v8; // rsi
  __int64 v9; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 3);
    v6 = (target + 1);
    HIBYTE(v6[-1]._M_dataplus._M_p) = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v5, v6, v2);
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v7 = *(this + 4);
    v8 = (target + 1);
    HIBYTE(v8[-1]._M_dataplus._M_p) = 18;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v7, v8, v2);
  }
  v9 = *(this + 1);
  if ( v9 == 0 || *(v9 + 8) == *v9 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v9);
}


// CClientMsg_CustomGameEvent::ByteSize  (line 452, @0x0000000001afac00, libserver.so)  // inlines: BytesSize, StringSize, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CClientMsg_CustomGameEvent::ByteSize(const CClientMsg_CustomGameEvent *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rax
  _QWORD *v7; // r13
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  int v10; // edx
  _QWORD *v11; // rbx
  int v12; // ecx
  google::protobuf::io::CodedOutputStream *v13; // rdi
  int v14; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_4;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) == 0 )
      goto LABEL_4;
    goto LABEL_8;
  }
  v11 = *(this + 3);
  v12 = 1;
  v13 = *(*v11 - 24LL);
  v14 = v13;
  if ( v13 > 0x7F )
  {
    v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, v1);
    v14 = *(*v11 - 24LL);
    v4 = *(this + 4);
  }
  v3 = v12 + v14 + 1;
  if ( (v4 & 2) != 0 )
  {
LABEL_8:
    v7 = *(this + 4);
    v8 = *(*v7 - 24LL);
    v9 = 1;
    v10 = v8;
    if ( v8 > 0x7F )
    {
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
      v10 = *(*v7 - 24LL);
    }
    v3 += v9 + v10 + 1;
  }
LABEL_4:
  v5 = *(this + 1);
  if ( v5 != 0 && *(v5 + 8) != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v5);
  *(this + 5) = v3;
  return v3;
}


// CClientMsg_CustomGameEvent::MergeFrom  (line 482, @0x0000000001afc0a0, libserver.so)  // inlines: dynamic_cast_if_available<const CClientMsg_CustomGameEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CClientMsg_CustomGameEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CClientMsg_CustomGameEvent
void __fastcall CClientMsg_CustomGameEvent::MergeFrom(
        CClientMsg_CustomGameEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CClientMsg_CustomGameEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      483);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CClientMsg_CustomGameEvent,
               0)) != 0 )
  {
    CClientMsg_CustomGameEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CClientMsg_CustomGameEvent::MergeFrom  (line 494, @0x0000000001afbf40, libserver.so)  // inlines: set_data, set_event_name, set_has_data, set_has_event_name
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CClientMsg_CustomGameEvent::CClientMsg_CustomGameEvent, CClientMsg_CustomGameEvent::MergeFrom, CClientMsg_CustomGameEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CClientMsg_CustomGameEvent::MergeFrom(
        CClientMsg_CustomGameEvent *const this,
        const CClientMsg_CustomGameEvent *const from)
{
  int v4; // eax
  const std::string *v5; // rsi
  std::string *v6; // rdi
  const std::string *v7; // rsi
  std::string *v8; // rdi
  __int64 v9; // rax
  char v10; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v11; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v11,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      495);
    v9 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v10, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v7 = *(from + 3);
      v8 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v8, v7);
      if ( (*(from + 4) & 2) == 0 )
        goto LABEL_6;
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v5 = *(from + 4);
    v6 = *(this + 4);
    *(this + 4) |= 2u;
    std::string::assign(v6, v5);
  }
LABEL_6:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CClientMsg_CustomGameEvent::CopyFrom  (line 507, @0x0000000001afa020, libserver.so)
void __fastcall CClientMsg_CustomGameEvent::CopyFrom(
        CClientMsg_CustomGameEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CClientMsg_CustomGameEvent::CopyFrom  (line 513, @0x0000000001afc180, libserver.so)
// calls: CClientMsg_CustomGameEvent::MergeFrom
// callers: CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CClientMsg_CustomGameEvent::CopyFrom(
        CClientMsg_CustomGameEvent *const this,
        const CClientMsg_CustomGameEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CClientMsg_CustomGameEvent::MergeFrom(this, from);
  }
}


// CClientMsg_CustomGameEvent::IsInitialized  (line 519, @0x0000000001afa060, libserver.so)
bool __fastcall CClientMsg_CustomGameEvent::IsInitialized(const CClientMsg_CustomGameEvent *const this)
{
  return 1;
}


// CClientMsg_CustomGameEvent::Swap  (line 524, @0x0000000001afc1c0, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CClientMsg_CustomGameEvent::Swap(
        CClientMsg_CustomGameEvent *const this,
        CClientMsg_CustomGameEvent *other)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( other != this )
  {
    v2 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v2;
    v3 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v3;
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


// CClientMsg_CustomGameEvent::GetMetadata  (line 534, @0x0000000001afaf40, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_, `anonymous namespace'::CClientMsg_CustomGameEvent_reflection_
google::protobuf::Metadata __fastcall CClientMsg_CustomGameEvent::GetMetadata(
        const CClientMsg_CustomGameEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CClientMsg_CustomGameEvent_descriptor_;
  result.reflection = `anonymous namespace'::CClientMsg_CustomGameEvent_reflection_;
  return result;
}


// CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent  (line 553, @0x0000000001afc330, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CClientMsg_ClientUIEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CClientMsg_ClientUIEvent::New, protobuf_AddDesc_clientmessages_2eproto, CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent(CClientMsg_ClientUIEvent *const this)
{
  *this = off_3F76750;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CClientMsg_ClientUIEvent::SharedCtor(this);
}


// CClientMsg_ClientUIEvent::InitAsDefaultInstance  (line 559, @0x0000000001afc220, libserver.so)
void __fastcall CClientMsg_ClientUIEvent::InitAsDefaultInstance(CClientMsg_ClientUIEvent *const this)
{
  ;
}


// CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent  (line 562, @0x0000000001afc6b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CClientMsg_ClientUIEvent::SharedCtor, CClientMsg_ClientUIEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent(
        CClientMsg_ClientUIEvent *const this,
        const CClientMsg_ClientUIEvent *const from)
{
  *this = off_3F76750;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CClientMsg_ClientUIEvent::SharedCtor(this);
  CClientMsg_ClientUIEvent::MergeFrom(this, from);
}


// CClientMsg_ClientUIEvent::SharedCtor  (line 569, @0x0000000001afc230, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent
void __fastcall CClientMsg_ClientUIEvent::SharedCtor(CClientMsg_ClientUIEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  const std::string *v3; // r14
  std::string *v4; // r12
  const std::string *v5; // r13
  std::string *v6; // r12
  __int64 v7[2]; // [rsp+0h] [rbp-40h] BYREF
  char v8; // [rsp+10h] [rbp-30h]

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v8 = 0;
    v7[0] = off_47BFB70;
    v7[1] = google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, v7, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v7);
  }
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 12) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  v5 = google::protobuf::internal::empty_string_;
  *(this + 4) = v4;
  v6 = operator new(8u);
  std::string::string(v6, v5);
  *(this + 5) = v6;
  *(this + 4) = 0;
}


// CClientMsg_ClientUIEvent::~CClientMsg_ClientUIEvent  (line 580, @0x0000000001afc490, libserver.so)
// calls: CClientMsg_ClientUIEvent::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CClientMsg_ClientUIEvent::~CClientMsg_ClientUIEvent, CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CClientMsg_ClientUIEvent::~CClientMsg_ClientUIEvent(CClientMsg_ClientUIEvent *const this)
{
  *this = off_3F76750;
  CClientMsg_ClientUIEvent::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CClientMsg_ClientUIEvent::~CClientMsg_ClientUIEvent  (line 580, @0x0000000001afc4d0, libserver.so)
// calls: CClientMsg_ClientUIEvent::~CClientMsg_ClientUIEvent, operator delete
void __fastcall CClientMsg_ClientUIEvent::~CClientMsg_ClientUIEvent(CClientMsg_ClientUIEvent *const this)
{
  CClientMsg_ClientUIEvent::~CClientMsg_ClientUIEvent(this);
  operator delete(this);
}


// CClientMsg_ClientUIEvent::SharedDtor  (line 585, @0x0000000001afc3d0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CClientMsg_ClientUIEvent::~CClientMsg_ClientUIEvent
void __fastcall CClientMsg_ClientUIEvent::SharedDtor(CClientMsg_ClientUIEvent *const this)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edx
  _BYTE v12[17]; // [rsp+Fh] [rbp-11h] BYREF

  v2 = *(this + 4);
  if ( v2 != 0 )
  {
    v3 = *v2;
    v4 = *v2 - 24;
    if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v8 = _InterlockedExchangeAdd((v4 + 16), 0xFFFFFFFF);
      }
      else
      {
        v10 = *(v3 - 8);
        *(v3 - 8) = v10 - 1;
        v8 = v10;
      }
      if ( v8 <= 0 )
        std::string::_Rep::_M_destroy(v4, v12);
    }
    operator delete(v2);
  }
  v5 = *(this + 5);
  if ( v5 != 0 )
  {
    v6 = *v5;
    v7 = *v5 - 24;
    if ( v7 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v9 = _InterlockedExchangeAdd((v7 + 16), 0xFFFFFFFF);
      }
      else
      {
        v11 = *(v6 - 8);
        *(v6 - 8) = v11 - 1;
        v9 = v11;
      }
      if ( v9 <= 0 )
        std::string::_Rep::_M_destroy(v7, v12);
    }
    operator delete(v5);
  }
}


// CClientMsg_ClientUIEvent::SetCachedSize  (line 592, @0x0000000001afa070, libserver.so)
void __fastcall CClientMsg_ClientUIEvent::SetCachedSize(const CClientMsg_ClientUIEvent *const this, int size)
{
  *(this + 5) = size;
}


// CClientMsg_ClientUIEvent::descriptor  (line 597, @0x0000000001afc4f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CClientMsg_ClientUIEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_;
}


// CClientMsg_ClientUIEvent::default_instance  (line 602, @0x0000000001afd310, libserver.so)
// calls: protobuf_AddDesc_clientmessages_2eproto
// globals: CClientMsg_ClientUIEvent::default_instance_
const CClientMsg_ClientUIEvent *__cdecl CClientMsg_ClientUIEvent::default_instance()
{
  const CClientMsg_ClientUIEvent *result; // rax

  result = CClientMsg_ClientUIEvent::default_instance_;
  if ( CClientMsg_ClientUIEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    return CClientMsg_ClientUIEvent::default_instance_;
  }
  return result;
}


// CClientMsg_ClientUIEvent::New  (line 609, @0x0000000001afc390, libserver.so)
// calls: operator new, CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent, operator delete, _Unwind_Resume
CClientMsg_ClientUIEvent *__fastcall CClientMsg_ClientUIEvent::New(const CClientMsg_ClientUIEvent *const this)
{
  CClientMsg_ClientUIEvent *v1; // rbx

  v1 = operator new(0x38u);
  CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent(v1);
  return v1;
}


// CClientMsg_ClientUIEvent::Clear  (line 613, @0x0000000001afa480, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CClientMsg_ClientUIEvent::Clear(CClientMsg_ClientUIEvent *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( (v2 & 0x1F) != 0 )
  {
    *(this + 3) = 0;
    *(this + 12) = 0;
    if ( (v2 & 8) != 0 )
    {
      std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x10) != 0 )
      std::string::_M_mutate(*(this + 5), 0, *(**(this + 5) - 24LL), 0);
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CClientMsg_ClientUIEvent::MergePartialFromCodedStream  (line 642, @0x0000000001afb620, libserver.so)  // inlines: Advance, EClientUIEvent_IsValid, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)14u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, mutable_data1, mutable_data2, set_event, set_has_client_ehandle, set_has_data1, set_has_data2, set_has_ent_ehandle, set_has_event
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::UnknownFieldSet::AddVarint(int,ulong), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// globals: jpt_1AFB690
bool __fastcall CClientMsg_ClientUIEvent::MergePartialFromCodedStream(
        CClientMsg_ClientUIEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *current_limit; // rcx
  unsigned int *v4; // r14
  unsigned int *v5; // r13
  google::protobuf::UnknownFieldSet *v7; // rbx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *i; // rsi
  google::protobuf::uint32 TagFallback; // eax
  google::protobuf::uint8 *v11; // rdx
  const google::protobuf::uint8 *v12; // rdx
  int v13; // eax
  const google::protobuf::uint8 *v14; // rdx
  bool result; // al
  const google::protobuf::uint8 *v16; // rax
  google::protobuf::uint8 v17; // dl
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v4 = (this + 28);
  v5 = (this + 48);
  v7 = (this + 8);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( i > buffer )
    {
      TagFallback = *buffer;
      if ( TagFallback <= 0 )
        break;
      input->last_tag_ = TagFallback;
      input->buffer_ = buffer + 1;
LABEL_5:
      v11 = (TagFallback >> 3);
      switch ( v11 )
      {
        case 1:
          if ( TagFallback != 8 )
            goto LABEL_7;
          v16 = input->buffer_;
          if ( v16 >= input->buffer_end_ || (v17 = *v16, *v16 < 0) )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v20);
            if ( !result )
              return result;
            v18 = v20[0];
          }
          else
          {
            input->buffer_ = v16 + 1;
            v18 = v17;
          }
          if ( v18 <= 2 )
          {
            *(this + 4) |= 1u;
            *(this + 6) = v18;
          }
          else
          {
            google::protobuf::UnknownFieldSet::AddVarint(v7, 1, v18);
          }
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 16 )
            continue;
          v12 = buffer + 1;
          input->buffer_ = v12;
parse_ent_ehandle:
          if ( v12 >= i || ((v13 = *v12) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
              return 0;
          }
          else
          {
            *(this + 7) = v13;
            ++input->buffer_;
          }
          *(this + 4) |= 2u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 24 )
            continue;
          v14 = buffer + 1;
          input->buffer_ = v14;
parse_client_ehandle:
          if ( v14 >= i || ((v19 = *v14) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5) == 0 )
              return 0;
          }
          else
          {
            *(this + 12) = v19;
            ++input->buffer_;
          }
          *(this + 4) |= 4u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 34 )
            continue;
          v11 = (buffer + 1);
          input->buffer_ = v11;
parse_data1:
          *(this + 4) |= 8u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), v11) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 42 )
            continue;
          v11 = (buffer + 1);
          input->buffer_ = v11;
parse_data2:
          *(this + 4) |= 0x10u;
          result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 5), v11);
          if ( !result )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer != i )
            continue;
          if ( input->buffer_size_after_limit_ != 0
            || (current_limit = input->current_limit_, input->total_bytes_read_ == current_limit) )
          {
            input->last_tag_ = 0;
            input->legitimate_message_end_ = 1;
            return result;
          }
          i = input->buffer_;
          break;
        case 2:
          if ( TagFallback != 16 )
            goto LABEL_7;
          v12 = input->buffer_;
          i = input->buffer_end_;
          goto parse_ent_ehandle;
        case 3:
          if ( TagFallback != 24 )
            goto LABEL_7;
          v14 = input->buffer_;
          i = input->buffer_end_;
          goto parse_client_ehandle;
        case 4:
          if ( TagFallback != 34 )
            goto LABEL_7;
          goto parse_data1;
        case 5:
          if ( TagFallback != 42 )
            goto LABEL_7;
          goto parse_data2;
        default:
          goto LABEL_7;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      goto LABEL_5;
    if ( TagFallback == 0 )
      break;
LABEL_7:
    if ( (TagFallback & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7, current_limit) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CClientMsg_ClientUIEvent::SerializeWithCachedSizes  (line 757, @0x0000000001afa6d0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CClientMsg_ClientUIEvent::SerializeWithCachedSizes(
        const CClientMsg_ClientUIEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteEnum(&loc_0 + 1, *(this + 6), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(this + 7), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 12), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
LABEL_13:
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 3, *(this + 5), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_7;
  }
LABEL_12:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 2, *(this + 4), output, v3);
  if ( (*(this + 4) & 0x10) != 0 )
    goto LABEL_13;
LABEL_6:
  v7 = *(this + 1);
  if ( v7 == 0 )
    return;
LABEL_7:
  if ( v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CClientMsg_ClientUIEvent::SerializeWithCachedSizesToArray  (line 803, @0x0000000001afacc0, libserver.so)  // inlines: WriteEnumNoTagToArray, WriteEnumToArray, WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CClientMsg_ClientUIEvent::SerializeWithCachedSizesToArray(
        const CClientMsg_ClientUIEvent *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  unsigned __int8 *v10; // rdx
  google::protobuf::io::CodedOutputStream *v11; // rdi
  __int64 v12; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 6);
    v6 = target + 1;
    *(v6 - 1) = 8;
    if ( v5 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v5, v6, v4);
    }
    else if ( v5 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v5, v6, v4);
    }
    else
    {
      result[1] = v5;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v7 = *(this + 7);
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
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 12);
    *result = 24;
    if ( v8 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v8, result + 1, v4);
    }
    else
    {
      result[1] = v8;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v9 = *(this + 4);
    *result = 34;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v9, (result + 1), v4);
    LODWORD(v4) = *(this + 4);
  }
  v10 = (v4 & 0x10);
  if ( v10 != 0 )
  {
    v11 = *(this + 5);
    *result = 42;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v11, (result + 1), v10);
  }
  v12 = *(this + 1);
  if ( v12 != 0 && *(v12 + 8) != *v12 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v12);
  return result;
}


// CClientMsg_ClientUIEvent::ByteSize  (line 852, @0x0000000001afade0, libserver.so)  // inlines: EnumSize, StringSize, UInt32Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CClientMsg_ClientUIEvent::ByteSize(const CClientMsg_ClientUIEvent *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  __int64 v10; // rax
  _QWORD *v12; // r13
  google::protobuf::io::CodedOutputStream *v13; // rdi
  int v14; // eax
  int v15; // ecx
  _QWORD *v16; // r13
  google::protobuf::io::CodedOutputStream *v17; // rdi
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_14;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = *(this + 6);
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
    v8 = *(this + 7);
    if ( v8 > 0x7F )
    {
      v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
      v5 = *(this + 4);
      v3 += v20 + 1;
    }
    else
    {
      v3 += 2;
    }
  }
  if ( (v5 & 4) != 0 )
  {
    v9 = *(this + 12);
    if ( v9 > 0x7F )
    {
      v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      v5 = *(this + 4);
      v3 += v21 + 1;
    }
    else
    {
      v3 += 2;
    }
  }
  if ( (v5 & 8) == 0 )
  {
    if ( (v5 & 0x10) == 0 )
      goto LABEL_14;
    goto LABEL_21;
  }
  v12 = *(this + 4);
  v13 = *(*v12 - 24LL);
  v14 = 1;
  v15 = v13;
  if ( v13 > 0x7F )
  {
    v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, v1);
    v15 = *(*v12 - 24LL);
    v5 = *(this + 4);
  }
  v3 += v14 + v15 + 1;
  if ( (v5 & 0x10) != 0 )
  {
LABEL_21:
    v16 = *(this + 5);
    v17 = *(*v16 - 24LL);
    v18 = 1;
    v19 = v17;
    if ( v17 > 0x7F )
    {
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, v1);
      v19 = *(*v16 - 24LL);
    }
    v3 += v18 + v19 + 1;
  }
LABEL_14:
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v10);
  *(this + 5) = v3;
  return v3;
}


// CClientMsg_ClientUIEvent::MergeFrom  (line 902, @0x0000000001afc720, libserver.so)  // inlines: dynamic_cast_if_available<const CClientMsg_ClientUIEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CClientMsg_ClientUIEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CClientMsg_ClientUIEvent
void __fastcall CClientMsg_ClientUIEvent::MergeFrom(
        CClientMsg_ClientUIEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CClientMsg_ClientUIEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      903);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CClientMsg_ClientUIEvent, 0)) != 0 )
  {
    CClientMsg_ClientUIEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CClientMsg_ClientUIEvent::MergeFrom  (line 914, @0x0000000001afc580, libserver.so)  // inlines: set_client_ehandle, set_data1, set_data2, set_ent_ehandle, set_event, set_has_client_ehandle, set_has_data1, set_has_data2, set_has_ent_ehandle, set_has_event
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CClientMsg_ClientUIEvent::CClientMsg_ClientUIEvent, CClientMsg_ClientUIEvent::MergeFrom, CClientMsg_ClientUIEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CClientMsg_ClientUIEvent::MergeFrom(
        CClientMsg_ClientUIEvent *const this,
        const CClientMsg_ClientUIEvent *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const std::string *v8; // rsi
  std::string *v9; // rdi
  const std::string *v10; // rsi
  std::string *v11; // rdi
  __int64 v12; // rax
  char v13; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v14; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v14,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      915);
    v12 = google::protobuf::internal::LogMessage::operator<<(&v14, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = *(from + 6);
      *(this + 4) |= 1u;
      *(this + 6) = v5;
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      v6 = *(from + 7);
      *(this + 4) |= 2u;
      *(this + 7) = v6;
      v4 = *(from + 4);
    }
    if ( (v4 & 4) != 0 )
    {
      v7 = *(from + 12);
      *(this + 4) |= 4u;
      *(this + 12) = v7;
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v10 = *(from + 4);
      v11 = *(this + 4);
      *(this + 4) |= 8u;
      std::string::assign(v11, v10);
      if ( (*(from + 4) & 0x10) == 0 )
        goto LABEL_12;
    }
    else if ( (v4 & 0x10) == 0 )
    {
      goto LABEL_12;
    }
    v8 = *(from + 5);
    v9 = *(this + 5);
    *(this + 4) |= 0x10u;
    std::string::assign(v9, v8);
  }
LABEL_12:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CClientMsg_ClientUIEvent::CopyFrom  (line 936, @0x0000000001afa080, libserver.so)
void __fastcall CClientMsg_ClientUIEvent::CopyFrom(
        CClientMsg_ClientUIEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CClientMsg_ClientUIEvent::CopyFrom  (line 942, @0x0000000001afc800, libserver.so)
// calls: CClientMsg_ClientUIEvent::MergeFrom
// callers: CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CClientMsg_ClientUIEvent::CopyFrom(
        CClientMsg_ClientUIEvent *const this,
        const CClientMsg_ClientUIEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CClientMsg_ClientUIEvent::MergeFrom(this, from);
  }
}


// CClientMsg_ClientUIEvent::IsInitialized  (line 948, @0x0000000001afa0c0, libserver.so)
bool __fastcall CClientMsg_ClientUIEvent::IsInitialized(const CClientMsg_ClientUIEvent *const this)
{
  return 1;
}


// CClientMsg_ClientUIEvent::Swap  (line 953, @0x0000000001afc840, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CClientMsg_ClientUIEvent::Swap(CClientMsg_ClientUIEvent *const this, CClientMsg_ClientUIEvent *other)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    v3 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v3;
    v4 = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v4;
    v5 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v5;
    v6 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v6;
    LODWORD(v6) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v6;
    v7 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v7;
    LODWORD(v7) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v7;
  }
}


// CClientMsg_ClientUIEvent::GetMetadata  (line 966, @0x0000000001afafe0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_, `anonymous namespace'::CClientMsg_ClientUIEvent_reflection_
google::protobuf::Metadata __fastcall CClientMsg_ClientUIEvent::GetMetadata(const CClientMsg_ClientUIEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CClientMsg_ClientUIEvent_descriptor_;
  result.reflection = `anonymous namespace'::CClientMsg_ClientUIEvent_reflection_;
  return result;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent  (line 981, @0x0000000001afc8c0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CClientMsg_DevPaletteVisibilityChangedEvent::New, protobuf_AddDesc_clientmessages_2eproto, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  *this = off_3F76810;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::InitAsDefaultInstance  (line 987, @0x0000000001afc950, libserver.so)
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::InitAsDefaultInstance(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  ;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent  (line 990, @0x0000000001afcad0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        const CClientMsg_DevPaletteVisibilityChangedEvent *const from)
{
  *this = off_3F76810;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
  CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom(this, from);
}


// CClientMsg_DevPaletteVisibilityChangedEvent::SharedCtor  (line 997, @0x0000000001afc960, libserver.so)  // inlines: memset
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::SharedCtor(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::~CClientMsg_DevPaletteVisibilityChangedEvent  (line 1003, @0x0000000001afa1f0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::~CClientMsg_DevPaletteVisibilityChangedEvent(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76810;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CClientMsg_DevPaletteVisibilityChangedEvent::~CClientMsg_DevPaletteVisibilityChangedEvent  (line 1003, @0x0000000001afa220, libserver.so)  // inlines: ~CClientMsg_DevPaletteVisibilityChangedEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::~CClientMsg_DevPaletteVisibilityChangedEvent(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76810;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CClientMsg_DevPaletteVisibilityChangedEvent::SharedDtor  (line 1008, @0x0000000001afc980, libserver.so)
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::SharedDtor(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  ;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::SetCachedSize  (line 1013, @0x0000000001afa0d0, libserver.so)
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::SetCachedSize(
        const CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        int size)
{
  *(this + 5) = size;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::descriptor  (line 1018, @0x0000000001afc990, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CClientMsg_DevPaletteVisibilityChangedEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_descriptor_;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::default_instance  (line 1023, @0x0000000001afd340, libserver.so)
// calls: protobuf_AddDesc_clientmessages_2eproto
// globals: CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_
const CClientMsg_DevPaletteVisibilityChangedEvent *__cdecl CClientMsg_DevPaletteVisibilityChangedEvent::default_instance()
{
  const CClientMsg_DevPaletteVisibilityChangedEvent *result; // rax

  result = CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_;
  if ( CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    return CClientMsg_DevPaletteVisibilityChangedEvent::default_instance_;
  }
  return result;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::New  (line 1030, @0x0000000001afc910, libserver.so)
// calls: operator new, CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent, operator delete, _Unwind_Resume
CClientMsg_DevPaletteVisibilityChangedEvent *__fastcall CClientMsg_DevPaletteVisibilityChangedEvent::New(
        const CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  CClientMsg_DevPaletteVisibilityChangedEvent *v1; // rbx

  v1 = operator new(0x20u);
  CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent(v1);
  return v1;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::Clear  (line 1034, @0x0000000001afa340, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::Clear(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  char *v2; // rdi

  *(this + 24) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CClientMsg_DevPaletteVisibilityChangedEvent::MergePartialFromCodedStream  (line 1040, @0x0000000001afb970, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadTagWithCutoff, ReadVarint64, set_has_visible
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
bool __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::MergePartialFromCodedStream(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v4; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14[5]; // [rsp+8h] [rbp-28h] BYREF

  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
      goto LABEL_11;
LABEL_3:
    v8 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_11:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v9 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_8:
        if ( (v9 & 7) == 4 )
          return 1;
        result = google::protobuf::internal::WireFormat::SkipField(input, v9, v4, v2);
        if ( !result )
          return result;
        buffer = input->buffer_;
        if ( buffer < input->buffer_end_ )
          goto LABEL_3;
      }
    }
    else
    {
      v9 = v8;
      input->last_tag_ = v8;
      input->buffer_ = buffer + 1;
    }
    if ( v9 >> 3 != 1 || v9 != 8 )
      break;
    v12 = input->buffer_;
    if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0LL )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v14);
      if ( !result )
        return result;
      v13 = v14[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
    }
    *(this + 24) = v13 != 0;
    *(this + 4) |= 1u;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer == buffer_end )
    {
      if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
      {
        input->last_tag_ = 0;
        input->legitimate_message_end_ = 1;
        return 1;
      }
      buffer_end = input->buffer_;
    }
  }
  if ( v9 != 0 )
    goto LABEL_8;
  return 1;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::SerializeWithCachedSizes  (line 1086, @0x0000000001afa7c0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::SerializeWithCachedSizes(
        const CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  _QWORD *v6; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_0 + 1, *(this + 24), output, v3);
    v6 = *(this + 1);
    if ( v6 == 0 )
      return;
  }
  else
  {
    v6 = *(this + 1);
    if ( v6 == 0 )
      return;
  }
  if ( v6[1] != *v6 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CClientMsg_DevPaletteVisibilityChangedEvent::SerializeWithCachedSizesToArray  (line 1101, @0x0000000001afab10, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteTagToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CClientMsg_DevPaletteVisibilityChangedEvent::SerializeWithCachedSizesToArray(
        const CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 v2; // al
  __int64 v3; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    v2 = *(this + 24);
    target += 2;
    *(target - 2) = 8;
    *(target - 1) = v2;
  }
  v3 = *(this + 1);
  if ( v3 == 0 || *(v3 + 8) == *v3 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v3);
}


// CClientMsg_DevPaletteVisibilityChangedEvent::ByteSize  (line 1117, @0x0000000001afa590, libserver.so)  // inlines: empty, has_visible
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::ByteSize(
        const CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  _QWORD *v4; // rax

  v3 = 0;
  if ( *(this + 4) != 0 )
    v3 = -(*(this + 4) & 1) & 2;
  v4 = *(this + 1);
  if ( v4 != 0 && v4[1] != *v4 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom  (line 1138, @0x0000000001afcb50, libserver.so)  // inlines: dynamic_cast_if_available<const CClientMsg_DevPaletteVisibilityChangedEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CClientMsg_DevPaletteVisibilityChangedEvent
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CClientMsg_DevPaletteVisibilityChangedEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      1139);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CClientMsg_DevPaletteVisibilityChangedEvent,
               0)) != 0 )
  {
    CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom  (line 1150, @0x0000000001afca20, libserver.so)  // inlines: set_has_visible, set_visible
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CClientMsg_DevPaletteVisibilityChangedEvent::CClientMsg_DevPaletteVisibilityChangedEvent, CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom, CClientMsg_DevPaletteVisibilityChangedEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        const CClientMsg_DevPaletteVisibilityChangedEvent *const from)
{
  int v4; // eax
  char v5; // al
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      1151);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  v4 = *(from + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v5 = *(from + 24);
    *(this + 4) |= 1u;
    *(this + 24) = v5;
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CClientMsg_DevPaletteVisibilityChangedEvent::CopyFrom  (line 1160, @0x0000000001afa0e0, libserver.so)
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::CopyFrom(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CClientMsg_DevPaletteVisibilityChangedEvent::CopyFrom  (line 1166, @0x0000000001afcc30, libserver.so)
// calls: CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom
// callers: CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::CopyFrom(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        const CClientMsg_DevPaletteVisibilityChangedEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CClientMsg_DevPaletteVisibilityChangedEvent::MergeFrom(this, from);
  }
}


// CClientMsg_DevPaletteVisibilityChangedEvent::IsInitialized  (line 1172, @0x0000000001afa120, libserver.so)
bool __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::IsInitialized(
        const CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  return 1;
}


// CClientMsg_DevPaletteVisibilityChangedEvent::Swap  (line 1177, @0x0000000001afcc70, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::Swap(
        CClientMsg_DevPaletteVisibilityChangedEvent *const this,
        CClientMsg_DevPaletteVisibilityChangedEvent *other)
{
  char v2; // al
  int v3; // eax
  __int64 v4; // rax

  if ( other != this )
  {
    v2 = *(this + 24);
    *(this + 24) = *(other + 24);
    *(other + 24) = v2;
    v3 = *(this + 4);
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


// CClientMsg_DevPaletteVisibilityChangedEvent::GetMetadata  (line 1186, @0x0000000001afb120, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_descriptor_, `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_reflection_
google::protobuf::Metadata __fastcall CClientMsg_DevPaletteVisibilityChangedEvent::GetMetadata(
        const CClientMsg_DevPaletteVisibilityChangedEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_descriptor_;
  result.reflection = `anonymous namespace'::CClientMsg_DevPaletteVisibilityChangedEvent_reflection_;
  return result;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent  (line 1203, @0x0000000001afccc0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CClientMsg_WorldUIControllerHasPanelChangedEvent::New, protobuf_AddDesc_clientmessages_2eproto
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  *this = off_3F768D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::InitAsDefaultInstance  (line 1209, @0x0000000001afcd60, libserver.so)
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::InitAsDefaultInstance(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  ;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent  (line 1212, @0x0000000001afcf20, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const from)
{
  *this = off_3F768D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom(this, from);
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::SharedCtor  (line 1219, @0x0000000001afcd70, libserver.so)  // inlines: memset
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::SharedCtor(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::~CClientMsg_WorldUIControllerHasPanelChangedEvent  (line 1227, @0x0000000001afa260, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::~CClientMsg_WorldUIControllerHasPanelChangedEvent(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F768D0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::~CClientMsg_WorldUIControllerHasPanelChangedEvent  (line 1227, @0x0000000001afa290, libserver.so)  // inlines: ~CClientMsg_WorldUIControllerHasPanelChangedEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::~CClientMsg_WorldUIControllerHasPanelChangedEvent(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F768D0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::SharedDtor  (line 1232, @0x0000000001afcda0, libserver.so)
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::SharedDtor(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  ;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::SetCachedSize  (line 1237, @0x0000000001afa130, libserver.so)
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::SetCachedSize(
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        int size)
{
  *(this + 5) = size;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::descriptor  (line 1242, @0x0000000001afcdb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CClientMsg_WorldUIControllerHasPanelChangedEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_descriptor_;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance  (line 1247, @0x0000000001afd370, libserver.so)
// calls: protobuf_AddDesc_clientmessages_2eproto
// globals: CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_
const CClientMsg_WorldUIControllerHasPanelChangedEvent *__cdecl CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance()
{
  const CClientMsg_WorldUIControllerHasPanelChangedEvent *result; // rax

  result = CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_;
  if ( CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    return CClientMsg_WorldUIControllerHasPanelChangedEvent::default_instance_;
  }
  return result;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::New  (line 1254, @0x0000000001afcd20, libserver.so)
// calls: operator new, CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent, operator delete, _Unwind_Resume
CClientMsg_WorldUIControllerHasPanelChangedEvent *__fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::New(
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  CClientMsg_WorldUIControllerHasPanelChangedEvent *v1; // rbx

  v1 = operator new(0x28u);
  CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent(v1);
  return v1;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::Clear  (line 1258, @0x0000000001afa370, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::Clear(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::MergePartialFromCodedStream  (line 1278, @0x0000000001afb3b0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, set_has_client_ehandle, set_has_has_panel, set_has_literal_hand_type
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
bool __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::MergePartialFromCodedStream(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *buffer_size_after_limit; // rcx
  unsigned int *v4; // r14
  unsigned int *v5; // r13
  unsigned int v7; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v10; // al
  google::protobuf::io::CodedInputStream *v11; // rsi
  unsigned int v12; // edx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v15; // rax
  std::vector<google::protobuf::UnknownField> *fields; // rdx
  const google::protobuf::uint8 *v17; // rdx
  const google::protobuf::uint8 *v18; // rdx
  int v19; // eax
  int v20; // eax
  google::protobuf::UnknownFieldSet v21; // [rsp+18h] [rbp-38h] BYREF

  buffer_size_after_limit = &v21;
  v4 = (this + 28);
  v5 = (this + 32);
  v7 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( buffer_end <= buffer )
        goto LABEL_12;
LABEL_3:
      v10 = *buffer;
      if ( *buffer <= 0 )
      {
LABEL_12:
        while ( 1 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
          v11 = TagFallback;
          input->last_tag_ = TagFallback;
          if ( TagFallback - 1 <= 0x7E )
            break;
          if ( TagFallback == 0 )
            return 1;
LABEL_9:
          if ( (v11 & 7) == 4 )
            return 1;
          if ( google::protobuf::internal::WireFormat::SkipField(input, v11, v7, buffer_size_after_limit) == 0 )
            return 0;
          buffer = input->buffer_;
          if ( input->buffer_end_ > buffer )
            goto LABEL_3;
        }
      }
      else
      {
        v11 = v10;
        input->last_tag_ = v10;
        input->buffer_ = buffer + 1;
      }
      v12 = v11 >> 3;
      if ( v11 >> 3 == 2 )
      {
        if ( v11 != 16 )
          goto handle_unusual;
        v17 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_client_ehandle;
      }
      if ( v12 != 3 )
        break;
      if ( v11 != 24 )
        goto handle_unusual;
      v18 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_literal_hand_type:
      if ( buffer_end <= v18 || ((v19 = *v18) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5) == 0 )
          return 0;
      }
      else
      {
        *(this + 8) = v19;
        ++input->buffer_;
      }
      *(this + 4) |= 4u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer == buffer_end )
      {
        buffer_size_after_limit = input->buffer_size_after_limit_;
        if ( buffer_size_after_limit != 0 || input->total_bytes_read_ == input->current_limit_ )
        {
          input->last_tag_ = 0;
          input->legitimate_message_end_ = 1;
          return 1;
        }
        buffer_end = input->buffer_;
      }
    }
    if ( v12 != 1 || v11 != 8 )
      break;
    v15 = input->buffer_;
    if ( v15 >= input->buffer_end_ || (fields = *v15) < 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, &v21);
      if ( !result )
        return result;
      fields = v21.fields_;
    }
    else
    {
      input->buffer_ = v15 + 1;
    }
    *(this + 24) = fields != 0;
    *(this + 4) |= 1u;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v17 = buffer + 1;
      input->buffer_ = v17;
parse_client_ehandle:
      if ( v17 >= buffer_end || ((v20 = *v17) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *(this + 7) = v20;
        ++input->buffer_;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v18 = buffer + 1;
        input->buffer_ = v18;
        goto parse_literal_hand_type;
      }
    }
  }
handle_unusual:
  if ( v11 != 0 )
    goto LABEL_9;
  return 1;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::SerializeWithCachedSizes  (line 1354, @0x0000000001afa820, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::SerializeWithCachedSizes(
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_0 + 1, *(this + 24), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
LABEL_9:
      google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 8), output, v3);
      v7 = *(this + 1);
      if ( v7 == 0 )
        return;
      goto LABEL_5;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(this + 7), output, v3);
  if ( (*(this + 4) & 4) != 0 )
    goto LABEL_9;
LABEL_4:
  v7 = *(this + 1);
  if ( v7 == 0 )
    return;
LABEL_5:
  if ( v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::SerializeWithCachedSizesToArray  (line 1379, @0x0000000001afab50, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::SerializeWithCachedSizesToArray(
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::uint8 v5; // al
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  __int64 v8; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 24);
    *target = 8;
    target += 2;
    *(target - 1) = v5;
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v6 = *(this + 7);
    *target = 16;
    if ( v6 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v6, target + 1, v2);
    }
    else
    {
      target[1] = v6;
      target += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v7 = *(this + 8);
    *target = 24;
    if ( v7 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, target + 1, v2);
    }
    else
    {
      target[1] = v7;
      target += 2;
    }
  }
  v8 = *(this + 1);
  if ( v8 == 0 || *(v8 + 8) == *v8 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v8);
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::ByteSize  (line 1405, @0x0000000001afa630, libserver.so)  // inlines: UInt32Size, VarintSize32, empty, has_has_panel
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::ByteSize(
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  _QWORD *v6; // rax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = -(*(this + 4) & 1) & 2;
    if ( (v4 & 2) != 0 )
    {
      v5 = *(this + 7);
      if ( v5 > 0x7F )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1) + 1;
        v4 = *(this + 4);
        v3 += v9;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v8 = *(this + 8);
      if ( v8 > 0x7F )
        v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1) + 1;
      else
        v3 += 2;
    }
  }
  v6 = *(this + 1);
  if ( v6 != 0 && v6[1] != *v6 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom  (line 1440, @0x0000000001afcfb0, libserver.so)  // inlines: dynamic_cast_if_available<const CClientMsg_WorldUIControllerHasPanelChangedEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CClientMsg_WorldUIControllerHasPanelChangedEvent
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CClientMsg_WorldUIControllerHasPanelChangedEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      1441);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CClientMsg_WorldUIControllerHasPanelChangedEvent,
               0)) != 0 )
  {
    CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom  (line 1452, @0x0000000001afce40, libserver.so)  // inlines: set_client_ehandle, set_has_client_ehandle, set_has_has_panel, set_has_literal_hand_type, set_has_panel, set_literal_hand_type
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CClientMsg_WorldUIControllerHasPanelChangedEvent::CClientMsg_WorldUIControllerHasPanelChangedEvent, CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom, CClientMsg_WorldUIControllerHasPanelChangedEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const from)
{
  int v4; // eax
  char v5; // al
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  char v9; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v10; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      1453);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = *(from + 24);
      *(this + 4) |= 1u;
      *(this + 24) = v5;
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      v6 = *(from + 7);
      *(this + 4) |= 2u;
      *(this + 7) = v6;
      v4 = *(from + 4);
    }
    if ( (v4 & 4) != 0 )
    {
      v7 = *(from + 8);
      *(this + 4) |= 4u;
      *(this + 8) = v7;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::CopyFrom  (line 1468, @0x0000000001afa140, libserver.so)
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::CopyFrom(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::CopyFrom  (line 1474, @0x0000000001afd090, libserver.so)
// calls: CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::CopyFrom(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CClientMsg_WorldUIControllerHasPanelChangedEvent::MergeFrom(this, from);
  }
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::IsInitialized  (line 1480, @0x0000000001afa180, libserver.so)
bool __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::IsInitialized(
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  return 1;
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::Swap  (line 1485, @0x0000000001afd0d0, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::Swap(
        CClientMsg_WorldUIControllerHasPanelChangedEvent *const this,
        CClientMsg_WorldUIControllerHasPanelChangedEvent *other)
{
  char v2; // al
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

  if ( other != this )
  {
    v2 = *(this + 24);
    *(this + 24) = *(other + 24);
    *(other + 24) = v2;
    v3 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v3;
    v4 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v4;
    v5 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v5;
    v6 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v6;
    LODWORD(v6) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v6;
  }
}


// CClientMsg_WorldUIControllerHasPanelChangedEvent::GetMetadata  (line 1496, @0x0000000001afb1c0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_descriptor_, `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_reflection_
google::protobuf::Metadata __fastcall CClientMsg_WorldUIControllerHasPanelChangedEvent::GetMetadata(
        const CClientMsg_WorldUIControllerHasPanelChangedEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_descriptor_;
  result.reflection = `anonymous namespace'::CClientMsg_WorldUIControllerHasPanelChangedEvent_reflection_;
  return result;
}


// CClientMsg_RotateAnchor::CClientMsg_RotateAnchor  (line 1511, @0x0000000001afd130, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: protobuf_AddDesc_clientmessages_2eproto, CClientMsg_RotateAnchor::New, CNetMessagePB<285, CClientMsg_RotateAnchor, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CNetMessagePB<285, CClientMsg_RotateAnchor, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CClientMsg_RotateAnchor::CClientMsg_RotateAnchor(CClientMsg_RotateAnchor *const this)
{
  *this = off_3F76990;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CClientMsg_RotateAnchor::InitAsDefaultInstance  (line 1517, @0x0000000001afd900, libserver.so)
void __fastcall CClientMsg_RotateAnchor::InitAsDefaultInstance(CClientMsg_RotateAnchor *const this)
{
  ;
}


// CClientMsg_RotateAnchor::CClientMsg_RotateAnchor  (line 1520, @0x0000000001afdab0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CClientMsg_RotateAnchor::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<285, CClientMsg_RotateAnchor, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CClientMsg_RotateAnchor::CClientMsg_RotateAnchor(
        CClientMsg_RotateAnchor *const this,
        const CClientMsg_RotateAnchor *const from)
{
  *this = off_3F76990;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  CClientMsg_RotateAnchor::MergeFrom(this, from);
}


// CClientMsg_RotateAnchor::SharedCtor  (line 1527, @0x0000000001afd910, libserver.so)  // inlines: memset
void __fastcall CClientMsg_RotateAnchor::SharedCtor(CClientMsg_RotateAnchor *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CClientMsg_RotateAnchor::~CClientMsg_RotateAnchor  (line 1533, @0x0000000001afa2d0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<285, CClientMsg_RotateAnchor, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CClientMsg_RotateAnchor::~CClientMsg_RotateAnchor(CClientMsg_RotateAnchor *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76990;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CClientMsg_RotateAnchor::~CClientMsg_RotateAnchor  (line 1533, @0x0000000001afa300, libserver.so)  // inlines: ~CClientMsg_RotateAnchor
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CClientMsg_RotateAnchor::~CClientMsg_RotateAnchor(CClientMsg_RotateAnchor *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76990;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CClientMsg_RotateAnchor::SharedDtor  (line 1538, @0x0000000001afd930, libserver.so)
void __fastcall CClientMsg_RotateAnchor::SharedDtor(CClientMsg_RotateAnchor *const this)
{
  ;
}


// CClientMsg_RotateAnchor::SetCachedSize  (line 1543, @0x0000000001afa190, libserver.so)
void __fastcall CClientMsg_RotateAnchor::SetCachedSize(const CClientMsg_RotateAnchor *const this, int size)
{
  *(this + 5) = size;
}


// CClientMsg_RotateAnchor::descriptor  (line 1548, @0x0000000001afd940, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_RotateAnchor_descriptor_
const google::protobuf::Descriptor *__cdecl CClientMsg_RotateAnchor::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CClientMsg_RotateAnchor_descriptor_;
}


// CClientMsg_RotateAnchor::default_instance  (line 1553, @0x0000000001afd9d0, libserver.so)
// calls: protobuf_AddDesc_clientmessages_2eproto
// globals: CClientMsg_RotateAnchor::default_instance_
const CClientMsg_RotateAnchor *__cdecl CClientMsg_RotateAnchor::default_instance()
{
  const CClientMsg_RotateAnchor *result; // rax

  result = CClientMsg_RotateAnchor::default_instance_;
  if ( CClientMsg_RotateAnchor::default_instance_ == 0 )
  {
    protobuf_AddDesc_clientmessages_2eproto();
    return CClientMsg_RotateAnchor::default_instance_;
  }
  return result;
}


// CClientMsg_RotateAnchor::New  (line 1560, @0x0000000001afd8c0, libserver.so)
// calls: operator new, CClientMsg_RotateAnchor::CClientMsg_RotateAnchor, operator delete, _Unwind_Resume
CClientMsg_RotateAnchor *__fastcall CClientMsg_RotateAnchor::New(const CClientMsg_RotateAnchor *const this)
{
  CClientMsg_RotateAnchor *v1; // rbx

  v1 = operator new(0x20u);
  CClientMsg_RotateAnchor::CClientMsg_RotateAnchor(v1);
  return v1;
}


// CClientMsg_RotateAnchor::Clear  (line 1564, @0x0000000001afa3b0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CClientMsg_RotateAnchor::Clear(CClientMsg_RotateAnchor *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CClientMsg_RotateAnchor::MergePartialFromCodedStream  (line 1570, @0x0000000001afa9e0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadTagWithCutoff, memcpy, set_has_angle
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
bool __fastcall CClientMsg_RotateAnchor::MergePartialFromCodedStream(
        CClientMsg_RotateAnchor *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v4; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v12; // rax
  unsigned int v13; // edx
  unsigned int v14[9]; // [rsp+Ch] [rbp-24h] BYREF

  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
      goto LABEL_11;
LABEL_3:
    v8 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_11:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v9 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_8:
        if ( (v9 & 7) == 4 )
          return 1;
        result = google::protobuf::internal::WireFormat::SkipField(input, v9, v4, v2);
        if ( !result )
          return result;
        buffer = input->buffer_;
        if ( buffer < input->buffer_end_ )
          goto LABEL_3;
      }
    }
    else
    {
      v9 = v8;
      input->last_tag_ = v8;
      input->buffer_ = buffer + 1;
    }
    if ( v9 >> 3 != 1 || v9 != 13 )
      break;
    v12 = input->buffer_;
    if ( LODWORD(input->buffer_end_) - v12 <= 3 )
    {
      result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v14);
      if ( !result )
        return result;
      v13 = v14[0];
    }
    else
    {
      v13 = *v12;
      input->buffer_ = v12 + 4;
    }
    *(this + 4) |= 1u;
    *(this + 6) = v13;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer == buffer_end )
    {
      if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
      {
        input->last_tag_ = 0;
        input->legitimate_message_end_ = 1;
        return 1;
      }
      buffer_end = input->buffer_;
    }
  }
  if ( v9 != 0 )
    goto LABEL_8;
  return 1;
}


// CClientMsg_RotateAnchor::SerializeWithCachedSizes  (line 1616, @0x0000000001afa8c0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
void __fastcall CClientMsg_RotateAnchor::SerializeWithCachedSizes(
        const CClientMsg_RotateAnchor *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  __int64 v5; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_0 + 1, output, *(this + 6), v2);
    v5 = *(this + 1);
    if ( v5 == 0 )
      return;
  }
  else
  {
    v5 = *(this + 1);
    if ( v5 == 0 )
      return;
  }
  if ( *(v5 + 8) != *v5 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v5);
}


// CClientMsg_RotateAnchor::SerializeWithCachedSizesToArray  (line 1631, @0x0000000001afa920, libserver.so)  // inlines: WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteTagToArray, empty, memcpy
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CClientMsg_RotateAnchor::SerializeWithCachedSizesToArray(
        const CClientMsg_RotateAnchor *const this,
        google::protobuf::uint8 *target)
{
  int v2; // eax
  __int64 v3; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    v2 = *(this + 6);
    target += 5;
    *(target - 5) = 13;
    *(target - 1) = v2;
  }
  v3 = *(this + 1);
  if ( v3 == 0 || *(v3 + 8) == *v3 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v3);
}


// CClientMsg_RotateAnchor::ByteSize  (line 1647, @0x0000000001afa5e0, libserver.so)  // inlines: empty, has_angle
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CClientMsg_RotateAnchor::ByteSize(const CClientMsg_RotateAnchor *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  _QWORD *v4; // rax

  v3 = 0;
  if ( *(this + 4) != 0 )
    v3 = -(*(this + 4) & 1) & 5;
  v4 = *(this + 1);
  if ( v4 != 0 && v4[1] != *v4 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CClientMsg_RotateAnchor::MergeFrom  (line 1668, @0x0000000001afdb30, libserver.so)  // inlines: dynamic_cast_if_available<const CClientMsg_RotateAnchor*, const google::protobuf::Message*>
// calls: __dynamic_cast, CClientMsg_RotateAnchor::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CClientMsg_RotateAnchor
void __fastcall CClientMsg_RotateAnchor::MergeFrom(
        CClientMsg_RotateAnchor *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CClientMsg_RotateAnchor *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      1669);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CClientMsg_RotateAnchor, 0)) != 0 )
  {
    CClientMsg_RotateAnchor::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CClientMsg_RotateAnchor::MergeFrom  (line 1680, @0x0000000001afda00, libserver.so)  // inlines: set_angle, set_has_angle
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CClientMsg_RotateAnchor::CClientMsg_RotateAnchor, CClientMsg_RotateAnchor::MergeFrom, CClientMsg_RotateAnchor::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/clientmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CClientMsg_RotateAnchor::MergeFrom(
        CClientMsg_RotateAnchor *const this,
        const CClientMsg_RotateAnchor *const from)
{
  int v4; // eax
  int v5; // xmm0_4
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/clientmessages.pb.cc",
      1681);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  v4 = *(from + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v5 = *(from + 6);
    *(this + 4) |= 1u;
    *(this + 6) = v5;
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CClientMsg_RotateAnchor::CopyFrom  (line 1690, @0x0000000001afa1a0, libserver.so)
void __fastcall CClientMsg_RotateAnchor::CopyFrom(
        CClientMsg_RotateAnchor *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CClientMsg_RotateAnchor::CopyFrom  (line 1696, @0x0000000001afdc10, libserver.so)
// calls: CClientMsg_RotateAnchor::MergeFrom
// callers: CNetMessagePB<285, CClientMsg_RotateAnchor, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CClientMsg_RotateAnchor::CopyFrom(
        CClientMsg_RotateAnchor *const this,
        const CClientMsg_RotateAnchor *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CClientMsg_RotateAnchor::MergeFrom(this, from);
  }
}


// CClientMsg_RotateAnchor::IsInitialized  (line 1702, @0x0000000001afa1e0, libserver.so)
bool __fastcall CClientMsg_RotateAnchor::IsInitialized(const CClientMsg_RotateAnchor *const this)
{
  return 1;
}


// CClientMsg_RotateAnchor::Swap  (line 1707, @0x0000000001afdc50, libserver.so)  // inlines: Swap, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CClientMsg_RotateAnchor::Swap(CClientMsg_RotateAnchor *const this, CClientMsg_RotateAnchor *other)
{
  int v2; // xmm1_4
  int v3; // eax
  __int64 v4; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    v3 = *(this + 4);
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


// CClientMsg_RotateAnchor::GetMetadata  (line 1716, @0x0000000001afb080, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_clientmessages_2eproto(void), `anonymous namespace'::CClientMsg_RotateAnchor_descriptor_, `anonymous namespace'::CClientMsg_RotateAnchor_reflection_
google::protobuf::Metadata __fastcall CClientMsg_RotateAnchor::GetMetadata(const CClientMsg_RotateAnchor *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_clientmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CClientMsg_RotateAnchor_descriptor_;
  result.reflection = `anonymous namespace'::CClientMsg_RotateAnchor_reflection_;
  return result;
}


