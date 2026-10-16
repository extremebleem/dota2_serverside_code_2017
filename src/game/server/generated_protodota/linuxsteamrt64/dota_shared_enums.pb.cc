// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc:482
struct StaticDescriptorInitializer_dota_5fshared_5fenums_2eproto {
	StaticDescriptorInitializer_dota_5fshared_5fenums_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_dota_5fshared_5fenums_2eproto  (line 75, @0x0000000001b5b640, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_dota_5fshared_5fenums_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "dota_shared_enums.proto", "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_, CDOTAClientHardwareSpecs::default_instance_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void)::CDOTAClientHardwareSpecs_offsets_, `anonymous namespace'::CDOTAClientHardwareSpecs_reflection_, `anonymous namespace'::CDOTASaveGame_descriptor_, CDOTASaveGame::default_instance_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void)::CDOTASaveGame_offsets_, `anonymous namespace'::CDOTASaveGame_reflection_ (40 total)
void __cdecl protobuf_AssignDesc_dota_5fshared_5fenums_2eproto()
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
  const google::protobuf::EnumDescriptor *v29; // rax
  __int64 v30; // rax
  int v31; // eax
  int v32; // edx
  char v33; // [rsp+3Eh] [rbp-42h] BYREF
  char v34; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v35; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
  std::string::string(&v35, "dota_shared_enums.proto", &v33);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v35);
  v3 = *&v35.level_ - 24LL;
  if ( (*&v35.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v31 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v32 = *(*&v35.level_ - 8LL);
      *(*&v35.level_ - 8LL) = v32 - 1;
      v31 = v32;
    }
    if ( v31 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v34);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v35,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      80);
    v30 = google::protobuf::internal::LogMessage::operator<<(&v35, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v34, v30);
    google::protobuf::internal::LogMessage::~LogMessage(&v35);
  }
  `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_,
    CDOTAClientHardwareSpecs::default_instance_,
    protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void)::CDOTAClientHardwareSpecs_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    56);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CDOTAClientHardwareSpecs_reflection_ = v7;
  `anonymous namespace'::CDOTASaveGame_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CDOTASaveGame_descriptor_,
    CDOTASaveGame::default_instance_,
    protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void)::CDOTASaveGame_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    88);
  `anonymous namespace'::CDOTASaveGame_reflection_ = v13;
  `anonymous namespace'::CDOTASaveGame_Player_descriptor_ = `anonymous namespace'::CDOTASaveGame_descriptor_->nested_types_;
  v15 = google::protobuf::DescriptorPool::generated_pool(v14);
  v17 = google::protobuf::MessageFactory::generated_factory(v16);
  v18 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v18,
    `anonymous namespace'::CDOTASaveGame_Player_descriptor_,
    CDOTASaveGame_Player::default_instance_,
    protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void)::CDOTASaveGame_Player_offsets_,
    16,
    8,
    -1,
    v15,
    v17,
    48);
  `anonymous namespace'::CDOTASaveGame_Player_reflection_ = v18;
  `anonymous namespace'::CDOTASaveGame_SaveInstance_descriptor_ = `anonymous namespace'::CDOTASaveGame_descriptor_->nested_types_
                                                                + 1;
  v20 = google::protobuf::DescriptorPool::generated_pool(v19);
  v22 = google::protobuf::MessageFactory::generated_factory(v21);
  v23 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v23,
    `anonymous namespace'::CDOTASaveGame_SaveInstance_descriptor_,
    CDOTASaveGame_SaveInstance::default_instance_,
    protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void)::CDOTASaveGame_SaveInstance_offsets_,
    16,
    8,
    -1,
    v20,
    v22,
    72);
  `anonymous namespace'::CDOTASaveGame_SaveInstance_reflection_ = v23;
  `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_descriptor_ = `anonymous namespace'::CDOTASaveGame_SaveInstance_descriptor_->nested_types_;
  v25 = google::protobuf::DescriptorPool::generated_pool(v24);
  v27 = google::protobuf::MessageFactory::generated_factory(v26);
  v28 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v28,
    `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_descriptor_,
    CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_,
    protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void)::CDOTASaveGame_SaveInstance_PlayerPositions_offsets_,
    16,
    8,
    -1,
    v25,
    v27,
    32);
  v29 = *(FileByName + 96);
  `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_reflection_ = v28;
  `anonymous namespace'::DOTA_GameMode_descriptor_ = v29;
  `anonymous namespace'::DOTA_GameState_descriptor_ = v29 + 1;
  `anonymous namespace'::DOTA_GC_TEAM_descriptor_ = v29 + 2;
  `anonymous namespace'::EEvent_descriptor_ = v29 + 3;
  `anonymous namespace'::DOTALeaverStatus_t_descriptor_ = v29 + 4;
  `anonymous namespace'::DOTAConnectionState_t_descriptor_ = v29 + 5;
  `anonymous namespace'::Fantasy_Roles_descriptor_ = v29 + 6;
  `anonymous namespace'::Fantasy_Team_Slots_descriptor_ = v29 + 7;
  `anonymous namespace'::Fantasy_Selection_Mode_descriptor_ = v29 + 8;
  `anonymous namespace'::DOTAChatChannelType_t_descriptor_ = v29 + 9;
  `anonymous namespace'::EProfileCardSlotType_descriptor_ = v29 + 10;
  `anonymous namespace'::EMatchGroupServerStatus_descriptor_ = v29 + 11;
  `anonymous namespace'::DOTA_CM_PICK_descriptor_ = v29 + 12;
  `anonymous namespace'::DOTALowPriorityBanType_descriptor_ = v29 + 13;
  `anonymous namespace'::DOTALobbyReadyState_descriptor_ = v29 + 14;
  `anonymous namespace'::DOTAGameVersion_descriptor_ = v29 + 15;
  `anonymous namespace'::DOTAJoinLobbyResult_descriptor_ = v29 + 16;
  `anonymous namespace'::SelectionPriorityType_descriptor_ = v29 + 17;
  `anonymous namespace'::DOTAMatchVote_descriptor_ = v29 + 18;
  `anonymous namespace'::DOTA_LobbyMemberXPBonus_descriptor_ = v29 + 19;
  `anonymous namespace'::DOTALobbyVisibility_descriptor_ = v29 + 20;
  `anonymous namespace'::EDOTAPlayerMMRType_descriptor_ = v29 + 21;
  `anonymous namespace'::MatchType_descriptor_ = v29 + 22;
  `anonymous namespace'::DOTABotDifficulty_descriptor_ = v29 + 23;
  `anonymous namespace'::DOTA_BOT_MODE_descriptor_ = v29 + 24;
  `anonymous namespace'::MatchLanguages_descriptor_ = v29 + 25;
  `anonymous namespace'::ETourneyQueueDeadlineState_descriptor_ = v29 + 26;
  `anonymous namespace'::EMatchOutcome_descriptor_ = v29 + 27;
}


// protobuf_RegisterTypes  (line 210, @0x0000000001b5b4d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_dota_5fshared_5fenums_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), CDOTAClientHardwareSpecs::default_instance_, `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_, CDOTASaveGame::default_instance_, `anonymous namespace'::CDOTASaveGame_descriptor_, CDOTASaveGame_Player::default_instance_, `anonymous namespace'::CDOTASaveGame_Player_descriptor_ (12 total)
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
    v11[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v11, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v11);
  }
  v2 = CDOTAClientHardwareSpecs::default_instance_;
  if ( CDOTAClientHardwareSpecs::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    v2 = CDOTAClientHardwareSpecs::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_,
    v2,
    v1);
  v4 = CDOTASaveGame::default_instance_;
  if ( CDOTASaveGame::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    v4 = CDOTASaveGame::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTASaveGame_descriptor_,
    v4,
    v3);
  v6 = CDOTASaveGame_Player::default_instance_;
  if ( CDOTASaveGame_Player::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    v6 = CDOTASaveGame_Player::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTASaveGame_Player_descriptor_,
    v6,
    v5);
  v8 = CDOTASaveGame_SaveInstance::default_instance_;
  if ( CDOTASaveGame_SaveInstance::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    v8 = CDOTASaveGame_SaveInstance::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTASaveGame_SaveInstance_descriptor_,
    v8,
    v7);
  v10 = CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_;
  if ( CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    v10 = CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_descriptor_,
    v10,
    v9);
}


// protobuf_ShutdownFile_dota_5fshared_5fenums_2eproto  (line 226, @0x0000000001b55f30, libserver.so)
// globals: CDOTAClientHardwareSpecs::default_instance_, `anonymous namespace'::CDOTAClientHardwareSpecs_reflection_, CDOTASaveGame::default_instance_, `anonymous namespace'::CDOTASaveGame_reflection_, CDOTASaveGame_Player::default_instance_, `anonymous namespace'::CDOTASaveGame_Player_reflection_, CDOTASaveGame_SaveInstance::default_instance_, `anonymous namespace'::CDOTASaveGame_SaveInstance_reflection_ (10 total)
void __cdecl protobuf_ShutdownFile_dota_5fshared_5fenums_2eproto()
{
  if ( CDOTAClientHardwareSpecs::default_instance_ != 0 )
    (CDOTAClientHardwareSpecs::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAClientHardwareSpecs::default_instance_);
  if ( `anonymous namespace'::CDOTAClientHardwareSpecs_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAClientHardwareSpecs_reflection_ + 8LL))(`anonymous namespace'::CDOTAClientHardwareSpecs_reflection_);
  if ( CDOTASaveGame::default_instance_ != 0 )
    (CDOTASaveGame::default_instance_->name_[1]._M_dataplus._M_p)(CDOTASaveGame::default_instance_);
  if ( `anonymous namespace'::CDOTASaveGame_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTASaveGame_reflection_ + 8LL))(`anonymous namespace'::CDOTASaveGame_reflection_);
  if ( CDOTASaveGame_Player::default_instance_ != 0 )
    (CDOTASaveGame_Player::default_instance_->name_[1]._M_dataplus._M_p)(CDOTASaveGame_Player::default_instance_);
  if ( `anonymous namespace'::CDOTASaveGame_Player_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTASaveGame_Player_reflection_ + 8LL))(`anonymous namespace'::CDOTASaveGame_Player_reflection_);
  if ( CDOTASaveGame_SaveInstance::default_instance_ != 0 )
    (CDOTASaveGame_SaveInstance::default_instance_->name_[1]._M_dataplus._M_p)(CDOTASaveGame_SaveInstance::default_instance_);
  if ( `anonymous namespace'::CDOTASaveGame_SaveInstance_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTASaveGame_SaveInstance_reflection_ + 8LL))(`anonymous namespace'::CDOTASaveGame_SaveInstance_reflection_);
  if ( CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_ != 0 )
    (CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_->name_[1]._M_dataplus._M_p)(CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_);
  if ( `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_reflection_ + 8LL))(`anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_reflection_);
}


// protobuf_AddDesc_dota_5fshared_5fenums_2eproto  (line 239, @0x0000000001b5b2b0, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs, CDOTASaveGame::CDOTASaveGame, CDOTASaveGame_Player::CDOTASaveGame_Player, CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance, CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions, google::protobuf::internal::OnShutdown(void (*)(void)), operator delete, _Unwind_Resume
// callers: CDOTAClientHardwareSpecs::default_instance, CDOTASaveGame_Player::default_instance, CDOTASaveGame_SaveInstance_PlayerPositions::default_instance, CDOTASaveGame_SaveInstance::default_instance, protobuf_RegisterTypes, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto, CDOTASaveGame::default_instance, _GLOBAL__sub_I_dota_shared_enums.pb.cc, protobuf_AddDesc_dota_5fgcmessages_5fcommon_2eproto, protobuf_AddDesc_dota_5fgcmessages_5fcommon_5fmatch_5fmanagement_2eproto, protobuf_AddDesc_dota_5fgcmessages_5fserver_2eproto
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "dota_shared_enums.proto"
// globals: protobuf_AddDesc_dota_5fshared_5fenums_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CDOTAClientHardwareSpecs::default_instance_, CDOTASaveGame::default_instance_, CDOTASaveGame_Player::default_instance_, CDOTASaveGame_SaveInstance::default_instance_, CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_, protobuf_ShutdownFile_dota_5fshared_5fenums_2eproto(void)
void __cdecl protobuf_AddDesc_dota_5fshared_5fenums_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CDOTAClientHardwareSpecs *v3; // rbx
  CDOTASaveGame *v4; // rbx
  CDOTASaveGame_Player *v5; // rbx
  CDOTASaveGame_SaveInstance *v6; // rbx
  CDOTASaveGame_SaveInstance_PlayerPositions *v7; // rbx
  void (*v8)(void); // rsi

  if ( !protobuf_AddDesc_dota_5fshared_5fenums_2eproto(void)::already_here )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      v0);
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_3281C20, &stru_2240.st_value + 1, v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "dota_shared_enums.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x38u);
    CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs(v3);
    CDOTAClientHardwareSpecs::default_instance_ = v3;
    v4 = operator new(0x58u);
    CDOTASaveGame::CDOTASaveGame(v4);
    CDOTASaveGame::default_instance_ = v4;
    v5 = operator new(0x30u);
    CDOTASaveGame_Player::CDOTASaveGame_Player(v5);
    CDOTASaveGame_Player::default_instance_ = v5;
    v6 = operator new(0x48u);
    CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance(v6);
    CDOTASaveGame_SaveInstance::default_instance_ = v6;
    v7 = operator new(0x20u);
    CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions(v7);
    CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_ = v7;
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_dota_5fshared_5fenums_2eproto, v8);
  }
}


// DOTA_GameMode_descriptor  (line 487, @0x0000000001b580c0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTAGamerules::PrintStatus, CDOTAGCServerSystem::SOChanged
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTA_GameMode_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTA_GameMode_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTA_GameMode_descriptor_;
}


// DOTA_GameMode_IsValid  (line 491, @0x0000000001b58150, libserver.so)
// callers: CMsgDOTAMatch::MergePartialFromCodedStream
bool __fastcall DOTA_GameMode_IsValid(int value)
{
  return value <= 0x16;
}


