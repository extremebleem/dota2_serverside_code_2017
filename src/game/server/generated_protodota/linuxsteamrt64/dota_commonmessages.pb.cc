// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc:375
struct StaticDescriptorInitializer_dota_5fcommonmessages_2eproto {
	StaticDescriptorInitializer_dota_5fcommonmessages_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_dota_5fcommonmessages_2eproto  (line 56, @0x0000000001c708e0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_dota_5fcommonmessages_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "dota_commonmessages.proto", "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_, CDOTAMsg_LocationPing::default_instance_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_LocationPing_offsets_, `anonymous namespace'::CDOTAMsg_LocationPing_reflection_, `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_, CDOTAMsg_ItemAlert::default_instance_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_ItemAlert_offsets_, `anonymous namespace'::CDOTAMsg_ItemAlert_reflection_ (31 total)
void __cdecl protobuf_AssignDesc_dota_5fcommonmessages_2eproto()
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
  const google::protobuf::Descriptor *v32; // rax
  google::protobuf::DescriptorPool *v33; // rdi
  const google::protobuf::DescriptorPool *v34; // r13
  google::protobuf::MessageFactory *v35; // rdi
  google::protobuf::MessageFactory *v36; // r14
  google::protobuf::internal::GeneratedMessageReflection *v37; // r12
  const google::protobuf::Descriptor *v38; // rax
  google::protobuf::DescriptorPool *v39; // rdi
  const google::protobuf::DescriptorPool *v40; // r13
  google::protobuf::MessageFactory *v41; // rdi
  google::protobuf::MessageFactory *v42; // r14
  google::protobuf::internal::GeneratedMessageReflection *v43; // r12
  const google::protobuf::EnumDescriptor *v44; // rax
  __int64 v45; // rax
  int v46; // eax
  int v47; // edx
  char v48; // [rsp+3Eh] [rbp-42h] BYREF
  char v49; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v50; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_dota_5fcommonmessages_2eproto();
  std::string::string(&v50, "dota_commonmessages.proto", &v48);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v50);
  v3 = *&v50.level_ - 24LL;
  if ( (*&v50.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v46 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v47 = *(*&v50.level_ - 8LL);
      *(*&v50.level_ - 8LL) = v47 - 1;
      v46 = v47;
    }
    if ( v46 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v49);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v50,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      61);
    v45 = google::protobuf::internal::LogMessage::operator<<(&v50, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v49, v45);
    google::protobuf::internal::LogMessage::~LogMessage(&v50);
  }
  `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_,
    CDOTAMsg_LocationPing::default_instance_,
    protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_LocationPing_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    48);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CDOTAMsg_LocationPing_reflection_ = v7;
  `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_,
    CDOTAMsg_ItemAlert::default_instance_,
    protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_ItemAlert_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    40);
  v14 = *(FileByName + 80);
  `anonymous namespace'::CDOTAMsg_ItemAlert_reflection_ = v13;
  `anonymous namespace'::CDOTAMsg_MapLine_descriptor_ = v14 + 2;
  v16 = google::protobuf::DescriptorPool::generated_pool(v15);
  v18 = google::protobuf::MessageFactory::generated_factory(v17);
  v19 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v19,
    `anonymous namespace'::CDOTAMsg_MapLine_descriptor_,
    CDOTAMsg_MapLine::default_instance_,
    protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_MapLine_offsets_,
    16,
    8,
    -1,
    v16,
    v18,
    40);
  v20 = *(FileByName + 80);
  `anonymous namespace'::CDOTAMsg_MapLine_reflection_ = v19;
  `anonymous namespace'::CDOTAMsg_WorldLine_descriptor_ = v20 + 3;
  v22 = google::protobuf::DescriptorPool::generated_pool(v21);
  v24 = google::protobuf::MessageFactory::generated_factory(v23);
  v25 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v25,
    `anonymous namespace'::CDOTAMsg_WorldLine_descriptor_,
    CDOTAMsg_WorldLine::default_instance_,
    protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_WorldLine_offsets_,
    16,
    8,
    -1,
    v22,
    v24,
    40);
  v26 = *(FileByName + 80);
  `anonymous namespace'::CDOTAMsg_WorldLine_reflection_ = v25;
  `anonymous namespace'::CDOTAMsg_SendStatPopup_descriptor_ = v26 + 4;
  v28 = google::protobuf::DescriptorPool::generated_pool(v27);
  v30 = google::protobuf::MessageFactory::generated_factory(v29);
  v31 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v31,
    `anonymous namespace'::CDOTAMsg_SendStatPopup_descriptor_,
    CDOTAMsg_SendStatPopup::default_instance_,
    protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_SendStatPopup_offsets_,
    16,
    8,
    -1,
    v28,
    v30,
    72);
  v32 = *(FileByName + 80);
  `anonymous namespace'::CDOTAMsg_SendStatPopup_reflection_ = v31;
  `anonymous namespace'::CDOTAMsg_CoachHUDPing_descriptor_ = v32 + 5;
  v34 = google::protobuf::DescriptorPool::generated_pool(v33);
  v36 = google::protobuf::MessageFactory::generated_factory(v35);
  v37 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v37,
    `anonymous namespace'::CDOTAMsg_CoachHUDPing_descriptor_,
    CDOTAMsg_CoachHUDPing::default_instance_,
    protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_CoachHUDPing_offsets_,
    16,
    8,
    -1,
    v34,
    v36,
    40);
  v38 = *(FileByName + 80);
  `anonymous namespace'::CDOTAMsg_CoachHUDPing_reflection_ = v37;
  `anonymous namespace'::CDOTAMsg_UnitOrder_descriptor_ = v38 + 6;
  v40 = google::protobuf::DescriptorPool::generated_pool(v39);
  v42 = google::protobuf::MessageFactory::generated_factory(v41);
  v43 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v43,
    `anonymous namespace'::CDOTAMsg_UnitOrder_descriptor_,
    CDOTAMsg_UnitOrder::default_instance_,
    protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void)::CDOTAMsg_UnitOrder_offsets_,
    16,
    8,
    -1,
    v40,
    v42,
    72);
  v44 = *(FileByName + 96);
  `anonymous namespace'::CDOTAMsg_UnitOrder_reflection_ = v43;
  `anonymous namespace'::EDOTAChatWheelMessage_descriptor_ = v44;
  `anonymous namespace'::EDOTAStatPopupTypes_descriptor_ = v44 + 1;
  `anonymous namespace'::dotaunitorder_t_descriptor_ = v44 + 2;
}


// protobuf_RegisterTypes  (line 203, @0x0000000001c70eb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_dota_5fcommonmessages_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), CDOTAMsg_LocationPing::default_instance_, `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_, CDOTAMsg_ItemAlert::default_instance_, `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_, CDOTAMsg_MapLine::default_instance_, `anonymous namespace'::CDOTAMsg_MapLine_descriptor_ (16 total)
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
  const google::protobuf::Message *v11; // rdx
  const google::protobuf::Descriptor *v12; // rsi
  const google::protobuf::Message *v13; // rdx
  const google::protobuf::Descriptor *v14; // rsi
  __int64 v15[2]; // [rsp+0h] [rbp-30h] BYREF
  char v16; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v16 = 0;
    v15[0] = off_47BFB70;
    v15[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v15, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v15);
  }
  v2 = CDOTAMsg_LocationPing::default_instance_;
  if ( CDOTAMsg_LocationPing::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    v2 = CDOTAMsg_LocationPing::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_,
    v2,
    v1);
  v4 = CDOTAMsg_ItemAlert::default_instance_;
  if ( CDOTAMsg_ItemAlert::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    v4 = CDOTAMsg_ItemAlert::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_,
    v4,
    v3);
  v6 = CDOTAMsg_MapLine::default_instance_;
  if ( CDOTAMsg_MapLine::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    v6 = CDOTAMsg_MapLine::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMsg_MapLine_descriptor_,
    v6,
    v5);
  v8 = CDOTAMsg_WorldLine::default_instance_;
  if ( CDOTAMsg_WorldLine::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    v8 = CDOTAMsg_WorldLine::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMsg_WorldLine_descriptor_,
    v8,
    v7);
  v10 = CDOTAMsg_SendStatPopup::default_instance_;
  if ( CDOTAMsg_SendStatPopup::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    v10 = CDOTAMsg_SendStatPopup::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMsg_SendStatPopup_descriptor_,
    v10,
    v9);
  v12 = CDOTAMsg_CoachHUDPing::default_instance_;
  if ( CDOTAMsg_CoachHUDPing::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    v12 = CDOTAMsg_CoachHUDPing::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMsg_CoachHUDPing_descriptor_,
    v12,
    v11);
  v14 = CDOTAMsg_UnitOrder::default_instance_;
  if ( CDOTAMsg_UnitOrder::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    v14 = CDOTAMsg_UnitOrder::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMsg_UnitOrder_descriptor_,
    v14,
    v13);
}


// protobuf_ShutdownFile_dota_5fcommonmessages_2eproto  (line 223, @0x0000000001c6bb40, libserver.so)
// globals: CDOTAMsg_LocationPing::default_instance_, `anonymous namespace'::CDOTAMsg_LocationPing_reflection_, CDOTAMsg_ItemAlert::default_instance_, `anonymous namespace'::CDOTAMsg_ItemAlert_reflection_, CDOTAMsg_MapLine::default_instance_, `anonymous namespace'::CDOTAMsg_MapLine_reflection_, CDOTAMsg_WorldLine::default_instance_, `anonymous namespace'::CDOTAMsg_WorldLine_reflection_ (14 total)
void __cdecl protobuf_ShutdownFile_dota_5fcommonmessages_2eproto()
{
  if ( CDOTAMsg_LocationPing::default_instance_ != 0 )
    (CDOTAMsg_LocationPing::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMsg_LocationPing::default_instance_);
  if ( `anonymous namespace'::CDOTAMsg_LocationPing_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMsg_LocationPing_reflection_ + 8LL))(`anonymous namespace'::CDOTAMsg_LocationPing_reflection_);
  if ( CDOTAMsg_ItemAlert::default_instance_ != 0 )
    (CDOTAMsg_ItemAlert::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMsg_ItemAlert::default_instance_);
  if ( `anonymous namespace'::CDOTAMsg_ItemAlert_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMsg_ItemAlert_reflection_ + 8LL))(`anonymous namespace'::CDOTAMsg_ItemAlert_reflection_);
  if ( CDOTAMsg_MapLine::default_instance_ != 0 )
    (CDOTAMsg_MapLine::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMsg_MapLine::default_instance_);
  if ( `anonymous namespace'::CDOTAMsg_MapLine_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMsg_MapLine_reflection_ + 8LL))(`anonymous namespace'::CDOTAMsg_MapLine_reflection_);
  if ( CDOTAMsg_WorldLine::default_instance_ != 0 )
    (CDOTAMsg_WorldLine::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMsg_WorldLine::default_instance_);
  if ( `anonymous namespace'::CDOTAMsg_WorldLine_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMsg_WorldLine_reflection_ + 8LL))(`anonymous namespace'::CDOTAMsg_WorldLine_reflection_);
  if ( CDOTAMsg_SendStatPopup::default_instance_ != 0 )
    (CDOTAMsg_SendStatPopup::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMsg_SendStatPopup::default_instance_);
  if ( `anonymous namespace'::CDOTAMsg_SendStatPopup_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMsg_SendStatPopup_reflection_ + 8LL))(`anonymous namespace'::CDOTAMsg_SendStatPopup_reflection_);
  if ( CDOTAMsg_CoachHUDPing::default_instance_ != 0 )
    (CDOTAMsg_CoachHUDPing::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMsg_CoachHUDPing::default_instance_);
  if ( `anonymous namespace'::CDOTAMsg_CoachHUDPing_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMsg_CoachHUDPing_reflection_ + 8LL))(`anonymous namespace'::CDOTAMsg_CoachHUDPing_reflection_);
  if ( CDOTAMsg_UnitOrder::default_instance_ != 0 )
    (CDOTAMsg_UnitOrder::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMsg_UnitOrder::default_instance_);
  if ( `anonymous namespace'::CDOTAMsg_UnitOrder_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMsg_UnitOrder_reflection_ + 8LL))(`anonymous namespace'::CDOTAMsg_UnitOrder_reflection_);
}


// protobuf_AddDesc_dota_5fcommonmessages_2eproto  (line 240, @0x0000000001c70720, libserver.so)  // inlines: InitAsDefaultInstance
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), protobuf_AddDesc_networkbasetypes_2eproto, google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CDOTAMsg_LocationPing::CDOTAMsg_LocationPing, CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert, CDOTAMsg_MapLine::CDOTAMsg_MapLine, CDOTAMsg_WorldLine::CDOTAMsg_WorldLine, CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup, CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing, CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder (16 total)
// callers: protobuf_AssignDesc_dota_5fcommonmessages_2eproto, CDOTAMsg_LocationPing::default_instance, CDOTAMsg_ItemAlert::default_instance, CDOTAMsg_MapLine::default_instance, CDOTAMsg_WorldLine::default_instance, CDOTAMsg_SendStatPopup::default_instance, CDOTAMsg_CoachHUDPing::default_instance, protobuf_RegisterTypes, CDOTAMsg_UnitOrder::default_instance, _GLOBAL__sub_I_dota_commonmessages.pb.cc, protobuf_AddDesc_dota_5fclientmessages_2eproto, protobuf_AddDesc_dota_5fusermessages_2eproto
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "dota_commonmessages.proto"
// globals: protobuf_AddDesc_dota_5fcommonmessages_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CDOTAMsg_LocationPing::default_instance_, CDOTAMsg_ItemAlert::default_instance_, CDOTAMsg_MapLine::default_instance_, CDOTAMsg_WorldLine::default_instance_, CDOTAMsg_SendStatPopup::default_instance_, CDOTAMsg_CoachHUDPing::default_instance_ (10 total)
void __cdecl protobuf_AddDesc_dota_5fcommonmessages_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CDOTAMsg_LocationPing *v3; // rbx
  CDOTAMsg_ItemAlert *v4; // rbx
  CDOTAMsg_MapLine *v5; // rbx
  CDOTAMsg_WorldLine *v6; // rbx
  CDOTAMsg_SendStatPopup *v7; // rbx
  CDOTAMsg_CoachHUDPing *v8; // rbx
  CDOTAMsg_UnitOrder *v9; // rbx
  void (*v10)(void); // rsi

  if ( !protobuf_AddDesc_dota_5fcommonmessages_2eproto(void)::already_here )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      v0);
    protobuf_AddDesc_networkbasetypes_2eproto();
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_329F3F0, &stru_10A0.st_value + 4, v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "dota_commonmessages.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x30u);
    CDOTAMsg_LocationPing::CDOTAMsg_LocationPing(v3);
    CDOTAMsg_LocationPing::default_instance_ = v3;
    v4 = operator new(0x28u);
    CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert(v4);
    CDOTAMsg_ItemAlert::default_instance_ = v4;
    v5 = operator new(0x28u);
    CDOTAMsg_MapLine::CDOTAMsg_MapLine(v5);
    CDOTAMsg_MapLine::default_instance_ = v5;
    v6 = operator new(0x28u);
    CDOTAMsg_WorldLine::CDOTAMsg_WorldLine(v6);
    CDOTAMsg_WorldLine::default_instance_ = v6;
    v7 = operator new(0x48u);
    CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup(v7);
    CDOTAMsg_SendStatPopup::default_instance_ = v7;
    v8 = operator new(0x28u);
    CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing(v8);
    CDOTAMsg_CoachHUDPing::default_instance_ = v8;
    v9 = operator new(0x48u);
    CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder(v9);
    CDOTAMsg_UnitOrder::default_instance_ = v9;
    *(v9 + 7) = CMsgVector::default_instance();
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_dota_5fcommonmessages_2eproto, v10);
  }
}


// EDOTAChatWheelMessage_descriptor  (line 380, @0x0000000001c6e9a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::EDOTAChatWheelMessage_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EDOTAChatWheelMessage_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EDOTAChatWheelMessage_descriptor_;
}


// EDOTAChatWheelMessage_IsValid  (line 384, @0x0000000001c6ea30, libserver.so)
// callers: CDOTAClientMsg_ChatWheel::MergePartialFromCodedStream, CDOTAUserMsg_ChatWheel::MergePartialFromCodedStream
bool __fastcall EDOTAChatWheelMessage_IsValid(int value)
{
  return value <= 0x55;
}


// EDOTAStatPopupTypes_descriptor  (line 478, @0x0000000001c6ea40, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::EDOTAStatPopupTypes_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EDOTAStatPopupTypes_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EDOTAStatPopupTypes_descriptor_;
}


// EDOTAStatPopupTypes_IsValid  (line 482, @0x0000000001c6ead0, libserver.so)
bool __fastcall EDOTAStatPopupTypes_IsValid(int value)
{
  return value <= 3;
}


// dotaunitorder_t_descriptor  (line 494, @0x0000000001c6eae0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::dotaunitorder_t_descriptor_
const google::protobuf::EnumDescriptor *__cdecl dotaunitorder_t_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::dotaunitorder_t_descriptor_;
}


// dotaunitorder_t_IsValid  (line 498, @0x0000000001c6eb70, libserver.so)
bool __fastcall dotaunitorder_t_IsValid(int value)
{
  return value <= 0x21;
}


// CDOTAMsg_LocationPing::CDOTAMsg_LocationPing  (line 551, @0x0000000001c6ebd0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_LocationPing::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMsg_LocationPing::New, protobuf_AddDesc_dota_5fcommonmessages_2eproto, CDOTAClientMsg_MapPing::MergeFrom, CDOTAClientMsg_MapPing::MergePartialFromCodedStream, CDOTAUserMsg_LocationPing::MergeFrom, CDOTAUserMsg_LocationPing::MergePartialFromCodedStream, CDOTAGamerules::ExecutePing
void __fastcall CDOTAMsg_LocationPing::CDOTAMsg_LocationPing(CDOTAMsg_LocationPing *const this)
{
  *this = off_3F8AC10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMsg_LocationPing::SharedCtor(this);
}


// CDOTAMsg_LocationPing::InitAsDefaultInstance  (line 557, @0x0000000001c6eb80, libserver.so)
void __fastcall CDOTAMsg_LocationPing::InitAsDefaultInstance(CDOTAMsg_LocationPing *const this)
{
  ;
}


// CDOTAMsg_LocationPing::CDOTAMsg_LocationPing  (line 560, @0x0000000001c6ee00, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_LocationPing::SharedCtor, CDOTAMsg_LocationPing::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMsg_LocationPing::CDOTAMsg_LocationPing(
        CDOTAMsg_LocationPing *const this,
        const CDOTAMsg_LocationPing *const from)
{
  *this = off_3F8AC10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMsg_LocationPing::SharedCtor(this);
  CDOTAMsg_LocationPing::MergeFrom(this, from);
}


