// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc:470
struct StaticDescriptorInitializer_dota_5fmatch_5fmetadata_2eproto {
	StaticDescriptorInitializer_dota_5fmatch_5fmetadata_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto  (line 68, @0x0000000001d72580, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "dota_match_metadata.proto", "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_, CDOTAMatchMetadataFile::default_instance_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadataFile_offsets_, `anonymous namespace'::CDOTAMatchMetadataFile_reflection_, `anonymous namespace'::CDOTAMatchMetadata_descriptor_, CDOTAMatchMetadata::default_instance_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadata_offsets_, `anonymous namespace'::CDOTAMatchMetadata_reflection_ (40 total)
void __cdecl protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto()
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
  google::protobuf::DescriptorPool *v14; // rdi
  const google::protobuf::DescriptorPool *v15; // r13
  google::protobuf::MessageFactory *v16; // rdi
  google::protobuf::MessageFactory *v17; // r14
  google::protobuf::internal::GeneratedMessageReflection *v18; // r12
  google::protobuf::DescriptorPool *v19; // rdi
  const google::protobuf::DescriptorPool *v20; // r13
  google::protobuf::MessageFactory *v21; // rdi
  google::protobuf::MessageFactory *v22; // r14
  google::protobuf::internal::GeneratedMessageReflection *v23; // r12
  google::protobuf::DescriptorPool *v24; // rdi
  const google::protobuf::DescriptorPool *v25; // r13
  google::protobuf::MessageFactory *v26; // rdi
  google::protobuf::MessageFactory *v27; // r14
  google::protobuf::internal::GeneratedMessageReflection *v28; // r12
  google::protobuf::DescriptorPool *v29; // rdi
  const google::protobuf::DescriptorPool *v30; // r13
  google::protobuf::MessageFactory *v31; // rdi
  google::protobuf::MessageFactory *v32; // r14
  google::protobuf::internal::GeneratedMessageReflection *v33; // r12
  google::protobuf::DescriptorPool *v34; // rdi
  const google::protobuf::DescriptorPool *v35; // r13
  google::protobuf::MessageFactory *v36; // rdi
  google::protobuf::MessageFactory *v37; // r14
  google::protobuf::internal::GeneratedMessageReflection *v38; // r12
  google::protobuf::DescriptorPool *v39; // rdi
  const google::protobuf::DescriptorPool *v40; // r13
  google::protobuf::MessageFactory *v41; // rdi
  google::protobuf::MessageFactory *v42; // r14
  google::protobuf::internal::GeneratedMessageReflection *v43; // r12
  const google::protobuf::Descriptor *v44; // rax
  google::protobuf::DescriptorPool *v45; // rdi
  const google::protobuf::DescriptorPool *v46; // r12
  google::protobuf::MessageFactory *v47; // rdi
  google::protobuf::MessageFactory *v48; // r13
  google::protobuf::internal::GeneratedMessageReflection *v49; // rbx
  google::protobuf::DescriptorPool *v50; // rdi
  const google::protobuf::DescriptorPool *v51; // r12
  google::protobuf::MessageFactory *v52; // rdi
  google::protobuf::MessageFactory *v53; // r13
  google::protobuf::internal::GeneratedMessageReflection *v54; // rbx
  google::protobuf::DescriptorPool *v55; // rdi
  const google::protobuf::DescriptorPool *v56; // r12
  google::protobuf::MessageFactory *v57; // rdi
  google::protobuf::MessageFactory *v58; // r13
  google::protobuf::internal::GeneratedMessageReflection *v59; // rbx
  google::protobuf::DescriptorPool *v60; // rdi
  const google::protobuf::DescriptorPool *v61; // r12
  google::protobuf::MessageFactory *v62; // rdi
  google::protobuf::MessageFactory *v63; // r13
  google::protobuf::internal::GeneratedMessageReflection *v64; // rbx
  __int64 v65; // rax
  int v66; // eax
  int v67; // edx
  char v68; // [rsp+3Eh] [rbp-42h] BYREF
  char v69; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v70; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
  std::string::string(&v70, "dota_match_metadata.proto", &v68);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v70);
  v3 = *&v70.level_ - 24LL;
  if ( (*&v70.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v66 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v67 = *(*&v70.level_ - 8LL);
      *(*&v70.level_ - 8LL) = v67 - 1;
      v66 = v67;
    }
    if ( v66 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v69);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v70,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      73);
    v65 = google::protobuf::internal::LogMessage::operator<<(&v70, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v69, v65);
    google::protobuf::internal::LogMessage::~LogMessage(&v70);
  }
  `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_,
    CDOTAMatchMetadataFile::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadataFile_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    56);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CDOTAMatchMetadataFile_reflection_ = v7;
  `anonymous namespace'::CDOTAMatchMetadata_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CDOTAMatchMetadata_descriptor_,
    CDOTAMatchMetadata::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadata_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    96);
  `anonymous namespace'::CDOTAMatchMetadata_reflection_ = v13;
  `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_ = `anonymous namespace'::CDOTAMatchMetadata_descriptor_->nested_types_;
  v15 = google::protobuf::DescriptorPool::generated_pool(v14);
  v17 = google::protobuf::MessageFactory::generated_factory(v16);
  v18 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v18,
    `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_,
    CDOTAMatchMetadata_Team::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadata_Team_offsets_,
    16,
    8,
    -1,
    v15,
    v17,
    144);
  `anonymous namespace'::CDOTAMatchMetadata_Team_reflection_ = v18;
  `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_descriptor_ = `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_->nested_types_;
  v20 = google::protobuf::DescriptorPool::generated_pool(v19);
  v22 = google::protobuf::MessageFactory::generated_factory(v21);
  v23 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v23,
    `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_descriptor_,
    CDOTAMatchMetadata_Team_PlayerKill::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadata_Team_PlayerKill_offsets_,
    16,
    8,
    -1,
    v20,
    v22,
    32);
  `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_reflection_ = v23;
  `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_descriptor_ = `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_->nested_types_
                                                                          + 1;
  v25 = google::protobuf::DescriptorPool::generated_pool(v24);
  v27 = google::protobuf::MessageFactory::generated_factory(v26);
  v28 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v28,
    `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_descriptor_,
    CDOTAMatchMetadata_Team_ItemPurchase::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadata_Team_ItemPurchase_offsets_,
    16,
    8,
    -1,
    v25,
    v27,
    32);
  `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_reflection_ = v28;
  `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_descriptor_ = `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_->nested_types_
                                                                               + 2;
  v30 = google::protobuf::DescriptorPool::generated_pool(v29);
  v32 = google::protobuf::MessageFactory::generated_factory(v31);
  v33 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v33,
    `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_descriptor_,
    CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadata_Team_InventorySnapshot_offsets_,
    16,
    8,
    -1,
    v30,
    v32,
    64);
  `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_reflection_ = v33;
  `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_descriptor_ = `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_->nested_types_
                                                                               + 3;
  v35 = google::protobuf::DescriptorPool::generated_pool(v34);
  v37 = google::protobuf::MessageFactory::generated_factory(v36);
  v38 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v38,
    `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_descriptor_,
    CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadata_Team_AutoStyleCriteria_offsets_,
    16,
    8,
    -1,
    v35,
    v37,
    32);
  `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_reflection_ = v38;
  `anonymous namespace'::CDOTAMatchMetadata_Team_Player_descriptor_ = `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_->nested_types_
                                                                    + 4;
  v40 = google::protobuf::DescriptorPool::generated_pool(v39);
  v42 = google::protobuf::MessageFactory::generated_factory(v41);
  v43 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v43,
    `anonymous namespace'::CDOTAMatchMetadata_Team_Player_descriptor_,
    CDOTAMatchMetadata_Team_Player::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchMetadata_Team_Player_offsets_,
    16,
    8,
    -1,
    v40,
    v42,
    264);
  v44 = *(FileByName + 80);
  `anonymous namespace'::CDOTAMatchMetadata_Team_Player_reflection_ = v43;
  `anonymous namespace'::CDOTAMatchPrivateMetadata_descriptor_ = v44 + 2;
  v46 = google::protobuf::DescriptorPool::generated_pool(v45);
  v48 = google::protobuf::MessageFactory::generated_factory(v47);
  v49 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v49,
    `anonymous namespace'::CDOTAMatchPrivateMetadata_descriptor_,
    CDOTAMatchPrivateMetadata::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchPrivateMetadata_offsets_,
    16,
    8,
    -1,
    v46,
    v48,
    48);
  `anonymous namespace'::CDOTAMatchPrivateMetadata_reflection_ = v49;
  `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_ = `anonymous namespace'::CDOTAMatchPrivateMetadata_descriptor_->nested_types_;
  v51 = google::protobuf::DescriptorPool::generated_pool(v50);
  v53 = google::protobuf::MessageFactory::generated_factory(v52);
  v54 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v54,
    `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_,
    CDOTAMatchPrivateMetadata_Team::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchPrivateMetadata_Team_offsets_,
    16,
    8,
    -1,
    v51,
    v53,
    80);
  `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_reflection_ = v54;
  `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_descriptor_ = `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_->nested_types_;
  v56 = google::protobuf::DescriptorPool::generated_pool(v55);
  v58 = google::protobuf::MessageFactory::generated_factory(v57);
  v59 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v59,
    `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_descriptor_,
    CDOTAMatchPrivateMetadata_Team_Player::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchPrivateMetadata_Team_Player_offsets_,
    16,
    8,
    -1,
    v56,
    v58,
    40);
  `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_reflection_ = v59;
  `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_descriptor_ = `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_->nested_types_
                                                                             + 1;
  v61 = google::protobuf::DescriptorPool::generated_pool(v60);
  v63 = google::protobuf::MessageFactory::generated_factory(v62);
  v64 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v64,
    `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_descriptor_,
    CDOTAMatchPrivateMetadata_Team_Building::default_instance_,
    protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void)::CDOTAMatchPrivateMetadata_Team_Building_offsets_,
    16,
    8,
    -1,
    v61,
    v63,
    48);
  `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_reflection_ = v64;
}


// protobuf_RegisterTypes  (line 320, @0x0000000001d72f00, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), CDOTAMatchMetadataFile::default_instance_, `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_, CDOTAMatchMetadata::default_instance_, `anonymous namespace'::CDOTAMatchMetadata_descriptor_, CDOTAMatchMetadata_Team::default_instance_, `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_ (26 total)
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
  const google::protobuf::Message *v15; // rdx
  const google::protobuf::Descriptor *v16; // rsi
  const google::protobuf::Message *v17; // rdx
  const google::protobuf::Descriptor *v18; // rsi
  const google::protobuf::Message *v19; // rdx
  const google::protobuf::Descriptor *v20; // rsi
  const google::protobuf::Message *v21; // rdx
  const google::protobuf::Descriptor *v22; // rsi
  const google::protobuf::Message *v23; // rdx
  const google::protobuf::Descriptor *v24; // rsi
  __int64 v25[2]; // [rsp+0h] [rbp-30h] BYREF
  char v26; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v26 = 0;
    v25[0] = off_47BFB70;
    v25[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v25, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v25);
  }
  v2 = CDOTAMatchMetadataFile::default_instance_;
  if ( CDOTAMatchMetadataFile::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v2 = CDOTAMatchMetadataFile::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_,
    v2,
    v1);
  v4 = CDOTAMatchMetadata::default_instance_;
  if ( CDOTAMatchMetadata::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v4 = CDOTAMatchMetadata::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchMetadata_descriptor_,
    v4,
    v3);
  v6 = CDOTAMatchMetadata_Team::default_instance_;
  if ( CDOTAMatchMetadata_Team::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v6 = CDOTAMatchMetadata_Team::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_,
    v6,
    v5);
  v8 = CDOTAMatchMetadata_Team_PlayerKill::default_instance_;
  if ( CDOTAMatchMetadata_Team_PlayerKill::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v8 = CDOTAMatchMetadata_Team_PlayerKill::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_descriptor_,
    v8,
    v7);
  v10 = CDOTAMatchMetadata_Team_ItemPurchase::default_instance_;
  if ( CDOTAMatchMetadata_Team_ItemPurchase::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v10 = CDOTAMatchMetadata_Team_ItemPurchase::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_descriptor_,
    v10,
    v9);
  v12 = CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_;
  if ( CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v12 = CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_descriptor_,
    v12,
    v11);
  v14 = CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_;
  if ( CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v14 = CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_descriptor_,
    v14,
    v13);
  v16 = CDOTAMatchMetadata_Team_Player::default_instance_;
  if ( CDOTAMatchMetadata_Team_Player::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v16 = CDOTAMatchMetadata_Team_Player::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchMetadata_Team_Player_descriptor_,
    v16,
    v15);
  v18 = CDOTAMatchPrivateMetadata::default_instance_;
  if ( CDOTAMatchPrivateMetadata::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v18 = CDOTAMatchPrivateMetadata::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchPrivateMetadata_descriptor_,
    v18,
    v17);
  v20 = CDOTAMatchPrivateMetadata_Team::default_instance_;
  if ( CDOTAMatchPrivateMetadata_Team::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v20 = CDOTAMatchPrivateMetadata_Team::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_,
    v20,
    v19);
  v22 = CDOTAMatchPrivateMetadata_Team_Player::default_instance_;
  if ( CDOTAMatchPrivateMetadata_Team_Player::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v22 = CDOTAMatchPrivateMetadata_Team_Player::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_descriptor_,
    v22,
    v21);
  v24 = CDOTAMatchPrivateMetadata_Team_Building::default_instance_;
  if ( CDOTAMatchPrivateMetadata_Team_Building::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    v24 = CDOTAMatchPrivateMetadata_Team_Building::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_descriptor_,
    v24,
    v23);
}


// protobuf_ShutdownFile_dota_5fmatch_5fmetadata_2eproto  (line 350, @0x0000000001d6a3b0, libserver.so)
// globals: CDOTAMatchMetadataFile::default_instance_, `anonymous namespace'::CDOTAMatchMetadataFile_reflection_, CDOTAMatchMetadata::default_instance_, `anonymous namespace'::CDOTAMatchMetadata_reflection_, CDOTAMatchMetadata_Team::default_instance_, `anonymous namespace'::CDOTAMatchMetadata_Team_reflection_, CDOTAMatchMetadata_Team_PlayerKill::default_instance_, `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_reflection_ (24 total)
void __cdecl protobuf_ShutdownFile_dota_5fmatch_5fmetadata_2eproto()
{
  if ( CDOTAMatchMetadataFile::default_instance_ != 0 )
    (CDOTAMatchMetadataFile::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchMetadataFile::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchMetadataFile_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchMetadataFile_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchMetadataFile_reflection_);
  if ( CDOTAMatchMetadata::default_instance_ != 0 )
    (CDOTAMatchMetadata::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchMetadata::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchMetadata_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchMetadata_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchMetadata_reflection_);
  if ( CDOTAMatchMetadata_Team::default_instance_ != 0 )
    (CDOTAMatchMetadata_Team::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchMetadata_Team::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchMetadata_Team_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchMetadata_Team_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchMetadata_Team_reflection_);
  if ( CDOTAMatchMetadata_Team_PlayerKill::default_instance_ != 0 )
    (CDOTAMatchMetadata_Team_PlayerKill::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchMetadata_Team_PlayerKill::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_reflection_);
  if ( CDOTAMatchMetadata_Team_ItemPurchase::default_instance_ != 0 )
    (CDOTAMatchMetadata_Team_ItemPurchase::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchMetadata_Team_ItemPurchase::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_reflection_);
  if ( CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_ != 0 )
    (CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_reflection_);
  if ( CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_ != 0 )
    (CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_reflection_);
  if ( CDOTAMatchMetadata_Team_Player::default_instance_ != 0 )
    (CDOTAMatchMetadata_Team_Player::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchMetadata_Team_Player::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchMetadata_Team_Player_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchMetadata_Team_Player_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchMetadata_Team_Player_reflection_);
  if ( CDOTAMatchPrivateMetadata::default_instance_ != 0 )
    (CDOTAMatchPrivateMetadata::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchPrivateMetadata::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchPrivateMetadata_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchPrivateMetadata_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchPrivateMetadata_reflection_);
  if ( CDOTAMatchPrivateMetadata_Team::default_instance_ != 0 )
    (CDOTAMatchPrivateMetadata_Team::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchPrivateMetadata_Team::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchPrivateMetadata_Team_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchPrivateMetadata_Team_reflection_);
  if ( CDOTAMatchPrivateMetadata_Team_Player::default_instance_ != 0 )
    (CDOTAMatchPrivateMetadata_Team_Player::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchPrivateMetadata_Team_Player::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_reflection_);
  if ( CDOTAMatchPrivateMetadata_Team_Building::default_instance_ != 0 )
    (CDOTAMatchPrivateMetadata_Team_Building::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAMatchPrivateMetadata_Team_Building::default_instance_);
  if ( `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_reflection_ + 8LL))(`anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_reflection_);
}


// protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto  (line 377, @0x0000000001d722c0, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), protobuf_AddDesc_base_5fgcmessages_2eproto, protobuf_AddDesc_dota_5fgcmessages_5fcommon_5fmatch_5fmanagement_2eproto, google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CDOTAMatchMetadataFile::CDOTAMatchMetadataFile, CDOTAMatchMetadata::CDOTAMatchMetadata, CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team, CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill, CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase, CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot (22 total)
// callers: protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchMetadataFile::default_instance, CDOTAMatchMetadata_Team_PlayerKill::default_instance, CDOTAMatchMetadata_Team_ItemPurchase::default_instance, CDOTAMatchMetadata_Team_InventorySnapshot::default_instance, CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance, CDOTAMatchMetadata_Team_Player::default_instance, CDOTAMatchMetadata_Team::default_instance, CDOTAMatchMetadata::default_instance, CDOTAMatchMetadataFile::InitAsDefaultInstance, CDOTAMatchPrivateMetadata_Team_Player::default_instance, CDOTAMatchPrivateMetadata_Team_Building::default_instance (16 total)
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "dota_match_metadata.proto"
// globals: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CDOTAMatchMetadataFile::default_instance_, CDOTAMatchMetadata::default_instance_, CDOTAMatchMetadata_Team::default_instance_, CDOTAMatchMetadata_Team_PlayerKill::default_instance_, CDOTAMatchMetadata_Team_ItemPurchase::default_instance_, CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_ (15 total)
void __cdecl protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CDOTAMatchMetadataFile *v3; // rbx
  CDOTAMatchMetadata *v4; // rbx
  CDOTAMatchMetadata_Team *v5; // rbx
  CDOTAMatchMetadata_Team_PlayerKill *v6; // rbx
  CDOTAMatchMetadata_Team_ItemPurchase *v7; // rbx
  CDOTAMatchMetadata_Team_InventorySnapshot *v8; // rbx
  CDOTAMatchMetadata_Team_AutoStyleCriteria *v9; // rbx
  CDOTAMatchMetadata_Team_Player *v10; // rbx
  CDOTAMatchPrivateMetadata *v11; // rbx
  CDOTAMatchPrivateMetadata_Team *v12; // rbx
  CDOTAMatchPrivateMetadata_Team_Player *v13; // rbx
  CDOTAMatchPrivateMetadata_Team_Building *v14; // rbx
  void (*v15)(void); // rsi

  if ( !protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto(void)::already_here )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      v0);
    protobuf_AddDesc_base_5fgcmessages_2eproto();
    protobuf_AddDesc_dota_5fgcmessages_5fcommon_5fmatch_5fmanagement_2eproto();
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_32B2E40, &stru_10.m_PVSBits.m_Ints[256], v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "dota_match_metadata.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x38u);
    CDOTAMatchMetadataFile::CDOTAMatchMetadataFile(v3);
    CDOTAMatchMetadataFile::default_instance_ = v3;
    v4 = operator new(0x60u);
    CDOTAMatchMetadata::CDOTAMatchMetadata(v4);
    CDOTAMatchMetadata::default_instance_ = v4;
    v5 = operator new(0x90u);
    CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team(v5);
    CDOTAMatchMetadata_Team::default_instance_ = v5;
    v6 = operator new(0x20u);
    CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill(v6);
    CDOTAMatchMetadata_Team_PlayerKill::default_instance_ = v6;
    v7 = operator new(0x20u);
    CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase(v7);
    CDOTAMatchMetadata_Team_ItemPurchase::default_instance_ = v7;
    v8 = operator new(0x40u);
    CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot(v8);
    CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_ = v8;
    v9 = operator new(0x20u);
    CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria(v9);
    CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_ = v9;
    v10 = operator new(0x108u);
    CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player(v10);
    CDOTAMatchMetadata_Team_Player::default_instance_ = v10;
    v11 = operator new(0x30u);
    CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata(v11);
    CDOTAMatchPrivateMetadata::default_instance_ = v11;
    v12 = operator new(0x50u);
    CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team(v12);
    CDOTAMatchPrivateMetadata_Team::default_instance_ = v12;
    v13 = operator new(0x28u);
    CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player(v13);
    CDOTAMatchPrivateMetadata_Team_Player::default_instance_ = v13;
    v14 = operator new(0x30u);
    CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building(v14);
    CDOTAMatchPrivateMetadata_Team_Building::default_instance_ = v14;
    CDOTAMatchMetadataFile::InitAsDefaultInstance(CDOTAMatchMetadataFile::default_instance_);
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_dota_5fmatch_5fmetadata_2eproto, v15);
  }
}


// CDOTAMatchMetadataFile::CDOTAMatchMetadataFile  (line 485, @0x0000000001d6e930, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadataFile::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<557, CDOTAMatchMetadataFile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CNetMessagePB<557, CDOTAMatchMetadataFile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CDOTAMatchMetadataFile::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAGCServerSystem::CDOTAGCServerSystem, CDOTAGCServerSystem::SerializeLastMatchMetadataToString, CDOTAGCServerSystem::SendMatchMetadataToClients
void __fastcall CDOTAMatchMetadataFile::CDOTAMatchMetadataFile(CDOTAMatchMetadataFile *const this)
{
  *this = off_3F9BD30;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMatchMetadataFile::SharedCtor(this);
}


// CDOTAMatchMetadataFile::InitAsDefaultInstance  (line 491, @0x0000000001d72e30, libserver.so)  // inlines: default_instance
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// callers: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadata::default_instance_
void __fastcall CDOTAMatchMetadataFile::InitAsDefaultInstance(CDOTAMatchMetadataFile *const this)
{
  if ( CDOTAMatchMetadata::default_instance_ != 0 )
  {
    *(this + 4) = CDOTAMatchMetadata::default_instance_;
  }
  else
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    *(this + 4) = CDOTAMatchMetadata::default_instance_;
  }
}


// CDOTAMatchMetadataFile::CDOTAMatchMetadataFile  (line 495, @0x0000000001d75b60, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadataFile::SharedCtor, CDOTAMatchMetadataFile::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<557, CDOTAMatchMetadataFile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CDOTAMatchMetadataFile::CDOTAMatchMetadataFile(
        CDOTAMatchMetadataFile *const this,
        const CDOTAMatchMetadataFile *const from)
{
  *this = off_3F9BD30;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMatchMetadataFile::SharedCtor(this);
  CDOTAMatchMetadataFile::MergeFrom(this, from);
}


// CDOTAMatchMetadataFile::SharedCtor  (line 502, @0x0000000001d6e860, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTAMatchMetadataFile::CDOTAMatchMetadataFile
void __fastcall CDOTAMatchMetadataFile::SharedCtor(CDOTAMatchMetadataFile *const this)
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
  *(this + 12) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 5) = v4;
  *(this + 4) = 0;
}


// CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile  (line 512, @0x0000000001d6ea60, libserver.so)
// calls: CDOTAMatchMetadataFile::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<557, CDOTAMatchMetadataFile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile, CNetMessagePB<557, CDOTAMatchMetadataFile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::~CNetMessagePB, CUserMessagePB<557, CDOTAMatchMetadataFile, (NetChannelBufType_t)1>::~CUserMessagePB, CDOTAUserMsg_MatchMetadata_t::~CDOTAUserMsg_MatchMetadata_t, CDOTAGCServerSystem::CDOTAGCServerSystem, CDOTAGCServerSystem::~CDOTAGCServerSystem, CDOTAGCServerSystem::SerializeLastMatchMetadataToString, CDOTAGCServerSystem::SendMatchMetadataToClients
void __fastcall CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile(CDOTAMatchMetadataFile *const this)
{
  *this = off_3F9BD30;
  CDOTAMatchMetadataFile::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile  (line 512, @0x0000000001d6eaa0, libserver.so)
// calls: CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile, operator delete
void __fastcall CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile(CDOTAMatchMetadataFile *const this)
{
  CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile(this);
  operator delete(this);
}


// CDOTAMatchMetadataFile::SharedDtor  (line 517, @0x0000000001d6e9d0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile
// globals: CDOTAMatchMetadataFile::default_instance_
void __fastcall CDOTAMatchMetadataFile::SharedDtor(CDOTAMatchMetadataFile *const this)
{
  __int64 *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  int v6; // eax
  int v7; // edx
  _BYTE v8[17]; // [rsp+Fh] [rbp-11h] BYREF

  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    v3 = *v2;
    v4 = *v2 - 24;
    if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v6 = _InterlockedExchangeAdd((v4 + 16), 0xFFFFFFFF);
      }
      else
      {
        v7 = *(v3 - 8);
        *(v3 - 8) = v7 - 1;
        v6 = v7;
      }
      if ( v6 <= 0 )
        std::string::_Rep::_M_destroy(v4, v8);
    }
    operator delete(v2);
  }
  if ( this != CDOTAMatchMetadataFile::default_instance_ )
  {
    v5 = *(this + 4);
    if ( v5 != 0 )
      (*(*v5 + 8LL))(v5);
  }
}


// CDOTAMatchMetadataFile::SetCachedSize  (line 524, @0x0000000001d6a580, libserver.so)
void __fastcall CDOTAMatchMetadataFile::SetCachedSize(const CDOTAMatchMetadataFile *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMatchMetadataFile::descriptor  (line 529, @0x0000000001d6eac0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchMetadataFile::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_;
}


// CDOTAMatchMetadataFile::default_instance  (line 534, @0x0000000001d72cb0, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadataFile::default_instance_
const CDOTAMatchMetadataFile *__cdecl CDOTAMatchMetadataFile::default_instance()
{
  const CDOTAMatchMetadataFile *result; // rax

  result = CDOTAMatchMetadataFile::default_instance_;
  if ( CDOTAMatchMetadataFile::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchMetadataFile::default_instance_;
  }
  return result;
}


// CDOTAMatchMetadataFile::New  (line 541, @0x0000000001d6e990, libserver.so)
// calls: operator new, CDOTAMatchMetadataFile::CDOTAMatchMetadataFile, operator delete, _Unwind_Resume
CDOTAMatchMetadataFile *__fastcall CDOTAMatchMetadataFile::New(const CDOTAMatchMetadataFile *const this)
{
  CDOTAMatchMetadataFile *v1; // rbx

  v1 = operator new(0x38u);
  CDOTAMatchMetadataFile::CDOTAMatchMetadataFile(v1);
  return v1;
}


// CDOTAMatchMetadataFile::Clear  (line 545, @0x0000000001d6b130, libserver.so)  // inlines: Clear, clear, memset, size
// calls: CDOTAMatchMetadata::Clear, google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
// callers: CDOTAGCServerSystem::EnsureLastMatchMetadata
void __fastcall CDOTAMatchMetadataFile::Clear(CDOTAMatchMetadataFile *const this)
{
  int v2; // eax
  CDOTAMatchMetadata *v3; // rdi
  bool v4; // zf

  v2 = *(this + 4);
  if ( (v2 & 0xF) != 0 )
  {
    *(this + 12) = 0;
    *(this + 3) = 0;
    if ( (v2 & 4) != 0 )
    {
      v3 = *(this + 4);
      if ( v3 != 0 )
      {
        CDOTAMatchMetadata::Clear(v3);
        v2 = *(this + 4);
      }
    }
    if ( (v2 & 8) != 0 )
      std::string::_M_mutate(*(this + 5), 0, *(**(this + 5) - 24LL), 0);
  }
  v4 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v4 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMatchMetadataFile::MergePartialFromCodedStream  (line 560, @0x0000000001d7a3f0, libserver.so)  // inlines: Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CDOTAMatchMetadata>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)4u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, mutable_metadata, mutable_private_metadata, set_has_match_id, set_has_metadata, set_has_private_metadata, set_has_version
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), operator new, CDOTAMatchMetadata::CDOTAMatchMetadata, google::protobuf::io::CodedInputStream::PushLimit(int), CDOTAMatchMetadata::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), operator delete, _Unwind_Resume
bool __fastcall CDOTAMatchMetadataFile::MergePartialFromCodedStream(
        CDOTAMatchMetadataFile *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  google::protobuf::uint8 *v8; // rdx
  unsigned int v9; // eax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  unsigned int v13; // edx
  const google::protobuf::uint8 *v14; // rdx
  __int64 v15; // rax
  CDOTAMatchMetadata *v16; // r15
  const google::protobuf::uint8 *v17; // rax
  int v18; // eax
  bool v19; // cc
  int recursion_depth; // eax
  int v21; // [rsp+4h] [rbp-4Ch]
  unsigned __int64 *v22; // [rsp+8h] [rbp-48h]
  unsigned int v23[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = this + 8;
  v22 = (this + 24);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( buffer_end <= buffer )
        goto LABEL_14;
LABEL_3:
      v7 = *buffer;
      if ( v7 <= 0 )
      {
LABEL_14:
        while ( 1 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
          v7 = TagFallback;
          input->last_tag_ = TagFallback;
          if ( TagFallback - 1 <= 0x7E )
            break;
          if ( TagFallback == 0 )
            return 1;
LABEL_11:
          if ( (v7 & 7) == 4 )
            return 1;
          if ( google::protobuf::internal::WireFormat::SkipField(input, v7, v3, buffer_end) == 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer_end > buffer )
            goto LABEL_3;
        }
      }
      else
      {
        v8 = (buffer + 1);
        input->last_tag_ = v7;
        input->buffer_ = v8;
      }
      v9 = v7 >> 3;
      if ( v7 >> 3 == 2 )
      {
        if ( v7 != 16 )
          goto handle_unusual;
        v14 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_match_id;
      }
      if ( v7 >> 3 <= 2 )
        break;
      if ( v9 == 3 )
      {
        if ( v7 != 26 )
          goto handle_unusual;
        v16 = *(this + 4);
        *(this + 4) |= 4u;
        if ( v16 == 0 )
        {
LABEL_41:
          v16 = operator new(0x60u);
          CDOTAMatchMetadata::CDOTAMatchMetadata(v16);
          *(this + 4) = v16;
        }
LABEL_34:
        v17 = input->buffer_;
        if ( v17 >= input->buffer_end_ || *v17 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v23) == 0 )
            return 0;
        }
        else
        {
          v23[0] = *v17;
          input->buffer_ = v17 + 1;
        }
        v18 = input->recursion_depth_ + 1;
        v19 = input->recursion_limit_ < v18;
        input->recursion_depth_ = v18;
        if ( v19 )
          return 0;
        v21 = google::protobuf::io::CodedInputStream::PushLimit(input, v23[0]);
        if ( !CDOTAMatchMetadata::MergePartialFromCodedStream(v16, input) || !input->legitimate_message_end_ )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(input, v21);
        recursion_depth = input->recursion_depth_;
        if ( recursion_depth > 0 )
          input->recursion_depth_ = recursion_depth - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end && *buffer == 42 )
        {
          v8 = (buffer + 1);
          input->buffer_ = v8;
          goto parse_private_metadata;
        }
      }
      else
      {
        if ( v9 != 5 || v7 != 42 )
          goto handle_unusual;
parse_private_metadata:
        *(this + 4) |= 8u;
        result = google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 5), v8);
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
    if ( v9 != 1 || v7 != 8 )
      break;
    v12 = input->buffer_;
    if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v23);
      if ( !result )
        return result;
      v13 = v23[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 12) = v13;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v14 = buffer + 1;
      input->buffer_ = v14;
parse_match_id:
      if ( v14 >= buffer_end || ((v15 = *v14) & 0x80u) != 0LL )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v22) == 0 )
          return 0;
      }
      else
      {
        *(this + 3) = v15;
        ++input->buffer_;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 26 )
      {
        input->buffer_ = buffer + 1;
        v16 = *(this + 4);
        *(this + 4) |= 4u;
        if ( v16 != 0 )
          goto LABEL_34;
        goto LABEL_41;
      }
    }
  }
handle_unusual:
  if ( v7 != 0 )
    goto LABEL_11;
  return 1;
}


// CDOTAMatchMetadataFile::SerializeWithCachedSizes  (line 647, @0x0000000001d6b300, libserver.so)  // inlines: empty, metadata
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
// globals: CDOTAMatchMetadataFile::default_instance_
void __fastcall CDOTAMatchMetadataFile::SerializeWithCachedSizes(
        const CDOTAMatchMetadataFile *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  const google::protobuf::MessageOptions *options; // rsi
  _QWORD *v8; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 12), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt64(&loc_2, *(this + 3), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 4) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
      options = CDOTAMatchMetadataFile::default_instance_->options_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 1, options, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 8) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2 + 3, *(this + 5), output, v3);
    v8 = *(this + 1);
    if ( v8 == 0 )
      return;
  }
  else
  {
    v8 = *(this + 1);
    if ( v8 == 0 )
      return;
  }
  if ( v8[1] != *v8 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAMatchMetadataFile::SerializeWithCachedSizesToArray  (line 679, @0x0000000001d7a880, libserver.so)  // inlines: GetCachedSize, WriteBytesToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CDOTAMatchMetadata>, WriteTagToArray, WriteUInt64NoTagToArray, WriteUInt64ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, metadata
// calls: google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *), CDOTAMatchMetadata::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// globals: CDOTAMatchMetadataFile::default_instance_
google::protobuf::uint8 *__fastcall CDOTAMatchMetadataFile::SerializeWithCachedSizesToArray(
        const CDOTAMatchMetadataFile *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  unsigned int *options; // r12
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::uint8 *v10; // rsi
  unsigned __int8 *v11; // rdx
  google::protobuf::io::CodedOutputStream *v12; // rdi
  __int64 v13; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 12);
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
    v7 = *(this + 3);
    *result = 16;
    result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v7, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
    {
      v4 = CDOTAMatchMetadataFile::default_instance_;
      options = CDOTAMatchMetadataFile::default_instance_->options_;
    }
    *result = 26;
    v9 = options[5];
    if ( v9 > 0x7F )
    {
      v10 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, result + 1, v4);
    }
    else
    {
      result[1] = v9;
      v10 = result + 2;
    }
    result = CDOTAMatchMetadata::SerializeWithCachedSizesToArray(options, v10);
    LODWORD(v4) = *(this + 4);
  }
  v11 = (v4 & 8);
  if ( v11 != 0 )
  {
    v12 = *(this + 5);
    *result = 42;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v12, (result + 1), v11);
  }
  v13 = *(this + 1);
  if ( v13 != 0 && *(v13 + 8) != *v13 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v13);
  return result;
}


// CDOTAMatchMetadataFile::ByteSize  (line 714, @0x0000000001d7aad0, libserver.so)  // inlines: BytesSize, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CDOTAMatchMetadata>, UInt64Size, VarintSize32, VarintSize32SignExtended, empty, metadata, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), CDOTAMatchMetadata::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
// globals: CDOTAMatchMetadataFile::default_instance_
int __fastcall CDOTAMatchMetadataFile::ByteSize(const CDOTAMatchMetadataFile *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  const CDOTAMatchMetadata *options; // rdi
  unsigned int v9; // r13d
  int v10; // eax
  _QWORD *v11; // rax
  int v13; // eax
  _QWORD *v14; // r13
  google::protobuf::io::CodedOutputStream *v15; // rdi
  int v16; // eax
  int v17; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_14;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
  {
LABEL_6:
    if ( (v5 & 2) == 0 )
      goto LABEL_7;
LABEL_18:
    v13 = google::protobuf::io::CodedOutputStream::VarintSize64(*(this + 3), v1);
    v5 = *(this + 4);
    v3 += v13 + 1;
    if ( (v5 & 4) != 0 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v6 = *(this + 12);
  if ( v6 >= 0 )
  {
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v7 + 1;
    }
    goto LABEL_6;
  }
  LOBYTE(v5) = v4;
  v3 = 11;
  if ( (v4 & 2) != 0 )
    goto LABEL_18;
LABEL_7:
  if ( (v5 & 4) != 0 )
  {
LABEL_8:
    options = *(this + 4);
    if ( options == 0 )
      options = CDOTAMatchMetadataFile::default_instance_->options_;
    v9 = CDOTAMatchMetadata::ByteSize(options);
    v10 = 1;
    if ( v9 > 0x7F )
      v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
    v5 = *(this + 4);
    v3 += v9 + v10 + 1;
  }
LABEL_13:
  if ( (v5 & 8) != 0 )
  {
    v14 = *(this + 5);
    v15 = *(*v14 - 24LL);
    v16 = 1;
    v17 = v15;
    if ( v15 > 0x7F )
    {
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v15, v1);
      v17 = *(*v14 - 24LL);
    }
    v3 += v16 + v17 + 1;
  }
LABEL_14:
  v11 = *(this + 1);
  if ( v11 != 0 && v11[1] != *v11 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMatchMetadataFile::MergeFrom  (line 758, @0x0000000001d75bd0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchMetadataFile*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchMetadataFile::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchMetadataFile
void __fastcall CDOTAMatchMetadataFile::MergeFrom(
        CDOTAMatchMetadataFile *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchMetadataFile *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      759);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMatchMetadataFile, 0)) != 0 )
  {
    CDOTAMatchMetadataFile::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchMetadataFile::MergeFrom  (line 770, @0x0000000001d759f0, libserver.so)  // inlines: metadata, mutable_metadata, set_has_match_id, set_has_metadata, set_has_private_metadata, set_has_version, set_match_id, set_private_metadata, set_version
// calls: CDOTAMatchMetadata::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CDOTAMatchMetadata::CDOTAMatchMetadata, _Unwind_Resume, operator delete
// callers: CDOTAMatchMetadataFile::CDOTAMatchMetadataFile, CDOTAMatchMetadataFile::MergeFrom, CDOTAMatchMetadataFile::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CDOTAMatchMetadataFile::default_instance_
void __fastcall CDOTAMatchMetadataFile::MergeFrom(
        CDOTAMatchMetadataFile *const this,
        const CDOTAMatchMetadataFile *const from)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  const CDOTAMatchMetadata *options; // r13
  CDOTAMatchMetadata *v8; // rdi
  const std::string *v9; // rsi
  std::string *v10; // rdi
  __int64 v11; // rax
  CDOTAMatchMetadata *v12; // r14
  char v13; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v14; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v14,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      771);
    v11 = google::protobuf::internal::LogMessage::operator<<(&v14, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v11);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = *(from + 12);
      *(this + 4) |= 1u;
      *(this + 12) = v5;
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      v6 = *(from + 3);
      *(this + 4) |= 2u;
      *(this + 3) = v6;
      v4 = *(from + 4);
    }
    if ( (v4 & 4) != 0 )
    {
      options = *(from + 4);
      if ( options == 0 )
        options = CDOTAMatchMetadataFile::default_instance_->options_;
      v8 = *(this + 4);
      *(this + 4) |= 4u;
      if ( v8 == 0 )
      {
        v12 = operator new(0x60u);
        CDOTAMatchMetadata::CDOTAMatchMetadata(v12);
        *(this + 4) = v12;
        v8 = v12;
      }
      CDOTAMatchMetadata::MergeFrom(v8, options);
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v9 = *(from + 5);
      v10 = *(this + 5);
      *(this + 4) |= 8u;
      std::string::assign(v10, v9);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchMetadataFile::CopyFrom  (line 789, @0x0000000001d6a590, libserver.so)
void __fastcall CDOTAMatchMetadataFile::CopyFrom(
        CDOTAMatchMetadataFile *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchMetadataFile::CopyFrom  (line 795, @0x0000000001d75cb0, libserver.so)
// calls: CDOTAMatchMetadataFile::MergeFrom
// callers: CNetMessagePB<557, CDOTAMatchMetadataFile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy, CDOTAGCServerSystem::SerializeLastMatchMetadataToString, CDOTAGCServerSystem::SendMatchMetadataToClients
void __fastcall CDOTAMatchMetadataFile::CopyFrom(
        CDOTAMatchMetadataFile *const this,
        const CDOTAMatchMetadataFile *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchMetadataFile::MergeFrom(this, from);
  }
}


// CDOTAMatchMetadataFile::IsInitialized  (line 801, @0x0000000001d6a5d0, libserver.so)
bool __fastcall CDOTAMatchMetadataFile::IsInitialized(const CDOTAMatchMetadataFile *const this)
{
  return (*(this + 4) & 3) == 3;
}


// CDOTAMatchMetadataFile::Swap  (line 807, @0x0000000001d6eb50, libserver.so)  // inlines: Swap, swap<CDOTAMatchMetadata*>, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMatchMetadataFile::Swap(CDOTAMatchMetadataFile *const this, CDOTAMatchMetadataFile *other)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( other != this )
  {
    v2 = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v2;
    v3 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v3;
    v4 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v4;
    v5 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v5;
    LODWORD(v5) = *(this + 4);
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


// CDOTAMatchMetadataFile::GetMetadata  (line 819, @0x0000000001d6d8c0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_, `anonymous namespace'::CDOTAMatchMetadataFile_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchMetadataFile::GetMetadata(const CDOTAMatchMetadataFile *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchMetadataFile_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchMetadataFile_reflection_;
  return result;
}


// CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill  (line 835, @0x0000000001d6ebc0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_PlayerKill::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchMetadata_Team_Player::MergeFrom, CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill(
        CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  *this = off_3F9BDF0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team_PlayerKill::InitAsDefaultInstance  (line 841, @0x0000000001d6ec60, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::InitAsDefaultInstance(
        CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill  (line 844, @0x0000000001d6ee10, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team_PlayerKill::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill(
        CDOTAMatchMetadata_Team_PlayerKill *const this,
        const CDOTAMatchMetadata_Team_PlayerKill *const from)
{
  *this = off_3F9BDF0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
  CDOTAMatchMetadata_Team_PlayerKill::MergeFrom(this, from);
}


// CDOTAMatchMetadata_Team_PlayerKill::SharedCtor  (line 851, @0x0000000001d6ec70, libserver.so)  // inlines: memset
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::SharedCtor(CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team_PlayerKill::~CDOTAMatchMetadata_Team_PlayerKill  (line 858, @0x0000000001d6aa10, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::~CDOTAMatchMetadata_Team_PlayerKill(
        CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F9BDF0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchMetadata_Team_PlayerKill::~CDOTAMatchMetadata_Team_PlayerKill  (line 858, @0x0000000001d6aa40, libserver.so)  // inlines: ~CDOTAMatchMetadata_Team_PlayerKill
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::~CDOTAMatchMetadata_Team_PlayerKill(
        CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F9BDF0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTAMatchMetadata_Team_PlayerKill::SharedDtor  (line 863, @0x0000000001d6eca0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::SharedDtor(CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_PlayerKill::SetCachedSize  (line 868, @0x0000000001d6a5f0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::SetCachedSize(
        const CDOTAMatchMetadata_Team_PlayerKill *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTAMatchMetadata_Team_PlayerKill::descriptor  (line 873, @0x0000000001d6ecb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchMetadata_Team_PlayerKill::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_descriptor_;
}


// CDOTAMatchMetadata_Team_PlayerKill::default_instance  (line 878, @0x0000000001d72ce0, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadata_Team_PlayerKill::default_instance_
const CDOTAMatchMetadata_Team_PlayerKill *__cdecl CDOTAMatchMetadata_Team_PlayerKill::default_instance()
{
  const CDOTAMatchMetadata_Team_PlayerKill *result; // rax

  result = CDOTAMatchMetadata_Team_PlayerKill::default_instance_;
  if ( CDOTAMatchMetadata_Team_PlayerKill::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchMetadata_Team_PlayerKill::default_instance_;
  }
  return result;
}


// CDOTAMatchMetadata_Team_PlayerKill::New  (line 885, @0x0000000001d6ec20, libserver.so)
// calls: operator new, CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill, operator delete, _Unwind_Resume
CDOTAMatchMetadata_Team_PlayerKill *__fastcall CDOTAMatchMetadata_Team_PlayerKill::New(
        const CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  CDOTAMatchMetadata_Team_PlayerKill *v1; // rbx

  v1 = operator new(0x20u);
  CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill(v1);
  return v1;
}


// CDOTAMatchMetadata_Team_PlayerKill::Clear  (line 889, @0x0000000001d6ab60, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::Clear(CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTAMatchMetadata_Team_PlayerKill::MergePartialFromCodedStream  (line 909, @0x0000000001d6e0e0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_count, set_has_victim_slot
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream
bool __fastcall CDOTAMatchMetadata_Team_PlayerKill::MergePartialFromCodedStream(
        CDOTAMatchMetadata_Team_PlayerKill *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v4; // r14
  unsigned int *v5; // r13
  unsigned int v7; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v10; // al
  google::protobuf::io::CodedInputStream *v11; // rsi
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v14; // rax
  int v15; // eax
  const google::protobuf::uint8 *v16; // rdx
  int v17; // eax

  v4 = (this + 24);
  v5 = (this + 28);
  v7 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( buffer >= buffer_end )
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
          if ( google::protobuf::internal::WireFormat::SkipField(input, v11, v7, v2) == 0 )
            return 0;
          buffer = input->buffer_;
          if ( buffer < input->buffer_end_ )
            goto LABEL_3;
        }
      }
      else
      {
        v11 = v10;
        input->last_tag_ = v10;
        input->buffer_ = buffer + 1;
      }
      if ( v11 >> 3 != 1 )
        break;
      if ( v11 != 8 )
        goto handle_unusual;
      v14 = input->buffer_;
      if ( v14 >= input->buffer_end_ || ((v15 = *v14) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
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
        goto parse_count;
      }
    }
    if ( v11 >> 3 != 2 || v11 != 16 )
      break;
    v16 = input->buffer_;
    buffer_end = input->buffer_end_;
parse_count:
    if ( v16 >= buffer_end || ((v17 = *v16) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5) == 0 )
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
handle_unusual:
  if ( v11 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTAMatchMetadata_Team_PlayerKill::SerializeWithCachedSizes  (line 970, @0x0000000001d6b660, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::SerializeWithCachedSizes(
        const CDOTAMatchMetadata_Team_PlayerKill *const this,
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
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(this + 7), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 6), output, v3);
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


// CDOTAMatchMetadata_Team_PlayerKill::SerializeWithCachedSizesToArray  (line 990, @0x0000000001d6d080, libserver.so)  // inlines: WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchMetadata_Team_PlayerKill::SerializeWithCachedSizesToArray(
        const CDOTAMatchMetadata_Team_PlayerKill *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  __int64 v7; // rax

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
  }
  v7 = *(this + 1);
  if ( v7 == 0 || *(v7 + 8) == *v7 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v7);
}


// CDOTAMatchMetadata_Team_PlayerKill::ByteSize  (line 1011, @0x0000000001d6b460, libserver.so)  // inlines: UInt32Size, VarintSize32, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAMatchMetadata_Team_Player::ByteSize
int __fastcall CDOTAMatchMetadata_Team_PlayerKill::ByteSize(const CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  _QWORD *v7; // rax
  google::protobuf::io::CodedOutputStream *v9; // rdi
  int v10; // eax

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
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v3 = v10 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v9 = *(this + 7);
      if ( v9 > 0x7F )
        v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1) + 1;
      else
        v3 += 2;
    }
  }
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMatchMetadata_Team_PlayerKill::MergeFrom  (line 1041, @0x0000000001d6ee90, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchMetadata_Team_PlayerKill*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchMetadata_Team_PlayerKill::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchMetadata_Team_PlayerKill
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::MergeFrom(
        CDOTAMatchMetadata_Team_PlayerKill *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchMetadata_Team_PlayerKill *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      1042);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAMatchMetadata_Team_PlayerKill,
               0)) != 0 )
  {
    CDOTAMatchMetadata_Team_PlayerKill::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchMetadata_Team_PlayerKill::MergeFrom  (line 1053, @0x0000000001d6ed40, libserver.so)  // inlines: set_count, set_has_count, set_has_victim_slot, set_victim_slot
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill, CDOTAMatchMetadata_Team_PlayerKill::MergeFrom, CDOTAMatchMetadata_Team_PlayerKill::CopyFrom, CDOTAMatchMetadata_Team_Player::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::MergeFrom(
        CDOTAMatchMetadata_Team_PlayerKill *const this,
        const CDOTAMatchMetadata_Team_PlayerKill *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  char v8; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      1054);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
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
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchMetadata_Team_PlayerKill::CopyFrom  (line 1066, @0x0000000001d6a600, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::CopyFrom(
        CDOTAMatchMetadata_Team_PlayerKill *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchMetadata_Team_PlayerKill::CopyFrom  (line 1072, @0x0000000001d6ef70, libserver.so)
// calls: CDOTAMatchMetadata_Team_PlayerKill::MergeFrom
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::CopyFrom(
        CDOTAMatchMetadata_Team_PlayerKill *const this,
        const CDOTAMatchMetadata_Team_PlayerKill *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchMetadata_Team_PlayerKill::MergeFrom(this, from);
  }
}


// CDOTAMatchMetadata_Team_PlayerKill::IsInitialized  (line 1078, @0x0000000001d6a640, libserver.so)
bool __fastcall CDOTAMatchMetadata_Team_PlayerKill::IsInitialized(const CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  return 1;
}


// CDOTAMatchMetadata_Team_PlayerKill::Swap  (line 1083, @0x0000000001d6efb0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMatchMetadata_Team_PlayerKill::Swap(
        CDOTAMatchMetadata_Team_PlayerKill *const this,
        CDOTAMatchMetadata_Team_PlayerKill *other)
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


// CDOTAMatchMetadata_Team_PlayerKill::GetMetadata  (line 1093, @0x0000000001d6d960, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_descriptor_, `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchMetadata_Team_PlayerKill::GetMetadata(
        const CDOTAMatchMetadata_Team_PlayerKill *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchMetadata_Team_PlayerKill_reflection_;
  return result;
}


// CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase  (line 1109, @0x0000000001d6f000, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_ItemPurchase::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchMetadata_Team_Player::MergeFrom, CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase(
        CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  *this = off_3F9BEB0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team_ItemPurchase::InitAsDefaultInstance  (line 1115, @0x0000000001d6f0a0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::InitAsDefaultInstance(
        CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase  (line 1118, @0x0000000001d6f250, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase(
        CDOTAMatchMetadata_Team_ItemPurchase *const this,
        const CDOTAMatchMetadata_Team_ItemPurchase *const from)
{
  *this = off_3F9BEB0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
  CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom(this, from);
}


// CDOTAMatchMetadata_Team_ItemPurchase::SharedCtor  (line 1125, @0x0000000001d6f0b0, libserver.so)  // inlines: memset
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::SharedCtor(CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team_ItemPurchase::~CDOTAMatchMetadata_Team_ItemPurchase  (line 1132, @0x0000000001d6aa80, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::~CDOTAMatchMetadata_Team_ItemPurchase(
        CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F9BEB0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchMetadata_Team_ItemPurchase::~CDOTAMatchMetadata_Team_ItemPurchase  (line 1132, @0x0000000001d6aab0, libserver.so)  // inlines: ~CDOTAMatchMetadata_Team_ItemPurchase
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::~CDOTAMatchMetadata_Team_ItemPurchase(
        CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F9BEB0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTAMatchMetadata_Team_ItemPurchase::SharedDtor  (line 1137, @0x0000000001d6f0e0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::SharedDtor(CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_ItemPurchase::SetCachedSize  (line 1142, @0x0000000001d6a650, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::SetCachedSize(
        const CDOTAMatchMetadata_Team_ItemPurchase *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTAMatchMetadata_Team_ItemPurchase::descriptor  (line 1147, @0x0000000001d6f0f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchMetadata_Team_ItemPurchase::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_descriptor_;
}


// CDOTAMatchMetadata_Team_ItemPurchase::default_instance  (line 1152, @0x0000000001d72d10, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadata_Team_ItemPurchase::default_instance_
const CDOTAMatchMetadata_Team_ItemPurchase *__cdecl CDOTAMatchMetadata_Team_ItemPurchase::default_instance()
{
  const CDOTAMatchMetadata_Team_ItemPurchase *result; // rax

  result = CDOTAMatchMetadata_Team_ItemPurchase::default_instance_;
  if ( CDOTAMatchMetadata_Team_ItemPurchase::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchMetadata_Team_ItemPurchase::default_instance_;
  }
  return result;
}


// CDOTAMatchMetadata_Team_ItemPurchase::New  (line 1159, @0x0000000001d6f060, libserver.so)
// calls: operator new, CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase, operator delete, _Unwind_Resume
CDOTAMatchMetadata_Team_ItemPurchase *__fastcall CDOTAMatchMetadata_Team_ItemPurchase::New(
        const CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  CDOTAMatchMetadata_Team_ItemPurchase *v1; // rbx

  v1 = operator new(0x20u);
  CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase(v1);
  return v1;
}


// CDOTAMatchMetadata_Team_ItemPurchase::Clear  (line 1163, @0x0000000001d6aba0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::Clear(CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTAMatchMetadata_Team_ItemPurchase::MergePartialFromCodedStream  (line 1183, @0x0000000001d6e2a0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_item_id, set_has_purchase_time
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream
bool __fastcall CDOTAMatchMetadata_Team_ItemPurchase::MergePartialFromCodedStream(
        CDOTAMatchMetadata_Team_ItemPurchase *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v4; // r14
  unsigned int v6; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v13; // rax
  int v14; // eax
  const google::protobuf::uint8 *v15; // rdx
  unsigned int v16; // eax
  unsigned int v17[13]; // [rsp+Ch] [rbp-34h] BYREF

  v4 = (this + 24);
  v6 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( buffer >= buffer_end )
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
          if ( google::protobuf::internal::WireFormat::SkipField(input, v10, v6, v2) == 0 )
            return 0;
          buffer = input->buffer_;
          if ( buffer < input->buffer_end_ )
            goto LABEL_3;
        }
      }
      else
      {
        v10 = v9;
        input->last_tag_ = v9;
        input->buffer_ = buffer + 1;
      }
      if ( v10 >> 3 != 1 )
        break;
      if ( v10 != 8 )
        goto handle_unusual;
      v13 = input->buffer_;
      if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *(this + 6) = v14;
        ++input->buffer_;
      }
      *(this + 4) |= 1u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 16 )
      {
        v15 = buffer + 1;
        input->buffer_ = v15;
        goto parse_purchase_time;
      }
    }
    if ( v10 >> 3 != 2 || v10 != 16 )
      break;
    v15 = input->buffer_;
    buffer_end = input->buffer_end_;
parse_purchase_time:
    if ( buffer_end <= v15 || ((v16 = *v15) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v17);
      if ( !result )
        return result;
      v16 = v17[0];
    }
    else
    {
      input->buffer_ = v15 + 1;
    }
    *(this + 4) |= 2u;
    *(this + 7) = v16;
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
handle_unusual:
  if ( v10 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTAMatchMetadata_Team_ItemPurchase::SerializeWithCachedSizes  (line 1244, @0x0000000001d6b6e0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::SerializeWithCachedSizes(
        const CDOTAMatchMetadata_Team_ItemPurchase *const this,
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
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 7), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 6), output, v3);
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


// CDOTAMatchMetadata_Team_ItemPurchase::SerializeWithCachedSizesToArray  (line 1264, @0x0000000001d6cfd0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchMetadata_Team_ItemPurchase::SerializeWithCachedSizesToArray(
        const CDOTAMatchMetadata_Team_ItemPurchase *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  __int64 v7; // rax

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
  }
  v7 = *(this + 1);
  if ( v7 == 0 || *(v7 + 8) == *v7 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v7);
}


// CDOTAMatchMetadata_Team_ItemPurchase::ByteSize  (line 1285, @0x0000000001d6ccb0, libserver.so)  // inlines: Int32Size, UInt32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAMatchMetadata_Team_Player::ByteSize
int __fastcall CDOTAMatchMetadata_Team_ItemPurchase::ByteSize(const CDOTAMatchMetadata_Team_ItemPurchase *const this)
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
        v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v3 = v11 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v9 = *(this + 7);
      v10 = 11;
      if ( v9 >= 0 )
      {
        LOBYTE(v10) = 2;
        if ( v9 > 0x7F )
          v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1) + 1;
      }
      v3 += v10;
    }
  }
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom  (line 1315, @0x0000000001d6f2d0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchMetadata_Team_ItemPurchase*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchMetadata_Team_ItemPurchase
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom(
        CDOTAMatchMetadata_Team_ItemPurchase *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchMetadata_Team_ItemPurchase *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      1316);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAMatchMetadata_Team_ItemPurchase,
               0)) != 0 )
  {
    CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom  (line 1327, @0x0000000001d6f180, libserver.so)  // inlines: set_has_item_id, set_has_purchase_time, set_item_id, set_purchase_time
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase, CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom, CDOTAMatchMetadata_Team_ItemPurchase::CopyFrom, CDOTAMatchMetadata_Team_Player::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom(
        CDOTAMatchMetadata_Team_ItemPurchase *const this,
        const CDOTAMatchMetadata_Team_ItemPurchase *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  char v8; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      1328);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
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
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchMetadata_Team_ItemPurchase::CopyFrom  (line 1340, @0x0000000001d6a660, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::CopyFrom(
        CDOTAMatchMetadata_Team_ItemPurchase *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchMetadata_Team_ItemPurchase::CopyFrom  (line 1346, @0x0000000001d6f3b0, libserver.so)
// calls: CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::CopyFrom(
        CDOTAMatchMetadata_Team_ItemPurchase *const this,
        const CDOTAMatchMetadata_Team_ItemPurchase *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom(this, from);
  }
}


// CDOTAMatchMetadata_Team_ItemPurchase::IsInitialized  (line 1352, @0x0000000001d6a6a0, libserver.so)
bool __fastcall CDOTAMatchMetadata_Team_ItemPurchase::IsInitialized(
        const CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  return 1;
}


// CDOTAMatchMetadata_Team_ItemPurchase::Swap  (line 1357, @0x0000000001d6f3f0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMatchMetadata_Team_ItemPurchase::Swap(
        CDOTAMatchMetadata_Team_ItemPurchase *const this,
        CDOTAMatchMetadata_Team_ItemPurchase *other)
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


// CDOTAMatchMetadata_Team_ItemPurchase::GetMetadata  (line 1367, @0x0000000001d6da00, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_descriptor_, `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchMetadata_Team_ItemPurchase::GetMetadata(
        const CDOTAMatchMetadata_Team_ItemPurchase *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchMetadata_Team_ItemPurchase_reflection_;
  return result;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot  (line 1387, @0x0000000001d6f490, libserver.so)  // inlines: RepeatedField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team_InventorySnapshot::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_InventorySnapshot::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchMetadata_Team_Player::MergeFrom, CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  *this = off_3F9BF70;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  CDOTAMatchMetadata_Team_InventorySnapshot::SharedCtor(this);
}


// CDOTAMatchMetadata_Team_InventorySnapshot::InitAsDefaultInstance  (line 1393, @0x0000000001d6f440, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::InitAsDefaultInstance(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot  (line 1396, @0x0000000001d73890, libserver.so)  // inlines: RepeatedField, ~RepeatedField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team_InventorySnapshot::SharedCtor, CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, operator delete [], google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        const CDOTAMatchMetadata_Team_InventorySnapshot *const from)
{
  *this = off_3F9BF70;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  CDOTAMatchMetadata_Team_InventorySnapshot::SharedCtor(this);
  CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom(this, from);
}


// CDOTAMatchMetadata_Team_InventorySnapshot::SharedCtor  (line 1403, @0x0000000001d6f450, libserver.so)  // inlines: memset
// callers: CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::SharedCtor(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  *(this + 5) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::~CDOTAMatchMetadata_Team_InventorySnapshot  (line 1413, @0x0000000001d6ba30, libserver.so)  // inlines: ~RepeatedField
// calls: operator delete [], google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMatchMetadata_Team_InventorySnapshot::~CDOTAMatchMetadata_Team_InventorySnapshot
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::~CDOTAMatchMetadata_Team_InventorySnapshot(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  void *v2; // rdi

  *this = off_3F9BF70;
  v2 = *(this + 3);
  if ( v2 != 0 )
    operator delete[](v2);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchMetadata_Team_InventorySnapshot::~CDOTAMatchMetadata_Team_InventorySnapshot  (line 1413, @0x0000000001d6ba70, libserver.so)
// calls: CDOTAMatchMetadata_Team_InventorySnapshot::~CDOTAMatchMetadata_Team_InventorySnapshot, operator delete
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::~CDOTAMatchMetadata_Team_InventorySnapshot(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  CDOTAMatchMetadata_Team_InventorySnapshot::~CDOTAMatchMetadata_Team_InventorySnapshot(this);
  operator delete(this);
}


// CDOTAMatchMetadata_Team_InventorySnapshot::SharedDtor  (line 1418, @0x0000000001d6f530, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::SharedDtor(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::SetCachedSize  (line 1423, @0x0000000001d6a6b0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::SetCachedSize(
        const CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::descriptor  (line 1428, @0x0000000001d6f540, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchMetadata_Team_InventorySnapshot::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_descriptor_;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::default_instance  (line 1433, @0x0000000001d72d40, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_
const CDOTAMatchMetadata_Team_InventorySnapshot *__cdecl CDOTAMatchMetadata_Team_InventorySnapshot::default_instance()
{
  const CDOTAMatchMetadata_Team_InventorySnapshot *result; // rax

  result = CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_;
  if ( CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchMetadata_Team_InventorySnapshot::default_instance_;
  }
  return result;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::New  (line 1440, @0x0000000001d6f4f0, libserver.so)
// calls: operator new, CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot, operator delete, _Unwind_Resume
CDOTAMatchMetadata_Team_InventorySnapshot *__fastcall CDOTAMatchMetadata_Team_InventorySnapshot::New(
        const CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  CDOTAMatchMetadata_Team_InventorySnapshot *v1; // rbx

  v1 = operator new(0x40u);
  CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot(v1);
  return v1;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::Clear  (line 1444, @0x0000000001d6acf0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::Clear(CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  bool v2; // zf
  google::protobuf::UnknownFieldSet *v3; // rdi

  if ( (*(this + 16) & 0x3E) != 0 )
  {
    *(this + 5) = 0;
    *(this + 6) = 0;
    *(this + 14) = 0;
  }
  v2 = *(this + 1) == 0;
  *(this + 8) = 0;
  v3 = (this + 8);
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(v3);
}


// CDOTAMatchMetadata_Team_InventorySnapshot::MergePartialFromCodedStream  (line 1467, @0x0000000001d73a40, libserver.so)  // inlines: Add, AddAlreadyReserved, Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPackedPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPackedPrimitiveNoInline<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadRepeatedPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_assists, set_has_deaths, set_has_game_time, set_has_kills, set_has_level
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::PushLimit(int), google::protobuf::io::CodedInputStream::BytesUntilLimit(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::RepeatedField<unsigned int>::Reserve, google::protobuf::io::CodedInputStream::PopLimit(int)
// callers: CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream
// globals: jpt_1D73AB0
bool __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::MergePartialFromCodedStream(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v3; // rcx
  unsigned int *v4; // r14
  unsigned int v5; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v10; // rdx
  int v11; // eax
  const google::protobuf::uint8 *v12; // rdx
  const google::protobuf::uint8 *v13; // rax
  int v14; // edx
  int fields; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  const google::protobuf::uint8 *v18; // rax
  bool result; // al
  const google::protobuf::uint8 *v20; // rdx
  int v21; // eax
  const google::protobuf::uint8 *v22; // rdx
  int v23; // eax
  int v24; // eax
  const google::protobuf::uint8 *v25; // rdx
  int v26; // eax
  const google::protobuf::uint8 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r8d
  google::protobuf::uint8 v31; // al
  int fields_high; // esi
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // [rsp+Ch] [rbp-54h]
  int v36; // [rsp+10h] [rbp-50h]
  google::protobuf::UnknownFieldSet v37; // [rsp+28h] [rbp-38h] BYREF

  v3 = &v37;
  v4 = (this + 56);
  v5 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
LABEL_2:
  while ( 2 )
  {
    while ( 1 )
    {
      if ( buffer < buffer_end )
      {
        TagFallback = *buffer;
        if ( TagFallback > 0 )
          break;
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
      input->last_tag_ = TagFallback;
      if ( TagFallback - 1 <= 0x7E )
        goto LABEL_5;
      if ( TagFallback == 0 )
        return 1;
LABEL_7:
      if ( (TagFallback & 7) == 4 )
        return 1;
      if ( google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v5, v3) == 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    input->last_tag_ = TagFallback;
    input->buffer_ = buffer + 1;
LABEL_5:
    switch ( TagFallback >> 3 )
    {
      case 1u:
        if ( TagFallback != 8 )
        {
          if ( TagFallback == 10 )
          {
            v13 = input->buffer_;
            if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v37) == 0 )
                return 0;
              fields = v37.fields_;
            }
            else
            {
              LODWORD(v37.fields_) = *v13;
              fields = v14;
              input->buffer_ = v13 + 1;
            }
            v35 = google::protobuf::io::CodedInputStream::PushLimit(input, fields);
            while ( 1 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
              {
                google::protobuf::io::CodedInputStream::PopLimit(input, v35);
                buffer = input->buffer_;
                buffer_end = input->buffer_end_;
                goto LABEL_86;
              }
              v18 = input->buffer_;
              if ( v18 < input->buffer_end_ && *v18 >= 0 )
              {
                HIDWORD(v37.fields_) = *v18;
                input->buffer_ = v18 + 1;
              }
              else if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v37.fields_ + 1) == 0 )
              {
                return 0;
              }
              v16 = *(this + 8);
              if ( v16 == *(this + 9) )
              {
                google::protobuf::RepeatedField<unsigned int>::Reserve((this + 24), v16 + 1);
                v16 = *(this + 8);
              }
              v17 = *(this + 3);
              *(this + 8) = v16 + 1;
              *(v17 + 4 * v16) = HIDWORD(v37.fields_);
            }
          }
          goto LABEL_7;
        }
        v27 = input->buffer_;
        buffer_end = input->buffer_end_;
        while ( 1 )
        {
          if ( v27 >= buffer_end || *v27 < 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v37.fields_ + 1) == 0 )
              return 0;
          }
          else
          {
            HIDWORD(v37.fields_) = *v27;
            input->buffer_ = v27 + 1;
          }
          v28 = *(this + 8);
          if ( v28 == *(this + 9) )
          {
            google::protobuf::RepeatedField<unsigned int>::Reserve((this + 24), v28 + 1);
            v28 = *(this + 8);
          }
          v29 = *(this + 3);
          *(this + 8) = v28 + 1;
          *(v29 + 4 * v28) = HIDWORD(v37.fields_);
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          v30 = *(this + 9) - *(this + 8);
          if ( v30 > 0 )
          {
            if ( buffer_end <= buffer )
              goto LABEL_2;
            do
            {
              if ( *buffer != 8 )
                break;
              input->buffer_ = buffer + 1;
              if ( buffer_end <= buffer + 1 || ((v31 = buffer[1]) & 0x80u) != 0 )
              {
                v36 = v30;
                if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v37.fields_ + 1) == 0 )
                  return 0;
                fields_high = HIDWORD(v37.fields_);
                v30 = v36;
              }
              else
              {
                fields_high = v31;
                HIDWORD(v37.fields_) = v31;
                input->buffer_ = buffer + 2;
              }
              v33 = *(this + 8);
              --v30;
              v34 = *(this + 3);
              *(this + 8) = v33 + 1;
              *(v34 + 4 * v33) = fields_high;
              buffer = input->buffer_;
              buffer_end = input->buffer_end_;
              if ( v30 == 0 )
                break;
            }
            while ( buffer < buffer_end );
          }
LABEL_86:
          if ( buffer_end <= buffer )
            goto LABEL_2;
          if ( *buffer != 8 )
            break;
          v27 = buffer + 1;
          input->buffer_ = v27;
        }
        if ( *buffer != 16 )
          continue;
        v10 = buffer + 1;
        input->buffer_ = v10;
parse_game_time:
        if ( v10 >= buffer_end || ((v11 = *v10) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v37.fields_ + 1);
          if ( result )
          {
            v11 = HIDWORD(v37.fields_);
            goto LABEL_15;
          }
          return result;
        }
        input->buffer_ = v10 + 1;
LABEL_15:
        *(this + 4) |= 2u;
        *(this + 10) = v11;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 24 )
          continue;
        v12 = buffer + 1;
        input->buffer_ = v12;
parse_kills:
        if ( buffer_end <= v12 || ((v23 = *v12) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 11) != 0 )
            goto LABEL_46;
          return 0;
        }
        *(this + 11) = v23;
        ++input->buffer_;
LABEL_46:
        *(this + 4) |= 4u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 32 )
          continue;
        v20 = buffer + 1;
        input->buffer_ = v20;
parse_deaths:
        if ( buffer_end <= v20 || ((v21 = *v20) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 12) != 0 )
            goto LABEL_38;
          return 0;
        }
        *(this + 12) = v21;
        ++input->buffer_;
LABEL_38:
        *(this + 4) |= 8u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 40 )
          continue;
        v22 = buffer + 1;
        input->buffer_ = v22;
parse_assists:
        if ( buffer_end <= v22 || ((v24 = *v22) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 13) != 0 )
            goto LABEL_54;
          return 0;
        }
        *(this + 13) = v24;
        ++input->buffer_;
LABEL_54:
        *(this + 4) |= 0x10u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 48 )
          continue;
        v25 = buffer + 1;
        input->buffer_ = v25;
parse_level:
        if ( v25 < buffer_end )
        {
          v26 = *v25;
          if ( (v26 & 0x80u) == 0 )
          {
            *(this + 14) = v26;
            ++input->buffer_;
            goto LABEL_65;
          }
        }
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
          return 0;
LABEL_65:
        *(this + 4) |= 0x20u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer != buffer_end )
          continue;
        if ( input->buffer_size_after_limit_ == 0 && input->total_bytes_read_ != input->current_limit_ )
        {
          buffer_end = input->buffer_;
          continue;
        }
        input->last_tag_ = 0;
        input->legitimate_message_end_ = 1;
        return 1;
      case 2u:
        if ( TagFallback != 16 )
          goto LABEL_7;
        v10 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_game_time;
      case 3u:
        if ( TagFallback != 24 )
          goto LABEL_7;
        v12 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_kills;
      case 4u:
        if ( TagFallback != 32 )
          goto LABEL_7;
        v20 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_deaths;
      case 5u:
        if ( TagFallback != 40 )
          goto LABEL_7;
        v22 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_assists;
      case 6u:
        if ( TagFallback != 48 )
          goto LABEL_7;
        v25 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_level;
      default:
        goto LABEL_7;
    }
  }
}


// CDOTAMatchMetadata_Team_InventorySnapshot::SerializeWithCachedSizes  (line 1593, @0x0000000001d6b760, libserver.so)  // inlines: empty, item_id
// calls: google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::SerializeWithCachedSizes(
        const CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // rbx
  int v7; // eax
  _QWORD *v8; // rax

  for ( i = 0; *(this + 8) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(*(this + 3) + 4 * i), output, v3);
  v7 = *(this + 4);
  if ( (v7 & 2) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 10), output, v3);
    v7 = *(this + 4);
    if ( (v7 & 4) == 0 )
    {
LABEL_5:
      if ( (v7 & 8) == 0 )
        goto LABEL_6;
      goto LABEL_13;
    }
  }
  else if ( (v7 & 4) == 0 )
  {
    goto LABEL_5;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 11), output, v3);
  v7 = *(this + 4);
  if ( (v7 & 8) == 0 )
  {
LABEL_6:
    if ( (v7 & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_14;
  }
LABEL_13:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 2, *(this + 12), output, v3);
  v7 = *(this + 4);
  if ( (v7 & 0x10) == 0 )
  {
LABEL_7:
    if ( (v7 & 0x20) == 0 )
      goto LABEL_8;
LABEL_15:
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6, *(this + 14), output, v3);
    v8 = *(this + 1);
    if ( v8 == 0 )
      return;
    goto LABEL_9;
  }
LABEL_14:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 3, *(this + 13), output, v3);
  if ( (*(this + 4) & 0x20) != 0 )
    goto LABEL_15;
LABEL_8:
  v8 = *(this + 1);
  if ( v8 == 0 )
    return;
LABEL_9:
  if ( v8[1] != *v8 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAMatchMetadata_Team_InventorySnapshot::SerializeWithCachedSizesToArray  (line 1634, @0x0000000001d6daa0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, item_id
// calls: google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchMetadata_Team_InventorySnapshot::SerializeWithCachedSizesToArray(
        const CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  __int64 v4; // r12
  int v5; // ebx
  unsigned __int8 *v6; // rdx
  google::protobuf::io::CodedOutputStream *v7; // rdi
  unsigned __int8 *v8; // rdx
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::uint8 *v10; // rsi
  google::protobuf::io::CodedOutputStream *v11; // rdi
  google::protobuf::io::CodedOutputStream *v12; // rdi
  google::protobuf::io::CodedOutputStream *v13; // rdi
  unsigned __int8 *v14; // rdx
  google::protobuf::io::CodedOutputStream *v15; // rdi
  __int64 v16; // rdx

  result = target;
  if ( *(this + 8) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = *(this + 3);
        v7 = *&v6[v4];
        *result = 8;
        if ( v7 > 0x7F )
          break;
        result[1] = v7;
        ++v5;
        result += 2;
        v4 += 4;
        if ( v5 >= *(this + 8) )
          goto LABEL_6;
      }
      ++v5;
      v4 += 4;
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, result + 1, v6);
    }
    while ( v5 < *(this + 8) );
  }
LABEL_6:
  v8 = *(this + 4);
  if ( (v8 & 2) != 0 )
  {
    v9 = *(this + 10);
    v10 = result + 1;
    *result = 16;
    if ( v9 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v9, v10, v8);
    }
    else if ( v9 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, v10, v8);
    }
    else
    {
      result[1] = v9;
      result += 2;
    }
    v8 = *(this + 4);
  }
  if ( (v8 & 4) != 0 )
  {
    v11 = *(this + 11);
    *result = 24;
    if ( v11 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v11, result + 1, v8);
    }
    else
    {
      result[1] = v11;
      result += 2;
    }
    v8 = *(this + 4);
  }
  if ( (v8 & 8) != 0 )
  {
    v12 = *(this + 12);
    *result = 32;
    if ( v12 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v12, result + 1, v8);
    }
    else
    {
      result[1] = v12;
      result += 2;
    }
    v8 = *(this + 4);
  }
  if ( (v8 & 0x10) != 0 )
  {
    v13 = *(this + 13);
    *result = 40;
    if ( v13 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v13, result + 1, v8);
    }
    else
    {
      result[1] = v13;
      result += 2;
    }
    LODWORD(v8) = *(this + 4);
  }
  v14 = (v8 & 0x20);
  if ( v14 != 0 )
  {
    v15 = *(this + 14);
    *result = 48;
    if ( v15 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v15, result + 1, v14);
    }
    else
    {
      result[1] = v15;
      result += 2;
    }
  }
  v16 = *(this + 1);
  if ( v16 != 0 && *(v16 + 8) != *v16 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v16);
  return result;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::ByteSize  (line 1676, @0x0000000001d6c3f0, libserver.so)  // inlines: Int32Size, UInt32Size, VarintSize32, VarintSize32SignExtended, empty, item_id
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTAMatchMetadata_Team_Player::ByteSize
int __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::ByteSize(
        const CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  unsigned int v1; // esi
  int v3; // r13d
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  google::protobuf::io::CodedOutputStream *v12; // rdi
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rbx
  int v16; // r12d
  google::protobuf::io::CodedOutputStream *v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  int v20; // r13d
  google::protobuf::io::CodedOutputStream *v22; // rdi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( (v4 & 0x1FE) == 0 )
    goto LABEL_19;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 2) != 0 )
  {
    v6 = *(this + 10);
    if ( v6 < 0 )
    {
      LOBYTE(v5) = v4;
      v3 = 11;
      if ( (v4 & 4) != 0 )
        goto LABEL_7;
      goto LABEL_10;
    }
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v7 + 1;
    }
  }
  if ( (v5 & 4) != 0 )
  {
LABEL_7:
    v8 = *(this + 11);
    v9 = 2;
    if ( v8 > 0x7F )
    {
      v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
      v5 = *(this + 4);
      v9 = v26 + 1;
    }
    v3 += v9;
  }
LABEL_10:
  if ( (v5 & 8) != 0 )
  {
    v10 = *(this + 12);
    v11 = 2;
    if ( v10 > 0x7F )
    {
      v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
      v5 = *(this + 4);
      v11 = v24 + 1;
    }
    v3 += v11;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v12 = *(this + 13);
    v13 = 2;
    if ( v12 > 0x7F )
    {
      v25 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, v1);
      v5 = *(this + 4);
      v13 = v25 + 1;
    }
    v3 += v13;
  }
  if ( (v5 & 0x20) != 0 )
  {
    v22 = *(this + 14);
    v23 = 2;
    if ( v22 > 0x7F )
      v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, v1) + 1;
    v3 += v23;
  }
LABEL_19:
  v14 = *(this + 8);
  if ( v14 <= 0 )
  {
    v16 = 0;
  }
  else
  {
    v15 = 0;
    v16 = 0;
    do
    {
      while ( 1 )
      {
        v17 = *(*(this + 3) + 4 * v15);
        if ( v17 > 0x7F )
          break;
        ++v16;
        if ( v14 <= ++v15 )
          goto LABEL_24;
      }
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, v1);
      v14 = *(this + 8);
      v16 += v18;
      ++v15;
    }
    while ( v14 > v15 );
  }
LABEL_24:
  v19 = *(this + 1);
  v20 = v14 + v16 + v3;
  if ( v19 != 0 && *(v19 + 8) != *v19 )
    v20 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v19);
  *(this + 5) = v20;
  return v20;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom  (line 1737, @0x0000000001d73920, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchMetadata_Team_InventorySnapshot*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchMetadata_Team_InventorySnapshot
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchMetadata_Team_InventorySnapshot *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      1738);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAMatchMetadata_Team_InventorySnapshot,
               0)) != 0 )
  {
    CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom  (line 1749, @0x0000000001d736d0, libserver.so)  // inlines: CopyArray, MergeFrom, memcpy, operator(), set_assists, set_deaths, set_game_time, set_has_assists, set_has_deaths, set_has_game_time, set_has_kills, set_has_level, set_kills, set_level
// calls: google::protobuf::RepeatedField<unsigned int>::Reserve, memcpy, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot, CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom, CDOTAMatchMetadata_Team_InventorySnapshot::CopyFrom, CDOTAMatchMetadata_Team_Player::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        const CDOTAMatchMetadata_Team_InventorySnapshot *const from)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v14; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v14,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      1750);
    v12 = google::protobuf::internal::LogMessage::operator<<(&v14, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v14,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v11 = google::protobuf::internal::LogMessage::operator<<(&v14, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v11);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  v4 = *(from + 8);
  if ( v4 != 0 )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve((this + 24), *(this + 8) + v4);
    memcpy((*(this + 3) + 4LL * *(this + 8)), *(from + 3), 4LL * *(from + 8));
    *(this + 8) += *(from + 8);
  }
  v5 = *(from + 4);
  if ( (v5 & 0x1FE) != 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      v6 = *(from + 10);
      *(this + 4) |= 2u;
      *(this + 10) = v6;
      v5 = *(from + 4);
    }
    if ( (v5 & 4) != 0 )
    {
      v7 = *(from + 11);
      *(this + 4) |= 4u;
      *(this + 11) = v7;
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
      v10 = *(from + 14);
      *(this + 4) |= 0x20u;
      *(this + 14) = v10;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchMetadata_Team_InventorySnapshot::CopyFrom  (line 1772, @0x0000000001d6a6c0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::CopyFrom(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchMetadata_Team_InventorySnapshot::CopyFrom  (line 1778, @0x0000000001d73a00, libserver.so)
// calls: CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::CopyFrom(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        const CDOTAMatchMetadata_Team_InventorySnapshot *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom(this, from);
  }
}


// CDOTAMatchMetadata_Team_InventorySnapshot::IsInitialized  (line 1784, @0x0000000001d6a700, libserver.so)
bool __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::IsInitialized(
        const CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  return 1;
}


// CDOTAMatchMetadata_Team_InventorySnapshot::Swap  (line 1789, @0x0000000001d6f5d0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::Swap(
        CDOTAMatchMetadata_Team_InventorySnapshot *const this,
        CDOTAMatchMetadata_Team_InventorySnapshot *other)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax

  if ( other != this )
  {
    v2 = *(this + 3);
    v3 = *(this + 8);
    v4 = *(this + 9);
    *(this + 3) = *(other + 3);
    *(this + 8) = *(other + 8);
    *(this + 9) = *(other + 9);
    *(other + 8) = v3;
    v5 = *(other + 10);
    *(other + 3) = v2;
    *(other + 9) = v4;
    v6 = *(this + 10);
    *(this + 10) = v5;
    v7 = *(other + 11);
    *(other + 10) = v6;
    v8 = *(this + 11);
    *(this + 11) = v7;
    v9 = *(other + 12);
    *(other + 11) = v8;
    v10 = *(this + 12);
    *(this + 12) = v9;
    v11 = *(other + 13);
    *(other + 12) = v10;
    v12 = *(this + 13);
    *(this + 13) = v11;
    v13 = *(other + 14);
    *(other + 13) = v12;
    v14 = *(this + 14);
    *(this + 14) = v13;
    v15 = *(other + 4);
    *(other + 14) = v14;
    v16 = *(this + 4);
    *(this + 4) = v15;
    v17 = *(other + 1);
    *(other + 4) = v16;
    v18 = *(this + 1);
    *(this + 1) = v17;
    LODWORD(v17) = *(other + 5);
    *(other + 1) = v18;
    LODWORD(v18) = *(this + 5);
    *(this + 5) = v17;
    *(other + 5) = v18;
  }
}


// CDOTAMatchMetadata_Team_InventorySnapshot::GetMetadata  (line 1803, @0x0000000001d6d3c0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_descriptor_, `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchMetadata_Team_InventorySnapshot::GetMetadata(
        const CDOTAMatchMetadata_Team_InventorySnapshot *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchMetadata_Team_InventorySnapshot_reflection_;
  return result;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria  (line 1819, @0x0000000001d6f670, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_AutoStyleCriteria::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchMetadata_Team_Player::MergeFrom, CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  *this = off_3F9C030;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::InitAsDefaultInstance  (line 1825, @0x0000000001d6f710, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::InitAsDefaultInstance(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria  (line 1828, @0x0000000001d6f8c0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const from)
{
  *this = off_3F9C030;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
  CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom(this, from);
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::SharedCtor  (line 1835, @0x0000000001d6f720, libserver.so)  // inlines: memset
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::SharedCtor(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::~CDOTAMatchMetadata_Team_AutoStyleCriteria  (line 1842, @0x0000000001d6aaf0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::~CDOTAMatchMetadata_Team_AutoStyleCriteria(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F9C030;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::~CDOTAMatchMetadata_Team_AutoStyleCriteria  (line 1842, @0x0000000001d6ab20, libserver.so)  // inlines: ~CDOTAMatchMetadata_Team_AutoStyleCriteria
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::~CDOTAMatchMetadata_Team_AutoStyleCriteria(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F9C030;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::SharedDtor  (line 1847, @0x0000000001d6f750, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::SharedDtor(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::SetCachedSize  (line 1852, @0x0000000001d6a710, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::SetCachedSize(
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::descriptor  (line 1857, @0x0000000001d6f760, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchMetadata_Team_AutoStyleCriteria::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_descriptor_;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance  (line 1862, @0x0000000001d72d70, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_
const CDOTAMatchMetadata_Team_AutoStyleCriteria *__cdecl CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance()
{
  const CDOTAMatchMetadata_Team_AutoStyleCriteria *result; // rax

  result = CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_;
  if ( CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchMetadata_Team_AutoStyleCriteria::default_instance_;
  }
  return result;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::New  (line 1869, @0x0000000001d6f6d0, libserver.so)
// calls: operator new, CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria, operator delete, _Unwind_Resume
CDOTAMatchMetadata_Team_AutoStyleCriteria *__fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::New(
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  CDOTAMatchMetadata_Team_AutoStyleCriteria *v1; // rbx

  v1 = operator new(0x20u);
  CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria(v1);
  return v1;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::Clear  (line 1873, @0x0000000001d6abe0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::Clear(CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::MergePartialFromCodedStream  (line 1893, @0x0000000001d6e470, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, memcpy, set_has_name_token, set_has_value
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// callers: CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream
bool __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::MergePartialFromCodedStream(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v4; // r13
  unsigned int v6; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v13; // rax
  int v14; // eax
  const google::protobuf::uint8 *v15; // rdx
  unsigned int v16; // eax
  unsigned int v17[13]; // [rsp+Ch] [rbp-34h] BYREF

  v4 = (this + 24);
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
        if ( google::protobuf::internal::WireFormat::SkipField(input, v10, v6, v2) == 0 )
          return 0;
        buffer = input->buffer_;
        if ( input->buffer_end_ > buffer )
          goto LABEL_3;
      }
    }
    else
    {
      v10 = v9;
      input->last_tag_ = v9;
      input->buffer_ = buffer + 1;
    }
    if ( v10 >> 3 != 1 )
      break;
    if ( v10 != 8 )
      goto handle_unusual;
    v13 = input->buffer_;
    if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
        return 0;
    }
    else
    {
      *(this + 6) = v14;
      ++input->buffer_;
    }
    *(this + 4) |= 1u;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 21 )
    {
      v15 = buffer + 1;
      input->buffer_ = v15;
parse_value:
      if ( buffer_end - v15 <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v17);
        if ( !result )
          return result;
        v16 = v17[0];
      }
      else
      {
        v16 = *v15;
        input->buffer_ = v15 + 4;
      }
      *(this + 4) |= 2u;
      *(this + 7) = v16;
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
  }
  if ( v10 >> 3 == 2 && v10 == 21 )
  {
    v15 = input->buffer_;
    buffer_end = input->buffer_end_;
    goto parse_value;
  }
handle_unusual:
  if ( v10 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::SerializeWithCachedSizes  (line 1954, @0x0000000001d6ba90, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::SerializeWithCachedSizes(
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
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
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2, output, *(this + 7), v2);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 6), output, v3);
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


// CDOTAMatchMetadata_Team_AutoStyleCriteria::SerializeWithCachedSizesToArray  (line 1974, @0x0000000001d6d120, libserver.so)  // inlines: WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::SerializeWithCachedSizesToArray(
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  int v6; // eax
  __int64 v7; // rax

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
    target += 5;
    *(target - 5) = 21;
    *(target - 1) = v6;
  }
  v7 = *(this + 1);
  if ( v7 == 0 || *(v7 + 8) == *v7 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v7);
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::ByteSize  (line 1995, @0x0000000001d6b4f0, libserver.so)  // inlines: UInt32Size, VarintSize32, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAMatchMetadata_Team_Player::ByteSize
int __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::ByteSize(
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  _QWORD *v6; // rax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    LOBYTE(v5) = *(this + 4);
    if ( (v4 & 1) != 0 )
    {
      v8 = *(this + 6);
      LOBYTE(v3) = 2;
      if ( v8 > 0x7F )
      {
        v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
        v5 = *(this + 4);
        v3 = v9 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
      v3 += 5;
  }
  v6 = *(this + 1);
  if ( v6 != 0 && v6[1] != *v6 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom  (line 2023, @0x0000000001d6f940, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchMetadata_Team_AutoStyleCriteria*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchMetadata_Team_AutoStyleCriteria
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchMetadata_Team_AutoStyleCriteria *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      2024);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAMatchMetadata_Team_AutoStyleCriteria,
               0)) != 0 )
  {
    CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom  (line 2035, @0x0000000001d6f7f0, libserver.so)  // inlines: set_has_name_token, set_has_value, set_name_token, set_value
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria, CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom, CDOTAMatchMetadata_Team_AutoStyleCriteria::CopyFrom, CDOTAMatchMetadata_Team_Player::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // xmm0_4
  __int64 v7; // rax
  char v8; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      2036);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
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
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::CopyFrom  (line 2048, @0x0000000001d6a720, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::CopyFrom(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::CopyFrom  (line 2054, @0x0000000001d6fa20, libserver.so)
// calls: CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::CopyFrom(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom(this, from);
  }
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::IsInitialized  (line 2060, @0x0000000001d6a760, libserver.so)
bool __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::IsInitialized(
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  return 1;
}


// CDOTAMatchMetadata_Team_AutoStyleCriteria::Swap  (line 2065, @0x0000000001d6fa60, libserver.so)  // inlines: Swap, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::Swap(
        CDOTAMatchMetadata_Team_AutoStyleCriteria *const this,
        CDOTAMatchMetadata_Team_AutoStyleCriteria *other)
{
  int v2; // eax
  int v3; // xmm1_4
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


// CDOTAMatchMetadata_Team_AutoStyleCriteria::GetMetadata  (line 2075, @0x0000000001d6d460, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_descriptor_, `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchMetadata_Team_AutoStyleCriteria::GetMetadata(
        const CDOTAMatchMetadata_Team_AutoStyleCriteria *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchMetadata_Team_AutoStyleCriteria_reflection_;
  return result;
}


// CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player  (line 2115, @0x0000000001d6fb90, libserver.so)  // inlines: RepeatedField, RepeatedPtrField, RepeatedPtrFieldBase
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team_Player::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMatchMetadata_Team_Player::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchMetadata_Team::MergeFrom, CDOTAMatchMetadata_Team::MergePartialFromCodedStream, CDOTAGCServerSystem::WriteMatchMetadataTeam
void __fastcall CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player(
        CDOTAMatchMetadata_Team_Player *const this)
{
  *this = off_3F9C0F0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 9) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 22) = 0;
  *(this + 12) = 0;
  *(this + 26) = 0;
  *(this + 27) = 0;
  *(this + 28) = 0;
  *(this + 22) = 0;
  *(this + 46) = 0;
  *(this + 47) = 0;
  *(this + 24) = 0;
  *(this + 50) = 0;
  *(this + 51) = 0;
  *(this + 27) = 0;
  *(this + 56) = 0;
  *(this + 57) = 0;
  *(this + 58) = 0;
  *(this + 30) = 0;
  *(this + 62) = 0;
  *(this + 63) = 0;
  *(this + 64) = 0;
  CDOTAMatchMetadata_Team_Player::SharedCtor(this);
}


// CDOTAMatchMetadata_Team_Player::InitAsDefaultInstance  (line 2121, @0x0000000001d6fac0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_Player::InitAsDefaultInstance(CDOTAMatchMetadata_Team_Player *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player  (line 2124, @0x0000000001d74b80, libserver.so)  // inlines: RepeatedField, RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedField, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team_Player::SharedCtor, CDOTAMatchMetadata_Team_Player::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, operator delete [], google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player(
        CDOTAMatchMetadata_Team_Player *const this,
        const CDOTAMatchMetadata_Team_Player *const from)
{
  *this = off_3F9C0F0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 9) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 22) = 0;
  *(this + 12) = 0;
  *(this + 26) = 0;
  *(this + 27) = 0;
  *(this + 28) = 0;
  *(this + 22) = 0;
  *(this + 46) = 0;
  *(this + 47) = 0;
  *(this + 24) = 0;
  *(this + 50) = 0;
  *(this + 51) = 0;
  *(this + 27) = 0;
  *(this + 56) = 0;
  *(this + 57) = 0;
  *(this + 58) = 0;
  *(this + 30) = 0;
  *(this + 62) = 0;
  *(this + 63) = 0;
  *(this + 64) = 0;
  CDOTAMatchMetadata_Team_Player::SharedCtor(this);
  CDOTAMatchMetadata_Team_Player::MergeFrom(this, from);
}


// CDOTAMatchMetadata_Team_Player::SharedCtor  (line 2131, @0x0000000001d6fad0, libserver.so)  // inlines: memset
// callers: CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player
void __fastcall CDOTAMatchMetadata_Team_Player::SharedCtor(CDOTAMatchMetadata_Team_Player *const this)
{
  *(this + 5) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 30) = 0;
  *(this + 31) = 0;
  *(this + 32) = 0;
  *(this + 33) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  *(this + 36) = 0;
  *(this + 37) = 0;
  *(this + 38) = 0;
  *(this + 39) = 0;
  *(this + 40) = 0;
  *(this + 41) = 0;
  *(this + 42) = 0;
  *(this + 43) = 0;
  *(this + 52) = 0;
  *(this + 212) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player  (line 2154, @0x0000000001d6c7c0, libserver.so)  // inlines: ~RepeatedField, ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, operator delete [], google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player
void __fastcall CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player(
        CDOTAMatchMetadata_Team_Player *const this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *this = off_3F9C0F0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>(
    this + 10,
    (this + 252));
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>(
    this + 9,
    (this + 228));
  v2 = *(this + 24);
  if ( v2 != 0 )
    operator delete[](v2);
  v3 = *(this + 22);
  if ( v3 != 0 )
    operator delete[](v3);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>(
    this + 4,
    (this + 108));
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>(
    this + 3,
    (this + 84));
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>(
    this + 2,
    (this + 60));
  v4 = *(this + 3);
  if ( v4 != 0 )
    operator delete[](v4);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player  (line 2154, @0x0000000001d6c870, libserver.so)
// calls: CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player, operator delete
void __fastcall CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player(
        CDOTAMatchMetadata_Team_Player *const this)
{
  CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player(this);
  operator delete(this);
}


// CDOTAMatchMetadata_Team_Player::SharedDtor  (line 2159, @0x0000000001d6fd10, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_Player::SharedDtor(CDOTAMatchMetadata_Team_Player *const this)
{
  ;
}


// CDOTAMatchMetadata_Team_Player::SetCachedSize  (line 2164, @0x0000000001d6a770, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_Player::SetCachedSize(
        const CDOTAMatchMetadata_Team_Player *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTAMatchMetadata_Team_Player::descriptor  (line 2169, @0x0000000001d6fd20, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_Player_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchMetadata_Team_Player::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchMetadata_Team_Player_descriptor_;
}


// CDOTAMatchMetadata_Team_Player::default_instance  (line 2174, @0x0000000001d72da0, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadata_Team_Player::default_instance_
const CDOTAMatchMetadata_Team_Player *__cdecl CDOTAMatchMetadata_Team_Player::default_instance()
{
  const CDOTAMatchMetadata_Team_Player *result; // rax

  result = CDOTAMatchMetadata_Team_Player::default_instance_;
  if ( CDOTAMatchMetadata_Team_Player::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchMetadata_Team_Player::default_instance_;
  }
  return result;
}


// CDOTAMatchMetadata_Team_Player::New  (line 2181, @0x0000000001d6fcd0, libserver.so)
// calls: operator new, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player, operator delete, _Unwind_Resume
CDOTAMatchMetadata_Team_Player *__fastcall CDOTAMatchMetadata_Team_Player::New(
        const CDOTAMatchMetadata_Team_Player *const this)
{
  CDOTAMatchMetadata_Team_Player *v1; // rbx

  v1 = operator new(0x108u);
  CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player(v1);
  return v1;
}


// CDOTAMatchMetadata_Team_Player::Clear  (line 2185, @0x0000000001d6ad50, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, Clear<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAMatchMetadata_Team_Player::Clear(CDOTAMatchMetadata_Team_Player *const this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // r13
  int v5; // r12d
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // r13
  int v13; // r12d
  __int64 v14; // rdi
  int v15; // edx
  __int64 v16; // r13
  int v17; // r12d
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // r13
  int v21; // r12d
  __int64 v22; // rdi
  bool v23; // zf
  int v24; // eax

  *(this + 5) = 0;
  v2 = *(this + 4);
  *(this + 15) = 0;
  if ( BYTE1(v2) != 0 )
  {
    *(this + 16) = 0;
    v24 = *(this + 4);
    *(this + 17) = 0;
    *(this + 18) = 0;
    *(this + 19) = 0;
    if ( (v24 & 0x1F0000) == 0 )
      goto LABEL_3;
  }
  else if ( (v2 & 0x1F0000) == 0 )
  {
    goto LABEL_3;
  }
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 52) = 0;
LABEL_3:
  v3 = *(this + 14);
  v4 = 0;
  v5 = 0;
  *(this + 212) = 0;
  *(this + 8) = 0;
  if ( v3 > 0 )
  {
    do
    {
      ++v5;
      v6 = *(*(this + 6) + v4);
      v4 += 8;
      (*(*v6 + 32LL))(v6);
    }
    while ( v5 < *(this + 14) );
  }
  v7 = *(this + 20);
  v8 = 0;
  v9 = 0;
  *(this + 14) = 0;
  if ( v7 > 0 )
  {
    do
    {
      ++v9;
      v10 = *(*(this + 9) + v8);
      v8 += 8;
      (*(*v10 + 32LL))(v10);
    }
    while ( v9 < *(this + 20) );
  }
  v11 = *(this + 26);
  v12 = 0;
  v13 = 0;
  *(this + 20) = 0;
  if ( v11 > 0 )
  {
    do
    {
      ++v13;
      v14 = *(*(this + 12) + v12);
      v12 += 8;
      (*(*v14 + 32LL))(v14);
    }
    while ( v13 < *(this + 26) );
  }
  v15 = *(this + 56);
  v16 = 0;
  v17 = 0;
  *(this + 26) = 0;
  *(this + 46) = 0;
  *(this + 50) = 0;
  if ( v15 > 0 )
  {
    do
    {
      ++v17;
      v18 = *(*(this + 27) + v16);
      v16 += 8;
      (*(*v18 + 32LL))(v18);
    }
    while ( v17 < *(this + 56) );
  }
  v19 = *(this + 62);
  v20 = 0;
  v21 = 0;
  *(this + 56) = 0;
  if ( v19 > 0 )
  {
    do
    {
      ++v21;
      v22 = *(*(this + 30) + v20);
      v20 += 8;
      (*(*v22 + 32LL))(v22);
    }
    while ( v21 < *(this + 62) );
  }
  v23 = *(this + 1) == 0;
  *(this + 4) = 0;
  *(this + 62) = 0;
  if ( !v23 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream  (line 2222, @0x0000000001d75ed0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, AddAlreadyReserved, Advance, BufferSize, DecodeFloat, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, ExpectTagFromArray, GetDirectBufferPointerInline, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadLittleEndian32, ReadMessageNoVirtual<CDOTAMatchMetadata_Team_AutoStyleCriteria>, ReadMessageNoVirtual<CDOTAMatchMetadata_Team_InventorySnapshot>, ReadMessageNoVirtual<CDOTAMatchMetadata_Team_ItemPurchase>, ReadMessageNoVirtual<CDOTAMatchMetadata_Team_PlayerKill>, ReadMessageNoVirtual<CSOEconItem>, ReadPackedFixedSizePrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPackedPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPackedPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPackedPrimitiveNoInline<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPackedPrimitiveNoInline<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPrimitiveFromArray<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadRepeatedFixedSizePrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadRepeatedPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadRepeatedPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, Resize, Truncate, __fill_a<float*, float>, add_auto_style_criteria, add_equipped_econ_items, add_inventory_snapshot, add_items, add_kills, fill<float*, float>, memcpy, set_has_account_id, set_has_avg_assists_x16, set_has_avg_deaths_x16, set_has_avg_gpm_x16, set_has_avg_kills_x16, set_has_avg_stats_calibrated, set_has_avg_xpm_x16, set_has_best_assists_x16, set_has_best_gpm_x16, set_has_best_kills_x16, set_has_best_win_streak, set_has_best_xpm_x16, set_has_farm_score, set_has_fight_score, set_has_player_slot, set_has_push_score, set_has_support_score, set_has_win_streak
// calls: google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadRaw(void *,int), operator new, CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria, google::protobuf::io::CodedInputStream::PushLimit(int), CDOTAMatchMetadata_Team_AutoStyleCriteria::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot, CDOTAMatchMetadata_Team_InventorySnapshot::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(void), google::protobuf::io::CodedInputStream::BytesUntilLimit(void) (27 total)
// callers: CDOTAMatchMetadata_Team::MergePartialFromCodedStream
// globals: jpt_1D75F44
bool __fastcall CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream(
        CDOTAMatchMetadata_Team_Player *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  const google::protobuf::uint8 *buffer; // rdx
  unsigned __int64 buffer_end; // rcx
  unsigned __int64 v7; // rsi
  google::protobuf::uint32 TagFallback; // eax
  int v9; // r15d
  __int64 v10; // rax
  bool result; // al
  __int64 v12; // rax
  int v13; // edx
  CDOTAMatchMetadata_Team_AutoStyleCriteria *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  const google::protobuf::uint8 *v17; // rax
  int v18; // eax
  bool v19; // cc
  int v20; // edx
  const google::protobuf::uint8 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  CDOTAMatchMetadata_Team_InventorySnapshot *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  const google::protobuf::uint8 *v28; // rax
  int v29; // eax
  int v30; // eax
  const google::protobuf::uint8 *v31; // rax
  unsigned int v32; // edx
  unsigned __int64 v33; // r15
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  const google::protobuf::uint8 *v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // r15d
  int v41; // eax
  const google::protobuf::uint8 *v42; // rax
  int v43; // esi
  __int64 v44; // rax
  __int64 v45; // rdx
  const google::protobuf::uint8 *v46; // rax
  const google::protobuf::uint8 *v47; // rdx
  const google::protobuf::uint8 *v48; // rax
  unsigned int v49; // eax
  const google::protobuf::uint8 *v50; // rdx
  const google::protobuf::uint8 *v51; // rdx
  const google::protobuf::uint8 *v52; // rax
  unsigned int v53; // eax
  const google::protobuf::uint8 *v54; // rdx
  const google::protobuf::uint8 *v55; // rax
  unsigned int v56; // eax
  const google::protobuf::uint8 *v57; // rdx
  const google::protobuf::uint8 *v58; // rax
  unsigned int v59; // eax
  const google::protobuf::uint8 *v60; // rdx
  int v61; // eax
  const google::protobuf::uint8 *v62; // rdx
  int v63; // eax
  const google::protobuf::uint8 *v64; // rdx
  int v65; // eax
  const google::protobuf::uint8 *v66; // rdx
  int v67; // eax
  const google::protobuf::uint8 *v68; // rdx
  int v69; // eax
  const google::protobuf::uint8 *v70; // rdx
  int v71; // eax
  const google::protobuf::uint8 *v72; // rdx
  int v73; // eax
  const google::protobuf::uint8 *v74; // rdx
  int v75; // eax
  const google::protobuf::uint8 *v76; // rdx
  int v77; // eax
  const google::protobuf::uint8 *v78; // rdx
  int v79; // eax
  const google::protobuf::uint8 *v80; // rdx
  int v81; // eax
  int v82; // edx
  __int64 v83; // rax
  CDOTAMatchMetadata_Team_ItemPurchase *v84; // r15
  __int64 v85; // rax
  __int64 v86; // rdx
  const google::protobuf::uint8 *v87; // rax
  int v88; // eax
  int v89; // eax
  __int64 v90; // rdx
  CDOTAMatchMetadata_Team_PlayerKill *v91; // r15
  __int64 v92; // rax
  __int64 v93; // rdx
  const google::protobuf::uint8 *v94; // rax
  int v95; // eax
  int v96; // eax
  __int64 v97; // rax
  int v98; // edx
  __int64 v99; // rdx
  CSOEconItem *v100; // r15
  __int64 v101; // rax
  __int64 v102; // rdx
  const google::protobuf::uint8 *v103; // rax
  int v104; // eax
  int recursion_depth; // eax
  __int64 v106; // rax
  int v107; // edx
  __int64 v108; // rdx
  const google::protobuf::uint8 *v109; // rdx
  int v110; // eax
  const google::protobuf::uint8 *v111; // rax
  int v112; // esi
  __int64 v113; // rax
  __int64 v114; // rdx
  const google::protobuf::uint8 *v115; // rax
  const google::protobuf::uint8 *v116; // rax
  int v117; // eax
  const google::protobuf::uint8 *v118; // rdx
  __int64 v119; // rdx
  const google::protobuf::uint8 *v120; // rax
  const google::protobuf::uint8 *v121; // rsi
  unsigned int v122; // edx
  __int64 v123; // rax
  unsigned int v124; // xmm0_4
  __int64 v125; // rdx
  const google::protobuf::uint8 *v126; // r9
  int v127; // r10d
  __int64 v128; // rdi
  int v129; // r8d
  int v130; // eax
  __int64 v131; // rax
  __int64 v132; // rdx
  int v133; // r15d
  __int64 v134; // rax
  __int64 v135; // rdx
  int v136; // r15d
  const google::protobuf::uint8 *v137; // rax
  unsigned __int64 v138; // r8
  int v139; // edi
  unsigned int v140; // edx
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rdx
  const google::protobuf::uint8 *v144; // rcx
  int v145; // eax
  __int64 v146; // rdx
  int v147; // xmm0_4
  google::protobuf::uint8 v148; // al
  unsigned int v149; // ecx
  __int64 v150; // rax
  __int64 v151; // rdx
  _DWORD *v152; // rcx
  _DWORD *v153; // rdx
  __int64 v154; // [rsp+8h] [rbp-68h]
  google::protobuf::RepeatedField<float> *v155; // [rsp+8h] [rbp-68h]
  bool legitimate_message_end; // [rsp+10h] [rbp-60h]
  unsigned int v157; // [rsp+10h] [rbp-60h]
  unsigned int v158; // [rsp+18h] [rbp-58h]
  int v159; // [rsp+1Ch] [rbp-54h]
  int v160; // [rsp+1Ch] [rbp-54h]
  unsigned int v161; // [rsp+1Ch] [rbp-54h]
  unsigned int v162; // [rsp+1Ch] [rbp-54h]
  int v163; // [rsp+1Ch] [rbp-54h]
  int v164; // [rsp+1Ch] [rbp-54h]
  int v165; // [rsp+1Ch] [rbp-54h]
  int v166; // [rsp+1Ch] [rbp-54h]
  int v167; // [rsp+1Ch] [rbp-54h]
  int v168; // [rsp+1Ch] [rbp-54h]
  google::protobuf::internal::RepeatedPtrFieldBase *v169; // [rsp+28h] [rbp-48h]
  unsigned int v170; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v171[2]; // [rsp+38h] [rbp-38h] BYREF

  v2 = this + 8;
  v169 = (this + 240);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
LABEL_2:
  while ( 2 )
  {
    while ( 1 )
    {
      if ( buffer_end > buffer )
      {
        v7 = *buffer;
        if ( v7 > 0 )
        {
          input->last_tag_ = v7;
          input->buffer_ = buffer + 1;
          goto LABEL_5;
        }
        if ( buffer_end > (buffer + 1) && (*buffer & ~buffer[1]) > 0x7Fu )
          break;
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
      v7 = TagFallback;
      input->last_tag_ = TagFallback;
      if ( TagFallback - 1 <= 0x3FFE )
        goto LABEL_5;
handle_unusual:
      if ( v7 == 0 || (v7 & 7) == 4 )
        return 1;
      if ( google::protobuf::internal::WireFormat::SkipField(input, v7, v2, buffer_end) == 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    buffer_end = buffer[1] << 7;
    v7 = (v7 + buffer_end - 128);
    input->buffer_ = buffer + 2;
    input->last_tag_ = v7;
LABEL_5:
    switch ( v7 >> 3 )
    {
      case 1u:
        if ( v7 != 8 )
          goto handle_unusual;
        v116 = input->buffer_;
        if ( v116 >= input->buffer_end_ || ((v117 = *v116) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 10) == 0 )
            return 0;
        }
        else
        {
          *(this + 10) = v117;
          ++input->buffer_;
        }
        *(this + 4) |= 1u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end && *buffer == 16 )
          goto LABEL_304;
        continue;
      case 2u:
        if ( v7 != 16 )
        {
          if ( v7 != 18 )
            goto handle_unusual;
          v111 = input->buffer_;
          if ( v111 >= input->buffer_end_ || ((v112 = *v111) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v170) == 0 )
              return 0;
            v112 = v170;
          }
          else
          {
            v170 = *v111;
            input->buffer_ = v111 + 1;
          }
          v167 = google::protobuf::io::CodedInputStream::PushLimit(input, v112);
          while ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
          {
            v115 = input->buffer_;
            if ( v115 < input->buffer_end_ && *v115 >= 0 )
            {
              v171[0] = *v115;
              input->buffer_ = v115 + 1;
            }
            else if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
            {
              return 0;
            }
            v113 = *(this + 8);
            if ( v113 == *(this + 9) )
            {
              google::protobuf::RepeatedField<unsigned int>::Reserve((this + 24), v113 + 1);
              v113 = *(this + 8);
            }
            v114 = *(this + 3);
            *(this + 8) = v113 + 1;
            *(v114 + 4 * v113) = v171[0];
          }
          google::protobuf::io::CodedInputStream::PopLimit(input, v167);
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          goto LABEL_333;
        }
        v118 = input->buffer_;
        buffer_end = input->buffer_end_;
        while ( 1 )
        {
          if ( v118 >= buffer_end || *v118 < 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
              return 0;
          }
          else
          {
            v171[0] = *v118;
            input->buffer_ = v118 + 1;
          }
          v131 = *(this + 8);
          if ( v131 == *(this + 9) )
          {
            google::protobuf::RepeatedField<unsigned int>::Reserve((this + 24), v131 + 1);
            v131 = *(this + 8);
          }
          v132 = *(this + 3);
          *(this + 8) = v131 + 1;
          *(v132 + 4 * v131) = v171[0];
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          v133 = *(this + 9) - *(this + 8);
          if ( v133 > 0 && buffer_end > buffer )
          {
            while ( *buffer == 16 )
            {
              input->buffer_ = buffer + 1;
              if ( (buffer + 1) >= buffer_end || ((v148 = buffer[1]) & 0x80u) != 0 )
              {
                if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
                  return 0;
                v149 = v171[0];
              }
              else
              {
                v149 = v148;
                v171[0] = v148;
                input->buffer_ = buffer + 2;
              }
              v150 = *(this + 8);
              --v133;
              v151 = *(this + 3);
              *(this + 8) = v150 + 1;
              *(v151 + 4 * v150) = v149;
              buffer = input->buffer_;
              buffer_end = input->buffer_end_;
              if ( v133 == 0 )
                break;
              if ( buffer >= buffer_end )
                goto LABEL_2;
            }
          }
LABEL_333:
          if ( buffer >= buffer_end )
            goto LABEL_2;
          if ( *buffer != 16 )
            break;
LABEL_304:
          v118 = buffer + 1;
          input->buffer_ = v118;
        }
        if ( *buffer != 24 )
          continue;
        v109 = buffer + 1;
        input->buffer_ = v109;
parse_player_slot:
        if ( v109 >= buffer_end || ((v110 = *v109) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 11) == 0 )
            return 0;
        }
        else
        {
          *(this + 11) = v110;
          ++input->buffer_;
        }
        *(this + 4) |= 4u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 34 )
          continue;
        input->buffer_ = buffer + 1;
LABEL_273:
        v106 = *(this + 14);
        v107 = *(this + 15);
        if ( v106 >= v107 )
        {
          if ( v107 == *(this + 16) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 2, v107 + 1);
          v100 = operator new(0x88u);
          CSOEconItem::CSOEconItem(v100);
          v101 = *(this + 14);
          v102 = *(this + 6);
          ++*(this + 15);
          *(this + 14) = v101 + 1;
          *(v102 + 8 * v101) = v100;
        }
        else
        {
          v108 = *(this + 6);
          *(this + 14) = v106 + 1;
          v100 = *(v108 + 8 * v106);
        }
        v103 = input->buffer_;
        if ( v103 >= input->buffer_end_ || *v103 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
            return 0;
        }
        else
        {
          v171[0] = *v103;
          input->buffer_ = v103 + 1;
        }
        v104 = input->recursion_depth_ + 1;
        v19 = input->recursion_limit_ < v104;
        input->recursion_depth_ = v104;
        if ( v19 )
          return 0;
        v166 = google::protobuf::io::CodedInputStream::PushLimit(input, v171[0]);
        if ( !CSOEconItem::MergePartialFromCodedStream(v100, input) || !input->legitimate_message_end_ )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(input, v166);
        recursion_depth = input->recursion_depth_;
        if ( recursion_depth > 0 )
          input->recursion_depth_ = recursion_depth - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end )
          continue;
        if ( *buffer == 34 )
        {
          input->buffer_ = buffer + 1;
          goto LABEL_273;
        }
        if ( *buffer != 42 )
          continue;
        input->buffer_ = buffer + 1;
LABEL_255:
        v97 = *(this + 20);
        v98 = *(this + 21);
        if ( v97 >= v98 )
        {
          if ( v98 == *(this + 22) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 3, v98 + 1);
          v91 = operator new(0x20u);
          CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill(v91);
          v92 = *(this + 20);
          v93 = *(this + 9);
          ++*(this + 21);
          *(this + 20) = v92 + 1;
          *(v93 + 8 * v92) = v91;
        }
        else
        {
          v99 = *(this + 9);
          *(this + 20) = v97 + 1;
          v91 = *(v99 + 8 * v97);
        }
        v94 = input->buffer_;
        if ( v94 >= input->buffer_end_ || *v94 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
            return 0;
        }
        else
        {
          v171[0] = *v94;
          input->buffer_ = v94 + 1;
        }
        v95 = input->recursion_depth_ + 1;
        v19 = input->recursion_limit_ < v95;
        input->recursion_depth_ = v95;
        if ( v19 )
          return 0;
        v165 = google::protobuf::io::CodedInputStream::PushLimit(input, v171[0]);
        if ( !CDOTAMatchMetadata_Team_PlayerKill::MergePartialFromCodedStream(v91, input)
          || !input->legitimate_message_end_ )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(input, v165);
        v96 = input->recursion_depth_;
        if ( v96 > 0 )
          input->recursion_depth_ = v96 - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end )
          continue;
        if ( *buffer == 42 )
        {
          input->buffer_ = buffer + 1;
          goto LABEL_255;
        }
        if ( *buffer != 50 )
          continue;
        input->buffer_ = buffer + 1;
LABEL_223:
        v82 = *(this + 27);
        v83 = *(this + 26);
        if ( v83 >= v82 )
          goto LABEL_224;
LABEL_238:
        v90 = *(this + 12);
        *(this + 26) = v83 + 1;
        v84 = *(v90 + 8 * v83);
LABEL_227:
        v87 = input->buffer_;
        if ( v87 >= input->buffer_end_ || *v87 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
            return 0;
        }
        else
        {
          v171[0] = *v87;
          input->buffer_ = v87 + 1;
        }
        v88 = input->recursion_depth_ + 1;
        v19 = input->recursion_limit_ < v88;
        input->recursion_depth_ = v88;
        if ( v19 )
          return 0;
        v164 = google::protobuf::io::CodedInputStream::PushLimit(input, v171[0]);
        if ( !CDOTAMatchMetadata_Team_ItemPurchase::MergePartialFromCodedStream(v84, input)
          || !input->legitimate_message_end_ )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(input, v164);
        v89 = input->recursion_depth_;
        if ( v89 > 0 )
          input->recursion_depth_ = v89 - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end )
          continue;
        if ( *buffer == 50 )
        {
          input->buffer_ = buffer + 1;
          v83 = *(this + 26);
          v82 = *(this + 27);
          if ( v83 < v82 )
            goto LABEL_238;
LABEL_224:
          if ( v82 == *(this + 28) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 4, v82 + 1);
          v84 = operator new(0x20u);
          CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase(v84);
          v85 = *(this + 26);
          v86 = *(this + 12);
          ++*(this + 27);
          *(this + 26) = v85 + 1;
          *(v86 + 8 * v85) = v84;
          goto LABEL_227;
        }
        if ( *buffer != 56 )
          continue;
        v80 = buffer + 1;
        input->buffer_ = v80;
parse_avg_kills_x16:
        if ( buffer_end <= v80 || ((v81 = *v80) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 30) == 0 )
            return 0;
        }
        else
        {
          *(this + 30) = v81;
          ++input->buffer_;
        }
        *(this + 4) |= 0x40u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 64 )
          continue;
        v78 = buffer + 1;
        input->buffer_ = v78;
parse_avg_deaths_x16:
        if ( buffer_end <= v78 || ((v79 = *v78) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 31) == 0 )
            return 0;
        }
        else
        {
          *(this + 31) = v79;
          ++input->buffer_;
        }
        *(this + 4) |= 0x80u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 72 )
          continue;
        v76 = buffer + 1;
        input->buffer_ = v76;
parse_avg_assists_x16:
        if ( buffer_end <= v76 || ((v77 = *v76) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 32) == 0 )
            return 0;
        }
        else
        {
          *(this + 32) = v77;
          ++input->buffer_;
        }
        *(this + 4) |= 0x100u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 80 )
          continue;
        v74 = buffer + 1;
        input->buffer_ = v74;
parse_avg_gpm_x16:
        if ( buffer_end <= v74 || ((v75 = *v74) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 33) == 0 )
            return 0;
        }
        else
        {
          *(this + 33) = v75;
          ++input->buffer_;
        }
        *(this + 4) |= 0x200u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 88 )
          continue;
        v72 = buffer + 1;
        input->buffer_ = v72;
parse_avg_xpm_x16:
        if ( v72 >= buffer_end || ((v73 = *v72) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 34) == 0 )
            return 0;
        }
        else
        {
          *(this + 34) = v73;
          ++input->buffer_;
        }
        *(this + 4) |= 0x400u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 96 )
          continue;
        v70 = buffer + 1;
        input->buffer_ = v70;
parse_best_kills_x16:
        if ( buffer_end <= v70 || ((v71 = *v70) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 35) == 0 )
            return 0;
        }
        else
        {
          *(this + 35) = v71;
          ++input->buffer_;
        }
        *(this + 4) |= 0x800u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 104 )
          continue;
        v68 = buffer + 1;
        input->buffer_ = v68;
parse_best_assists_x16:
        if ( v68 >= buffer_end || ((v69 = *v68) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 36) == 0 )
            return 0;
        }
        else
        {
          *(this + 36) = v69;
          ++input->buffer_;
        }
        *(this + 4) |= 0x1000u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 112 )
          continue;
        v66 = buffer + 1;
        input->buffer_ = v66;
parse_best_gpm_x16:
        if ( buffer_end <= v66 || ((v67 = *v66) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 37) == 0 )
            return 0;
        }
        else
        {
          *(this + 37) = v67;
          ++input->buffer_;
        }
        *(this + 4) |= 0x2000u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 120 )
          continue;
        v64 = buffer + 1;
        input->buffer_ = v64;
parse_best_xpm_x16:
        if ( buffer_end <= v64 || ((v65 = *v64) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 38) == 0 )
            return 0;
        }
        else
        {
          *(this + 38) = v65;
          ++input->buffer_;
        }
        *(this + 4) |= 0x4000u;
        buffer_end = input->buffer_end_;
        buffer = input->buffer_;
        if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x80 || buffer[1] != 1 )
          continue;
        v62 = buffer + 2;
        input->buffer_ = v62;
parse_win_streak:
        if ( v62 >= buffer_end || ((v63 = *v62) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 39) == 0 )
            return 0;
        }
        else
        {
          *(this + 39) = v63;
          ++input->buffer_;
        }
        *(this + 4) |= 0x8000u;
        buffer_end = input->buffer_end_;
        buffer = input->buffer_;
        if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x88 || buffer[1] != 1 )
          continue;
        v60 = buffer + 2;
        input->buffer_ = v60;
parse_best_win_streak:
        if ( buffer_end <= v60 || ((v61 = *v60) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 40) == 0 )
            return 0;
        }
        else
        {
          *(this + 40) = v61;
          ++input->buffer_;
        }
        *(this + 4) |= 0x10000u;
        v58 = input->buffer_end_;
        buffer = input->buffer_;
        buffer_end = v58;
        if ( v58 - buffer <= 1 || *buffer != 0x95 || buffer[1] != 1 )
          continue;
        v57 = buffer + 2;
        input->buffer_ = v57;
parse_fight_score:
        if ( v58 - v57 <= 3 )
        {
          result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v171);
          if ( !result )
            return result;
          v59 = v171[0];
        }
        else
        {
          v59 = *v57;
          input->buffer_ = v57 + 4;
        }
        *(this + 4) |= 0x20000u;
        *(this + 41) = v59;
        v55 = input->buffer_end_;
        buffer = input->buffer_;
        buffer_end = v55;
        if ( v55 - buffer <= 1 || *buffer != 0x9D || buffer[1] != 1 )
          continue;
        v54 = buffer + 2;
        input->buffer_ = v54;
parse_farm_score:
        if ( v55 - v54 <= 3 )
        {
          result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v171);
          if ( !result )
            return result;
          v56 = v171[0];
        }
        else
        {
          v56 = *v54;
          input->buffer_ = v54 + 4;
        }
        *(this + 4) |= 0x40000u;
        *(this + 42) = v56;
        v52 = input->buffer_end_;
        buffer = input->buffer_;
        buffer_end = v52;
        if ( v52 - buffer <= 1 || *buffer != 0xA5 || buffer[1] != 1 )
          continue;
        v51 = buffer + 2;
        input->buffer_ = v51;
parse_support_score:
        if ( v52 - v51 <= 3 )
        {
          result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v171);
          if ( !result )
            return result;
          v53 = v171[0];
        }
        else
        {
          v53 = *v51;
          input->buffer_ = v51 + 4;
        }
        *(this + 4) |= 0x80000u;
        *(this + 43) = v53;
        v48 = input->buffer_end_;
        buffer = input->buffer_;
        buffer_end = v48;
        if ( v48 - buffer <= 1 || *buffer != 0xAD || buffer[1] != 1 )
          continue;
        v47 = buffer + 2;
        input->buffer_ = v47;
parse_push_score:
        if ( v48 - v47 <= 3 )
        {
          result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v171);
          if ( !result )
            return result;
          v49 = v171[0];
        }
        else
        {
          v49 = *v47;
          input->buffer_ = v47 + 4;
        }
        *(this + 4) |= 0x100000u;
        *(this + 52) = v49;
        buffer_end = input->buffer_end_;
        buffer = input->buffer_;
        if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xB0 )
          continue;
        while ( 1 )
        {
          if ( buffer[1] != 1 )
            goto LABEL_2;
          v50 = buffer + 2;
          input->buffer_ = v50;
parse_level_up_times:
          if ( buffer_end <= v50 || *v50 < 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
              return 0;
          }
          else
          {
            v171[0] = *v50;
            input->buffer_ = v50 + 1;
          }
          v134 = *(this + 46);
          if ( v134 == *(this + 47) )
          {
            google::protobuf::RepeatedField<unsigned int>::Reserve(this + 11, v134 + 1);
            v134 = *(this + 46);
          }
          v135 = *(this + 22);
          *(this + 46) = v134 + 1;
          *(v135 + 4 * v134) = v171[0];
          v136 = *(this + 47) - *(this + 46);
          if ( v136 > 0 )
          {
            v121 = input->buffer_end_;
            v137 = input->buffer_;
            v138 = v121;
            buffer_end = v121;
            v139 = v121 - v137;
            buffer = v137;
            if ( v121 - v137 <= 1 || *v137 != 0xB0 || v137[1] != 1 )
              goto LABEL_356;
            while ( 1 )
            {
              input->buffer_ = v137 + 2;
              if ( (v137 + 2) >= v138 || ((v140 = v137[2]) & 0x80u) != 0 )
              {
                if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
                  return 0;
                v140 = v171[0];
              }
              else
              {
                v171[0] = v137[2];
                input->buffer_ = v137 + 3;
              }
              v141 = *(this + 46);
              --v136;
              v142 = *(this + 22);
              *(this + 46) = v141 + 1;
              *(v142 + 4 * v141) = v140;
              if ( v136 == 0 )
                break;
              v121 = input->buffer_end_;
              v137 = input->buffer_;
              v138 = v121;
              v139 = v121 - v137;
              if ( v121 - v137 <= 1 || *v137 != 0xB0 || v137[1] != 1 )
              {
                buffer_end = input->buffer_end_;
                buffer = input->buffer_;
                goto LABEL_356;
              }
            }
          }
LABEL_355:
          buffer_end = input->buffer_end_;
          buffer = input->buffer_;
          LODWORD(v121) = buffer_end;
          v139 = buffer_end - buffer;
LABEL_356:
          if ( v139 <= 1 )
            goto LABEL_2;
          if ( *buffer != 0xB0 )
          {
            if ( *buffer != 0xBD )
              goto LABEL_2;
            goto LABEL_359;
          }
        }
      case 3u:
        if ( v7 != 24 )
          goto handle_unusual;
        v109 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_player_slot;
      case 4u:
        if ( v7 != 34 )
          goto handle_unusual;
        goto LABEL_273;
      case 5u:
        if ( v7 != 42 )
          goto handle_unusual;
        goto LABEL_255;
      case 6u:
        if ( v7 != 50 )
          goto handle_unusual;
        goto LABEL_223;
      case 7u:
        if ( v7 != 56 )
          goto handle_unusual;
        v80 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_avg_kills_x16;
      case 8u:
        if ( v7 != 64 )
          goto handle_unusual;
        v78 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_avg_deaths_x16;
      case 9u:
        if ( v7 != 72 )
          goto handle_unusual;
        v76 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_avg_assists_x16;
      case 0xAu:
        if ( v7 != 80 )
          goto handle_unusual;
        v74 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_avg_gpm_x16;
      case 0xBu:
        if ( v7 != 88 )
          goto handle_unusual;
        v72 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_avg_xpm_x16;
      case 0xCu:
        if ( v7 != 96 )
          goto handle_unusual;
        v70 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_best_kills_x16;
      case 0xDu:
        if ( v7 != 104 )
          goto handle_unusual;
        v68 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_best_assists_x16;
      case 0xEu:
        if ( v7 != 112 )
          goto handle_unusual;
        v66 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_best_gpm_x16;
      case 0xFu:
        if ( v7 != 120 )
          goto handle_unusual;
        v64 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_best_xpm_x16;
      case 0x10u:
        if ( v7 != 128 )
          goto handle_unusual;
        v62 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_win_streak;
      case 0x11u:
        if ( v7 != 136 )
          goto handle_unusual;
        v60 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_best_win_streak;
      case 0x12u:
        if ( v7 != 149 )
          goto handle_unusual;
        v57 = input->buffer_;
        v58 = input->buffer_end_;
        goto parse_fight_score;
      case 0x13u:
        if ( v7 != 157 )
          goto handle_unusual;
        v54 = input->buffer_;
        v55 = input->buffer_end_;
        goto parse_farm_score;
      case 0x14u:
        if ( v7 != 165 )
          goto handle_unusual;
        v51 = input->buffer_;
        v52 = input->buffer_end_;
        goto parse_support_score;
      case 0x15u:
        if ( v7 != 173 )
          goto handle_unusual;
        v47 = input->buffer_;
        v48 = input->buffer_end_;
        goto parse_push_score;
      case 0x16u:
        if ( v7 == 176 )
        {
          v50 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_level_up_times;
        }
        if ( v7 != 178 )
          goto handle_unusual;
        v42 = input->buffer_;
        if ( v42 >= input->buffer_end_ || ((v43 = *v42) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v170) == 0 )
            return 0;
          v43 = v170;
        }
        else
        {
          v170 = *v42;
          input->buffer_ = v42 + 1;
        }
        v163 = google::protobuf::io::CodedInputStream::PushLimit(input, v43);
        while ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
        {
          v46 = input->buffer_;
          if ( v46 < input->buffer_end_ && *v46 >= 0 )
          {
            v171[0] = *v46;
            input->buffer_ = v46 + 1;
          }
          else if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
          {
            return 0;
          }
          v44 = *(this + 46);
          if ( v44 == *(this + 47) )
          {
            google::protobuf::RepeatedField<unsigned int>::Reserve(this + 11, v44 + 1);
            v44 = *(this + 46);
          }
          v45 = *(this + 22);
          *(this + 46) = v44 + 1;
          *(v45 + 4 * v44) = v171[0];
        }
        google::protobuf::io::CodedInputStream::PopLimit(input, v163);
        goto LABEL_355;
      case 0x17u:
        if ( v7 == 189 )
        {
          v120 = input->buffer_;
          v121 = input->buffer_end_;
          while ( 1 )
          {
            if ( v121 - v120 <= 3 )
            {
              result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v171);
              if ( !result )
                return result;
              v122 = v171[0];
            }
            else
            {
              v122 = *v120;
              input->buffer_ = v120 + 4;
            }
            v123 = *(this + 50);
            v124 = v122;
            if ( v123 == *(this + 51) )
            {
              v168 = v122;
              google::protobuf::RepeatedField<float>::Reserve(this + 12, v123 + 1);
              v123 = *(this + 50);
              v124 = v168;
            }
            v125 = *(this + 24);
            *(this + 50) = v123 + 1;
            *(v125 + 4 * v123) = v124;
            v121 = input->buffer_end_;
            v126 = input->buffer_;
            v127 = v121 - v126;
            if ( LODWORD(input->buffer_end_) - v126 > 0 )
            {
              v128 = *(this + 50);
              v129 = *(this + 51) - v128;
              if ( v127 / 6 <= v129 )
                v129 = v127 / 6;
              if ( v129 > 0 && *v126 == 0xBD && v126[1] == 1 )
              {
                v144 = v126 + 2;
                if ( v126 != -2LL )
                {
                  v145 = 0;
                  while ( 1 )
                  {
                    v146 = *(this + 24);
                    ++v145;
                    v147 = *v144;
                    *(this + 50) = v128 + 1;
                    *(v146 + 4 * v128) = v147;
                    if ( v145 == v129 )
                      break;
                    if ( v144[4] != 0xBD )
                      break;
                    if ( v144[5] != 1 )
                      break;
                    v144 += 6;
                    if ( v144 == 0 )
                      break;
                    v128 = *(this + 50);
                  }
                  if ( 6 * v145 != 0 )
                    google::protobuf::io::CodedInputStream::Skip(input, 6 * v145);
                  goto LABEL_391;
                }
              }
            }
            v130 = v121 - v126;
            buffer_end = input->buffer_end_;
            buffer = input->buffer_;
LABEL_319:
            if ( v130 <= 1 )
              goto LABEL_2;
            if ( *buffer != 0xBD )
              break;
LABEL_359:
            if ( buffer[1] != 1 )
              goto LABEL_2;
            v120 = buffer + 2;
            input->buffer_ = buffer + 2;
          }
          if ( *buffer == 0xC2 && buffer[1] == 1 )
          {
            for ( input->buffer_ = buffer + 2; ; input->buffer_ = buffer + 2 )
            {
LABEL_50:
              v23 = *(this + 56);
              v24 = *(this + 57);
              if ( v23 < v24 )
              {
                v143 = *(this + 27);
                *(this + 56) = v23 + 1;
                v25 = *(v143 + 8 * v23);
              }
              else
              {
                if ( v24 == *(this + 58) )
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 9, v24 + 1);
                v25 = operator new(0x40u);
                CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot(v25);
                v26 = *(this + 56);
                v27 = *(this + 27);
                ++*(this + 57);
                *(this + 56) = v26 + 1;
                *(v27 + 8 * v26) = v25;
              }
              v28 = input->buffer_;
              if ( v28 >= input->buffer_end_ || *v28 < 0 )
              {
                if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
                  return 0;
              }
              else
              {
                v171[0] = *v28;
                input->buffer_ = v28 + 1;
              }
              v29 = input->recursion_depth_ + 1;
              v19 = input->recursion_limit_ < v29;
              input->recursion_depth_ = v29;
              if ( v19 )
                return 0;
              v160 = google::protobuf::io::CodedInputStream::PushLimit(input, v171[0]);
              if ( !CDOTAMatchMetadata_Team_InventorySnapshot::MergePartialFromCodedStream(v25, input)
                || !input->legitimate_message_end_ )
              {
                return 0;
              }
              google::protobuf::io::CodedInputStream::PopLimit(input, v160);
              v30 = input->recursion_depth_;
              if ( v30 > 0 )
                input->recursion_depth_ = v30 - 1;
              buffer_end = input->buffer_end_;
              buffer = input->buffer_;
              if ( LODWORD(input->buffer_end_) - buffer <= 1 )
                goto LABEL_2;
              if ( *buffer != 0xC2 )
                break;
              if ( buffer[1] != 1 )
                goto LABEL_2;
            }
            if ( *buffer == 0xC8 && buffer[1] == 1 )
            {
              v21 = buffer + 2;
              input->buffer_ = v21;
parse_avg_stats_calibrated:
              if ( v21 >= buffer_end || ((v22 = *v21) & 0x80u) != 0LL )
              {
                result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v171);
                if ( !result )
                  return result;
                v22 = *v171;
              }
              else
              {
                input->buffer_ = v21 + 1;
              }
              *(this + 212) = v22 != 0;
              *(this + 4) |= 0x1000000u;
              buffer_end = input->buffer_end_;
              buffer = input->buffer_;
              if ( LODWORD(input->buffer_end_) - buffer > 1 && *buffer == 0xD2 && buffer[1] == 1 )
              {
                do
                {
                  input->buffer_ = buffer + 2;
LABEL_22:
                  v12 = *(this + 62);
                  v13 = *(this + 63);
                  if ( v12 < v13 )
                  {
                    v119 = *(this + 30);
                    *(this + 62) = v12 + 1;
                    v14 = *(v119 + 8 * v12);
                  }
                  else
                  {
                    if ( v13 == *(this + 64) )
                      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v169, v13 + 1);
                    v14 = operator new(0x20u);
                    CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria(v14);
                    v15 = *(this + 62);
                    v16 = *(this + 30);
                    ++*(this + 63);
                    *(this + 62) = v15 + 1;
                    *(v16 + 8 * v15) = v14;
                  }
                  v17 = input->buffer_;
                  if ( v17 >= input->buffer_end_ || *v17 < 0 )
                  {
                    if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v171) == 0 )
                      return 0;
                  }
                  else
                  {
                    v171[0] = *v17;
                    input->buffer_ = v17 + 1;
                  }
                  v18 = input->recursion_depth_ + 1;
                  v19 = input->recursion_limit_ < v18;
                  input->recursion_depth_ = v18;
                  if ( v19 )
                    return 0;
                  v159 = google::protobuf::io::CodedInputStream::PushLimit(input, v171[0]);
                  if ( !CDOTAMatchMetadata_Team_AutoStyleCriteria::MergePartialFromCodedStream(v14, input)
                    || !input->legitimate_message_end_ )
                  {
                    return 0;
                  }
                  legitimate_message_end = input->legitimate_message_end_;
                  google::protobuf::io::CodedInputStream::PopLimit(input, v159);
                  v20 = input->recursion_depth_;
                  result = legitimate_message_end;
                  if ( v20 > 0 )
                    input->recursion_depth_ = v20 - 1;
                  buffer_end = input->buffer_end_;
                  buffer = input->buffer_;
                }
                while ( LODWORD(input->buffer_end_) - buffer > 1 && *buffer == 0xD2 && buffer[1] == 1 );
                if ( buffer_end == buffer )
                {
                  if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
                  {
                    input->last_tag_ = 0;
                    input->legitimate_message_end_ = 1;
                    return result;
                  }
                  buffer = input->buffer_end_;
                }
              }
            }
          }
          continue;
        }
        if ( v7 != 186 )
          goto handle_unusual;
        v31 = input->buffer_;
        if ( v31 >= input->buffer_end_ || ((v32 = *v31) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v170) == 0 )
            return 0;
          v161 = v170;
        }
        else
        {
          v170 = *v31;
          input->buffer_ = v31 + 1;
          v161 = v32;
        }
        v157 = *(this + 50);
        v33 = v161 >> 2;
        v158 = v33;
        if ( v161 != 4 * v33 )
          return 0;
        v34 = google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(input);
        if ( v34 == -1 )
        {
          v36 = google::protobuf::io::CodedInputStream::BytesUntilLimit(input);
        }
        else
        {
          v154 = v34;
          v35 = google::protobuf::io::CodedInputStream::BytesUntilLimit(input);
          v36 = v154;
          if ( v35 <= v154 )
            v36 = v35;
        }
        v155 = (this + 192);
        if ( v36 < v161 )
        {
          v162 = 0;
          if ( v33 != 0 )
          {
            do
            {
              v37 = input->buffer_;
              if ( LODWORD(input->buffer_end_) - v37 <= 3 )
              {
                if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v171) == 0 )
                  return 0;
                v39 = v171[0];
              }
              else
              {
                v38 = *v37;
                input->buffer_ = v37 + 4;
                v39 = v38;
              }
              v40 = v39;
              v41 = *(this + 50);
              if ( v41 == *(this + 51) )
              {
                google::protobuf::RepeatedField<float>::Reserve(v155, v41 + 1);
                v41 = *(this + 50);
              }
              ++v162;
              *(this + 50) = v41 + 1;
              *(*(this + 24) + 4LL * v41) = v40;
            }
            while ( v158 > v162 );
          }
          goto LABEL_391;
        }
        v9 = v157 + v33;
        if ( v9 > *(this + 50) )
        {
          google::protobuf::RepeatedField<float>::Reserve(v155, v9);
          v10 = *(this + 24);
          v152 = (v10 + 4LL * v9);
          v153 = (v10 + 4LL * *(this + 50));
          if ( v152 != v153 )
          {
            do
              *v153++ = 0;
            while ( v152 != v153 );
            goto LABEL_15;
          }
        }
        else
        {
LABEL_15:
          v10 = *(this + 24);
        }
        *(this + 50) = v9;
        if ( google::protobuf::io::CodedInputStream::ReadRaw(input, (v10 + 4LL * v157), v161) != 0 )
        {
LABEL_391:
          buffer_end = input->buffer_end_;
          buffer = input->buffer_;
          LODWORD(v121) = buffer_end;
          v130 = buffer_end - buffer;
          goto LABEL_319;
        }
        *(this + 50) = v157;
        return 0;
      case 0x18u:
        if ( v7 != 194 )
          goto handle_unusual;
        goto LABEL_50;
      case 0x19u:
        if ( v7 != 200 )
          goto handle_unusual;
        v21 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_avg_stats_calibrated;
      case 0x1Au:
        if ( v7 != 210 )
          goto handle_unusual;
        goto LABEL_22;
      default:
        goto handle_unusual;
    }
  }
}


// CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizes  (line 2650, @0x0000000001d6bb10, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, ability_upgrades, auto_style_criteria, empty, equipped_econ_items, graph_net_worth, inventory_snapshot, items, kills, level_up_times
// calls: google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizes(
        const CDOTAMatchMetadata_Team_Player *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // r13
  __int64 j; // r13
  __int64 k; // r13
  __int64 m; // r13
  int v10; // eax
  __int64 n; // r13
  __int64 ii; // r13
  google::protobuf::io::CodedOutputStream *v13; // rcx
  __int64 v14; // r13
  google::protobuf::io::CodedOutputStream *v15; // rdx
  __int64 v16; // r13
  _QWORD *v17; // rax

  if ( (*(this + 16) & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 10), output, v3);
  for ( i = 0; *(this + 8) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(*(this + 3) + 4 * i), output, v3);
  if ( (*(this + 16) & 4) != 0 )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 11), output, v3);
  for ( j = 0; *(this + 14) > j; ++j )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 2, *(*(this + 6) + 8 * j), output, v3);
  for ( k = 0; *(this + 20) > k; ++k )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 3, *(*(this + 9) + 8 * k), output, v3);
  for ( m = 0; *(this + 26) > m; ++m )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_6, *(*(this + 12) + 8 * m), output, v3);
  v10 = *(this + 4);
  if ( (v10 & 0x40) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6 + 1, *(this + 30), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x80u) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_8, *(this + 31), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x100) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_9, *(this + 32), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x200) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_A, *(this + 33), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x400) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_B, *(this + 34), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x800) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_C, *(this + 35), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x1000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_D, *(this + 36), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x2000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_E, *(this + 37), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x4000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_F, *(this + 38), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x8000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_10, *(this + 39), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x10000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 1,
      *(this + 40),
      output,
      v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x20000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 2,
      output,
      *(this + 41),
      v2);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x40000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 3,
      output,
      *(this + 42),
      v2);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x80000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 4,
      output,
      *(this + 43),
      v2);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x100000) != 0 )
    google::protobuf::internal::WireFormatLite::WriteFloat(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 5,
      output,
      *(this + 52),
      v2);
  for ( n = 0; n < *(this + 46); ++n )
    google::protobuf::internal::WireFormatLite::WriteUInt32(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 6,
      *(*(this + 22) + 4 * n),
      output,
      v3);
  for ( ii = 0; ii < *(this + 50); ++ii )
    google::protobuf::internal::WireFormatLite::WriteFloat(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 7,
      output,
      *(*(this + 24) + 4 * ii),
      v2);
  v13 = *(this + 56);
  v14 = 0;
  if ( v13 > 0 )
  {
    do
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        stru_10.m_pIdentityChunks,
        *(*(this + 27) + 8 * v14++),
        output,
        v13);
    while ( v14 < *(this + 56) );
  }
  if ( (*(this + 19) & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteBool(stru_10.m_pIdentityChunks + 1, *(this + 212), output, v13);
  v15 = *(this + 62);
  v16 = 0;
  if ( v15 > 0 )
  {
    do
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        stru_10.m_pIdentityChunks + 2,
        *(*(this + 30) + 8 * v16++),
        output,
        v13);
    while ( v16 < *(this + 62) );
  }
  v17 = *(this + 1);
  if ( v17 != 0 && v17[1] != *v17 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v15);
}


// CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizesToArray  (line 2798, @0x0000000001d78e50, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, GetCachedSize, WriteBoolNoTagToArray, WriteBoolToArray, WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteMessageNoVirtualToArray<CDOTAMatchMetadata_Team_AutoStyleCriteria>, WriteMessageNoVirtualToArray<CDOTAMatchMetadata_Team_InventorySnapshot>, WriteMessageNoVirtualToArray<CDOTAMatchMetadata_Team_ItemPurchase>, WriteMessageNoVirtualToArray<CDOTAMatchMetadata_Team_PlayerKill>, WriteMessageNoVirtualToArray<CSOEconItem>, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, ability_upgrades, auto_style_criteria, empty, equipped_econ_items, graph_net_worth, inventory_snapshot, items, kills, level_up_times, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), CSOEconItem::SerializeWithCachedSizesToArray, CDOTAMatchMetadata_Team_PlayerKill::SerializeWithCachedSizesToArray, CDOTAMatchMetadata_Team_ItemPurchase::SerializeWithCachedSizesToArray, CDOTAMatchMetadata_Team_InventorySnapshot::SerializeWithCachedSizesToArray, CDOTAMatchMetadata_Team_AutoStyleCriteria::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDOTAMatchMetadata_Team::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizesToArray(
        const CDOTAMatchMetadata_Team_Player *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::uint8 *result; // rax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  __int64 v6; // r13
  int v7; // r12d
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  __int64 v10; // r13
  int v11; // r12d
  google::protobuf::uint8 *v12; // rsi
  unsigned __int8 *v13; // rdx
  unsigned int *v14; // r14
  google::protobuf::io::CodedOutputStream *v15; // rdi
  __int64 v16; // r13
  int v17; // r12d
  google::protobuf::uint8 *v18; // rsi
  unsigned __int8 *v19; // rdx
  unsigned int *v20; // r14
  google::protobuf::io::CodedOutputStream *v21; // rdi
  __int64 v22; // r13
  int v23; // r12d
  google::protobuf::uint8 *v24; // rsi
  unsigned __int8 *v25; // rdx
  unsigned int *v26; // r14
  google::protobuf::io::CodedOutputStream *v27; // rdi
  unsigned __int8 *v28; // rdx
  google::protobuf::io::CodedOutputStream *v29; // rdi
  google::protobuf::io::CodedOutputStream *v30; // rdi
  google::protobuf::io::CodedOutputStream *v31; // rdi
  google::protobuf::io::CodedOutputStream *v32; // rdi
  google::protobuf::io::CodedOutputStream *v33; // rdi
  google::protobuf::io::CodedOutputStream *v34; // rdi
  google::protobuf::io::CodedOutputStream *v35; // rdi
  google::protobuf::io::CodedOutputStream *v36; // rdi
  google::protobuf::io::CodedOutputStream *v37; // rdi
  google::protobuf::io::CodedOutputStream *v38; // rdi
  google::protobuf::io::CodedOutputStream *v39; // rdi
  int v40; // edx
  int v41; // edx
  int v42; // edx
  int v43; // edx
  __int64 v44; // r13
  int v45; // r12d
  unsigned __int8 *v46; // rdx
  google::protobuf::io::CodedOutputStream *v47; // rdi
  __int64 v48; // rcx
  int v49; // edx
  int v50; // esi
  __int64 v51; // r13
  int v52; // r12d
  google::protobuf::uint8 *v53; // rsi
  unsigned __int8 *v54; // rdx
  unsigned int *v55; // r14
  google::protobuf::io::CodedOutputStream *v56; // rdi
  google::protobuf::uint8 v57; // dl
  __int64 v58; // r13
  int v59; // r12d
  google::protobuf::uint8 *v60; // rsi
  unsigned __int8 *v61; // rdx
  unsigned int *v62; // r14
  google::protobuf::io::CodedOutputStream *v63; // rdi
  __int64 v64; // rdx

  result = target;
  if ( (*(this + 16) & 1) != 0 )
  {
    v5 = *(this + 10);
    *target = 8;
    if ( v5 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v5, target + 1, v2);
    }
    else
    {
      target[1] = v5;
      result = target + 2;
    }
  }
  if ( *(this + 8) > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v2 = *(this + 3);
        v8 = *&v2[v6];
        *result = 16;
        if ( v8 > 0x7F )
          break;
        result[1] = v8;
        ++v7;
        result += 2;
        v6 += 4;
        if ( v7 >= *(this + 8) )
          goto LABEL_9;
      }
      ++v7;
      v6 += 4;
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v8, result + 1, v2);
    }
    while ( v7 < *(this + 8) );
  }
LABEL_9:
  if ( (*(this + 16) & 4) != 0 )
  {
    v9 = *(this + 11);
    *result = 24;
    if ( v9 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, result + 1, v2);
    }
    else
    {
      result[1] = v9;
      result += 2;
    }
  }
  if ( *(this + 14) > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v13 = *(this + 6);
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
      result = CSOEconItem::SerializeWithCachedSizesToArray(v14, v12);
    }
    while ( v11 < *(this + 14) );
  }
  if ( *(this + 20) > 0 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      v19 = *(this + 9);
      v20 = *&v19[v16];
      *result = 42;
      v21 = v20[5];
      if ( v21 <= 0x7F )
      {
        result[1] = v21;
        v18 = result + 2;
      }
      else
      {
        v18 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v21, result + 1, v19);
      }
      ++v17;
      v16 += 8;
      result = CDOTAMatchMetadata_Team_PlayerKill::SerializeWithCachedSizesToArray(v20, v18);
    }
    while ( v17 < *(this + 20) );
  }
  if ( *(this + 26) > 0 )
  {
    v22 = 0;
    v23 = 0;
    do
    {
      v25 = *(this + 12);
      v26 = *&v25[v22];
      *result = 50;
      v27 = v26[5];
      if ( v27 <= 0x7F )
      {
        result[1] = v27;
        v24 = result + 2;
      }
      else
      {
        v24 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v27, result + 1, v25);
      }
      ++v23;
      v22 += 8;
      result = CDOTAMatchMetadata_Team_ItemPurchase::SerializeWithCachedSizesToArray(v26, v24);
    }
    while ( v23 < *(this + 26) );
  }
  v28 = *(this + 4);
  if ( (v28 & 0x40) != 0 )
  {
    v29 = *(this + 30);
    *result = 56;
    if ( v29 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v29, result + 1, v28);
    }
    else
    {
      result[1] = v29;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( v28 < 0 )
  {
    v30 = *(this + 31);
    *result = 64;
    if ( v30 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v30, result + 1, v28);
    }
    else
    {
      result[1] = v30;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( (BYTE1(v28) & 1) != 0 )
  {
    v31 = *(this + 32);
    *result = 72;
    if ( v31 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v31, result + 1, v28);
    }
    else
    {
      result[1] = v31;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( (BYTE1(v28) & 2) != 0 )
  {
    v32 = *(this + 33);
    *result = 80;
    if ( v32 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v32, result + 1, v28);
    }
    else
    {
      result[1] = v32;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( (BYTE1(v28) & 4) != 0 )
  {
    v33 = *(this + 34);
    *result = 88;
    if ( v33 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v33, result + 1, v28);
    }
    else
    {
      result[1] = v33;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( (BYTE1(v28) & 8) != 0 )
  {
    v34 = *(this + 35);
    *result = 96;
    if ( v34 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v34, result + 1, v28);
    }
    else
    {
      result[1] = v34;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( (BYTE1(v28) & 0x10) != 0 )
  {
    v35 = *(this + 36);
    *result = 104;
    if ( v35 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v35, result + 1, v28);
    }
    else
    {
      result[1] = v35;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( (BYTE1(v28) & 0x20) != 0 )
  {
    v36 = *(this + 37);
    *result = 112;
    if ( v36 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v36, result + 1, v28);
    }
    else
    {
      result[1] = v36;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( (BYTE1(v28) & 0x40) != 0 )
  {
    v37 = *(this + 38);
    *result = 120;
    if ( v37 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v37, result + 1, v28);
    }
    else
    {
      result[1] = v37;
      result += 2;
    }
    v28 = *(this + 4);
  }
  if ( SBYTE1(v28) < 0 )
  {
    v38 = *(this + 39);
    *result = 0x80;
    result[1] = 1;
    if ( v38 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v38, result + 2, v28);
    }
    else
    {
      result[2] = v38;
      result += 3;
    }
    v28 = *(this + 4);
  }
  if ( (v28 & 0x10000) != 0 )
  {
    v39 = *(this + 40);
    *result = -120;
    result[1] = 1;
    if ( v39 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v39, result + 2, v28);
    }
    else
    {
      result[2] = v39;
      result += 3;
    }
    LODWORD(v28) = *(this + 4);
  }
  if ( (v28 & 0x20000) != 0 )
  {
    v40 = *(this + 41);
    *result = -107;
    result += 6;
    *(result - 5) = 1;
    *(result - 1) = v40;
    LODWORD(v28) = *(this + 4);
  }
  if ( (v28 & 0x40000) != 0 )
  {
    v41 = *(this + 42);
    *result = -99;
    result += 6;
    *(result - 5) = 1;
    *(result - 1) = v41;
    LODWORD(v28) = *(this + 4);
  }
  if ( (v28 & 0x80000) != 0 )
  {
    v42 = *(this + 43);
    *result = -91;
    result += 6;
    *(result - 5) = 1;
    *(result - 1) = v42;
    LODWORD(v28) = *(this + 4);
  }
  if ( (v28 & 0x100000) != 0 )
  {
    v43 = *(this + 52);
    result += 6;
    *(result - 6) = -83;
    *(result - 5) = 1;
    *(result - 1) = v43;
  }
  if ( *(this + 46) > 0 )
  {
    v44 = 0;
    v45 = 0;
    do
    {
      v46 = *(this + 22);
      v47 = *&v46[v44];
      *result = -80;
      result[1] = 1;
      if ( v47 <= 0x7F )
      {
        result[2] = v47;
        result += 3;
      }
      else
      {
        result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v47, result + 2, v46);
      }
      ++v45;
      v44 += 4;
    }
    while ( v45 < *(this + 46) );
  }
  if ( *(this + 50) > 0 )
  {
    v48 = 0;
    v49 = 0;
    do
    {
      ++v49;
      result += 6;
      v50 = *(*(this + 24) + v48);
      *(result - 6) = -67;
      v48 += 4;
      *(result - 5) = 1;
      *(result - 1) = v50;
    }
    while ( v49 < *(this + 50) );
  }
  if ( *(this + 56) > 0 )
  {
    v51 = 0;
    v52 = 0;
    do
    {
      v54 = *(this + 27);
      v55 = *&v54[v51];
      *result = -62;
      result[1] = 1;
      v56 = v55[5];
      if ( v56 <= 0x7F )
      {
        result[2] = v56;
        v53 = result + 3;
      }
      else
      {
        v53 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v56, result + 2, v54);
      }
      ++v52;
      v51 += 8;
      result = CDOTAMatchMetadata_Team_InventorySnapshot::SerializeWithCachedSizesToArray(v55, v53);
    }
    while ( v52 < *(this + 56) );
  }
  if ( (*(this + 19) & 1) != 0 )
  {
    v57 = *(this + 212);
    result += 3;
    *(result - 3) = -56;
    *(result - 2) = 1;
    *(result - 1) = v57;
  }
  if ( *(this + 62) > 0 )
  {
    v58 = 0;
    v59 = 0;
    do
    {
      v61 = *(this + 30);
      v62 = *&v61[v58];
      *result = -46;
      result[1] = 1;
      v63 = v62[5];
      if ( v63 <= 0x7F )
      {
        result[2] = v63;
        v60 = result + 3;
      }
      else
      {
        v60 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v63, result + 2, v61);
      }
      ++v59;
      v58 += 8;
      result = CDOTAMatchMetadata_Team_AutoStyleCriteria::SerializeWithCachedSizesToArray(v62, v60);
    }
    while ( v59 < *(this + 62) );
  }
  v64 = *(this + 1);
  if ( v64 != 0 && *(v64 + 8) != *v64 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v64);
  return result;
}


// CDOTAMatchMetadata_Team_Player::ByteSize  (line 2952, @0x0000000001d796f0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDOTAMatchMetadata_Team_AutoStyleCriteria>, MessageSizeNoVirtual<CDOTAMatchMetadata_Team_InventorySnapshot>, MessageSizeNoVirtual<CDOTAMatchMetadata_Team_ItemPurchase>, MessageSizeNoVirtual<CDOTAMatchMetadata_Team_PlayerKill>, MessageSizeNoVirtual<CSOEconItem>, UInt32Size, VarintSize32, ability_upgrades, auto_style_criteria, empty, equipped_econ_items, inventory_snapshot, items, kills, level_up_times
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), CSOEconItem::ByteSize, CDOTAMatchMetadata_Team_PlayerKill::ByteSize, CDOTAMatchMetadata_Team_ItemPurchase::ByteSize, CDOTAMatchMetadata_Team_InventorySnapshot::ByteSize, CDOTAMatchMetadata_Team_AutoStyleCriteria::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTAMatchMetadata_Team::ByteSize
int __fastcall CDOTAMatchMetadata_Team_Player::ByteSize(const CDOTAMatchMetadata_Team_Player *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v2; // r14d
  int v4; // edx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  google::protobuf::io::CodedOutputStream *v12; // rdi
  int v13; // eax
  google::protobuf::io::CodedOutputStream *v14; // rdi
  int v15; // eax
  google::protobuf::io::CodedOutputStream *v16; // rdi
  int v17; // eax
  google::protobuf::io::CodedOutputStream *v18; // rdi
  int v19; // eax
  google::protobuf::io::CodedOutputStream *v20; // rdi
  int v21; // eax
  google::protobuf::io::CodedOutputStream *v22; // rdi
  int v23; // eax
  int v24; // edx
  __int64 v25; // r12
  int v26; // r13d
  google::protobuf::io::CodedOutputStream *v27; // rdi
  int v28; // eax
  int v29; // eax
  int v30; // r14d
  __int64 v31; // r15
  int v32; // r13d
  unsigned int v33; // r12d
  int v34; // eax
  int v35; // eax
  int v36; // r14d
  __int64 v37; // r15
  int v38; // r13d
  unsigned int v39; // r12d
  int v40; // eax
  int v41; // eax
  int v42; // r14d
  __int64 v43; // r15
  int v44; // r13d
  unsigned int v45; // r12d
  int v46; // eax
  int v47; // edx
  __int64 v48; // r12
  int v49; // r13d
  google::protobuf::io::CodedOutputStream *v50; // rdi
  int v51; // eax
  int v52; // eax
  int v53; // r15d
  __int64 v54; // r14
  int v55; // r13d
  unsigned int v56; // r12d
  int v57; // eax
  int v58; // eax
  int v59; // r15d
  __int64 v60; // r14
  int v61; // r13d
  unsigned int v62; // r12d
  int v63; // eax
  _QWORD *v64; // rax
  google::protobuf::io::CodedOutputStream *v66; // rdi
  int v67; // eax
  google::protobuf::io::CodedOutputStream *v68; // rdi
  int v69; // eax
  google::protobuf::io::CodedOutputStream *v70; // rdi
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v2 = 0;
    if ( (v4 & 1) != 0 )
    {
      v5 = *(this + 10);
      v2 = 2;
      if ( v5 > 0x7F )
      {
        v74 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
        v4 = *(this + 4);
        v2 = v74 + 1;
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v6 = *(this + 11);
      v7 = 2;
      if ( v6 > 0x7F )
      {
        v76 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v4 = *(this + 4);
        v7 = v76 + 1;
      }
      v2 += v7;
    }
    if ( (v4 & 0x40) != 0 )
    {
      v8 = *(this + 30);
      v9 = 2;
      if ( v8 > 0x7F )
      {
        v72 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
        v4 = *(this + 4);
        v9 = v72 + 1;
      }
      v2 += v9;
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v70 = *(this + 31);
      v71 = 2;
      if ( v70 > 0x7F )
      {
        v75 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v70, v1);
        v4 = *(this + 4);
        v71 = v75 + 1;
      }
      v2 += v71;
    }
  }
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      v10 = *(this + 32);
      v11 = 2;
      if ( v10 > 0x7F )
      {
        v73 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
        v4 = *(this + 4);
        v11 = v73 + 1;
      }
      v2 += v11;
    }
    if ( (v4 & 0x200) != 0 )
    {
      v12 = *(this + 33);
      v13 = 2;
      if ( v12 > 0x7F )
      {
        v77 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, v1);
        v4 = *(this + 4);
        v13 = v77 + 1;
      }
      v2 += v13;
    }
    if ( (v4 & 0x400) != 0 )
    {
      v14 = *(this + 34);
      v15 = 2;
      if ( v14 > 0x7F )
      {
        v78 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
        v4 = *(this + 4);
        v15 = v78 + 1;
      }
      v2 += v15;
    }
    if ( (v4 & 0x800) != 0 )
    {
      v16 = *(this + 35);
      v17 = 2;
      if ( v16 > 0x7F )
      {
        v80 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, v1);
        v4 = *(this + 4);
        v17 = v80 + 1;
      }
      v2 += v17;
    }
    if ( (v4 & 0x1000) != 0 )
    {
      v18 = *(this + 36);
      v19 = 2;
      if ( v18 > 0x7F )
      {
        v79 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v18, v1);
        v4 = *(this + 4);
        v19 = v79 + 1;
      }
      v2 += v19;
    }
    if ( (v4 & 0x2000) != 0 )
    {
      v20 = *(this + 37);
      v21 = 2;
      if ( v20 > 0x7F )
      {
        v81 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, v1);
        v4 = *(this + 4);
        v21 = v81 + 1;
      }
      v2 += v21;
    }
    if ( (v4 & 0x4000) != 0 )
    {
      v22 = *(this + 38);
      v23 = 2;
      if ( v22 > 0x7F )
      {
        v82 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, v1);
        v4 = *(this + 4);
        v23 = v82 + 1;
      }
      v2 += v23;
    }
    if ( (v4 & 0x8000) != 0 )
    {
      v68 = *(this + 39);
      v69 = 3;
      if ( v68 > 0x7F )
      {
        v83 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v68, v1);
        v4 = *(this + 4);
        v69 = v83 + 2;
      }
      v2 += v69;
    }
  }
  if ( (v4 & 0xFF0000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v66 = *(this + 40);
      v67 = 3;
      if ( v66 > 0x7F )
      {
        v84 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v66, v1);
        v4 = *(this + 4);
        v67 = v84 + 2;
      }
      v2 += v67;
    }
    if ( (v4 & 0x20000) != 0 )
      v2 += 6;
    if ( (v4 & 0x40000) != 0 )
      v2 += 6;
    if ( (v4 & 0x80000) != 0 )
      v2 += 6;
    if ( (v4 & 0x100000) != 0 )
      v2 += 6;
  }
  if ( (v4 & 0xFF000000) != 0 && (v4 & 0x1000000) != 0 )
    v2 += 3;
  v24 = *(this + 8);
  if ( v24 <= 0 )
  {
    v26 = 0;
  }
  else
  {
    v25 = 0;
    v26 = 0;
    do
    {
      while ( 1 )
      {
        v27 = *(*(this + 3) + 4 * v25);
        if ( v27 > 0x7F )
          break;
        ++v26;
        if ( ++v25 >= v24 )
          goto LABEL_62;
      }
      v28 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v27, v1);
      v24 = *(this + 8);
      v26 += v28;
      ++v25;
    }
    while ( v25 < v24 );
  }
LABEL_62:
  v29 = *(this + 14);
  v30 = v29 + v24 + v26 + v2;
  if ( v29 > 0 )
  {
    v31 = 0;
    v32 = 0;
    do
    {
      v33 = CSOEconItem::ByteSize(*(*(this + 6) + v31));
      v34 = 1;
      if ( v33 > 0x7F )
        v34 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v33, v1);
      ++v32;
      v31 += 8;
      v30 += v34 + v33;
    }
    while ( v32 < *(this + 14) );
  }
  v35 = *(this + 20);
  v36 = v35 + v30;
  if ( v35 > 0 )
  {
    v37 = 0;
    v38 = 0;
    do
    {
      v39 = CDOTAMatchMetadata_Team_PlayerKill::ByteSize(*(*(this + 9) + v37));
      v40 = 1;
      if ( v39 > 0x7F )
        v40 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v39, v1);
      ++v38;
      v37 += 8;
      v36 += v40 + v39;
    }
    while ( v38 < *(this + 20) );
  }
  v41 = *(this + 26);
  v42 = v41 + v36;
  if ( v41 > 0 )
  {
    v43 = 0;
    v44 = 0;
    do
    {
      v45 = CDOTAMatchMetadata_Team_ItemPurchase::ByteSize(*(*(this + 12) + v43));
      v46 = 1;
      if ( v45 > 0x7F )
        v46 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v45, v1);
      ++v44;
      v43 += 8;
      v42 += v46 + v45;
    }
    while ( v44 < *(this + 26) );
  }
  v47 = *(this + 46);
  if ( v47 <= 0 )
  {
    v49 = 0;
  }
  else
  {
    v48 = 0;
    v49 = 0;
    do
    {
      while ( 1 )
      {
        v50 = *(*(this + 22) + 4 * v48);
        if ( v50 > 0x7F )
          break;
        ++v49;
        if ( ++v48 >= v47 )
          goto LABEL_82;
      }
      v51 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v50, v1);
      v47 = *(this + 46);
      v49 += v51;
      ++v48;
    }
    while ( v48 < v47 );
  }
LABEL_82:
  v52 = *(this + 56);
  v53 = 6 * *(this + 50) + v49 + 2 * v47 + v42 + 2 * v52;
  if ( v52 > 0 )
  {
    v54 = 0;
    v55 = 0;
    do
    {
      v56 = CDOTAMatchMetadata_Team_InventorySnapshot::ByteSize(*(*(this + 27) + v54));
      v57 = 1;
      if ( v56 > 0x7F )
        v57 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v56, v1);
      ++v55;
      v54 += 8;
      v53 += v57 + v56;
    }
    while ( v55 < *(this + 56) );
  }
  v58 = *(this + 62);
  v59 = v53 + 2 * v58;
  if ( v58 > 0 )
  {
    v60 = 0;
    v61 = 0;
    do
    {
      v62 = CDOTAMatchMetadata_Team_AutoStyleCriteria::ByteSize(*(*(this + 30) + v60));
      v63 = 1;
      if ( v62 > 0x7F )
        v63 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v62, v1);
      ++v61;
      v60 += 8;
      v59 += v63 + v62;
    }
    while ( v61 < *(this + 62) );
  }
  v64 = *(this + 1);
  if ( v64 != 0 && v64[1] != *v64 )
    v59 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v59;
  return v59;
}


// CDOTAMatchMetadata_Team_Player::MergeFrom  (line 3157, @0x0000000001d74d70, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchMetadata_Team_Player*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchMetadata_Team_Player::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchMetadata_Team_Player
void __fastcall CDOTAMatchMetadata_Team_Player::MergeFrom(
        CDOTAMatchMetadata_Team_Player *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchMetadata_Team_Player *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      3158);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAMatchMetadata_Team_Player,
               0)) != 0 )
  {
    CDOTAMatchMetadata_Team_Player::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchMetadata_Team_Player::MergeFrom  (line 3169, @0x0000000001d74010, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, CopyArray, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>, MergeFrom<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>, New, memcpy, operator(), set_account_id, set_avg_assists_x16, set_avg_deaths_x16, set_avg_gpm_x16, set_avg_kills_x16, set_avg_stats_calibrated, set_avg_xpm_x16, set_best_assists_x16, set_best_gpm_x16, set_best_kills_x16, set_best_win_streak, set_best_xpm_x16, set_farm_score, set_fight_score, set_has_account_id, set_has_avg_assists_x16, set_has_avg_deaths_x16, set_has_avg_gpm_x16, set_has_avg_kills_x16, set_has_avg_stats_calibrated, set_has_avg_xpm_x16, set_has_best_assists_x16, set_has_best_gpm_x16, set_has_best_kills_x16, set_has_best_win_streak, set_has_best_xpm_x16, set_has_farm_score, set_has_fight_score, set_has_player_slot, set_has_push_score, set_has_support_score, set_has_win_streak, set_player_slot, set_push_score, set_support_score, set_win_streak
// calls: google::protobuf::RepeatedField<unsigned int>::Reserve, memcpy, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CSOEconItem::CSOEconItem, CSOEconItem::MergeFrom, CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill, CDOTAMatchMetadata_Team_PlayerKill::MergeFrom, CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase, CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom, google::protobuf::RepeatedField<float>::Reserve, CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot (22 total)
// callers: CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player, CDOTAMatchMetadata_Team_Player::MergeFrom, CDOTAMatchMetadata_Team_Player::CopyFrom, CDOTAMatchMetadata_Team::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchMetadata_Team_Player::MergeFrom(
        CDOTAMatchMetadata_Team_Player *const this,
        const CDOTAMatchMetadata_Team_Player *const from)
{
  int v4; // esi
  __int64 v5; // r14
  int v6; // r13d
  CSOEconItem *v7; // r15
  __int64 v8; // rax
  CSOEconItem *v9; // rdi
  __int64 v10; // rdx
  const CSOEconItem *v11; // rsi
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r14
  int v16; // r13d
  CDOTAMatchMetadata_Team_PlayerKill *v17; // r15
  __int64 v18; // rax
  CDOTAMatchMetadata_Team_PlayerKill *v19; // rdi
  __int64 v20; // rdx
  const CDOTAMatchMetadata_Team_PlayerKill *v21; // rsi
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // r14
  int v26; // r13d
  CDOTAMatchMetadata_Team_ItemPurchase *v27; // r15
  __int64 v28; // rax
  CDOTAMatchMetadata_Team_ItemPurchase *v29; // rdi
  __int64 v30; // rdx
  const CDOTAMatchMetadata_Team_ItemPurchase *v31; // rsi
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rdx
  int v35; // esi
  int v36; // esi
  __int64 v37; // r14
  int v38; // r13d
  CDOTAMatchMetadata_Team_InventorySnapshot *v39; // r15
  __int64 v40; // rax
  CDOTAMatchMetadata_Team_InventorySnapshot *v41; // rdi
  __int64 v42; // rdx
  const CDOTAMatchMetadata_Team_InventorySnapshot *v43; // rsi
  __int64 v44; // rax
  int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // r14
  int v48; // r13d
  CDOTAMatchMetadata_Team_AutoStyleCriteria *v49; // r15
  __int64 v50; // rax
  CDOTAMatchMetadata_Team_AutoStyleCriteria *v51; // rdi
  __int64 v52; // rdx
  const CDOTAMatchMetadata_Team_AutoStyleCriteria *v53; // rsi
  __int64 v54; // rax
  int v55; // esi
  __int64 v56; // rdx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // xmm0_4
  int v70; // xmm0_4
  int v71; // xmm0_4
  char v72; // al
  int v73; // xmm0_4
  int v74; // eax
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v85; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v86; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v87; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v88; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v89; // [rsp+8h] [rbp-68h]
  char v90; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v91; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      3170);
    v77 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v77);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v78 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v78);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  v4 = *(from + 8);
  if ( v4 != 0 )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve((this + 24), *(this + 8) + v4);
    memcpy((*(this + 3) + 4LL * *(this + 8)), *(from + 3), 4LL * *(from + 8));
    *(this + 8) += *(from + 8);
  }
  v85 = (this + 48);
  if ( this + 48 == from + 48 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v79 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v79);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v85, *(from + 14) + *(this + 14));
  if ( *(from + 14) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v12 = *(this + 14);
      v13 = *(this + 15);
      if ( v12 >= v13 )
      {
        if ( v13 == *(this + 16) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v85, v13 + 1);
        v7 = operator new(0x88u);
        CSOEconItem::CSOEconItem(v7);
        v8 = *(this + 14);
        v9 = v7;
        v10 = *(this + 6);
        ++*(this + 15);
        *(this + 14) = v8 + 1;
        *(v10 + 8 * v8) = v7;
      }
      else
      {
        v14 = *(this + 6);
        *(this + 14) = v12 + 1;
        v9 = *(v14 + 8 * v12);
      }
      ++v6;
      v11 = *(*(from + 6) + v5);
      v5 += 8;
      CSOEconItem::MergeFrom(v9, v11);
    }
    while ( v6 < *(from + 14) );
  }
  v86 = (this + 72);
  if ( this + 72 == from + 72 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v80 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v80);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v86, *(from + 20) + *(this + 20));
  if ( *(from + 20) > 0 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      v22 = *(this + 20);
      v23 = *(this + 21);
      if ( v22 >= v23 )
      {
        if ( v23 == *(this + 22) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v86, v23 + 1);
        v17 = operator new(0x20u);
        CDOTAMatchMetadata_Team_PlayerKill::CDOTAMatchMetadata_Team_PlayerKill(v17);
        v18 = *(this + 20);
        v19 = v17;
        v20 = *(this + 9);
        ++*(this + 21);
        *(this + 20) = v18 + 1;
        *(v20 + 8 * v18) = v17;
      }
      else
      {
        v24 = *(this + 9);
        *(this + 20) = v22 + 1;
        v19 = *(v24 + 8 * v22);
      }
      ++v16;
      v21 = *(*(from + 9) + v15);
      v15 += 8;
      CDOTAMatchMetadata_Team_PlayerKill::MergeFrom(v19, v21);
    }
    while ( v16 < *(from + 20) );
  }
  v87 = (this + 96);
  if ( this + 96 == from + 96 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v81 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v81);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v87, *(from + 26) + *(this + 26));
  if ( *(from + 26) > 0 )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      v32 = *(this + 26);
      v33 = *(this + 27);
      if ( v32 >= v33 )
      {
        if ( v33 == *(this + 28) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v87, v33 + 1);
        v27 = operator new(0x20u);
        CDOTAMatchMetadata_Team_ItemPurchase::CDOTAMatchMetadata_Team_ItemPurchase(v27);
        v28 = *(this + 26);
        v29 = v27;
        v30 = *(this + 12);
        ++*(this + 27);
        *(this + 26) = v28 + 1;
        *(v30 + 8 * v28) = v27;
      }
      else
      {
        v34 = *(this + 12);
        *(this + 26) = v32 + 1;
        v29 = *(v34 + 8 * v32);
      }
      ++v26;
      v31 = *(*(from + 12) + v25);
      v25 += 8;
      CDOTAMatchMetadata_Team_ItemPurchase::MergeFrom(v29, v31);
    }
    while ( v26 < *(from + 26) );
  }
  if ( this + 176 == from + 176 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v82 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v82);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  v35 = *(from + 46);
  if ( v35 != 0 )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve(this + 11, *(this + 46) + v35);
    memcpy((*(this + 22) + 4LL * *(this + 46)), *(from + 22), 4LL * *(from + 46));
    *(this + 46) += *(from + 46);
  }
  if ( this + 192 == from + 192 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v83 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v83);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  v36 = *(from + 50);
  if ( v36 != 0 )
  {
    google::protobuf::RepeatedField<float>::Reserve(this + 12, *(this + 50) + v36);
    memcpy((*(this + 24) + 4LL * *(this + 50)), *(from + 24), 4LL * *(from + 50));
    *(this + 50) += *(from + 50);
  }
  v88 = (this + 216);
  if ( this + 216 == from + 216 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v84 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v84);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v88, *(from + 56) + *(this + 56));
  if ( *(from + 56) > 0 )
  {
    v37 = 0;
    v38 = 0;
    do
    {
      v44 = *(this + 56);
      v45 = *(this + 57);
      if ( v44 >= v45 )
      {
        if ( v45 == *(this + 58) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v88, v45 + 1);
        v39 = operator new(0x40u);
        CDOTAMatchMetadata_Team_InventorySnapshot::CDOTAMatchMetadata_Team_InventorySnapshot(v39);
        v40 = *(this + 56);
        v41 = v39;
        v42 = *(this + 27);
        ++*(this + 57);
        *(this + 56) = v40 + 1;
        *(v42 + 8 * v40) = v39;
      }
      else
      {
        v46 = *(this + 27);
        *(this + 56) = v44 + 1;
        v41 = *(v46 + 8 * v44);
      }
      ++v38;
      v43 = *(*(from + 27) + v37);
      v37 += 8;
      CDOTAMatchMetadata_Team_InventorySnapshot::MergeFrom(v41, v43);
    }
    while ( v38 < *(from + 56) );
  }
  v89 = (this + 240);
  if ( this + 240 == from + 240 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v91,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v76 = google::protobuf::internal::LogMessage::operator<<(&v91, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v90, v76);
    google::protobuf::internal::LogMessage::~LogMessage(&v91);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v89, *(from + 62) + *(this + 62));
  if ( *(from + 62) > 0 )
  {
    v47 = 0;
    v48 = 0;
    do
    {
      v54 = *(this + 62);
      v55 = *(this + 63);
      if ( v54 >= v55 )
      {
        if ( v55 == *(this + 64) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v89, v55 + 1);
        v49 = operator new(0x20u);
        CDOTAMatchMetadata_Team_AutoStyleCriteria::CDOTAMatchMetadata_Team_AutoStyleCriteria(v49);
        v50 = *(this + 62);
        v51 = v49;
        v52 = *(this + 30);
        ++*(this + 63);
        *(this + 62) = v50 + 1;
        *(v52 + 8 * v50) = v49;
      }
      else
      {
        v56 = *(this + 30);
        *(this + 62) = v54 + 1;
        v51 = *(v56 + 8 * v54);
      }
      ++v48;
      v53 = *(*(from + 30) + v47);
      v47 += 8;
      CDOTAMatchMetadata_Team_AutoStyleCriteria::MergeFrom(v51, v53);
    }
    while ( v48 < *(from + 62) );
  }
  v57 = *(from + 4);
  if ( v57 != 0 )
  {
    if ( (v57 & 1) != 0 )
    {
      v58 = *(from + 10);
      *(this + 4) |= 1u;
      *(this + 10) = v58;
      v57 = *(from + 4);
    }
    if ( (v57 & 4) != 0 )
    {
      v59 = *(from + 11);
      *(this + 4) |= 4u;
      *(this + 11) = v59;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x40) != 0 )
    {
      v60 = *(from + 30);
      *(this + 4) |= 0x40u;
      *(this + 30) = v60;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x80u) != 0 )
    {
      v75 = *(from + 31);
      *(this + 4) |= 0x80u;
      *(this + 31) = v75;
      v57 = *(from + 4);
    }
  }
  if ( BYTE1(v57) != 0 )
  {
    if ( (v57 & 0x100) != 0 )
    {
      v61 = *(from + 32);
      *(this + 4) |= 0x100u;
      *(this + 32) = v61;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x200) != 0 )
    {
      v62 = *(from + 33);
      *(this + 4) |= 0x200u;
      *(this + 33) = v62;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x400) != 0 )
    {
      v63 = *(from + 34);
      *(this + 4) |= 0x400u;
      *(this + 34) = v63;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x800) != 0 )
    {
      v64 = *(from + 35);
      *(this + 4) |= 0x800u;
      *(this + 35) = v64;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x1000) != 0 )
    {
      v65 = *(from + 36);
      *(this + 4) |= 0x1000u;
      *(this + 36) = v65;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x2000) != 0 )
    {
      v66 = *(from + 37);
      *(this + 4) |= 0x2000u;
      *(this + 37) = v66;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x4000) != 0 )
    {
      v67 = *(from + 38);
      *(this + 4) |= 0x4000u;
      *(this + 38) = v67;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x8000) != 0 )
    {
      v74 = *(from + 39);
      *(this + 4) |= 0x8000u;
      *(this + 39) = v74;
      v57 = *(from + 4);
    }
  }
  if ( (v57 & 0xFF0000) != 0 )
  {
    if ( (v57 & 0x10000) != 0 )
    {
      v68 = *(from + 40);
      *(this + 4) |= 0x10000u;
      *(this + 40) = v68;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x20000) != 0 )
    {
      v69 = *(from + 41);
      *(this + 4) |= 0x20000u;
      *(this + 41) = v69;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x40000) != 0 )
    {
      v70 = *(from + 42);
      *(this + 4) |= 0x40000u;
      *(this + 42) = v70;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x80000) != 0 )
    {
      v71 = *(from + 43);
      *(this + 4) |= 0x80000u;
      *(this + 43) = v71;
      v57 = *(from + 4);
    }
    if ( (v57 & 0x100000) != 0 )
    {
      v73 = *(from + 52);
      *(this + 4) |= 0x100000u;
      *(this + 52) = v73;
      v57 = *(from + 4);
    }
  }
  if ( (v57 & 0xFF000000) != 0 && (v57 & 0x1000000) != 0 )
  {
    v72 = *(from + 212);
    *(this + 4) |= 0x1000000u;
    *(this + 212) = v72;
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchMetadata_Team_Player::CopyFrom  (line 3244, @0x0000000001d6a780, libserver.so)
void __fastcall CDOTAMatchMetadata_Team_Player::CopyFrom(
        CDOTAMatchMetadata_Team_Player *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchMetadata_Team_Player::CopyFrom  (line 3250, @0x0000000001d74e50, libserver.so)
// calls: CDOTAMatchMetadata_Team_Player::MergeFrom
void __fastcall CDOTAMatchMetadata_Team_Player::CopyFrom(
        CDOTAMatchMetadata_Team_Player *const this,
        const CDOTAMatchMetadata_Team_Player *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchMetadata_Team_Player::MergeFrom(this, from);
  }
}


// CDOTAMatchMetadata_Team_Player::IsInitialized  (line 3256, @0x0000000001d6a7c0, libserver.so)
bool __fastcall CDOTAMatchMetadata_Team_Player::IsInitialized(const CDOTAMatchMetadata_Team_Player *const this)
{
  return 1;
}


// CDOTAMatchMetadata_Team_Player::Swap  (line 3261, @0x0000000001d6fdb0, libserver.so)  // inlines: Swap, swap<bool>, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTAMatchMetadata_Team_Player::Swap(
        CDOTAMatchMetadata_Team_Player *const this,
        CDOTAMatchMetadata_Team_Player *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v4; // rdi
  int total_size; // eax
  void **elements; // rcx
  int current_size; // edx
  int allocated_size; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  __int64 v40; // rsi
  __int64 v41; // rcx
  int v42; // edx
  int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rcx
  int v46; // edx
  int v47; // eax
  char v48; // al
  int v49; // eax
  __int64 v50; // rax

  if ( other != this )
  {
    v4 = (this + 48);
    total_size = v4[-1].total_size_;
    v4[-1].total_size_ = *(other + 10);
    *(other + 10) = total_size;
    elements = v4[-1].elements_;
    current_size = v4[-1].current_size_;
    allocated_size = v4[-1].allocated_size_;
    v4[-1].elements_ = *(other + 3);
    v4[-1].current_size_ = *(other + 8);
    v4[-1].allocated_size_ = *(other + 9);
    *(other + 3) = elements;
    *(other + 8) = current_size;
    v9 = *(other + 11);
    *(other + 9) = allocated_size;
    v10 = *(&v4[-1].total_size_ + 1);
    *(&v4[-1].total_size_ + 1) = v9;
    *(other + 11) = v10;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v4, other + 2);
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(this + 3, other + 3);
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(this + 4, other + 4);
    v11 = *(this + 30);
    *(this + 30) = *(other + 30);
    v12 = *(other + 31);
    *(other + 30) = v11;
    v13 = *(this + 31);
    *(this + 31) = v12;
    v14 = *(other + 32);
    *(other + 31) = v13;
    v15 = *(this + 32);
    *(this + 32) = v14;
    v16 = *(other + 33);
    *(other + 32) = v15;
    v17 = *(this + 33);
    *(this + 33) = v16;
    v18 = *(other + 34);
    *(other + 33) = v17;
    v19 = *(this + 34);
    *(this + 34) = v18;
    v20 = *(other + 35);
    *(other + 34) = v19;
    v21 = *(this + 35);
    *(this + 35) = v20;
    v22 = *(other + 36);
    *(other + 35) = v21;
    v23 = *(this + 36);
    *(this + 36) = v22;
    v24 = *(other + 37);
    *(other + 36) = v23;
    v25 = *(this + 37);
    *(this + 37) = v24;
    v26 = *(other + 38);
    *(other + 37) = v25;
    v27 = *(this + 38);
    *(this + 38) = v26;
    v28 = *(other + 39);
    *(other + 38) = v27;
    v29 = *(this + 39);
    *(this + 39) = v28;
    v30 = *(other + 40);
    *(other + 39) = v29;
    v31 = *(this + 40);
    *(this + 40) = v30;
    v32 = *(other + 41);
    *(other + 40) = v31;
    v33 = *(this + 41);
    *(this + 41) = v32;
    v34 = *(other + 42);
    *(other + 41) = v33;
    v35 = *(this + 42);
    *(this + 42) = v34;
    v36 = *(other + 43);
    *(other + 42) = v35;
    v37 = *(this + 43);
    *(this + 43) = v36;
    v38 = *(other + 52);
    *(other + 43) = v37;
    v39 = *(this + 52);
    *(this + 52) = v38;
    v40 = *(other + 22);
    *(other + 52) = v39;
    v41 = *(this + 22);
    v42 = *(this + 46);
    *(this + 22) = v40;
    v43 = *(this + 47);
    *(this + 46) = *(other + 46);
    *(this + 47) = *(other + 47);
    v44 = *(other + 24);
    *(other + 22) = v41;
    *(other + 46) = v42;
    *(other + 47) = v43;
    v45 = *(this + 24);
    *(this + 24) = v44;
    v46 = *(this + 50);
    v47 = *(this + 51);
    *(this + 50) = *(other + 50);
    *(this + 51) = *(other + 51);
    *(other + 24) = v45;
    *(other + 50) = v46;
    *(other + 51) = v47;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(this + 9, other + 9);
    v48 = *(this + 212);
    *(this + 212) = *(other + 212);
    *(other + 212) = v48;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(this + 10, other + 10);
    v49 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v49;
    v50 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v50;
    LODWORD(v50) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v50;
  }
}


// CDOTAMatchMetadata_Team_Player::GetMetadata  (line 3295, @0x0000000001d6d500, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_Player_descriptor_, `anonymous namespace'::CDOTAMatchMetadata_Team_Player_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchMetadata_Team_Player::GetMetadata(
        const CDOTAMatchMetadata_Team_Player *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchMetadata_Team_Player_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchMetadata_Team_Player_reflection_;
  return result;
}


// CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team  (line 3319, @0x0000000001d70150, libserver.so)  // inlines: RepeatedField, RepeatedPtrField, RepeatedPtrFieldBase
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMatchMetadata_Team::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchMetadata::MergeFrom, CDOTAMatchMetadata::MergePartialFromCodedStream, CDOTAGCServerSystem::EnsureLastMatchMetadata
void __fastcall CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team(CDOTAMatchMetadata_Team *const this)
{
  *this = off_3F9C1B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 9) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 11) = 0;
  *(this + 24) = 0;
  *(this + 25) = 0;
  *(this + 13) = 0;
  *(this + 28) = 0;
  *(this + 29) = 0;
  *(this + 16) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  CDOTAMatchMetadata_Team::SharedCtor(this);
}


// CDOTAMatchMetadata_Team::InitAsDefaultInstance  (line 3325, @0x0000000001d70110, libserver.so)
void __fastcall CDOTAMatchMetadata_Team::InitAsDefaultInstance(CDOTAMatchMetadata_Team *const this)
{
  ;
}


// CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team  (line 3328, @0x0000000001d75420, libserver.so)  // inlines: RepeatedField, RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedField, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata_Team::SharedCtor, CDOTAMatchMetadata_Team::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, operator delete [], google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team(
        CDOTAMatchMetadata_Team *const this,
        const CDOTAMatchMetadata_Team *const from)
{
  *this = off_3F9C1B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 9) = 0;
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 11) = 0;
  *(this + 24) = 0;
  *(this + 25) = 0;
  *(this + 13) = 0;
  *(this + 28) = 0;
  *(this + 29) = 0;
  *(this + 16) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  CDOTAMatchMetadata_Team::SharedCtor(this);
  CDOTAMatchMetadata_Team::MergeFrom(this, from);
}


// CDOTAMatchMetadata_Team::SharedCtor  (line 3335, @0x0000000001d70120, libserver.so)  // inlines: memset
// callers: CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team
void __fastcall CDOTAMatchMetadata_Team::SharedCtor(CDOTAMatchMetadata_Team *const this)
{
  *(this + 5) = 0;
  *(this + 16) = 0;
  *(this + 68) = 0;
  *(this + 30) = 0;
  *(this + 31) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata_Team::~CDOTAMatchMetadata_Team  (line 3344, @0x0000000001d6c900, libserver.so)  // inlines: ~RepeatedField, ~RepeatedPtrField
// calls: operator delete [], google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMatchMetadata_Team::~CDOTAMatchMetadata_Team
void __fastcall CDOTAMatchMetadata_Team::~CDOTAMatchMetadata_Team(CDOTAMatchMetadata_Team *const this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  *this = off_3F9C1B0;
  v2 = *(this + 16);
  if ( v2 != 0 )
    operator delete[](v2);
  v3 = *(this + 13);
  if ( v3 != 0 )
    operator delete[](v3);
  v4 = *(this + 11);
  if ( v4 != 0 )
    operator delete[](v4);
  v5 = *(this + 9);
  if ( v5 != 0 )
    operator delete[](v5);
  v6 = *(this + 6);
  if ( v6 != 0 )
    operator delete[](v6);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchMetadata_Team::~CDOTAMatchMetadata_Team  (line 3344, @0x0000000001d6c990, libserver.so)
// calls: CDOTAMatchMetadata_Team::~CDOTAMatchMetadata_Team, operator delete
void __fastcall CDOTAMatchMetadata_Team::~CDOTAMatchMetadata_Team(CDOTAMatchMetadata_Team *const this)
{
  CDOTAMatchMetadata_Team::~CDOTAMatchMetadata_Team(this);
  operator delete(this);
}


// CDOTAMatchMetadata_Team::SharedDtor  (line 3349, @0x0000000001d70260, libserver.so)
void __fastcall CDOTAMatchMetadata_Team::SharedDtor(CDOTAMatchMetadata_Team *const this)
{
  ;
}


// CDOTAMatchMetadata_Team::SetCachedSize  (line 3354, @0x0000000001d6a7d0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team::SetCachedSize(const CDOTAMatchMetadata_Team *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMatchMetadata_Team::descriptor  (line 3359, @0x0000000001d70270, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchMetadata_Team::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_;
}


// CDOTAMatchMetadata_Team::default_instance  (line 3364, @0x0000000001d72dd0, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadata_Team::default_instance_
const CDOTAMatchMetadata_Team *__cdecl CDOTAMatchMetadata_Team::default_instance()
{
  const CDOTAMatchMetadata_Team *result; // rax

  result = CDOTAMatchMetadata_Team::default_instance_;
  if ( CDOTAMatchMetadata_Team::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchMetadata_Team::default_instance_;
  }
  return result;
}


// CDOTAMatchMetadata_Team::New  (line 3371, @0x0000000001d70220, libserver.so)
// calls: operator new, CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team, operator delete, _Unwind_Resume
CDOTAMatchMetadata_Team *__fastcall CDOTAMatchMetadata_Team::New(const CDOTAMatchMetadata_Team *const this)
{
  CDOTAMatchMetadata_Team *v1; // rbx

  v1 = operator new(0x90u);
  CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team(v1);
  return v1;
}


// CDOTAMatchMetadata_Team::Clear  (line 3375, @0x0000000001d6af60, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAMatchMetadata_Team::Clear(CDOTAMatchMetadata_Team *const this)
{
  int v2; // r8d
  __int64 v3; // r13
  int v4; // r12d
  __int64 v5; // rdi
  bool v6; // zf

  if ( (*(this + 16) & 0x61) != 0 )
  {
    *(this + 16) = 0;
    *(this + 68) = 0;
    *(this + 30) = 0;
  }
  v2 = *(this + 8);
  v3 = 0;
  v4 = 0;
  *(this + 31) = 0;
  if ( v2 > 0 )
  {
    do
    {
      ++v4;
      v5 = *(*(this + 3) + v3);
      v3 += 8;
      (*(*v5 + 32LL))(v5);
    }
    while ( v4 < *(this + 8) );
  }
  v6 = *(this + 1) == 0;
  *(this + 8) = 0;
  *(this + 14) = 0;
  *(this + 20) = 0;
  *(this + 24) = 0;
  *(this + 28) = 0;
  *(this + 34) = 0;
  *(this + 4) = 0;
  if ( !v6 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMatchMetadata_Team::MergePartialFromCodedStream  (line 3405, @0x0000000001d77ac0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, AddAlreadyReserved, Advance, BufferSize, DecodeFloat, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, ExpectTagFromArray, GetDirectBufferPointerInline, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadLittleEndian32, ReadMessageNoVirtual<CDOTAMatchMetadata_Team_Player>, ReadPackedFixedSizePrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPackedPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPackedPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPackedPrimitiveNoInline<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPackedPrimitiveNoInline<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPrimitiveFromArray<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadRepeatedFixedSizePrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadRepeatedPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadRepeatedPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, Resize, Truncate, __fill_a<float*, float>, add_players, fill<float*, float>, memcpy, set_has_cm_captain_player_id, set_has_cm_first_pick, set_has_cm_penalty, set_has_dota_team
// calls: google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadRaw(void *,int), google::protobuf::io::CodedInputStream::PushLimit(int), google::protobuf::io::CodedInputStream::BytesUntilLimit(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(void), google::protobuf::RepeatedField<float>::Reserve, operator new, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player, CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int) (19 total)
// callers: CDOTAMatchMetadata::MergePartialFromCodedStream
// globals: jpt_1D77B30
bool __fastcall CDOTAMatchMetadata_Team::MergePartialFromCodedStream(
        CDOTAMatchMetadata_Team *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::UnknownFieldSet *i; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  google::protobuf::uint32 TagFallback; // eax
  int v9; // r14d
  bool result; // al
  const google::protobuf::uint8 *v11; // rax
  int v12; // eax
  const google::protobuf::uint8 *v13; // rax
  int v14; // edx
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  const google::protobuf::uint8 *v18; // rax
  const google::protobuf::uint8 *v19; // rax
  int v20; // edx
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rdx
  const google::protobuf::uint8 *v24; // rax
  const google::protobuf::uint8 *v25; // rax
  int v26; // eax
  const google::protobuf::uint8 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r14d
  const google::protobuf::uint8 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // r14d
  const google::protobuf::uint8 *v35; // rax
  __int64 v36; // rdx
  const google::protobuf::uint8 *v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned __int64 v40; // r14
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  unsigned int ii; // ecx
  __int64 v45; // rdx
  const google::protobuf::uint8 *v46; // rax
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // xmm0_4
  __int64 v50; // rax
  const google::protobuf::uint8 *v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // eax
  unsigned __int64 v54; // r14
  int v55; // eax
  int v56; // eax
  __int64 v57; // rcx
  unsigned int n; // ecx
  __int64 v59; // rdx
  const google::protobuf::uint8 *v60; // rax
  unsigned int v61; // edx
  unsigned int v62; // eax
  int v63; // xmm0_4
  __int64 v64; // rax
  const google::protobuf::uint8 *v65; // rax
  unsigned int v66; // edx
  unsigned int v67; // eax
  unsigned __int64 v68; // r14
  int v69; // eax
  int v70; // eax
  __int64 v71; // rcx
  unsigned int k; // ecx
  __int64 v73; // rdx
  const google::protobuf::uint8 *v74; // rax
  unsigned int v75; // edx
  unsigned int v76; // eax
  unsigned int v77; // xmm0_4
  __int64 v78; // rax
  CDOTAMatchMetadata_Team_Player *v79; // r14
  __int64 v80; // rax
  __int64 v81; // rdx
  const google::protobuf::uint8 *v82; // rax
  int v83; // eax
  bool v84; // cc
  int recursion_depth; // eax
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rdx
  const google::protobuf::uint8 *v89; // rax
  int v90; // eax
  const google::protobuf::uint8 *v91; // rax
  unsigned int v92; // edx
  __int64 v93; // rax
  unsigned int v94; // xmm0_4
  __int64 v95; // rdx
  const google::protobuf::uint8 *v96; // rdi
  __int64 v97; // rsi
  int v98; // r8d
  const google::protobuf::uint8 *v99; // rdx
  int v100; // eax
  __int64 v101; // rcx
  int v102; // xmm0_4
  const google::protobuf::uint8 *v103; // rax
  unsigned int v104; // edx
  __int64 v105; // rax
  unsigned int v106; // xmm0_4
  __int64 v107; // rdx
  const google::protobuf::uint8 *v108; // rdi
  __int64 v109; // rsi
  int v110; // r8d
  const google::protobuf::uint8 *v111; // rdx
  int v112; // eax
  __int64 v113; // rcx
  int v114; // xmm0_4
  const google::protobuf::uint8 *v115; // rax
  unsigned int v116; // edx
  __int64 v117; // rax
  unsigned int v118; // xmm0_4
  __int64 v119; // rdx
  const google::protobuf::uint8 *v120; // rdi
  __int64 v121; // rsi
  int v122; // r8d
  const google::protobuf::uint8 *v123; // rdx
  int v124; // eax
  __int64 v125; // rcx
  int v126; // xmm0_4
  unsigned int v127; // edx
  __int64 v128; // rax
  __int64 v129; // rcx
  unsigned int v130; // edx
  __int64 v131; // rax
  __int64 v132; // rcx
  int v133; // r14d
  int v134; // r14d
  __int64 v135; // rax
  _DWORD *v136; // rdx
  _DWORD *jj; // rax
  __int64 v138; // rax
  _DWORD *v139; // rdx
  _DWORD *m; // rax
  __int64 v141; // rax
  _DWORD *v142; // rdx
  _DWORD *j; // rax
  char v144; // al
  char v145; // al
  char LittleEndian32Fallback; // al
  __int64 v147; // [rsp+8h] [rbp-68h]
  google::protobuf::RepeatedField<float> *v148; // [rsp+8h] [rbp-68h]
  __int64 v149; // [rsp+8h] [rbp-68h]
  google::protobuf::RepeatedField<float> *v150; // [rsp+8h] [rbp-68h]
  __int64 v151; // [rsp+8h] [rbp-68h]
  google::protobuf::RepeatedField<float> *v152; // [rsp+8h] [rbp-68h]
  unsigned int v153; // [rsp+10h] [rbp-60h]
  unsigned int v154; // [rsp+10h] [rbp-60h]
  unsigned int v155; // [rsp+10h] [rbp-60h]
  unsigned int v156; // [rsp+10h] [rbp-60h]
  unsigned int v157; // [rsp+10h] [rbp-60h]
  unsigned int v158; // [rsp+10h] [rbp-60h]
  unsigned int v159; // [rsp+10h] [rbp-60h]
  unsigned int v160; // [rsp+10h] [rbp-60h]
  unsigned int v161; // [rsp+10h] [rbp-60h]
  unsigned int v162; // [rsp+18h] [rbp-58h]
  int v163; // [rsp+18h] [rbp-58h]
  unsigned int v164; // [rsp+18h] [rbp-58h]
  int v165; // [rsp+18h] [rbp-58h]
  unsigned int v166; // [rsp+18h] [rbp-58h]
  int v167; // [rsp+18h] [rbp-58h]
  int v168; // [rsp+1Ch] [rbp-54h]
  int v169; // [rsp+1Ch] [rbp-54h]
  int v170; // [rsp+1Ch] [rbp-54h]
  int v171; // [rsp+1Ch] [rbp-54h]
  int v172; // [rsp+1Ch] [rbp-54h]
  int v173; // [rsp+1Ch] [rbp-54h]
  unsigned int *v174; // [rsp+28h] [rbp-48h]
  unsigned int v175; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v176[2]; // [rsp+38h] [rbp-38h] BYREF

  v2 = this + 8;
  v174 = (this + 124);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
LABEL_2:
    if ( buffer < i )
    {
      v7 = *buffer;
      if ( v7 > 0 )
      {
        input->last_tag_ = v7;
        input->buffer_ = buffer + 1;
        break;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v7 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      break;
handle_unusual:
    if ( v7 == 0 || (v7 & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v7, v2, i) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  switch ( v7 >> 3 )
  {
    case 1u:
      if ( v7 != 8 )
        goto handle_unusual;
      v89 = input->buffer_;
      if ( v89 >= input->buffer_end_ || ((v90 = *v89) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 16) == 0 )
          return 0;
      }
      else
      {
        *(this + 16) = v90;
        ++input->buffer_;
      }
      *(this + 4) |= 1u;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 18 )
        goto LABEL_2;
      input->buffer_ = buffer + 1;
LABEL_163:
      while ( 2 )
      {
        v86 = *(this + 8);
        v87 = *(this + 9);
        if ( v86 >= v87 )
        {
          if ( v87 == *(this + 10) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 1, v87 + 1);
          v79 = operator new(0x108u);
          CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player(v79);
          v80 = *(this + 8);
          v81 = *(this + 3);
          ++*(this + 9);
          *(this + 8) = v80 + 1;
          *(v81 + 8 * v80) = v79;
        }
        else
        {
          v88 = *(this + 3);
          *(this + 8) = v86 + 1;
          v79 = *(v88 + 8 * v86);
        }
        v82 = input->buffer_;
        if ( v82 >= input->buffer_end_ || *v82 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v176) == 0 )
            return 0;
        }
        else
        {
          v176[0] = *v82;
          input->buffer_ = v82 + 1;
        }
        v83 = input->recursion_depth_ + 1;
        v84 = input->recursion_limit_ < v83;
        input->recursion_depth_ = v83;
        if ( v84 )
          return 0;
        v170 = google::protobuf::io::CodedInputStream::PushLimit(input, v176[0]);
        if ( !CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream(v79, input) || !input->legitimate_message_end_ )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(input, v170);
        recursion_depth = input->recursion_depth_;
        if ( recursion_depth > 0 )
          input->recursion_depth_ = recursion_depth - 1;
        buffer = input->buffer_;
        i = input->buffer_end_;
        if ( buffer < i )
        {
          if ( *buffer == 18 )
          {
            input->buffer_ = buffer + 1;
            continue;
          }
          if ( *buffer == 29 )
            goto LABEL_175;
        }
        goto LABEL_2;
      }
    case 2u:
      if ( v7 != 18 )
        goto handle_unusual;
      goto LABEL_163;
    case 3u:
      if ( v7 != 29 )
      {
        if ( v7 != 26 )
          goto handle_unusual;
        v65 = input->buffer_;
        if ( v65 >= input->buffer_end_ || ((v66 = *v65) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v175) == 0 )
            return 0;
          v67 = v175;
        }
        else
        {
          v175 = *v65;
          input->buffer_ = v65 + 1;
          v67 = v66;
        }
        v68 = v67 >> 2;
        v157 = *(this + 14);
        v166 = 4 * v68;
        if ( 4 * v68 != v67 )
          return 0;
        v69 = google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(input);
        if ( v69 == -1 )
        {
          v71 = google::protobuf::io::CodedInputStream::BytesUntilLimit(input);
        }
        else
        {
          v151 = v69;
          v70 = google::protobuf::io::CodedInputStream::BytesUntilLimit(input);
          v71 = v151;
          if ( v70 <= v151 )
            v71 = v70;
        }
        v152 = (this + 48);
        if ( v166 <= v71 )
        {
          v9 = v157 + v68;
          if ( v9 > *(this + 14) )
          {
            google::protobuf::RepeatedField<float>::Reserve(v152, v9);
            v141 = *(this + 6);
            v142 = (v141 + 4LL * v9);
            for ( j = (v141 + 4LL * *(this + 14)); v142 != j; ++j )
              *j = 0;
          }
          *(this + 14) = v9;
          if ( google::protobuf::io::CodedInputStream::ReadRaw(input, (*(this + 6) + 4LL * v157), v166) == 0 )
          {
            *(this + 14) = v157;
            return 0;
          }
        }
        else
        {
          for ( k = 0; v68 > k; *(v73 + 4 * v78) = v77 )
          {
            v74 = input->buffer_;
            if ( LODWORD(input->buffer_end_) - v74 <= 3 )
            {
              v161 = k;
              LittleEndian32Fallback = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v176);
              k = v161;
              if ( LittleEndian32Fallback == 0 )
                return 0;
              v76 = v176[0];
            }
            else
            {
              v75 = *v74;
              input->buffer_ = v74 + 4;
              v76 = v75;
            }
            v77 = v76;
            v78 = *(this + 14);
            if ( v78 == *(this + 15) )
            {
              v167 = k;
              v158 = v77;
              google::protobuf::RepeatedField<float>::Reserve(v152, v78 + 1);
              v78 = *(this + 14);
              k = v167;
              v77 = v158;
            }
            v73 = *(this + 6);
            ++k;
            *(this + 14) = v78 + 1;
          }
        }
LABEL_270:
        buffer = input->buffer_;
        i = input->buffer_end_;
        goto LABEL_192;
      }
      v91 = input->buffer_;
      i = input->buffer_end_;
      while ( 1 )
      {
        if ( i - v91 <= 3 )
        {
          result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v176);
          if ( !result )
            return result;
          v92 = v176[0];
        }
        else
        {
          v92 = *v91;
          input->buffer_ = v91 + 4;
        }
        v93 = *(this + 14);
        v94 = v92;
        if ( v93 == *(this + 15) )
        {
          v173 = v92;
          google::protobuf::RepeatedField<float>::Reserve(this + 3, v93 + 1);
          v93 = *(this + 14);
          v94 = v173;
        }
        v95 = *(this + 6);
        *(this + 14) = v93 + 1;
        *(v95 + 4 * v93) = v94;
        i = input->buffer_end_;
        v96 = input->buffer_;
        if ( LODWORD(input->buffer_end_) - v96 <= 0 )
        {
          buffer = input->buffer_;
        }
        else
        {
          v97 = *(this + 14);
          buffer = input->buffer_;
          v98 = *(this + 15) - v97;
          if ( (i - v96) / 5 <= v98 )
            v98 = (i - v96) / 5;
          if ( v98 > 0 && *v96 == 29 )
          {
            v99 = v96 + 1;
            if ( v96 != -1LL )
            {
              v100 = 0;
              while ( 1 )
              {
                v101 = *(this + 6);
                ++v100;
                v102 = *v99;
                *(this + 14) = v97 + 1;
                *(v101 + 4 * v97) = v102;
                if ( v100 == v98 )
                  break;
                if ( v99[4] != 29 )
                  break;
                v99 += 5;
                if ( v99 == 0 )
                  break;
                v97 = *(this + 14);
              }
              if ( 5 * v100 != 0 )
              {
                google::protobuf::io::CodedInputStream::Skip(input, 5 * v100);
                buffer = input->buffer_;
                i = input->buffer_end_;
                goto LABEL_192;
              }
              goto LABEL_270;
            }
          }
        }
LABEL_192:
        if ( buffer >= i )
          goto LABEL_2;
        if ( *buffer != 29 )
          break;
LABEL_175:
        v91 = buffer + 1;
        input->buffer_ = v91;
      }
      if ( *buffer == 37 )
      {
        while ( 1 )
        {
          v103 = buffer + 1;
          input->buffer_ = v103;
parse_graph_gold_earned:
          if ( i - v103 <= 3 )
          {
            result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v176);
            if ( !result )
              return result;
            v104 = v176[0];
          }
          else
          {
            v104 = *v103;
            input->buffer_ = v103 + 4;
          }
          v105 = *(this + 20);
          v106 = v104;
          if ( v105 == *(this + 21) )
          {
            v171 = v104;
            google::protobuf::RepeatedField<float>::Reserve((this + 72), v105 + 1);
            v105 = *(this + 20);
            v106 = v171;
          }
          v107 = *(this + 9);
          *(this + 20) = v105 + 1;
          *(v107 + 4 * v105) = v106;
          i = input->buffer_end_;
          v108 = input->buffer_;
          if ( LODWORD(input->buffer_end_) - v108 <= 0 )
          {
            buffer = input->buffer_;
          }
          else
          {
            v109 = *(this + 20);
            buffer = input->buffer_;
            v110 = *(this + 21) - v109;
            if ( (i - v108) / 5 <= v110 )
              v110 = (i - v108) / 5;
            if ( v110 > 0 && *v108 == 37 )
            {
              v111 = v108 + 1;
              if ( v108 != -1LL )
              {
                v112 = 0;
                while ( 1 )
                {
                  v113 = *(this + 9);
                  ++v112;
                  v114 = *v111;
                  *(this + 20) = v109 + 1;
                  *(v113 + 4 * v109) = v114;
                  if ( v112 == v110 )
                    break;
                  if ( v111[4] != 37 )
                    break;
                  v111 += 5;
                  if ( v111 == 0 )
                    break;
                  v109 = *(this + 20);
                }
                if ( 5 * v112 != 0 )
                {
                  google::protobuf::io::CodedInputStream::Skip(input, 5 * v112);
                  buffer = input->buffer_;
                  i = input->buffer_end_;
                }
                else
                {
LABEL_267:
                  buffer = input->buffer_;
                  i = input->buffer_end_;
                }
              }
            }
          }
          if ( i <= buffer )
            break;
          if ( *buffer != 37 )
          {
            if ( *buffer != 45 )
              goto LABEL_2;
            goto LABEL_216;
          }
        }
      }
      goto LABEL_2;
    case 4u:
      if ( v7 == 37 )
      {
        v103 = input->buffer_;
        i = input->buffer_end_;
        goto parse_graph_gold_earned;
      }
      if ( v7 != 34 )
        goto handle_unusual;
      v51 = input->buffer_;
      if ( v51 >= input->buffer_end_ || ((v52 = *v51) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v175) == 0 )
          return 0;
        v53 = v175;
      }
      else
      {
        v175 = *v51;
        input->buffer_ = v51 + 1;
        v53 = v52;
      }
      v54 = v53 >> 2;
      v155 = *(this + 20);
      v164 = 4 * v54;
      if ( 4 * v54 != v53 )
        return 0;
      v55 = google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(input);
      if ( v55 == -1 )
      {
        v57 = google::protobuf::io::CodedInputStream::BytesUntilLimit(input);
      }
      else
      {
        v149 = v55;
        v56 = google::protobuf::io::CodedInputStream::BytesUntilLimit(input);
        v57 = v149;
        if ( v56 <= v149 )
          v57 = v56;
      }
      v150 = (this + 72);
      if ( v57 >= v164 )
      {
        v133 = v155 + v54;
        if ( v133 > *(this + 20) )
        {
          google::protobuf::RepeatedField<float>::Reserve(v150, v133);
          v138 = *(this + 9);
          v139 = (v138 + 4LL * v133);
          for ( m = (v138 + 4LL * *(this + 20)); v139 != m; ++m )
            *m = 0;
        }
        *(this + 20) = v133;
        if ( google::protobuf::io::CodedInputStream::ReadRaw(input, (*(this + 9) + 4LL * v155), v164) == 0 )
        {
          *(this + 20) = v155;
          return 0;
        }
      }
      else
      {
        for ( n = 0; v54 > n; *(v59 + 4 * v64) = v63 )
        {
          v60 = input->buffer_;
          if ( LODWORD(input->buffer_end_) - v60 <= 3 )
          {
            v160 = n;
            v145 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v176);
            n = v160;
            if ( v145 == 0 )
              return 0;
            v62 = v176[0];
          }
          else
          {
            v61 = *v60;
            input->buffer_ = v60 + 4;
            v62 = v61;
          }
          v63 = v62;
          v64 = *(this + 20);
          if ( v64 == *(this + 21) )
          {
            v165 = v63;
            v156 = n;
            google::protobuf::RepeatedField<float>::Reserve(v150, v64 + 1);
            v64 = *(this + 20);
            v63 = v165;
            n = v156;
          }
          v59 = *(this + 9);
          ++n;
          *(this + 20) = v64 + 1;
        }
      }
      goto LABEL_267;
    case 5u:
      if ( v7 == 45 )
      {
        v115 = input->buffer_;
        i = input->buffer_end_;
        while ( 1 )
        {
          if ( i - v115 <= 3 )
          {
            result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v176);
            if ( !result )
              return result;
            v116 = v176[0];
          }
          else
          {
            v116 = *v115;
            input->buffer_ = v115 + 4;
          }
          v117 = *(this + 24);
          v118 = v116;
          if ( v117 == *(this + 25) )
          {
            v172 = v116;
            google::protobuf::RepeatedField<float>::Reserve((this + 88), v117 + 1);
            v117 = *(this + 24);
            v118 = v172;
          }
          v119 = *(this + 11);
          *(this + 24) = v117 + 1;
          *(v119 + 4 * v117) = v118;
          i = input->buffer_end_;
          v120 = input->buffer_;
          if ( LODWORD(input->buffer_end_) - v120 <= 0 )
          {
            buffer = input->buffer_;
          }
          else
          {
            v121 = *(this + 24);
            buffer = input->buffer_;
            v122 = *(this + 25) - v121;
            if ( (i - v120) / 5 <= v122 )
              v122 = (i - v120) / 5;
            if ( v122 > 0 && *v120 == 45 )
            {
              v123 = v120 + 1;
              if ( v120 != -1LL )
              {
                v124 = 0;
                while ( 1 )
                {
                  v125 = *(this + 11);
                  ++v124;
                  v126 = *v123;
                  *(this + 24) = v121 + 1;
                  *(v125 + 4 * v121) = v126;
                  if ( v124 == v122 )
                    break;
                  if ( v123[4] != 45 )
                    break;
                  v123 += 5;
                  if ( v123 == 0 )
                    break;
                  v121 = *(this + 24);
                }
                if ( 5 * v124 == 0 )
                  goto LABEL_266;
                google::protobuf::io::CodedInputStream::Skip(input, 5 * v124);
                buffer = input->buffer_;
                i = input->buffer_end_;
              }
            }
          }
LABEL_233:
          if ( i <= buffer )
            goto LABEL_2;
          if ( *buffer != 45 )
            break;
LABEL_216:
          v115 = buffer + 1;
          input->buffer_ = v115;
        }
        if ( *buffer == 48 )
        {
          v35 = buffer + 1;
          input->buffer_ = v35;
parse_cm_first_pick:
          if ( i <= v35 || ((v36 = *v35) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v176);
            if ( !result )
              return result;
            v36 = *v176;
          }
          else
          {
            input->buffer_ = v35 + 1;
          }
          *(this + 68) = v36 != 0;
          *(this + 4) |= 0x20u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer < i && *buffer == 56 )
          {
            v25 = buffer + 1;
            input->buffer_ = v25;
parse_cm_captain_player_id:
            if ( i <= v25 || ((v26 = *v25) & 0x80u) != 0 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 30) == 0 )
                return 0;
            }
            else
            {
              *(this + 30) = v26;
              ++input->buffer_;
            }
            *(this + 4) |= 0x40u;
            buffer = input->buffer_;
            i = input->buffer_end_;
            if ( buffer < i && *buffer == 64 )
            {
              while ( 1 )
              {
                v27 = buffer + 1;
                input->buffer_ = v27;
parse_cm_bans:
                if ( i <= v27 || *v27 < 0 )
                {
                  if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v176) == 0 )
                    return 0;
                }
                else
                {
                  v176[0] = *v27;
                  input->buffer_ = v27 + 1;
                }
                v28 = *(this + 28);
                if ( v28 == *(this + 29) )
                {
                  google::protobuf::RepeatedField<unsigned int>::Reserve((this + 104), v28 + 1);
                  v28 = *(this + 28);
                }
                v29 = *(this + 13);
                *(this + 28) = v28 + 1;
                *(v29 + 4 * v28) = v176[0];
                buffer = input->buffer_;
                i = input->buffer_end_;
                v30 = *(this + 29) - *(this + 28);
                if ( v30 > 0 )
                {
                  if ( i <= buffer )
                    goto LABEL_2;
                  do
                  {
                    if ( *buffer != 64 )
                      break;
                    input->buffer_ = buffer + 1;
                    if ( i <= (buffer + 1) || ((v127 = buffer[1]) & 0x80u) != 0 )
                    {
                      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v176) == 0 )
                        return 0;
                      v127 = v176[0];
                    }
                    else
                    {
                      v176[0] = buffer[1];
                      input->buffer_ = buffer + 2;
                    }
                    v128 = *(this + 28);
                    --v30;
                    v129 = *(this + 13);
                    *(this + 28) = v128 + 1;
                    *(v129 + 4 * v128) = v127;
                    buffer = input->buffer_;
                    i = input->buffer_end_;
                    if ( v30 == 0 )
                      break;
                  }
                  while ( buffer < i );
                }
LABEL_72:
                if ( i <= buffer )
                  break;
                if ( *buffer != 64 )
                {
                  if ( *buffer == 72 )
                  {
                    while ( 1 )
                    {
                      v31 = buffer + 1;
                      input->buffer_ = v31;
parse_cm_picks:
                      if ( v31 >= i || *v31 < 0 )
                      {
                        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v176) == 0 )
                          return 0;
                      }
                      else
                      {
                        v176[0] = *v31;
                        input->buffer_ = v31 + 1;
                      }
                      v32 = *(this + 34);
                      if ( v32 == *(this + 35) )
                      {
                        google::protobuf::RepeatedField<unsigned int>::Reserve(this + 8, v32 + 1);
                        v32 = *(this + 34);
                      }
                      v33 = *(this + 16);
                      *(this + 34) = v32 + 1;
                      *(v33 + 4 * v32) = v176[0];
                      buffer = input->buffer_;
                      i = input->buffer_end_;
                      v34 = *(this + 35) - *(this + 34);
                      if ( v34 > 0 && i > buffer )
                      {
                        while ( *buffer == 72 )
                        {
                          input->buffer_ = buffer + 1;
                          if ( i <= (buffer + 1) || ((v130 = buffer[1]) & 0x80u) != 0 )
                          {
                            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v176) == 0 )
                              return 0;
                            v130 = v176[0];
                          }
                          else
                          {
                            v176[0] = buffer[1];
                            input->buffer_ = buffer + 2;
                          }
                          v131 = *(this + 34);
                          --v34;
                          v132 = *(this + 16);
                          *(this + 34) = v131 + 1;
                          *(v132 + 4 * v131) = v130;
                          buffer = input->buffer_;
                          i = input->buffer_end_;
                          if ( v34 == 0 )
                            break;
                          if ( buffer >= i )
                            goto LABEL_2;
                        }
                      }
LABEL_84:
                      if ( buffer >= i )
                        break;
                      if ( *buffer != 72 )
                      {
                        if ( *buffer == 80 )
                        {
                          v11 = buffer + 1;
                          input->buffer_ = v11;
parse_cm_penalty:
                          if ( v11 >= i || ((v12 = *v11) & 0x80u) != 0 )
                          {
                            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v174) == 0 )
                              return 0;
                          }
                          else
                          {
                            *(this + 31) = v12;
                            ++input->buffer_;
                          }
                          *(this + 4) |= 0x200u;
                          buffer = input->buffer_;
                          i = input->buffer_end_;
                          if ( buffer == i )
                          {
                            if ( input->buffer_size_after_limit_ != 0
                              || input->total_bytes_read_ == input->current_limit_ )
                            {
                              input->last_tag_ = 0;
                              input->legitimate_message_end_ = 1;
                              return 1;
                            }
                            i = input->buffer_;
                          }
                        }
                        goto LABEL_2;
                      }
                    }
                  }
                  goto LABEL_2;
                }
              }
            }
          }
        }
        goto LABEL_2;
      }
      if ( v7 != 42 )
        goto handle_unusual;
      v37 = input->buffer_;
      if ( v37 >= input->buffer_end_ || ((v38 = *v37) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v175) == 0 )
          return 0;
        v39 = v175;
      }
      else
      {
        v175 = *v37;
        input->buffer_ = v37 + 1;
        v39 = v38;
      }
      v40 = v39 >> 2;
      v153 = *(this + 24);
      v162 = 4 * v40;
      if ( 4 * v40 != v39 )
        return 0;
      v41 = google::protobuf::io::CodedInputStream::BytesUntilTotalBytesLimit(input);
      if ( v41 == -1 )
      {
        v43 = google::protobuf::io::CodedInputStream::BytesUntilLimit(input);
      }
      else
      {
        v147 = v41;
        v42 = google::protobuf::io::CodedInputStream::BytesUntilLimit(input);
        v43 = v147;
        if ( v42 <= v147 )
          v43 = v42;
      }
      v148 = (this + 88);
      if ( v43 < v162 )
      {
        for ( ii = 0; v40 > ii; *(v45 + 4 * v50) = v49 )
        {
          v46 = input->buffer_;
          if ( LODWORD(input->buffer_end_) - v46 <= 3 )
          {
            v159 = ii;
            v144 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v176);
            ii = v159;
            if ( v144 == 0 )
              return 0;
            v48 = v176[0];
          }
          else
          {
            v47 = *v46;
            input->buffer_ = v46 + 4;
            v48 = v47;
          }
          v49 = v48;
          v50 = *(this + 24);
          if ( v50 == *(this + 25) )
          {
            v163 = ii;
            v154 = v49;
            google::protobuf::RepeatedField<float>::Reserve(v148, v50 + 1);
            v50 = *(this + 24);
            ii = v163;
            v49 = v154;
          }
          v45 = *(this + 11);
          ++ii;
          *(this + 24) = v50 + 1;
        }
        goto LABEL_266;
      }
      v134 = v153 + v40;
      if ( v134 > *(this + 24) )
      {
        google::protobuf::RepeatedField<float>::Reserve(v148, v134);
        v135 = *(this + 11);
        v136 = (v135 + 4LL * v134);
        for ( jj = (v135 + 4LL * *(this + 24)); v136 != jj; ++jj )
          *jj = 0;
      }
      *(this + 24) = v134;
      if ( google::protobuf::io::CodedInputStream::ReadRaw(input, (*(this + 11) + 4LL * v153), v162) != 0 )
      {
LABEL_266:
        buffer = input->buffer_;
        i = input->buffer_end_;
        goto LABEL_233;
      }
      *(this + 24) = v153;
      return 0;
    case 6u:
      if ( v7 != 48 )
        goto handle_unusual;
      v35 = input->buffer_;
      i = input->buffer_end_;
      goto parse_cm_first_pick;
    case 7u:
      if ( v7 != 56 )
        goto handle_unusual;
      v25 = input->buffer_;
      i = input->buffer_end_;
      goto parse_cm_captain_player_id;
    case 8u:
      if ( v7 == 64 )
      {
        v27 = input->buffer_;
        i = input->buffer_end_;
        goto parse_cm_bans;
      }
      if ( v7 != 66 )
        goto handle_unusual;
      v19 = input->buffer_;
      if ( v19 >= input->buffer_end_ || ((v20 = *v19) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v175) == 0 )
          return 0;
        v21 = v175;
      }
      else
      {
        v175 = *v19;
        v21 = v20;
        input->buffer_ = v19 + 1;
      }
      v169 = google::protobuf::io::CodedInputStream::PushLimit(input, v21);
      while ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
      {
        v24 = input->buffer_;
        if ( v24 < input->buffer_end_ && *v24 >= 0 )
        {
          v176[0] = *v24;
          input->buffer_ = v24 + 1;
        }
        else if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v176) == 0 )
        {
          return 0;
        }
        v22 = *(this + 28);
        if ( v22 == *(this + 29) )
        {
          google::protobuf::RepeatedField<unsigned int>::Reserve((this + 104), v22 + 1);
          v22 = *(this + 28);
        }
        v23 = *(this + 13);
        *(this + 28) = v22 + 1;
        *(v23 + 4 * v22) = v176[0];
      }
      google::protobuf::io::CodedInputStream::PopLimit(input, v169);
      buffer = input->buffer_;
      i = input->buffer_end_;
      goto LABEL_72;
    case 9u:
      if ( v7 == 72 )
      {
        v31 = input->buffer_;
        i = input->buffer_end_;
        goto parse_cm_picks;
      }
      if ( v7 != 74 )
        goto handle_unusual;
      v13 = input->buffer_;
      if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v175) == 0 )
          return 0;
        v15 = v175;
      }
      else
      {
        v175 = *v13;
        v15 = v14;
        input->buffer_ = v13 + 1;
      }
      v168 = google::protobuf::io::CodedInputStream::PushLimit(input, v15);
      while ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
      {
        v18 = input->buffer_;
        if ( v18 < input->buffer_end_ && *v18 >= 0 )
        {
          v176[0] = *v18;
          input->buffer_ = v18 + 1;
        }
        else if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v176) == 0 )
        {
          return 0;
        }
        v16 = *(this + 34);
        if ( v16 == *(this + 35) )
        {
          google::protobuf::RepeatedField<unsigned int>::Reserve(this + 8, v16 + 1);
          v16 = *(this + 34);
        }
        v17 = *(this + 16);
        *(this + 34) = v16 + 1;
        *(v17 + 4 * v16) = v176[0];
      }
      google::protobuf::io::CodedInputStream::PopLimit(input, v168);
      buffer = input->buffer_;
      i = input->buffer_end_;
      goto LABEL_84;
    case 0xAu:
      if ( v7 != 80 )
        goto handle_unusual;
      v11 = input->buffer_;
      i = input->buffer_end_;
      goto parse_cm_penalty;
    default:
      goto handle_unusual;
  }
}


// CDOTAMatchMetadata_Team::SerializeWithCachedSizes  (line 3605, @0x0000000001d6c000, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, cm_bans, cm_picks, empty, graph_experience, graph_gold_earned, graph_net_worth, players
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchMetadata_Team::SerializeWithCachedSizes(
        const CDOTAMatchMetadata_Team *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // r13
  __int64 j; // r13
  __int64 k; // r13
  __int64 m; // r13
  int v10; // eax
  __int64 n; // r13
  __int64 ii; // r13
  _QWORD *v13; // rax

  if ( (*(this + 16) & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 16), output, v3);
  for ( i = 0; *(this + 8) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, *(*(this + 3) + 8 * i), output, v3);
  for ( j = 0; *(this + 14) > j; ++j )
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 1, output, *(*(this + 6) + 4 * j), v2);
  for ( k = 0; *(this + 20) > k; ++k )
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 2, output, *(*(this + 9) + 4 * k), v2);
  for ( m = 0; *(this + 24) > m; ++m )
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 3, output, *(*(this + 11) + 4 * m), v2);
  v10 = *(this + 4);
  if ( (v10 & 0x20) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_6, *(this + 68), output, v3);
    v10 = *(this + 4);
  }
  if ( (v10 & 0x40) != 0 )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6 + 1, *(this + 30), output, v3);
  for ( n = 0; *(this + 28) > n; ++n )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_8, *(*(this + 13) + 4 * n), output, v3);
  for ( ii = 0; *(this + 34) > ii; ++ii )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_9, *(*(this + 16) + 4 * ii), output, v3);
  if ( (*(this + 17) & 2) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_A, *(this + 31), output, v3);
    v13 = *(this + 1);
    if ( v13 == 0 )
      return;
  }
  else
  {
    v13 = *(this + 1);
    if ( v13 == 0 )
      return;
  }
  if ( v13[1] != *v13 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAMatchMetadata_Team::SerializeWithCachedSizesToArray  (line 3671, @0x0000000001d79480, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, GetCachedSize, WriteBoolNoTagToArray, WriteBoolToArray, WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteMessageNoVirtualToArray<CDOTAMatchMetadata_Team_Player>, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, cm_bans, cm_picks, empty, graph_experience, graph_gold_earned, graph_net_worth, memcpy, players
// calls: CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDOTAMatchMetadata::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchMetadata_Team::SerializeWithCachedSizesToArray(
        const CDOTAMatchMetadata_Team *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::uint8 *result; // rax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  __int64 v6; // r13
  int v7; // r12d
  google::protobuf::uint8 *v8; // rsi
  unsigned __int8 *v9; // rdx
  unsigned int *v10; // r14
  google::protobuf::io::CodedOutputStream *v11; // rdi
  __int64 v12; // rcx
  int v13; // edx
  int v14; // esi
  __int64 v15; // rcx
  int v16; // edx
  int v17; // esi
  __int64 v18; // rcx
  int v19; // edx
  int v20; // esi
  int v21; // edx
  google::protobuf::uint8 v22; // dl
  unsigned __int8 *v23; // rdx
  google::protobuf::io::CodedOutputStream *v24; // rdi
  unsigned __int8 *v25; // rdx
  __int64 v26; // r13
  int v27; // r12d
  google::protobuf::io::CodedOutputStream *v28; // rdi
  __int64 v29; // r13
  int v30; // r12d
  google::protobuf::io::CodedOutputStream *v31; // rdi
  google::protobuf::io::CodedOutputStream *v32; // rdi
  __int64 v33; // rdx

  result = target;
  if ( (*(this + 16) & 1) != 0 )
  {
    v5 = *(this + 16);
    *target = 8;
    if ( v5 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v5, target + 1, v2);
    }
    else
    {
      target[1] = v5;
      result = target + 2;
    }
  }
  if ( *(this + 8) > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v9 = *(this + 3);
      v10 = *&v9[v6];
      *result = 18;
      v11 = v10[5];
      if ( v11 <= 0x7F )
      {
        result[1] = v11;
        v8 = result + 2;
      }
      else
      {
        v8 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v11, result + 1, v9);
      }
      ++v7;
      v6 += 8;
      result = CDOTAMatchMetadata_Team_Player::SerializeWithCachedSizesToArray(v10, v8);
    }
    while ( v7 < *(this + 8) );
  }
  if ( *(this + 14) > 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      ++v13;
      result += 5;
      v14 = *(*(this + 6) + v12);
      *(result - 5) = 29;
      v12 += 4;
      *(result - 1) = v14;
    }
    while ( v13 < *(this + 14) );
  }
  if ( *(this + 20) > 0 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      ++v16;
      result += 5;
      v17 = *(*(this + 9) + v15);
      *(result - 5) = 37;
      v15 += 4;
      *(result - 1) = v17;
    }
    while ( v16 < *(this + 20) );
  }
  if ( *(this + 24) > 0 )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      ++v19;
      result += 5;
      v20 = *(*(this + 11) + v18);
      *(result - 5) = 45;
      v18 += 4;
      *(result - 1) = v20;
    }
    while ( v19 < *(this + 24) );
  }
  v21 = *(this + 4);
  if ( (v21 & 0x20) != 0 )
  {
    v22 = *(this + 68);
    *result = 48;
    result += 2;
    *(result - 1) = v22;
    v21 = *(this + 4);
  }
  v23 = (v21 & 0x40);
  if ( v23 != 0 )
  {
    v24 = *(this + 30);
    *result = 56;
    if ( v24 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v24, result + 1, v23);
    }
    else
    {
      result[1] = v24;
      result += 2;
    }
  }
  v25 = *(this + 28);
  if ( v25 > 0 )
  {
    v26 = 0;
    v27 = 0;
    do
    {
      while ( 1 )
      {
        v25 = *(this + 13);
        v28 = *&v25[v26];
        *result = 64;
        if ( v28 > 0x7F )
          break;
        result[1] = v28;
        ++v27;
        result += 2;
        v26 += 4;
        if ( v27 >= *(this + 28) )
          goto LABEL_29;
      }
      ++v27;
      v26 += 4;
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v28, result + 1, v25);
    }
    while ( v27 < *(this + 28) );
  }
LABEL_29:
  if ( *(this + 34) > 0 )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      v25 = *(this + 16);
      v31 = *&v25[v29];
      *result = 72;
      if ( v31 <= 0x7F )
      {
        result[1] = v31;
        result += 2;
      }
      else
      {
        result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v31, result + 1, v25);
      }
      ++v30;
      v29 += 4;
    }
    while ( v30 < *(this + 34) );
  }
  if ( (*(this + 17) & 2) != 0 )
  {
    v32 = *(this + 31);
    *result = 80;
    if ( v32 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v32, result + 1, v25);
    }
    else
    {
      result[1] = v32;
      result += 2;
    }
  }
  v33 = *(this + 1);
  if ( v33 != 0 && *(v33 + 8) != *v33 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v33);
  return result;
}


// CDOTAMatchMetadata_Team::ByteSize  (line 3739, @0x0000000001d79c70, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDOTAMatchMetadata_Team_Player>, UInt32Size, VarintSize32, cm_bans, cm_picks, empty, players
// calls: CDOTAMatchMetadata_Team_Player::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTAMatchMetadata::ByteSize
int __fastcall CDOTAMatchMetadata_Team::ByteSize(const CDOTAMatchMetadata_Team *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v2; // r15d
  int v4; // edx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  int v6; // eax
  int v7; // r15d
  __int64 v8; // r14
  int v9; // r13d
  unsigned int v10; // r12d
  int v11; // eax
  int v12; // edx
  int v13; // r15d
  __int64 v14; // r12
  int v15; // r13d
  google::protobuf::io::CodedOutputStream *v16; // rdi
  int v17; // eax
  int v18; // r13d
  int v19; // edx
  int v20; // r13d
  __int64 v21; // r12
  int v22; // r14d
  google::protobuf::io::CodedOutputStream *v23; // rdi
  int v24; // eax
  _QWORD *v25; // rax
  int v26; // r13d
  google::protobuf::io::CodedOutputStream *v28; // rdi
  int v29; // eax
  google::protobuf::io::CodedOutputStream *v30; // rdi
  int v31; // eax
  int v32; // eax
  int v33; // eax

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v2 = 0;
    if ( (v4 & 1) != 0 )
    {
      v5 = *(this + 16);
      v2 = 2;
      if ( v5 > 0x7F )
      {
        v32 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
        v4 = *(this + 4);
        v2 = v32 + 1;
      }
    }
    if ( (v4 & 0x20) != 0 )
      v2 += 2;
    if ( (v4 & 0x40) != 0 )
    {
      v30 = *(this + 30);
      v31 = 2;
      if ( v30 > 0x7F )
      {
        v33 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v30, v1);
        v4 = *(this + 4);
        v31 = v33 + 1;
      }
      v2 += v31;
    }
  }
  if ( (v4 & 0x1FE00) != 0 && (v4 & 0x200) != 0 )
  {
    v28 = *(this + 31);
    v29 = 2;
    if ( v28 > 0x7F )
      v29 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v28, v1) + 1;
    v2 += v29;
  }
  v6 = *(this + 8);
  v7 = v6 + v2;
  if ( v6 > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = CDOTAMatchMetadata_Team_Player::ByteSize(*(*(this + 3) + v8));
      v11 = 1;
      if ( v10 > 0x7F )
        v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
      ++v9;
      v8 += 8;
      v7 += v11 + v10;
    }
    while ( v9 < *(this + 8) );
  }
  v12 = *(this + 28);
  v13 = 5 * *(this + 24) + 5 * *(this + 20) + 5 * *(this + 14) + v7;
  if ( v12 <= 0 )
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
        v16 = *(*(this + 13) + 4 * v14);
        if ( v16 > 0x7F )
          break;
        ++v15;
        if ( v12 <= ++v14 )
          goto LABEL_20;
      }
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, v1);
      v12 = *(this + 28);
      v15 += v17;
      ++v14;
    }
    while ( v12 > v14 );
  }
LABEL_20:
  v18 = v12 + v15;
  v19 = *(this + 34);
  v20 = v13 + v18;
  if ( v19 <= 0 )
  {
    v22 = 0;
  }
  else
  {
    v21 = 0;
    v22 = 0;
    do
    {
      while ( 1 )
      {
        v23 = *(*(this + 16) + 4 * v21);
        if ( v23 > 0x7F )
          break;
        ++v22;
        if ( ++v21 >= v19 )
          goto LABEL_25;
      }
      v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v23, v1);
      v19 = *(this + 34);
      v22 += v24;
      ++v21;
    }
    while ( v21 < v19 );
  }
LABEL_25:
  v25 = *(this + 1);
  v26 = v19 + v22 + v20;
  if ( v25 != 0 && v25[1] != *v25 )
    v26 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v26;
  return v26;
}


// CDOTAMatchMetadata_Team::MergeFrom  (line 3832, @0x0000000001d75580, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchMetadata_Team*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchMetadata_Team::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchMetadata_Team
void __fastcall CDOTAMatchMetadata_Team::MergeFrom(
        CDOTAMatchMetadata_Team *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchMetadata_Team *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      3833);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMatchMetadata_Team, 0)) != 0 )
  {
    CDOTAMatchMetadata_Team::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchMetadata_Team::MergeFrom  (line 3844, @0x0000000001d74e90, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, CopyArray, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>, New, memcpy, operator(), set_cm_captain_player_id, set_cm_first_pick, set_cm_penalty, set_dota_team, set_has_cm_captain_player_id, set_has_cm_first_pick, set_has_cm_penalty, set_has_dota_team
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player, CDOTAMatchMetadata_Team_Player::MergeFrom, google::protobuf::RepeatedField<float>::Reserve, memcpy, google::protobuf::RepeatedField<unsigned int>::Reserve, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage() (14 total)
// callers: CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team, CDOTAMatchMetadata_Team::MergeFrom, CDOTAMatchMetadata_Team::CopyFrom, CDOTAMatchMetadata::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchMetadata_Team::MergeFrom(
        CDOTAMatchMetadata_Team *const this,
        const CDOTAMatchMetadata_Team *const from)
{
  __int64 v4; // r14
  int v5; // r13d
  CDOTAMatchMetadata_Team_Player *v6; // r15
  __int64 v7; // rax
  CDOTAMatchMetadata_Team_Player *v8; // rdi
  __int64 v9; // rdx
  const CDOTAMatchMetadata_Team_Player *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // eax
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v31; // [rsp+8h] [rbp-68h]
  char v32; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v33; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      3845);
    v25 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v25);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  v31 = (this + 24);
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v26 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v26);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v31, *(from + 8) + *(this + 8));
  if ( *(from + 8) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v11 = *(this + 8);
      v12 = *(this + 9);
      if ( v11 >= v12 )
      {
        if ( v12 == *(this + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v31, v12 + 1);
        v6 = operator new(0x108u);
        CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player(v6);
        v7 = *(this + 8);
        v8 = v6;
        v9 = *(this + 3);
        ++*(this + 9);
        *(this + 8) = v7 + 1;
        *(v9 + 8 * v7) = v6;
      }
      else
      {
        v13 = *(this + 3);
        *(this + 8) = v11 + 1;
        v8 = *(v13 + 8 * v11);
      }
      ++v5;
      v10 = *(*(from + 3) + v4);
      v4 += 8;
      CDOTAMatchMetadata_Team_Player::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  if ( this + 48 == from + 48 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v27 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v27);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  v14 = *(from + 14);
  if ( v14 != 0 )
  {
    google::protobuf::RepeatedField<float>::Reserve(this + 3, *(this + 14) + v14);
    memcpy((*(this + 6) + 4LL * *(this + 14)), *(from + 6), 4LL * *(from + 14));
    *(this + 14) += *(from + 14);
  }
  if ( this + 72 == from + 72 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v28 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v28);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  v15 = *(from + 20);
  if ( v15 != 0 )
  {
    google::protobuf::RepeatedField<float>::Reserve((this + 72), *(this + 20) + v15);
    memcpy((*(this + 9) + 4LL * *(this + 20)), *(from + 9), 4LL * *(from + 20));
    *(this + 20) += *(from + 20);
  }
  if ( this + 88 == from + 88 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v29 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v29);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  v16 = *(from + 24);
  if ( v16 != 0 )
  {
    google::protobuf::RepeatedField<float>::Reserve((this + 88), *(this + 24) + v16);
    memcpy((*(this + 11) + 4LL * *(this + 24)), *(from + 11), 4LL * *(from + 24));
    *(this + 24) += *(from + 24);
  }
  if ( this + 104 == from + 104 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v30 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v30);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  v17 = *(from + 28);
  if ( v17 != 0 )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve((this + 104), *(this + 28) + v17);
    memcpy((*(this + 13) + 4LL * *(this + 28)), *(from + 13), 4LL * *(from + 28));
    *(this + 28) += *(from + 28);
  }
  if ( this + 128 == from + 128 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v24 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v24);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  v18 = *(from + 34);
  if ( v18 != 0 )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve(this + 8, *(this + 34) + v18);
    memcpy((*(this + 16) + 4LL * *(this + 34)), *(from + 16), 4LL * *(from + 34));
    *(this + 34) += *(from + 34);
  }
  v19 = *(from + 4);
  if ( v19 != 0 )
  {
    if ( (v19 & 1) != 0 )
    {
      v20 = *(from + 16);
      *(this + 4) |= 1u;
      *(this + 16) = v20;
      v19 = *(from + 4);
    }
    if ( (v19 & 0x20) != 0 )
    {
      v21 = *(from + 68);
      *(this + 4) |= 0x20u;
      *(this + 68) = v21;
      v19 = *(from + 4);
    }
    if ( (v19 & 0x40) != 0 )
    {
      v23 = *(from + 30);
      *(this + 4) |= 0x40u;
      *(this + 30) = v23;
      v19 = *(from + 4);
    }
  }
  if ( (v19 & 0x1FE00) != 0 && (v19 & 0x200) != 0 )
  {
    v22 = *(from + 31);
    *(this + 4) |= 0x200u;
    *(this + 31) = v22;
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchMetadata_Team::CopyFrom  (line 3871, @0x0000000001d6a7e0, libserver.so)
void __fastcall CDOTAMatchMetadata_Team::CopyFrom(
        CDOTAMatchMetadata_Team *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchMetadata_Team::CopyFrom  (line 3877, @0x0000000001d75660, libserver.so)
// calls: CDOTAMatchMetadata_Team::MergeFrom
void __fastcall CDOTAMatchMetadata_Team::CopyFrom(
        CDOTAMatchMetadata_Team *const this,
        const CDOTAMatchMetadata_Team *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchMetadata_Team::MergeFrom(this, from);
  }
}


// CDOTAMatchMetadata_Team::IsInitialized  (line 3883, @0x0000000001d6a820, libserver.so)
bool __fastcall CDOTAMatchMetadata_Team::IsInitialized(const CDOTAMatchMetadata_Team *const this)
{
  return 1;
}


// CDOTAMatchMetadata_Team::Swap  (line 3888, @0x0000000001d70300, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTAMatchMetadata_Team::Swap(CDOTAMatchMetadata_Team *const this, CDOTAMatchMetadata_Team *other)
{
  int v4; // edx
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // rdi
  int total_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v7; // rsi
  __int64 v8; // rcx
  int v9; // edx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rcx
  int v23; // edx
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rcx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax

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
    v11 = *(other + 9);
    *(other + 6) = v8;
    *(other + 14) = v9;
    *(other + 15) = v10;
    v12 = *(this + 9);
    *(this + 9) = v11;
    v13 = *(this + 20);
    v14 = *(this + 21);
    *(this + 20) = *(other + 20);
    *(this + 21) = *(other + 21);
    v15 = *(other + 11);
    *(other + 9) = v12;
    *(other + 20) = v13;
    *(other + 21) = v14;
    v16 = *(this + 11);
    *(this + 11) = v15;
    v17 = *(this + 24);
    v18 = *(this + 25);
    *(this + 24) = *(other + 24);
    *(this + 25) = *(other + 25);
    *(other + 11) = v16;
    *(other + 24) = v17;
    LOBYTE(v17) = *(other + 68);
    *(other + 25) = v18;
    LOBYTE(v18) = *(this + 68);
    *(this + 68) = v17;
    v19 = *(other + 30);
    *(other + 68) = v18;
    v20 = *(this + 30);
    *(this + 30) = v19;
    v21 = *(other + 13);
    *(other + 30) = v20;
    v22 = *(this + 13);
    v23 = *(this + 28);
    *(this + 13) = v21;
    v24 = *(this + 29);
    *(this + 28) = *(other + 28);
    *(this + 29) = *(other + 29);
    v25 = *(other + 16);
    *(other + 13) = v22;
    *(other + 28) = v23;
    *(other + 29) = v24;
    v26 = *(this + 16);
    *(this + 16) = v25;
    v27 = *(this + 34);
    v28 = *(this + 35);
    *(this + 34) = *(other + 34);
    *(this + 35) = *(other + 35);
    *(other + 34) = v27;
    *(other + 16) = v26;
    *(other + 35) = v28;
    v29 = *(this + 31);
    *(this + 31) = *(other + 31);
    *(other + 31) = v29;
    v30 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v30;
    v31 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v31;
    LODWORD(v31) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v31;
  }
}


// CDOTAMatchMetadata_Team::GetMetadata  (line 3906, @0x0000000001d6d5a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_, `anonymous namespace'::CDOTAMatchMetadata_Team_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchMetadata_Team::GetMetadata(const CDOTAMatchMetadata_Team *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchMetadata_Team_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchMetadata_Team_reflection_;
  return result;
}


// CDOTAMatchMetadata::CDOTAMatchMetadata  (line 3925, @0x0000000001d705a0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTAMatchMetadata::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchMetadataFile::MergeFrom, CDOTAMatchMetadataFile::MergePartialFromCodedStream, CDOTAGamerules::ClientMsg_MatchMetadata, CDOTAGCServerSystem::EnsureLastMatchMetadata
void __fastcall CDOTAMatchMetadata::CDOTAMatchMetadata(CDOTAMatchMetadata *const this)
{
  *this = off_3F9C270;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  CDOTAMatchMetadata::SharedCtor(this);
}


// CDOTAMatchMetadata::InitAsDefaultInstance  (line 3931, @0x0000000001d704c0, libserver.so)
void __fastcall CDOTAMatchMetadata::InitAsDefaultInstance(CDOTAMatchMetadata *const this)
{
  ;
}


// CDOTAMatchMetadata::CDOTAMatchMetadata  (line 3934, @0x0000000001d75cf0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchMetadata::SharedCtor, CDOTAMatchMetadata::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchMetadata::CDOTAMatchMetadata(
        CDOTAMatchMetadata *const this,
        const CDOTAMatchMetadata *const from)
{
  *this = off_3F9C270;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  CDOTAMatchMetadata::SharedCtor(this);
  CDOTAMatchMetadata::MergeFrom(this, from);
}


// CDOTAMatchMetadata::SharedCtor  (line 3941, @0x0000000001d704d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTAMatchMetadata::CDOTAMatchMetadata
void __fastcall CDOTAMatchMetadata::SharedCtor(CDOTAMatchMetadata *const this)
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
  *(this + 9) = 0;
  *(this + 10) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 11) = v4;
  *(this + 4) = 0;
}


// CDOTAMatchMetadata::~CDOTAMatchMetadata  (line 3950, @0x0000000001d70700, libserver.so)  // inlines: ~RepeatedPtrField
// calls: CDOTAMatchMetadata::SharedDtor, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMatchMetadata::~CDOTAMatchMetadata, CDOTAGamerules::ClientMsg_MatchMetadata
void __fastcall CDOTAMatchMetadata::~CDOTAMatchMetadata(CDOTAMatchMetadata *const this)
{
  *this = off_3F9C270;
  CDOTAMatchMetadata::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>(
    this + 2,
    (this + 60));
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchMetadata::~CDOTAMatchMetadata  (line 3950, @0x0000000001d70750, libserver.so)
// calls: CDOTAMatchMetadata::~CDOTAMatchMetadata, operator delete
void __fastcall CDOTAMatchMetadata::~CDOTAMatchMetadata(CDOTAMatchMetadata *const this)
{
  CDOTAMatchMetadata::~CDOTAMatchMetadata(this);
  operator delete(this);
}


// CDOTAMatchMetadata::SharedDtor  (line 3955, @0x0000000001d70690, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTAMatchMetadata::~CDOTAMatchMetadata
void __fastcall CDOTAMatchMetadata::SharedDtor(CDOTAMatchMetadata *const this)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  _BYTE v6[17]; // [rsp+Fh] [rbp-11h] BYREF

  v1 = *(this + 11);
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


// CDOTAMatchMetadata::SetCachedSize  (line 3961, @0x0000000001d6a830, libserver.so)
void __fastcall CDOTAMatchMetadata::SetCachedSize(const CDOTAMatchMetadata *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMatchMetadata::descriptor  (line 3966, @0x0000000001d70770, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchMetadata::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchMetadata_descriptor_;
}


// CDOTAMatchMetadata::default_instance  (line 3971, @0x0000000001d72e00, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchMetadata::default_instance_
const CDOTAMatchMetadata *__cdecl CDOTAMatchMetadata::default_instance()
{
  const CDOTAMatchMetadata *result; // rax

  result = CDOTAMatchMetadata::default_instance_;
  if ( CDOTAMatchMetadata::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchMetadata::default_instance_;
  }
  return result;
}


// CDOTAMatchMetadata::New  (line 3978, @0x0000000001d70650, libserver.so)
// calls: operator new, CDOTAMatchMetadata::CDOTAMatchMetadata, operator delete, _Unwind_Resume
CDOTAMatchMetadata *__fastcall CDOTAMatchMetadata::New(const CDOTAMatchMetadata *const this)
{
  CDOTAMatchMetadata *v1; // rbx

  v1 = operator new(0x60u);
  CDOTAMatchMetadata::CDOTAMatchMetadata(v1);
  return v1;
}


// CDOTAMatchMetadata::Clear  (line 3982, @0x0000000001d6b030, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, Clear<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
// callers: CDOTAMatchMetadataFile::Clear
void __fastcall CDOTAMatchMetadata::Clear(CDOTAMatchMetadata *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  __int64 v4; // rdi
  int v5; // r9d
  __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // rdi
  bool v9; // zf

  if ( (*(this + 16) & 0x1C) != 0 )
  {
    v9 = (*(this + 16) & 0x10) == 0;
    *(this + 9) = 0;
    *(this + 10) = 0;
    if ( !v9 )
      std::string::_M_mutate(*(this + 11), 0, *(**(this + 11) - 24LL), 0);
  }
  v2 = 0;
  v3 = 0;
  while ( v3 < *(this + 8) )
  {
    ++v3;
    v4 = *(*(this + 3) + v2);
    v2 += 8;
    (*(*v4 + 32LL))(v4);
  }
  v5 = *(this + 14);
  v6 = 0;
  v7 = 0;
  *(this + 8) = 0;
  if ( v5 > 0 )
  {
    do
    {
      ++v7;
      v8 = *(*(this + 6) + v6);
      v6 += 8;
      (*(*v8 + 32LL))(v8);
    }
    while ( v7 < *(this + 14) );
  }
  v9 = *(this + 1) == 0;
  *(this + 14) = 0;
  *(this + 4) = 0;
  if ( !v9 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMatchMetadata::MergePartialFromCodedStream  (line 4009, @0x0000000001d79e90, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, Advance, BufferSize, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadLittleEndian64, ReadMessageNoVirtual<CDOTAMatchMetadata_Team>, ReadMessageNoVirtual<CLobbyTimedRewardDetails>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)6u>, ReadTagWithCutoff, ReadVarint32, add_item_rewards, add_teams, memcpy, mutable_event_game_custom_table, set_has_event_game_custom_table, set_has_lobby_id, set_has_report_until_time
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), operator new, CLobbyTimedRewardDetails::CLobbyTimedRewardDetails, google::protobuf::io::CodedInputStream::PushLimit(int), CLobbyTimedRewardDetails::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team, CDOTAMatchMetadata_Team::MergePartialFromCodedStream, google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int) (15 total)
// callers: CDOTAMatchMetadataFile::MergePartialFromCodedStream
// globals: jpt_1D79F08
bool __fastcall CDOTAMatchMetadata::MergePartialFromCodedStream(
        CDOTAMatchMetadata *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r14d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  google::protobuf::uint8 *v8; // rdx
  CLobbyTimedRewardDetails *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  const google::protobuf::uint8 *v12; // rax
  int v13; // eax
  bool v14; // cc
  int v15; // eax
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // rax
  CDOTAMatchMetadata_Team *i; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  const google::protobuf::uint8 *v24; // rax
  int v25; // eax
  int recursion_depth; // eax
  __int64 v27; // rdx
  const google::protobuf::uint8 *v28; // rdx
  bool result; // al
  const google::protobuf::uint8 *v30; // rax
  google::protobuf::uint32 TagFallback; // eax
  unsigned __int64 *v32; // [rsp+8h] [rbp-58h]
  int v33; // [rsp+14h] [rbp-4Ch]
  int v34; // [rsp+14h] [rbp-4Ch]
  unsigned __int64 *v35; // [rsp+18h] [rbp-48h]
  unsigned int v36[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v35 = (this + 80);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  v32 = (this + 72);
  while ( 1 )
  {
LABEL_2:
    if ( buffer_end > buffer )
    {
      v7 = *buffer;
      if ( v7 > 0 )
      {
        v8 = (buffer + 1);
        input->last_tag_ = v7;
        input->buffer_ = v8;
LABEL_5:
        switch ( v7 >> 3 )
        {
          case 1u:
            if ( v7 != 10 )
              goto handle_unusual;
            v19 = *(this + 9);
            v20 = *(this + 8);
            if ( v20 >= v19 )
              goto LABEL_31;
            while ( 1 )
            {
              v27 = *(this + 3);
              *(this + 8) = v20 + 1;
              for ( i = *(v27 + 8 * v20); ; *(v23 + 8 * v22) = i )
              {
                v24 = input->buffer_;
                if ( v24 >= input->buffer_end_ || *v24 < 0 )
                {
                  if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v36) == 0 )
                    return 0;
                }
                else
                {
                  v36[0] = *v24;
                  input->buffer_ = v24 + 1;
                }
                v25 = input->recursion_depth_ + 1;
                v14 = input->recursion_limit_ < v25;
                input->recursion_depth_ = v25;
                if ( v14 )
                  return 0;
                v34 = google::protobuf::io::CodedInputStream::PushLimit(input, v36[0]);
                if ( !CDOTAMatchMetadata_Team::MergePartialFromCodedStream(i, input) || !input->legitimate_message_end_ )
                  return 0;
                google::protobuf::io::CodedInputStream::PopLimit(input, v34);
                recursion_depth = input->recursion_depth_;
                if ( recursion_depth > 0 )
                  input->recursion_depth_ = recursion_depth - 1;
                buffer = input->buffer_;
                buffer_end = input->buffer_end_;
                if ( buffer >= buffer_end )
                  goto LABEL_2;
                if ( *buffer != 10 )
                {
                  if ( *buffer != 18 )
                    goto LABEL_2;
                  input->buffer_ = buffer + 1;
                  goto LABEL_27;
                }
                input->buffer_ = buffer + 1;
                v20 = *(this + 8);
                v19 = *(this + 9);
                if ( v20 < v19 )
                  break;
LABEL_31:
                if ( v19 == *(this + 10) )
                  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 1, v19 + 1);
                i = operator new(0x90u);
                CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team(i);
                v22 = *(this + 8);
                v23 = *(this + 3);
                ++*(this + 9);
                *(this + 8) = v22 + 1;
              }
            }
          case 2u:
            if ( v7 != 18 )
              goto handle_unusual;
            break;
          case 3u:
            if ( v7 != 25 )
              goto handle_unusual;
            v30 = input->buffer_;
            buffer_end = input->buffer_end_;
            goto parse_lobby_id;
          case 4u:
            if ( v7 != 33 )
              goto handle_unusual;
            v28 = input->buffer_;
            buffer_end = input->buffer_end_;
            goto parse_report_until_time;
          case 5u:
            if ( v7 != 42 )
              goto handle_unusual;
            goto parse_event_game_custom_table;
          default:
handle_unusual:
            if ( v7 != 0 )
              goto LABEL_8;
            return 1;
        }
        while ( 1 )
        {
LABEL_27:
          v16 = *(this + 14);
          v17 = *(this + 15);
          if ( v16 >= v17 )
          {
            if ( v17 == *(this + 16) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this + 2, v17 + 1);
            v9 = operator new(0x28u);
            CLobbyTimedRewardDetails::CLobbyTimedRewardDetails(v9);
            v10 = *(this + 14);
            v11 = *(this + 6);
            ++*(this + 15);
            *(this + 14) = v10 + 1;
            *(v11 + 8 * v10) = v9;
          }
          else
          {
            v18 = *(this + 6);
            *(this + 14) = v16 + 1;
            v9 = *(v18 + 8 * v16);
          }
          v12 = input->buffer_;
          if ( v12 >= input->buffer_end_ || *v12 < 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v36) == 0 )
              return 0;
          }
          else
          {
            v36[0] = *v12;
            input->buffer_ = v12 + 1;
          }
          v13 = input->recursion_depth_ + 1;
          v14 = input->recursion_limit_ < v13;
          input->recursion_depth_ = v13;
          if ( v14 )
            return 0;
          v33 = google::protobuf::io::CodedInputStream::PushLimit(input, v36[0]);
          if ( !CLobbyTimedRewardDetails::MergePartialFromCodedStream(v9, input) || !input->legitimate_message_end_ )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(input, v33);
          v15 = input->recursion_depth_;
          if ( v15 > 0 )
            input->recursion_depth_ = v15 - 1;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end )
            goto LABEL_2;
          if ( *buffer != 18 )
          {
            if ( *buffer != 25 )
              goto LABEL_2;
            v30 = buffer + 1;
            input->buffer_ = buffer + 1;
parse_lobby_id:
            if ( buffer_end - v30 <= 7 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, v32) == 0 )
                return 0;
            }
            else
            {
              *v32 = *v30;
              input->buffer_ += 8;
            }
            *(this + 4) |= 4u;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer >= buffer_end || *buffer != 33 )
              goto LABEL_2;
            v28 = buffer + 1;
            input->buffer_ = v28;
parse_report_until_time:
            if ( buffer_end - v28 <= 7 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, v35) == 0 )
                return 0;
            }
            else
            {
              *v35 = *v28;
              input->buffer_ += 8;
            }
            *(this + 4) |= 8u;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer >= buffer_end || *buffer != 42 )
              goto LABEL_2;
            v8 = (buffer + 1);
            input->buffer_ = v8;
parse_event_game_custom_table:
            *(this + 4) |= 0x10u;
            result = google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 11), v8);
            if ( !result )
              return 0;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer != buffer_end )
              goto LABEL_2;
            if ( input->buffer_size_after_limit_ == 0 && input->total_bytes_read_ != input->current_limit_ )
            {
              buffer_end = input->buffer_;
              goto LABEL_2;
            }
            input->last_tag_ = 0;
            input->legitimate_message_end_ = 1;
            return result;
          }
          input->buffer_ = buffer + 1;
        }
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v7 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      goto LABEL_5;
    if ( TagFallback == 0 )
      return 1;
LABEL_8:
    if ( (v7 & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v7, v2, buffer_end) == 0 )
      return 0;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
  }
}


// CDOTAMatchMetadata::SerializeWithCachedSizes  (line 4112, @0x0000000001d6c220, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, empty, item_rewards, teams
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchMetadata::SerializeWithCachedSizes(
        const CDOTAMatchMetadata *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  __int64 v3; // r12
  google::protobuf::io::CodedOutputStream *v5; // rcx
  google::protobuf::io::CodedOutputStream *v6; // rdx
  __int64 v7; // r12
  int v8; // eax
  _QWORD *v9; // rax

  v3 = 0;
  v5 = *(this + 8);
  if ( v5 > 0 )
  {
    do
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        &loc_0 + 1,
        *(*(this + 3) + 8 * v3++),
        output,
        v5);
    while ( *(this + 8) > v3 );
  }
  v6 = *(this + 14);
  v7 = 0;
  if ( v6 > 0 )
  {
    do
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        &loc_2,
        *(*(this + 6) + 8 * v7++),
        output,
        v5);
    while ( *(this + 14) > v7 );
  }
  v8 = *(this + 4);
  if ( (v8 & 4) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFixed64(&loc_2 + 1, *(this + 9), output, v5);
    v8 = *(this + 4);
    if ( (v8 & 8) == 0 )
    {
LABEL_7:
      if ( (v8 & 0x10) == 0 )
        goto LABEL_8;
LABEL_13:
      google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2 + 3, *(this + 11), output, v5);
      v9 = *(this + 1);
      if ( v9 == 0 )
        return;
      goto LABEL_9;
    }
  }
  else if ( (v8 & 8) == 0 )
  {
    goto LABEL_7;
  }
  google::protobuf::internal::WireFormatLite::WriteFixed64(&loc_2 + 2, *(this + 10), output, v5);
  if ( (*(this + 4) & 0x10) != 0 )
    goto LABEL_13;
LABEL_8:
  v9 = *(this + 1);
  if ( v9 == 0 )
    return;
LABEL_9:
  if ( v9[1] != *v9 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v6);
}


// CDOTAMatchMetadata::SerializeWithCachedSizesToArray  (line 4150, @0x0000000001d7a730, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, GetCachedSize, WriteBytesToArray, WriteFixed64NoTagToArray, WriteFixed64ToArray, WriteLittleEndian64ToArray, WriteMessageNoVirtualToArray<CDOTAMatchMetadata_Team>, WriteMessageNoVirtualToArray<CLobbyTimedRewardDetails>, WriteTagToArray, WriteVarint32ToArray, empty, item_rewards, memcpy, teams
// calls: CDOTAMatchMetadata_Team::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), CLobbyTimedRewardDetails::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDOTAMatchMetadataFile::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchMetadata::SerializeWithCachedSizesToArray(
        const CDOTAMatchMetadata *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  __int64 v4; // r13
  int v5; // r12d
  google::protobuf::uint8 *v6; // rsi
  unsigned __int8 *v7; // rdx
  unsigned int *v8; // r14
  google::protobuf::io::CodedOutputStream *v9; // rdi
  __int64 v10; // r13
  int v11; // r12d
  google::protobuf::uint8 *v12; // rsi
  unsigned __int8 *v13; // rdx
  unsigned int *v14; // r14
  google::protobuf::io::CodedOutputStream *v15; // rdi
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int8 *v19; // rdx
  google::protobuf::io::CodedOutputStream *v20; // rdi
  __int64 v21; // rdx

  result = target;
  if ( *(this + 8) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v7 = *(this + 3);
      v8 = *&v7[v4];
      *result = 10;
      v9 = v8[5];
      if ( v9 <= 0x7F )
      {
        result[1] = v9;
        v6 = result + 2;
      }
      else
      {
        v6 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, result + 1, v7);
      }
      ++v5;
      v4 += 8;
      result = CDOTAMatchMetadata_Team::SerializeWithCachedSizesToArray(v8, v6);
    }
    while ( v5 < *(this + 8) );
  }
  if ( *(this + 14) > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v13 = *(this + 6);
      v14 = *&v13[v10];
      *result = 18;
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
      result = CLobbyTimedRewardDetails::SerializeWithCachedSizesToArray(v14, v12);
    }
    while ( v11 < *(this + 14) );
  }
  v16 = *(this + 4);
  if ( (v16 & 4) != 0 )
  {
    v17 = *(this + 9);
    *result = 25;
    result += 9;
    *(result - 1) = v17;
    v16 = *(this + 4);
  }
  if ( (v16 & 8) != 0 )
  {
    v18 = *(this + 10);
    *result = 33;
    result += 9;
    *(result - 1) = v18;
    v16 = *(this + 4);
  }
  v19 = (v16 & 0x10);
  if ( v19 != 0 )
  {
    v20 = *(this + 11);
    *result = 42;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v20, (result + 1), v19);
  }
  v21 = *(this + 1);
  if ( v21 != 0 && *(v21 + 8) != *v21 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v21);
  return result;
}


// CDOTAMatchMetadata::ByteSize  (line 4192, @0x0000000001d7a990, libserver.so)  // inlines: BytesSize, Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDOTAMatchMetadata_Team>, MessageSizeNoVirtual<CLobbyTimedRewardDetails>, VarintSize32, empty, item_rewards, size, teams
// calls: CDOTAMatchMetadata_Team::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), CLobbyTimedRewardDetails::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTAMatchMetadataFile::ByteSize
int __fastcall CDOTAMatchMetadata::ByteSize(const CDOTAMatchMetadata *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v2; // r15d
  int v4; // eax
  int v5; // eax
  int v6; // r15d
  __int64 v7; // r14
  int v8; // r13d
  unsigned int v9; // r12d
  int v10; // eax
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r14
  int v14; // r13d
  unsigned int v15; // r12d
  int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v19; // r12
  google::protobuf::io::CodedOutputStream *v20; // rdi
  int v21; // eax
  int v22; // edx

  v2 = 0;
  v4 = *(this + 4);
  if ( (v4 & 0x3FC) != 0 )
  {
    v2 = (v4 << 29 >> 31) & 9;
    if ( (v4 & 8) != 0 )
      v2 += 9;
    if ( (v4 & 0x10) != 0 )
    {
      v19 = *(this + 11);
      v20 = *(*v19 - 24LL);
      v21 = 1;
      v22 = v20;
      if ( v20 > 0x7F )
      {
        v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, v1);
        v22 = *(*v19 - 24LL);
      }
      v2 += v21 + v22 + 1;
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
      v9 = CDOTAMatchMetadata_Team::ByteSize(*(*(this + 3) + v7));
      v10 = 1;
      if ( v9 > 0x7F )
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      ++v8;
      v7 += 8;
      v6 += v10 + v9;
    }
    while ( v8 < *(this + 8) );
  }
  v11 = *(this + 14);
  v12 = v11 + v6;
  if ( v11 > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = CLobbyTimedRewardDetails::ByteSize(*(*(this + 6) + v13));
      v16 = 1;
      if ( v15 > 0x7F )
        v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v15, v1);
      ++v14;
      v13 += 8;
      v12 += v16 + v15;
    }
    while ( v14 < *(this + 14) );
  }
  v17 = *(this + 1);
  if ( v17 != 0 && v17[1] != *v17 )
    v12 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v12;
  return v12;
}


// CDOTAMatchMetadata::MergeFrom  (line 4241, @0x0000000001d75db0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchMetadata*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchMetadata::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchMetadata
void __fastcall CDOTAMatchMetadata::MergeFrom(
        CDOTAMatchMetadata *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchMetadata *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      4242);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMatchMetadata, 0)) != 0 )
  {
    CDOTAMatchMetadata::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchMetadata::MergeFrom  (line 4253, @0x0000000001d756a0, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>, MergeFrom<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>, New, set_event_game_custom_table, set_has_event_game_custom_table, set_has_lobby_id, set_has_report_until_time, set_lobby_id, set_report_until_time
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team, CDOTAMatchMetadata_Team::MergeFrom, CLobbyTimedRewardDetails::CLobbyTimedRewardDetails, CLobbyTimedRewardDetails::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage() (14 total)
// callers: CDOTAMatchMetadataFile::MergeFrom, CDOTAMatchMetadata::CDOTAMatchMetadata, CDOTAMatchMetadata::MergeFrom, CDOTAMatchMetadata::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CDOTAMatchMetadata::MergeFrom(CDOTAMatchMetadata *const this, const CDOTAMatchMetadata *const from)
{
  __int64 v4; // r14
  int v5; // r13d
  CDOTAMatchMetadata_Team *v6; // r15
  __int64 v7; // rax
  CDOTAMatchMetadata_Team *v8; // rdi
  __int64 v9; // rdx
  const CDOTAMatchMetadata_Team *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // r13d
  CLobbyTimedRewardDetails *v16; // r15
  __int64 v17; // rax
  CLobbyTimedRewardDetails *v18; // rdi
  __int64 v19; // rdx
  const CLobbyTimedRewardDetails *v20; // rsi
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  const std::string *v27; // rsi
  std::string *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v32; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v33; // [rsp+8h] [rbp-68h]
  char v34; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v35; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v35,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      4254);
    v29 = google::protobuf::internal::LogMessage::operator<<(&v35, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v34, v29);
    google::protobuf::internal::LogMessage::~LogMessage(&v35);
  }
  v32 = (this + 24);
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v35,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v30 = google::protobuf::internal::LogMessage::operator<<(&v35, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v34, v30);
    google::protobuf::internal::LogMessage::~LogMessage(&v35);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v32, *(from + 8) + *(this + 8));
  if ( *(from + 8) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v11 = *(this + 8);
      v12 = *(this + 9);
      if ( v11 >= v12 )
      {
        if ( v12 == *(this + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v32, v12 + 1);
        v6 = operator new(0x90u);
        CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team(v6);
        v7 = *(this + 8);
        v8 = v6;
        v9 = *(this + 3);
        ++*(this + 9);
        *(this + 8) = v7 + 1;
        *(v9 + 8 * v7) = v6;
      }
      else
      {
        v13 = *(this + 3);
        *(this + 8) = v11 + 1;
        v8 = *(v13 + 8 * v11);
      }
      ++v5;
      v10 = *(*(from + 3) + v4);
      v4 += 8;
      CDOTAMatchMetadata_Team::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  v33 = (this + 48);
  if ( this + 48 == from + 48 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v35,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v31 = google::protobuf::internal::LogMessage::operator<<(&v35, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v34, v31);
    google::protobuf::internal::LogMessage::~LogMessage(&v35);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v33, *(from + 14) + *(this + 14));
  if ( *(from + 14) > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v21 = *(this + 14);
      v22 = *(this + 15);
      if ( v21 >= v22 )
      {
        if ( v22 == *(this + 16) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v33, v22 + 1);
        v16 = operator new(0x28u);
        CLobbyTimedRewardDetails::CLobbyTimedRewardDetails(v16);
        v17 = *(this + 14);
        v18 = v16;
        v19 = *(this + 6);
        ++*(this + 15);
        *(this + 14) = v17 + 1;
        *(v19 + 8 * v17) = v16;
      }
      else
      {
        v23 = *(this + 6);
        *(this + 14) = v21 + 1;
        v18 = *(v23 + 8 * v21);
      }
      ++v15;
      v20 = *(*(from + 6) + v14);
      v14 += 8;
      CLobbyTimedRewardDetails::MergeFrom(v18, v20);
    }
    while ( v15 < *(from + 14) );
  }
  v24 = *(from + 4);
  if ( (v24 & 0x3FC) != 0 )
  {
    if ( (v24 & 4) != 0 )
    {
      v25 = *(from + 9);
      *(this + 4) |= 4u;
      *(this + 9) = v25;
      v24 = *(from + 4);
    }
    if ( (v24 & 8) != 0 )
    {
      v26 = *(from + 10);
      *(this + 4) |= 8u;
      *(this + 10) = v26;
      v24 = *(from + 4);
    }
    if ( (v24 & 0x10) != 0 )
    {
      v27 = *(from + 11);
      v28 = *(this + 11);
      *(this + 4) |= 0x10u;
      std::string::assign(v28, v27);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchMetadata::CopyFrom  (line 4271, @0x0000000001d6a840, libserver.so)
void __fastcall CDOTAMatchMetadata::CopyFrom(
        CDOTAMatchMetadata *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchMetadata::CopyFrom  (line 4277, @0x0000000001d75e90, libserver.so)
// calls: CDOTAMatchMetadata::MergeFrom
void __fastcall CDOTAMatchMetadata::CopyFrom(CDOTAMatchMetadata *const this, const CDOTAMatchMetadata *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchMetadata::MergeFrom(this, from);
  }
}


// CDOTAMatchMetadata::IsInitialized  (line 4283, @0x0000000001d6a880, libserver.so)
bool __fastcall CDOTAMatchMetadata::IsInitialized(const CDOTAMatchMetadata *const this)
{
  return 1;
}


// CDOTAMatchMetadata::Swap  (line 4288, @0x0000000001d70800, libserver.so)  // inlines: Swap, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTAMatchMetadata::Swap(CDOTAMatchMetadata *const this, CDOTAMatchMetadata *other)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( other != this )
  {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(this + 1, other + 1);
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(this + 2, other + 2);
    v4 = *(this + 9);
    *(this + 9) = *(other + 9);
    *(other + 9) = v4;
    v5 = *(this + 10);
    *(this + 10) = *(other + 10);
    *(other + 10) = v5;
    v6 = *(this + 11);
    *(this + 11) = *(other + 11);
    *(other + 11) = v6;
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


// CDOTAMatchMetadata::GetMetadata  (line 4301, @0x0000000001d6d640, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchMetadata_descriptor_, `anonymous namespace'::CDOTAMatchMetadata_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchMetadata::GetMetadata(const CDOTAMatchMetadata *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchMetadata_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchMetadata_reflection_;
  return result;
}


// CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player  (line 4318, @0x0000000001d70980, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchPrivateMetadata_Team_Player::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTAMatchPrivateMetadata_Team_Player::New, CDOTAMatchPrivateMetadata_Team::MergePartialFromCodedStream, CDOTAMatchPrivateMetadata_Team::MergeFrom, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAGCServerSystem::WriteMatchPrivateMetadataTeam
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player(
        CDOTAMatchPrivateMetadata_Team_Player *const this)
{
  *this = off_3F9C330;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMatchPrivateMetadata_Team_Player::SharedCtor(this);
}


// CDOTAMatchPrivateMetadata_Team_Player::InitAsDefaultInstance  (line 4324, @0x0000000001d708a0, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::InitAsDefaultInstance(
        CDOTAMatchPrivateMetadata_Team_Player *const this)
{
  ;
}


// CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player  (line 4327, @0x0000000001d70c70, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchPrivateMetadata_Team_Player::SharedCtor, CDOTAMatchPrivateMetadata_Team_Player::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player(
        CDOTAMatchPrivateMetadata_Team_Player *const this,
        const CDOTAMatchPrivateMetadata_Team_Player *const from)
{
  *this = off_3F9C330;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMatchPrivateMetadata_Team_Player::SharedCtor(this);
  CDOTAMatchPrivateMetadata_Team_Player::MergeFrom(this, from);
}


// CDOTAMatchPrivateMetadata_Team_Player::SharedCtor  (line 4334, @0x0000000001d708b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::SharedCtor(CDOTAMatchPrivateMetadata_Team_Player *const this)
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


// CDOTAMatchPrivateMetadata_Team_Player::~CDOTAMatchPrivateMetadata_Team_Player  (line 4343, @0x0000000001d70a90, libserver.so)
// calls: CDOTAMatchPrivateMetadata_Team_Player::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMatchPrivateMetadata_Team_Player::~CDOTAMatchPrivateMetadata_Team_Player
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::~CDOTAMatchPrivateMetadata_Team_Player(
        CDOTAMatchPrivateMetadata_Team_Player *const this)
{
  *this = off_3F9C330;
  CDOTAMatchPrivateMetadata_Team_Player::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchPrivateMetadata_Team_Player::~CDOTAMatchPrivateMetadata_Team_Player  (line 4343, @0x0000000001d70ad0, libserver.so)
// calls: CDOTAMatchPrivateMetadata_Team_Player::~CDOTAMatchPrivateMetadata_Team_Player, operator delete
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::~CDOTAMatchPrivateMetadata_Team_Player(
        CDOTAMatchPrivateMetadata_Team_Player *const this)
{
  CDOTAMatchPrivateMetadata_Team_Player::~CDOTAMatchPrivateMetadata_Team_Player(this);
  operator delete(this);
}


// CDOTAMatchPrivateMetadata_Team_Player::SharedDtor  (line 4348, @0x0000000001d70a20, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTAMatchPrivateMetadata_Team_Player::~CDOTAMatchPrivateMetadata_Team_Player
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::SharedDtor(CDOTAMatchPrivateMetadata_Team_Player *const this)
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


// CDOTAMatchPrivateMetadata_Team_Player::SetCachedSize  (line 4354, @0x0000000001d6a890, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::SetCachedSize(
        const CDOTAMatchPrivateMetadata_Team_Player *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTAMatchPrivateMetadata_Team_Player::descriptor  (line 4359, @0x0000000001d70af0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchPrivateMetadata_Team_Player::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_descriptor_;
}


// CDOTAMatchPrivateMetadata_Team_Player::default_instance  (line 4364, @0x0000000001d72e70, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchPrivateMetadata_Team_Player::default_instance_
const CDOTAMatchPrivateMetadata_Team_Player *__cdecl CDOTAMatchPrivateMetadata_Team_Player::default_instance()
{
  const CDOTAMatchPrivateMetadata_Team_Player *result; // rax

  result = CDOTAMatchPrivateMetadata_Team_Player::default_instance_;
  if ( CDOTAMatchPrivateMetadata_Team_Player::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchPrivateMetadata_Team_Player::default_instance_;
  }
  return result;
}


// CDOTAMatchPrivateMetadata_Team_Player::New  (line 4371, @0x0000000001d709e0, libserver.so)
// calls: operator new, CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player, operator delete, _Unwind_Resume
CDOTAMatchPrivateMetadata_Team_Player *__fastcall CDOTAMatchPrivateMetadata_Team_Player::New(
        const CDOTAMatchPrivateMetadata_Team_Player *const this)
{
  CDOTAMatchPrivateMetadata_Team_Player *v1; // rbx

  v1 = operator new(0x28u);
  CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player(v1);
  return v1;
}


// CDOTAMatchPrivateMetadata_Team_Player::Clear  (line 4375, @0x0000000001d6ac20, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::Clear(CDOTAMatchPrivateMetadata_Team_Player *const this)
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


// CDOTAMatchPrivateMetadata_Team_Player::MergePartialFromCodedStream  (line 4400, @0x0000000001d6e640, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, mutable_position_stream, set_has_account_id, set_has_player_slot, set_has_position_stream
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDOTAMatchPrivateMetadata_Team::MergePartialFromCodedStream
bool __fastcall CDOTAMatchPrivateMetadata_Team_Player::MergePartialFromCodedStream(
        CDOTAMatchPrivateMetadata_Team_Player *const this,
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
      goto parse_player_slot;
    }
    if ( v11 == 3 )
    {
      if ( v10 != 26 )
        break;
      goto parse_position_stream;
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
parse_player_slot:
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
parse_position_stream:
        *(this + 4) |= 4u;
        result = google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 4), v11);
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


// CDOTAMatchPrivateMetadata_Team_Player::SerializeWithCachedSizes  (line 4474, @0x0000000001d6b8b0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::SerializeWithCachedSizes(
        const CDOTAMatchPrivateMetadata_Team_Player *const this,
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
      google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2 + 1, *(this + 4), output, v3);
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


// CDOTAMatchPrivateMetadata_Team_Player::SerializeWithCachedSizesToArray  (line 4500, @0x0000000001d6d1a0, libserver.so)  // inlines: WriteBytesToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CDOTAMatchPrivateMetadata_Team::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchPrivateMetadata_Team_Player::SerializeWithCachedSizesToArray(
        const CDOTAMatchPrivateMetadata_Team_Player *const this,
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


// CDOTAMatchPrivateMetadata_Team_Player::ByteSize  (line 4528, @0x0000000001d6cd40, libserver.so)  // inlines: BytesSize, UInt32Size, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAMatchPrivateMetadata_Team::ByteSize
int __fastcall CDOTAMatchPrivateMetadata_Team_Player::ByteSize(const CDOTAMatchPrivateMetadata_Team_Player *const this)
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


// CDOTAMatchPrivateMetadata_Team_Player::MergeFrom  (line 4565, @0x0000000001d70ce0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchPrivateMetadata_Team_Player*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchPrivateMetadata_Team_Player::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchPrivateMetadata_Team_Player
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::MergeFrom(
        CDOTAMatchPrivateMetadata_Team_Player *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchPrivateMetadata_Team_Player *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      4566);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAMatchPrivateMetadata_Team_Player,
               0)) != 0 )
  {
    CDOTAMatchPrivateMetadata_Team_Player::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchPrivateMetadata_Team_Player::MergeFrom  (line 4577, @0x0000000001d70b80, libserver.so)  // inlines: set_account_id, set_has_account_id, set_has_player_slot, set_has_position_stream, set_player_slot, set_position_stream
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player, CDOTAMatchPrivateMetadata_Team_Player::MergeFrom, CDOTAMatchPrivateMetadata_Team_Player::CopyFrom, CDOTAMatchPrivateMetadata_Team::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::MergeFrom(
        CDOTAMatchPrivateMetadata_Team_Player *const this,
        const CDOTAMatchPrivateMetadata_Team_Player *const from)
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
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      4578);
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


// CDOTAMatchPrivateMetadata_Team_Player::CopyFrom  (line 4593, @0x0000000001d6a8a0, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::CopyFrom(
        CDOTAMatchPrivateMetadata_Team_Player *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchPrivateMetadata_Team_Player::CopyFrom  (line 4599, @0x0000000001d70dc0, libserver.so)
// calls: CDOTAMatchPrivateMetadata_Team_Player::MergeFrom
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::CopyFrom(
        CDOTAMatchPrivateMetadata_Team_Player *const this,
        const CDOTAMatchPrivateMetadata_Team_Player *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchPrivateMetadata_Team_Player::MergeFrom(this, from);
  }
}


// CDOTAMatchPrivateMetadata_Team_Player::IsInitialized  (line 4605, @0x0000000001d6a8e0, libserver.so)
bool __fastcall CDOTAMatchPrivateMetadata_Team_Player::IsInitialized(
        const CDOTAMatchPrivateMetadata_Team_Player *const this)
{
  return 1;
}


// CDOTAMatchPrivateMetadata_Team_Player::Swap  (line 4610, @0x0000000001d70e00, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMatchPrivateMetadata_Team_Player::Swap(
        CDOTAMatchPrivateMetadata_Team_Player *const this,
        CDOTAMatchPrivateMetadata_Team_Player *other)
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


// CDOTAMatchPrivateMetadata_Team_Player::GetMetadata  (line 4621, @0x0000000001d6d6e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_descriptor_, `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchPrivateMetadata_Team_Player::GetMetadata(
        const CDOTAMatchPrivateMetadata_Team_Player *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Player_reflection_;
  return result;
}


// CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building  (line 4639, @0x0000000001d70f40, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchPrivateMetadata_Team_Building::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTAMatchPrivateMetadata_Team_Building::New, CDOTAMatchPrivateMetadata_Team::MergePartialFromCodedStream, CDOTAMatchPrivateMetadata_Team::MergeFrom, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAHeatmapManager::SerializeBuildingData
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building(
        CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  *this = off_3F9C3F0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMatchPrivateMetadata_Team_Building::SharedCtor(this);
}


// CDOTAMatchPrivateMetadata_Team_Building::InitAsDefaultInstance  (line 4645, @0x0000000001d70e60, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::InitAsDefaultInstance(
        CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  ;
}


// CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building  (line 4648, @0x0000000001d716c0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchPrivateMetadata_Team_Building::SharedCtor, CDOTAMatchPrivateMetadata_Team_Building::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building(
        CDOTAMatchPrivateMetadata_Team_Building *const this,
        const CDOTAMatchPrivateMetadata_Team_Building *const from)
{
  *this = off_3F9C3F0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAMatchPrivateMetadata_Team_Building::SharedCtor(this);
  CDOTAMatchPrivateMetadata_Team_Building::MergeFrom(this, from);
}


// CDOTAMatchPrivateMetadata_Team_Building::SharedCtor  (line 4655, @0x0000000001d70e70, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::SharedCtor(
        CDOTAMatchPrivateMetadata_Team_Building *const this)
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
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 3) = v4;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchPrivateMetadata_Team_Building::~CDOTAMatchPrivateMetadata_Team_Building  (line 4665, @0x0000000001d714c0, libserver.so)
// calls: CDOTAMatchPrivateMetadata_Team_Building::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMatchPrivateMetadata_Team_Building::~CDOTAMatchPrivateMetadata_Team_Building
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::~CDOTAMatchPrivateMetadata_Team_Building(
        CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  *this = off_3F9C3F0;
  CDOTAMatchPrivateMetadata_Team_Building::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchPrivateMetadata_Team_Building::~CDOTAMatchPrivateMetadata_Team_Building  (line 4665, @0x0000000001d71500, libserver.so)
// calls: CDOTAMatchPrivateMetadata_Team_Building::~CDOTAMatchPrivateMetadata_Team_Building, operator delete
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::~CDOTAMatchPrivateMetadata_Team_Building(
        CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  CDOTAMatchPrivateMetadata_Team_Building::~CDOTAMatchPrivateMetadata_Team_Building(this);
  operator delete(this);
}


// CDOTAMatchPrivateMetadata_Team_Building::SharedDtor  (line 4670, @0x0000000001d71450, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTAMatchPrivateMetadata_Team_Building::~CDOTAMatchPrivateMetadata_Team_Building
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::SharedDtor(
        CDOTAMatchPrivateMetadata_Team_Building *const this)
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


// CDOTAMatchPrivateMetadata_Team_Building::SetCachedSize  (line 4676, @0x0000000001d6a8f0, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::SetCachedSize(
        const CDOTAMatchPrivateMetadata_Team_Building *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTAMatchPrivateMetadata_Team_Building::descriptor  (line 4681, @0x0000000001d71520, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchPrivateMetadata_Team_Building::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_descriptor_;
}


// CDOTAMatchPrivateMetadata_Team_Building::default_instance  (line 4686, @0x0000000001d72ea0, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchPrivateMetadata_Team_Building::default_instance_
const CDOTAMatchPrivateMetadata_Team_Building *__cdecl CDOTAMatchPrivateMetadata_Team_Building::default_instance()
{
  const CDOTAMatchPrivateMetadata_Team_Building *result; // rax

  result = CDOTAMatchPrivateMetadata_Team_Building::default_instance_;
  if ( CDOTAMatchPrivateMetadata_Team_Building::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchPrivateMetadata_Team_Building::default_instance_;
  }
  return result;
}


// CDOTAMatchPrivateMetadata_Team_Building::New  (line 4693, @0x0000000001d70fa0, libserver.so)
// calls: operator new, CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building, operator delete, _Unwind_Resume
CDOTAMatchPrivateMetadata_Team_Building *__fastcall CDOTAMatchPrivateMetadata_Team_Building::New(
        const CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  CDOTAMatchPrivateMetadata_Team_Building *v1; // rbx

  v1 = operator new(0x30u);
  CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building(v1);
  return v1;
}


// CDOTAMatchPrivateMetadata_Team_Building::Clear  (line 4697, @0x0000000001d6ac80, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::Clear(CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 0xF) != 0 )
  {
    v2 = (*(this + 16) & 1) == 0;
    *(this + 4) = 0;
    *(this + 10) = 0;
    if ( !v2 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMatchPrivateMetadata_Team_Building::MergePartialFromCodedStream  (line 4722, @0x0000000001d6de10, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, memcpy, mutable_unit_name, set_has_death_time, set_has_position_quant_x, set_has_position_quant_y, set_has_unit_name
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// callers: CDOTAMatchPrivateMetadata_Team::MergePartialFromCodedStream
bool __fastcall CDOTAMatchPrivateMetadata_Team_Building::MergePartialFromCodedStream(
        CDOTAMatchPrivateMetadata_Team_Building *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v3; // rcx
  unsigned int *v4; // r14
  unsigned int *v5; // r13
  unsigned int v7; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v10; // al
  google::protobuf::io::CodedInputStream *v11; // rsi
  std::string *v12; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v15; // rdx
  int v16; // eax
  const google::protobuf::uint8 *v17; // rdx
  int v18; // eax
  const google::protobuf::uint8 *v19; // rdx
  int fields; // eax
  google::protobuf::UnknownFieldSet v21; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = &v21;
  v4 = (this + 32);
  v5 = (this + 36);
  v7 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( buffer >= buffer_end )
        goto LABEL_14;
LABEL_3:
      v10 = *buffer;
      if ( *buffer <= 0 )
      {
LABEL_14:
        while ( 1 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
          v11 = TagFallback;
          input->last_tag_ = TagFallback;
          if ( TagFallback - 1 <= 0x7E )
            break;
          if ( TagFallback == 0 )
            return 1;
LABEL_11:
          if ( (v11 & 7) == 4 )
            return 1;
          if ( google::protobuf::internal::WireFormat::SkipField(input, v11, v7, v3) == 0 )
            return 0;
          buffer = input->buffer_;
          if ( buffer < input->buffer_end_ )
            goto LABEL_3;
        }
      }
      else
      {
        v11 = v10;
        input->last_tag_ = v10;
        input->buffer_ = buffer + 1;
      }
      v12 = (v11 >> 3);
      if ( v12 == 2 )
      {
        if ( v11 != 16 )
          goto handle_unusual;
        v15 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_position_quant_x;
      }
      if ( v11 >> 3 <= 2 )
        break;
      if ( v12 == 3 )
      {
        if ( v11 != 24 )
          goto handle_unusual;
        v17 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_position_quant_y;
      }
      if ( v12 != 4 || v11 != 37 )
        goto handle_unusual;
      v19 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_death_time:
      if ( buffer_end - v19 <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, &v21);
        if ( !result )
          return result;
        fields = v21.fields_;
      }
      else
      {
        fields = *v19;
        input->buffer_ = v19 + 4;
      }
      *(this + 4) |= 8u;
      *(this + 10) = fields;
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
    if ( v12 != 1 || v11 != 10 )
      break;
    *(this + 4) |= 1u;
    if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v12) == 0 )
      return 0;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v15 = buffer + 1;
      input->buffer_ = v15;
parse_position_quant_x:
      if ( v15 >= buffer_end || ((v16 = *v15) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *(this + 8) = v16;
        ++input->buffer_;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v17 = buffer + 1;
        input->buffer_ = v17;
parse_position_quant_y:
        if ( buffer_end <= v17 || ((v18 = *v17) & 0x80u) != 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5) == 0 )
            return 0;
        }
        else
        {
          *(this + 9) = v18;
          ++input->buffer_;
        }
        *(this + 4) |= 4u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end && *buffer == 37 )
        {
          v19 = buffer + 1;
          input->buffer_ = v19;
          goto parse_death_time;
        }
      }
    }
  }
handle_unusual:
  if ( v11 != 0 )
    goto LABEL_11;
  return 1;
}


// CDOTAMatchPrivateMetadata_Team_Building::SerializeWithCachedSizes  (line 4815, @0x0000000001d6c330, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::SerializeWithCachedSizes(
        const CDOTAMatchPrivateMetadata_Team_Building *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(this + 8), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
LABEL_11:
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 2, output, *(this + 10), v2);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_6;
  }
LABEL_10:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 9), output, v3);
  if ( (*(this + 4) & 8) != 0 )
    goto LABEL_11;
LABEL_5:
  v7 = *(this + 1);
  if ( v7 == 0 )
    return;
LABEL_6:
  if ( v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAMatchPrivateMetadata_Team_Building::SerializeWithCachedSizesToArray  (line 4850, @0x0000000001d6d250, libserver.so)  // inlines: WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CDOTAMatchPrivateMetadata_Team::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchPrivateMetadata_Team_Building::SerializeWithCachedSizesToArray(
        const CDOTAMatchPrivateMetadata_Team_Building *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  __int64 v10; // rax

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
    v7 = *(this + 8);
    *target = 16;
    if ( v7 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, target + 1, v2);
    }
    else
    {
      target[1] = v7;
      target += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 9);
    *target = 24;
    if ( v8 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v8, target + 1, v2);
    }
    else
    {
      target[1] = v8;
      target += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v9 = *(this + 10);
    target += 5;
    *(target - 5) = 37;
    *(target - 1) = v9;
  }
  v10 = *(this + 1);
  if ( v10 == 0 || *(v10 + 8) == *v10 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v10);
}


// CDOTAMatchPrivateMetadata_Team_Building::ByteSize  (line 4887, @0x0000000001d6b560, libserver.so)  // inlines: StringSize, UInt32Size, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTAMatchPrivateMetadata_Team::ByteSize
int __fastcall CDOTAMatchPrivateMetadata_Team_Building::ByteSize(
        const CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // edx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  __int64 v6; // rax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  _QWORD *v9; // rbx
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_9;
  if ( (v4 & 1) != 0 )
  {
    v9 = *(this + 3);
    v10 = *(*v9 - 24LL);
    v11 = 1;
    v12 = v10;
    if ( v10 > 0x7F )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
      v12 = *(*v9 - 24LL);
      v4 = *(this + 4);
    }
    v3 = v11 + v12 + 1;
    if ( (v4 & 2) == 0 )
      goto LABEL_6;
  }
  else if ( (v4 & 2) == 0 )
  {
LABEL_6:
    if ( (v4 & 4) != 0 )
    {
      v8 = *(this + 9);
      if ( v8 > 0x7F )
      {
        v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
        v4 = *(this + 4);
        v3 += v14 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v4 & 8) != 0 )
      v3 += 5;
LABEL_9:
    v6 = *(this + 1);
    if ( v6 != 0 && *(v6 + 8) != *v6 )
      v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v6);
    *(this + 5) = v3;
    return v3;
  }
  v5 = *(this + 8);
  if ( v5 > 0x7F )
  {
    v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
    v4 = *(this + 4);
    v3 += v13 + 1;
  }
  else
  {
    v3 += 2;
  }
  goto LABEL_6;
}


// CDOTAMatchPrivateMetadata_Team_Building::MergeFrom  (line 4929, @0x0000000001d71730, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchPrivateMetadata_Team_Building*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchPrivateMetadata_Team_Building::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchPrivateMetadata_Team_Building
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::MergeFrom(
        CDOTAMatchPrivateMetadata_Team_Building *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchPrivateMetadata_Team_Building *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      4930);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAMatchPrivateMetadata_Team_Building,
               0)) != 0 )
  {
    CDOTAMatchPrivateMetadata_Team_Building::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchPrivateMetadata_Team_Building::MergeFrom  (line 4941, @0x0000000001d715b0, libserver.so)  // inlines: set_death_time, set_has_death_time, set_has_position_quant_x, set_has_position_quant_y, set_has_unit_name, set_position_quant_x, set_position_quant_y, set_unit_name
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building, CDOTAMatchPrivateMetadata_Team_Building::MergeFrom, CDOTAMatchPrivateMetadata_Team_Building::CopyFrom, CDOTAMatchPrivateMetadata_Team::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::MergeFrom(
        CDOTAMatchPrivateMetadata_Team_Building *const this,
        const CDOTAMatchPrivateMetadata_Team_Building *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // xmm0_4
  const std::string *v8; // rsi
  std::string *v9; // rdi
  __int64 v10; // rax
  char v11; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v12; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v12,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      4942);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v8 = *(from + 3);
      v9 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v9, v8);
      v4 = *(from + 4);
      if ( (v4 & 2) == 0 )
        goto LABEL_7;
    }
    else if ( (v4 & 2) == 0 )
    {
LABEL_7:
      if ( (v4 & 4) != 0 )
      {
        v6 = *(from + 9);
        *(this + 4) |= 4u;
        *(this + 9) = v6;
        v4 = *(from + 4);
      }
      if ( (v4 & 8) != 0 )
      {
        v7 = *(from + 10);
        *(this + 4) |= 8u;
        *(this + 10) = v7;
      }
      goto LABEL_11;
    }
    v5 = *(from + 8);
    *(this + 4) |= 2u;
    *(this + 8) = v5;
    v4 = *(from + 4);
    goto LABEL_7;
  }
LABEL_11:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchPrivateMetadata_Team_Building::CopyFrom  (line 4960, @0x0000000001d6a900, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::CopyFrom(
        CDOTAMatchPrivateMetadata_Team_Building *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchPrivateMetadata_Team_Building::CopyFrom  (line 4966, @0x0000000001d71810, libserver.so)
// calls: CDOTAMatchPrivateMetadata_Team_Building::MergeFrom
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::CopyFrom(
        CDOTAMatchPrivateMetadata_Team_Building *const this,
        const CDOTAMatchPrivateMetadata_Team_Building *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchPrivateMetadata_Team_Building::MergeFrom(this, from);
  }
}


// CDOTAMatchPrivateMetadata_Team_Building::IsInitialized  (line 4972, @0x0000000001d6a940, libserver.so)
bool __fastcall CDOTAMatchPrivateMetadata_Team_Building::IsInitialized(
        const CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  return 1;
}


// CDOTAMatchPrivateMetadata_Team_Building::Swap  (line 4977, @0x0000000001d71850, libserver.so)  // inlines: Swap, swap<float>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAMatchPrivateMetadata_Team_Building::Swap(
        CDOTAMatchPrivateMetadata_Team_Building *const this,
        CDOTAMatchPrivateMetadata_Team_Building *other)
{
  __int64 v2; // rax
  int v3; // xmm1_4
  __int64 v4; // rax

  if ( other != this )
  {
    v2 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v2;
    LODWORD(v2) = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v2;
    LODWORD(v2) = *(this + 9);
    *(this + 9) = *(other + 9);
    *(other + 9) = v2;
    v3 = *(this + 10);
    *(this + 10) = *(other + 10);
    *(other + 10) = v3;
    LODWORD(v2) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v2;
    v4 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v4;
    LODWORD(v4) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
  }
}


// CDOTAMatchPrivateMetadata_Team_Building::GetMetadata  (line 4989, @0x0000000001d6d780, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_descriptor_, `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchPrivateMetadata_Team_Building::GetMetadata(
        const CDOTAMatchPrivateMetadata_Team_Building *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_Building_reflection_;
  return result;
}


// CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team  (line 5006, @0x0000000001d718c0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMatchPrivateMetadata_Team::New, CDOTAMatchPrivateMetadata::MergePartialFromCodedStream, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAMatchPrivateMetadata::MergeFrom, CDOTAGCServerSystem::WriteMatchPrivateMetadata
void __fastcall CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team(
        CDOTAMatchPrivateMetadata_Team *const this)
{
  *this = off_3F9C4B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 5) = 0;
  *(this + 18) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchPrivateMetadata_Team::InitAsDefaultInstance  (line 5012, @0x0000000001d71be0, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team::InitAsDefaultInstance(CDOTAMatchPrivateMetadata_Team *const this)
{
  ;
}


// CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team  (line 5015, @0x0000000001d71fc0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchPrivateMetadata_Team::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team(
        CDOTAMatchPrivateMetadata_Team *const this,
        const CDOTAMatchPrivateMetadata_Team *const from)
{
  *this = off_3F9C4B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 6) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 5) = 0;
  *(this + 18) = 0;
  *(this + 4) = 0;
  CDOTAMatchPrivateMetadata_Team::MergeFrom(this, from);
}


// CDOTAMatchPrivateMetadata_Team::SharedCtor  (line 5022, @0x0000000001d71bf0, libserver.so)  // inlines: memset
void __fastcall CDOTAMatchPrivateMetadata_Team::SharedCtor(CDOTAMatchPrivateMetadata_Team *const this)
{
  *(this + 5) = 0;
  *(this + 18) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team  (line 5028, @0x0000000001d6cb70, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team
void __fastcall CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team(
        CDOTAMatchPrivateMetadata_Team *const this)
{
  *this = off_3F9C4B0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>(
    this + 2,
    (this + 60));
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team  (line 5028, @0x0000000001d6cbc0, libserver.so)
// calls: CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team, operator delete
void __fastcall CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team(
        CDOTAMatchPrivateMetadata_Team *const this)
{
  CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team(this);
  operator delete(this);
}


// CDOTAMatchPrivateMetadata_Team::SharedDtor  (line 5033, @0x0000000001d71c10, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team::SharedDtor(CDOTAMatchPrivateMetadata_Team *const this)
{
  ;
}


// CDOTAMatchPrivateMetadata_Team::SetCachedSize  (line 5038, @0x0000000001d6a950, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team::SetCachedSize(
        const CDOTAMatchPrivateMetadata_Team *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTAMatchPrivateMetadata_Team::descriptor  (line 5043, @0x0000000001d71c20, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchPrivateMetadata_Team::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_;
}


// CDOTAMatchPrivateMetadata_Team::default_instance  (line 5048, @0x0000000001d72ed0, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchPrivateMetadata_Team::default_instance_
const CDOTAMatchPrivateMetadata_Team *__cdecl CDOTAMatchPrivateMetadata_Team::default_instance()
{
  const CDOTAMatchPrivateMetadata_Team *result; // rax

  result = CDOTAMatchPrivateMetadata_Team::default_instance_;
  if ( CDOTAMatchPrivateMetadata_Team::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchPrivateMetadata_Team::default_instance_;
  }
  return result;
}


// CDOTAMatchPrivateMetadata_Team::New  (line 5055, @0x0000000001d71950, libserver.so)
// calls: operator new, CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team, operator delete, _Unwind_Resume
CDOTAMatchPrivateMetadata_Team *__fastcall CDOTAMatchPrivateMetadata_Team::New(
        const CDOTAMatchPrivateMetadata_Team *const this)
{
  CDOTAMatchPrivateMetadata_Team *v1; // rbx

  v1 = operator new(0x50u);
  CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team(v1);
  return v1;
}


// CDOTAMatchPrivateMetadata_Team::Clear  (line 5059, @0x0000000001d6b1c0, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAMatchPrivateMetadata_Team::Clear(CDOTAMatchPrivateMetadata_Team *const this)
{
  __int64 v1; // r13
  int v2; // r12d
  __int64 v4; // rdi
  int v5; // r11d
  __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // rdi
  bool v9; // zf

  v1 = 0;
  v2 = 0;
  *(this + 18) = 0;
  while ( v2 < *(this + 8) )
  {
    ++v2;
    v4 = *(*(this + 3) + v1);
    v1 += 8;
    (*(*v4 + 32LL))(v4);
  }
  v5 = *(this + 14);
  v6 = 0;
  v7 = 0;
  *(this + 8) = 0;
  if ( v5 > 0 )
  {
    do
    {
      ++v7;
      v8 = *(*(this + 6) + v6);
      v6 += 8;
      (*(*v8 + 32LL))(v8);
    }
    while ( v7 < *(this + 14) );
  }
  v9 = *(this + 1) == 0;
  *(this + 14) = 0;
  *(this + 4) = 0;
  if ( !v9 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMatchPrivateMetadata_Team::MergePartialFromCodedStream  (line 5067, @0x0000000001d70fe0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CDOTAMatchPrivateMetadata_Team_Building>, ReadMessageNoVirtual<CDOTAMatchPrivateMetadata_Team_Player>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, add_buildings, add_players, set_has_dota_team
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), operator new, CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building, google::protobuf::io::CodedInputStream::PushLimit(int), CDOTAMatchPrivateMetadata_Team_Building::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player, CDOTAMatchPrivateMetadata_Team_Player::MergePartialFromCodedStream, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete (13 total)
// callers: CDOTAMatchPrivateMetadata::MergePartialFromCodedStream
bool __fastcall CDOTAMatchPrivateMetadata_Team::MergePartialFromCodedStream(
        CDOTAMatchPrivateMetadata_Team *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  unsigned int v8; // eax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // esi
  CDOTAMatchPrivateMetadata_Team_Building *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  const google::protobuf::uint8 *v18; // rax
  int v19; // eax
  bool v20; // cc
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // esi
  CDOTAMatchPrivateMetadata_Team_Player *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  const google::protobuf::uint8 *v28; // rax
  int v29; // eax
  int recursion_depth; // eax
  __int64 v31; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase *v32; // [rsp+8h] [rbp-58h]
  google::protobuf::internal::RepeatedPtrFieldBase *v33; // [rsp+10h] [rbp-50h]
  bool legitimate_message_end; // [rsp+18h] [rbp-48h]
  int v35; // [rsp+1Ch] [rbp-44h]
  int v36; // [rsp+1Ch] [rbp-44h]
  unsigned int v37[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v33 = (this + 48);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  v32 = (this + 24);
  while ( 1 )
  {
    do
    {
LABEL_2:
      if ( buffer >= buffer_end )
        goto LABEL_12;
LABEL_3:
      v7 = *buffer;
      if ( v7 <= 0 )
      {
LABEL_12:
        while ( 1 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
          v7 = TagFallback;
          input->last_tag_ = TagFallback;
          if ( TagFallback - 1 <= 0x7E )
            break;
          if ( TagFallback == 0 )
            return 1;
LABEL_9:
          if ( (v7 & 7) == 4 )
            return 1;
          if ( google::protobuf::internal::WireFormat::SkipField(input, v7, v2, buffer_end) == 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer < buffer_end )
            goto LABEL_3;
        }
      }
      else
      {
        input->last_tag_ = v7;
        input->buffer_ = buffer + 1;
      }
      v8 = v7 >> 3;
      if ( v7 >> 3 == 2 )
      {
        if ( v7 != 18 )
          goto handle_unusual;
        v23 = *(this + 8);
        v24 = *(this + 9);
        if ( v23 < v24 )
          goto LABEL_57;
        goto LABEL_43;
      }
      if ( v8 == 3 )
      {
        if ( v7 != 26 )
          goto handle_unusual;
        v13 = *(this + 14);
        v14 = *(this + 15);
        if ( v13 < v14 )
          goto LABEL_40;
        goto LABEL_26;
      }
      if ( v8 != 1 || v7 != 8 )
      {
handle_unusual:
        if ( v7 == 0 )
          return 1;
        goto LABEL_9;
      }
      v11 = input->buffer_;
      if ( v11 >= input->buffer_end_ || ((v12 = *v11) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 18) == 0 )
          return 0;
      }
      else
      {
        *(this + 18) = v12;
        ++input->buffer_;
      }
      *(this + 4) |= 1u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    while ( buffer >= buffer_end || *buffer != 18 );
    do
    {
      input->buffer_ = buffer + 1;
      v23 = *(this + 8);
      v24 = *(this + 9);
      if ( v23 < v24 )
      {
LABEL_57:
        v31 = *(this + 3);
        *(this + 8) = v23 + 1;
        v25 = *(v31 + 8 * v23);
        goto LABEL_46;
      }
LABEL_43:
      if ( v24 == *(this + 10) )
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v32, v24 + 1);
      v25 = operator new(0x28u);
      CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player(v25);
      v26 = *(this + 8);
      v27 = *(this + 3);
      ++*(this + 9);
      *(this + 8) = v26 + 1;
      *(v27 + 8 * v26) = v25;
LABEL_46:
      v28 = input->buffer_;
      if ( v28 >= input->buffer_end_ || *v28 < 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v37) == 0 )
          return 0;
      }
      else
      {
        v37[0] = *v28;
        input->buffer_ = v28 + 1;
      }
      v29 = input->recursion_depth_ + 1;
      v20 = input->recursion_limit_ < v29;
      input->recursion_depth_ = v29;
      if ( v20 )
        return 0;
      v36 = google::protobuf::io::CodedInputStream::PushLimit(input, v37[0]);
      if ( !CDOTAMatchPrivateMetadata_Team_Player::MergePartialFromCodedStream(v25, input)
        || !input->legitimate_message_end_ )
      {
        return 0;
      }
      google::protobuf::io::CodedInputStream::PopLimit(input, v36);
      recursion_depth = input->recursion_depth_;
      if ( recursion_depth > 0 )
        input->recursion_depth_ = recursion_depth - 1;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer >= buffer_end )
        goto LABEL_2;
    }
    while ( *buffer == 18 );
    if ( *buffer == 26 )
    {
      do
      {
        input->buffer_ = buffer + 1;
        v13 = *(this + 14);
        v14 = *(this + 15);
        if ( v13 < v14 )
        {
LABEL_40:
          v22 = *(this + 6);
          *(this + 14) = v13 + 1;
          v15 = *(v22 + 8 * v13);
          goto LABEL_29;
        }
LABEL_26:
        if ( v14 == *(this + 16) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v33, v14 + 1);
        v15 = operator new(0x30u);
        CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building(v15);
        v16 = *(this + 14);
        v17 = *(this + 6);
        ++*(this + 15);
        *(this + 14) = v16 + 1;
        *(v17 + 8 * v16) = v15;
LABEL_29:
        v18 = input->buffer_;
        if ( v18 >= input->buffer_end_ || *v18 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v37) == 0 )
            return 0;
        }
        else
        {
          v37[0] = *v18;
          input->buffer_ = v18 + 1;
        }
        v19 = input->recursion_depth_ + 1;
        v20 = input->recursion_limit_ < v19;
        input->recursion_depth_ = v19;
        if ( v20 )
          return 0;
        v35 = google::protobuf::io::CodedInputStream::PushLimit(input, v37[0]);
        if ( !CDOTAMatchPrivateMetadata_Team_Building::MergePartialFromCodedStream(v15, input)
          || !input->legitimate_message_end_ )
        {
          return 0;
        }
        legitimate_message_end = input->legitimate_message_end_;
        google::protobuf::io::CodedInputStream::PopLimit(input, v35);
        v21 = input->recursion_depth_;
        result = legitimate_message_end;
        if ( v21 > 0 )
          input->recursion_depth_ = v21 - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
      }
      while ( buffer < buffer_end && *buffer == 26 );
      if ( buffer == buffer_end )
        break;
    }
  }
  if ( input->buffer_size_after_limit_ == 0 && input->total_bytes_read_ != input->current_limit_ )
  {
    buffer_end = input->buffer_;
    goto LABEL_2;
  }
  input->last_tag_ = 0;
  input->legitimate_message_end_ = 1;
  return result;
}


// CDOTAMatchPrivateMetadata_Team::SerializeWithCachedSizes  (line 5141, @0x0000000001d6b950, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, buildings, empty, players
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchPrivateMetadata_Team::SerializeWithCachedSizes(
        const CDOTAMatchPrivateMetadata_Team *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // r12
  __int64 j; // r12
  _QWORD *v8; // rax

  if ( (*(this + 16) & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 18), output, v3);
  for ( i = 0; *(this + 8) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, *(*(this + 3) + 8 * i), output, v3);
  for ( j = 0; *(this + 14) > j; ++j )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 1, *(*(this + 6) + 8 * j), output, v3);
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAMatchPrivateMetadata_Team::SerializeWithCachedSizesToArray  (line 5168, @0x0000000001d6dc50, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CDOTAMatchPrivateMetadata_Team_Building>, WriteMessageNoVirtualToArray<CDOTAMatchPrivateMetadata_Team_Player>, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, buildings, empty, players
// calls: CDOTAMatchPrivateMetadata_Team_Player::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), CDOTAMatchPrivateMetadata_Team_Building::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDOTAMatchPrivateMetadata::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTAMatchPrivateMetadata_Team::SerializeWithCachedSizesToArray(
        const CDOTAMatchPrivateMetadata_Team *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::uint8 *result; // rax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  __int64 v6; // r13
  int v7; // r12d
  google::protobuf::uint8 *v8; // rsi
  unsigned __int8 *v9; // rdx
  unsigned int *v10; // r14
  google::protobuf::io::CodedOutputStream *v11; // rdi
  __int64 v12; // r13
  int v13; // r12d
  google::protobuf::uint8 *v14; // rsi
  unsigned __int8 *v15; // rdx
  unsigned int *v16; // r14
  google::protobuf::io::CodedOutputStream *v17; // rdi
  __int64 v18; // rdx

  result = target;
  if ( (*(this + 16) & 1) != 0 )
  {
    v5 = *(this + 18);
    *target = 8;
    if ( v5 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v5, target + 1, v2);
    }
    else
    {
      target[1] = v5;
      result = target + 2;
    }
  }
  if ( *(this + 8) > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v9 = *(this + 3);
      v10 = *&v9[v6];
      *result = 18;
      v11 = v10[5];
      if ( v11 <= 0x7F )
      {
        result[1] = v11;
        v8 = result + 2;
      }
      else
      {
        v8 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v11, result + 1, v9);
      }
      ++v7;
      v6 += 8;
      result = CDOTAMatchPrivateMetadata_Team_Player::SerializeWithCachedSizesToArray(v10, v8);
    }
    while ( v7 < *(this + 8) );
  }
  if ( *(this + 14) > 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v15 = *(this + 6);
      v16 = *&v15[v12];
      *result = 26;
      v17 = v16[5];
      if ( v17 <= 0x7F )
      {
        result[1] = v17;
        v14 = result + 2;
      }
      else
      {
        v14 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v17, result + 1, v15);
      }
      ++v13;
      v12 += 8;
      result = CDOTAMatchPrivateMetadata_Team_Building::SerializeWithCachedSizesToArray(v16, v14);
    }
    while ( v13 < *(this + 14) );
  }
  v18 = *(this + 1);
  if ( v18 != 0 && *(v18 + 8) != *v18 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v18);
  return result;
}


// CDOTAMatchPrivateMetadata_Team::ByteSize  (line 5198, @0x0000000001d6ce20, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDOTAMatchPrivateMetadata_Team_Building>, MessageSizeNoVirtual<CDOTAMatchPrivateMetadata_Team_Player>, UInt32Size, VarintSize32, buildings, empty, players
// calls: CDOTAMatchPrivateMetadata_Team_Player::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), CDOTAMatchPrivateMetadata_Team_Building::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTAMatchPrivateMetadata::ByteSize
int __fastcall CDOTAMatchPrivateMetadata_Team::ByteSize(const CDOTAMatchPrivateMetadata_Team *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v2; // r15d
  int v4; // eax
  int v5; // eax
  int v6; // r15d
  __int64 v7; // r14
  int v8; // r13d
  unsigned int v9; // r12d
  int v10; // eax
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r14
  int v14; // r13d
  unsigned int v15; // r12d
  int v16; // eax
  _QWORD *v17; // rax
  google::protobuf::io::CodedOutputStream *v19; // rdi

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v19 = *(this + 18);
    LOBYTE(v2) = 2;
    if ( v19 > 0x7F )
      v2 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v19, v1) + 1;
  }
  v5 = *(this + 8);
  v6 = v5 + v2;
  if ( v5 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = CDOTAMatchPrivateMetadata_Team_Player::ByteSize(*(*(this + 3) + v7));
      v10 = 1;
      if ( v9 > 0x7F )
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      ++v8;
      v7 += 8;
      v6 += v10 + v9;
    }
    while ( v8 < *(this + 8) );
  }
  v11 = *(this + 14);
  v12 = v11 + v6;
  if ( v11 > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = CDOTAMatchPrivateMetadata_Team_Building::ByteSize(*(*(this + 6) + v13));
      v16 = 1;
      if ( v15 > 0x7F )
        v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v15, v1);
      ++v14;
      v13 += 8;
      v12 += v16 + v15;
    }
    while ( v14 < *(this + 14) );
  }
  v17 = *(this + 1);
  if ( v17 != 0 && v17[1] != *v17 )
    v12 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v12;
  return v12;
}


// CDOTAMatchPrivateMetadata_Team::MergeFrom  (line 5237, @0x0000000001d72090, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchPrivateMetadata_Team*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchPrivateMetadata_Team::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchPrivateMetadata_Team
void __fastcall CDOTAMatchPrivateMetadata_Team::MergeFrom(
        CDOTAMatchPrivateMetadata_Team *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchPrivateMetadata_Team *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      5238);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAMatchPrivateMetadata_Team,
               0)) != 0 )
  {
    CDOTAMatchPrivateMetadata_Team::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchPrivateMetadata_Team::MergeFrom  (line 5249, @0x0000000001d71cb0, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>, New, set_dota_team, set_has_dota_team
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player, CDOTAMatchPrivateMetadata_Team_Player::MergeFrom, CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building, CDOTAMatchPrivateMetadata_Team_Building::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume (13 total)
// callers: CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team, CDOTAMatchPrivateMetadata_Team::MergeFrom, CDOTAMatchPrivateMetadata_Team::CopyFrom, CDOTAMatchPrivateMetadata::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAMatchPrivateMetadata_Team::MergeFrom(
        CDOTAMatchPrivateMetadata_Team *const this,
        const CDOTAMatchPrivateMetadata_Team *const from)
{
  __int64 v4; // r14
  int v5; // r13d
  CDOTAMatchPrivateMetadata_Team_Player *v6; // r15
  __int64 v7; // rax
  CDOTAMatchPrivateMetadata_Team_Player *v8; // rdi
  __int64 v9; // rdx
  const CDOTAMatchPrivateMetadata_Team_Player *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // r13d
  CDOTAMatchPrivateMetadata_Team_Building *v16; // r15
  __int64 v17; // rax
  CDOTAMatchPrivateMetadata_Team_Building *v18; // rdi
  __int64 v19; // rdx
  const CDOTAMatchPrivateMetadata_Team_Building *v20; // rsi
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v29; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v30; // [rsp+8h] [rbp-68h]
  char v31; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v32; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v32,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      5250);
    v27 = google::protobuf::internal::LogMessage::operator<<(&v32, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v31, v27);
    google::protobuf::internal::LogMessage::~LogMessage(&v32);
  }
  v29 = (this + 24);
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v32,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v28 = google::protobuf::internal::LogMessage::operator<<(&v32, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v31, v28);
    google::protobuf::internal::LogMessage::~LogMessage(&v32);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v29, *(from + 8) + *(this + 8));
  if ( *(from + 8) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v11 = *(this + 8);
      v12 = *(this + 9);
      if ( v11 >= v12 )
      {
        if ( v12 == *(this + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v29, v12 + 1);
        v6 = operator new(0x28u);
        CDOTAMatchPrivateMetadata_Team_Player::CDOTAMatchPrivateMetadata_Team_Player(v6);
        v7 = *(this + 8);
        v8 = v6;
        v9 = *(this + 3);
        ++*(this + 9);
        *(this + 8) = v7 + 1;
        *(v9 + 8 * v7) = v6;
      }
      else
      {
        v13 = *(this + 3);
        *(this + 8) = v11 + 1;
        v8 = *(v13 + 8 * v11);
      }
      ++v5;
      v10 = *(*(from + 3) + v4);
      v4 += 8;
      CDOTAMatchPrivateMetadata_Team_Player::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  v30 = (this + 48);
  if ( this + 48 == from + 48 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v32,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v26 = google::protobuf::internal::LogMessage::operator<<(&v32, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v31, v26);
    google::protobuf::internal::LogMessage::~LogMessage(&v32);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v30, *(from + 14) + *(this + 14));
  if ( *(from + 14) > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v21 = *(this + 14);
      v22 = *(this + 15);
      if ( v21 >= v22 )
      {
        if ( v22 == *(this + 16) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v30, v22 + 1);
        v16 = operator new(0x30u);
        CDOTAMatchPrivateMetadata_Team_Building::CDOTAMatchPrivateMetadata_Team_Building(v16);
        v17 = *(this + 14);
        v18 = v16;
        v19 = *(this + 6);
        ++*(this + 15);
        *(this + 14) = v17 + 1;
        *(v19 + 8 * v17) = v16;
      }
      else
      {
        v23 = *(this + 6);
        *(this + 14) = v21 + 1;
        v18 = *(v23 + 8 * v21);
      }
      ++v15;
      v20 = *(*(from + 6) + v14);
      v14 += 8;
      CDOTAMatchPrivateMetadata_Team_Building::MergeFrom(v18, v20);
    }
    while ( v15 < *(from + 14) );
  }
  v24 = *(from + 4);
  if ( v24 != 0 && (v24 & 1) != 0 )
  {
    v25 = *(from + 18);
    *(this + 4) |= 1u;
    *(this + 18) = v25;
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchPrivateMetadata_Team::CopyFrom  (line 5261, @0x0000000001d6a960, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata_Team::CopyFrom(
        CDOTAMatchPrivateMetadata_Team *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchPrivateMetadata_Team::CopyFrom  (line 5267, @0x0000000001d72170, libserver.so)
// calls: CDOTAMatchPrivateMetadata_Team::MergeFrom
void __fastcall CDOTAMatchPrivateMetadata_Team::CopyFrom(
        CDOTAMatchPrivateMetadata_Team *const this,
        const CDOTAMatchPrivateMetadata_Team *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchPrivateMetadata_Team::MergeFrom(this, from);
  }
}


// CDOTAMatchPrivateMetadata_Team::IsInitialized  (line 5273, @0x0000000001d6a9a0, libserver.so)
bool __fastcall CDOTAMatchPrivateMetadata_Team::IsInitialized(const CDOTAMatchPrivateMetadata_Team *const this)
{
  return 1;
}


// CDOTAMatchPrivateMetadata_Team::Swap  (line 5278, @0x0000000001d721b0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTAMatchPrivateMetadata_Team::Swap(
        CDOTAMatchPrivateMetadata_Team *const this,
        CDOTAMatchPrivateMetadata_Team *other)
{
  int v4; // eax
  char *v5; // rsi
  char *v6; // rdi
  int v7; // eax
  __int64 v8; // rax

  if ( other != this )
  {
    v4 = *(this + 18);
    v5 = other + 24;
    v6 = this + 24;
    *(v6 + 12) = *(v5 + 12);
    *(v5 + 12) = v4;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v6, v5);
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(this + 2, other + 2);
    v7 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v7;
    v8 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v8;
    LODWORD(v8) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v8;
  }
}


// CDOTAMatchPrivateMetadata_Team::GetMetadata  (line 5289, @0x0000000001d6d820, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_, `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchPrivateMetadata_Team::GetMetadata(
        const CDOTAMatchPrivateMetadata_Team *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchPrivateMetadata_Team_reflection_;
  return result;
}


// CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata  (line 5304, @0x0000000001d72220, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAMatchPrivateMetadata::New, protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto, CDOTAGCServerSystem::EnsureLastMatchMetadata
void __fastcall CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata(CDOTAMatchPrivateMetadata *const this)
{
  *this = off_3F9C570;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchPrivateMetadata::InitAsDefaultInstance  (line 5310, @0x0000000001d731e0, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata::InitAsDefaultInstance(CDOTAMatchPrivateMetadata *const this)
{
  ;
}


// CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata  (line 5313, @0x0000000001d734b0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAMatchPrivateMetadata::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata(
        CDOTAMatchPrivateMetadata *const this,
        const CDOTAMatchPrivateMetadata *const from)
{
  *this = off_3F9C570;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
  CDOTAMatchPrivateMetadata::MergeFrom(this, from);
}


// CDOTAMatchPrivateMetadata::SharedCtor  (line 5320, @0x0000000001d731f0, libserver.so)  // inlines: memset
void __fastcall CDOTAMatchPrivateMetadata::SharedCtor(CDOTAMatchPrivateMetadata *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata  (line 5325, @0x0000000001d6cc50, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata, CDOTAGCServerSystem::EnsureLastMatchMetadata
void __fastcall CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata(CDOTAMatchPrivateMetadata *const this)
{
  *this = off_3F9C570;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata  (line 5325, @0x0000000001d6cc90, libserver.so)
// calls: CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata, operator delete
void __fastcall CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata(CDOTAMatchPrivateMetadata *const this)
{
  CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata(this);
  operator delete(this);
}


// CDOTAMatchPrivateMetadata::SharedDtor  (line 5330, @0x0000000001d73210, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata::SharedDtor(CDOTAMatchPrivateMetadata *const this)
{
  ;
}


// CDOTAMatchPrivateMetadata::SetCachedSize  (line 5335, @0x0000000001d6a9b0, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata::SetCachedSize(const CDOTAMatchPrivateMetadata *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAMatchPrivateMetadata::descriptor  (line 5340, @0x0000000001d73220, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchPrivateMetadata_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAMatchPrivateMetadata::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAMatchPrivateMetadata_descriptor_;
}


// CDOTAMatchPrivateMetadata::default_instance  (line 5345, @0x0000000001d732b0, libserver.so)
// calls: protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto
// globals: CDOTAMatchPrivateMetadata::default_instance_
const CDOTAMatchPrivateMetadata *__cdecl CDOTAMatchPrivateMetadata::default_instance()
{
  const CDOTAMatchPrivateMetadata *result; // rax

  result = CDOTAMatchPrivateMetadata::default_instance_;
  if ( CDOTAMatchPrivateMetadata::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmatch_5fmetadata_2eproto();
    return CDOTAMatchPrivateMetadata::default_instance_;
  }
  return result;
}


// CDOTAMatchPrivateMetadata::New  (line 5352, @0x0000000001d72280, libserver.so)
// calls: operator new, CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata, operator delete, _Unwind_Resume
CDOTAMatchPrivateMetadata *__fastcall CDOTAMatchPrivateMetadata::New(const CDOTAMatchPrivateMetadata *const this)
{
  CDOTAMatchPrivateMetadata *v1; // rbx

  v1 = operator new(0x30u);
  CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata(v1);
  return v1;
}


// CDOTAMatchPrivateMetadata::Clear  (line 5356, @0x0000000001d6b280, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAMatchPrivateMetadata::Clear(CDOTAMatchPrivateMetadata *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v4; // rdi
  bool v5; // zf

  v2 = 0;
  v3 = 0;
  while ( v3 < *(this + 8) )
  {
    ++v3;
    v4 = *(*(this + 3) + v2);
    v2 += 8;
    (*(*v4 + 32LL))(v4);
  }
  v5 = *(this + 1) == 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  if ( !v5 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAMatchPrivateMetadata::MergePartialFromCodedStream  (line 5362, @0x0000000001d71990, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CDOTAMatchPrivateMetadata_Team>, ReadTagWithCutoff, ReadVarint32, add_teams
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CDOTAMatchPrivateMetadata_Team::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
bool __fastcall CDOTAMatchPrivateMetadata::MergePartialFromCodedStream(
        CDOTAMatchPrivateMetadata *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r14d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  int recursion_depth; // edx
  __int64 v11; // rax
  int v12; // esi
  CDOTAMatchPrivateMetadata_Team *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  const google::protobuf::uint8 *v16; // rax
  int v17; // eax
  bool v18; // cc
  __int64 v19; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase *v20; // [rsp+0h] [rbp-50h]
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  int v22; // [rsp+Ch] [rbp-44h]
  unsigned int v23[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v20 = (this + 24);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
      goto LABEL_11;
LABEL_3:
    v7 = *buffer;
    if ( v7 <= 0 )
    {
LABEL_11:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v7 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_8:
        if ( (v7 & 7) == 4 )
          return 1;
        result = google::protobuf::internal::WireFormat::SkipField(input, v7, v2, buffer_end);
        if ( !result )
          return result;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer_end > buffer )
          goto LABEL_3;
      }
    }
    else
    {
      input->last_tag_ = v7;
      input->buffer_ = buffer + 1;
    }
    if ( v7 >> 3 != 1 || v7 != 10 )
      break;
    while ( 1 )
    {
      v11 = *(this + 8);
      v12 = *(this + 9);
      if ( v11 < v12 )
      {
        v19 = *(this + 3);
        *(this + 8) = v11 + 1;
        v13 = *(v19 + 8 * v11);
      }
      else
      {
        if ( v12 == *(this + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v20, v12 + 1);
        v13 = operator new(0x50u);
        CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team(v13);
        v14 = *(this + 8);
        v15 = *(this + 3);
        ++*(this + 9);
        *(this + 8) = v14 + 1;
        *(v15 + 8 * v14) = v13;
      }
      v16 = input->buffer_;
      if ( v16 >= input->buffer_end_ || *v16 < 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v23) == 0 )
          return 0;
      }
      else
      {
        v23[0] = *v16;
        input->buffer_ = v16 + 1;
      }
      v17 = input->recursion_depth_ + 1;
      v18 = input->recursion_limit_ < v17;
      input->recursion_depth_ = v17;
      if ( v18 )
        return 0;
      v22 = google::protobuf::io::CodedInputStream::PushLimit(input, v23[0]);
      if ( !CDOTAMatchPrivateMetadata_Team::MergePartialFromCodedStream(v13, input) || !input->legitimate_message_end_ )
        return 0;
      legitimate_message_end = input->legitimate_message_end_;
      google::protobuf::io::CodedInputStream::PopLimit(input, v22);
      recursion_depth = input->recursion_depth_;
      result = legitimate_message_end;
      if ( recursion_depth > 0 )
        input->recursion_depth_ = recursion_depth - 1;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer >= buffer_end || *buffer != 10 )
        break;
      input->buffer_ = buffer + 1;
    }
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
  if ( v7 != 0 )
    goto LABEL_8;
  return 1;
}


// CDOTAMatchPrivateMetadata::SerializeWithCachedSizes  (line 5408, @0x0000000001d6b3e0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, empty, teams
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAMatchPrivateMetadata::SerializeWithCachedSizes(
        const CDOTAMatchPrivateMetadata *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // rbx
  _QWORD *v7; // rax

  for ( i = 0; *(this + 8) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_0 + 1, *(*(this + 3) + 8 * i), output, v3);
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAMatchPrivateMetadata::SerializeWithCachedSizesToArray  (line 5424, @0x0000000001d6dd70, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CDOTAMatchPrivateMetadata_Team>, WriteTagToArray, WriteVarint32ToArray, empty, teams
// calls: CDOTAMatchPrivateMetadata_Team::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDOTAMatchPrivateMetadata::SerializeWithCachedSizesToArray(
        const CDOTAMatchPrivateMetadata *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  __int64 v4; // r12
  int v5; // ebx
  google::protobuf::uint8 *v6; // rsi
  unsigned __int8 *v7; // rdx
  unsigned int *v8; // r13
  google::protobuf::io::CodedOutputStream *v9; // rdi
  __int64 v10; // rdx

  result = target;
  if ( *(this + 8) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v7 = *(this + 3);
      v8 = *&v7[v4];
      *result = 10;
      v9 = v8[5];
      if ( v9 <= 0x7F )
      {
        result[1] = v9;
        v6 = result + 2;
      }
      else
      {
        v6 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, result + 1, v7);
      }
      ++v5;
      v4 += 8;
      result = CDOTAMatchPrivateMetadata_Team::SerializeWithCachedSizesToArray(v8, v6);
    }
    while ( v5 < *(this + 8) );
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v10);
  return result;
}


// CDOTAMatchPrivateMetadata::ByteSize  (line 5442, @0x0000000001d6cf40, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDOTAMatchPrivateMetadata_Team>, VarintSize32, empty, teams
// calls: CDOTAMatchPrivateMetadata_Team::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDOTAMatchPrivateMetadata::ByteSize(const CDOTAMatchPrivateMetadata *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // r14d
  __int64 v4; // r13
  int v5; // r12d
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD *v8; // rax

  v3 = *(this + 8);
  if ( v3 > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = CDOTAMatchPrivateMetadata_Team::ByteSize(*(*(this + 3) + v4));
      v7 = 1;
      if ( v6 > 0x7F )
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      ++v5;
      v4 += 8;
      v3 += v7 + v6;
    }
    while ( v5 < *(this + 8) );
  }
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAMatchPrivateMetadata::MergeFrom  (line 5464, @0x0000000001d73550, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAMatchPrivateMetadata*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAMatchPrivateMetadata::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAMatchPrivateMetadata
void __fastcall CDOTAMatchPrivateMetadata::MergeFrom(
        CDOTAMatchPrivateMetadata *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAMatchPrivateMetadata *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      5465);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAMatchPrivateMetadata, 0)) != 0 )
  {
    CDOTAMatchPrivateMetadata::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAMatchPrivateMetadata::MergeFrom  (line 5476, @0x0000000001d732e0, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>, New
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team, CDOTAMatchPrivateMetadata_Team::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata, CDOTAMatchPrivateMetadata::MergeFrom, CDOTAMatchPrivateMetadata::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CDOTAMatchPrivateMetadata::MergeFrom(
        CDOTAMatchPrivateMetadata *const this,
        const CDOTAMatchPrivateMetadata *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CDOTAMatchPrivateMetadata_Team *v6; // r15
  __int64 v7; // rax
  CDOTAMatchPrivateMetadata_Team *v8; // rdi
  __int64 v9; // rdx
  const CDOTAMatchPrivateMetadata_Team *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v16; // [rsp+8h] [rbp-68h]
  char v17; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v18; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v18,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_match_metadata.pb.cc",
      5477);
    v14 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v17, v14);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
  }
  v16 = (this + 24);
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v18,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v15 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v17, v15);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v16, *(from + 8) + *(this + 8));
  if ( *(from + 8) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v11 = *(this + 8);
      v12 = *(this + 9);
      if ( v11 >= v12 )
      {
        if ( v12 == *(this + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v16, v12 + 1);
        v6 = operator new(0x50u);
        CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team(v6);
        v7 = *(this + 8);
        v8 = v6;
        v9 = *(this + 3);
        ++*(this + 9);
        *(this + 8) = v7 + 1;
        *(v9 + 8 * v7) = v6;
      }
      else
      {
        v13 = *(this + 3);
        *(this + 8) = v11 + 1;
        v8 = *(v13 + 8 * v11);
      }
      ++v5;
      v10 = *(*(from + 3) + v4);
      v4 += 8;
      CDOTAMatchPrivateMetadata_Team::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAMatchPrivateMetadata::CopyFrom  (line 5482, @0x0000000001d6a9c0, libserver.so)
void __fastcall CDOTAMatchPrivateMetadata::CopyFrom(
        CDOTAMatchPrivateMetadata *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAMatchPrivateMetadata::CopyFrom  (line 5488, @0x0000000001d73630, libserver.so)
// calls: CDOTAMatchPrivateMetadata::MergeFrom
void __fastcall CDOTAMatchPrivateMetadata::CopyFrom(
        CDOTAMatchPrivateMetadata *const this,
        const CDOTAMatchPrivateMetadata *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAMatchPrivateMetadata::MergeFrom(this, from);
  }
}


// CDOTAMatchPrivateMetadata::IsInitialized  (line 5494, @0x0000000001d6aa00, libserver.so)
bool __fastcall CDOTAMatchPrivateMetadata::IsInitialized(const CDOTAMatchPrivateMetadata *const this)
{
  return 1;
}


// CDOTAMatchPrivateMetadata::Swap  (line 5499, @0x0000000001d73670, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTAMatchPrivateMetadata::Swap(
        CDOTAMatchPrivateMetadata *const this,
        CDOTAMatchPrivateMetadata *other)
{
  int v4; // eax
  __int64 v5; // rax

  if ( other != this )
  {
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(this + 1, other + 1);
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


// CDOTAMatchPrivateMetadata::GetMetadata  (line 5508, @0x0000000001d6d320, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto(void), `anonymous namespace'::CDOTAMatchPrivateMetadata_descriptor_, `anonymous namespace'::CDOTAMatchPrivateMetadata_reflection_
google::protobuf::Metadata __fastcall CDOTAMatchPrivateMetadata::GetMetadata(
        const CDOTAMatchPrivateMetadata *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmatch_5fmetadata_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAMatchPrivateMetadata_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAMatchPrivateMetadata_reflection_;
  return result;
}