// DOTA_GameState_descriptor  (line 522, @0x0000000001b58160, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTAVScriptGameSystem::InstallScriptBindings, CDOTAGCServerSystem::CheckUpdateConnectedPlayers
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTA_GameState_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTA_GameState_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTA_GameState_descriptor_;
}


// DOTA_GameState_IsValid  (line 526, @0x0000000001b581f0, libserver.so)
// callers: CMsgLeaverState::MergePartialFromCodedStream, CSODOTALobby::MergePartialFromCodedStream, CMsgGameserverCrash::MergePartialFromCodedStream, CMsgConnectedPlayers::MergePartialFromCodedStream
bool __fastcall DOTA_GameState_IsValid(int value)
{
  return value <= 0xB;
}


// DOTA_GC_TEAM_descriptor  (line 546, @0x0000000001b58200, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTA_GC_TEAM_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTA_GC_TEAM_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTA_GC_TEAM_descriptor_;
}


// DOTA_GC_TEAM_IsValid  (line 550, @0x0000000001b58290, libserver.so)
// callers: CDOTALobbyMember::MergePartialFromCodedStream
bool __fastcall DOTA_GC_TEAM_IsValid(int value)
{
  return value <= 5;
}


// EEvent_descriptor  (line 564, @0x0000000001b582a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTAEventSchema::Initialize, ParseEventIDFromString, CDOTAItemDefinition::BInitFromKVOverride
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::EEvent_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EEvent_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EEvent_descriptor_;
}


// EEvent_IsValid  (line 568, @0x0000000001b58330, libserver.so)
// callers: CSODOTAParty::MergePartialFromCodedStream, CSODOTALobby::MergePartialFromCodedStream, CMsgServerToGCGetIngameEventData::MergePartialFromCodedStream, ParseEventIDFromString
bool __fastcall EEvent_IsValid(int value)
{
  return value <= 0x12;
}


// DOTALeaverStatus_t_descriptor  (line 595, @0x0000000001b58340, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTAGamerules::OnLobbyUpdated, CGCClientJobSetLeaverDetected::BYieldingRunJob, CDOTA_PlayerResource::SetLeaverStatus, CDOTAGCServerSystem::CheckUpdateConnectedPlayers
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTALeaverStatus_t_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTALeaverStatus_t_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTALeaverStatus_t_descriptor_;
}


// DOTALeaverStatus_t_IsValid  (line 599, @0x0000000001b583d0, libserver.so)
// callers: CDOTALobbyMember::MergePartialFromCodedStream, CMsgLeaverDetected::MergePartialFromCodedStream
bool __fastcall DOTALeaverStatus_t_IsValid(int value)
{
  return value <= 8;
}


// DOTAConnectionState_t_descriptor  (line 616, @0x0000000001b583e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTA_PlayerResource::SetConnectionState, CDOTAVScriptGameSystem::InstallScriptBindings
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTAConnectionState_t_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTAConnectionState_t_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTAConnectionState_t_descriptor_;
}


// DOTAConnectionState_t_IsValid  (line 620, @0x0000000001b58470, libserver.so)
bool __fastcall DOTAConnectionState_t_IsValid(int value)
{
  return value <= 6;
}


// Fantasy_Roles_descriptor  (line 635, @0x0000000001b58480, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::Fantasy_Roles_descriptor_
const google::protobuf::EnumDescriptor *__cdecl Fantasy_Roles_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::Fantasy_Roles_descriptor_;
}


// Fantasy_Roles_IsValid  (line 639, @0x0000000001b58510, libserver.so)
bool __fastcall Fantasy_Roles_IsValid(int value)
{
  return value <= 3;
}


// Fantasy_Team_Slots_descriptor  (line 651, @0x0000000001b58520, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::Fantasy_Team_Slots_descriptor_
const google::protobuf::EnumDescriptor *__cdecl Fantasy_Team_Slots_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::Fantasy_Team_Slots_descriptor_;
}


// Fantasy_Team_Slots_IsValid  (line 655, @0x0000000001b585b0, libserver.so)
bool __fastcall Fantasy_Team_Slots_IsValid(int value)
{
  return value <= 4;
}


// Fantasy_Selection_Mode_descriptor  (line 668, @0x0000000001b585c0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::Fantasy_Selection_Mode_descriptor_
const google::protobuf::EnumDescriptor *__cdecl Fantasy_Selection_Mode_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::Fantasy_Selection_Mode_descriptor_;
}


// Fantasy_Selection_Mode_IsValid  (line 672, @0x0000000001b58650, libserver.so)
bool __fastcall Fantasy_Selection_Mode_IsValid(int value)
{
  return value <= 9;
}


// DOTAChatChannelType_t_descriptor  (line 690, @0x0000000001b58660, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTAChatChannelType_t_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTAChatChannelType_t_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTAChatChannelType_t_descriptor_;
}


// DOTAChatChannelType_t_IsValid  (line 694, @0x0000000001b586f0, libserver.so)
bool __fastcall DOTAChatChannelType_t_IsValid(int value)
{
  bool result; // al

  result = 0;
  if ( value <= 0x15 )
    return ((1LL << value) & 0x3FBFFF) != 0;
  return result;
}


// EProfileCardSlotType_descriptor  (line 723, @0x0000000001b58710, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::EProfileCardSlotType_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EProfileCardSlotType_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EProfileCardSlotType_descriptor_;
}


// EProfileCardSlotType_IsValid  (line 727, @0x0000000001b587a0, libserver.so)
bool __fastcall EProfileCardSlotType_IsValid(int value)
{
  return value <= 5;
}


// EMatchGroupServerStatus_descriptor  (line 741, @0x0000000001b587b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::EMatchGroupServerStatus_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EMatchGroupServerStatus_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EMatchGroupServerStatus_descriptor_;
}


// EMatchGroupServerStatus_IsValid  (line 745, @0x0000000001b58840, libserver.so)
bool __fastcall EMatchGroupServerStatus_IsValid(int value)
{
  return value <= 2;
}


// DOTA_CM_PICK_descriptor  (line 756, @0x0000000001b58850, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTA_CM_PICK_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTA_CM_PICK_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTA_CM_PICK_descriptor_;
}


// DOTA_CM_PICK_IsValid  (line 760, @0x0000000001b588e0, libserver.so)
// callers: CSODOTALobby::MergePartialFromCodedStream
bool __fastcall DOTA_CM_PICK_IsValid(int value)
{
  return value <= 2;
}


// DOTALowPriorityBanType_descriptor  (line 771, @0x0000000001b588f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTALowPriorityBanType_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTALowPriorityBanType_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTALowPriorityBanType_descriptor_;
}


// DOTALowPriorityBanType_IsValid  (line 775, @0x0000000001b58980, libserver.so)
bool __fastcall DOTALowPriorityBanType_IsValid(int value)
{
  return value <= 2;
}


// DOTALobbyReadyState_descriptor  (line 786, @0x0000000001b58990, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTALobbyReadyState_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTALobbyReadyState_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTALobbyReadyState_descriptor_;
}


// DOTALobbyReadyState_IsValid  (line 790, @0x0000000001b58a20, libserver.so)
bool __fastcall DOTALobbyReadyState_IsValid(int value)
{
  return value <= 2;
}


// DOTAGameVersion_descriptor  (line 801, @0x0000000001b58a30, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTAGameVersion_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTAGameVersion_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTAGameVersion_descriptor_;
}


// DOTAGameVersion_IsValid  (line 805, @0x0000000001b58ac0, libserver.so)
// callers: CSODOTALobby::MergePartialFromCodedStream
bool __fastcall DOTAGameVersion_IsValid(int value)
{
  return value <= 1;
}


// DOTAJoinLobbyResult_descriptor  (line 815, @0x0000000001b58ad0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTAJoinLobbyResult_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTAJoinLobbyResult_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTAJoinLobbyResult_descriptor_;
}


// DOTAJoinLobbyResult_IsValid  (line 819, @0x0000000001b58b60, libserver.so)
bool __fastcall DOTAJoinLobbyResult_IsValid(int value)
{
  return value <= 0xB;
}


// SelectionPriorityType_descriptor  (line 839, @0x0000000001b58b70, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::SelectionPriorityType_descriptor_
const google::protobuf::EnumDescriptor *__cdecl SelectionPriorityType_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::SelectionPriorityType_descriptor_;
}


// SelectionPriorityType_IsValid  (line 843, @0x0000000001b58c00, libserver.so)
// callers: CSODOTALobby::MergePartialFromCodedStream
bool __fastcall SelectionPriorityType_IsValid(int value)
{
  return value <= 4;
}


// DOTAMatchVote_descriptor  (line 856, @0x0000000001b58c10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTAMatchVote_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTAMatchVote_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTAMatchVote_descriptor_;
}


// DOTAMatchVote_IsValid  (line 860, @0x0000000001b58ca0, libserver.so)
bool __fastcall DOTAMatchVote_IsValid(int value)
{
  return value <= 2;
}


// DOTA_LobbyMemberXPBonus_descriptor  (line 871, @0x0000000001b58cb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTA_LobbyMemberXPBonus_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTA_LobbyMemberXPBonus_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTA_LobbyMemberXPBonus_descriptor_;
}


// DOTA_LobbyMemberXPBonus_IsValid  (line 875, @0x0000000001b58d40, libserver.so)
bool __fastcall DOTA_LobbyMemberXPBonus_IsValid(int value)
{
  return value <= 5;
}


// DOTALobbyVisibility_descriptor  (line 889, @0x0000000001b58d50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTALobbyVisibility_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTALobbyVisibility_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTALobbyVisibility_descriptor_;
}


// DOTALobbyVisibility_IsValid  (line 893, @0x0000000001b58de0, libserver.so)
// callers: CSODOTALobby::MergePartialFromCodedStream
bool __fastcall DOTALobbyVisibility_IsValid(int value)
{
  return value <= 2;
}


// EDOTAPlayerMMRType_descriptor  (line 904, @0x0000000001b58df0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTA_PlayerResource::FlushPlayerResourceRequests
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::EDOTAPlayerMMRType_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EDOTAPlayerMMRType_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EDOTAPlayerMMRType_descriptor_;
}


// EDOTAPlayerMMRType_IsValid  (line 908, @0x0000000001b58e80, libserver.so)
bool __fastcall EDOTAPlayerMMRType_IsValid(int value)
{
  return value <= 7;
}


// MatchType_descriptor  (line 924, @0x0000000001b58e90, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::MatchType_descriptor_
const google::protobuf::EnumDescriptor *__cdecl MatchType_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::MatchType_descriptor_;
}


// MatchType_IsValid  (line 928, @0x0000000001b58f20, libserver.so)
// callers: CSODOTAParty::MergePartialFromCodedStream, CDOTALobbyMember::MergePartialFromCodedStream
bool __fastcall MatchType_IsValid(int value)
{
  return value <= 8;
}


// DOTABotDifficulty_descriptor  (line 945, @0x0000000001b58f30, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTABotDifficulty_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTABotDifficulty_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTABotDifficulty_descriptor_;
}


// DOTABotDifficulty_IsValid  (line 949, @0x0000000001b58fc0, libserver.so)
// callers: CSODOTAParty::MergePartialFromCodedStream, CSODOTALobby::MergePartialFromCodedStream, CMsgSignOutBotInfo::MergePartialFromCodedStream
bool __fastcall DOTABotDifficulty_IsValid(int value)
{
  return value <= 8;
}


// DOTA_BOT_MODE_descriptor  (line 966, @0x0000000001b58fd0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::DOTA_BOT_MODE_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTA_BOT_MODE_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTA_BOT_MODE_descriptor_;
}


// DOTA_BOT_MODE_IsValid  (line 970, @0x0000000001b59060, libserver.so)
bool __fastcall DOTA_BOT_MODE_IsValid(int value)
{
  return value <= 0x19;
}


// MatchLanguages_descriptor  (line 1004, @0x0000000001b59070, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::MatchLanguages_descriptor_
const google::protobuf::EnumDescriptor *__cdecl MatchLanguages_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::MatchLanguages_descriptor_;
}


// MatchLanguages_IsValid  (line 1008, @0x0000000001b59100, libserver.so)
bool __fastcall MatchLanguages_IsValid(int value)
{
  return value <= 7;
}


// ETourneyQueueDeadlineState_descriptor  (line 1024, @0x0000000001b59110, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::ETourneyQueueDeadlineState_descriptor_
const google::protobuf::EnumDescriptor *__cdecl ETourneyQueueDeadlineState_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ETourneyQueueDeadlineState_descriptor_;
}


// ETourneyQueueDeadlineState_IsValid  (line 1028, @0x0000000001b591a0, libserver.so)
// callers: CSODOTAParty::MergePartialFromCodedStream
bool __fastcall ETourneyQueueDeadlineState_IsValid(int value)
{
  return value >= -1 && (value <= 4 || value == 101);
}


// EMatchOutcome_descriptor  (line 1043, @0x0000000001b591d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::EMatchOutcome_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EMatchOutcome_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EMatchOutcome_descriptor_;
}


// EMatchOutcome_IsValid  (line 1047, @0x0000000001b59260, libserver.so)
// callers: CMsgDOTAMatch::MergePartialFromCodedStream, CSODOTALobby::MergePartialFromCodedStream
bool __fastcall EMatchOutcome_IsValid(int value)
{
  if ( value > 3 )
  {
    if ( (value - 64) > 4 )
      return 0;
  }
  else if ( value < 2 && value != 0 )
  {
    return 0;
  }
  return 1;
}


// CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs  (line 1075, @0x0000000001b592e0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAClientHardwareSpecs::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTAClientHardwareSpecs::New, protobuf_AddDesc_dota_5fshared_5fenums_2eproto
void __fastcall CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs(CDOTAClientHardwareSpecs *const this)
{
  *this = off_3F7E370;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAClientHardwareSpecs::SharedCtor(this);
}


// CDOTAClientHardwareSpecs::InitAsDefaultInstance  (line 1081, @0x0000000001b59290, libserver.so)
void __fastcall CDOTAClientHardwareSpecs::InitAsDefaultInstance(CDOTAClientHardwareSpecs *const this)
{
  ;
}


// CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs  (line 1084, @0x0000000001b59530, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAClientHardwareSpecs::SharedCtor, CDOTAClientHardwareSpecs::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs(
        CDOTAClientHardwareSpecs *const this,
        const CDOTAClientHardwareSpecs *const from)
{
  *this = off_3F7E370;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAClientHardwareSpecs::SharedCtor(this);
  CDOTAClientHardwareSpecs::MergeFrom(this, from);
}


// CDOTAClientHardwareSpecs::SharedCtor  (line 1091, @0x0000000001b592a0, libserver.so)  // inlines: memset
// callers: CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs
void __fastcall CDOTAClientHardwareSpecs::SharedCtor(CDOTAClientHardwareSpecs *const this)
{
  *(this + 5) = 0;
  *(this + 10) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 44) = 0;
  *(this + 6) = 0;
  *(this + 45) = 0;
  *(this + 4) = 0;
}


// CDOTAClientHardwareSpecs::~CDOTAClientHardwareSpecs  (line 1102, @0x0000000001b561e0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTAClientHardwareSpecs::~CDOTAClientHardwareSpecs(CDOTAClientHardwareSpecs *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7E370;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTAClientHardwareSpecs::~CDOTAClientHardwareSpecs  (line 1102, @0x0000000001b56210, libserver.so)  // inlines: ~CDOTAClientHardwareSpecs
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTAClientHardwareSpecs::~CDOTAClientHardwareSpecs(CDOTAClientHardwareSpecs *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7E370;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTAClientHardwareSpecs::SharedDtor  (line 1107, @0x0000000001b59360, libserver.so)
void __fastcall CDOTAClientHardwareSpecs::SharedDtor(CDOTAClientHardwareSpecs *const this)
{
  ;
}


// CDOTAClientHardwareSpecs::SetCachedSize  (line 1112, @0x0000000001b56000, libserver.so)
void __fastcall CDOTAClientHardwareSpecs::SetCachedSize(const CDOTAClientHardwareSpecs *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAClientHardwareSpecs::descriptor  (line 1117, @0x0000000001b59370, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAClientHardwareSpecs::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_;
}


// CDOTAClientHardwareSpecs::default_instance  (line 1122, @0x0000000001b5b410, libserver.so)
// calls: protobuf_AddDesc_dota_5fshared_5fenums_2eproto
// globals: CDOTAClientHardwareSpecs::default_instance_
const CDOTAClientHardwareSpecs *__cdecl CDOTAClientHardwareSpecs::default_instance()
{
  const CDOTAClientHardwareSpecs *result; // rax

  result = CDOTAClientHardwareSpecs::default_instance_;
  if ( CDOTAClientHardwareSpecs::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    return CDOTAClientHardwareSpecs::default_instance_;
  }
  return result;
}


// CDOTAClientHardwareSpecs::New  (line 1129, @0x0000000001b59320, libserver.so)
// calls: operator new, CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs, operator delete, _Unwind_Resume
CDOTAClientHardwareSpecs *__fastcall CDOTAClientHardwareSpecs::New(const CDOTAClientHardwareSpecs *const this)
{
  CDOTAClientHardwareSpecs *v1; // rbx

  v1 = operator new(0x38u);
  CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs(v1);
  return v1;
}


// CDOTAClientHardwareSpecs::Clear  (line 1133, @0x0000000001b562c0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTAClientHardwareSpecs::Clear(CDOTAClientHardwareSpecs *const this)
{
  bool v1; // zf
  google::protobuf::UnknownFieldSet *v2; // rdi

  if ( (*(this + 16) & 0x3F) != 0 )
  {
    *(this + 3) = 0;
    *(this + 4) = 0;
    *(this + 5) = 0;
    *(this + 6) = 0;
  }
  v1 = *(this + 1) == 0;
  *(this + 4) = 0;
  v2 = (this + 8);
  if ( !v1 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTAClientHardwareSpecs::MergePartialFromCodedStream  (line 1155, @0x0000000001b57cb0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian64, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)4u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)6u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, memcpy, set_has_cpu_cycles_per_second, set_has_is_64_bit_os, set_has_logical_processors, set_has_prefer_not_host, set_has_total_physical_memory, set_has_upload_measurement
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// globals: jpt_1B57D20
bool __fastcall CDOTAClientHardwareSpecs::MergePartialFromCodedStream(
        CDOTAClientHardwareSpecs *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned __int64 *v4; // r13
  unsigned int v6; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *i; // rax
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v10; // rdx
  const google::protobuf::uint8 *v11; // rdx
  const google::protobuf::uint8 *v12; // rax
  int v13; // eax
  const google::protobuf::uint8 *v14; // rdx
  unsigned __int64 v15; // rax
  const google::protobuf::uint8 *v16; // rdx
  __int64 v17; // rax
  const google::protobuf::uint8 *v18; // rdx
  bool result; // al
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // [rsp+8h] [rbp-48h]
  unsigned __int64 v22[7]; // [rsp+18h] [rbp-38h] BYREF

  v2 = (this + 48);
  v4 = (this + 32);
  v6 = this + 8;
  v21 = (this + 48);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( buffer < i )
    {
      TagFallback = *buffer;
      if ( TagFallback <= 0 )
        break;
      input->last_tag_ = TagFallback;
      input->buffer_ = buffer + 1;
LABEL_5:
      switch ( TagFallback >> 3 )
      {
        case 1u:
          if ( TagFallback != 8 )
            goto LABEL_7;
          v12 = input->buffer_;
          if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 10) == 0 )
              return 0;
          }
          else
          {
            *(this + 10) = v13;
            ++input->buffer_;
          }
          *(this + 4) |= 1u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 17 )
            continue;
          v10 = buffer + 1;
          input->buffer_ = v10;
parse_cpu_cycles_per_second:
          if ( i - v10 <= 7 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, this + 3) == 0 )
              return 0;
          }
          else
          {
            *(this + 3) = *v10;
            input->buffer_ += 8;
          }
          *(this + 4) |= 2u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 25 )
            continue;
          v11 = buffer + 1;
          input->buffer_ = v11;