// CDOTAMsg_LocationPing::SharedCtor  (line 567, @0x0000000001c6eb90, libserver.so)  // inlines: memset
// callers: CDOTAMsg_LocationPing::CDOTAMsg_LocationPing
void __fastcall CDOTAMsg_LocationPing::SharedCtor(CDOTAMsg_LocationPing *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 36) = 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
}


// CDOTAMsg_LocationPing::~CDOTAMsg_LocationPing  (line 577, @0x0000000001c6bef0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTAMsg_LocationPing::~CDOTAMsg_LocationPing(CDOTAMsg_LocationPing *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F8AC10;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTAMsg_LocationPing::~CDOTAMsg_LocationPing  (line 577, @0x0000000001c6bf20, libserver.so)  // inlines: ~CDOTAMsg_LocationPing
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTAMsg_LocationPing::~CDOTAMsg_LocationPing(CDOTAMsg_LocationPing *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F8AC10;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTAMsg_LocationPing::SharedDtor  (line 582, @0x0000000001c6ec50, libserver.so)
void __fastcall CDOTAMsg_LocationPing::SharedDtor(CDOTAMsg_LocationPing *const this)
{
  ;
}


// CDOTAMsg_LocationPing::SetCachedSize  (line 587, @0x0000000001c6bc50, libserver.so)
void __fastcall CDOTAMsg_LocationPing::SetCachedSize(const CDOTAMsg_LocationPing *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMsg_LocationPing::descriptor  (line 592, @0x0000000001c6ec60, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMsg_LocationPing::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_;
}


// CDOTAMsg_LocationPing::default_instance  (line 597, @0x0000000001c70d90, libserver.so)
// calls: protobuf_AddDesc_dota_5fcommonmessages_2eproto
// callers: CDOTAClientMsg_MapPing::InitAsDefaultInstance, protobuf_AddDesc_dota_5fclientmessages_2eproto, CDOTAUserMsg_LocationPing::InitAsDefaultInstance, protobuf_AddDesc_dota_5fusermessages_2eproto
// globals: CDOTAMsg_LocationPing::default_instance_
const CDOTAMsg_LocationPing *__cdecl CDOTAMsg_LocationPing::default_instance()
{
  const CDOTAMsg_LocationPing *result; // rax

  result = CDOTAMsg_LocationPing::default_instance_;
  if ( CDOTAMsg_LocationPing::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    return CDOTAMsg_LocationPing::default_instance_;
  }
  return result;
}


// CDOTAMsg_LocationPing::New  (line 604, @0x0000000001c6ec10, libserver.so)
// calls: operator new, CDOTAMsg_LocationPing::CDOTAMsg_LocationPing, operator delete, _Unwind_Resume
CDOTAMsg_LocationPing *__fastcall CDOTAMsg_LocationPing::New(const CDOTAMsg_LocationPing *const this)
{
  CDOTAMsg_LocationPing *v1; // rbx

  v1 = operator new(0x30u);
  CDOTAMsg_LocationPing::CDOTAMsg_LocationPing(v1);
  return v1;
}


// CDOTAMsg_LocationPing::Clear  (line 608, @0x0000000001c6c0b0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CDOTAClientMsg_MapPing::Clear, CDOTAUserMsg_LocationPing::Clear
void __fastcall CDOTAMsg_LocationPing::Clear(CDOTAMsg_LocationPing *const this)
{
  bool v1; // zf
  google::protobuf::UnknownFieldSet *v2; // rdi

  if ( (*(this + 16) & 0x1F) != 0 )
  {
    *(this + 3) = 0;
    *(this + 4) = 0;
    *(this + 10) = 0;
  }
  v1 = *(this + 1) == 0;
  *(this + 4) = 0;
  v2 = (this + 8);
  if ( !v1 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTAMsg_LocationPing::MergePartialFromCodedStream  (line 630, @0x0000000001c6e280, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, set_has_direct_ping, set_has_target, set_has_type, set_has_x, set_has_y
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
// callers: CDOTAClientMsg_MapPing::MergePartialFromCodedStream, CDOTAUserMsg_LocationPing::MergePartialFromCodedStream
// globals: jpt_1C6E2E4
bool __fastcall CDOTAMsg_LocationPing::MergePartialFromCodedStream(
        CDOTAMsg_LocationPing *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v5; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  unsigned __int8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  bool result; // al
  const google::protobuf::uint8 *v11; // rdx
  unsigned int v12; // eax
  const google::protobuf::uint8 *v13; // rdx
  const google::protobuf::uint8 *v14; // rax
  unsigned int v15; // edx
  const google::protobuf::uint8 *v16; // rdx
  __int64 v17; // rax
  const google::protobuf::uint8 *v18; // rdx
  unsigned int v19; // eax
  google::protobuf::uint32 TagFallback; // eax
  unsigned int v21; // eax
  unsigned int v22[2]; // [rsp+8h] [rbp-38h] BYREF

  v5 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 2 )
  {
    while ( 1 )
    {
      if ( buffer < buffer_end )
      {
        v8 = *buffer;
        if ( *buffer > 0 )
          break;
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
      v9 = TagFallback;
      input->last_tag_ = TagFallback;
      if ( TagFallback - 1 <= 0x7E )
        goto LABEL_5;
      if ( TagFallback == 0 )
        return 1;
LABEL_8:
      if ( (v9 & 7) == 4 )
        return 1;
      result = google::protobuf::internal::WireFormat::SkipField(input, v9, v5, v2);
      if ( !result )
        return result;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    v9 = v8;
    input->last_tag_ = v8;
    input->buffer_ = buffer + 1;
LABEL_5:
    switch ( v9 >> 3 )
    {
      case 1u:
        if ( v9 != 8 )
          goto handle_unusual;
        v14 = input->buffer_;
        if ( v14 < input->buffer_end_ )
        {
          v15 = *v14;
          if ( (v15 & 0x80u) == 0 )
          {
            input->buffer_ = v14 + 1;
LABEL_23:
            *(this + 4) |= 1u;
            *(this + 6) = v15;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer < buffer_end && *buffer == 16 )
            {
              v11 = buffer + 1;
              input->buffer_ = v11;
              goto parse_y;
            }
            continue;
          }
        }
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22);
        if ( result )
        {
          v15 = v22[0];
          goto LABEL_23;
        }
        return result;
      case 2u:
        if ( v9 != 16 )
          goto handle_unusual;
        v11 = input->buffer_;
        buffer_end = input->buffer_end_;
parse_y:
        if ( v11 >= buffer_end || ((v12 = *v11) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22);
          if ( !result )
            return result;
          v12 = v22[0];
        }
        else
        {
          input->buffer_ = v11 + 1;
        }
        *(this + 4) |= 2u;
        *(this + 7) = v12;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 24 )
          continue;
        v13 = buffer + 1;
        input->buffer_ = v13;
parse_target:
        if ( v13 >= buffer_end || ((v19 = *v13) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22);
          if ( !result )
            return result;
          v19 = v22[0];
        }
        else
        {
          input->buffer_ = v13 + 1;
        }
        *(this + 4) |= 4u;
        *(this + 8) = v19;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 32 )
          continue;
        v16 = buffer + 1;
        input->buffer_ = v16;
parse_direct_ping:
        if ( buffer_end <= v16 || ((v17 = *v16) & 0x80u) != 0LL )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v22);
          if ( !result )
            return result;
          v17 = *v22;
        }
        else
        {
          input->buffer_ = v16 + 1;
        }
        *(this + 36) = v17 != 0;
        *(this + 4) |= 8u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 40 )
          continue;
        v18 = buffer + 1;
        input->buffer_ = v18;
parse_type:
        if ( v18 >= buffer_end || ((v21 = *v18) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22);
          if ( !result )
            return result;
          v21 = v22[0];
        }
        else
        {
          input->buffer_ = v18 + 1;
        }
        *(this + 4) |= 0x10u;
        *(this + 10) = v21;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer != buffer_end )
          continue;
        if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
        {
          input->last_tag_ = 0;
          input->legitimate_message_end_ = 1;
          return 1;
        }
        buffer_end = input->buffer_;
        continue;
      case 3u:
        if ( v9 != 24 )
          goto handle_unusual;
        v13 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_target;
      case 4u:
        if ( v9 != 32 )
          goto handle_unusual;
        v16 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_direct_ping;
      case 5u:
        if ( v9 != 40 )
          goto handle_unusual;
        v18 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_type;
      default:
handle_unusual:
        if ( v9 != 0 )
          goto LABEL_8;
        return 1;
    }
  }
}


// CDOTAMsg_LocationPing::SerializeWithCachedSizes  (line 736, @0x0000000001c6c1d0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMsg_LocationPing::SerializeWithCachedSizes(
        const CDOTAMsg_LocationPing *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 6), output, v3);
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
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 7), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(this + 8), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
LABEL_13:
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 3, *(this + 10), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_7;
  }
LABEL_12:
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 2, *(this + 36), output, v3);
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


// CDOTAMsg_LocationPing::SerializeWithCachedSizesToArray  (line 771, @0x0000000001c6da40, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTAClientMsg_MapPing::SerializeWithCachedSizesToArray, CDOTAUserMsg_LocationPing::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMsg_LocationPing::SerializeWithCachedSizesToArray(
        const CDOTAMsg_LocationPing *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::uint8 *v8; // rsi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::uint8 *v10; // rsi
  google::protobuf::uint8 v11; // dl
  unsigned __int8 *v12; // rdx
  google::protobuf::io::CodedOutputStream *v13; // rdi
  google::protobuf::uint8 *v14; // rsi
  __int64 v15; // rdx

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
    v8 = result + 1;
    *result = 16;
    if ( v7 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v7, v8, v4);
    }
    else if ( v7 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, v8, v4);
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
    v9 = *(this + 8);
    v10 = result + 1;
    *result = 24;
    if ( v9 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v9, v10, v4);
    }
    else if ( v9 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, v10, v4);
    }
    else
    {
      result[1] = v9;
      result += 2;
    }
    LODWORD(v4) = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v11 = *(this + 36);
    *result = 32;
    result += 2;
    *(result - 1) = v11;
    LODWORD(v4) = *(this + 4);
  }
  v12 = (v4 & 0x10);
  if ( v12 != 0 )
  {
    v13 = *(this + 10);
    v14 = result + 1;
    *result = 40;
    if ( v13 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v13, v14, v12);
    }
    else if ( v13 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v13, v14, v12);
    }
    else
    {
      result[1] = v13;
      result += 2;
    }
  }
  v15 = *(this + 1);
  if ( v15 != 0 && *(v15 + 8) != *v15 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v15);
  return result;
}


// CDOTAMsg_LocationPing::ByteSize  (line 807, @0x0000000001c6d020, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAClientMsg_MapPing::ByteSize, CDOTAUserMsg_LocationPing::ByteSize
int __fastcall CDOTAMsg_LocationPing::ByteSize(const CDOTAMsg_LocationPing *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  google::protobuf::io::CodedOutputStream *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rax
  google::protobuf::io::CodedOutputStream *v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_17;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = *(this + 6);
    if ( v6 < 0 )
    {
      LOBYTE(v5) = v4;
      v3 = 11;
      if ( (v4 & 2) != 0 )
        goto LABEL_7;
      goto LABEL_10;
    }
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v17 + 1;
    }
  }
  if ( (v5 & 2) != 0 )
  {
LABEL_7:
    v7 = *(this + 7);
    v8 = 11;
    if ( v7 >= 0 && (LOBYTE(v8) = 2, v7 > 0x7F) )
    {
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
      v5 = *(this + 4);
      v3 += v16 + 1;
    }
    else
    {
      v3 += v8;
    }
  }
LABEL_10:
  if ( (v5 & 4) != 0 )
  {
    v9 = *(this + 8);
    v10 = 11;
    if ( v9 >= 0 && (LOBYTE(v10) = 2, v9 > 0x7F) )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      v5 = *(this + 4);
      v3 += v15 + 1;
    }
    else
    {
      v3 += v10;
    }
  }
  if ( (v5 & 8) != 0 )
    v3 += 2;
  if ( (v5 & 0x10) != 0 )
  {
    v13 = *(this + 10);
    v14 = 11;
    if ( v13 >= 0 && (LOBYTE(v14) = 2, v13 > 0x7F) )
      v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, v1) + 1;
    else
      v3 += v14;
  }
LABEL_17:
  v11 = *(this + 1);
  if ( v11 != 0 && v11[1] != *v11 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMsg_LocationPing::MergeFrom  (line 856, @0x0000000001c6ee70, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMsg_LocationPing*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMsg_LocationPing::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMsg_LocationPing
void __fastcall CDOTAMsg_LocationPing::MergeFrom(
        CDOTAMsg_LocationPing *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMsg_LocationPing *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      857);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMsg_LocationPing, 0)) != 0 )
  {
    CDOTAMsg_LocationPing::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMsg_LocationPing::MergeFrom  (line 868, @0x0000000001c6ecf0, libserver.so)  // inlines: set_direct_ping, set_has_direct_ping, set_has_target, set_has_type, set_has_x, set_has_y, set_target, set_type, set_x, set_y
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMsg_LocationPing::CDOTAMsg_LocationPing, CDOTAMsg_LocationPing::MergeFrom, CDOTAMsg_LocationPing::CopyFrom, CDOTAClientMsg_MapPing::MergeFrom, CDOTAUserMsg_LocationPing::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMsg_LocationPing::MergeFrom(
        CDOTAMsg_LocationPing *const this,
        const CDOTAMsg_LocationPing *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  __int64 v10; // rax
  char v11; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v12; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v12,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      869);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
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
      v7 = *(from + 8);
      *(this + 4) |= 4u;
      *(this + 8) = v7;
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v8 = *(from + 36);
      *(this + 4) |= 8u;
      *(this + 36) = v8;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v9 = *(from + 10);
      *(this + 4) |= 0x10u;
      *(this + 10) = v9;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMsg_LocationPing::CopyFrom  (line 890, @0x0000000001c6bc60, libserver.so)
void __fastcall CDOTAMsg_LocationPing::CopyFrom(
        CDOTAMsg_LocationPing *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMsg_LocationPing::CopyFrom  (line 896, @0x0000000001c6ef50, libserver.so)
// calls: CDOTAMsg_LocationPing::MergeFrom
void __fastcall CDOTAMsg_LocationPing::CopyFrom(
        CDOTAMsg_LocationPing *const this,
        const CDOTAMsg_LocationPing *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMsg_LocationPing::MergeFrom(this, from);
  }
}


// CDOTAMsg_LocationPing::IsInitialized  (line 902, @0x0000000001c6bca0, libserver.so)
bool __fastcall CDOTAMsg_LocationPing::IsInitialized(const CDOTAMsg_LocationPing *const this)
{
  return 1;
}


// CDOTAMsg_LocationPing::Swap  (line 907, @0x0000000001c6ef90, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMsg_LocationPing::Swap(CDOTAMsg_LocationPing *const this, CDOTAMsg_LocationPing *other)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    v3 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v3;
    v4 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v4;
    LOBYTE(v4) = *(this + 36);
    *(this + 36) = *(other + 36);
    *(other + 36) = v4;
    v5 = *(this + 10);
    *(this + 10) = *(other + 10);
    *(other + 10) = v5;
    v6 = *(this + 4);
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


// CDOTAMsg_LocationPing::GetMetadata  (line 920, @0x0000000001c6d340, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_, `anonymous namespace'::CDOTAMsg_LocationPing_reflection_
google::protobuf::Metadata __fastcall CDOTAMsg_LocationPing::GetMetadata(const CDOTAMsg_LocationPing *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMsg_LocationPing_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMsg_LocationPing_reflection_;
  return result;
}


// CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert  (line 937, @0x0000000001c6f010, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMsg_ItemAlert::New, protobuf_AddDesc_dota_5fcommonmessages_2eproto, CDOTAClientMsg_ItemAlert::MergeFrom, CDOTAClientMsg_ItemAlert::MergePartialFromCodedStream, CDOTAUserMsg_ItemAlert::MergeFrom, CDOTAUserMsg_ItemAlert::MergePartialFromCodedStream, CDOTAGamerules::ClientMsg_ItemAlert, CDOTAUserMsg_ItemAlert::mutable_item_alert
void __fastcall CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert(CDOTAMsg_ItemAlert *const this)
{
  *this = off_3F8ACD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CDOTAMsg_ItemAlert::InitAsDefaultInstance  (line 943, @0x0000000001c6f0b0, libserver.so)
void __fastcall CDOTAMsg_ItemAlert::InitAsDefaultInstance(CDOTAMsg_ItemAlert *const this)
{
  ;
}


// CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert  (line 946, @0x0000000001c6f270, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_ItemAlert::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert(
        CDOTAMsg_ItemAlert *const this,
        const CDOTAMsg_ItemAlert *const from)
{
  *this = off_3F8ACD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  CDOTAMsg_ItemAlert::MergeFrom(this, from);
}


// CDOTAMsg_ItemAlert::SharedCtor  (line 953, @0x0000000001c6f0c0, libserver.so)  // inlines: memset
void __fastcall CDOTAMsg_ItemAlert::SharedCtor(CDOTAMsg_ItemAlert *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CDOTAMsg_ItemAlert::~CDOTAMsg_ItemAlert  (line 961, @0x0000000001c6bf60, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTAMsg_ItemAlert::~CDOTAMsg_ItemAlert(CDOTAMsg_ItemAlert *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F8ACD0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTAMsg_ItemAlert::~CDOTAMsg_ItemAlert  (line 961, @0x0000000001c6bf90, libserver.so)  // inlines: ~CDOTAMsg_ItemAlert
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTAMsg_ItemAlert::~CDOTAMsg_ItemAlert(CDOTAMsg_ItemAlert *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F8ACD0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTAMsg_ItemAlert::SharedDtor  (line 966, @0x0000000001c6f0f0, libserver.so)
void __fastcall CDOTAMsg_ItemAlert::SharedDtor(CDOTAMsg_ItemAlert *const this)
{
  ;
}


// CDOTAMsg_ItemAlert::SetCachedSize  (line 971, @0x0000000001c6bcb0, libserver.so)
void __fastcall CDOTAMsg_ItemAlert::SetCachedSize(const CDOTAMsg_ItemAlert *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMsg_ItemAlert::descriptor  (line 976, @0x0000000001c6f100, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMsg_ItemAlert::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_;
}


// CDOTAMsg_ItemAlert::default_instance  (line 981, @0x0000000001c70dc0, libserver.so)
// calls: protobuf_AddDesc_dota_5fcommonmessages_2eproto
// callers: CDOTAClientMsg_ItemAlert::InitAsDefaultInstance, protobuf_AddDesc_dota_5fclientmessages_2eproto, CDOTAUserMsg_ItemAlert::InitAsDefaultInstance, protobuf_AddDesc_dota_5fusermessages_2eproto
// globals: CDOTAMsg_ItemAlert::default_instance_
const CDOTAMsg_ItemAlert *__cdecl CDOTAMsg_ItemAlert::default_instance()
{
  const CDOTAMsg_ItemAlert *result; // rax

  result = CDOTAMsg_ItemAlert::default_instance_;
  if ( CDOTAMsg_ItemAlert::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    return CDOTAMsg_ItemAlert::default_instance_;
  }
  return result;
}


// CDOTAMsg_ItemAlert::New  (line 988, @0x0000000001c6f070, libserver.so)
// calls: operator new, CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert, operator delete, _Unwind_Resume
CDOTAMsg_ItemAlert *__fastcall CDOTAMsg_ItemAlert::New(const CDOTAMsg_ItemAlert *const this)
{
  CDOTAMsg_ItemAlert *v1; // rbx

  v1 = operator new(0x28u);
  CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert(v1);
  return v1;
}


// CDOTAMsg_ItemAlert::Clear  (line 992, @0x0000000001c6c100, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CDOTAClientMsg_ItemAlert::Clear, CDOTAUserMsg_ItemAlert::Clear
void __fastcall CDOTAMsg_ItemAlert::Clear(CDOTAMsg_ItemAlert *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTAMsg_ItemAlert::MergePartialFromCodedStream  (line 1012, @0x0000000001c6ddf0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, set_has_itemid, set_has_x, set_has_y
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDOTAClientMsg_ItemAlert::MergePartialFromCodedStream, CDOTAUserMsg_ItemAlert::MergePartialFromCodedStream
bool __fastcall CDOTAMsg_ItemAlert::MergePartialFromCodedStream(
        CDOTAMsg_ItemAlert *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v4; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  unsigned int v10; // edx
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v13; // rax
  unsigned int v14; // edx
  const google::protobuf::uint8 *v15; // rdx
  const google::protobuf::uint8 *v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19[9]; // [rsp+Ch] [rbp-24h] BYREF

  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
      v10 = v9 >> 3;
      if ( v9 >> 3 == 2 )
      {
        if ( v9 != 16 )
          goto handle_unusual;
        v15 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_y;
      }
      if ( v10 != 3 )
        break;
      if ( v9 != 24 )
        goto handle_unusual;
      v16 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_itemid:
      if ( v16 >= buffer_end || ((v17 = *v16) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19);
        if ( !result )
          return result;
        v17 = v19[0];
      }
      else
      {
        input->buffer_ = v16 + 1;
      }
      *(this + 4) |= 4u;
      *(this + 8) = v17;
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
    if ( v10 != 1 || v9 != 8 )
      break;
    v13 = input->buffer_;
    if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19);
      if ( !result )
        return result;
      v14 = v19[0];
    }
    else
    {
      input->buffer_ = v13 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 6) = v14;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v15 = buffer + 1;
      input->buffer_ = v15;
parse_y:
      if ( buffer_end <= v15 || ((v18 = *v15) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19);
        if ( !result )
          return result;
        v18 = v19[0];
      }
      else
      {
        input->buffer_ = v15 + 1;
      }
      *(this + 4) |= 2u;
      *(this + 7) = v18;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v16 = buffer + 1;
        input->buffer_ = v16;
        goto parse_itemid;
      }
    }
  }
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTAMsg_ItemAlert::SerializeWithCachedSizes  (line 1088, @0x0000000001c6c2c0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMsg_ItemAlert::SerializeWithCachedSizes(
        const CDOTAMsg_ItemAlert *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 6), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
LABEL_9:
      google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(this + 8), output, v3);
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
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 7), output, v3);
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


// CDOTAMsg_ItemAlert::SerializeWithCachedSizesToArray  (line 1113, @0x0000000001c6d7d0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTAClientMsg_ItemAlert::SerializeWithCachedSizesToArray, CDOTAUserMsg_ItemAlert::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMsg_ItemAlert::SerializeWithCachedSizesToArray(
        const CDOTAMsg_ItemAlert *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::uint8 *v8; // rsi
  unsigned __int8 *v9; // rdx
  google::protobuf::io::CodedOutputStream *v10; // rdi
  google::protobuf::uint8 *v11; // rsi
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
    v8 = result + 1;
    *result = 16;
    if ( v7 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v7, v8, v4);
    }
    else if ( v7 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, v8, v4);
    }
    else
    {
      result[1] = v7;
      result += 2;
    }
    LODWORD(v4) = *(this + 4);
  }
  v9 = (v4 & 4);
  if ( v9 != 0 )
  {
    v10 = *(this + 8);
    v11 = result + 1;
    *result = 24;
    if ( v10 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v10, v11, v9);
    }
    else if ( v10 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, v11, v9);
    }
    else
    {
      result[1] = v10;
      result += 2;
    }
  }
  v12 = *(this + 1);
  if ( v12 != 0 && *(v12 + 8) != *v12 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v12);
  return result;
}


// CDOTAMsg_ItemAlert::ByteSize  (line 1139, @0x0000000001c6ce10, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAClientMsg_ItemAlert::ByteSize, CDOTAUserMsg_ItemAlert::ByteSize
int __fastcall CDOTAMsg_ItemAlert::ByteSize(const CDOTAMsg_ItemAlert *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_11;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = *(this + 6);
    if ( v6 < 0 )
    {
      LOBYTE(v5) = v4;
      v3 = 11;
      if ( (v4 & 2) == 0 )
        goto LABEL_10;
      goto LABEL_7;
    }
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v14 + 1;
    }
  }
  if ( (v5 & 2) != 0 )
  {
LABEL_7:
    v7 = *(this + 7);
    v8 = 11;
    if ( v7 >= 0 && (LOBYTE(v8) = 2, v7 > 0x7F) )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
      v5 = *(this + 4);
      v3 += v13 + 1;
    }
    else
    {
      v3 += v8;
    }
  }
LABEL_10:
  if ( (v5 & 4) != 0 )
  {
    v11 = *(this + 8);
    v12 = 11;
    if ( v11 >= 0 && (LOBYTE(v12) = 2, v11 > 0x7F) )
      v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1) + 1;
    else
      v3 += v12;
  }
LABEL_11:
  v9 = *(this + 1);
  if ( v9 != 0 && v9[1] != *v9 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMsg_ItemAlert::MergeFrom  (line 1176, @0x0000000001c6f300, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMsg_ItemAlert*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMsg_ItemAlert::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMsg_ItemAlert
void __fastcall CDOTAMsg_ItemAlert::MergeFrom(
        CDOTAMsg_ItemAlert *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMsg_ItemAlert *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      1177);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMsg_ItemAlert, 0)) != 0 )
  {
    CDOTAMsg_ItemAlert::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMsg_ItemAlert::MergeFrom  (line 1188, @0x0000000001c6f190, libserver.so)  // inlines: set_has_itemid, set_has_x, set_has_y, set_itemid, set_x, set_y
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMsg_ItemAlert::CDOTAMsg_ItemAlert, CDOTAMsg_ItemAlert::MergeFrom, CDOTAMsg_ItemAlert::CopyFrom, CDOTAClientMsg_ItemAlert::MergeFrom, CDOTAUserMsg_ItemAlert::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMsg_ItemAlert::MergeFrom(CDOTAMsg_ItemAlert *const this, const CDOTAMsg_ItemAlert *const from)
{
  int v4; // eax
  int v5; // eax
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
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      1189);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
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
      v7 = *(from + 8);
      *(this + 4) |= 4u;
      *(this + 8) = v7;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMsg_ItemAlert::CopyFrom  (line 1204, @0x0000000001c6bcc0, libserver.so)
void __fastcall CDOTAMsg_ItemAlert::CopyFrom(
        CDOTAMsg_ItemAlert *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMsg_ItemAlert::CopyFrom  (line 1210, @0x0000000001c6f3e0, libserver.so)
// calls: CDOTAMsg_ItemAlert::MergeFrom
// callers: CDOTAGamerules::ClientMsg_ItemAlert
void __fastcall CDOTAMsg_ItemAlert::CopyFrom(CDOTAMsg_ItemAlert *const this, const CDOTAMsg_ItemAlert *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMsg_ItemAlert::MergeFrom(this, from);
  }
}


// CDOTAMsg_ItemAlert::IsInitialized  (line 1216, @0x0000000001c6bd00, libserver.so)
bool __fastcall CDOTAMsg_ItemAlert::IsInitialized(const CDOTAMsg_ItemAlert *const this)
{
  return 1;
}


// CDOTAMsg_ItemAlert::Swap  (line 1221, @0x0000000001c6f420, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMsg_ItemAlert::Swap(CDOTAMsg_ItemAlert *const this, CDOTAMsg_ItemAlert *other)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
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


// CDOTAMsg_ItemAlert::GetMetadata  (line 1232, @0x0000000001c6d3e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_, `anonymous namespace'::CDOTAMsg_ItemAlert_reflection_
google::protobuf::Metadata __fastcall CDOTAMsg_ItemAlert::GetMetadata(const CDOTAMsg_ItemAlert *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMsg_ItemAlert_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMsg_ItemAlert_reflection_;
  return result;
}


// CDOTAMsg_MapLine::CDOTAMsg_MapLine  (line 1249, @0x0000000001c6f480, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMsg_MapLine::New, protobuf_AddDesc_dota_5fcommonmessages_2eproto, CDOTAClientMsg_MapLine::MergeFrom, CDOTAClientMsg_MapLine::MergePartialFromCodedStream, CDOTAUserMsg_MapLine::MergeFrom, CDOTAUserMsg_MapLine::MergePartialFromCodedStream, CDOTAGamerules::ClientMsg_MapLine
void __fastcall CDOTAMsg_MapLine::CDOTAMsg_MapLine(CDOTAMsg_MapLine *const this)
{
  *this = off_3F8AD90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 32) = 0;
  *(this + 4) = 0;
}


// CDOTAMsg_MapLine::InitAsDefaultInstance  (line 1255, @0x0000000001c6f520, libserver.so)
void __fastcall CDOTAMsg_MapLine::InitAsDefaultInstance(CDOTAMsg_MapLine *const this)
{
  ;
}


// CDOTAMsg_MapLine::CDOTAMsg_MapLine  (line 1258, @0x0000000001c6f6e0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_MapLine::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMsg_MapLine::CDOTAMsg_MapLine(CDOTAMsg_MapLine *const this, const CDOTAMsg_MapLine *const from)
{
  *this = off_3F8AD90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 32) = 0;
  *(this + 4) = 0;
  CDOTAMsg_MapLine::MergeFrom(this, from);
}


// CDOTAMsg_MapLine::SharedCtor  (line 1265, @0x0000000001c6f530, libserver.so)  // inlines: memset
void __fastcall CDOTAMsg_MapLine::SharedCtor(CDOTAMsg_MapLine *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 32) = 0;
  *(this + 4) = 0;
}


// CDOTAMsg_MapLine::~CDOTAMsg_MapLine  (line 1273, @0x0000000001c6bfd0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTAMsg_MapLine::~CDOTAMsg_MapLine(CDOTAMsg_MapLine *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F8AD90;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTAMsg_MapLine::~CDOTAMsg_MapLine  (line 1273, @0x0000000001c6c000, libserver.so)  // inlines: ~CDOTAMsg_MapLine
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTAMsg_MapLine::~CDOTAMsg_MapLine(CDOTAMsg_MapLine *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F8AD90;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTAMsg_MapLine::SharedDtor  (line 1278, @0x0000000001c6f560, libserver.so)
void __fastcall CDOTAMsg_MapLine::SharedDtor(CDOTAMsg_MapLine *const this)
{
  ;
}


// CDOTAMsg_MapLine::SetCachedSize  (line 1283, @0x0000000001c6bd10, libserver.so)
void __fastcall CDOTAMsg_MapLine::SetCachedSize(const CDOTAMsg_MapLine *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMsg_MapLine::descriptor  (line 1288, @0x0000000001c6f570, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_MapLine_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMsg_MapLine::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMsg_MapLine_descriptor_;
}


// CDOTAMsg_MapLine::default_instance  (line 1293, @0x0000000001c70df0, libserver.so)
// calls: protobuf_AddDesc_dota_5fcommonmessages_2eproto
// callers: CDOTAClientMsg_MapLine::InitAsDefaultInstance, protobuf_AddDesc_dota_5fclientmessages_2eproto, CDOTAUserMsg_MapLine::InitAsDefaultInstance, protobuf_AddDesc_dota_5fusermessages_2eproto
// globals: CDOTAMsg_MapLine::default_instance_
const CDOTAMsg_MapLine *__cdecl CDOTAMsg_MapLine::default_instance()
{
  const CDOTAMsg_MapLine *result; // rax

  result = CDOTAMsg_MapLine::default_instance_;
  if ( CDOTAMsg_MapLine::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    return CDOTAMsg_MapLine::default_instance_;
  }
  return result;
}


// CDOTAMsg_MapLine::New  (line 1300, @0x0000000001c6f4e0, libserver.so)
// calls: operator new, CDOTAMsg_MapLine::CDOTAMsg_MapLine, operator delete, _Unwind_Resume
CDOTAMsg_MapLine *__fastcall CDOTAMsg_MapLine::New(const CDOTAMsg_MapLine *const this)
{
  CDOTAMsg_MapLine *v1; // rbx

  v1 = operator new(0x28u);
  CDOTAMsg_MapLine::CDOTAMsg_MapLine(v1);
  return v1;
}


// CDOTAMsg_MapLine::Clear  (line 1304, @0x0000000001c6c140, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CDOTAClientMsg_MapLine::Clear, CDOTAUserMsg_MapLine::Clear
void __fastcall CDOTAMsg_MapLine::Clear(CDOTAMsg_MapLine *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  v2[24] = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTAMsg_MapLine::MergePartialFromCodedStream  (line 1324, @0x0000000001c6e030, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, set_has_initial, set_has_x, set_has_y
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDOTAClientMsg_MapLine::MergePartialFromCodedStream, CDOTAUserMsg_MapLine::MergePartialFromCodedStream
bool __fastcall CDOTAMsg_MapLine::MergePartialFromCodedStream(
        CDOTAMsg_MapLine *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v4; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  unsigned int v10; // edx
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v13; // rax
  unsigned int v14; // edx
  const google::protobuf::uint8 *v15; // rdx
  const google::protobuf::uint8 *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19[2]; // [rsp+8h] [rbp-28h] BYREF

  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
      v10 = v9 >> 3;
      if ( v9 >> 3 == 2 )
      {
        if ( v9 != 16 )
          goto handle_unusual;
        v15 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_y;
      }
      if ( v10 != 3 )
        break;
      if ( v9 != 24 )
        goto handle_unusual;
      v16 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_initial:
      if ( v16 >= buffer_end || ((v17 = *v16) & 0x80u) != 0LL )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v19);
        if ( !result )
          return result;
        v17 = *v19;
      }
      else
      {
        input->buffer_ = v16 + 1;
      }
      *(this + 32) = v17 != 0;
      *(this + 4) |= 4u;
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
    if ( v10 != 1 || v9 != 8 )
      break;
    v13 = input->buffer_;
    if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19);
      if ( !result )
        return result;
      v14 = v19[0];
    }
    else
    {
      input->buffer_ = v13 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 6) = v14;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v15 = buffer + 1;
      input->buffer_ = v15;
parse_y:
      if ( buffer_end <= v15 || ((v18 = *v15) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19);
        if ( !result )
          return result;
        v18 = v19[0];
      }
      else
      {
        input->buffer_ = v15 + 1;
      }
      *(this + 4) |= 2u;
      *(this + 7) = v18;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v16 = buffer + 1;
        input->buffer_ = v16;
        goto parse_initial;
      }
    }
  }
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTAMsg_MapLine::SerializeWithCachedSizes  (line 1400, @0x0000000001c6c360, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMsg_MapLine::SerializeWithCachedSizes(
        const CDOTAMsg_MapLine *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 6), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
LABEL_9:
      google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 1, *(this + 32), output, v3);
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
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 7), output, v3);
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


// CDOTAMsg_MapLine::SerializeWithCachedSizesToArray  (line 1425, @0x0000000001c6d6f0, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTAClientMsg_MapLine::SerializeWithCachedSizesToArray, CDOTAUserMsg_MapLine::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMsg_MapLine::SerializeWithCachedSizesToArray(
        const CDOTAMsg_MapLine *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::uint8 v7; // al
  __int64 v8; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 6);
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
    v6 = *(this + 7);
    *target = 16;
    if ( v6 < 0 )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v6, (target + 1), v2);
    }
    else if ( v6 > 0x7F )
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
    v7 = *(this + 32);
    target += 2;
    *(target - 2) = 24;
    *(target - 1) = v7;
  }
  v8 = *(this + 1);
  if ( v8 == 0 || *(v8 + 8) == *v8 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v8);
}


// CDOTAMsg_MapLine::ByteSize  (line 1451, @0x0000000001c6cd40, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAClientMsg_MapLine::ByteSize, CDOTAUserMsg_MapLine::ByteSize
int __fastcall CDOTAMsg_MapLine::ByteSize(const CDOTAMsg_MapLine *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  _QWORD *v7; // rax
  google::protobuf::io::CodedOutputStream *v9; // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_9;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = *(this + 6);
    if ( v6 < 0 )
    {
      LOBYTE(v5) = v4;
      v3 = 11;
      if ( (v4 & 2) == 0 )
        goto LABEL_7;
      goto LABEL_13;
    }
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v12 + 1;
    }
  }
  if ( (v5 & 2) != 0 )
  {
LABEL_13:
    v9 = *(this + 7);
    v10 = 11;
    if ( v9 >= 0 && (LOBYTE(v10) = 2, v9 > 0x7F) )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      v5 = *(this + 4);
      v3 += v11 + 1;
    }
    else
    {
      v3 += v10;
    }
  }
LABEL_7:
  if ( (v5 & 4) != 0 )
    v3 += 2;