parse_total_physical_memory:
          if ( i - v11 <= 7 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, v4) == 0 )
              return 0;
          }
          else
          {
            *v4 = *v11;
            input->buffer_ += 8;
          }
          *(this + 4) |= 4u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer < i && *buffer == 32 )
          {
            v14 = buffer + 1;
            input->buffer_ = v14;
parse_is_64_bit_os:
            if ( i <= v14 || ((v15 = *v14) & 0x80u) != 0LL )
            {
              result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v22);
              if ( !result )
                return result;
              v15 = v22[0];
            }
            else
            {
              input->buffer_ = v14 + 1;
            }
            *(this + 44) = v15 != 0;
            *(this + 4) |= 8u;
            buffer = input->buffer_;
            i = input->buffer_end_;
            if ( buffer < i && *buffer == 40 )
            {
              v16 = buffer + 1;
              input->buffer_ = v16;
parse_upload_measurement:
              if ( i <= v16 || ((v17 = *v16) & 0x80u) != 0LL )
              {
                if ( google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v21) == 0 )
                  return 0;
              }
              else
              {
                *(this + 6) = v17;
                ++input->buffer_;
              }
              *(this + 4) |= 0x10u;
              buffer = input->buffer_;
              i = input->buffer_end_;
              if ( buffer < i && *buffer == 48 )
              {
                v18 = buffer + 1;
                input->buffer_ = v18;
parse_prefer_not_host:
                if ( v18 >= i || ((v20 = *v18) & 0x80u) != 0LL )
                {
                  result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v22);
                  if ( !result )
                    return result;
                  v20 = v22[0];
                }
                else
                {
                  input->buffer_ = v18 + 1;
                }
                *(this + 45) = v20 != 0;
                *(this + 4) |= 0x20u;
                buffer = input->buffer_;
                i = input->buffer_end_;
                if ( buffer == i )
                {
                  if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
                  {
                    input->last_tag_ = 0;
                    input->legitimate_message_end_ = 1;
                    return 1;
                  }
                  i = input->buffer_;
                }
              }
            }
          }
          break;
        case 2u:
          if ( TagFallback != 17 )
            goto LABEL_7;
          v10 = input->buffer_;
          i = input->buffer_end_;
          goto parse_cpu_cycles_per_second;
        case 3u:
          if ( TagFallback != 25 )
            goto LABEL_7;
          v11 = input->buffer_;
          i = input->buffer_end_;
          goto parse_total_physical_memory;
        case 4u:
          if ( TagFallback != 32 )
            goto LABEL_7;
          v14 = input->buffer_;
          i = input->buffer_end_;
          goto parse_is_64_bit_os;
        case 5u:
          if ( TagFallback != 40 )
            goto LABEL_7;
          v16 = input->buffer_;
          i = input->buffer_end_;
          goto parse_upload_measurement;
        case 6u:
          if ( TagFallback != 48 )
            goto LABEL_7;
          v18 = input->buffer_;
          i = input->buffer_end_;
          goto parse_prefer_not_host;
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
    if ( google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v6, v2) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CDOTAClientHardwareSpecs::SerializeWithCachedSizes  (line 1276, @0x0000000001b564d0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTAClientHardwareSpecs::SerializeWithCachedSizes(
        const CDOTAClientHardwareSpecs *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 10), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteFixed64(&loc_2, *(this + 3), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  google::protobuf::internal::WireFormatLite::WriteFixed64(&loc_2 + 1, *(this + 4), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 2, *(this + 44), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_7;
LABEL_15:
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_6, *(this + 45), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_8;
  }
LABEL_14:
  google::protobuf::internal::WireFormatLite::WriteUInt64(&loc_2 + 3, *(this + 6), output, v3);
  if ( (*(this + 4) & 0x20) != 0 )
    goto LABEL_15;
LABEL_7:
  v7 = *(this + 1);
  if ( v7 == 0 )
    return;
LABEL_8:
  if ( v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAClientHardwareSpecs::SerializeWithCachedSizesToArray  (line 1316, @0x0000000001b571f0, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteFixed64NoTagToArray, WriteFixed64ToArray, WriteLittleEndian64ToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteUInt64NoTagToArray, WriteUInt64ToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CDOTAClientHardwareSpecs::SerializeWithCachedSizesToArray(
        const CDOTAClientHardwareSpecs *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  google::protobuf::uint8 v8; // al
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::uint8 *v10; // rsi
  google::protobuf::uint8 v11; // al
  __int64 v12; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 10);
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
    *target = 17;
    target += 9;
    *(target - 1) = v6;
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v7 = *(this + 4);
    *target = 25;
    target += 9;
    *(target - 1) = v7;
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v8 = *(this + 44);
    *target = 32;
    target += 2;
    *(target - 1) = v8;
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v9 = *(this + 6);
    v10 = target + 1;
    *(v10 - 1) = 40;
    target = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v9, v10, v2);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v11 = *(this + 45);
    target += 2;
    *(target - 2) = 48;
    *(target - 1) = v11;
  }
  v12 = *(this + 1);
  if ( v12 == 0 || *(v12 + 8) == *v12 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v12);
}


// CDOTAClientHardwareSpecs::ByteSize  (line 1357, @0x0000000001b567b0, libserver.so)  // inlines: UInt32Size, UInt64Size, VarintSize32, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize64(ulong), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CDOTAClientHardwareSpecs::ByteSize(const CDOTAClientHardwareSpecs *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  _QWORD *v7; // rax
  int v9; // eax
  int v10; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    LOBYTE(v5) = *(this + 4);
    if ( (v4 & 1) != 0 )
    {
      v6 = *(this + 10);
      LOBYTE(v3) = 2;
      if ( v6 > 0x7F )
      {
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v3 = v10 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
      v3 += 9;
    if ( (v5 & 4) != 0 )
      v3 += 9;
    if ( (v5 & 8) != 0 )
      v3 += 2;
    if ( (v5 & 0x10) != 0 )
    {
      v9 = google::protobuf::io::CodedOutputStream::VarintSize64(*(this + 6), v1);
      v5 = *(this + 4);
      v3 += v9 + 1;
    }
    if ( (v5 & 0x20) != 0 )
      v3 += 2;
  }
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTAClientHardwareSpecs::MergeFrom  (line 1407, @0x0000000001b595a0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAClientHardwareSpecs*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAClientHardwareSpecs::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAClientHardwareSpecs
void __fastcall CDOTAClientHardwareSpecs::MergeFrom(
        CDOTAClientHardwareSpecs *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAClientHardwareSpecs *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      1408);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTAClientHardwareSpecs, 0)) != 0 )
  {
    CDOTAClientHardwareSpecs::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAClientHardwareSpecs::MergeFrom  (line 1419, @0x0000000001b59400, libserver.so)  // inlines: set_cpu_cycles_per_second, set_has_cpu_cycles_per_second, set_has_is_64_bit_os, set_has_logical_processors, set_has_prefer_not_host, set_has_total_physical_memory, set_has_upload_measurement, set_is_64_bit_os, set_logical_processors, set_prefer_not_host, set_total_physical_memory, set_upload_measurement
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTAClientHardwareSpecs::CDOTAClientHardwareSpecs, CDOTAClientHardwareSpecs::MergeFrom, CDOTAClientHardwareSpecs::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTAClientHardwareSpecs::MergeFrom(
        CDOTAClientHardwareSpecs *const this,
        const CDOTAClientHardwareSpecs *const from)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  char v12; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v13; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v13,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      1420);
    v11 = google::protobuf::internal::LogMessage::operator<<(&v13, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v12, v11);
    google::protobuf::internal::LogMessage::~LogMessage(&v13);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = *(from + 10);
      *(this + 4) |= 1u;
      *(this + 10) = v5;
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
      v7 = *(from + 4);
      *(this + 4) |= 4u;
      *(this + 4) = v7;
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v8 = *(from + 44);
      *(this + 4) |= 8u;
      *(this + 44) = v8;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v9 = *(from + 6);
      *(this + 4) |= 0x10u;
      *(this + 6) = v9;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x20) != 0 )
    {
      v10 = *(from + 45);
      *(this + 4) |= 0x20u;
      *(this + 45) = v10;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAClientHardwareSpecs::CopyFrom  (line 1444, @0x0000000001b56010, libserver.so)
void __fastcall CDOTAClientHardwareSpecs::CopyFrom(
        CDOTAClientHardwareSpecs *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAClientHardwareSpecs::CopyFrom  (line 1450, @0x0000000001b59680, libserver.so)
// calls: CDOTAClientHardwareSpecs::MergeFrom
void __fastcall CDOTAClientHardwareSpecs::CopyFrom(
        CDOTAClientHardwareSpecs *const this,
        const CDOTAClientHardwareSpecs *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAClientHardwareSpecs::MergeFrom(this, from);
  }
}


// CDOTAClientHardwareSpecs::IsInitialized  (line 1456, @0x0000000001b56050, libserver.so)
bool __fastcall CDOTAClientHardwareSpecs::IsInitialized(const CDOTAClientHardwareSpecs *const this)
{
  return 1;
}


// CDOTAClientHardwareSpecs::Swap  (line 1461, @0x0000000001b596c0, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<long unsigned int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAClientHardwareSpecs::Swap(CDOTAClientHardwareSpecs *const this, CDOTAClientHardwareSpecs *other)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( other != this )
  {
    v2 = *(this + 10);
    *(this + 10) = *(other + 10);
    *(other + 10) = v2;
    v3 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v3;
    v4 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v4;
    LOBYTE(v4) = *(this + 44);
    *(this + 44) = *(other + 44);
    *(other + 44) = v4;
    v5 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v5;
    LOBYTE(v5) = *(this + 45);
    *(this + 45) = *(other + 45);
    *(other + 45) = v5;
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


// CDOTAClientHardwareSpecs::GetMetadata  (line 1475, @0x0000000001b57840, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_, `anonymous namespace'::CDOTAClientHardwareSpecs_reflection_
google::protobuf::Metadata __fastcall CDOTAClientHardwareSpecs::GetMetadata(const CDOTAClientHardwareSpecs *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAClientHardwareSpecs_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAClientHardwareSpecs_reflection_;
  return result;
}


// CDOTASaveGame_Player::CDOTASaveGame_Player  (line 1492, @0x0000000001b59850, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTASaveGame_Player::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTASaveGame_Player::New, CDOTASaveGame::MergePartialFromCodedStream, protobuf_AddDesc_dota_5fshared_5fenums_2eproto, CDOTASaveGame::MergeFrom, CDOTALobby::ParseSaveGame
void __fastcall CDOTASaveGame_Player::CDOTASaveGame_Player(CDOTASaveGame_Player *const this)
{
  *this = off_3F7E430;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTASaveGame_Player::SharedCtor(this);
}


// CDOTASaveGame_Player::InitAsDefaultInstance  (line 1498, @0x0000000001b59750, libserver.so)
void __fastcall CDOTASaveGame_Player::InitAsDefaultInstance(CDOTASaveGame_Player *const this)
{
  ;
}


// CDOTASaveGame_Player::CDOTASaveGame_Player  (line 1501, @0x0000000001b59ba0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTASaveGame_Player::SharedCtor, CDOTASaveGame_Player::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTASaveGame_Player::CDOTASaveGame_Player(
        CDOTASaveGame_Player *const this,
        const CDOTASaveGame_Player *const from)
{
  *this = off_3F7E430;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTASaveGame_Player::SharedCtor(this);
  CDOTASaveGame_Player::MergeFrom(this, from);
}


// CDOTASaveGame_Player::SharedCtor  (line 1508, @0x0000000001b59760, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTASaveGame_Player::CDOTASaveGame_Player
void __fastcall CDOTASaveGame_Player::SharedCtor(CDOTASaveGame_Player *const this)
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
  *(this + 10) = 0;
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


// CDOTASaveGame_Player::~CDOTASaveGame_Player  (line 1517, @0x0000000001b599b0, libserver.so)
// calls: CDOTASaveGame_Player::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTASaveGame_Player::~CDOTASaveGame_Player
void __fastcall CDOTASaveGame_Player::~CDOTASaveGame_Player(CDOTASaveGame_Player *const this)
{
  *this = off_3F7E430;
  CDOTASaveGame_Player::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTASaveGame_Player::~CDOTASaveGame_Player  (line 1517, @0x0000000001b599f0, libserver.so)
// calls: CDOTASaveGame_Player::~CDOTASaveGame_Player, operator delete
void __fastcall CDOTASaveGame_Player::~CDOTASaveGame_Player(CDOTASaveGame_Player *const this)
{
  CDOTASaveGame_Player::~CDOTASaveGame_Player(this);
  operator delete(this);
}


// CDOTASaveGame_Player::SharedDtor  (line 1522, @0x0000000001b598f0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTASaveGame_Player::~CDOTASaveGame_Player
void __fastcall CDOTASaveGame_Player::SharedDtor(CDOTASaveGame_Player *const this)
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


// CDOTASaveGame_Player::SetCachedSize  (line 1529, @0x0000000001b56060, libserver.so)
void __fastcall CDOTASaveGame_Player::SetCachedSize(const CDOTASaveGame_Player *const this, int size)
{
  *(this + 5) = size;
}


// CDOTASaveGame_Player::descriptor  (line 1534, @0x0000000001b59a10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTASaveGame_Player_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTASaveGame_Player::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTASaveGame_Player_descriptor_;
}


// CDOTASaveGame_Player::default_instance  (line 1539, @0x0000000001b5b440, libserver.so)
// calls: protobuf_AddDesc_dota_5fshared_5fenums_2eproto
// globals: CDOTASaveGame_Player::default_instance_
const CDOTASaveGame_Player *__cdecl CDOTASaveGame_Player::default_instance()
{
  const CDOTASaveGame_Player *result; // rax

  result = CDOTASaveGame_Player::default_instance_;
  if ( CDOTASaveGame_Player::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    return CDOTASaveGame_Player::default_instance_;
  }
  return result;
}


// CDOTASaveGame_Player::New  (line 1546, @0x0000000001b598b0, libserver.so)
// calls: operator new, CDOTASaveGame_Player::CDOTASaveGame_Player, operator delete, _Unwind_Resume
CDOTASaveGame_Player *__fastcall CDOTASaveGame_Player::New(const CDOTASaveGame_Player *const this)
{
  CDOTASaveGame_Player *v1; // rbx

  v1 = operator new(0x30u);
  CDOTASaveGame_Player::CDOTASaveGame_Player(v1);
  return v1;
}


// CDOTASaveGame_Player::Clear  (line 1550, @0x0000000001b56860, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDOTASaveGame_Player::Clear(CDOTASaveGame_Player *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( (v2 & 7) != 0 )
  {
    *(this + 10) = 0;
    if ( (v2 & 2) == 0 )
    {
      if ( (v2 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_7;
    }
    std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
    if ( (*(this + 4) & 4) != 0 )
LABEL_7:
      std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
  }
LABEL_4:
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTASaveGame_Player::MergePartialFromCodedStream  (line 1564, @0x0000000001b57a90, libserver.so)  // inlines: Advance, DOTA_GC_TEAM_IsValid, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)14u>, ReadTagWithCutoff, ReadVarint32, mutable_hero, mutable_name, set_has_hero, set_has_name, set_has_team, set_team
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::UnknownFieldSet::AddVarint(int,ulong), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDOTASaveGame::MergePartialFromCodedStream
bool __fastcall CDOTASaveGame_Player::MergePartialFromCodedStream(
        CDOTASaveGame_Player *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v3; // r12
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  unsigned __int8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  std::string *v9; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  google::protobuf::uint8 v13; // dl
  unsigned int v14; // eax
  unsigned int v15[9]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = (this + 8);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
          if ( google::protobuf::internal::WireFormat::SkipField(input, v8, v3, buffer_end) == 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer_end > buffer )
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
      if ( v9 == 2 )
      {
        if ( v8 != 18 )
          goto handle_unusual;
        goto parse_name;
      }
      if ( v9 != 3 )
        break;
      if ( v8 != 26 )
        goto handle_unusual;
parse_hero:
      *(this + 4) |= 4u;
      result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), v9);
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
    if ( v9 != 1 || v8 != 8 )
      break;
    v12 = input->buffer_;
    if ( v12 >= input->buffer_end_ || (v13 = *v12, *v12 < 0) )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v15);
      if ( !result )
        return result;
      v14 = v15[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
      v14 = v13;
    }
    if ( v14 > 5 )
    {
      google::protobuf::UnknownFieldSet::AddVarint(v3, 1, v14);
    }
    else
    {
      *(this + 4) |= 1u;
      *(this + 10) = v14;
    }
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      v9 = (buffer + 1);
      input->buffer_ = v9;
parse_name:
      *(this + 4) |= 2u;
      if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v9) == 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 26 )
      {
        v9 = (buffer + 1);
        input->buffer_ = v9;
        goto parse_hero;
      }
    }
  }
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTASaveGame_Player::SerializeWithCachedSizes  (line 1649, @0x0000000001b568f0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTASaveGame_Player::SerializeWithCachedSizes(
        const CDOTASaveGame_Player *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteEnum(&loc_0 + 1, *(this + 10), output, v3);
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
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2, *(this + 3), output, v3);
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


// CDOTASaveGame_Player::SerializeWithCachedSizesToArray  (line 1685, @0x0000000001b56e90, libserver.so)  // inlines: WriteEnumNoTagToArray, WriteEnumToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTASaveGame::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTASaveGame_Player::SerializeWithCachedSizesToArray(
        const CDOTASaveGame_Player *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  unsigned __int8 *v8; // rdx
  google::protobuf::io::CodedOutputStream *v9; // rdi
  __int64 v10; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 10);
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
    *result = 18;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v7, (result + 1), v4);
    LODWORD(v4) = *(this + 4);
  }
  v8 = (v4 & 4);
  if ( v8 != 0 )
  {
    v9 = *(this + 4);
    *result = 26;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v9, (result + 1), v8);
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v10);
  return result;
}


// CDOTASaveGame_Player::ByteSize  (line 1724, @0x0000000001b56fb0, libserver.so)  // inlines: EnumSize, StringSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTASaveGame::ByteSize
int __fastcall CDOTASaveGame_Player::ByteSize(const CDOTASaveGame_Player *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  _QWORD *v10; // r13
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // ecx
  _QWORD *v14; // r13
  google::protobuf::io::CodedOutputStream *v15; // rdi
  int v16; // eax
  int v17; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_8;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = *(this + 10);
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
  if ( (v5 & 2) == 0 )
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
  v10 = *(this + 3);
  v11 = *(*v10 - 24LL);
  v12 = 1;
  v13 = v11;
  if ( v11 > 0x7F )
  {
    v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
    v13 = *(*v10 - 24LL);
    v5 = *(this + 4);
  }
  v3 += v12 + v13 + 1;
  if ( (v5 & 4) != 0 )
  {
LABEL_15:
    v14 = *(this + 4);
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
LABEL_8:
  v8 = *(this + 1);
  if ( v8 != 0 && *(v8 + 8) != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v8);
  *(this + 5) = v3;
  return v3;
}


// CDOTASaveGame_Player::MergeFrom  (line 1760, @0x0000000001b59c10, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTASaveGame_Player*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTASaveGame_Player::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTASaveGame_Player
void __fastcall CDOTASaveGame_Player::MergeFrom(
        CDOTASaveGame_Player *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTASaveGame_Player *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      1761);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTASaveGame_Player, 0)) != 0 )
  {
    CDOTASaveGame_Player::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTASaveGame_Player::MergeFrom  (line 1772, @0x0000000001b59aa0, libserver.so)  // inlines: set_has_hero, set_has_name, set_has_team, set_hero, set_name, set_team
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTASaveGame_Player::CDOTASaveGame_Player, CDOTASaveGame_Player::MergeFrom, CDOTASaveGame_Player::CopyFrom, CDOTASaveGame::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTASaveGame_Player::MergeFrom(
        CDOTASaveGame_Player *const this,
        const CDOTASaveGame_Player *const from)
{
  int v4; // eax
  int v5; // eax
  const std::string *v6; // rsi
  std::string *v7; // rdi
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
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      1773);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = *(from + 10);
      *(this + 4) |= 1u;
      *(this + 10) = v5;
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      v8 = *(from + 3);
      v9 = *(this + 3);
      *(this + 4) |= 2u;
      std::string::assign(v9, v8);
      if ( (*(from + 4) & 4) == 0 )
        goto LABEL_8;
    }
    else if ( (v4 & 4) == 0 )
    {
      goto LABEL_8;
    }
    v6 = *(from + 4);
    v7 = *(this + 4);
    *(this + 4) |= 4u;
    std::string::assign(v7, v6);
  }
LABEL_8:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTASaveGame_Player::CopyFrom  (line 1788, @0x0000000001b56070, libserver.so)
void __fastcall CDOTASaveGame_Player::CopyFrom(
        CDOTASaveGame_Player *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTASaveGame_Player::CopyFrom  (line 1794, @0x0000000001b59cf0, libserver.so)
// calls: CDOTASaveGame_Player::MergeFrom
void __fastcall CDOTASaveGame_Player::CopyFrom(
        CDOTASaveGame_Player *const this,
        const CDOTASaveGame_Player *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTASaveGame_Player::MergeFrom(this, from);
  }
}


// CDOTASaveGame_Player::IsInitialized  (line 1800, @0x0000000001b560b0, libserver.so)
bool __fastcall CDOTASaveGame_Player::IsInitialized(const CDOTASaveGame_Player *const this)
{
  return 1;
}