LABEL_9:
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMsg_MapLine::MergeFrom  (line 1486, @0x0000000001c6f770, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMsg_MapLine*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMsg_MapLine::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMsg_MapLine
void __fastcall CDOTAMsg_MapLine::MergeFrom(CDOTAMsg_MapLine *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMsg_MapLine *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      1487);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMsg_MapLine, 0)) != 0 )
  {
    CDOTAMsg_MapLine::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMsg_MapLine::MergeFrom  (line 1498, @0x0000000001c6f600, libserver.so)  // inlines: set_has_initial, set_has_x, set_has_y, set_initial, set_x, set_y
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMsg_MapLine::CDOTAMsg_MapLine, CDOTAMsg_MapLine::MergeFrom, CDOTAMsg_MapLine::CopyFrom, CDOTAClientMsg_MapLine::MergeFrom, CDOTAUserMsg_MapLine::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMsg_MapLine::MergeFrom(CDOTAMsg_MapLine *const this, const CDOTAMsg_MapLine *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  char v7; // al
  __int64 v8; // rax
  char v9; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v10; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      1499);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
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
      v7 = *(from + 32);
      *(this + 4) |= 4u;
      *(this + 32) = v7;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMsg_MapLine::CopyFrom  (line 1514, @0x0000000001c6bd20, libserver.so)
void __fastcall CDOTAMsg_MapLine::CopyFrom(CDOTAMsg_MapLine *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMsg_MapLine::CopyFrom  (line 1520, @0x0000000001c6f850, libserver.so)
// calls: CDOTAMsg_MapLine::MergeFrom
// callers: CDOTAGamerules::ClientMsg_MapLine
void __fastcall CDOTAMsg_MapLine::CopyFrom(CDOTAMsg_MapLine *const this, const CDOTAMsg_MapLine *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMsg_MapLine::MergeFrom(this, from);
  }
}


// CDOTAMsg_MapLine::IsInitialized  (line 1526, @0x0000000001c6bd60, libserver.so)
bool __fastcall CDOTAMsg_MapLine::IsInitialized(const CDOTAMsg_MapLine *const this)
{
  return 1;
}


// CDOTAMsg_MapLine::Swap  (line 1531, @0x0000000001c6f890, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMsg_MapLine::Swap(CDOTAMsg_MapLine *const this, CDOTAMsg_MapLine *other)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    v3 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v3;
    LOBYTE(v3) = *(this + 32);
    *(this + 32) = *(other + 32);
    *(other + 32) = v3;
    v4 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v4;
    v5 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v5;
    LODWORD(v5) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v5;
  }
}


// CDOTAMsg_MapLine::GetMetadata  (line 1542, @0x0000000001c6d480, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_MapLine_descriptor_, `anonymous namespace'::CDOTAMsg_MapLine_reflection_
google::protobuf::Metadata __fastcall CDOTAMsg_MapLine::GetMetadata(const CDOTAMsg_MapLine *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMsg_MapLine_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMsg_MapLine_reflection_;
  return result;
}


// CDOTAMsg_WorldLine::CDOTAMsg_WorldLine  (line 1561, @0x0000000001c6f940, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_WorldLine::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMsg_WorldLine::New, protobuf_AddDesc_dota_5fcommonmessages_2eproto, CDOTAClientMsg_WorldLine::MergeFrom, CDOTAClientMsg_WorldLine::MergePartialFromCodedStream, CDOTAUserMsg_WorldLine::MergeFrom, CDOTAUserMsg_WorldLine::MergePartialFromCodedStream, CDOTAGamerules::ClientMsg_WorldLine
void __fastcall CDOTAMsg_WorldLine::CDOTAMsg_WorldLine(CDOTAMsg_WorldLine *const this)
{
  *this = off_3F8AE50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMsg_WorldLine::SharedCtor(this);
}


// CDOTAMsg_WorldLine::InitAsDefaultInstance  (line 1567, @0x0000000001c6f8f0, libserver.so)
void __fastcall CDOTAMsg_WorldLine::InitAsDefaultInstance(CDOTAMsg_WorldLine *const this)
{
  ;
}


// CDOTAMsg_WorldLine::CDOTAMsg_WorldLine  (line 1570, @0x0000000001c6fb70, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_WorldLine::SharedCtor, CDOTAMsg_WorldLine::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMsg_WorldLine::CDOTAMsg_WorldLine(
        CDOTAMsg_WorldLine *const this,
        const CDOTAMsg_WorldLine *const from)
{
  *this = off_3F8AE50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMsg_WorldLine::SharedCtor(this);
  CDOTAMsg_WorldLine::MergeFrom(this, from);
}


// CDOTAMsg_WorldLine::SharedCtor  (line 1577, @0x0000000001c6f900, libserver.so)  // inlines: memset
// callers: CDOTAMsg_WorldLine::CDOTAMsg_WorldLine
void __fastcall CDOTAMsg_WorldLine::SharedCtor(CDOTAMsg_WorldLine *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 36) = 0;
  *(this + 37) = 0;
  *(this + 4) = 0;
}


// CDOTAMsg_WorldLine::~CDOTAMsg_WorldLine  (line 1587, @0x0000000001c6c040, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTAMsg_WorldLine::~CDOTAMsg_WorldLine(CDOTAMsg_WorldLine *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F8AE50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTAMsg_WorldLine::~CDOTAMsg_WorldLine  (line 1587, @0x0000000001c6c070, libserver.so)  // inlines: ~CDOTAMsg_WorldLine
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTAMsg_WorldLine::~CDOTAMsg_WorldLine(CDOTAMsg_WorldLine *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F8AE50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTAMsg_WorldLine::SharedDtor  (line 1592, @0x0000000001c6f9c0, libserver.so)
void __fastcall CDOTAMsg_WorldLine::SharedDtor(CDOTAMsg_WorldLine *const this)
{
  ;
}


// CDOTAMsg_WorldLine::SetCachedSize  (line 1597, @0x0000000001c6bd70, libserver.so)
void __fastcall CDOTAMsg_WorldLine::SetCachedSize(const CDOTAMsg_WorldLine *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMsg_WorldLine::descriptor  (line 1602, @0x0000000001c6f9d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_WorldLine_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMsg_WorldLine::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMsg_WorldLine_descriptor_;
}


// CDOTAMsg_WorldLine::default_instance  (line 1607, @0x0000000001c70e20, libserver.so)
// calls: protobuf_AddDesc_dota_5fcommonmessages_2eproto
// callers: CDOTAClientMsg_WorldLine::InitAsDefaultInstance, protobuf_AddDesc_dota_5fclientmessages_2eproto, CDOTAUserMsg_WorldLine::InitAsDefaultInstance, protobuf_AddDesc_dota_5fusermessages_2eproto
// globals: CDOTAMsg_WorldLine::default_instance_
const CDOTAMsg_WorldLine *__cdecl CDOTAMsg_WorldLine::default_instance()
{
  const CDOTAMsg_WorldLine *result; // rax

  result = CDOTAMsg_WorldLine::default_instance_;
  if ( CDOTAMsg_WorldLine::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    return CDOTAMsg_WorldLine::default_instance_;
  }
  return result;
}


// CDOTAMsg_WorldLine::New  (line 1614, @0x0000000001c6f980, libserver.so)
// calls: operator new, CDOTAMsg_WorldLine::CDOTAMsg_WorldLine, operator delete, _Unwind_Resume
CDOTAMsg_WorldLine *__fastcall CDOTAMsg_WorldLine::New(const CDOTAMsg_WorldLine *const this)
{
  CDOTAMsg_WorldLine *v1; // rbx

  v1 = operator new(0x28u);
  CDOTAMsg_WorldLine::CDOTAMsg_WorldLine(v1);
  return v1;
}


// CDOTAMsg_WorldLine::Clear  (line 1618, @0x0000000001c6c180, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CDOTAClientMsg_WorldLine::Clear, CDOTAUserMsg_WorldLine::Clear
void __fastcall CDOTAMsg_WorldLine::Clear(CDOTAMsg_WorldLine *const this)
{
  bool v1; // zf
  google::protobuf::UnknownFieldSet *v2; // rdi

  if ( (*(this + 16) & 0x1F) != 0 )
  {
    *(this + 3) = 0;
    *(this + 8) = 0;
    *(this + 18) = 0;
  }
  v1 = *(this + 1) == 0;
  *(this + 4) = 0;
  v2 = (this + 8);
  if ( !v1 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTAMsg_WorldLine::MergePartialFromCodedStream  (line 1640, @0x0000000001c6e610, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, set_has_end, set_has_initial, set_has_x, set_has_y, set_has_z
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
// callers: CDOTAClientMsg_WorldLine::MergePartialFromCodedStream, CDOTAUserMsg_WorldLine::MergePartialFromCodedStream
// globals: jpt_1C6E674
bool __fastcall CDOTAMsg_WorldLine::MergePartialFromCodedStream(
        CDOTAMsg_WorldLine *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v5; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  unsigned __int8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  bool result; // al
  const google::protobuf::uint8 *v11; // rdx
  unsigned int v12; // eax
  const google::protobuf::uint8 *v13; // rdx
  const google::protobuf::uint8 *v14; // rax
  unsigned int v15; // edx
  const google::protobuf::uint8 *v16; // rdx
  __int64 v17; // rax
  const google::protobuf::uint8 *v18; // rdx
  unsigned int v19; // eax
  google::protobuf::uint32 TagFallback; // eax
  __int64 v21; // rax
  unsigned int v22[2]; // [rsp+8h] [rbp-38h] BYREF

  v5 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 2 )
  {
    while ( 1 )
    {
      if ( buffer < buffer_end )
      {
        v8 = *buffer;
        if ( *buffer > 0 )
          break;
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
      v9 = TagFallback;
      input->last_tag_ = TagFallback;
      if ( TagFallback - 1 <= 0x7E )
        goto LABEL_5;
      if ( TagFallback == 0 )
        return 1;
LABEL_8:
      if ( (v9 & 7) == 4 )
        return 1;
      result = google::protobuf::internal::WireFormat::SkipField(input, v9, v5, v2);
      if ( !result )
        return result;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    v9 = v8;
    input->last_tag_ = v8;
    input->buffer_ = buffer + 1;
LABEL_5:
    switch ( v9 >> 3 )
    {
      case 1u:
        if ( v9 != 8 )
          goto handle_unusual;
        v14 = input->buffer_;
        if ( v14 < input->buffer_end_ )
        {
          v15 = *v14;
          if ( (v15 & 0x80u) == 0 )
          {
            input->buffer_ = v14 + 1;
LABEL_23:
            *(this + 4) |= 1u;
            *(this + 6) = v15;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer < buffer_end && *buffer == 16 )
            {
              v11 = buffer + 1;
              input->buffer_ = v11;
              goto parse_y;
            }
            continue;
          }
        }
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22);
        if ( result )
        {
          v15 = v22[0];
          goto LABEL_23;
        }
        return result;
      case 2u:
        if ( v9 != 16 )
          goto handle_unusual;
        v11 = input->buffer_;
        buffer_end = input->buffer_end_;
parse_y:
        if ( v11 >= buffer_end || ((v12 = *v11) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22);
          if ( !result )
            return result;
          v12 = v22[0];
        }
        else
        {
          input->buffer_ = v11 + 1;
        }
        *(this + 4) |= 2u;
        *(this + 7) = v12;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 24 )
          continue;
        v13 = buffer + 1;
        input->buffer_ = v13;
parse_z:
        if ( v13 >= buffer_end || ((v19 = *v13) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22);
          if ( !result )
            return result;
          v19 = v22[0];
        }
        else
        {
          input->buffer_ = v13 + 1;
        }
        *(this + 4) |= 4u;
        *(this + 8) = v19;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 32 )
          continue;
        v16 = buffer + 1;
        input->buffer_ = v16;
parse_initial:
        if ( buffer_end <= v16 || ((v17 = *v16) & 0x80u) != 0LL )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v22);
          if ( !result )
            return result;
          v17 = *v22;
        }
        else
        {
          input->buffer_ = v16 + 1;
        }
        *(this + 36) = v17 != 0;
        *(this + 4) |= 8u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 40 )
          continue;
        v18 = buffer + 1;
        input->buffer_ = v18;
parse_end:
        if ( v18 >= buffer_end || ((v21 = *v18) & 0x80u) != 0LL )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v22);
          if ( !result )
            return result;
          v21 = *v22;
        }
        else
        {
          input->buffer_ = v18 + 1;
        }
        *(this + 37) = v21 != 0;
        *(this + 4) |= 0x10u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer != buffer_end )
          continue;
        if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
        {
          input->last_tag_ = 0;
          input->legitimate_message_end_ = 1;
          return 1;
        }
        buffer_end = input->buffer_;
        continue;
      case 3u:
        if ( v9 != 24 )
          goto handle_unusual;
        v13 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_z;
      case 4u:
        if ( v9 != 32 )
          goto handle_unusual;
        v16 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_initial;
      case 5u:
        if ( v9 != 40 )
          goto handle_unusual;
        v18 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_end;
      default:
handle_unusual:
        if ( v9 != 0 )
          goto LABEL_8;
        return 1;
    }
  }
}


// CDOTAMsg_WorldLine::SerializeWithCachedSizes  (line 1746, @0x0000000001c6c400, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMsg_WorldLine::SerializeWithCachedSizes(
        const CDOTAMsg_WorldLine *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 6), output, v3);
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
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 7), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(this + 8), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
LABEL_13:
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 3, *(this + 37), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_7;
  }
LABEL_12:
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 2, *(this + 36), output, v3);
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


// CDOTAMsg_WorldLine::SerializeWithCachedSizesToArray  (line 1781, @0x0000000001c6d8f0, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTAClientMsg_WorldLine::SerializeWithCachedSizesToArray, CDOTAUserMsg_WorldLine::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMsg_WorldLine::SerializeWithCachedSizesToArray(
        const CDOTAMsg_WorldLine *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::uint8 *v8; // rsi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::uint8 *v10; // rsi
  google::protobuf::uint8 v11; // dl
  google::protobuf::uint8 v12; // dl
  __int64 v13; // rdx

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
    v8 = result + 1;
    *result = 16;
    if ( v7 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v7, v8, v4);
    }
    else if ( v7 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, v8, v4);
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
    v9 = *(this + 8);
    v10 = result + 1;
    *result = 24;
    if ( v9 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v9, v10, v4);
    }
    else if ( v9 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, v10, v4);
    }
    else
    {
      result[1] = v9;
      result += 2;
    }
    LODWORD(v4) = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v11 = *(this + 36);
    *result = 32;
    result += 2;
    *(result - 1) = v11;
    LODWORD(v4) = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v12 = *(this + 37);
    result += 2;
    *(result - 2) = 40;
    *(result - 1) = v12;
  }
  v13 = *(this + 1);
  if ( v13 != 0 && *(v13 + 8) != *v13 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v13);
  return result;
}


// CDOTAMsg_WorldLine::ByteSize  (line 1817, @0x0000000001c6cf00, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAClientMsg_WorldLine::ByteSize, CDOTAUserMsg_WorldLine::ByteSize
int __fastcall CDOTAMsg_WorldLine::ByteSize(const CDOTAMsg_WorldLine *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rax
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_15;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = *(this + 6);
    if ( v6 < 0 )
    {
      LOBYTE(v5) = v4;
      v3 = 11;
      if ( (v4 & 2) != 0 )
        goto LABEL_7;
      goto LABEL_10;
    }
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v15 + 1;
    }
  }
  if ( (v5 & 2) != 0 )
  {
LABEL_7:
    v7 = *(this + 7);
    v8 = 11;
    if ( v7 >= 0 && (LOBYTE(v8) = 2, v7 > 0x7F) )
    {
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
      v5 = *(this + 4);
      v3 += v14 + 1;
    }
    else
    {
      v3 += v8;
    }
  }
LABEL_10:
  if ( (v5 & 4) != 0 )
  {
    v11 = *(this + 8);
    v12 = 11;
    if ( v11 >= 0 && (LOBYTE(v12) = 2, v11 > 0x7F) )
    {
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
      v5 = *(this + 4);
      v3 += v13 + 1;
    }
    else
    {
      v3 += v12;
    }
  }
  if ( (v5 & 8) != 0 )
    v3 += 2;
  if ( (v5 & 0x10) != 0 )
    v3 += 2;
LABEL_15:
  v9 = *(this + 1);
  if ( v9 != 0 && v9[1] != *v9 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMsg_WorldLine::MergeFrom  (line 1864, @0x0000000001c6fbe0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMsg_WorldLine*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMsg_WorldLine::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMsg_WorldLine
void __fastcall CDOTAMsg_WorldLine::MergeFrom(
        CDOTAMsg_WorldLine *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMsg_WorldLine *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      1865);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMsg_WorldLine, 0)) != 0 )
  {
    CDOTAMsg_WorldLine::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMsg_WorldLine::MergeFrom  (line 1876, @0x0000000001c6fa60, libserver.so)  // inlines: set_end, set_has_end, set_has_initial, set_has_x, set_has_y, set_has_z, set_initial, set_x, set_y, set_z
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMsg_WorldLine::CDOTAMsg_WorldLine, CDOTAMsg_WorldLine::MergeFrom, CDOTAMsg_WorldLine::CopyFrom, CDOTAClientMsg_WorldLine::MergeFrom, CDOTAUserMsg_WorldLine::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMsg_WorldLine::MergeFrom(CDOTAMsg_WorldLine *const this, const CDOTAMsg_WorldLine *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  char v9; // al
  __int64 v10; // rax
  char v11; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v12; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v12,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      1877);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
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
      v7 = *(from + 8);
      *(this + 4) |= 4u;
      *(this + 8) = v7;
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v8 = *(from + 36);
      *(this + 4) |= 8u;
      *(this + 36) = v8;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v9 = *(from + 37);
      *(this + 4) |= 0x10u;
      *(this + 37) = v9;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMsg_WorldLine::CopyFrom  (line 1898, @0x0000000001c6bd80, libserver.so)
void __fastcall CDOTAMsg_WorldLine::CopyFrom(
        CDOTAMsg_WorldLine *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMsg_WorldLine::CopyFrom  (line 1904, @0x0000000001c6fcc0, libserver.so)
// calls: CDOTAMsg_WorldLine::MergeFrom
// callers: CDOTAGamerules::ClientMsg_WorldLine
void __fastcall CDOTAMsg_WorldLine::CopyFrom(CDOTAMsg_WorldLine *const this, const CDOTAMsg_WorldLine *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMsg_WorldLine::MergeFrom(this, from);
  }
}


// CDOTAMsg_WorldLine::IsInitialized  (line 1910, @0x0000000001c6bdc0, libserver.so)
bool __fastcall CDOTAMsg_WorldLine::IsInitialized(const CDOTAMsg_WorldLine *const this)
{
  return 1;
}


// CDOTAMsg_WorldLine::Swap  (line 1915, @0x0000000001c6fd00, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMsg_WorldLine::Swap(CDOTAMsg_WorldLine *const this, CDOTAMsg_WorldLine *other)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    v3 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v3;
    v4 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v4;
    LOBYTE(v4) = *(this + 36);
    *(this + 36) = *(other + 36);
    *(other + 36) = v4;
    LOBYTE(v4) = *(this + 37);
    *(this + 37) = *(other + 37);
    *(other + 37) = v4;
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


// CDOTAMsg_WorldLine::GetMetadata  (line 1928, @0x0000000001c6d520, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_WorldLine_descriptor_, `anonymous namespace'::CDOTAMsg_WorldLine_reflection_
google::protobuf::Metadata __fastcall CDOTAMsg_WorldLine::GetMetadata(const CDOTAMsg_WorldLine *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMsg_WorldLine_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMsg_WorldLine_reflection_;
  return result;
}


// CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup  (line 1945, @0x0000000001c6fe20, libserver.so)  // inlines: RepeatedField, RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedField, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_SendStatPopup::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, operator delete [], google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTAMsg_SendStatPopup::New, protobuf_AddDesc_dota_5fcommonmessages_2eproto, CDOTAClientMsg_SendStatPopup::MergeFrom, CDOTAClientMsg_SendStatPopup::MergePartialFromCodedStream, CDOTAUserMsg_SendStatPopup::MergeFrom, CDOTAUserMsg_SendStatPopup::MergePartialFromCodedStream, CDOTAGamerules::ClientMsg_SendStatPopup
void __fastcall CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup(CDOTAMsg_SendStatPopup *const this)
{
  *this = off_3F8AF10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  CDOTAMsg_SendStatPopup::SharedCtor(this);
}


// CDOTAMsg_SendStatPopup::InitAsDefaultInstance  (line 1951, @0x0000000001c6fd80, libserver.so)
void __fastcall CDOTAMsg_SendStatPopup::InitAsDefaultInstance(CDOTAMsg_SendStatPopup *const this)
{
  ;
}


// CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup  (line 1954, @0x0000000001c71480, libserver.so)  // inlines: RepeatedField, RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedField, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_SendStatPopup::SharedCtor, CDOTAMsg_SendStatPopup::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, operator delete [], google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup(
        CDOTAMsg_SendStatPopup *const this,
        const CDOTAMsg_SendStatPopup *const from)
{
  *this = off_3F8AF10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  CDOTAMsg_SendStatPopup::SharedCtor(this);
  CDOTAMsg_SendStatPopup::MergeFrom(this, from);
}


// CDOTAMsg_SendStatPopup::SharedCtor  (line 1961, @0x0000000001c6fd90, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup
void __fastcall CDOTAMsg_SendStatPopup::SharedCtor(CDOTAMsg_SendStatPopup *const this)
{
  google::protobuf::Closure *v1; // rdx
  __int64 v3[2]; // [rsp+0h] [rbp-30h] BYREF
  char v4; // [rsp+10h] [rbp-20h]

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v4 = 0;
    v3[0] = off_47BFB70;
    v3[1] = google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  *(this + 5) = 0;
  *(this + 16) = 0;
  *(this + 4) = 0;
}


// CDOTAMsg_SendStatPopup::~CDOTAMsg_SendStatPopup  (line 1968, @0x0000000001c6ca50, libserver.so)  // inlines: ~RepeatedField, ~RepeatedPtrField
// calls: operator delete [], google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMsg_SendStatPopup::~CDOTAMsg_SendStatPopup
void __fastcall CDOTAMsg_SendStatPopup::~CDOTAMsg_SendStatPopup(CDOTAMsg_SendStatPopup *const this)
{
  void *v2; // rdi

  *this = off_3F8AF10;
  v2 = *(this + 6);
  if ( v2 != 0 )
    operator delete[](v2);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMsg_SendStatPopup::~CDOTAMsg_SendStatPopup  (line 1968, @0x0000000001c6caa0, libserver.so)
// calls: CDOTAMsg_SendStatPopup::~CDOTAMsg_SendStatPopup, operator delete
void __fastcall CDOTAMsg_SendStatPopup::~CDOTAMsg_SendStatPopup(CDOTAMsg_SendStatPopup *const this)
{
  CDOTAMsg_SendStatPopup::~CDOTAMsg_SendStatPopup(this);
  operator delete(this);
}


// CDOTAMsg_SendStatPopup::SharedDtor  (line 1973, @0x0000000001c6ff10, libserver.so)
void __fastcall CDOTAMsg_SendStatPopup::SharedDtor(CDOTAMsg_SendStatPopup *const this)
{
  ;
}


// CDOTAMsg_SendStatPopup::SetCachedSize  (line 1978, @0x0000000001c6bdd0, libserver.so)
void __fastcall CDOTAMsg_SendStatPopup::SetCachedSize(const CDOTAMsg_SendStatPopup *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMsg_SendStatPopup::descriptor  (line 1983, @0x0000000001c6ff20, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_SendStatPopup_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMsg_SendStatPopup::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMsg_SendStatPopup_descriptor_;
}


// CDOTAMsg_SendStatPopup::default_instance  (line 1988, @0x0000000001c70e50, libserver.so)
// calls: protobuf_AddDesc_dota_5fcommonmessages_2eproto
// callers: CDOTAClientMsg_SendStatPopup::InitAsDefaultInstance, protobuf_AddDesc_dota_5fclientmessages_2eproto, CDOTAUserMsg_SendStatPopup::InitAsDefaultInstance, protobuf_AddDesc_dota_5fusermessages_2eproto
// globals: CDOTAMsg_SendStatPopup::default_instance_
const CDOTAMsg_SendStatPopup *__cdecl CDOTAMsg_SendStatPopup::default_instance()
{
  const CDOTAMsg_SendStatPopup *result; // rax

  result = CDOTAMsg_SendStatPopup::default_instance_;
  if ( CDOTAMsg_SendStatPopup::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    return CDOTAMsg_SendStatPopup::default_instance_;
  }
  return result;
}


// CDOTAMsg_SendStatPopup::New  (line 1995, @0x0000000001c6fed0, libserver.so)
// calls: operator new, CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup, operator delete, _Unwind_Resume
CDOTAMsg_SendStatPopup *__fastcall CDOTAMsg_SendStatPopup::New(const CDOTAMsg_SendStatPopup *const this)
{
  CDOTAMsg_SendStatPopup *v1; // rbx

  v1 = operator new(0x48u);
  CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup(v1);
  return v1;
}


// CDOTAMsg_SendStatPopup::Clear  (line 1999, @0x0000000001c6cac0, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, clear, memset, size
// calls: std::string::_M_mutate(ulong,ulong,ulong), google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CDOTAClientMsg_SendStatPopup::Clear, CDOTAUserMsg_SendStatPopup::Clear
void __fastcall CDOTAMsg_SendStatPopup::Clear(CDOTAMsg_SendStatPopup *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  std::string *v4; // rdi
  bool v5; // zf

  v2 = 0;
  v3 = 0;
  *(this + 16) = 0;
  while ( v3 < *(this + 8) )
  {
    ++v3;
    v4 = *(*(this + 3) + v2);
    v2 += 8;
    std::string::_M_mutate(v4, 0, *(v4->_M_dataplus._M_p - 3), 0);
  }
  v5 = *(this + 1) == 0;
  *(this + 8) = 0;
  *(this + 14) = 0;
  *(this + 4) = 0;
  if ( !v5 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMsg_SendStatPopup::MergePartialFromCodedStream  (line 2007, @0x0000000001c71a50, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, AddAlreadyReserved, Advance, EDOTAStatPopupTypes_IsValid, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPackedPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPackedPrimitiveNoInline<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)14u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadRepeatedPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, add_stat_strings, set_has_style, set_style
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::UnknownFieldSet::AddVarint(int,ulong), google::protobuf::internal::StringTypeHandlerBase::New(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::PushLimit(int), google::protobuf::io::CodedInputStream::BytesUntilLimit(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::RepeatedField<int>::Reserve, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::io::CodedInputStream::PopLimit(int)
// callers: CDOTAClientMsg_SendStatPopup::MergePartialFromCodedStream, CDOTAUserMsg_SendStatPopup::MergePartialFromCodedStream
bool __fastcall CDOTAMsg_SendStatPopup::MergePartialFromCodedStream(
        CDOTAMsg_SendStatPopup *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v3; // r13
  google::protobuf::UnknownFieldSet *v4; // rbx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::UnknownFieldSet *current_limit; // rcx
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  unsigned int v9; // eax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  google::protobuf::uint8 v13; // dl
  unsigned int v14; // eax
  google::protobuf::io::CodedInputStream *v15; // rax
  std::string *v16; // rdx
  void **elements; // rsi
  __int64 current_size; // rax
  int allocated_size; // esi
  std::string *v20; // rdx
  const google::protobuf::uint8 *v21; // rax
  int v22; // edx
  int fields; // esi
  int v24; // r15d
  __int64 v25; // rax
  void **v26; // rsi
  const google::protobuf::uint8 *v27; // rax
  const google::protobuf::uint8 *v28; // rax
  int fields_high; // r15d
  __int64 v30; // rax
  void **v31; // rdx
  int v32; // r15d
  int v33; // edx
  __int64 v34; // rax
  void **v35; // rsi
  int v36; // [rsp+Ch] [rbp-54h]
  google::protobuf::RepeatedField<int> *v37; // [rsp+18h] [rbp-48h]
  google::protobuf::UnknownFieldSet v38; // [rsp+28h] [rbp-38h] BYREF

  v3 = this;
  v4 = (this + 8);
  v37 = (this + 48);
  buffer = input->buffer_;
  current_limit = &v38;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
LABEL_2:
    if ( buffer_end <= buffer )
      goto LABEL_12;
LABEL_3:
    v8 = *buffer;
    if ( v8 <= 0 )
      break;
    input->last_tag_ = v8;
    input->buffer_ = buffer + 1;
LABEL_5:
    v9 = v8 >> 3;
    if ( v8 >> 3 == 2 )
    {
      if ( v8 != 18 )
        goto handle_unusual;
      while ( 1 )
      {
LABEL_31:
        current_size = v3[1].current_size_;
        allocated_size = v3[1].allocated_size_;
        if ( current_size >= allocated_size )
        {
          if ( allocated_size == v3[1].total_size_ )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v3 + 1, allocated_size + 1);
          v15 = google::protobuf::internal::StringTypeHandlerBase::New(this);
          v16 = v3[1].current_size_;
          elements = v3[1].elements_;
          ++v3[1].allocated_size_;
          v3[1].current_size_ = v16 + 1;
          elements[v16] = v15;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, v15, v16) == 0 )
            return 0;
        }
        else
        {
          v20 = v3[1].elements_;
          v3[1].current_size_ = current_size + 1;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, v20[current_size]._M_dataplus._M_p, v20) == 0 )
            return 0;
        }
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end )
          break;
        if ( *buffer != 18 )
        {
          if ( *buffer == 24 )
          {
            while ( 1 )
            {
              v28 = buffer + 1;
              input->buffer_ = v28;
parse_stat_images:
              if ( buffer_end <= v28 || *v28 < 0 )
              {
                if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v38.fields_ + 1) == 0 )
                  return 0;
                fields_high = HIDWORD(v38.fields_);
              }
              else
              {
                fields_high = *v28;
                input->buffer_ = v28 + 1;
              }
              v30 = v3[2].current_size_;
              if ( v30 == v3[2].allocated_size_ )
              {
                google::protobuf::RepeatedField<int>::Reserve(v37, v30 + 1);
                v30 = v3[2].current_size_;
              }
              v31 = v3[2].elements_;
              v3[2].current_size_ = v30 + 1;
              *(v31 + v30) = fields_high;
              v32 = v3[2].allocated_size_ - v3[2].current_size_;
              if ( v32 > 0 )
                break;
LABEL_81:
              buffer = input->buffer_;
              buffer_end = input->buffer_end_;
              if ( buffer >= buffer_end || *buffer != 24 )
                goto LABEL_61;
            }
            buffer = input->buffer_;
            for ( buffer_end = input->buffer_end_; buffer < buffer_end; buffer_end = input->buffer_end_ )
            {
              if ( *buffer != 24 )
                break;
              input->buffer_ = buffer + 1;
              if ( buffer_end <= buffer + 1 || ((v33 = buffer[1]) & 0x80u) != 0 )
              {
                if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v38.fields_ + 1) == 0 )
                  return 0;
                v33 = HIDWORD(v38.fields_);
              }
              else
              {
                input->buffer_ = buffer + 2;
              }
              v34 = v3[2].current_size_;
              --v32;
              v35 = v3[2].elements_;
              this = (v34 + 1);
              v3[2].current_size_ = this;
              *(v35 + v34) = v33;
              if ( v32 == 0 )
                goto LABEL_81;
              buffer = input->buffer_;
            }
LABEL_61:
            if ( buffer == buffer_end )
            {
              if ( input->buffer_size_after_limit_ != 0
                || (current_limit = input->current_limit_, input->total_bytes_read_ == current_limit) )
              {
                input->last_tag_ = 0;
                input->legitimate_message_end_ = 1;
                return 1;
              }
            }
          }
          goto LABEL_2;
        }
        input->buffer_ = buffer + 1;
      }
    }
    else
    {
      if ( v9 == 3 )
      {
        if ( v8 == 24 )
        {
          v28 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_stat_images;
        }
        if ( v8 != 26 )
        {
handle_unusual:
          if ( v8 == 0 )
            return 1;
          goto LABEL_9;
        }
        v21 = input->buffer_;
        if ( v21 >= input->buffer_end_ || ((v22 = *v21) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v38) == 0 )
            return 0;
          fields = v38.fields_;
        }
        else
        {
          LODWORD(v38.fields_) = *v21;
          fields = v22;
          input->buffer_ = v21 + 1;
        }
        v36 = google::protobuf::io::CodedInputStream::PushLimit(input, fields);
        while ( 2 )
        {
          if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
          {
            google::protobuf::io::CodedInputStream::PopLimit(input, v36);
            goto LABEL_81;
          }
          v27 = input->buffer_;
          if ( v27 < input->buffer_end_ && *v27 >= 0 )
          {
            v24 = *v27;
            input->buffer_ = v27 + 1;
            v25 = v3[2].current_size_;
            if ( v25 == v3[2].allocated_size_ )
              goto LABEL_47;
          }
          else
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v38.fields_ + 1) == 0 )
              return 0;
            v25 = v3[2].current_size_;
            v24 = HIDWORD(v38.fields_);
            if ( v25 == v3[2].allocated_size_ )
            {
LABEL_47:
              google::protobuf::RepeatedField<int>::Reserve(v37, v25 + 1);
              v25 = v3[2].current_size_;
            }
          }
          v26 = v3[2].elements_;
          v3[2].current_size_ = v25 + 1;
          *(v26 + v25) = v24;
          continue;
        }
      }
      if ( v9 != 1 || v8 != 8 )
        goto handle_unusual;
      v12 = input->buffer_;
      if ( v12 >= input->buffer_end_ || (v13 = *v12, *v12 < 0) )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v38.fields_ + 1);
        if ( !result )
          return result;
        v14 = HIDWORD(v38.fields_);
      }
      else
      {
        input->buffer_ = v12 + 1;
        v14 = v13;
      }
      if ( v14 <= 3 )
      {
        v3->total_size_ |= 1u;
        v3[2].total_size_ = v14;
      }
      else
      {
        google::protobuf::UnknownFieldSet::AddVarint(v4, 1, v14);
      }
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 18 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_31;
      }
    }
  }
  while ( 1 )
  {
LABEL_12:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v8 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      goto LABEL_5;
    if ( TagFallback == 0 )
      return 1;
LABEL_9:
    if ( (v8 & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v8, v4, current_limit) == 0 )
      return 0;
    buffer = input->buffer_;
    if ( input->buffer_end_ > buffer )
      goto LABEL_3;
  }
}


// CDOTAMsg_SendStatPopup::SerializeWithCachedSizes  (line 2096, @0x0000000001c6c6b0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, empty, stat_images, stat_strings
// calls: google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMsg_SendStatPopup::SerializeWithCachedSizes(
        const CDOTAMsg_SendStatPopup *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // r12
  google::protobuf::io::CodedOutputStream *v7; // rcx
  __int64 v8; // r12
  _QWORD *v9; // rax

  if ( (*(this + 16) & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteEnum(&loc_0 + 1, *(this + 16), output, v3);
  for ( i = 0; i < *(this + 8); ++i )
    google::protobuf::internal::WireFormatLite::WriteString(&loc_2, *(*(this + 3) + 8 * i), output, v3);
  v7 = *(this + 14);
  v8 = 0;
  if ( v7 > 0 )
  {
    do
      google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(*(this + 6) + 4 * v8++), output, v7);
    while ( *(this + 14) > v8 );
  }
  v9 = *(this + 1);
  if ( v9 != 0 && v9[1] != *v9 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAMsg_SendStatPopup::SerializeWithCachedSizesToArray  (line 2128, @0x0000000001c6d5c0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, WriteEnumNoTagToArray, WriteEnumToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, stat_images, stat_strings
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTAClientMsg_SendStatPopup::SerializeWithCachedSizesToArray, CDOTAUserMsg_SendStatPopup::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMsg_SendStatPopup::SerializeWithCachedSizesToArray(
        const CDOTAMsg_SendStatPopup *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::uint8 *result; // rax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  __int64 v7; // r13
  int v8; // r12d
  unsigned __int8 *v9; // rdx
  google::protobuf::io::CodedOutputStream *v10; // rdi
  __int64 v11; // r13
  int v12; // r12d
  unsigned __int8 *v13; // rdx
  google::protobuf::uint8 *v14; // rsi
  google::protobuf::io::CodedOutputStream *v15; // rdi
  __int64 v16; // rdx

  result = target;
  if ( (*(this + 16) & 1) != 0 )
  {
    v5 = *(this + 16);
    v6 = target + 1;
    *(v6 - 1) = 8;
    if ( v5 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v5, v6, v2);
    }
    else if ( v5 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v5, v6, v2);
    }
    else
    {
      result[1] = v5;
      result += 2;
    }
  }
  if ( *(this + 8) > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(this + 3);
      ++v8;
      v10 = *&v9[v7];
      *result = 18;
      v7 += 8;
      result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v10, (result + 1), v9);
    }
    while ( v8 < *(this + 8) );
  }
  if ( *(this + 14) > 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = *(this + 6);
      v14 = result + 1;
      v15 = *&v13[v11];
      *result = 24;
      if ( v15 < 0 )
        break;
      if ( v15 <= 0x7F )
      {
        result[1] = v15;
        result += 2;
LABEL_11:
        ++v12;
        v11 += 4;
        if ( v12 >= *(this + 14) )
          goto LABEL_15;
      }
      else
      {
        result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v15, v14, v13);
        ++v12;
        v11 += 4;
        if ( v12 >= *(this + 14) )
          goto LABEL_15;
      }
    }
    result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v15, v14, v13);
    goto LABEL_11;
  }
LABEL_15:
  v16 = *(this + 1);
  if ( v16 != 0 && *(v16 + 8) != *v16 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v16);
  return result;
}