// CDOTASaveGame_Player::Swap  (line 1805, @0x0000000001b59d30, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTASaveGame_Player::Swap(CDOTASaveGame_Player *const this, CDOTASaveGame_Player *other)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( other != this )
  {
    v2 = *(this + 10);
    *(this + 10) = *(other + 10);
    *(other + 10) = v2;
    v3 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v3;
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


// CDOTASaveGame_Player::GetMetadata  (line 1816, @0x0000000001b575c0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTASaveGame_Player_descriptor_, `anonymous namespace'::CDOTASaveGame_Player_reflection_
google::protobuf::Metadata __fastcall CDOTASaveGame_Player::GetMetadata(const CDOTASaveGame_Player *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTASaveGame_Player_descriptor_;
  result.reflection = `anonymous namespace'::CDOTASaveGame_Player_reflection_;
  return result;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions  (line 1832, @0x0000000001b59d90, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTASaveGame_SaveInstance_PlayerPositions::New, CDOTASaveGame_SaveInstance::MergePartialFromCodedStream, CDOTASaveGame_SaveInstance::MergeFrom, protobuf_AddDesc_dota_5fshared_5fenums_2eproto, CDOTALobby::ParseSaveGameInstance
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  *this = off_3F7E4F0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::InitAsDefaultInstance  (line 1838, @0x0000000001b5a350, libserver.so)
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::InitAsDefaultInstance(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  ;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions  (line 1841, @0x0000000001b5a510, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        const CDOTASaveGame_SaveInstance_PlayerPositions *const from)
{
  *this = off_3F7E4F0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
  CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom(this, from);
}


// CDOTASaveGame_SaveInstance_PlayerPositions::SharedCtor  (line 1848, @0x0000000001b5a360, libserver.so)  // inlines: memset
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::SharedCtor(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::~CDOTASaveGame_SaveInstance_PlayerPositions  (line 1855, @0x0000000001b56250, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::~CDOTASaveGame_SaveInstance_PlayerPositions(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7E4F0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDOTASaveGame_SaveInstance_PlayerPositions::~CDOTASaveGame_SaveInstance_PlayerPositions  (line 1855, @0x0000000001b56280, libserver.so)  // inlines: ~CDOTASaveGame_SaveInstance_PlayerPositions
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::~CDOTASaveGame_SaveInstance_PlayerPositions(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7E4F0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDOTASaveGame_SaveInstance_PlayerPositions::SharedDtor  (line 1860, @0x0000000001b5a390, libserver.so)
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::SharedDtor(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  ;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::SetCachedSize  (line 1865, @0x0000000001b560c0, libserver.so)
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::SetCachedSize(
        const CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        int size)
{
  *(this + 5) = size;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::descriptor  (line 1870, @0x0000000001b5a3a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTASaveGame_SaveInstance_PlayerPositions::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_descriptor_;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::default_instance  (line 1875, @0x0000000001b5b470, libserver.so)
// calls: protobuf_AddDesc_dota_5fshared_5fenums_2eproto
// globals: CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_
const CDOTASaveGame_SaveInstance_PlayerPositions *__cdecl CDOTASaveGame_SaveInstance_PlayerPositions::default_instance()
{
  const CDOTASaveGame_SaveInstance_PlayerPositions *result; // rax

  result = CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_;
  if ( CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    return CDOTASaveGame_SaveInstance_PlayerPositions::default_instance_;
  }
  return result;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::New  (line 1882, @0x0000000001b59df0, libserver.so)
// calls: operator new, CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions, operator delete, _Unwind_Resume
CDOTASaveGame_SaveInstance_PlayerPositions *__fastcall CDOTASaveGame_SaveInstance_PlayerPositions::New(
        const CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  CDOTASaveGame_SaveInstance_PlayerPositions *v1; // rbx

  v1 = operator new(0x20u);
  CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions(v1);
  return v1;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::Clear  (line 1886, @0x0000000001b56320, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::Clear(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDOTASaveGame_SaveInstance_PlayerPositions::MergePartialFromCodedStream  (line 1906, @0x0000000001b578e0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadTagWithCutoff, memcpy, set_has_x, set_has_y
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// callers: CDOTASaveGame_SaveInstance::MergePartialFromCodedStream
bool __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::MergePartialFromCodedStream(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this,
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
  const google::protobuf::uint8 *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16[9]; // [rsp+Ch] [rbp-24h] BYREF

  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
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
        if ( input->buffer_end_ > buffer )
          goto LABEL_3;
      }
    }
    else
    {
      v9 = v8;
      input->last_tag_ = v8;
      input->buffer_ = buffer + 1;
    }
    if ( v9 >> 3 != 1 )
      break;
    if ( v9 != 13 )
      goto handle_unusual;
    v12 = input->buffer_;
    if ( LODWORD(input->buffer_end_) - v12 <= 3 )
    {
      result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v16);
      if ( !result )
        return result;
      v13 = v16[0];
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
    if ( buffer < buffer_end && *buffer == 21 )
    {
      v14 = buffer + 1;
      input->buffer_ = v14;
parse_y:
      if ( buffer_end - v14 <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v16);
        if ( !result )
          return result;
        v15 = v16[0];
      }
      else
      {
        v15 = *v14;
        input->buffer_ = v14 + 4;
      }
      *(this + 4) |= 2u;
      *(this + 7) = v15;
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
  if ( v9 >> 3 == 2 && v9 == 21 )
  {
    v14 = input->buffer_;
    buffer_end = input->buffer_end_;
    goto parse_y;
  }
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::SerializeWithCachedSizes  (line 1967, @0x0000000001b56990, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::SerializeWithCachedSizes(
        const CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  int v5; // eax
  __int64 v6; // rax

  v5 = *(this + 4);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) == 0 )
      goto LABEL_3;
LABEL_7:
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2, output, *(this + 7), v2);
    v6 = *(this + 1);
    if ( v6 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(&loc_0 + 1, output, *(this + 6), v2);
  if ( (*(this + 4) & 2) != 0 )
    goto LABEL_7;
LABEL_3:
  v6 = *(this + 1);
  if ( v6 == 0 )
    return;
LABEL_4:
  if ( *(v6 + 8) != *v6 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v6);
}


// CDOTASaveGame_SaveInstance_PlayerPositions::SerializeWithCachedSizesToArray  (line 1987, @0x0000000001b56f50, libserver.so)  // inlines: WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteTagToArray, empty, memcpy
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDOTASaveGame_SaveInstance::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTASaveGame_SaveInstance_PlayerPositions::SerializeWithCachedSizesToArray(
        const CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        google::protobuf::uint8 *target)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax

  v2 = *(this + 4);
  if ( (v2 & 1) != 0 )
  {
    v3 = *(this + 6);
    *target = 13;
    target += 5;
    *(target - 1) = v3;
    v2 = *(this + 4);
  }
  if ( (v2 & 2) != 0 )
  {
    v4 = *(this + 7);
    target += 5;
    *(target - 5) = 21;
    *(target - 1) = v4;
  }
  v5 = *(this + 1);
  if ( v5 == 0 || *(v5 + 8) == *v5 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v5);
}


// CDOTASaveGame_SaveInstance_PlayerPositions::ByteSize  (line 2008, @0x0000000001b565e0, libserver.so)  // inlines: empty, has_x
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTASaveGame_SaveInstance::ByteSize
int __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::ByteSize(
        const CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = -(*(this + 4) & 1) & 5;
    if ( (v4 & 2) != 0 )
      v3 += 5;
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom  (line 2034, @0x0000000001b5a590, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTASaveGame_SaveInstance_PlayerPositions*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTASaveGame_SaveInstance_PlayerPositions
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTASaveGame_SaveInstance_PlayerPositions *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      2035);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTASaveGame_SaveInstance_PlayerPositions,
               0)) != 0 )
  {
    CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom  (line 2046, @0x0000000001b5a430, libserver.so)  // inlines: set_has_x, set_has_y, set_x, set_y
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions, CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom, CDOTASaveGame_SaveInstance_PlayerPositions::CopyFrom, CDOTASaveGame_SaveInstance::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        const CDOTASaveGame_SaveInstance_PlayerPositions *const from)
{
  int v4; // eax
  int v5; // xmm0_4
  int v6; // xmm0_4
  __int64 v7; // rax
  char v8; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      2047);
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


// CDOTASaveGame_SaveInstance_PlayerPositions::CopyFrom  (line 2059, @0x0000000001b560d0, libserver.so)
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::CopyFrom(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTASaveGame_SaveInstance_PlayerPositions::CopyFrom  (line 2065, @0x0000000001b5a670, libserver.so)
// calls: CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::CopyFrom(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        const CDOTASaveGame_SaveInstance_PlayerPositions *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom(this, from);
  }
}


// CDOTASaveGame_SaveInstance_PlayerPositions::IsInitialized  (line 2071, @0x0000000001b56110, libserver.so)
bool __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::IsInitialized(
        const CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  return 1;
}


// CDOTASaveGame_SaveInstance_PlayerPositions::Swap  (line 2076, @0x0000000001b5a6b0, libserver.so)  // inlines: Swap, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::Swap(
        CDOTASaveGame_SaveInstance_PlayerPositions *const this,
        CDOTASaveGame_SaveInstance_PlayerPositions *other)
{
  int v2; // xmm1_4
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


// CDOTASaveGame_SaveInstance_PlayerPositions::GetMetadata  (line 2086, @0x0000000001b57660, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_descriptor_, `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_reflection_
google::protobuf::Metadata __fastcall CDOTASaveGame_SaveInstance_PlayerPositions::GetMetadata(
        const CDOTASaveGame_SaveInstance_PlayerPositions *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_descriptor_;
  result.reflection = `anonymous namespace'::CDOTASaveGame_SaveInstance_PlayerPositions_reflection_;
  return result;
}


// CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance  (line 2106, @0x0000000001b5a760, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTASaveGame_SaveInstance::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDOTASaveGame_SaveInstance::New, CDOTASaveGame::MergePartialFromCodedStream, protobuf_AddDesc_dota_5fshared_5fenums_2eproto, CDOTASaveGame::MergeFrom, CDOTALobby::ParseSaveGame
void __fastcall CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance(CDOTASaveGame_SaveInstance *const this)
{
  *this = off_3F7E5B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CDOTASaveGame_SaveInstance::SharedCtor(this);
}


// CDOTASaveGame_SaveInstance::InitAsDefaultInstance  (line 2112, @0x0000000001b5a710, libserver.so)
void __fastcall CDOTASaveGame_SaveInstance::InitAsDefaultInstance(CDOTASaveGame_SaveInstance *const this)
{
  ;
}


// CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance  (line 2115, @0x0000000001b5afc0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTASaveGame_SaveInstance::SharedCtor, CDOTASaveGame_SaveInstance::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance(
        CDOTASaveGame_SaveInstance *const this,
        const CDOTASaveGame_SaveInstance *const from)
{
  *this = off_3F7E5B0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CDOTASaveGame_SaveInstance::SharedCtor(this);
  CDOTASaveGame_SaveInstance::MergeFrom(this, from);
}


// CDOTASaveGame_SaveInstance::SharedCtor  (line 2122, @0x0000000001b5a720, libserver.so)  // inlines: memset
// callers: CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance
void __fastcall CDOTASaveGame_SaveInstance::SharedCtor(CDOTASaveGame_SaveInstance *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 4) = 0;
}


// CDOTASaveGame_SaveInstance::~CDOTASaveGame_SaveInstance  (line 2132, @0x0000000001b56ce0, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTASaveGame_SaveInstance::~CDOTASaveGame_SaveInstance
void __fastcall CDOTASaveGame_SaveInstance::~CDOTASaveGame_SaveInstance(CDOTASaveGame_SaveInstance *const this)
{
  *this = off_3F7E5B0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>(
    (this + 32),
    (this + 44));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTASaveGame_SaveInstance::~CDOTASaveGame_SaveInstance  (line 2132, @0x0000000001b56d20, libserver.so)
// calls: CDOTASaveGame_SaveInstance::~CDOTASaveGame_SaveInstance, operator delete
void __fastcall CDOTASaveGame_SaveInstance::~CDOTASaveGame_SaveInstance(CDOTASaveGame_SaveInstance *const this)
{
  CDOTASaveGame_SaveInstance::~CDOTASaveGame_SaveInstance(this);
  operator delete(this);
}


// CDOTASaveGame_SaveInstance::SharedDtor  (line 2137, @0x0000000001b5acf0, libserver.so)
void __fastcall CDOTASaveGame_SaveInstance::SharedDtor(CDOTASaveGame_SaveInstance *const this)
{
  ;
}


// CDOTASaveGame_SaveInstance::SetCachedSize  (line 2142, @0x0000000001b56120, libserver.so)
void __fastcall CDOTASaveGame_SaveInstance::SetCachedSize(const CDOTASaveGame_SaveInstance *const this, int size)
{
  *(this + 5) = size;
}


// CDOTASaveGame_SaveInstance::descriptor  (line 2147, @0x0000000001b5ad00, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTASaveGame_SaveInstance_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTASaveGame_SaveInstance::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTASaveGame_SaveInstance_descriptor_;
}


// CDOTASaveGame_SaveInstance::default_instance  (line 2152, @0x0000000001b5b4a0, libserver.so)
// calls: protobuf_AddDesc_dota_5fshared_5fenums_2eproto
// globals: CDOTASaveGame_SaveInstance::default_instance_
const CDOTASaveGame_SaveInstance *__cdecl CDOTASaveGame_SaveInstance::default_instance()
{
  const CDOTASaveGame_SaveInstance *result; // rax

  result = CDOTASaveGame_SaveInstance::default_instance_;
  if ( CDOTASaveGame_SaveInstance::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    return CDOTASaveGame_SaveInstance::default_instance_;
  }
  return result;
}


// CDOTASaveGame_SaveInstance::New  (line 2159, @0x0000000001b5a7c0, libserver.so)
// calls: operator new, CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance, operator delete, _Unwind_Resume
CDOTASaveGame_SaveInstance *__fastcall CDOTASaveGame_SaveInstance::New(const CDOTASaveGame_SaveInstance *const this)
{
  CDOTASaveGame_SaveInstance *v1; // rbx

  v1 = operator new(0x48u);
  CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance(v1);
  return v1;
}


// CDOTASaveGame_SaveInstance::Clear  (line 2163, @0x0000000001b56360, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDOTASaveGame_SaveInstance::Clear(CDOTASaveGame_SaveInstance *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  __int64 v4; // rdi
  bool v5; // zf

  if ( (*(this + 16) & 0x37) != 0 )
  {
    *(this + 3) = 0;
    *(this + 7) = 0;
    *(this + 16) = 0;
  }
  v2 = 0;
  v3 = 0;
  while ( v3 < *(this + 10) )
  {
    ++v3;
    v4 = *(*(this + 4) + v2);
    v2 += 8;
    (*(*v4 + 32LL))(v4);
  }
  v5 = *(this + 1) == 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
  if ( !v5 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTASaveGame_SaveInstance::MergePartialFromCodedStream  (line 2187, @0x0000000001b59e30, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CDOTASaveGame_SaveInstance_PlayerPositions>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, add_player_positions, set_has_game_time, set_has_save_id, set_has_save_time, set_has_team1_score, set_has_team2_score
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), operator new, CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions, google::protobuf::io::CodedInputStream::PushLimit(int), CDOTASaveGame_SaveInstance_PlayerPositions::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDOTASaveGame::MergePartialFromCodedStream
// globals: jpt_1B59EA8
bool __fastcall CDOTASaveGame_SaveInstance::MergePartialFromCodedStream(
        CDOTASaveGame_SaveInstance *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  const google::protobuf::uint8 *buffer; // rax
  unsigned __int64 current_limit; // rcx
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  const google::protobuf::uint8 *v9; // rax
  int v10; // eax
  const google::protobuf::uint8 *v11; // rax
  const google::protobuf::uint8 *v12; // rax
  int v13; // eax
  int v14; // esi
  __int64 v15; // rax
  CDOTASaveGame_SaveInstance_PlayerPositions *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  const google::protobuf::uint8 *v19; // rax
  int v20; // eax
  bool v21; // cc
  int v23; // eax
  const google::protobuf::uint8 *v24; // rax
  int v25; // eax
  const google::protobuf::uint8 *v26; // rax
  int recursion_depth; // eax
  __int64 v28; // rdx
  google::protobuf::uint32 TagFallback; // eax
  int v30; // eax
  unsigned int *v31; // [rsp+0h] [rbp-60h]
  unsigned int *v32; // [rsp+8h] [rbp-58h]
  int v33; // [rsp+1Ch] [rbp-44h]
  unsigned int v34[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v32 = (this + 64);
  buffer = input->buffer_;
  current_limit = this + 60;
  buffer_end = input->buffer_end_;
  v31 = (this + 60);
  while ( 1 )
  {
LABEL_2:
    if ( buffer < buffer_end )
    {
      v8 = *buffer;
      if ( v8 > 0 )
      {
        input->last_tag_ = v8;
        input->buffer_ = buffer + 1;
        break;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v8 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      break;
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
  switch ( v8 >> 3 )
  {
    case 2u:
      if ( v8 != 16 )
        goto handle_unusual;
      v12 = input->buffer_;
      if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 6) == 0 )
          return 0;
      }
      else
      {
        *(this + 6) = v13;
        ++input->buffer_;
      }
      *(this + 4) |= 1u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v9 = buffer + 1;
        input->buffer_ = v9;
        goto parse_team1_score;
      }
      goto LABEL_2;
    case 3u:
      if ( v8 != 24 )
        goto handle_unusual;
      v9 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_team1_score:
      if ( v9 >= buffer_end || ((v10 = *v9) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 7) == 0 )
          return 0;
      }
      else
      {
        *(this + 7) = v10;
        ++input->buffer_;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer >= buffer_end || *buffer != 32 )
        goto LABEL_2;
      v11 = buffer + 1;
      input->buffer_ = v11;
parse_team2_score:
      if ( v11 >= buffer_end || ((v23 = *v11) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 14) == 0 )
          return 0;
      }
      else
      {
        *(this + 14) = v23;
        ++input->buffer_;
      }
      *(this + 4) |= 4u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer >= buffer_end || *buffer != 42 )
        goto LABEL_2;
      input->buffer_ = buffer + 1;
LABEL_27:
      v14 = *(this + 11);
      v15 = *(this + 10);
      if ( v15 >= v14 )
      {
LABEL_28:
        if ( v14 == *(this + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((this + 32), v14 + 1);
        v16 = operator new(0x20u);
        CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions(v16);
        v17 = *(this + 10);
        v18 = *(this + 4);
        ++*(this + 11);
        *(this + 10) = v17 + 1;
        *(v18 + 8 * v17) = v16;
        goto LABEL_31;
      }
      while ( 1 )
      {
        v28 = *(this + 4);
        *(this + 10) = v15 + 1;
        v16 = *(v28 + 8 * v15);
LABEL_31:
        v19 = input->buffer_;
        if ( v19 >= input->buffer_end_ || *v19 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v34) == 0 )
            return 0;
        }
        else
        {
          v34[0] = *v19;
          input->buffer_ = v19 + 1;
        }
        v20 = input->recursion_depth_ + 1;
        v21 = input->recursion_limit_ < v20;
        input->recursion_depth_ = v20;
        if ( v21 )
          return 0;
        v33 = google::protobuf::io::CodedInputStream::PushLimit(input, v34[0]);
        if ( !CDOTASaveGame_SaveInstance_PlayerPositions::MergePartialFromCodedStream(v16, input)
          || !input->legitimate_message_end_ )
        {
          return 0;
        }
        google::protobuf::io::CodedInputStream::PopLimit(input, v33);
        recursion_depth = input->recursion_depth_;
        if ( recursion_depth > 0 )
          input->recursion_depth_ = recursion_depth - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end )
          goto LABEL_2;
        current_limit = *buffer;
        if ( current_limit != 42 )
          break;
        input->buffer_ = buffer + 1;
        v15 = *(this + 10);
        v14 = *(this + 11);
        if ( v15 >= v14 )
          goto LABEL_28;
      }
      if ( current_limit != 48 )
        goto LABEL_2;
      v24 = buffer + 1;
      input->buffer_ = v24;
parse_save_id:
      if ( buffer_end <= v24 || ((v25 = *v24) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v31) == 0 )
          return 0;
      }
      else
      {
        *(this + 15) = v25;
        ++input->buffer_;
      }
      *(this + 4) |= 0x10u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer >= buffer_end || *buffer != 56 )
        goto LABEL_2;
      v26 = buffer + 1;
      input->buffer_ = v26;
parse_save_time:
      if ( v26 >= buffer_end || ((v30 = *v26) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v32) == 0 )
          return 0;
      }
      else
      {
        *(this + 16) = v30;
        ++input->buffer_;
      }
      *(this + 4) |= 0x20u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer != buffer_end )
        goto LABEL_2;
      if ( input->buffer_size_after_limit_ == 0 )
      {
        current_limit = input->current_limit_;
        if ( input->total_bytes_read_ != current_limit )
        {
          buffer_end = input->buffer_;
          goto LABEL_2;
        }
      }
      input->last_tag_ = 0;
      input->legitimate_message_end_ = 1;
      return 1;
    case 4u:
      if ( v8 != 32 )
        goto handle_unusual;
      v11 = input->buffer_;
      buffer_end = input->buffer_end_;
      goto parse_team2_score;
    case 5u:
      if ( v8 == 42 )
        goto LABEL_27;
      goto handle_unusual;
    case 6u:
      if ( v8 != 48 )
        goto handle_unusual;
      v24 = input->buffer_;
      buffer_end = input->buffer_end_;
      goto parse_save_id;
    case 7u:
      if ( v8 != 56 )
        goto handle_unusual;
      v26 = input->buffer_;
      buffer_end = input->buffer_end_;
      goto parse_save_time;
    default:
handle_unusual:
      if ( v8 != 0 )
        goto LABEL_8;
      return 1;
  }
}


// CDOTASaveGame_SaveInstance::SerializeWithCachedSizes  (line 2307, @0x0000000001b56a10, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, empty, player_positions
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTASaveGame_SaveInstance::SerializeWithCachedSizes(
        const CDOTASaveGame_SaveInstance *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  __int64 i; // rbx
  int v8; // eax
  _QWORD *v9; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 2) == 0 )
      goto LABEL_3;
LABEL_13:
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 7), output, v3);
    if ( (*(this + 4) & 4) == 0 )
      goto LABEL_4;
    goto LABEL_14;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(this + 6), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 2) != 0 )
    goto LABEL_13;
LABEL_3:
  if ( (v6 & 4) != 0 )
LABEL_14:
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 2, *(this + 14), output, v3);
LABEL_4:
  for ( i = 0; *(this + 10) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 3, *(*(this + 4) + 8 * i), output, v3);
  v8 = *(this + 4);
  if ( (v8 & 0x10) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6, *(this + 15), output, v3);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x20) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6 + 1, *(this + 16), output, v3);
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
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTASaveGame_SaveInstance::SerializeWithCachedSizesToArray  (line 2348, @0x0000000001b572e0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CDOTASaveGame_SaveInstance_PlayerPositions>, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty, player_positions
// calls: CDOTASaveGame_SaveInstance_PlayerPositions::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDOTASaveGame::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTASaveGame_SaveInstance::SerializeWithCachedSizesToArray(
        const CDOTASaveGame_SaveInstance *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  unsigned __int8 *v7; // rdx
  google::protobuf::io::CodedOutputStream *v8; // rdi
  __int64 v9; // r12
  int v10; // ebx
  google::protobuf::uint8 *v11; // rsi
  unsigned __int8 *v12; // rdx
  unsigned int *v13; // r13
  google::protobuf::io::CodedOutputStream *v14; // rdi
  unsigned __int8 *v15; // rdx
  google::protobuf::io::CodedOutputStream *v16; // rdi
  unsigned __int8 *v17; // rdx
  google::protobuf::io::CodedOutputStream *v18; // rdi
  __int64 v19; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 6);
    *target = 16;
    if ( v5 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v5, target + 1, v4);
    }
    else
    {
      target[1] = v5;
      result = target + 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v6 = *(this + 7);
    *result = 24;
    if ( v6 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v6, result + 1, v4);
    }
    else
    {
      result[1] = v6;
      result += 2;
    }
    LODWORD(v4) = *(this + 4);
  }
  v7 = (v4 & 4);
  if ( v7 != 0 )
  {
    v8 = *(this + 14);
    *result = 32;
    if ( v8 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v8, result + 1, v7);
    }
    else
    {
      result[1] = v8;
      result += 2;
    }
  }
  if ( *(this + 10) > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v12 = *(this + 4);
      v13 = *&v12[v9];
      *result = 42;
      v14 = v13[5];
      if ( v14 <= 0x7F )
      {
        result[1] = v14;
        v11 = result + 2;
      }
      else
      {
        v11 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v14, result + 1, v12);
      }
      ++v10;
      v9 += 8;
      result = CDOTASaveGame_SaveInstance_PlayerPositions::SerializeWithCachedSizesToArray(v13, v11);
    }
    while ( v10 < *(this + 10) );
  }
  v15 = *(this + 4);
  if ( (v15 & 0x10) != 0 )
  {
    v16 = *(this + 15);
    *result = 48;
    if ( v16 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v16, result + 1, v15);
    }
    else
    {
      result[1] = v16;
      result += 2;
    }
    LODWORD(v15) = *(this + 4);
  }
  v17 = (v15 & 0x20);
  if ( v17 != 0 )
  {
    v18 = *(this + 16);
    *result = 56;
    if ( v18 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v18, result + 1, v17);
    }
    else
    {
      result[1] = v18;
      result += 2;
    }
  }
  v19 = *(this + 1);
  if ( v19 != 0 && *(v19 + 8) != *v19 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v19);
  return result;
}


// CDOTASaveGame_SaveInstance::ByteSize  (line 2391, @0x0000000001b56630, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDOTASaveGame_SaveInstance_PlayerPositions>, UInt32Size, VarintSize32, empty, player_positions
// calls: CDOTASaveGame_SaveInstance_PlayerPositions::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTASaveGame::ByteSize
int __fastcall CDOTASaveGame_SaveInstance::ByteSize(const CDOTASaveGame_SaveInstance *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v2; // r15d
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
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
  int v18; // eax
  _QWORD *v19; // rax
  google::protobuf::io::CodedOutputStream *v21; // rdi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    LOBYTE(v5) = *(this + 4);
    if ( (v4 & 1) != 0 )
    {
      v6 = *(this + 6);
      LOBYTE(v2) = 2;
      if ( v6 > 0x7F )
      {
        v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v2 = v23 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v7 = *(this + 7);
      v8 = 2;
      if ( v7 > 0x7F )
      {
        v25 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
        v5 = *(this + 4);
        v8 = v25 + 1;
      }
      v2 += v8;
    }
    if ( (v5 & 4) != 0 )
    {
      v9 = *(this + 14);
      v10 = 2;
      if ( v9 > 0x7F )
      {
        v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
        v5 = *(this + 4);
        v10 = v24 + 1;
      }
      v2 += v10;
    }
    if ( (v5 & 0x10) != 0 )
    {
      v11 = *(this + 15);
      v12 = 2;
      if ( v11 > 0x7F )
      {
        v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
        v5 = *(this + 4);
        v12 = v26 + 1;
      }
      v2 += v12;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v21 = *(this + 16);
      v22 = 2;
      if ( v21 > 0x7F )
        v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v21, v1) + 1;
      v2 += v22;
    }
  }
  v13 = *(this + 10);
  v14 = v13 + v2;
  if ( v13 > 0 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      v17 = CDOTASaveGame_SaveInstance_PlayerPositions::ByteSize(*(*(this + 4) + v15));
      v18 = 1;
      if ( v17 > 0x7F )
        v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, v1);
      ++v16;
      v15 += 8;
      v14 += v18 + v17;
    }
    while ( v16 < *(this + 10) );
  }
  v19 = *(this + 1);
  if ( v19 != 0 && v19[1] != *v19 )
    v14 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v14;
  return v14;
}


// CDOTASaveGame_SaveInstance::MergeFrom  (line 2450, @0x0000000001b5b060, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTASaveGame_SaveInstance*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTASaveGame_SaveInstance::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTASaveGame_SaveInstance
void __fastcall CDOTASaveGame_SaveInstance::MergeFrom(
        CDOTASaveGame_SaveInstance *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTASaveGame_SaveInstance *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      2451);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTASaveGame_SaveInstance,
               0)) != 0 )
  {
    CDOTASaveGame_SaveInstance::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTASaveGame_SaveInstance::MergeFrom  (line 2462, @0x0000000001b5ad90, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>, New, set_game_time, set_has_game_time, set_has_save_id, set_has_save_time, set_has_team1_score, set_has_team2_score, set_save_id, set_save_time, set_team1_score, set_team2_score
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions, CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance, CDOTASaveGame_SaveInstance::MergeFrom, CDOTASaveGame_SaveInstance::CopyFrom, CDOTASaveGame::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTASaveGame_SaveInstance::MergeFrom(
        CDOTASaveGame_SaveInstance *const this,
        const CDOTASaveGame_SaveInstance *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CDOTASaveGame_SaveInstance_PlayerPositions *v6; // r15
  __int64 v7; // rax
  CDOTASaveGame_SaveInstance_PlayerPositions *v8; // rdi
  __int64 v9; // rdx
  const CDOTASaveGame_SaveInstance_PlayerPositions *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v22; // [rsp+8h] [rbp-68h]
  char v23; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v24; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v24,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      2463);
    v21 = google::protobuf::internal::LogMessage::operator<<(&v24, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v23, v21);
    google::protobuf::internal::LogMessage::~LogMessage(&v24);
  }
  v22 = (this + 32);
  if ( this + 32 == from + 32 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v24,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v20 = google::protobuf::internal::LogMessage::operator<<(&v24, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v23, v20);
    google::protobuf::internal::LogMessage::~LogMessage(&v24);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v22, *(from + 10) + *(this + 10));
  if ( *(from + 10) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v11 = *(this + 10);
      v12 = *(this + 11);
      if ( v11 >= v12 )
      {
        if ( v12 == *(this + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v22, v12 + 1);
        v6 = operator new(0x20u);
        CDOTASaveGame_SaveInstance_PlayerPositions::CDOTASaveGame_SaveInstance_PlayerPositions(v6);
        v7 = *(this + 10);
        v8 = v6;
        v9 = *(this + 4);
        ++*(this + 11);
        *(this + 10) = v7 + 1;
        *(v9 + 8 * v7) = v6;
      }
      else
      {
        v13 = *(this + 4);
        *(this + 10) = v11 + 1;
        v8 = *(v13 + 8 * v11);
      }
      ++v5;
      v10 = *(*(from + 4) + v4);
      v4 += 8;
      CDOTASaveGame_SaveInstance_PlayerPositions::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 10) );
  }
  v14 = *(from + 4);
  if ( v14 != 0 )
  {
    if ( (v14 & 1) != 0 )
    {
      v15 = *(from + 6);
      *(this + 4) |= 1u;
      *(this + 6) = v15;
      v14 = *(from + 4);
    }
    if ( (v14 & 2) != 0 )
    {
      v16 = *(from + 7);
      *(this + 4) |= 2u;
      *(this + 7) = v16;
      v14 = *(from + 4);
    }
    if ( (v14 & 4) != 0 )
    {
      v17 = *(from + 14);
      *(this + 4) |= 4u;
      *(this + 14) = v17;
      v14 = *(from + 4);
    }
    if ( (v14 & 0x10) != 0 )
    {
      v18 = *(from + 15);
      *(this + 4) |= 0x10u;
      *(this + 15) = v18;
      v14 = *(from + 4);
    }
    if ( (v14 & 0x20) != 0 )
    {
      v19 = *(from + 16);
      *(this + 4) |= 0x20u;
      *(this + 16) = v19;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTASaveGame_SaveInstance::CopyFrom  (line 2485, @0x0000000001b56130, libserver.so)
void __fastcall CDOTASaveGame_SaveInstance::CopyFrom(
        CDOTASaveGame_SaveInstance *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTASaveGame_SaveInstance::CopyFrom  (line 2491, @0x0000000001b5b140, libserver.so)
// calls: CDOTASaveGame_SaveInstance::MergeFrom
void __fastcall CDOTASaveGame_SaveInstance::CopyFrom(
        CDOTASaveGame_SaveInstance *const this,
        const CDOTASaveGame_SaveInstance *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTASaveGame_SaveInstance::MergeFrom(this, from);
  }
}


// CDOTASaveGame_SaveInstance::IsInitialized  (line 2497, @0x0000000001b56170, libserver.so)
bool __fastcall CDOTASaveGame_SaveInstance::IsInitialized(const CDOTASaveGame_SaveInstance *const this)
{
  return 1;
}


// CDOTASaveGame_SaveInstance::Swap  (line 2502, @0x0000000001b5b180, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTASaveGame_SaveInstance::Swap(
        CDOTASaveGame_SaveInstance *const this,
        CDOTASaveGame_SaveInstance *other)
{
  int v4; // eax
  char *v5; // rsi
  char *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax

  if ( other != this )
  {
    v4 = *(this + 6);
    v5 = other + 32;
    v6 = this + 32;
    *(v6 - 2) = *(v5 - 2);
    *(v5 - 2) = v4;
    v7 = *(v6 - 1);
    *(v6 - 1) = *(v5 - 1);
    *(v5 - 1) = v7;
    v8 = *(v6 + 6);
    *(v6 + 6) = *(v5 + 6);
    *(v5 + 6) = v8;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v6, v5);
    v9 = *(this + 15);
    *(this + 15) = *(other + 15);
    *(other + 15) = v9;
    v10 = *(this + 16);
    *(this + 16) = *(other + 16);
    *(other + 16) = v10;
    v11 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v11;
    v12 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v12;
    LODWORD(v12) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v12;
  }
}


// CDOTASaveGame_SaveInstance::GetMetadata  (line 2516, @0x0000000001b57700, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTASaveGame_SaveInstance_descriptor_, `anonymous namespace'::CDOTASaveGame_SaveInstance_reflection_
google::protobuf::Metadata __fastcall CDOTASaveGame_SaveInstance::GetMetadata(
        const CDOTASaveGame_SaveInstance *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTASaveGame_SaveInstance_descriptor_;
  result.reflection = `anonymous namespace'::CDOTASaveGame_SaveInstance_reflection_;
  return result;
}


// CDOTASaveGame::CDOTASaveGame  (line 2534, @0x0000000001b5b220, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: protobuf_AddDesc_dota_5fshared_5fenums_2eproto, CDOTASaveGame::New, CSODOTALobby::MergeFrom, CSODOTALobby::MergePartialFromCodedStream
void __fastcall CDOTASaveGame::CDOTASaveGame(CDOTASaveGame *const this)
{
  *this = off_3F7E670;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 7) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 20) = 0;
  *(this + 4) = 0;
}


// CDOTASaveGame::InitAsDefaultInstance  (line 2540, @0x0000000001b5bba0, libserver.so)
void __fastcall CDOTASaveGame::InitAsDefaultInstance(CDOTASaveGame *const this)
{
  ;
}


// CDOTASaveGame::CDOTASaveGame  (line 2543, @0x0000000001b5bfd0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTASaveGame::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTASaveGame::CDOTASaveGame(CDOTASaveGame *const this, const CDOTASaveGame *const from)
{
  *this = off_3F7E670;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 7) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 20) = 0;
  *(this + 4) = 0;
  CDOTASaveGame::MergeFrom(this, from);
}


// CDOTASaveGame::SharedCtor  (line 2550, @0x0000000001b5bbb0, libserver.so)  // inlines: memset
void __fastcall CDOTASaveGame::SharedCtor(CDOTASaveGame *const this)
{
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 20) = 0;
  *(this + 4) = 0;
}


// CDOTASaveGame::~CDOTASaveGame  (line 2557, @0x0000000001b56e20, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTASaveGame::~CDOTASaveGame
void __fastcall CDOTASaveGame::~CDOTASaveGame(CDOTASaveGame *const this)
{
  *this = off_3F7E670;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>(
    (this + 56),
    (this + 68));
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>(
    (this + 32),
    (this + 44));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTASaveGame::~CDOTASaveGame  (line 2557, @0x0000000001b56e70, libserver.so)
// calls: CDOTASaveGame::~CDOTASaveGame, operator delete
void __fastcall CDOTASaveGame::~CDOTASaveGame(CDOTASaveGame *const this)
{
  CDOTASaveGame::~CDOTASaveGame(this);
  operator delete(this);
}


// CDOTASaveGame::SharedDtor  (line 2562, @0x0000000001b5bbe0, libserver.so)
void __fastcall CDOTASaveGame::SharedDtor(CDOTASaveGame *const this)
{
  ;
}


// CDOTASaveGame::SetCachedSize  (line 2567, @0x0000000001b56180, libserver.so)
void __fastcall CDOTASaveGame::SetCachedSize(const CDOTASaveGame *const this, int size)
{
  *(this + 5) = size;
}


// CDOTASaveGame::descriptor  (line 2572, @0x0000000001b5bbf0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTASaveGame_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTASaveGame::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTASaveGame_descriptor_;
}


// CDOTASaveGame::default_instance  (line 2577, @0x0000000001b5bc80, libserver.so)
// calls: protobuf_AddDesc_dota_5fshared_5fenums_2eproto
// callers: CSODOTALobby::InitAsDefaultInstance, protobuf_AddDesc_dota_5fgcmessages_5fcommon_5fmatch_5fmanagement_2eproto
// globals: CDOTASaveGame::default_instance_
const CDOTASaveGame *__cdecl CDOTASaveGame::default_instance()
{
  const CDOTASaveGame *result; // rax

  result = CDOTASaveGame::default_instance_;
  if ( CDOTASaveGame::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fshared_5fenums_2eproto();
    return CDOTASaveGame::default_instance_;
  }
  return result;
}


// CDOTASaveGame::New  (line 2584, @0x0000000001b5bb60, libserver.so)
// calls: operator new, CDOTASaveGame::CDOTASaveGame, operator delete, _Unwind_Resume
CDOTASaveGame *__fastcall CDOTASaveGame::New(const CDOTASaveGame *const this)
{
  CDOTASaveGame *v1; // rbx

  v1 = operator new(0x58u);
  CDOTASaveGame::CDOTASaveGame(v1);
  return v1;
}


// CDOTASaveGame::Clear  (line 2588, @0x0000000001b56400, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, Clear<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CSODOTALobby::Clear
void __fastcall CDOTASaveGame::Clear(CDOTASaveGame *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // rdi
  bool v9; // zf

  if ( (*(this + 16) & 3) != 0 )
  {
    *(this + 3) = 0;
    *(this + 20) = 0;
  }
  v2 = 0;
  v3 = 0;
  while ( v3 < *(this + 10) )
  {
    ++v3;
    v4 = *(*(this + 4) + v2);
    v2 += 8;
    (*(*v4 + 32LL))(v4);
  }
  v5 = *(this + 16);
  v6 = 0;
  v7 = 0;
  *(this + 10) = 0;
  if ( v5 > 0 )
  {
    do
    {
      ++v7;
      v8 = *(*(this + 7) + v6);
      v6 += 8;
      (*(*v8 + 32LL))(v8);
    }
    while ( v7 < *(this + 16) );
  }
  v9 = *(this + 1) == 0;
  *(this + 16) = 0;
  *(this + 4) = 0;
  if ( !v9 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTASaveGame::MergePartialFromCodedStream  (line 2599, @0x0000000001b5a800, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CDOTASaveGame_Player>, ReadMessageNoVirtual<CDOTASaveGame_SaveInstance>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)4u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, add_players, add_save_instances, set_has_match_id, set_has_save_time
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), operator new, CDOTASaveGame_Player::CDOTASaveGame_Player, google::protobuf::io::CodedInputStream::PushLimit(int), CDOTASaveGame_Player::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance, CDOTASaveGame_SaveInstance::MergePartialFromCodedStream, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *) (14 total)
// callers: CSODOTALobby::MergePartialFromCodedStream
bool __fastcall CDOTASaveGame::MergePartialFromCodedStream(
        CDOTASaveGame *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  google::protobuf::UnknownFieldSet *v5; // rcx
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  unsigned int v9; // eax
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v12; // rax
  int v13; // eax
  CDOTASaveGame_Player *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  const google::protobuf::uint8 *v17; // rax
  int v18; // eax
  bool v19; // cc
  int recursion_depth; // eax
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // esi
  CDOTASaveGame_SaveInstance *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  const google::protobuf::uint8 *v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  const google::protobuf::uint8 *v33; // rax
  __int64 v34; // rax
  unsigned __int64 *v35; // [rsp+8h] [rbp-58h]
  google::protobuf::internal::RepeatedPtrFieldBase *v36; // [rsp+10h] [rbp-50h]
  int v37; // [rsp+1Ch] [rbp-44h]
  int v38; // [rsp+1Ch] [rbp-44h]
  unsigned int v39[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v5 = (this + 56);
  v35 = (this + 24);
  buffer = input->buffer_;
  v36 = (this + 56);
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
LABEL_2:
    if ( buffer_end <= buffer )
      goto LABEL_14;
LABEL_3:
    v8 = *buffer;
    if ( v8 <= 0 )
    {
LABEL_14:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v8 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_11:
        if ( (v8 & 7) == 4 )
          return 1;
        if ( google::protobuf::internal::WireFormat::SkipField(input, v8, v2, v5) == 0 )
          return 0;
        buffer = input->buffer_;
        if ( input->buffer_end_ > buffer )
          goto LABEL_3;
      }
    }
    else
    {
      input->last_tag_ = v8;
      input->buffer_ = buffer + 1;
    }
    v9 = v8 >> 3;
    if ( v8 >> 3 == 3 )
      break;
    if ( v8 >> 3 <= 3 )
    {
      if ( v9 != 2 || v8 != 16 )
        goto handle_unusual;
      v12 = input->buffer_;
      if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 20) == 0 )
          return 0;
      }
      else
      {
        *(this + 20) = v13;
        ++input->buffer_;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 26 )
      {
        input->buffer_ = buffer + 1;
        goto LABEL_41;
      }
    }
    else
    {
      if ( v9 == 4 )
      {
        if ( v8 == 34 )
        {
          v24 = *(this + 16);
          v25 = *(this + 17);
          if ( v24 < v25 )
            goto LABEL_61;
LABEL_47:
          if ( v25 == *(this + 18) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v36, v25 + 1);
          v26 = operator new(0x48u);
          CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance(v26);
          v27 = *(this + 16);
          v28 = *(this + 7);
          ++*(this + 17);
          *(this + 16) = v27 + 1;
          *(v28 + 8 * v27) = v26;
          goto LABEL_50;
        }
        goto handle_unusual;
      }
      if ( v9 != 5 || v8 != 40 )
        goto handle_unusual;
      v33 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_match_id:
      if ( v33 >= buffer_end || ((v34 = *v33) & 0x80u) != 0LL )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v35) == 0 )
          return 0;
      }
      else
      {
        *(this + 3) = v34;
        ++input->buffer_;
      }
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
  }
  if ( v8 == 26 )
  {
    while ( 1 )
    {
LABEL_41:
      v21 = *(this + 10);
      v22 = *(this + 11);
      if ( v21 >= v22 )
      {
        if ( v22 == *(this + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((this + 32), v22 + 1);
        v14 = operator new(0x30u);
        CDOTASaveGame_Player::CDOTASaveGame_Player(v14);
        v15 = *(this + 10);
        v16 = *(this + 4);
        ++*(this + 11);
        *(this + 10) = v15 + 1;
        *(v16 + 8 * v15) = v14;
      }
      else
      {
        v23 = *(this + 4);
        *(this + 10) = v21 + 1;
        v14 = *(v23 + 8 * v21);
      }
      v17 = input->buffer_;
      if ( v17 >= input->buffer_end_ || *v17 < 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v39) == 0 )
          return 0;
      }
      else
      {
        v39[0] = *v17;
        input->buffer_ = v17 + 1;
      }
      v18 = input->recursion_depth_ + 1;
      v19 = input->recursion_limit_ < v18;
      input->recursion_depth_ = v18;
      if ( v19 )
        return 0;
      v37 = google::protobuf::io::CodedInputStream::PushLimit(input, v39[0]);
      if ( !CDOTASaveGame_Player::MergePartialFromCodedStream(v14, input) || !input->legitimate_message_end_ )
        return 0;
      google::protobuf::io::CodedInputStream::PopLimit(input, v37);
      recursion_depth = input->recursion_depth_;
      if ( recursion_depth > 0 )
        input->recursion_depth_ = recursion_depth - 1;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer >= buffer_end )
        goto LABEL_2;
      v5 = *buffer;
      if ( v5 != 26 )
      {
        if ( v5 == 34 )
        {
          do
          {
            input->buffer_ = buffer + 1;
            v24 = *(this + 16);
            v25 = *(this + 17);
            if ( v24 >= v25 )
              goto LABEL_47;
LABEL_61:
            v32 = *(this + 7);
            *(this + 16) = v24 + 1;
            v26 = *(v32 + 8 * v24);
LABEL_50:
            v29 = input->buffer_;
            if ( v29 >= input->buffer_end_ || *v29 < 0 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v39) == 0 )
                return 0;
            }
            else
            {
              v39[0] = *v29;
              input->buffer_ = v29 + 1;
            }
            v30 = input->recursion_depth_ + 1;
            v19 = input->recursion_limit_ < v30;
            input->recursion_depth_ = v30;
            if ( v19 )
              return 0;
            v38 = google::protobuf::io::CodedInputStream::PushLimit(input, v39[0]);
            if ( !CDOTASaveGame_SaveInstance::MergePartialFromCodedStream(v26, input) || !input->legitimate_message_end_ )
              return 0;
            google::protobuf::io::CodedInputStream::PopLimit(input, v38);
            v31 = input->recursion_depth_;
            if ( v31 > 0 )
              input->recursion_depth_ = v31 - 1;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer >= buffer_end )
              goto LABEL_2;
            v5 = *buffer;
          }
          while ( v5 == 34 );
          if ( v5 == 40 )
          {
            v33 = buffer + 1;
            input->buffer_ = v33;
            goto parse_match_id;
          }
        }
        goto LABEL_2;
      }
      input->buffer_ = buffer + 1;
    }
  }
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_11;
  return 1;
}


// CDOTASaveGame::SerializeWithCachedSizes  (line 2688, @0x0000000001b56b70, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, empty, players, save_instances
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTASaveGame::SerializeWithCachedSizes(
        const CDOTASaveGame *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // r12
  __int64 j; // r12
  _QWORD *v8; // rax

  if ( (*(this + 16) & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(this + 20), output, v3);
  for ( i = 0; *(this + 10) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 1, *(*(this + 4) + 8 * i), output, v3);
  for ( j = 0; *(this + 16) > j; ++j )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 2, *(*(this + 7) + 8 * j), output, v3);
  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt64(&loc_2 + 3, *(this + 3), output, v3);
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


// CDOTASaveGame::SerializeWithCachedSizesToArray  (line 2720, @0x0000000001b57480, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CDOTASaveGame_Player>, WriteMessageNoVirtualToArray<CDOTASaveGame_SaveInstance>, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteUInt64NoTagToArray, WriteUInt64ToArray, WriteVarint32ToArray, empty, players, save_instances
// calls: CDOTASaveGame_Player::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), CDOTASaveGame_SaveInstance::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CSODOTALobby::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDOTASaveGame::SerializeWithCachedSizesToArray(
        const CDOTASaveGame *const this,
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
  google::protobuf::io::CodedOutputStream *v18; // rdi
  __int64 v19; // rdx

  result = target;
  if ( (*(this + 16) & 2) != 0 )
  {
    v5 = *(this + 20);
    *target = 16;
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
  if ( *(this + 10) > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v9 = *(this + 4);
      v10 = *&v9[v6];
      *result = 26;
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
      result = CDOTASaveGame_Player::SerializeWithCachedSizesToArray(v10, v8);
    }
    while ( v7 < *(this + 10) );
  }
  if ( *(this + 16) > 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v15 = *(this + 7);
      v16 = *&v15[v12];
      *result = 34;
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
      result = CDOTASaveGame_SaveInstance::SerializeWithCachedSizesToArray(v16, v14);
    }
    while ( v13 < *(this + 16) );
  }
  if ( (*(this + 16) & 1) != 0 )
  {
    v18 = *(this + 3);
    *result = 40;
    result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v18, (result + 1), v2);
  }
  v19 = *(this + 1);
  if ( v19 != 0 && *(v19 + 8) != *v19 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v19);
  return result;
}


// CDOTASaveGame::ByteSize  (line 2755, @0x0000000001b570b0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDOTASaveGame_Player>, MessageSizeNoVirtual<CDOTASaveGame_SaveInstance>, UInt32Size, UInt64Size, VarintSize32, empty, players, save_instances
// calls: CDOTASaveGame_Player::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), CDOTASaveGame_SaveInstance::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
// callers: CSODOTALobby::ByteSize
int __fastcall CDOTASaveGame::ByteSize(const CDOTASaveGame *const this)
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
  int v20; // eax

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v2 = google::protobuf::io::CodedOutputStream::VarintSize64(*(this + 3), v1) + 1;
      if ( (*(this + 4) & 2) == 0 )
        goto LABEL_4;
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_4;
    }
    v19 = *(this + 20);
    v20 = 2;
    if ( v19 > 0x7F )
      v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v19, v1) + 1;
    v2 += v20;
  }
LABEL_4:
  v5 = *(this + 10);
  v6 = v5 + v2;
  if ( v5 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = CDOTASaveGame_Player::ByteSize(*(*(this + 4) + v7));
      v10 = 1;
      if ( v9 > 0x7F )
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      ++v8;
      v7 += 8;
      v6 += v10 + v9;
    }
    while ( v8 < *(this + 10) );
  }
  v11 = *(this + 16);
  v12 = v11 + v6;
  if ( v11 > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = CDOTASaveGame_SaveInstance::ByteSize(*(*(this + 7) + v13));
      v16 = 1;
      if ( v15 > 0x7F )
        v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v15, v1);
      ++v14;
      v13 += 8;
      v12 += v16 + v15;
    }
    while ( v14 < *(this + 16) );
  }
  v17 = *(this + 1);
  if ( v17 != 0 && v17[1] != *v17 )
    v12 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v12;
  return v12;
}


// CDOTASaveGame::MergeFrom  (line 2801, @0x0000000001b5c0b0, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTASaveGame*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTASaveGame::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTASaveGame
void __fastcall CDOTASaveGame::MergeFrom(CDOTASaveGame *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTASaveGame *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      2802);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTASaveGame, 0)) != 0 )
  {
    CDOTASaveGame::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTASaveGame::MergeFrom  (line 2813, @0x0000000001b5bcb0, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>, MergeFrom<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>, New, set_has_match_id, set_has_save_time, set_match_id, set_save_time
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDOTASaveGame_Player::CDOTASaveGame_Player, CDOTASaveGame_Player::MergeFrom, CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance, CDOTASaveGame_SaveInstance::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume (13 total)
// callers: CDOTASaveGame::CDOTASaveGame, CDOTASaveGame::MergeFrom, CDOTASaveGame::CopyFrom, CSODOTALobby::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTASaveGame::MergeFrom(CDOTASaveGame *const this, const CDOTASaveGame *const from)
{
  __int64 v4; // r14
  int v5; // r13d
  CDOTASaveGame_Player *v6; // r15
  __int64 v7; // rax
  CDOTASaveGame_Player *v8; // rdi
  __int64 v9; // rdx
  const CDOTASaveGame_Player *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // r13d
  CDOTASaveGame_SaveInstance *v16; // r15
  __int64 v17; // rax
  CDOTASaveGame_SaveInstance *v18; // rdi
  __int64 v19; // rdx
  const CDOTASaveGame_SaveInstance *v20; // rsi
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v30; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v31; // [rsp+8h] [rbp-68h]
  char v32; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v33; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_shared_enums.pb.cc",
      2814);
    v28 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v28);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  v30 = (this + 32);
  if ( this + 32 == from + 32 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v29 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v29);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v30, *(from + 10) + *(this + 10));
  if ( *(from + 10) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v11 = *(this + 10);
      v12 = *(this + 11);
      if ( v11 >= v12 )
      {
        if ( v12 == *(this + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v30, v12 + 1);
        v6 = operator new(0x30u);
        CDOTASaveGame_Player::CDOTASaveGame_Player(v6);
        v7 = *(this + 10);
        v8 = v6;
        v9 = *(this + 4);
        ++*(this + 11);
        *(this + 10) = v7 + 1;
        *(v9 + 8 * v7) = v6;
      }
      else
      {
        v13 = *(this + 4);
        *(this + 10) = v11 + 1;
        v8 = *(v13 + 8 * v11);
      }
      ++v5;
      v10 = *(*(from + 4) + v4);
      v4 += 8;
      CDOTASaveGame_Player::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 10) );
  }
  v31 = (this + 56);
  if ( this + 56 == from + 56 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v27 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v27);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v31, *(from + 16) + *(this + 16));
  if ( *(from + 16) > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v21 = *(this + 16);
      v22 = *(this + 17);
      if ( v21 >= v22 )
      {
        if ( v22 == *(this + 18) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v31, v22 + 1);
        v16 = operator new(0x48u);
        CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance(v16);
        v17 = *(this + 16);
        v18 = v16;
        v19 = *(this + 7);
        ++*(this + 17);
        *(this + 16) = v17 + 1;
        *(v19 + 8 * v17) = v16;
      }
      else
      {
        v23 = *(this + 7);
        *(this + 16) = v21 + 1;
        v18 = *(v23 + 8 * v21);
      }
      ++v15;
      v20 = *(*(from + 7) + v14);
      v14 += 8;
      CDOTASaveGame_SaveInstance::MergeFrom(v18, v20);
    }
    while ( v15 < *(from + 16) );
  }
  v24 = *(from + 4);
  if ( v24 != 0 )
  {
    if ( (v24 & 1) != 0 )
    {
      v25 = *(from + 3);
      *(this + 4) |= 1u;
      *(this + 3) = v25;
      v24 = *(from + 4);
    }
    if ( (v24 & 2) != 0 )
    {
      v26 = *(from + 20);
      *(this + 4) |= 2u;
      *(this + 20) = v26;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTASaveGame::CopyFrom  (line 2828, @0x0000000001b56190, libserver.so)
void __fastcall CDOTASaveGame::CopyFrom(CDOTASaveGame *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTASaveGame::CopyFrom  (line 2834, @0x0000000001b5c190, libserver.so)
// calls: CDOTASaveGame::MergeFrom
void __fastcall CDOTASaveGame::CopyFrom(CDOTASaveGame *const this, const CDOTASaveGame *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTASaveGame::MergeFrom(this, from);
  }
}


// CDOTASaveGame::IsInitialized  (line 2840, @0x0000000001b561d0, libserver.so)
bool __fastcall CDOTASaveGame::IsInitialized(const CDOTASaveGame *const this)
{
  return 1;
}


// CDOTASaveGame::Swap  (line 2845, @0x0000000001b5c1d0, libserver.so)  // inlines: Swap, swap<int>, swap<long unsigned int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDOTASaveGame::Swap(CDOTASaveGame *const this, CDOTASaveGame *other)
{
  __int64 v4; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // rdi
  int v7; // eax
  __int64 v8; // rax

  if ( other != this )
  {
    v4 = *(this + 3);
    v5 = (other + 32);
    v6 = (this + 32);
    *&v6[-1].total_size_ = *&v5[-1].total_size_;
    *&v5[-1].total_size_ = v4;
    LODWORD(v4) = v6[2].elements_;
    LODWORD(v6[2].elements_) = v5[2].elements_;
    LODWORD(v5[2].elements_) = v4;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v6, v5);
    google::protobuf::internal::RepeatedPtrFieldBase::Swap((this + 56), (other + 56));
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


// CDOTASaveGame::GetMetadata  (line 2857, @0x0000000001b577a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fshared_5fenums_2eproto(void), `anonymous namespace'::CDOTASaveGame_descriptor_, `anonymous namespace'::CDOTASaveGame_reflection_
google::protobuf::Metadata __fastcall CDOTASaveGame::GetMetadata(const CDOTASaveGame *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fshared_5fenums_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTASaveGame_descriptor_;
  result.reflection = `anonymous namespace'::CDOTASaveGame_reflection_;
  return result;
}