// CDOTAMsg_SendStatPopup::ByteSize  (line 2161, @0x0000000001c6cb50, libserver.so)  // inlines: EnumSize, Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Int32Size, StringSize, VarintSize32, VarintSize32SignExtended, empty, size, stat_images, stat_strings
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTAClientMsg_SendStatPopup::ByteSize, CDOTAUserMsg_SendStatPopup::ByteSize
int __fastcall CDOTAMsg_SendStatPopup::ByteSize(const CDOTAMsg_SendStatPopup *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v2; // r15d
  int v4; // eax
  int v5; // eax
  int v6; // r15d
  __int64 v7; // r13
  int v8; // ebx
  _QWORD *v9; // r14
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  int v12; // edx
  int v13; // edx
  __int64 v14; // rbx
  int v15; // r13d
  google::protobuf::io::CodedOutputStream *v16; // rdi
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rax
  int v20; // r15d
  google::protobuf::io::CodedOutputStream *v22; // rdi

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v22 = *(this + 16);
    LOBYTE(v2) = 11;
    if ( v22 >= 0 )
    {
      LOBYTE(v2) = 2;
      if ( v22 > 0x7F )
        v2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, v1) + 1;
    }
  }
  v5 = *(this + 8);
  v6 = v5 + v2;
  if ( v5 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(*(this + 3) + v7);
      v10 = *(*v9 - 24LL);
      v11 = 1;
      v12 = v10;
      if ( v10 > 0x7F )
      {
        v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
        v12 = *(*v9 - 24LL);
      }
      ++v8;
      v7 += 8;
      v6 += v12 + v11;
    }
    while ( v8 < *(this + 8) );
  }
  v13 = *(this + 14);
  if ( v13 <= 0 )
  {
    v15 = 0;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = *(*(this + 6) + 4 * v14);
        v17 = 10;
        if ( v16 >= 0 )
        {
          LOBYTE(v17) = 1;
          if ( v16 > 0x7F )
            break;
        }
        v15 += v17;
        if ( ++v14 >= v13 )
          goto LABEL_14;
      }
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, v1);
      v13 = *(this + 14);
      v15 += v18;
      ++v14;
    }
    while ( v14 < v13 );
  }
LABEL_14:
  v19 = *(this + 1);
  v20 = v13 + v15 + v6;
  if ( v19 != 0 && v19[1] != *v19 )
    v20 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v20;
  return v20;
}


// CDOTAMsg_SendStatPopup::MergeFrom  (line 2200, @0x0000000001c71540, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMsg_SendStatPopup*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMsg_SendStatPopup::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMsg_SendStatPopup
void __fastcall CDOTAMsg_SendStatPopup::MergeFrom(
        CDOTAMsg_SendStatPopup *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMsg_SendStatPopup *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      2201);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMsg_SendStatPopup, 0)) != 0 )
  {
    CDOTAMsg_SendStatPopup::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMsg_SendStatPopup::MergeFrom  (line 2212, @0x0000000001c71230, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, CopyArray, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, memcpy, operator(), operator=, set_has_style, set_style
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::internal::StringTypeHandlerBase::New(void), std::string::assign(std::string const&), google::protobuf::RepeatedField<int>::Reserve, memcpy, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMsg_SendStatPopup::CDOTAMsg_SendStatPopup, CDOTAMsg_SendStatPopup::MergeFrom, CDOTAMsg_SendStatPopup::CopyFrom, CDOTAClientMsg_SendStatPopup::MergeFrom, CDOTAUserMsg_SendStatPopup::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMsg_SendStatPopup::MergeFrom(
        CDOTAMsg_SendStatPopup *const this,
        const CDOTAMsg_SendStatPopup *const from)
{
  google::protobuf::internal::StringTypeHandlerBase *v4; // rdi
  __int64 v5; // r13
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  std::string *v10; // rdi
  const std::string *v11; // rsi
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rdx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v22; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      2213);
    v19 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v19);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v20 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v20);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 1, *(from + 8) + *(this + 8));
  if ( *(from + 8) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v12 = *(this + 8);
      v13 = *(this + 9);
      if ( v12 >= v13 )
      {
        if ( v13 == *(this + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 1, v13 + 1);
        v7 = google::protobuf::internal::StringTypeHandlerBase::New(v4);
        v8 = *(this + 8);
        v9 = *(this + 3);
        v10 = v7;
        ++*(this + 9);
        *(this + 8) = v8 + 1;
        *(v9 + 8 * v8) = v7;
      }
      else
      {
        v14 = *(this + 3);
        *(this + 8) = v12 + 1;
        v10 = *(v14 + 8 * v12);
      }
      ++v6;
      v11 = *(*(from + 3) + v5);
      v5 += 8;
      std::string::assign(v10, v11);
    }
    while ( v6 < *(from + 8) );
  }
  if ( this + 48 == from + 48 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v18 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v18);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  v15 = *(from + 14);
  if ( v15 != 0 )
  {
    google::protobuf::RepeatedField<int>::Reserve(this + 3, *(this + 14) + v15);
    memcpy((*(this + 6) + 4LL * *(this + 14)), *(from + 6), 4LL * *(from + 14));
    *(this + 14) += *(from + 14);
  }
  v16 = *(from + 4);
  if ( v16 != 0 && (v16 & 1) != 0 )
  {
    v17 = *(from + 16);
    *(this + 4) |= 1u;
    *(this + 16) = v17;
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMsg_SendStatPopup::CopyFrom  (line 2224, @0x0000000001c6bde0, libserver.so)
void __fastcall CDOTAMsg_SendStatPopup::CopyFrom(
        CDOTAMsg_SendStatPopup *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMsg_SendStatPopup::CopyFrom  (line 2230, @0x0000000001c71620, libserver.so)
// calls: CDOTAMsg_SendStatPopup::MergeFrom
// callers: CDOTAGamerules::ClientMsg_SendStatPopup
void __fastcall CDOTAMsg_SendStatPopup::CopyFrom(
        CDOTAMsg_SendStatPopup *const this,
        const CDOTAMsg_SendStatPopup *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMsg_SendStatPopup::MergeFrom(this, from);
  }
}


// CDOTAMsg_SendStatPopup::IsInitialized  (line 2236, @0x0000000001c6be20, libserver.so)
bool __fastcall CDOTAMsg_SendStatPopup::IsInitialized(const CDOTAMsg_SendStatPopup *const this)
{
  return 1;
}


// CDOTAMsg_SendStatPopup::Swap  (line 2241, @0x0000000001c6ffb0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTAMsg_SendStatPopup::Swap(CDOTAMsg_SendStatPopup *const this, CDOTAMsg_SendStatPopup *other)
{
  int v4; // edx
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // rdi
  int total_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v7; // rsi
  __int64 v8; // rcx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( other != this )
  {
    v4 = *(other + 16);
    v5 = (this + 24);
    total_size = v5[1].total_size_;
    v7 = (other + 24);
    v5[1].total_size_ = v4;
    v7[1].total_size_ = total_size;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v5, v7);
    v8 = *(this + 6);
    v9 = *(this + 14);
    v10 = *(this + 15);
    *(this + 6) = *(other + 6);
    *(this + 14) = *(other + 14);
    *(this + 15) = *(other + 15);
    *(other + 14) = v9;
    v11 = *(other + 4);
    *(other + 6) = v8;
    *(other + 15) = v10;
    v12 = *(this + 4);
    *(this + 4) = v11;
    v13 = *(other + 1);
    *(other + 4) = v12;
    v14 = *(this + 1);
    *(this + 1) = v13;
    LODWORD(v13) = *(other + 5);
    *(other + 1) = v14;
    LODWORD(v14) = *(this + 5);
    *(this + 5) = v13;
    *(other + 5) = v14;
  }
}


// CDOTAMsg_SendStatPopup::GetMetadata  (line 2252, @0x0000000001c6d200, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_SendStatPopup_descriptor_, `anonymous namespace'::CDOTAMsg_SendStatPopup_reflection_
google::protobuf::Metadata __fastcall CDOTAMsg_SendStatPopup::GetMetadata(const CDOTAMsg_SendStatPopup *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMsg_SendStatPopup_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMsg_SendStatPopup_reflection_;
  return result;
}


// CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing  (line 2269, @0x0000000001c70130, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_CoachHUDPing::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTAMsg_CoachHUDPing::New, protobuf_AddDesc_dota_5fcommonmessages_2eproto, CDOTAUserMsg_CoachHUDPing::MergeFrom, CDOTAUserMsg_CoachHUDPing::MergePartialFromCodedStream
void __fastcall CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing(CDOTAMsg_CoachHUDPing *const this)
{
  *this = off_3F8AFD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMsg_CoachHUDPing::SharedCtor(this);
}


// CDOTAMsg_CoachHUDPing::InitAsDefaultInstance  (line 2275, @0x0000000001c70050, libserver.so)
void __fastcall CDOTAMsg_CoachHUDPing::InitAsDefaultInstance(CDOTAMsg_CoachHUDPing *const this)
{
  ;
}


// CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing  (line 2278, @0x0000000001c70420, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_CoachHUDPing::SharedCtor, CDOTAMsg_CoachHUDPing::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing(
        CDOTAMsg_CoachHUDPing *const this,
        const CDOTAMsg_CoachHUDPing *const from)
{
  *this = off_3F8AFD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMsg_CoachHUDPing::SharedCtor(this);
  CDOTAMsg_CoachHUDPing::MergeFrom(this, from);
}


// CDOTAMsg_CoachHUDPing::SharedCtor  (line 2285, @0x0000000001c70060, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing
void __fastcall CDOTAMsg_CoachHUDPing::SharedCtor(CDOTAMsg_CoachHUDPing *const this)
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
  *(this + 6) = 0;
  *(this + 7) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 4) = v4;
  *(this + 4) = 0;
}


// CDOTAMsg_CoachHUDPing::~CDOTAMsg_CoachHUDPing  (line 2294, @0x0000000001c70240, libserver.so)
// calls: CDOTAMsg_CoachHUDPing::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMsg_CoachHUDPing::~CDOTAMsg_CoachHUDPing
void __fastcall CDOTAMsg_CoachHUDPing::~CDOTAMsg_CoachHUDPing(CDOTAMsg_CoachHUDPing *const this)
{
  *this = off_3F8AFD0;
  CDOTAMsg_CoachHUDPing::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMsg_CoachHUDPing::~CDOTAMsg_CoachHUDPing  (line 2294, @0x0000000001c70280, libserver.so)
// calls: CDOTAMsg_CoachHUDPing::~CDOTAMsg_CoachHUDPing, operator delete
void __fastcall CDOTAMsg_CoachHUDPing::~CDOTAMsg_CoachHUDPing(CDOTAMsg_CoachHUDPing *const this)
{
  CDOTAMsg_CoachHUDPing::~CDOTAMsg_CoachHUDPing(this);
  operator delete(this);
}


// CDOTAMsg_CoachHUDPing::SharedDtor  (line 2299, @0x0000000001c701d0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTAMsg_CoachHUDPing::~CDOTAMsg_CoachHUDPing
void __fastcall CDOTAMsg_CoachHUDPing::SharedDtor(CDOTAMsg_CoachHUDPing *const this)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  _BYTE v6[17]; // [rsp+Fh] [rbp-11h] BYREF

  v1 = *(this + 4);
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


// CDOTAMsg_CoachHUDPing::SetCachedSize  (line 2305, @0x0000000001c6be30, libserver.so)
void __fastcall CDOTAMsg_CoachHUDPing::SetCachedSize(const CDOTAMsg_CoachHUDPing *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMsg_CoachHUDPing::descriptor  (line 2310, @0x0000000001c702a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_CoachHUDPing_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMsg_CoachHUDPing::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMsg_CoachHUDPing_descriptor_;
}


// CDOTAMsg_CoachHUDPing::default_instance  (line 2315, @0x0000000001c70e80, libserver.so)
// calls: protobuf_AddDesc_dota_5fcommonmessages_2eproto
// callers: CDOTAUserMsg_CoachHUDPing::InitAsDefaultInstance, protobuf_AddDesc_dota_5fusermessages_2eproto
// globals: CDOTAMsg_CoachHUDPing::default_instance_
const CDOTAMsg_CoachHUDPing *__cdecl CDOTAMsg_CoachHUDPing::default_instance()
{
  const CDOTAMsg_CoachHUDPing *result; // rax

  result = CDOTAMsg_CoachHUDPing::default_instance_;
  if ( CDOTAMsg_CoachHUDPing::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    return CDOTAMsg_CoachHUDPing::default_instance_;
  }
  return result;
}


// CDOTAMsg_CoachHUDPing::New  (line 2322, @0x0000000001c70190, libserver.so)
// calls: operator new, CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing, operator delete, _Unwind_Resume
CDOTAMsg_CoachHUDPing *__fastcall CDOTAMsg_CoachHUDPing::New(const CDOTAMsg_CoachHUDPing *const this)
{
  CDOTAMsg_CoachHUDPing *v1; // rbx

  v1 = operator new(0x28u);
  CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing(v1);
  return v1;
}


// CDOTAMsg_CoachHUDPing::Clear  (line 2326, @0x0000000001c6c650, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
// callers: CDOTAUserMsg_CoachHUDPing::Clear
void __fastcall CDOTAMsg_CoachHUDPing::Clear(CDOTAMsg_CoachHUDPing *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( (v2 & 7) != 0 )
  {
    *(this + 3) = 0;
    if ( (v2 & 4) != 0 )
      std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMsg_CoachHUDPing::MergePartialFromCodedStream  (line 2351, @0x0000000001c6dbd0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, mutable_tgtpath, set_has_tgtpath, set_has_x, set_has_y
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDOTAUserMsg_CoachHUDPing::MergePartialFromCodedStream
bool __fastcall CDOTAMsg_CoachHUDPing::MergePartialFromCodedStream(
        CDOTAMsg_CoachHUDPing *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int *v3; // r14
  unsigned int *v4; // r13
  unsigned int v6; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  unsigned __int8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  google::protobuf::uint8 *v11; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v14; // rax
  int v15; // eax
  const google::protobuf::uint8 *v16; // rdx
  int v17; // eax

  v3 = (this + 24);
  v4 = (this + 28);
  v6 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
      goto LABEL_12;
LABEL_3:
    v9 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_12:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v10 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_9:
        if ( (v10 & 7) == 4 )
          return 1;
        if ( google::protobuf::internal::WireFormat::SkipField(input, v10, v6, buffer_end) == 0 )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer_end > buffer )
          goto LABEL_3;
      }
    }
    else
    {
      v10 = v9;
      input->last_tag_ = v9;
      input->buffer_ = buffer + 1;
    }
    v11 = (v10 >> 3);
    if ( v11 == 2 )
    {
      if ( v10 != 16 )
        break;
      v16 = input->buffer_;
      buffer_end = input->buffer_end_;
      goto parse_y;
    }
    if ( v11 == 3 )
    {
      if ( v10 != 26 )
        break;
      goto parse_tgtpath;
    }
    if ( v11 != 1 || v10 != 8 )
      break;
    v14 = input->buffer_;
    if ( v14 >= input->buffer_end_ || ((v15 = *v14) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v3) == 0 )
        return 0;
    }
    else
    {
      *(this + 6) = v15;
      ++input->buffer_;
    }
    *(this + 4) |= 1u;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v16 = buffer + 1;
      input->buffer_ = v16;
parse_y:
      if ( buffer_end <= v16 || ((v17 = *v16) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *(this + 7) = v17;
        ++input->buffer_;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 26 )
      {
        v11 = (buffer + 1);
        input->buffer_ = v11;
parse_tgtpath:
        *(this + 4) |= 4u;
        result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), v11);
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
  }
  if ( v10 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTAMsg_CoachHUDPing::SerializeWithCachedSizes  (line 2429, @0x0000000001c6c790, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMsg_CoachHUDPing::SerializeWithCachedSizes(
        const CDOTAMsg_CoachHUDPing *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 6), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
LABEL_9:
      google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 1, *(this + 4), output, v3);
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


// CDOTAMsg_CoachHUDPing::SerializeWithCachedSizesToArray  (line 2459, @0x0000000001c6cc90, libserver.so)  // inlines: WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CDOTAUserMsg_CoachHUDPing::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMsg_CoachHUDPing::SerializeWithCachedSizesToArray(
        const CDOTAMsg_CoachHUDPing *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  const std::string *v8; // rsi
  __int64 v9; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 6);
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
    v7 = *(this + 4);
    v8 = (target + 1);
    HIBYTE(v8[-1]._M_dataplus._M_p) = 26;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v7, v8, v2);
  }
  v9 = *(this + 1);
  if ( v9 == 0 || *(v9 + 8) == *v9 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v9);
}


// CDOTAMsg_CoachHUDPing::ByteSize  (line 2491, @0x0000000001c6c4f0, libserver.so)  // inlines: StringSize, UInt32Size, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAUserMsg_CoachHUDPing::ByteSize
int __fastcall CDOTAMsg_CoachHUDPing::ByteSize(const CDOTAMsg_CoachHUDPing *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v10; // r13
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    LOBYTE(v5) = *(this + 4);
    if ( (v4 & 1) != 0 )
    {
      v6 = *(this + 6);
      LOBYTE(v3) = 2;
      if ( v6 > 0x7F )
      {
        v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v3 = v14 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v7 = *(this + 7);
      if ( v7 > 0x7F )
      {
        v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
        v5 = *(this + 4);
        v3 += v15 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v10 = *(this + 4);
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


// CDOTAMsg_CoachHUDPing::MergeFrom  (line 2528, @0x0000000001c70490, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMsg_CoachHUDPing*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMsg_CoachHUDPing::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMsg_CoachHUDPing
void __fastcall CDOTAMsg_CoachHUDPing::MergeFrom(
        CDOTAMsg_CoachHUDPing *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMsg_CoachHUDPing *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      2529);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMsg_CoachHUDPing, 0)) != 0 )
  {
    CDOTAMsg_CoachHUDPing::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMsg_CoachHUDPing::MergeFrom  (line 2540, @0x0000000001c70330, libserver.so)  // inlines: set_has_tgtpath, set_has_x, set_has_y, set_tgtpath, set_x, set_y
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMsg_CoachHUDPing::CDOTAMsg_CoachHUDPing, CDOTAMsg_CoachHUDPing::MergeFrom, CDOTAMsg_CoachHUDPing::CopyFrom, CDOTAUserMsg_CoachHUDPing::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMsg_CoachHUDPing::MergeFrom(
        CDOTAMsg_CoachHUDPing *const this,
        const CDOTAMsg_CoachHUDPing *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
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
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      2541);
    v9 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v10, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
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
      v7 = *(from + 4);
      v8 = *(this + 4);
      *(this + 4) |= 4u;
      std::string::assign(v8, v7);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMsg_CoachHUDPing::CopyFrom  (line 2556, @0x0000000001c6be40, libserver.so)
void __fastcall CDOTAMsg_CoachHUDPing::CopyFrom(
        CDOTAMsg_CoachHUDPing *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMsg_CoachHUDPing::CopyFrom  (line 2562, @0x0000000001c70570, libserver.so)
// calls: CDOTAMsg_CoachHUDPing::MergeFrom
void __fastcall CDOTAMsg_CoachHUDPing::CopyFrom(
        CDOTAMsg_CoachHUDPing *const this,
        const CDOTAMsg_CoachHUDPing *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMsg_CoachHUDPing::MergeFrom(this, from);
  }
}


// CDOTAMsg_CoachHUDPing::IsInitialized  (line 2568, @0x0000000001c6be80, libserver.so)
bool __fastcall CDOTAMsg_CoachHUDPing::IsInitialized(const CDOTAMsg_CoachHUDPing *const this)
{
  return 1;
}


// CDOTAMsg_CoachHUDPing::Swap  (line 2573, @0x0000000001c705b0, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMsg_CoachHUDPing::Swap(CDOTAMsg_CoachHUDPing *const this, CDOTAMsg_CoachHUDPing *other)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    v3 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v3;
    v4 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v4;
    LODWORD(v4) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v4;
    v5 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v5;
    LODWORD(v5) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v5;
  }
}


// CDOTAMsg_CoachHUDPing::GetMetadata  (line 2584, @0x0000000001c6d2a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_CoachHUDPing_descriptor_, `anonymous namespace'::CDOTAMsg_CoachHUDPing_reflection_
google::protobuf::Metadata __fastcall CDOTAMsg_CoachHUDPing::GetMetadata(const CDOTAMsg_CoachHUDPing *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMsg_CoachHUDPing_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMsg_CoachHUDPing_reflection_;
  return result;
}


// CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder  (line 2606, @0x0000000001c70680, libserver.so)  // inlines: RepeatedField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_UnitOrder::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMsg_UnitOrder::New, protobuf_AddDesc_dota_5fcommonmessages_2eproto, CDOTAClientMsg_ExecuteOrders::MergeFrom, CDOTAClientMsg_ExecuteOrders::MergePartialFromCodedStream
void __fastcall CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder(CDOTAMsg_UnitOrder *const this)
{
  *this = off_3F8B090;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  CDOTAMsg_UnitOrder::SharedCtor(this);
}


// CDOTAMsg_UnitOrder::InitAsDefaultInstance  (line 2612, @0x0000000001c70610, libserver.so)
// calls: CMsgVector::default_instance
void __fastcall CDOTAMsg_UnitOrder::InitAsDefaultInstance(CDOTAMsg_UnitOrder *const this)
{
  *(this + 7) = CMsgVector::default_instance();
}


// CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder  (line 2616, @0x0000000001c718a0, libserver.so)  // inlines: RepeatedField, ~RepeatedField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMsg_UnitOrder::SharedCtor, CDOTAMsg_UnitOrder::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, operator delete [], google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder(
        CDOTAMsg_UnitOrder *const this,
        const CDOTAMsg_UnitOrder *const from)
{
  *this = off_3F8B090;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  CDOTAMsg_UnitOrder::SharedCtor(this);
  CDOTAMsg_UnitOrder::MergeFrom(this, from);
}


// CDOTAMsg_UnitOrder::SharedCtor  (line 2623, @0x0000000001c70630, libserver.so)  // inlines: memset
// callers: CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder
void __fastcall CDOTAMsg_UnitOrder::SharedCtor(CDOTAMsg_UnitOrder *const this)
{
  *(this + 5) = 0;
  *(this + 6) = -1;
  *(this + 7) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 7) = 0;
  *(this + 64) = 0;
  *(this + 17) = 0;
  *(this + 4) = 0;
}


// CDOTAMsg_UnitOrder::~CDOTAMsg_UnitOrder  (line 2635, @0x0000000001c6c5d0, libserver.so)  // inlines: SharedDtor, ~RepeatedField
// calls: operator delete [], google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMsg_UnitOrder::~CDOTAMsg_UnitOrder
// globals: CDOTAMsg_UnitOrder::default_instance_
void __fastcall CDOTAMsg_UnitOrder::~CDOTAMsg_UnitOrder(CDOTAMsg_UnitOrder *const this)
{
  __int64 v2; // rdi
  void *v3; // rdi

  *this = off_3F8B090;
  if ( this != CDOTAMsg_UnitOrder::default_instance_ )
  {
    v2 = *(this + 7);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
  }
  v3 = *(this + 4);
  if ( v3 != 0 )
    operator delete[](v3);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMsg_UnitOrder::~CDOTAMsg_UnitOrder  (line 2635, @0x0000000001c6c630, libserver.so)
// calls: CDOTAMsg_UnitOrder::~CDOTAMsg_UnitOrder, operator delete
void __fastcall CDOTAMsg_UnitOrder::~CDOTAMsg_UnitOrder(CDOTAMsg_UnitOrder *const this)
{
  CDOTAMsg_UnitOrder::~CDOTAMsg_UnitOrder(this);
  operator delete(this);
}


// CDOTAMsg_UnitOrder::SharedDtor  (line 2640, @0x0000000001c71080, libserver.so)
// globals: CDOTAMsg_UnitOrder::default_instance_
void __fastcall CDOTAMsg_UnitOrder::SharedDtor(CDOTAMsg_UnitOrder *const this)
{
  __int64 v1; // rdi

  if ( this != CDOTAMsg_UnitOrder::default_instance_ )
  {
    v1 = *(this + 7);
    if ( v1 != 0 )
      (*(*v1 + 8LL))(v1);
  }
}


// CDOTAMsg_UnitOrder::SetCachedSize  (line 2646, @0x0000000001c6be90, libserver.so)
void __fastcall CDOTAMsg_UnitOrder::SetCachedSize(const CDOTAMsg_UnitOrder *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMsg_UnitOrder::descriptor  (line 2651, @0x0000000001c710b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_UnitOrder_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMsg_UnitOrder::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMsg_UnitOrder_descriptor_;
}


// CDOTAMsg_UnitOrder::default_instance  (line 2656, @0x0000000001c71140, libserver.so)
// calls: protobuf_AddDesc_dota_5fcommonmessages_2eproto
// globals: CDOTAMsg_UnitOrder::default_instance_
const CDOTAMsg_UnitOrder *__cdecl CDOTAMsg_UnitOrder::default_instance()
{
  const CDOTAMsg_UnitOrder *result; // rax

  result = CDOTAMsg_UnitOrder::default_instance_;
  if ( CDOTAMsg_UnitOrder::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fcommonmessages_2eproto();
    return CDOTAMsg_UnitOrder::default_instance_;
  }
  return result;
}


// CDOTAMsg_UnitOrder::New  (line 2663, @0x0000000001c706e0, libserver.so)
// calls: operator new, CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder, operator delete, _Unwind_Resume
CDOTAMsg_UnitOrder *__fastcall CDOTAMsg_UnitOrder::New(const CDOTAMsg_UnitOrder *const this)
{
  CDOTAMsg_UnitOrder *v1; // rbx

  v1 = operator new(0x48u);
  CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder(v1);
  return v1;
}


// CDOTAMsg_UnitOrder::Clear  (line 2667, @0x0000000001c71f20, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), CMsgVector::Clear
void __fastcall CDOTAMsg_UnitOrder::Clear(CDOTAMsg_UnitOrder *const this)
{
  int v2; // eax
  bool v3; // zf
  CMsgVector *v4; // rdi

  v2 = *(this + 4);
  if ( (v2 & 0xFB) != 0 )
  {
    *(this + 6) = 0;
    *(this + 8) = 0;
    *(this + 6) = -1;
    *(this + 7) = 0;
    if ( (v2 & 0x20) != 0 )
    {
      v4 = *(this + 7);
      if ( v4 != 0 )
        CMsgVector::Clear(v4);
    }
  }
  v3 = *(this + 1) == 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMsg_UnitOrder::MergePartialFromCodedStream  (line 2696, @0x0000000001c71fa0, libserver.so)  // inlines: Add, AddAlreadyReserved, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CMsgVector>, ReadPackedPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPackedPrimitiveNoInline<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)14u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)17u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadRepeatedPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, ZigZagDecode32, dotaunitorder_t_IsValid, mutable_position, set_has_ability_index, set_has_issuer, set_has_order_type, set_has_position, set_has_queue, set_has_sequence_number, set_has_target_index, set_order_type
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::PushLimit(int), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::UnknownFieldSet::AddVarint(int,ulong), CMsgVector::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::BytesUntilLimit(void), operator new, CMsgVector::CMsgVector, google::protobuf::RepeatedField<int>::Reserve (14 total)
// callers: CDOTAClientMsg_ExecuteOrders::MergePartialFromCodedStream
// globals: jpt_1C72018
bool __fastcall CDOTAMsg_UnitOrder::MergePartialFromCodedStream(
        CDOTAMsg_UnitOrder *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // r13
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint8 *current_limit; // rcx
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  bool result; // al
  const google::protobuf::uint8 *v10; // rax
  unsigned __int64 v11; // rdx
  const google::protobuf::uint8 *v12; // rax
  CMsgVector *v13; // rcx
  const google::protobuf::uint8 *v14; // rax
  int v15; // eax
  bool v16; // cc
  const google::protobuf::uint8 *v17; // rax
  int v18; // edx
  const google::protobuf::uint8 *v19; // rax
  google::protobuf::uint8 v20; // dl
  unsigned int v21; // eax
  const google::protobuf::uint8 *v22; // rax
  const google::protobuf::uint8 *v23; // rax
  unsigned int v24; // edx
  const google::protobuf::uint8 *v25; // rcx
  int v26; // eax
  const google::protobuf::uint8 *v27; // rax
  int v28; // edx
  int v29; // esi
  google::protobuf::uint32 TagFallback; // eax
  int v31; // edx
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // r15d
  char v36; // al
  char Varint32Fallback; // al
  int v38; // r15d
  int recursion_depth; // eax
  int v40; // r15d
  __int64 v41; // rax
  __int64 v42; // rcx
  const google::protobuf::uint8 *v43; // rax
  CMsgVector *v44; // r15
  google::protobuf::uint8 v45; // al
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // [rsp+8h] [rbp-58h]
  CMsgVector *v50; // [rsp+8h] [rbp-58h]
  CMsgVector *v51; // [rsp+8h] [rbp-58h]
  google::protobuf::RepeatedField<int> *v52; // [rsp+18h] [rbp-48h]
  int v53; // [rsp+24h] [rbp-3Ch] BYREF
  unsigned __int64 v54[7]; // [rsp+28h] [rbp-38h] BYREF

  v2 = (this + 8);
  v52 = (this + 32);
  buffer = input->buffer_;
  current_limit = &v53;
  buffer_end = input->buffer_end_;
LABEL_2:
  while ( 2 )
  {
    while ( 1 )
    {
      if ( buffer < buffer_end )
      {
        v8 = *buffer;
        if ( v8 > 0 )
          break;
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
      result = google::protobuf::internal::WireFormat::SkipField(input, v8, v2, current_limit);
      if ( !result )
        return result;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    input->last_tag_ = v8;
    input->buffer_ = buffer + 1;
LABEL_5:
    switch ( v8 >> 3 )
    {
      case 1u:
        if ( v8 != 8 )
          goto handle_unusual;
        v23 = input->buffer_;
        if ( v23 < input->buffer_end_ )
        {
          v24 = *v23;
          if ( (v24 & 0x80u) == 0 )
          {
            input->buffer_ = v23 + 1;
LABEL_49:
            *(this + 4) |= 1u;
            *(this + 6) = (v24 >> 1) ^ -(v24 & 1);
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer < buffer_end && *buffer == 16 )
            {
              v19 = buffer + 1;
              input->buffer_ = v19;
              goto parse_order_type;
            }
            continue;
          }
        }
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54);
        if ( result )
        {
          v24 = v54[0];
          goto LABEL_49;
        }
        return result;
      case 2u:
        if ( v8 != 16 )
          goto handle_unusual;
        v19 = input->buffer_;
        buffer_end = input->buffer_end_;
parse_order_type:
        if ( buffer_end <= v19 || (v20 = *v19, *v19 < 0) )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54);
          if ( !result )
            return result;
          v21 = v54[0];
        }
        else
        {
          input->buffer_ = v19 + 1;
          v21 = v20;
        }
        if ( v21 > 0x21 )
        {
          google::protobuf::UnknownFieldSet::AddVarint(v2, 2, v21);
        }
        else
        {
          *(this + 4) |= 2u;
          *(this + 7) = v21;
        }
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end && *buffer == 24 )
        {
          v22 = buffer + 1;
          input->buffer_ = v22;
          goto parse_units;
        }
        continue;
      case 3u:
        if ( v8 == 24 )
        {
          v22 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_units;
        }
        if ( v8 != 26 )
        {
handle_unusual:
          if ( v8 == 0 )
            return 1;
          goto LABEL_8;
        }
        v27 = input->buffer_;
        if ( v27 >= input->buffer_end_ || ((v28 = *v27) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v53) == 0 )
            return 0;
          v29 = v53;
        }
        else
        {
          v53 = *v27;
          v29 = v28;
          input->buffer_ = v27 + 1;
        }
        v49 = google::protobuf::io::CodedInputStream::PushLimit(input, v29);
        while ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
        {
          v43 = input->buffer_;
          if ( v43 < input->buffer_end_ && *v43 >= 0 )
          {
            v40 = *v43;
            input->buffer_ = v43 + 1;
          }
          else
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54) == 0 )
              return 0;
            v40 = v54[0];
          }
          v41 = *(this + 10);
          if ( v41 == *(this + 11) )
          {
            google::protobuf::RepeatedField<int>::Reserve(v52, v41 + 1);
            v41 = *(this + 10);
          }
          v42 = *(this + 4);
          *(this + 10) = v41 + 1;
          *(v42 + 4 * v41) = v40;
        }
        google::protobuf::io::CodedInputStream::PopLimit(input, v49);
        do
        {
LABEL_135:
          current_limit = input->buffer_;
          buffer_end = input->buffer_end_;
          buffer = current_limit;
          if ( current_limit >= buffer_end )
            goto LABEL_2;
          v36 = *current_limit;
          if ( *current_limit != 24 )
            goto LABEL_87;
          v22 = current_limit + 1;
          input->buffer_ = current_limit + 1;
parse_units:
          if ( v22 >= buffer_end || *v22 < 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54) == 0 )
              return 0;
            v32 = v54[0];
          }
          else
          {
            v32 = *v22;
            input->buffer_ = v22 + 1;
          }
          v33 = *(this + 10);
          if ( v33 == *(this + 11) )
          {
            google::protobuf::RepeatedField<int>::Reserve(v52, v33 + 1);
            v33 = *(this + 10);
          }
          v34 = *(this + 4);
          *(this + 10) = v33 + 1;
          *(v34 + 4 * v33) = v32;
          v35 = *(this + 11) - *(this + 10);
        }
        while ( v35 <= 0 );
        current_limit = input->buffer_;
        buffer_end = input->buffer_end_;
        buffer = current_limit;
        if ( buffer_end > current_limit )
        {
          while ( 1 )
          {
            v36 = *current_limit;
            if ( *current_limit != 24 )
              break;
            input->buffer_ = current_limit + 1;
            if ( buffer_end <= current_limit + 1 || ((v45 = current_limit[1]) & 0x80u) != 0 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54) == 0 )
                return 0;
              v46 = v54[0];
            }
            else
            {
              input->buffer_ = current_limit + 2;
              v46 = v45;
            }
            v47 = *(this + 10);
            --v35;
            v48 = *(this + 4);
            *(this + 10) = v47 + 1;
            *(v48 + 4 * v47) = v46;
            if ( v35 == 0 )
              goto LABEL_135;
            current_limit = input->buffer_;
            buffer_end = input->buffer_end_;
            buffer = current_limit;
            if ( current_limit >= buffer_end )
              goto LABEL_2;
          }
LABEL_87:
          if ( v36 == 32 )
          {
            v25 = current_limit + 1;
            input->buffer_ = v25;
parse_target_index:
            if ( buffer_end <= v25 || ((v26 = *v25) & 0x80u) != 0 )
            {
              result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54);
              if ( !result )
                return result;
              v26 = v54[0];
            }
            else
            {
              current_limit = (v25 + 1);
              input->buffer_ = current_limit;
            }
            *(this + 4) |= 8u;
            *(this + 12) = v26;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer < buffer_end && *buffer == 40 )
            {
              v17 = buffer + 1;
              input->buffer_ = v17;
parse_ability_index:
              if ( v17 >= buffer_end || ((v18 = *v17) & 0x80u) != 0 )
              {
                result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54);
                if ( !result )
                  return result;
                v18 = v54[0];
              }
              else
              {
                input->buffer_ = v17 + 1;
              }
              *(this + 4) |= 0x10u;
              *(this + 13) = v18;
              buffer = input->buffer_;
              buffer_end = input->buffer_end_;
              if ( buffer < buffer_end && *buffer == 50 )
              {
                input->buffer_ = buffer + 1;
parse_position:
                v13 = *(this + 7);
                *(this + 4) |= 0x20u;
                if ( v13 == 0 )
                {
                  v44 = operator new(0x28u);
                  CMsgVector::CMsgVector(v44);
                  *(this + 7) = v44;
                  v13 = v44;
                }
                v14 = input->buffer_;
                if ( v14 >= input->buffer_end_ || *v14 < 0 )
                {
                  v50 = v13;
                  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54);
                  v13 = v50;
                  if ( Varint32Fallback == 0 )
                    return 0;
                }
                else
                {
                  LODWORD(v54[0]) = *v14;
                  input->buffer_ = v14 + 1;
                }
                v15 = input->recursion_depth_ + 1;
                v16 = input->recursion_limit_ < v15;
                input->recursion_depth_ = v15;
                if ( v16 )
                  return 0;
                v51 = v13;
                v38 = google::protobuf::io::CodedInputStream::PushLimit(input, v54[0]);
                if ( !CMsgVector::MergePartialFromCodedStream(v51, input) || !input->legitimate_message_end_ )
                  return 0;
                google::protobuf::io::CodedInputStream::PopLimit(input, v38);
                recursion_depth = input->recursion_depth_;
                if ( recursion_depth > 0 )
                  input->recursion_depth_ = recursion_depth - 1;
                buffer = input->buffer_;
                buffer_end = input->buffer_end_;
                if ( buffer < buffer_end && *buffer == 56 )
                {
                  v10 = buffer + 1;
                  input->buffer_ = v10;
parse_queue:
                  if ( v10 >= buffer_end || ((v11 = *v10) & 0x80u) != 0LL )
                  {
                    result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v54);
                    if ( !result )
                      return result;
                    v11 = v54[0];
                  }
                  else
                  {
                    input->buffer_ = v10 + 1;
                  }
                  *(this + 64) = v11 != 0;
                  *(this + 4) |= 0x40u;
                  buffer = input->buffer_;
                  buffer_end = input->buffer_end_;
                  if ( buffer < buffer_end && *buffer == 64 )
                  {
                    v12 = buffer + 1;
                    input->buffer_ = v12;
parse_sequence_number:
                    if ( v12 >= buffer_end || ((v31 = *v12) & 0x80u) != 0 )
                    {
                      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v54);
                      if ( !result )
                        return result;
                      v31 = v54[0];
                    }
                    else
                    {
                      input->buffer_ = v12 + 1;
                    }
                    *(this + 4) |= 0x80u;
                    *(this + 17) = v31;
                    buffer = input->buffer_;
                    buffer_end = input->buffer_end_;
                    if ( buffer == buffer_end )
                    {
                      if ( input->buffer_size_after_limit_ != 0
                        || (current_limit = input->current_limit_, input->total_bytes_read_ == current_limit) )
                      {
                        input->last_tag_ = 0;
                        input->legitimate_message_end_ = 1;
                        return 1;
                      }
                      buffer_end = input->buffer_;
                    }
                  }
                }
              }
            }
          }
          else
          {
            buffer = current_limit;
          }
        }
        continue;
      case 4u:
        if ( v8 != 32 )
          goto handle_unusual;
        v25 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_target_index;
      case 5u:
        if ( v8 != 40 )
          goto handle_unusual;
        v17 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_ability_index;
      case 6u:
        if ( v8 == 50 )
          goto parse_position;
        goto handle_unusual;
      case 7u:
        if ( v8 != 56 )
          goto handle_unusual;
        v10 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_queue;
      case 8u:
        if ( v8 != 64 )
          goto handle_unusual;
        v12 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_sequence_number;
      default:
        goto handle_unusual;
    }
  }
}


// CDOTAMsg_UnitOrder::SerializeWithCachedSizes  (line 2854, @0x0000000001c6c830, libserver.so)  // inlines: empty, position, units
// calls: google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteSInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
// globals: CDOTAMsg_UnitOrder::default_instance_
void __fastcall CDOTAMsg_UnitOrder::SerializeWithCachedSizes(
        const CDOTAMsg_UnitOrder *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  __int64 i; // rbx
  int v8; // eax
  __int64 v9; // rsi
  _QWORD *v10; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteSInt32(&loc_0 + 1, *(this + 6), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteEnum(&loc_2, *(this + 7), output, v3);
  for ( i = 0; *(this + 10) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(*(this + 4) + 4 * i), output, v3);
  v8 = *(this + 4);
  if ( (v8 & 8) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 2, *(this + 12), output, v3);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x10) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 3, *(this + 13), output, v3);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x20) != 0 )
  {
    v9 = *(this + 7);
    if ( v9 == 0 )
      v9 = *&CDOTAMsg_UnitOrder::default_instance_->oneof_decl_count_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_6, v9, output, v3);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x40) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_6 + 1, *(this + 64), output, v3);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x80u) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&stru_8, *(this + 17), output, v3);
    v10 = *(this + 1);
    if ( v10 == 0 )
      return;
  }
  else
  {
    v10 = *(this + 1);
    if ( v10 == 0 )
      return;
  }
  if ( v10[1] != *v10 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAMsg_UnitOrder::SerializeWithCachedSizesToArray  (line 2907, @0x0000000001c727b0, libserver.so)  // inlines: GetCachedSize, WriteBoolNoTagToArray, WriteBoolToArray, WriteEnumNoTagToArray, WriteEnumToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CMsgVector>, WriteSInt32NoTagToArray, WriteSInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, ZigZagEncode32, empty, position, units
// calls: google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), CMsgVector::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTAClientMsg_ExecuteOrders::SerializeWithCachedSizesToArray
// globals: CDOTAMsg_UnitOrder::default_instance_
google::protobuf::uint8 *__fastcall CDOTAMsg_UnitOrder::SerializeWithCachedSizesToArray(
        const CDOTAMsg_UnitOrder *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // edi
  unsigned __int8 *v7; // rdx
  google::protobuf::io::CodedOutputStream *v8; // rdi
  unsigned __int8 *v9; // rdx
  google::protobuf::io::CodedOutputStream *v10; // rdi
  google::protobuf::uint8 *v11; // rsi
  __int64 v12; // r13
  int v13; // r12d
  unsigned __int8 *v14; // rdx
  google::protobuf::uint8 *v15; // rsi
  google::protobuf::io::CodedOutputStream *v16; // rdi
  unsigned __int8 *v17; // rdx
  google::protobuf::io::CodedOutputStream *v18; // rdi
  google::protobuf::uint8 *v19; // rsi
  google::protobuf::io::CodedOutputStream *v20; // rdi
  google::protobuf::uint8 *v21; // rsi
  unsigned int *v22; // r12
  google::protobuf::io::CodedOutputStream *v23; // rdi
  google::protobuf::uint8 *v24; // rsi
  google::protobuf::uint8 v25; // dl
  unsigned __int8 *v26; // rdx
  google::protobuf::io::CodedOutputStream *v27; // rdi
  google::protobuf::uint8 *v28; // rsi
  __int64 v29; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 6);
    *target = 8;
    v6 = v5;
    v7 = (2 * v5);
    v8 = (v7 ^ (v6 >> 31));
    if ( v8 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v8, target + 1, v7);
    }
    else
    {
      target[1] = v8;
      result = target + 2;
    }
    v4 = *(this + 4);
  }
  v9 = (v4 & 2);
  if ( v9 != 0 )
  {
    v10 = *(this + 7);
    v11 = result + 1;
    *result = 16;
    if ( v10 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v10, v11, v9);
    }
    else if ( v10 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, v11, v9);
    }
    else
    {
      result[1] = v10;
      result += 2;
    }
  }
  if ( *(this + 10) > 0 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = *(this + 4);
      v15 = result + 1;
      v16 = *&v14[v12];
      *result = 24;
      if ( v16 < 0 )
        break;
      if ( v16 <= 0x7F )
      {
        result[1] = v16;
        result += 2;
LABEL_12:
        ++v13;
        v12 += 4;
        if ( v13 >= *(this + 10) )
          goto LABEL_16;
      }
      else
      {
        result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v16, v15, v14);
        ++v13;
        v12 += 4;
        if ( v13 >= *(this + 10) )
          goto LABEL_16;
      }
    }
    result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v16, v15, v14);
    goto LABEL_12;
  }
LABEL_16:
  v17 = *(this + 4);
  if ( (v17 & 8) != 0 )
  {
    v18 = *(this + 12);
    v19 = result + 1;
    *result = 32;
    if ( v18 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v18, v19, v17);
    }
    else if ( v18 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v18, v19, v17);
    }
    else
    {
      result[1] = v18;
      result += 2;
    }
    v17 = *(this + 4);
  }
  if ( (v17 & 0x10) != 0 )
  {
    v20 = *(this + 13);
    v21 = result + 1;
    *result = 40;
    if ( v20 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v20, v21, v17);
    }
    else if ( v20 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v20, v21, v17);
    }
    else
    {
      result[1] = v20;
      result += 2;
    }
    v17 = *(this + 4);
  }
  if ( (v17 & 0x20) != 0 )
  {
    v22 = *(this + 7);
    if ( v22 == 0 )
    {
      v17 = CDOTAMsg_UnitOrder::default_instance_;
      v22 = *&CDOTAMsg_UnitOrder::default_instance_->oneof_decl_count_;
    }
    *result = 50;
    v23 = v22[5];
    if ( v23 > 0x7F )
    {
      v24 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v23, result + 1, v17);
    }
    else
    {
      result[1] = v23;
      v24 = result + 2;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(v22, v24);
    LODWORD(v17) = *(this + 4);
  }
  if ( (v17 & 0x40) != 0 )
  {
    v25 = *(this + 64);
    *result = 56;
    result += 2;
    *(result - 1) = v25;
    LODWORD(v17) = *(this + 4);
  }
  v26 = (v17 & 0x80);
  if ( v26 != 0 )
  {
    v27 = *(this + 17);
    v28 = result + 1;
    *result = 64;
    if ( v27 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v27, v28, v26);
    }
    else if ( v27 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v27, v28, v26);
    }
    else
    {
      result[1] = v27;
      result += 2;
    }
  }
  v29 = *(this + 1);
  if ( v29 != 0 && *(v29 + 8) != *v29 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v29);
  return result;
}


// CDOTAMsg_UnitOrder::ByteSize  (line 2962, @0x0000000001c72a50, libserver.so)  // inlines: EnumSize, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CMsgVector>, SInt32Size, VarintSize32, VarintSize32SignExtended, ZigZagEncode32, empty, position, units
// calls: CMsgVector::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTAClientMsg_ExecuteOrders::ByteSize
// globals: CDOTAMsg_UnitOrder::default_instance_
int __fastcall CDOTAMsg_UnitOrder::ByteSize(const CDOTAMsg_UnitOrder *const this)
{
  unsigned int v1; // esi
  int v2; // r14d
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  google::protobuf::io::CodedOutputStream *v9; // rdi
  int v10; // eax
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  const CMsgVector *v13; // rdi
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rbx
  int v18; // r12d
  int v19; // eax
  google::protobuf::io::CodedOutputStream *v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  int v23; // r14d
  google::protobuf::io::CodedOutputStream *v25; // rdi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    LOBYTE(v5) = *(this + 4);
    if ( (v4 & 1) != 0 )
    {
      LOBYTE(v2) = 2;
      v6 = ((2 * *(this + 6)) ^ (*(this + 6) >> 31));
      LOBYTE(v5) = v4;
      if ( v6 > 0x7F )
      {
        v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v2 = v27 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v7 = *(this + 7);
      v8 = 11;
      if ( v7 >= 0 )
      {
        LOBYTE(v8) = 2;
        if ( v7 > 0x7F )
        {
          v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
          v5 = *(this + 4);
          v8 = v30 + 1;
        }
      }
      v2 += v8;
    }
    if ( (v5 & 8) != 0 )
    {
      v9 = *(this + 12);
      v10 = 11;
      if ( v9 >= 0 )
      {
        LOBYTE(v10) = 2;
        if ( v9 > 0x7F )
        {
          v29 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
          v5 = *(this + 4);
          v10 = v29 + 1;
        }
      }
      v2 += v10;
    }
    if ( (v5 & 0x10) != 0 )
    {
      v11 = *(this + 13);
      v12 = 11;
      if ( v11 >= 0 )
      {
        LOBYTE(v12) = 2;
        if ( v11 > 0x7F )
        {
          v28 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
          v5 = *(this + 4);
          v12 = v28 + 1;
        }
      }
      v2 += v12;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v13 = *(this + 7);
      if ( v13 == 0 )
        v13 = *&CDOTAMsg_UnitOrder::default_instance_->oneof_decl_count_;
      v14 = CMsgVector::ByteSize(v13);
      v15 = 1;
      if ( v14 > 0x7F )
        v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
      v5 = *(this + 4);
      v2 += v14 + v15 + 1;
    }
    if ( (v5 & 0x40) != 0 )
      v2 += 2;
    if ( (v5 & 0x80) != 0 )
    {
      v25 = *(this + 17);
      v26 = 11;
      if ( v25 >= 0 )
      {
        LOBYTE(v26) = 2;
        if ( v25 > 0x7F )
          v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v25, v1) + 1;
      }
      v2 += v26;
    }
  }
  v16 = *(this + 10);
  if ( v16 <= 0 )
  {
    v18 = 0;
  }
  else
  {
    v17 = 0;
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v19 = 10;
        v20 = *(*(this + 4) + 4 * v17);
        if ( v20 >= 0 )
        {
          LOBYTE(v19) = 1;
          if ( v20 > 0x7F )
            break;
        }
        v18 += v19;
        if ( v16 <= ++v17 )
          goto LABEL_35;
      }
      v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, v1);
      v16 = *(this + 10);
      v18 += v21;
      ++v17;
    }
    while ( v16 > v17 );
  }
LABEL_35:
  v22 = *(this + 1);
  v23 = v16 + v18 + v2;
  if ( v22 != 0 && *(v22 + 8) != *v22 )
    v23 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v22);
  *(this + 5) = v23;
  return v23;
}


// CDOTAMsg_UnitOrder::MergeFrom  (line 3034, @0x0000000001c71930, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMsg_UnitOrder*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMsg_UnitOrder::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMsg_UnitOrder
void __fastcall CDOTAMsg_UnitOrder::MergeFrom(
        CDOTAMsg_UnitOrder *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMsg_UnitOrder *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      3035);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMsg_UnitOrder, 0)) != 0 )
  {
    CDOTAMsg_UnitOrder::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMsg_UnitOrder::MergeFrom  (line 3046, @0x0000000001c71660, libserver.so)  // inlines: CopyArray, MergeFrom, memcpy, mutable_position, operator(), position, set_ability_index, set_has_ability_index, set_has_issuer, set_has_order_type, set_has_position, set_has_queue, set_has_sequence_number, set_has_target_index, set_issuer, set_order_type, set_queue, set_sequence_number, set_target_index
// calls: google::protobuf::RepeatedField<int>::Reserve, memcpy, CMsgVector::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CMsgVector::CMsgVector, _Unwind_Resume, operator delete
// callers: CDOTAMsg_UnitOrder::CDOTAMsg_UnitOrder, CDOTAMsg_UnitOrder::MergeFrom, CDOTAMsg_UnitOrder::CopyFrom, CDOTAClientMsg_ExecuteOrders::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CDOTAMsg_UnitOrder::default_instance_
void __fastcall CDOTAMsg_UnitOrder::MergeFrom(CDOTAMsg_UnitOrder *const this, const CDOTAMsg_UnitOrder *const from)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const CMsgVector *v10; // r13
  CMsgVector *v11; // rdi
  char v12; // al
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  CMsgVector *v16; // r14
  char v17; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v18; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v18,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_commonmessages.pb.cc",
      3047);
    v15 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v17, v15);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
  }
  if ( this + 32 == from + 32 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v18,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v14 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v17, v14);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
  }
  v4 = *(from + 10);
  if ( v4 != 0 )
  {
    google::protobuf::RepeatedField<int>::Reserve(this + 2, *(this + 10) + v4);
    memcpy((*(this + 4) + 4LL * *(this + 10)), *(from + 4), 4LL * *(from + 10));
    *(this + 10) += *(from + 10);
  }
  v5 = *(from + 4);
  if ( v5 != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      v6 = *(from + 6);
      *(this + 4) |= 1u;
      *(this + 6) = v6;
      v5 = *(from + 4);
    }
    if ( (v5 & 2) != 0 )
    {
      v7 = *(from + 7);
      *(this + 4) |= 2u;
      *(this + 7) = v7;
      v5 = *(from + 4);
    }
    if ( (v5 & 8) != 0 )
    {
      v8 = *(from + 12);
      *(this + 4) |= 8u;
      *(this + 12) = v8;
      v5 = *(from + 4);
    }
    if ( (v5 & 0x10) != 0 )
    {
      v9 = *(from + 13);
      *(this + 4) |= 0x10u;
      *(this + 13) = v9;
      v5 = *(from + 4);
    }
    if ( (v5 & 0x20) != 0 )
    {
      v10 = *(from + 7);
      if ( v10 == 0 )
        v10 = *&CDOTAMsg_UnitOrder::default_instance_->oneof_decl_count_;
      v11 = *(this + 7);
      *(this + 4) |= 0x20u;
      if ( v11 == 0 )
      {
        v16 = operator new(0x28u);
        CMsgVector::CMsgVector(v16);
        *(this + 7) = v16;
        v11 = v16;
      }
      CMsgVector::MergeFrom(v11, v10);
      v5 = *(from + 4);
    }
    if ( (v5 & 0x40) != 0 )
    {
      v12 = *(from + 64);
      *(this + 4) |= 0x40u;
      *(this + 64) = v12;
      v5 = *(from + 4);
    }
    if ( (v5 & 0x80u) != 0 )
    {
      v13 = *(from + 17);
      *(this + 4) |= 0x80u;
      *(this + 17) = v13;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMsg_UnitOrder::CopyFrom  (line 3075, @0x0000000001c6bea0, libserver.so)
void __fastcall CDOTAMsg_UnitOrder::CopyFrom(
        CDOTAMsg_UnitOrder *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMsg_UnitOrder::CopyFrom  (line 3081, @0x0000000001c71a10, libserver.so)
// calls: CDOTAMsg_UnitOrder::MergeFrom
void __fastcall CDOTAMsg_UnitOrder::CopyFrom(CDOTAMsg_UnitOrder *const this, const CDOTAMsg_UnitOrder *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMsg_UnitOrder::MergeFrom(this, from);
  }
}


// CDOTAMsg_UnitOrder::IsInitialized  (line 3087, @0x0000000001c6bee0, libserver.so)
bool __fastcall CDOTAMsg_UnitOrder::IsInitialized(const CDOTAMsg_UnitOrder *const this)
{
  return 1;
}


// CDOTAMsg_UnitOrder::Swap  (line 3092, @0x0000000001c71170, libserver.so)  // inlines: Swap, swap<CMsgVector*>, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMsg_UnitOrder::Swap(CDOTAMsg_UnitOrder *const this, CDOTAMsg_UnitOrder *other)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    v3 = *(other + 7);
    *(other + 6) = v2;
    v4 = *(this + 7);
    *(this + 7) = v3;
    v5 = *(other + 4);
    *(other + 7) = v4;
    v6 = *(this + 4);
    v7 = *(this + 10);
    v8 = *(this + 11);
    *(this + 4) = v5;
    *(this + 10) = *(other + 10);
    *(this + 11) = *(other + 11);
    *(other + 10) = v7;
    v9 = *(other + 12);
    *(other + 4) = v6;
    *(other + 11) = v8;
    v10 = *(this + 12);
    *(this + 12) = v9;
    v11 = *(other + 13);
    *(other + 12) = v10;
    v12 = *(this + 13);
    *(this + 13) = v11;
    v13 = *(other + 7);
    *(other + 13) = v12;
    v14 = *(this + 7);
    *(this + 7) = v13;
    LOBYTE(v13) = *(other + 64);
    *(other + 7) = v14;
    LOBYTE(v14) = *(this + 64);
    *(this + 64) = v13;
    LODWORD(v13) = *(other + 17);
    *(other + 64) = v14;
    LODWORD(v14) = *(this + 17);
    *(this + 17) = v13;
    LODWORD(v13) = *(other + 4);
    *(other + 17) = v14;
    LODWORD(v14) = *(this + 4);
    *(this + 4) = v13;
    v15 = *(other + 1);
    *(other + 4) = v14;
    v16 = *(this + 1);
    *(this + 1) = v15;
    LODWORD(v15) = *(other + 5);
    *(other + 1) = v16;
    LODWORD(v16) = *(this + 5);
    *(this + 5) = v15;
    *(other + 5) = v16;
  }
}


// CDOTAMsg_UnitOrder::GetMetadata  (line 3108, @0x0000000001c6d160, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fcommonmessages_2eproto(void), `anonymous namespace'::CDOTAMsg_UnitOrder_descriptor_, `anonymous namespace'::CDOTAMsg_UnitOrder_reflection_
google::protobuf::Metadata __fastcall CDOTAMsg_UnitOrder::GetMetadata(const CDOTAMsg_UnitOrder *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fcommonmessages_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMsg_UnitOrder_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMsg_UnitOrder_reflection_;
  return result;
}


