// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/gameevents.pb.cc:549
struct StaticDescriptorInitializer_gameevents_2eproto {
	StaticDescriptorInitializer_gameevents_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_gameevents_2eproto  (line 81, @0x0000000001b092c0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_gameevents_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "gameevents.proto", "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_, CMsgVDebugGameSessionIDEvent::default_instance_, protobuf_AssignDesc_gameevents_2eproto(void)::CMsgVDebugGameSessionIDEvent_offsets_, `anonymous namespace'::CMsgVDebugGameSessionIDEvent_reflection_, `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_, CMsgPlaceDecalEvent::default_instance_, protobuf_AssignDesc_gameevents_2eproto(void)::CMsgPlaceDecalEvent_offsets_, `anonymous namespace'::CMsgPlaceDecalEvent_reflection_ (40 total)
void __cdecl protobuf_AssignDesc_gameevents_2eproto()
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
  google::protobuf::DescriptorPool *v38; // rdi
  const google::protobuf::DescriptorPool *v39; // r13
  google::protobuf::MessageFactory *v40; // rdi
  google::protobuf::MessageFactory *v41; // r14
  google::protobuf::internal::GeneratedMessageReflection *v42; // r12
  google::protobuf::DescriptorPool *v43; // rdi
  const google::protobuf::DescriptorPool *v44; // r13
  google::protobuf::MessageFactory *v45; // rdi
  google::protobuf::MessageFactory *v46; // r14
  google::protobuf::internal::GeneratedMessageReflection *v47; // r12
  const google::protobuf::Descriptor *v48; // rax
  google::protobuf::DescriptorPool *v49; // rdi
  const google::protobuf::DescriptorPool *v50; // r13
  google::protobuf::MessageFactory *v51; // rdi
  google::protobuf::MessageFactory *v52; // r14
  google::protobuf::internal::GeneratedMessageReflection *v53; // r12
  const google::protobuf::Descriptor *v54; // rax
  google::protobuf::DescriptorPool *v55; // rdi
  const google::protobuf::DescriptorPool *v56; // r13
  google::protobuf::MessageFactory *v57; // rdi
  google::protobuf::MessageFactory *v58; // r14
  google::protobuf::internal::GeneratedMessageReflection *v59; // r12
  google::protobuf::DescriptorPool *v60; // rdi
  const google::protobuf::DescriptorPool *v61; // r13
  google::protobuf::MessageFactory *v62; // rdi
  google::protobuf::MessageFactory *v63; // r14
  google::protobuf::internal::GeneratedMessageReflection *v64; // r12
  const google::protobuf::Descriptor *v65; // rax
  google::protobuf::DescriptorPool *v66; // rdi
  const google::protobuf::DescriptorPool *v67; // r13
  google::protobuf::MessageFactory *v68; // rdi
  google::protobuf::MessageFactory *v69; // r14
  google::protobuf::internal::GeneratedMessageReflection *v70; // r12
  const google::protobuf::Descriptor *v71; // rax
  google::protobuf::DescriptorPool *v72; // rdi
  const google::protobuf::DescriptorPool *v73; // r13
  google::protobuf::MessageFactory *v74; // rdi
  google::protobuf::MessageFactory *v75; // r14
  google::protobuf::internal::GeneratedMessageReflection *v76; // r12
  const google::protobuf::Descriptor *v77; // rax
  google::protobuf::DescriptorPool *v78; // rdi
  const google::protobuf::DescriptorPool *v79; // r13
  google::protobuf::MessageFactory *v80; // rdi
  google::protobuf::MessageFactory *v81; // r14
  google::protobuf::internal::GeneratedMessageReflection *v82; // r12
  const google::protobuf::Descriptor *v83; // rax
  google::protobuf::DescriptorPool *v84; // rdi
  const google::protobuf::DescriptorPool *v85; // r13
  google::protobuf::MessageFactory *v86; // rdi
  google::protobuf::MessageFactory *v87; // r14
  google::protobuf::internal::GeneratedMessageReflection *v88; // r12
  const google::protobuf::Descriptor *v89; // rax
  google::protobuf::DescriptorPool *v90; // rdi
  const google::protobuf::DescriptorPool *v91; // r13
  google::protobuf::MessageFactory *v92; // rdi
  google::protobuf::MessageFactory *v93; // r14
  google::protobuf::internal::GeneratedMessageReflection *v94; // r12
  const google::protobuf::EnumDescriptor *v95; // rax
  __int64 v96; // rax
  int v97; // eax
  int v98; // edx
  char v99; // [rsp+3Eh] [rbp-42h] BYREF
  char v100; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v101; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_gameevents_2eproto();
  std::string::string(&v101, "gameevents.proto", &v99);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v101);
  v3 = *&v101.level_ - 24LL;
  if ( (*&v101.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v97 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v98 = *(*&v101.level_ - 8LL);
      *(*&v101.level_ - 8LL) = v98 - 1;
      v97 = v98;
    }
    if ( v97 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v100);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v101,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      86);
    v96 = google::protobuf::internal::LogMessage::operator<<(&v101, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v100, v96);
    google::protobuf::internal::LogMessage::~LogMessage(&v101);
  }
  `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_,
    CMsgVDebugGameSessionIDEvent::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgVDebugGameSessionIDEvent_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    40);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CMsgVDebugGameSessionIDEvent_reflection_ = v7;
  `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_,
    CMsgPlaceDecalEvent::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgPlaceDecalEvent_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    88);
  v14 = *(FileByName + 80);
  `anonymous namespace'::CMsgPlaceDecalEvent_reflection_ = v13;
  `anonymous namespace'::CMsgClearWorldDecalsEvent_descriptor_ = v14 + 2;
  v16 = google::protobuf::DescriptorPool::generated_pool(v15);
  v18 = google::protobuf::MessageFactory::generated_factory(v17);
  v19 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v19,
    `anonymous namespace'::CMsgClearWorldDecalsEvent_descriptor_,
    CMsgClearWorldDecalsEvent::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgClearWorldDecalsEvent_offsets_,
    16,
    8,
    -1,
    v16,
    v18,
    32);
  v20 = *(FileByName + 80);
  `anonymous namespace'::CMsgClearWorldDecalsEvent_reflection_ = v19;
  `anonymous namespace'::CMsgClearEntityDecalsEvent_descriptor_ = v20 + 3;
  v22 = google::protobuf::DescriptorPool::generated_pool(v21);
  v24 = google::protobuf::MessageFactory::generated_factory(v23);
  v25 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v25,
    `anonymous namespace'::CMsgClearEntityDecalsEvent_descriptor_,
    CMsgClearEntityDecalsEvent::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgClearEntityDecalsEvent_offsets_,
    16,
    8,
    -1,
    v22,
    v24,
    32);
  v26 = *(FileByName + 80);
  `anonymous namespace'::CMsgClearEntityDecalsEvent_reflection_ = v25;
  `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_descriptor_ = v26 + 4;
  v28 = google::protobuf::DescriptorPool::generated_pool(v27);
  v30 = google::protobuf::MessageFactory::generated_factory(v29);
  v31 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v31,
    `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_descriptor_,
    CMsgClearDecalsForSkeletonInstanceEvent::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgClearDecalsForSkeletonInstanceEvent_offsets_,
    16,
    8,
    -1,
    v28,
    v30,
    40);
  v32 = *(FileByName + 80);
  `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_reflection_ = v31;
  `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_ = v32 + 5;
  v34 = google::protobuf::DescriptorPool::generated_pool(v33);
  v36 = google::protobuf::MessageFactory::generated_factory(v35);
  v37 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v37,
    `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_,
    CMsgSource1LegacyGameEventList::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSource1LegacyGameEventList_offsets_,
    16,
    8,
    -1,
    v34,
    v36,
    48);
  `anonymous namespace'::CMsgSource1LegacyGameEventList_reflection_ = v37;
  `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_descriptor_ = `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_->nested_types_;
  v39 = google::protobuf::DescriptorPool::generated_pool(v38);
  v41 = google::protobuf::MessageFactory::generated_factory(v40);
  v42 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v42,
    `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_descriptor_,
    CMsgSource1LegacyGameEventList_key_t::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSource1LegacyGameEventList_key_t_offsets_,
    16,
    8,
    -1,
    v39,
    v41,
    40);
  `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_reflection_ = v42;
  `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_descriptor_ = `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_->nested_types_
                                                                                 + 1;
  v44 = google::protobuf::DescriptorPool::generated_pool(v43);
  v46 = google::protobuf::MessageFactory::generated_factory(v45);
  v47 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v47,
    `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_descriptor_,
    CMsgSource1LegacyGameEventList_descriptor_t::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSource1LegacyGameEventList_descriptor_t_offsets_,
    16,
    8,
    -1,
    v44,
    v46,
    64);
  v48 = *(FileByName + 80);
  `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_reflection_ = v47;
  `anonymous namespace'::CMsgSource1LegacyListenEvents_descriptor_ = v48 + 6;
  v50 = google::protobuf::DescriptorPool::generated_pool(v49);
  v52 = google::protobuf::MessageFactory::generated_factory(v51);
  v53 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v53,
    `anonymous namespace'::CMsgSource1LegacyListenEvents_descriptor_,
    CMsgSource1LegacyListenEvents::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSource1LegacyListenEvents_offsets_,
    16,
    8,
    -1,
    v50,
    v52,
    48);
  v54 = *(FileByName + 80);
  `anonymous namespace'::CMsgSource1LegacyListenEvents_reflection_ = v53;
  `anonymous namespace'::CMsgSource1LegacyGameEvent_descriptor_ = v54 + 7;
  v56 = google::protobuf::DescriptorPool::generated_pool(v55);
  v58 = google::protobuf::MessageFactory::generated_factory(v57);
  v59 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v59,
    `anonymous namespace'::CMsgSource1LegacyGameEvent_descriptor_,
    CMsgSource1LegacyGameEvent::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSource1LegacyGameEvent_offsets_,
    16,
    8,
    -1,
    v56,
    v58,
    64);
  `anonymous namespace'::CMsgSource1LegacyGameEvent_reflection_ = v59;
  `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_descriptor_ = `anonymous namespace'::CMsgSource1LegacyGameEvent_descriptor_->nested_types_;
  v61 = google::protobuf::DescriptorPool::generated_pool(v60);
  v63 = google::protobuf::MessageFactory::generated_factory(v62);
  v64 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v64,
    `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_descriptor_,
    CMsgSource1LegacyGameEvent_key_t::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSource1LegacyGameEvent_key_t_offsets_,
    16,
    8,
    -1,
    v61,
    v63,
    64);
  v65 = *(FileByName + 80);
  `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_reflection_ = v64;
  `anonymous namespace'::CMsgSosStartSoundEvent_descriptor_ = v65 + 8;
  v67 = google::protobuf::DescriptorPool::generated_pool(v66);
  v69 = google::protobuf::MessageFactory::generated_factory(v68);
  v70 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v70,
    `anonymous namespace'::CMsgSosStartSoundEvent_descriptor_,
    CMsgSosStartSoundEvent::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSosStartSoundEvent_offsets_,
    16,
    8,
    -1,
    v67,
    v69,
    56);
  v71 = *(FileByName + 80);
  `anonymous namespace'::CMsgSosStartSoundEvent_reflection_ = v70;
  `anonymous namespace'::CMsgSosStopSoundEvent_descriptor_ = v71 + 9;
  v73 = google::protobuf::DescriptorPool::generated_pool(v72);
  v75 = google::protobuf::MessageFactory::generated_factory(v74);
  v76 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v76,
    `anonymous namespace'::CMsgSosStopSoundEvent_descriptor_,
    CMsgSosStopSoundEvent::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSosStopSoundEvent_offsets_,
    16,
    8,
    -1,
    v73,
    v75,
    32);
  v77 = *(FileByName + 80);
  `anonymous namespace'::CMsgSosStopSoundEvent_reflection_ = v76;
  `anonymous namespace'::CMsgSosStopSoundEventHash_descriptor_ = v77 + 10;
  v79 = google::protobuf::DescriptorPool::generated_pool(v78);
  v81 = google::protobuf::MessageFactory::generated_factory(v80);
  v82 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v82,
    `anonymous namespace'::CMsgSosStopSoundEventHash_descriptor_,
    CMsgSosStopSoundEventHash::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSosStopSoundEventHash_offsets_,
    16,
    8,
    -1,
    v79,
    v81,
    32);
  v83 = *(FileByName + 80);
  `anonymous namespace'::CMsgSosStopSoundEventHash_reflection_ = v82;
  `anonymous namespace'::CMsgSosSetSoundEventParams_descriptor_ = v83 + 11;
  v85 = google::protobuf::DescriptorPool::generated_pool(v84);
  v87 = google::protobuf::MessageFactory::generated_factory(v86);
  v88 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v88,
    `anonymous namespace'::CMsgSosSetSoundEventParams_descriptor_,
    CMsgSosSetSoundEventParams::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSosSetSoundEventParams_offsets_,
    16,
    8,
    -1,
    v85,
    v87,
    40);
  v89 = *(FileByName + 80);
  `anonymous namespace'::CMsgSosSetSoundEventParams_reflection_ = v88;
  `anonymous namespace'::CMsgSosSetLibraryStackFields_descriptor_ = v89 + 12;
  v91 = google::protobuf::DescriptorPool::generated_pool(v90);
  v93 = google::protobuf::MessageFactory::generated_factory(v92);
  v94 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v94,
    `anonymous namespace'::CMsgSosSetLibraryStackFields_descriptor_,
    CMsgSosSetLibraryStackFields::default_instance_,
    protobuf_AssignDesc_gameevents_2eproto(void)::CMsgSosSetLibraryStackFields_offsets_,
    16,
    8,
    -1,
    v91,
    v93,
    40);
  v95 = *(FileByName + 96);
  `anonymous namespace'::CMsgSosSetLibraryStackFields_reflection_ = v94;
  `anonymous namespace'::EBaseGameEvents_descriptor_ = v95;
}


// protobuf_RegisterTypes  (line 375, @0x0000000001b09e90, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_gameevents_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), CMsgVDebugGameSessionIDEvent::default_instance_, `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_, CMsgPlaceDecalEvent::default_instance_, `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_, CMsgClearWorldDecalsEvent::default_instance_, `anonymous namespace'::CMsgClearWorldDecalsEvent_descriptor_ (34 total)
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
  const google::protobuf::Message *v25; // rdx
  const google::protobuf::Descriptor *v26; // rsi
  const google::protobuf::Message *v27; // rdx
  const google::protobuf::Descriptor *v28; // rsi
  const google::protobuf::Message *v29; // rdx
  const google::protobuf::Descriptor *v30; // rsi
  const google::protobuf::Message *v31; // rdx
  const google::protobuf::Descriptor *v32; // rsi
  __int64 v33[2]; // [rsp+0h] [rbp-30h] BYREF
  char v34; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v34 = 0;
    v33[0] = off_47BFB70;
    v33[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v33, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v33);
  }
  v2 = CMsgVDebugGameSessionIDEvent::default_instance_;
  if ( CMsgVDebugGameSessionIDEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v2 = CMsgVDebugGameSessionIDEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_,
    v2,
    v1);
  v4 = CMsgPlaceDecalEvent::default_instance_;
  if ( CMsgPlaceDecalEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v4 = CMsgPlaceDecalEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_,
    v4,
    v3);
  v6 = CMsgClearWorldDecalsEvent::default_instance_;
  if ( CMsgClearWorldDecalsEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v6 = CMsgClearWorldDecalsEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgClearWorldDecalsEvent_descriptor_,
    v6,
    v5);
  v8 = CMsgClearEntityDecalsEvent::default_instance_;
  if ( CMsgClearEntityDecalsEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v8 = CMsgClearEntityDecalsEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgClearEntityDecalsEvent_descriptor_,
    v8,
    v7);
  v10 = CMsgClearDecalsForSkeletonInstanceEvent::default_instance_;
  if ( CMsgClearDecalsForSkeletonInstanceEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v10 = CMsgClearDecalsForSkeletonInstanceEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_descriptor_,
    v10,
    v9);
  v12 = CMsgSource1LegacyGameEventList::default_instance_;
  if ( CMsgSource1LegacyGameEventList::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v12 = CMsgSource1LegacyGameEventList::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_,
    v12,
    v11);
  v14 = CMsgSource1LegacyGameEventList_key_t::default_instance_;
  if ( CMsgSource1LegacyGameEventList_key_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v14 = CMsgSource1LegacyGameEventList_key_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_descriptor_,
    v14,
    v13);
  v16 = CMsgSource1LegacyGameEventList_descriptor_t::default_instance_;
  if ( CMsgSource1LegacyGameEventList_descriptor_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v16 = CMsgSource1LegacyGameEventList_descriptor_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_descriptor_,
    v16,
    v15);
  v18 = CMsgSource1LegacyListenEvents::default_instance_;
  if ( CMsgSource1LegacyListenEvents::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v18 = CMsgSource1LegacyListenEvents::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSource1LegacyListenEvents_descriptor_,
    v18,
    v17);
  v20 = CMsgSource1LegacyGameEvent::default_instance_;
  if ( CMsgSource1LegacyGameEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v20 = CMsgSource1LegacyGameEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSource1LegacyGameEvent_descriptor_,
    v20,
    v19);
  v22 = CMsgSource1LegacyGameEvent_key_t::default_instance_;
  if ( CMsgSource1LegacyGameEvent_key_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v22 = CMsgSource1LegacyGameEvent_key_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_descriptor_,
    v22,
    v21);
  v24 = CMsgSosStartSoundEvent::default_instance_;
  if ( CMsgSosStartSoundEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v24 = CMsgSosStartSoundEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSosStartSoundEvent_descriptor_,
    v24,
    v23);
  v26 = CMsgSosStopSoundEvent::default_instance_;
  if ( CMsgSosStopSoundEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v26 = CMsgSosStopSoundEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSosStopSoundEvent_descriptor_,
    v26,
    v25);
  v28 = CMsgSosStopSoundEventHash::default_instance_;
  if ( CMsgSosStopSoundEventHash::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v28 = CMsgSosStopSoundEventHash::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSosStopSoundEventHash_descriptor_,
    v28,
    v27);
  v30 = CMsgSosSetSoundEventParams::default_instance_;
  if ( CMsgSosSetSoundEventParams::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v30 = CMsgSosSetSoundEventParams::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSosSetSoundEventParams_descriptor_,
    v30,
    v29);
  v32 = CMsgSosSetLibraryStackFields::default_instance_;
  if ( CMsgSosSetLibraryStackFields::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    v32 = CMsgSosSetLibraryStackFields::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgSosSetLibraryStackFields_descriptor_,
    v32,
    v31);
}


// protobuf_ShutdownFile_gameevents_2eproto  (line 413, @0x0000000001afdcf0, libserver.so)
// globals: CMsgVDebugGameSessionIDEvent::default_instance_, `anonymous namespace'::CMsgVDebugGameSessionIDEvent_reflection_, CMsgPlaceDecalEvent::default_instance_, `anonymous namespace'::CMsgPlaceDecalEvent_reflection_, CMsgClearWorldDecalsEvent::default_instance_, `anonymous namespace'::CMsgClearWorldDecalsEvent_reflection_, CMsgClearEntityDecalsEvent::default_instance_, `anonymous namespace'::CMsgClearEntityDecalsEvent_reflection_ (32 total)
void __cdecl protobuf_ShutdownFile_gameevents_2eproto()
{
  if ( CMsgVDebugGameSessionIDEvent::default_instance_ != 0 )
    (CMsgVDebugGameSessionIDEvent::default_instance_->name_[1]._M_dataplus._M_p)(CMsgVDebugGameSessionIDEvent::default_instance_);
  if ( `anonymous namespace'::CMsgVDebugGameSessionIDEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgVDebugGameSessionIDEvent_reflection_ + 8LL))(`anonymous namespace'::CMsgVDebugGameSessionIDEvent_reflection_);
  if ( CMsgPlaceDecalEvent::default_instance_ != 0 )
    (CMsgPlaceDecalEvent::default_instance_->name_[1]._M_dataplus._M_p)(CMsgPlaceDecalEvent::default_instance_);
  if ( `anonymous namespace'::CMsgPlaceDecalEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgPlaceDecalEvent_reflection_ + 8LL))(`anonymous namespace'::CMsgPlaceDecalEvent_reflection_);
  if ( CMsgClearWorldDecalsEvent::default_instance_ != 0 )
    (CMsgClearWorldDecalsEvent::default_instance_->name_[1]._M_dataplus._M_p)(CMsgClearWorldDecalsEvent::default_instance_);
  if ( `anonymous namespace'::CMsgClearWorldDecalsEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgClearWorldDecalsEvent_reflection_ + 8LL))(`anonymous namespace'::CMsgClearWorldDecalsEvent_reflection_);
  if ( CMsgClearEntityDecalsEvent::default_instance_ != 0 )
    (CMsgClearEntityDecalsEvent::default_instance_->name_[1]._M_dataplus._M_p)(CMsgClearEntityDecalsEvent::default_instance_);
  if ( `anonymous namespace'::CMsgClearEntityDecalsEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgClearEntityDecalsEvent_reflection_ + 8LL))(`anonymous namespace'::CMsgClearEntityDecalsEvent_reflection_);
  if ( CMsgClearDecalsForSkeletonInstanceEvent::default_instance_ != 0 )
    (CMsgClearDecalsForSkeletonInstanceEvent::default_instance_->name_[1]._M_dataplus._M_p)(CMsgClearDecalsForSkeletonInstanceEvent::default_instance_);
  if ( `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_reflection_ + 8LL))(`anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_reflection_);
  if ( CMsgSource1LegacyGameEventList::default_instance_ != 0 )
    (CMsgSource1LegacyGameEventList::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSource1LegacyGameEventList::default_instance_);
  if ( `anonymous namespace'::CMsgSource1LegacyGameEventList_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSource1LegacyGameEventList_reflection_ + 8LL))(`anonymous namespace'::CMsgSource1LegacyGameEventList_reflection_);
  if ( CMsgSource1LegacyGameEventList_key_t::default_instance_ != 0 )
    (CMsgSource1LegacyGameEventList_key_t::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSource1LegacyGameEventList_key_t::default_instance_);
  if ( `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_reflection_ + 8LL))(`anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_reflection_);
  if ( CMsgSource1LegacyGameEventList_descriptor_t::default_instance_ != 0 )
    (CMsgSource1LegacyGameEventList_descriptor_t::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSource1LegacyGameEventList_descriptor_t::default_instance_);
  if ( `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_reflection_ + 8LL))(`anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_reflection_);
  if ( CMsgSource1LegacyListenEvents::default_instance_ != 0 )
    (CMsgSource1LegacyListenEvents::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSource1LegacyListenEvents::default_instance_);
  if ( `anonymous namespace'::CMsgSource1LegacyListenEvents_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSource1LegacyListenEvents_reflection_ + 8LL))(`anonymous namespace'::CMsgSource1LegacyListenEvents_reflection_);
  if ( CMsgSource1LegacyGameEvent::default_instance_ != 0 )
    (CMsgSource1LegacyGameEvent::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSource1LegacyGameEvent::default_instance_);
  if ( `anonymous namespace'::CMsgSource1LegacyGameEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSource1LegacyGameEvent_reflection_ + 8LL))(`anonymous namespace'::CMsgSource1LegacyGameEvent_reflection_);
  if ( CMsgSource1LegacyGameEvent_key_t::default_instance_ != 0 )
    (CMsgSource1LegacyGameEvent_key_t::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSource1LegacyGameEvent_key_t::default_instance_);
  if ( `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_reflection_ + 8LL))(`anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_reflection_);
  if ( CMsgSosStartSoundEvent::default_instance_ != 0 )
    (CMsgSosStartSoundEvent::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSosStartSoundEvent::default_instance_);
  if ( `anonymous namespace'::CMsgSosStartSoundEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSosStartSoundEvent_reflection_ + 8LL))(`anonymous namespace'::CMsgSosStartSoundEvent_reflection_);
  if ( CMsgSosStopSoundEvent::default_instance_ != 0 )
    (CMsgSosStopSoundEvent::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSosStopSoundEvent::default_instance_);
  if ( `anonymous namespace'::CMsgSosStopSoundEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSosStopSoundEvent_reflection_ + 8LL))(`anonymous namespace'::CMsgSosStopSoundEvent_reflection_);
  if ( CMsgSosStopSoundEventHash::default_instance_ != 0 )
    (CMsgSosStopSoundEventHash::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSosStopSoundEventHash::default_instance_);
  if ( `anonymous namespace'::CMsgSosStopSoundEventHash_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSosStopSoundEventHash_reflection_ + 8LL))(`anonymous namespace'::CMsgSosStopSoundEventHash_reflection_);
  if ( CMsgSosSetSoundEventParams::default_instance_ != 0 )
    (CMsgSosSetSoundEventParams::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSosSetSoundEventParams::default_instance_);
  if ( `anonymous namespace'::CMsgSosSetSoundEventParams_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSosSetSoundEventParams_reflection_ + 8LL))(`anonymous namespace'::CMsgSosSetSoundEventParams_reflection_);
  if ( CMsgSosSetLibraryStackFields::default_instance_ != 0 )
    (CMsgSosSetLibraryStackFields::default_instance_->name_[1]._M_dataplus._M_p)(CMsgSosSetLibraryStackFields::default_instance_);
  if ( `anonymous namespace'::CMsgSosSetLibraryStackFields_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgSosSetLibraryStackFields_reflection_ + 8LL))(`anonymous namespace'::CMsgSosSetLibraryStackFields_reflection_);
}


// protobuf_AddDesc_gameevents_2eproto  (line 448, @0x0000000001b08f50, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), protobuf_AddDesc_networkbasetypes_2eproto, google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent, CMsgPlaceDecalEvent::CMsgPlaceDecalEvent, CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent, CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent, CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent, CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList, CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t (25 total)
// callers: protobuf_AssignDesc_gameevents_2eproto, CMsgVDebugGameSessionIDEvent::default_instance, CMsgPlaceDecalEvent::default_instance, CMsgClearWorldDecalsEvent::default_instance, CMsgClearEntityDecalsEvent::default_instance, CMsgClearDecalsForSkeletonInstanceEvent::default_instance, CMsgSource1LegacyGameEventList_key_t::default_instance, CMsgSource1LegacyGameEventList_descriptor_t::default_instance, CMsgSource1LegacyGameEventList::default_instance, CMsgSource1LegacyListenEvents::default_instance, CMsgSource1LegacyGameEvent_key_t::default_instance, CMsgSource1LegacyGameEvent::default_instance (19 total)
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "gameevents.proto"
// globals: protobuf_AddDesc_gameevents_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CMsgVDebugGameSessionIDEvent::default_instance_, CMsgPlaceDecalEvent::default_instance_, CMsgClearWorldDecalsEvent::default_instance_, CMsgClearEntityDecalsEvent::default_instance_, CMsgClearDecalsForSkeletonInstanceEvent::default_instance_, CMsgSource1LegacyGameEventList::default_instance_ (19 total)
void __cdecl protobuf_AddDesc_gameevents_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CMsgVDebugGameSessionIDEvent *v3; // rbx
  CMsgPlaceDecalEvent *v4; // rbx
  CMsgClearWorldDecalsEvent *v5; // rbx
  CMsgClearEntityDecalsEvent *v6; // rbx
  CMsgClearDecalsForSkeletonInstanceEvent *v7; // rbx
  CMsgSource1LegacyGameEventList *v8; // rbx
  CMsgSource1LegacyGameEventList_key_t *v9; // rbx
  CMsgSource1LegacyGameEventList_descriptor_t *v10; // rbx
  CMsgSource1LegacyListenEvents *v11; // rbx
  CMsgSource1LegacyGameEvent *v12; // rbx
  CMsgSource1LegacyGameEvent_key_t *v13; // rbx
  CMsgSosStartSoundEvent *v14; // rbx
  CMsgSosStopSoundEvent *v15; // rbx
  CMsgSosStopSoundEventHash *v16; // rbx
  CMsgSosSetSoundEventParams *v17; // rbx
  CMsgSosSetLibraryStackFields *v18; // rbx
  void (*v19)(void); // rsi

  if ( !protobuf_AddDesc_gameevents_2eproto(void)::already_here )
  {
    protobuf_AddDesc_gameevents_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      v0);
    protobuf_AddDesc_networkbasetypes_2eproto();
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_327C980, &stru_10.m_PVSBits.m_Ints[258], v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "gameevents.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x28u);
    CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent(v3);
    CMsgVDebugGameSessionIDEvent::default_instance_ = v3;
    v4 = operator new(0x58u);
    CMsgPlaceDecalEvent::CMsgPlaceDecalEvent(v4);
    CMsgPlaceDecalEvent::default_instance_ = v4;
    v5 = operator new(0x20u);
    CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent(v5);
    CMsgClearWorldDecalsEvent::default_instance_ = v5;
    v6 = operator new(0x20u);
    CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent(v6);
    CMsgClearEntityDecalsEvent::default_instance_ = v6;
    v7 = operator new(0x28u);
    CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent(v7);
    CMsgClearDecalsForSkeletonInstanceEvent::default_instance_ = v7;
    v8 = operator new(0x30u);
    CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList(v8);
    CMsgSource1LegacyGameEventList::default_instance_ = v8;
    v9 = operator new(0x28u);
    CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t(v9);
    CMsgSource1LegacyGameEventList_key_t::default_instance_ = v9;
    v10 = operator new(0x40u);
    CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t(v10);
    CMsgSource1LegacyGameEventList_descriptor_t::default_instance_ = v10;
    v11 = operator new(0x30u);
    CMsgSource1LegacyListenEvents::CMsgSource1LegacyListenEvents(v11);
    CMsgSource1LegacyListenEvents::default_instance_ = v11;
    v12 = operator new(0x40u);
    CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(v12);
    CMsgSource1LegacyGameEvent::default_instance_ = v12;
    v13 = operator new(0x40u);
    CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t(v13);
    CMsgSource1LegacyGameEvent_key_t::default_instance_ = v13;
    v14 = operator new(0x38u);
    CMsgSosStartSoundEvent::CMsgSosStartSoundEvent(v14);
    CMsgSosStartSoundEvent::default_instance_ = v14;
    v15 = operator new(0x20u);
    CMsgSosStopSoundEvent::CMsgSosStopSoundEvent(v15);
    CMsgSosStopSoundEvent::default_instance_ = v15;
    v16 = operator new(0x20u);
    CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash(v16);
    CMsgSosStopSoundEventHash::default_instance_ = v16;
    v17 = operator new(0x28u);
    CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams(v17);
    CMsgSosSetSoundEventParams::default_instance_ = v17;
    v18 = operator new(0x28u);
    CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields(v18);
    CMsgSosSetLibraryStackFields::default_instance_ = v18;
    CMsgPlaceDecalEvent::InitAsDefaultInstance(CMsgPlaceDecalEvent::default_instance_);
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_gameevents_2eproto, v19);
  }
}


// EBaseGameEvents_descriptor  (line 554, @0x0000000001b03410, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::EBaseGameEvents_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EBaseGameEvents_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EBaseGameEvents_descriptor_;
}


// EBaseGameEvents_IsValid  (line 558, @0x0000000001b034a0, libserver.so)
bool __fastcall EBaseGameEvents_IsValid(int value)
{
  return (value - 200) <= 0xC;
}


// CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent  (line 587, @0x0000000001b03590, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgVDebugGameSessionIDEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgVDebugGameSessionIDEvent::New, protobuf_AddDesc_gameevents_2eproto
void __fastcall CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent(CMsgVDebugGameSessionIDEvent *const this)
{
  *this = off_3F76C50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgVDebugGameSessionIDEvent::SharedCtor(this);
}


// CMsgVDebugGameSessionIDEvent::InitAsDefaultInstance  (line 593, @0x0000000001b034c0, libserver.so)
void __fastcall CMsgVDebugGameSessionIDEvent::InitAsDefaultInstance(CMsgVDebugGameSessionIDEvent *const this)
{
  ;
}


// CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent  (line 596, @0x0000000001b03870, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgVDebugGameSessionIDEvent::SharedCtor, CMsgVDebugGameSessionIDEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent(
        CMsgVDebugGameSessionIDEvent *const this,
        const CMsgVDebugGameSessionIDEvent *const from)
{
  *this = off_3F76C50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgVDebugGameSessionIDEvent::SharedCtor(this);
  CMsgVDebugGameSessionIDEvent::MergeFrom(this, from);
}


// CMsgVDebugGameSessionIDEvent::SharedCtor  (line 603, @0x0000000001b034d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent
void __fastcall CMsgVDebugGameSessionIDEvent::SharedCtor(CMsgVDebugGameSessionIDEvent *const this)
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


// CMsgVDebugGameSessionIDEvent::~CMsgVDebugGameSessionIDEvent  (line 611, @0x0000000001b036a0, libserver.so)
// calls: CMsgVDebugGameSessionIDEvent::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgVDebugGameSessionIDEvent::~CMsgVDebugGameSessionIDEvent
void __fastcall CMsgVDebugGameSessionIDEvent::~CMsgVDebugGameSessionIDEvent(CMsgVDebugGameSessionIDEvent *const this)
{
  *this = off_3F76C50;
  CMsgVDebugGameSessionIDEvent::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgVDebugGameSessionIDEvent::~CMsgVDebugGameSessionIDEvent  (line 611, @0x0000000001b036e0, libserver.so)
// calls: CMsgVDebugGameSessionIDEvent::~CMsgVDebugGameSessionIDEvent, operator delete
void __fastcall CMsgVDebugGameSessionIDEvent::~CMsgVDebugGameSessionIDEvent(CMsgVDebugGameSessionIDEvent *const this)
{
  CMsgVDebugGameSessionIDEvent::~CMsgVDebugGameSessionIDEvent(this);
  operator delete(this);
}


// CMsgVDebugGameSessionIDEvent::SharedDtor  (line 616, @0x0000000001b03630, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgVDebugGameSessionIDEvent::~CMsgVDebugGameSessionIDEvent
void __fastcall CMsgVDebugGameSessionIDEvent::SharedDtor(CMsgVDebugGameSessionIDEvent *const this)
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


// CMsgVDebugGameSessionIDEvent::SetCachedSize  (line 622, @0x0000000001afdf50, libserver.so)
void __fastcall CMsgVDebugGameSessionIDEvent::SetCachedSize(const CMsgVDebugGameSessionIDEvent *const this, int size)
{
  *(this + 5) = size;
}


// CMsgVDebugGameSessionIDEvent::descriptor  (line 627, @0x0000000001b03700, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgVDebugGameSessionIDEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_;
}


// CMsgVDebugGameSessionIDEvent::default_instance  (line 632, @0x0000000001b09bc0, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgVDebugGameSessionIDEvent::default_instance_
const CMsgVDebugGameSessionIDEvent *__cdecl CMsgVDebugGameSessionIDEvent::default_instance()
{
  const CMsgVDebugGameSessionIDEvent *result; // rax

  result = CMsgVDebugGameSessionIDEvent::default_instance_;
  if ( CMsgVDebugGameSessionIDEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgVDebugGameSessionIDEvent::default_instance_;
  }
  return result;
}


// CMsgVDebugGameSessionIDEvent::New  (line 639, @0x0000000001b035f0, libserver.so)
// calls: operator new, CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent, operator delete, _Unwind_Resume
CMsgVDebugGameSessionIDEvent *__fastcall CMsgVDebugGameSessionIDEvent::New(
        const CMsgVDebugGameSessionIDEvent *const this)
{
  CMsgVDebugGameSessionIDEvent *v1; // rbx

  v1 = operator new(0x28u);
  CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent(v1);
  return v1;
}


// CMsgVDebugGameSessionIDEvent::Clear  (line 643, @0x0000000001afe8c0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgVDebugGameSessionIDEvent::Clear(CMsgVDebugGameSessionIDEvent *const this)
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


// CMsgVDebugGameSessionIDEvent::MergePartialFromCodedStream  (line 654, @0x0000000001b02210, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_gamesessionid, set_has_clientid, set_has_gamesessionid
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CMsgVDebugGameSessionIDEvent::MergePartialFromCodedStream(
        CMsgVDebugGameSessionIDEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  unsigned __int8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  google::protobuf::uint8 *v9; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  unsigned int v13; // edx
  unsigned int v14[9]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = this + 8;
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
    if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v14);
      if ( !result )
        return result;
      v13 = v14[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 8) = v13;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      v9 = (buffer + 1);
      input->buffer_ = v9;
parse_gamesessionid:
      *(this + 4) |= 2u;
      result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v9);
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
    goto parse_gamesessionid;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgVDebugGameSessionIDEvent::SerializeWithCachedSizes  (line 717, @0x0000000001afed90, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgVDebugGameSessionIDEvent::SerializeWithCachedSizes(
        const CMsgVDebugGameSessionIDEvent *const this,
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
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 8), output, v3);
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


// CMsgVDebugGameSessionIDEvent::SerializeWithCachedSizesToArray  (line 742, @0x0000000001b00a20, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CMsgVDebugGameSessionIDEvent::SerializeWithCachedSizesToArray(
        const CMsgVDebugGameSessionIDEvent *const this,
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


// CMsgVDebugGameSessionIDEvent::ByteSize  (line 769, @0x0000000001b00160, libserver.so)  // inlines: Int32Size, StringSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CMsgVDebugGameSessionIDEvent::ByteSize(const CMsgVDebugGameSessionIDEvent *const this)
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
  if ( v4 == 0 )
    goto LABEL_7;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
    goto LABEL_6;
  v6 = *(this + 8);
  if ( v6 >= 0 )
  {
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v7 + 1;
    }
LABEL_6:
    if ( (v5 & 2) == 0 )
      goto LABEL_7;
    goto LABEL_11;
  }
  v3 = 11;
  if ( (v4 & 2) != 0 )
  {
LABEL_11:
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
LABEL_7:
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgVDebugGameSessionIDEvent::MergeFrom  (line 799, @0x0000000001b038e0, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgVDebugGameSessionIDEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgVDebugGameSessionIDEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgVDebugGameSessionIDEvent
void __fastcall CMsgVDebugGameSessionIDEvent::MergeFrom(
        CMsgVDebugGameSessionIDEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgVDebugGameSessionIDEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      800);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgVDebugGameSessionIDEvent,
               0)) != 0 )
  {
    CMsgVDebugGameSessionIDEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgVDebugGameSessionIDEvent::MergeFrom  (line 811, @0x0000000001b03790, libserver.so)  // inlines: set_clientid, set_gamesessionid, set_has_clientid, set_has_gamesessionid
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgVDebugGameSessionIDEvent::CMsgVDebugGameSessionIDEvent, CMsgVDebugGameSessionIDEvent::MergeFrom, CMsgVDebugGameSessionIDEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgVDebugGameSessionIDEvent::MergeFrom(
        CMsgVDebugGameSessionIDEvent *const this,
        const CMsgVDebugGameSessionIDEvent *const from)
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
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      812);
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


// CMsgVDebugGameSessionIDEvent::CopyFrom  (line 824, @0x0000000001afdf60, libserver.so)
void __fastcall CMsgVDebugGameSessionIDEvent::CopyFrom(
        CMsgVDebugGameSessionIDEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgVDebugGameSessionIDEvent::CopyFrom  (line 830, @0x0000000001b039c0, libserver.so)
// calls: CMsgVDebugGameSessionIDEvent::MergeFrom
void __fastcall CMsgVDebugGameSessionIDEvent::CopyFrom(
        CMsgVDebugGameSessionIDEvent *const this,
        const CMsgVDebugGameSessionIDEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgVDebugGameSessionIDEvent::MergeFrom(this, from);
  }
}


// CMsgVDebugGameSessionIDEvent::IsInitialized  (line 836, @0x0000000001afdfa0, libserver.so)
bool __fastcall CMsgVDebugGameSessionIDEvent::IsInitialized(const CMsgVDebugGameSessionIDEvent *const this)
{
  return 1;
}


// CMsgVDebugGameSessionIDEvent::Swap  (line 841, @0x0000000001b03a00, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgVDebugGameSessionIDEvent::Swap(
        CMsgVDebugGameSessionIDEvent *const this,
        CMsgVDebugGameSessionIDEvent *other)
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


// CMsgVDebugGameSessionIDEvent::GetMetadata  (line 851, @0x0000000001b00f90, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_, `anonymous namespace'::CMsgVDebugGameSessionIDEvent_reflection_
google::protobuf::Metadata __fastcall CMsgVDebugGameSessionIDEvent::GetMetadata(
        const CMsgVDebugGameSessionIDEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgVDebugGameSessionIDEvent_descriptor_;
  result.reflection = `anonymous namespace'::CMsgVDebugGameSessionIDEvent_reflection_;
  return result;
}


// CMsgPlaceDecalEvent::CMsgPlaceDecalEvent  (line 879, @0x0000000001b03af0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgPlaceDecalEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgPlaceDecalEvent::New, protobuf_AddDesc_gameevents_2eproto, CSchemaClassBinding<CDecalInfo>::ConstructInPlace, CSchemaClassBinding<CDecalInfo>::Allocate, CSchemaClassBinding<CDecalInfo>::AllocateAndCopyConstruct, CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CDecalGameSystem::AddDecalAndAssignToSlot, CDecalSaveRestoreBlockHandler::Restore, CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgPlaceDecalEvent::CMsgPlaceDecalEvent(CMsgPlaceDecalEvent *const this)
{
  *this = off_3F76D10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgPlaceDecalEvent::SharedCtor(this);
}


// CMsgPlaceDecalEvent::InitAsDefaultInstance  (line 885, @0x0000000001b03a50, libserver.so)
// calls: CMsgVector::default_instance
// callers: protobuf_AddDesc_gameevents_2eproto
void __fastcall CMsgPlaceDecalEvent::InitAsDefaultInstance(CMsgPlaceDecalEvent *const this)
{
  *(this + 3) = CMsgVector::default_instance();
  *(this + 4) = CMsgVector::default_instance();
  *(this + 5) = CMsgVector::default_instance();
}


// CMsgPlaceDecalEvent::CMsgPlaceDecalEvent  (line 891, @0x0000000001b03fe0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgPlaceDecalEvent::SharedCtor, CMsgPlaceDecalEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgPlaceDecalEvent::CMsgPlaceDecalEvent(
        CMsgPlaceDecalEvent *const this,
        const CMsgPlaceDecalEvent *const from)
{
  *this = off_3F76D10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgPlaceDecalEvent::SharedCtor(this);
  CMsgPlaceDecalEvent::MergeFrom(this, from);
}


// CMsgPlaceDecalEvent::SharedCtor  (line 898, @0x0000000001b03a80, libserver.so)  // inlines: memset
// callers: CMsgPlaceDecalEvent::CMsgPlaceDecalEvent
void __fastcall CMsgPlaceDecalEvent::SharedCtor(CMsgPlaceDecalEvent *const this)
{
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 68) = 0;
  *(this + 19) = 0;
  *(this + 20) = 0;
  *(this + 84) = 0;
  *(this + 85) = 0;
  *(this + 4) = 0;
}


// CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent  (line 917, @0x0000000001b03bd0, libserver.so)
// calls: CMsgPlaceDecalEvent::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent, CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::~CNetMessagePB, PlaceDecalEvent_t::~PlaceDecalEvent_t, CSchemaClassBinding<CDecalInfo>::DestructInPlace, CSchemaClassBinding<CDecalInfo>::Deallocate, CDecalInfo::~CDecalInfo, CDecalGameSystem::DeleteDecalAndFreeSlot, CDecalGameSystem::AddDecalAndAssignToSlot, CDecalSaveRestoreBlockHandler::Restore, CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent(CMsgPlaceDecalEvent *const this)
{
  *this = off_3F76D10;
  CMsgPlaceDecalEvent::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent  (line 917, @0x0000000001b03c10, libserver.so)
// calls: CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent, operator delete
void __fastcall CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent(CMsgPlaceDecalEvent *const this)
{
  CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent(this);
  operator delete(this);
}


// CMsgPlaceDecalEvent::SharedDtor  (line 922, @0x0000000001b03b70, libserver.so)
// callers: CMsgPlaceDecalEvent::~CMsgPlaceDecalEvent
// globals: CMsgPlaceDecalEvent::default_instance_
void __fastcall CMsgPlaceDecalEvent::SharedDtor(CMsgPlaceDecalEvent *const this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  if ( this != CMsgPlaceDecalEvent::default_instance_ )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
    v3 = *(this + 4);
    if ( v3 != 0 )
      (*(*v3 + 8LL))(v3);
    v4 = *(this + 5);
    if ( v4 != 0 )
      (*(*v4 + 8LL))(v4);
  }
}


// CMsgPlaceDecalEvent::SetCachedSize  (line 930, @0x0000000001afdfb0, libserver.so)
void __fastcall CMsgPlaceDecalEvent::SetCachedSize(const CMsgPlaceDecalEvent *const this, int size)
{
  *(this + 5) = size;
}


// CMsgPlaceDecalEvent::descriptor  (line 935, @0x0000000001b03c30, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgPlaceDecalEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_;
}


// CMsgPlaceDecalEvent::default_instance  (line 940, @0x0000000001b09bf0, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgPlaceDecalEvent::default_instance_
const CMsgPlaceDecalEvent *__cdecl CMsgPlaceDecalEvent::default_instance()
{
  const CMsgPlaceDecalEvent *result; // rax

  result = CMsgPlaceDecalEvent::default_instance_;
  if ( CMsgPlaceDecalEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgPlaceDecalEvent::default_instance_;
  }
  return result;
}


// CMsgPlaceDecalEvent::New  (line 947, @0x0000000001b03b30, libserver.so)
// calls: operator new, CMsgPlaceDecalEvent::CMsgPlaceDecalEvent, operator delete, _Unwind_Resume
CMsgPlaceDecalEvent *__fastcall CMsgPlaceDecalEvent::New(const CMsgPlaceDecalEvent *const this)
{
  CMsgPlaceDecalEvent *v1; // rbx

  v1 = operator new(0x58u);
  CMsgPlaceDecalEvent::CMsgPlaceDecalEvent(v1);
  return v1;
}


// CMsgPlaceDecalEvent::Clear  (line 951, @0x0000000001b0ad50, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), CMsgVector::Clear
void __fastcall CMsgPlaceDecalEvent::Clear(CMsgPlaceDecalEvent *const this)
{
  int v2; // eax
  bool v3; // zf
  CMsgVector *v4; // rdi
  CMsgVector *v5; // rdi
  CMsgVector *v6; // rdi

  v2 = *(this + 4);
  if ( v2 == 0 )
    goto LABEL_2;
  v2 = *(this + 4);
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 16) = 0;
  if ( (v2 & 1) != 0 )
  {
    v4 = *(this + 3);
    if ( v4 != 0 )
    {
      CMsgVector::Clear(v4);
      v2 = *(this + 4);
    }
  }
  if ( (v2 & 2) != 0 )
  {
    v5 = *(this + 4);
    if ( v5 != 0 )
    {
      CMsgVector::Clear(v5);
      v2 = *(this + 4);
    }
  }
  if ( (v2 & 4) != 0 && (v6 = *(this + 5)) != 0 )
  {
    CMsgVector::Clear(v6);
    if ( (*(this + 4) & 0x3F00) == 0 )
      goto LABEL_3;
  }
  else
  {
LABEL_2:
    if ( (v2 & 0x3F00) == 0 )
      goto LABEL_3;
  }
  *(this + 68) = 0;
  *(this + 76) = 0;
  *(this + 42) = 0;
LABEL_3:
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CMsgPlaceDecalEvent::MergePartialFromCodedStream  (line 985, @0x0000000001b0ae30, libserver.so)  // inlines: Advance, BufferSize, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadLittleEndian32, ReadMessageNoVirtual<CMsgVector>, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)7u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, memcpy, mutable_normal, mutable_position, mutable_saxis, set_has_boneindex, set_has_color, set_has_decalmaterialindex, set_has_depth, set_has_entityhandleindex, set_has_flags, set_has_height, set_has_is_adjacent, set_has_normal, set_has_position, set_has_saxis, set_has_skeletoninstancehash, set_has_translucenthit, set_has_width
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::PushLimit(int), CMsgVector::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume, google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// globals: jpt_1B0AEA0
bool __fastcall CMsgPlaceDecalEvent::MergePartialFromCodedStream(
        CMsgPlaceDecalEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *current_limit; // rcx
  unsigned int *v3; // r15
  unsigned int v4; // r13d
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *i; // rdx
  google::protobuf::io::CodedInputStream *v9; // rsi
  const google::protobuf::uint8 *v10; // rax
  const google::protobuf::uint8 *v11; // rax
  const google::protobuf::uint8 *v12; // rax
  int v13; // eax
  CMsgVector *v14; // rcx
  const google::protobuf::uint8 *v15; // rax
  int v16; // eax
  bool v17; // cc
  int v18; // eax
  CMsgVector *v19; // rcx
  const google::protobuf::uint8 *v20; // rax
  int v21; // eax
  bool result; // al
  CMsgVector *v23; // rdx
  const google::protobuf::uint8 *v24; // rax
  int v25; // eax
  int recursion_depth; // eax
  const google::protobuf::uint8 *v27; // rax
  int v28; // eax
  const google::protobuf::uint8 *v29; // rax
  int v30; // eax
  const google::protobuf::uint8 *v31; // rax
  const google::protobuf::uint8 *v32; // rax
  unsigned int v33; // edx
  const google::protobuf::uint8 *v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // edx
  const google::protobuf::uint8 *v37; // rax
  unsigned int v38; // edx
  const google::protobuf::uint8 *v39; // rax
  __int64 v40; // rdx
  const google::protobuf::uint8 *v41; // rax
  google::protobuf::uint32 TagFallback; // eax
  __int64 v43; // rdx
  char v44; // al
  int v45; // eax
  char v46; // al
  char Varint32Fallback; // al
  int v48; // [rsp+8h] [rbp-58h]
  CMsgVector *v49; // [rsp+8h] [rbp-58h]
  int v50; // [rsp+8h] [rbp-58h]
  CMsgVector *v51; // [rsp+10h] [rbp-50h]
  int v52; // [rsp+10h] [rbp-50h]
  CMsgVector *v53; // [rsp+10h] [rbp-50h]
  CMsgVector *v54; // [rsp+10h] [rbp-50h]
  CMsgVector *v55; // [rsp+10h] [rbp-50h]
  CMsgVector *v56; // [rsp+10h] [rbp-50h]
  CMsgVector *v57; // [rsp+10h] [rbp-50h]
  CMsgVector *v58; // [rsp+10h] [rbp-50h]
  CMsgVector *v59; // [rsp+10h] [rbp-50h]
  unsigned int *v60; // [rsp+18h] [rbp-48h]
  unsigned int v61[2]; // [rsp+28h] [rbp-38h] BYREF

  current_limit = (this + 72);
  v3 = (this + 76);
  v4 = this + 8;
  v60 = (this + 72);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( buffer < i )
    {
      v9 = *buffer;
      if ( v9 <= 0 )
        break;
      input->last_tag_ = v9;
      input->buffer_ = buffer + 1;
LABEL_5:
      switch ( v9 >> 3 )
      {
        case 1u:
          if ( v9 != 10 )
            goto handle_unusual;
          v23 = *(this + 3);
          *(this + 4) |= 1u;
          if ( v23 == 0 )
          {
            v59 = operator new(0x28u);
            CMsgVector::CMsgVector(v59);
            *(this + 3) = v59;
            v23 = v59;
          }
          v24 = input->buffer_;
          if ( v24 >= input->buffer_end_ || *v24 < 0 )
          {
            v56 = v23;
            Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v61);
            v23 = v56;
            if ( Varint32Fallback == 0 )
              return 0;
          }
          else
          {
            v61[0] = *v24;
            input->buffer_ = v24 + 1;
          }
          v25 = input->recursion_depth_ + 1;
          v17 = input->recursion_limit_ < v25;
          input->recursion_depth_ = v25;
          if ( v17 )
            return 0;
          v49 = v23;
          v52 = google::protobuf::io::CodedInputStream::PushLimit(input, v61[0]);
          if ( !CMsgVector::MergePartialFromCodedStream(v49, input) || !input->legitimate_message_end_ )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(input, v52);
          recursion_depth = input->recursion_depth_;
          if ( recursion_depth > 0 )
            input->recursion_depth_ = recursion_depth - 1;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 18 )
            continue;
          input->buffer_ = buffer + 1;
parse_normal:
          v14 = *(this + 4);
          *(this + 4) |= 2u;
          if ( v14 == 0 )
          {
            v58 = operator new(0x28u);
            CMsgVector::CMsgVector(v58);
            *(this + 4) = v58;
            v14 = v58;
          }
          v15 = input->buffer_;
          if ( v15 >= input->buffer_end_ || *v15 < 0 )
          {
            v53 = v14;
            v44 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v61);
            v14 = v53;
            if ( v44 == 0 )
              return 0;
          }
          else
          {
            v61[0] = *v15;
            input->buffer_ = v15 + 1;
          }
          v16 = input->recursion_depth_ + 1;
          v17 = input->recursion_limit_ < v16;
          input->recursion_depth_ = v16;
          if ( v17 )
            return 0;
          v51 = v14;
          v48 = google::protobuf::io::CodedInputStream::PushLimit(input, v61[0]);
          if ( !CMsgVector::MergePartialFromCodedStream(v51, input) || !input->legitimate_message_end_ )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(input, v48);
          v18 = input->recursion_depth_;
          if ( v18 > 0 )
            input->recursion_depth_ = v18 - 1;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 26 )
            continue;
          input->buffer_ = buffer + 1;
parse_saxis:
          v19 = *(this + 5);
          *(this + 4) |= 4u;
          if ( v19 == 0 )
          {
            v57 = operator new(0x28u);
            CMsgVector::CMsgVector(v57);
            *(this + 5) = v57;
            v19 = v57;
          }
          v20 = input->buffer_;
          if ( v20 >= input->buffer_end_ || *v20 < 0 )
          {
            v55 = v19;
            v46 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v61);
            v19 = v55;
            if ( v46 == 0 )
              return 0;
          }
          else
          {
            v61[0] = *v20;
            input->buffer_ = v20 + 1;
          }
          v21 = input->recursion_depth_ + 1;
          v17 = input->recursion_limit_ < v21;
          input->recursion_depth_ = v21;
          if ( v17 )
            return 0;
          v54 = v19;
          v50 = google::protobuf::io::CodedInputStream::PushLimit(input, v61[0]);
          if ( !CMsgVector::MergePartialFromCodedStream(v54, input) || !input->legitimate_message_end_ )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(input, v50);
          v45 = input->recursion_depth_;
          if ( v45 > 0 )
            input->recursion_depth_ = v45 - 1;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 32 )
            continue;
          v27 = buffer + 1;
          input->buffer_ = v27;
parse_decalmaterialindex:
          if ( i <= v27 || ((v28 = *v27) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 12) == 0 )
              return 0;
          }
          else
          {
            *(this + 12) = v28;
            ++input->buffer_;
          }
          *(this + 4) |= 8u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 40 )
            continue;
          v12 = buffer + 1;
          input->buffer_ = v12;
parse_flags:
          if ( i <= v12 || ((v13 = *v12) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 13) == 0 )
              return 0;
          }
          else
          {
            *(this + 13) = v13;
            ++input->buffer_;
          }
          *(this + 4) |= 0x10u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 53 )
            continue;
          v10 = buffer + 1;
          input->buffer_ = v10;
parse_color:
          if ( i - v10 <= 3 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, this + 14) == 0 )
              return 0;
          }
          else
          {
            *(this + 14) = *v10;
            input->buffer_ += 4;
          }
          *(this + 4) |= 0x20u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer < i && *buffer == 61 )
          {
            v11 = buffer + 1;
            input->buffer_ = v11;
parse_width:
            if ( i - v11 <= 3 )
            {
              result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v61);
              if ( !result )
                return result;
              v36 = v61[0];
            }
            else
            {
              v36 = *v11;
              input->buffer_ = v11 + 4;
            }
            *(this + 4) |= 0x40u;
            *(this + 15) = v36;
            buffer = input->buffer_;
            i = input->buffer_end_;
            if ( buffer < i && *buffer == 69 )
            {
              v34 = buffer + 1;
              input->buffer_ = v34;
parse_height:
              if ( i - v34 <= 3 )
              {
                result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v61);
                if ( !result )
                  return result;
                v35 = v61[0];
              }
              else
              {
                v35 = *v34;
                input->buffer_ = v34 + 4;
              }
              *(this + 4) |= 0x80u;
              *(this + 16) = v35;
              buffer = input->buffer_;
              i = input->buffer_end_;
              if ( buffer < i && *buffer == 77 )
              {
                v32 = buffer + 1;
                input->buffer_ = v32;
parse_depth:
                if ( i - v32 <= 3 )
                {
                  result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v61);
                  if ( !result )
                    return result;
                  v33 = v61[0];
                }
                else
                {
                  v33 = *v32;
                  input->buffer_ = v32 + 4;
                }
                *(this + 4) |= 0x100u;
                *(this + 17) = v33;
                buffer = input->buffer_;
                i = input->buffer_end_;
                if ( buffer < i && *buffer == 80 )
                {
                  v29 = buffer + 1;
                  input->buffer_ = v29;
parse_entityhandleindex:
                  if ( v29 >= i || ((v30 = *v29) & 0x80u) != 0 )
                  {
                    if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v60) == 0 )
                      return 0;
                  }
                  else
                  {
                    *(this + 18) = v30;
                    ++input->buffer_;
                  }
                  *(this + 4) |= 0x200u;
                  buffer = input->buffer_;
                  i = input->buffer_end_;
                  if ( buffer < i && *buffer == 93 )
                  {
                    v31 = buffer + 1;
                    input->buffer_ = v31;
parse_skeletoninstancehash:
                    if ( i - v31 <= 3 )
                    {
                      if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v3) == 0 )
                        return 0;
                    }
                    else
                    {
                      *v3 = *v31;
                      input->buffer_ += 4;
                    }
                    *(this + 4) |= 0x400u;
                    buffer = input->buffer_;
                    i = input->buffer_end_;
                    if ( buffer < i && *buffer == 96 )
                    {
                      v37 = buffer + 1;
                      input->buffer_ = v37;
parse_boneindex:
                      if ( v37 >= i || ((v38 = *v37) & 0x80u) != 0 )
                      {
                        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v61);
                        if ( !result )
                          return result;
                        v38 = v61[0];
                      }
                      else
                      {
                        input->buffer_ = v37 + 1;
                      }
                      *(this + 4) |= 0x800u;
                      *(this + 20) = v38;
                      buffer = input->buffer_;
                      i = input->buffer_end_;
                      if ( buffer < i && *buffer == 104 )
                      {
                        v39 = buffer + 1;
                        input->buffer_ = v39;
parse_translucenthit:
                        if ( v39 >= i || ((v40 = *v39) & 0x80u) != 0LL )
                        {
                          result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v61);
                          if ( !result )
                            return result;
                          v40 = *v61;
                        }
                        else
                        {
                          input->buffer_ = v39 + 1;
                        }
                        *(this + 84) = v40 != 0;
                        *(this + 4) |= 0x1000u;
                        buffer = input->buffer_;
                        i = input->buffer_end_;
                        if ( buffer < i && *buffer == 112 )
                        {
                          v41 = buffer + 1;
                          input->buffer_ = v41;
parse_is_adjacent:
                          if ( i <= v41 || ((v43 = *v41) & 0x80u) != 0LL )
                          {
                            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v61);
                            if ( !result )
                              return result;
                            v43 = *v61;
                          }
                          else
                          {
                            input->buffer_ = v41 + 1;
                          }
                          *(this + 85) = v43 != 0;
                          *(this + 4) |= 0x2000u;
                          buffer = input->buffer_;
                          i = input->buffer_end_;
                          if ( buffer == i )
                          {
                            if ( input->buffer_size_after_limit_ != 0
                              || (current_limit = input->current_limit_, input->total_bytes_read_ == current_limit) )
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
                  }
                }
              }
            }
          }
          break;
        case 2u:
          if ( v9 != 18 )
            goto handle_unusual;
          goto parse_normal;
        case 3u:
          if ( v9 == 26 )
            goto parse_saxis;
          if ( v9 == 0 )
            return 1;
          goto LABEL_8;
        case 4u:
          if ( v9 != 32 )
            goto handle_unusual;
          v27 = input->buffer_;
          i = input->buffer_end_;
          goto parse_decalmaterialindex;
        case 5u:
          if ( v9 != 40 )
            goto handle_unusual;
          v12 = input->buffer_;
          i = input->buffer_end_;
          goto parse_flags;
        case 6u:
          if ( v9 != 53 )
            goto handle_unusual;
          v10 = input->buffer_;
          i = input->buffer_end_;
          goto parse_color;
        case 7u:
          if ( v9 != 61 )
            goto handle_unusual;
          v11 = input->buffer_;
          i = input->buffer_end_;
          goto parse_width;
        case 8u:
          if ( v9 != 69 )
            goto handle_unusual;
          v34 = input->buffer_;
          i = input->buffer_end_;
          goto parse_height;
        case 9u:
          if ( v9 != 77 )
            goto handle_unusual;
          v32 = input->buffer_;
          i = input->buffer_end_;
          goto parse_depth;
        case 0xAu:
          if ( v9 != 80 )
            goto handle_unusual;
          v29 = input->buffer_;
          i = input->buffer_end_;
          goto parse_entityhandleindex;
        case 0xBu:
          if ( v9 != 93 )
            goto handle_unusual;
          v31 = input->buffer_;
          i = input->buffer_end_;
          goto parse_skeletoninstancehash;
        case 0xCu:
          if ( v9 != 96 )
            goto handle_unusual;
          v37 = input->buffer_;
          i = input->buffer_end_;
          goto parse_boneindex;
        case 0xDu:
          if ( v9 != 104 )
            goto handle_unusual;
          v39 = input->buffer_;
          i = input->buffer_end_;
          goto parse_translucenthit;
        case 0xEu:
          if ( v9 != 112 )
            goto handle_unusual;
          v41 = input->buffer_;
          i = input->buffer_end_;
          goto parse_is_adjacent;
        default:
          goto handle_unusual;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v9 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      goto LABEL_5;
handle_unusual:
    if ( v9 == 0 )
      return 1;
LABEL_8:
    if ( (v9 & 7) == 4 )
      break;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v9, v4, current_limit) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CMsgPlaceDecalEvent::SerializeWithCachedSizes  (line 1220, @0x0000000001aff510, libserver.so)  // inlines: empty, normal, position, saxis
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
// globals: CMsgPlaceDecalEvent::default_instance_
void __fastcall CMsgPlaceDecalEvent::SerializeWithCachedSizes(
        const CMsgPlaceDecalEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  const google::protobuf::Descriptor *containing_type; // rsi
  const google::protobuf::MessageOptions *options; // rsi
  __int64 v9; // rsi
  _QWORD *v10; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CMsgPlaceDecalEvent::default_instance_->containing_type_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_0 + 1, containing_type, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
      options = CMsgPlaceDecalEvent::default_instance_->options_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, options, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 4) != 0 )
  {
    v9 = *(this + 5);
    if ( v9 == 0 )
      v9 = *&CMsgPlaceDecalEvent::default_instance_->is_placeholder_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 1, v9, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 8) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 2, *(this + 12), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x10) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 3, *(this + 13), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x20) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFixed32(&loc_6, *(this + 14), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x40) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_6 + 1, output, *(this + 15), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x80u) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&stru_8, output, *(this + 16), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x100) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&stru_9, output, *(this + 17), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x200) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_A, *(this + 18), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x400) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFixed32(&stru_B, *(this + 19), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x800) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&stru_C, *(this + 20), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x1000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&stru_D, *(this + 84), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x2000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&stru_E, *(this + 85), output, v3);
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


// CMsgPlaceDecalEvent::SerializeWithCachedSizesToArray  (line 1303, @0x0000000001b0b830, libserver.so)  // inlines: GetCachedSize, WriteBoolNoTagToArray, WriteBoolToArray, WriteFixed32NoTagToArray, WriteFixed32ToArray, WriteFloatNoTagToArray, WriteFloatToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian32ToArray, WriteMessageNoVirtualToArray<CMsgVector>, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, memcpy, normal, position, saxis
// calls: CMsgVector::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// globals: CMsgPlaceDecalEvent::default_instance_
google::protobuf::uint8 *__fastcall CMsgPlaceDecalEvent::SerializeWithCachedSizesToArray(
        const CMsgPlaceDecalEvent *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  unsigned int *containing_type; // r12
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::uint8 *v7; // rsi
  unsigned int *options; // r12
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::uint8 *v10; // rsi
  unsigned int *v11; // r12
  google::protobuf::io::CodedOutputStream *v12; // rdi
  google::protobuf::uint8 *v13; // rsi
  google::protobuf::io::CodedOutputStream *v14; // rdi
  google::protobuf::io::CodedOutputStream *v15; // rdi
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  google::protobuf::io::CodedOutputStream *v20; // rdi
  int v21; // edx
  google::protobuf::io::CodedOutputStream *v22; // rdi
  google::protobuf::uint8 *v23; // rsi
  google::protobuf::uint8 v24; // dl
  google::protobuf::uint8 v25; // dl
  __int64 v26; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
    {
      v4 = CMsgPlaceDecalEvent::default_instance_;
      containing_type = CMsgPlaceDecalEvent::default_instance_->containing_type_;
    }
    *target = 10;
    v6 = containing_type[5];
    if ( v6 > 0x7F )
    {
      v7 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v6, target + 1, v4);
    }
    else
    {
      target[1] = v6;
      v7 = target + 2;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(containing_type, v7);
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
    {
      v4 = CMsgPlaceDecalEvent::default_instance_;
      options = CMsgPlaceDecalEvent::default_instance_->options_;
    }
    *result = 18;
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
    result = CMsgVector::SerializeWithCachedSizesToArray(options, v10);
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v11 = *(this + 5);
    if ( v11 == 0 )
    {
      v4 = CMsgPlaceDecalEvent::default_instance_;
      v11 = *&CMsgPlaceDecalEvent::default_instance_->is_placeholder_;
    }
    *result = 26;
    v12 = v11[5];
    if ( v12 > 0x7F )
    {
      v13 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v12, result + 1, v4);
    }
    else
    {
      result[1] = v12;
      v13 = result + 2;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(v11, v13);
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v14 = *(this + 12);
    *result = 32;
    if ( v14 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v14, result + 1, v4);
    }
    else
    {
      result[1] = v14;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v15 = *(this + 13);
    *result = 40;
    if ( v15 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v15, result + 1, v4);
    }
    else
    {
      result[1] = v15;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v16 = *(this + 14);
    *result = 53;
    result += 5;
    *(result - 1) = v16;
    v4 = *(this + 4);
  }
  if ( (v4 & 0x40) != 0 )
  {
    v17 = *(this + 15);
    *result = 61;
    result += 5;
    *(result - 1) = v17;
    v4 = *(this + 4);
  }
  if ( v4 < 0 )
  {
    v18 = *(this + 16);
    *result = 69;
    result += 5;
    *(result - 1) = v18;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 1) != 0 )
  {
    v19 = *(this + 17);
    *result = 77;
    result += 5;
    *(result - 1) = v19;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 2) != 0 )
  {
    v20 = *(this + 18);
    *result = 80;
    if ( v20 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v20, result + 1, v4);
    }
    else
    {
      result[1] = v20;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 4) != 0 )
  {
    v21 = *(this + 19);
    *result = 93;
    result += 5;
    *(result - 1) = v21;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 8) != 0 )
  {
    v22 = *(this + 20);
    v23 = result + 1;
    *result = 96;
    if ( v22 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v22, v23, v4);
    }
    else if ( v22 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v22, v23, v4);
    }
    else
    {
      result[1] = v22;
      result += 2;
    }
    LODWORD(v4) = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x10) != 0 )
  {
    v24 = *(this + 84);
    *result = 104;
    result += 2;
    *(result - 1) = v24;
    LODWORD(v4) = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x20) != 0 )
  {
    v25 = *(this + 85);
    result += 2;
    *(result - 2) = 112;
    *(result - 1) = v25;
  }
  v26 = *(this + 1);
  if ( v26 != 0 && *(v26 + 8) != *v26 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v26);
  return result;
}


// CMsgPlaceDecalEvent::ByteSize  (line 1390, @0x0000000001b0baf0, libserver.so)  // inlines: Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CMsgVector>, UInt32Size, VarintSize32, VarintSize32SignExtended, empty, normal, position, saxis
// calls: CMsgVector::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// globals: CMsgPlaceDecalEvent::default_instance_
int __fastcall CMsgPlaceDecalEvent::ByteSize(const CMsgPlaceDecalEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // edx
  const google::protobuf::Descriptor *containing_type; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  const CMsgVector *options; // rdi
  unsigned int v9; // r13d
  int v10; // eax
  const CMsgVector *v11; // rdi
  unsigned int v12; // r13d
  int v13; // eax
  google::protobuf::io::CodedOutputStream *v14; // rdi
  google::protobuf::io::CodedOutputStream *v15; // rdi
  _QWORD *v16; // rax
  google::protobuf::io::CodedOutputStream *v18; // rdi
  int v19; // eax
  int v20; // eax
  google::protobuf::io::CodedOutputStream *v21; // rdi
  int v22; // eax
  int v23; // eax
  int v24; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = 0;
    if ( (v4 & 1) != 0 )
    {
      containing_type = *(this + 3);
      if ( containing_type == 0 )
        containing_type = CMsgPlaceDecalEvent::default_instance_->containing_type_;
      v6 = CMsgVector::ByteSize(containing_type);
      v7 = 1;
      if ( v6 > 0x7F )
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v4 = *(this + 4);
      v3 = v6 + v7 + 1;
    }
    if ( (v4 & 2) != 0 )
    {
      options = *(this + 4);
      if ( options == 0 )
        options = CMsgPlaceDecalEvent::default_instance_->options_;
      v9 = CMsgVector::ByteSize(options);
      v10 = 1;
      if ( v9 > 0x7F )
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      v4 = *(this + 4);
      v3 += v9 + v10 + 1;
    }
    if ( (v4 & 4) != 0 )
    {
      v11 = *(this + 5);
      if ( v11 == 0 )
        v11 = *&CMsgPlaceDecalEvent::default_instance_->is_placeholder_;
      v12 = CMsgVector::ByteSize(v11);
      v13 = 1;
      if ( v12 > 0x7F )
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, v1);
      v4 = *(this + 4);
      v3 += v12 + v13 + 1;
    }
    if ( (v4 & 8) != 0 )
    {
      v14 = *(this + 12);
      if ( v14 > 0x7F )
      {
        v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
        v4 = *(this + 4);
        v3 += v22 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v21 = *(this + 13);
      if ( v21 > 0x7F )
      {
        v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v21, v1);
        v4 = *(this + 4);
        v3 += v23 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v4 & 0x20) != 0 )
      v3 += 5;
    if ( (v4 & 0x40) != 0 )
      v3 += 5;
    if ( (v4 & 0x80u) != 0 )
      v3 += 5;
  }
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
      v3 += 5;
    if ( (v4 & 0x200) != 0 )
    {
      v15 = *(this + 18);
      if ( v15 > 0x7F )
      {
        v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v15, v1);
        v4 = *(this + 4);
        v3 += v24 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v4 & 0x400) != 0 )
      v3 += 5;
    if ( (v4 & 0x800) != 0 )
    {
      v18 = *(this + 20);
      v19 = 11;
      if ( v18 >= 0 )
      {
        LOBYTE(v19) = 2;
        if ( v18 > 0x7F )
        {
          v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v18, v1);
          v4 = *(this + 4);
          v19 = v20 + 1;
        }
      }
      v3 += v19;
    }
    if ( (v4 & 0x1000) != 0 )
      v3 += 2;
    if ( (v4 & 0x2000) != 0 )
      v3 += 2;
  }
  v16 = *(this + 1);
  if ( v16 != 0 && v16[1] != *v16 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgPlaceDecalEvent::MergeFrom  (line 1492, @0x0000000001b04050, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgPlaceDecalEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgPlaceDecalEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgPlaceDecalEvent
void __fastcall CMsgPlaceDecalEvent::MergeFrom(
        CMsgPlaceDecalEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgPlaceDecalEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      1493);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgPlaceDecalEvent, 0)) != 0 )
  {
    CMsgPlaceDecalEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgPlaceDecalEvent::MergeFrom  (line 1504, @0x0000000001b03cc0, libserver.so)  // inlines: mutable_normal, mutable_position, mutable_saxis, normal, position, saxis, set_boneindex, set_color, set_decalmaterialindex, set_depth, set_entityhandleindex, set_flags, set_has_boneindex, set_has_color, set_has_decalmaterialindex, set_has_depth, set_has_entityhandleindex, set_has_flags, set_has_height, set_has_is_adjacent, set_has_normal, set_has_position, set_has_saxis, set_has_skeletoninstancehash, set_has_translucenthit, set_has_width, set_height, set_is_adjacent, set_skeletoninstancehash, set_translucenthit, set_width
// calls: CMsgVector::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: CMsgPlaceDecalEvent::CMsgPlaceDecalEvent, CMsgPlaceDecalEvent::MergeFrom, CMsgPlaceDecalEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CMsgPlaceDecalEvent::default_instance_
void __fastcall CMsgPlaceDecalEvent::MergeFrom(CMsgPlaceDecalEvent *const this, const CMsgPlaceDecalEvent *const from)
{
  int v4; // eax
  const google::protobuf::Descriptor *containing_type; // r13
  CMsgVector *v6; // rdi
  const CMsgVector *options; // r13
  CMsgVector *v8; // rdi
  const CMsgVector *v9; // r13
  CMsgVector *v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // xmm0_4
  int v15; // xmm0_4
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char v19; // al
  char v20; // al
  int v21; // xmm0_4
  __int64 v22; // rax
  CMsgVector *v23; // r14
  CMsgVector *v24; // r14
  CMsgVector *v25; // r14
  char v26; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v27; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v27,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      1505);
    v22 = google::protobuf::internal::LogMessage::operator<<(&v27, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v26, v22);
    google::protobuf::internal::LogMessage::~LogMessage(&v27);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      containing_type = *(from + 3);
      if ( containing_type == 0 )
        containing_type = CMsgPlaceDecalEvent::default_instance_->containing_type_;
      v6 = *(this + 3);
      *(this + 4) |= 1u;
      if ( v6 == 0 )
      {
        v23 = operator new(0x28u);
        CMsgVector::CMsgVector(v23);
        *(this + 3) = v23;
        v6 = v23;
      }
      CMsgVector::MergeFrom(v6, containing_type);
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      options = *(from + 4);
      if ( options == 0 )
        options = CMsgPlaceDecalEvent::default_instance_->options_;
      v8 = *(this + 4);
      *(this + 4) |= 2u;
      if ( v8 == 0 )
      {
        v25 = operator new(0x28u);
        CMsgVector::CMsgVector(v25);
        *(this + 4) = v25;
        v8 = v25;
      }
      CMsgVector::MergeFrom(v8, options);
      v4 = *(from + 4);
    }
    if ( (v4 & 4) != 0 )
    {
      v9 = *(from + 5);
      if ( v9 == 0 )
        v9 = *&CMsgPlaceDecalEvent::default_instance_->is_placeholder_;
      v10 = *(this + 5);
      *(this + 4) |= 4u;
      if ( v10 == 0 )
      {
        v24 = operator new(0x28u);
        CMsgVector::CMsgVector(v24);
        *(this + 5) = v24;
        v10 = v24;
      }
      CMsgVector::MergeFrom(v10, v9);
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v11 = *(from + 12);
      *(this + 4) |= 8u;
      *(this + 12) = v11;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v12 = *(from + 13);
      *(this + 4) |= 0x10u;
      *(this + 13) = v12;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x20) != 0 )
    {
      v13 = *(from + 14);
      *(this + 4) |= 0x20u;
      *(this + 14) = v13;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x40) != 0 )
    {
      v14 = *(from + 15);
      *(this + 4) |= 0x40u;
      *(this + 15) = v14;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v21 = *(from + 16);
      *(this + 4) |= 0x80u;
      *(this + 16) = v21;
      v4 = *(from + 4);
    }
  }
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      v15 = *(from + 17);
      *(this + 4) |= 0x100u;
      *(this + 17) = v15;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x200) != 0 )
    {
      v16 = *(from + 18);
      *(this + 4) |= 0x200u;
      *(this + 18) = v16;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x400) != 0 )
    {
      v17 = *(from + 19);
      *(this + 4) |= 0x400u;
      *(this + 19) = v17;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x800) != 0 )
    {
      v18 = *(from + 20);
      *(this + 4) |= 0x800u;
      *(this + 20) = v18;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x1000) != 0 )
    {
      v19 = *(from + 84);
      *(this + 4) |= 0x1000u;
      *(this + 84) = v19;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x2000) != 0 )
    {
      v20 = *(from + 85);
      *(this + 4) |= 0x2000u;
      *(this + 85) = v20;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgPlaceDecalEvent::CopyFrom  (line 1555, @0x0000000001afdfc0, libserver.so)
void __fastcall CMsgPlaceDecalEvent::CopyFrom(
        CMsgPlaceDecalEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgPlaceDecalEvent::CopyFrom  (line 1561, @0x0000000001b04130, libserver.so)
// calls: CMsgPlaceDecalEvent::MergeFrom
// callers: CSchemaClassBinding<CDecalInfo>::Copy, CSchemaClassBinding<CDecalInfo>::AllocateAndCopyConstruct, CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy, CDecalGameSystem::AddDecalAndAssignToSlot
void __fastcall CMsgPlaceDecalEvent::CopyFrom(CMsgPlaceDecalEvent *const this, const CMsgPlaceDecalEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgPlaceDecalEvent::MergeFrom(this, from);
  }
}


// CMsgPlaceDecalEvent::IsInitialized  (line 1567, @0x0000000001afe000, libserver.so)
bool __fastcall CMsgPlaceDecalEvent::IsInitialized(const CMsgPlaceDecalEvent *const this)
{
  return 1;
}


// CMsgPlaceDecalEvent::Swap  (line 1572, @0x0000000001b04170, libserver.so)  // inlines: Swap, swap<CMsgVector*>, swap<bool>, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgPlaceDecalEvent::Swap(CMsgPlaceDecalEvent *const this, CMsgPlaceDecalEvent *other)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // xmm1_4
  int v6; // xmm1_4
  int v7; // xmm1_4
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rax

  if ( other != this )
  {
    v2 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v2;
    v3 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v3;
    v4 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
    LODWORD(v4) = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v4;
    LODWORD(v4) = *(this + 13);
    *(this + 13) = *(other + 13);
    *(other + 13) = v4;
    LODWORD(v4) = *(this + 14);
    *(this + 14) = *(other + 14);
    *(other + 14) = v4;
    v5 = *(this + 15);
    *(this + 15) = *(other + 15);
    *(other + 15) = v5;
    v6 = *(this + 16);
    *(this + 16) = *(other + 16);
    *(other + 16) = v6;
    v7 = *(this + 17);
    *(this + 17) = *(other + 17);
    v8 = *(other + 18);
    *(other + 17) = v7;
    LODWORD(v4) = *(this + 18);
    *(this + 18) = v8;
    v9 = *(other + 19);
    *(other + 18) = v4;
    LODWORD(v4) = *(this + 19);
    *(this + 19) = v9;
    v10 = *(other + 20);
    *(other + 19) = v4;
    LODWORD(v4) = *(this + 20);
    *(this + 20) = v10;
    LOBYTE(v10) = *(other + 84);
    *(other + 20) = v4;
    LOBYTE(v4) = *(this + 84);
    *(this + 84) = v10;
    LOBYTE(v10) = *(other + 85);
    *(other + 84) = v4;
    LOBYTE(v4) = *(this + 85);
    *(this + 85) = v10;
    v11 = *(other + 4);
    *(other + 85) = v4;
    LODWORD(v4) = *(this + 4);
    *(this + 4) = v11;
    v12 = *(other + 1);
    *(other + 4) = v4;
    v13 = *(this + 1);
    *(this + 1) = v12;
    LODWORD(v12) = *(other + 5);
    *(other + 1) = v13;
    LODWORD(v13) = *(this + 5);
    *(this + 5) = v12;
    *(other + 5) = v13;
  }
}


// CMsgPlaceDecalEvent::GetMetadata  (line 1594, @0x0000000001b01030, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_, `anonymous namespace'::CMsgPlaceDecalEvent_reflection_
google::protobuf::Metadata __fastcall CMsgPlaceDecalEvent::GetMetadata(const CMsgPlaceDecalEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgPlaceDecalEvent_descriptor_;
  result.reflection = `anonymous namespace'::CMsgPlaceDecalEvent_reflection_;
  return result;
}


// CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent  (line 1609, @0x0000000001b04280, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgClearWorldDecalsEvent::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<202, CMsgClearWorldDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CDecalGameSystem::ClearWorldDecals, CNetMessagePB<202, CMsgClearWorldDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent(CMsgClearWorldDecalsEvent *const this)
{
  *this = off_3F76DD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CMsgClearWorldDecalsEvent::InitAsDefaultInstance  (line 1615, @0x0000000001b04310, libserver.so)
void __fastcall CMsgClearWorldDecalsEvent::InitAsDefaultInstance(CMsgClearWorldDecalsEvent *const this)
{
  ;
}


// CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent  (line 1618, @0x0000000001b04490, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgClearWorldDecalsEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<202, CMsgClearWorldDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent(
        CMsgClearWorldDecalsEvent *const this,
        const CMsgClearWorldDecalsEvent *const from)
{
  *this = off_3F76DD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  CMsgClearWorldDecalsEvent::MergeFrom(this, from);
}


// CMsgClearWorldDecalsEvent::SharedCtor  (line 1625, @0x0000000001b04320, libserver.so)  // inlines: memset
void __fastcall CMsgClearWorldDecalsEvent::SharedCtor(CMsgClearWorldDecalsEvent *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent  (line 1631, @0x0000000001afe550, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<202, CMsgClearWorldDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::~CNetMessagePB, ClearWorldDecalsEvent_t::~ClearWorldDecalsEvent_t, CDecalGameSystem::ClearWorldDecals, CNetMessagePB<202, CMsgClearWorldDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent(CMsgClearWorldDecalsEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76DD0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent  (line 1631, @0x0000000001afe580, libserver.so)  // inlines: ~CMsgClearWorldDecalsEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CMsgClearWorldDecalsEvent::~CMsgClearWorldDecalsEvent(CMsgClearWorldDecalsEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76DD0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CMsgClearWorldDecalsEvent::SharedDtor  (line 1636, @0x0000000001b04340, libserver.so)
void __fastcall CMsgClearWorldDecalsEvent::SharedDtor(CMsgClearWorldDecalsEvent *const this)
{
  ;
}


// CMsgClearWorldDecalsEvent::SetCachedSize  (line 1641, @0x0000000001afe010, libserver.so)
void __fastcall CMsgClearWorldDecalsEvent::SetCachedSize(const CMsgClearWorldDecalsEvent *const this, int size)
{
  *(this + 5) = size;
}


// CMsgClearWorldDecalsEvent::descriptor  (line 1646, @0x0000000001b04350, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgClearWorldDecalsEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgClearWorldDecalsEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgClearWorldDecalsEvent_descriptor_;
}


// CMsgClearWorldDecalsEvent::default_instance  (line 1651, @0x0000000001b09c20, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgClearWorldDecalsEvent::default_instance_
const CMsgClearWorldDecalsEvent *__cdecl CMsgClearWorldDecalsEvent::default_instance()
{
  const CMsgClearWorldDecalsEvent *result; // rax

  result = CMsgClearWorldDecalsEvent::default_instance_;
  if ( CMsgClearWorldDecalsEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgClearWorldDecalsEvent::default_instance_;
  }
  return result;
}


// CMsgClearWorldDecalsEvent::New  (line 1658, @0x0000000001b042d0, libserver.so)
// calls: operator new, CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent, operator delete, _Unwind_Resume
CMsgClearWorldDecalsEvent *__fastcall CMsgClearWorldDecalsEvent::New(const CMsgClearWorldDecalsEvent *const this)
{
  CMsgClearWorldDecalsEvent *v1; // rbx

  v1 = operator new(0x20u);
  CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent(v1);
  return v1;
}


// CMsgClearWorldDecalsEvent::Clear  (line 1662, @0x0000000001afe780, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CMsgClearWorldDecalsEvent::Clear(CMsgClearWorldDecalsEvent *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgClearWorldDecalsEvent::MergePartialFromCodedStream  (line 1668, @0x0000000001b031b0, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_flagstoclear
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CMsgClearWorldDecalsEvent::MergePartialFromCodedStream(
        CMsgClearWorldDecalsEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v3; // r14
  unsigned int v5; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v13; // rax
  int v14; // eax

  v3 = (this + 24);
  v5 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
      goto LABEL_11;
LABEL_3:
    v9 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_11:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v10 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_8:
        if ( (v10 & 7) == 4 )
          return 1;
        if ( google::protobuf::internal::WireFormat::SkipField(input, v10, v5, v2) == 0 )
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
    if ( v10 >> 3 != 1 || v10 != 8 )
      break;
    v13 = input->buffer_;
    if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v3) == 0 )
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
  if ( v10 != 0 )
    goto LABEL_8;
  return 1;
}


// CMsgClearWorldDecalsEvent::SerializeWithCachedSizes  (line 1714, @0x0000000001aff290, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgClearWorldDecalsEvent::SerializeWithCachedSizes(
        const CMsgClearWorldDecalsEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  _QWORD *v6; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 6), output, v3);
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


// CMsgClearWorldDecalsEvent::SerializeWithCachedSizesToArray  (line 1729, @0x0000000001affe10, libserver.so)  // inlines: WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CMsgClearWorldDecalsEvent::SerializeWithCachedSizesToArray(
        const CMsgClearWorldDecalsEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::io::CodedOutputStream *v4; // rdi
  __int64 v5; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    v4 = *(this + 6);
    *target = 8;
    if ( v4 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v4, target + 1, v2);
    }
    else
    {
      target[1] = v4;
      target += 2;
    }
  }
  v5 = *(this + 1);
  if ( v5 == 0 || *(v5 + 8) == *v5 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v5);
}


// CMsgClearWorldDecalsEvent::ByteSize  (line 1745, @0x0000000001afeef0, libserver.so)  // inlines: UInt32Size, VarintSize32, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CMsgClearWorldDecalsEvent::ByteSize(const CMsgClearWorldDecalsEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  google::protobuf::io::CodedOutputStream *v7; // rdi

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v7 = *(this + 6);
    LOBYTE(v3) = 2;
    if ( v7 > 0x7F )
      v3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1) + 1;
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgClearWorldDecalsEvent::MergeFrom  (line 1768, @0x0000000001b04510, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgClearWorldDecalsEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgClearWorldDecalsEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgClearWorldDecalsEvent
void __fastcall CMsgClearWorldDecalsEvent::MergeFrom(
        CMsgClearWorldDecalsEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgClearWorldDecalsEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      1769);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgClearWorldDecalsEvent, 0)) != 0 )
  {
    CMsgClearWorldDecalsEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgClearWorldDecalsEvent::MergeFrom  (line 1780, @0x0000000001b043e0, libserver.so)  // inlines: set_flagstoclear, set_has_flagstoclear
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgClearWorldDecalsEvent::CMsgClearWorldDecalsEvent, CMsgClearWorldDecalsEvent::MergeFrom, CMsgClearWorldDecalsEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgClearWorldDecalsEvent::MergeFrom(
        CMsgClearWorldDecalsEvent *const this,
        const CMsgClearWorldDecalsEvent *const from)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      1781);
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


// CMsgClearWorldDecalsEvent::CopyFrom  (line 1790, @0x0000000001afe020, libserver.so)
void __fastcall CMsgClearWorldDecalsEvent::CopyFrom(
        CMsgClearWorldDecalsEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgClearWorldDecalsEvent::CopyFrom  (line 1796, @0x0000000001b045f0, libserver.so)
// calls: CMsgClearWorldDecalsEvent::MergeFrom
// callers: CNetMessagePB<202, CMsgClearWorldDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgClearWorldDecalsEvent::CopyFrom(
        CMsgClearWorldDecalsEvent *const this,
        const CMsgClearWorldDecalsEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgClearWorldDecalsEvent::MergeFrom(this, from);
  }
}


// CMsgClearWorldDecalsEvent::IsInitialized  (line 1802, @0x0000000001afe060, libserver.so)
bool __fastcall CMsgClearWorldDecalsEvent::IsInitialized(const CMsgClearWorldDecalsEvent *const this)
{
  return 1;
}


// CMsgClearWorldDecalsEvent::Swap  (line 1807, @0x0000000001b04630, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgClearWorldDecalsEvent::Swap(
        CMsgClearWorldDecalsEvent *const this,
        CMsgClearWorldDecalsEvent *other)
{
  int v2; // eax
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


// CMsgClearWorldDecalsEvent::GetMetadata  (line 1816, @0x0000000001b00d10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgClearWorldDecalsEvent_descriptor_, `anonymous namespace'::CMsgClearWorldDecalsEvent_reflection_
google::protobuf::Metadata __fastcall CMsgClearWorldDecalsEvent::GetMetadata(
        const CMsgClearWorldDecalsEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgClearWorldDecalsEvent_descriptor_;
  result.reflection = `anonymous namespace'::CMsgClearWorldDecalsEvent_reflection_;
  return result;
}


// CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent  (line 1831, @0x0000000001b04670, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgClearEntityDecalsEvent::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<203, CMsgClearEntityDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CDecalGameSystem::ClearEntityDecals, CNetMessagePB<203, CMsgClearEntityDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent(CMsgClearEntityDecalsEvent *const this)
{
  *this = off_3F76E90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CMsgClearEntityDecalsEvent::InitAsDefaultInstance  (line 1837, @0x0000000001b04700, libserver.so)
void __fastcall CMsgClearEntityDecalsEvent::InitAsDefaultInstance(CMsgClearEntityDecalsEvent *const this)
{
  ;
}


// CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent  (line 1840, @0x0000000001b04880, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgClearEntityDecalsEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<203, CMsgClearEntityDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent(
        CMsgClearEntityDecalsEvent *const this,
        const CMsgClearEntityDecalsEvent *const from)
{
  *this = off_3F76E90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  CMsgClearEntityDecalsEvent::MergeFrom(this, from);
}


// CMsgClearEntityDecalsEvent::SharedCtor  (line 1847, @0x0000000001b04710, libserver.so)  // inlines: memset
void __fastcall CMsgClearEntityDecalsEvent::SharedCtor(CMsgClearEntityDecalsEvent *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent  (line 1853, @0x0000000001afe5c0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<203, CMsgClearEntityDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::~CNetMessagePB, ClearEntityDecalsEvent_t::~ClearEntityDecalsEvent_t, CDecalGameSystem::ClearEntityDecals, CNetMessagePB<203, CMsgClearEntityDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent(CMsgClearEntityDecalsEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76E90;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent  (line 1853, @0x0000000001afe5f0, libserver.so)  // inlines: ~CMsgClearEntityDecalsEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CMsgClearEntityDecalsEvent::~CMsgClearEntityDecalsEvent(CMsgClearEntityDecalsEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76E90;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CMsgClearEntityDecalsEvent::SharedDtor  (line 1858, @0x0000000001b04730, libserver.so)
void __fastcall CMsgClearEntityDecalsEvent::SharedDtor(CMsgClearEntityDecalsEvent *const this)
{
  ;
}


// CMsgClearEntityDecalsEvent::SetCachedSize  (line 1863, @0x0000000001afe070, libserver.so)
void __fastcall CMsgClearEntityDecalsEvent::SetCachedSize(const CMsgClearEntityDecalsEvent *const this, int size)
{
  *(this + 5) = size;
}


// CMsgClearEntityDecalsEvent::descriptor  (line 1868, @0x0000000001b04740, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgClearEntityDecalsEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgClearEntityDecalsEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgClearEntityDecalsEvent_descriptor_;
}


// CMsgClearEntityDecalsEvent::default_instance  (line 1873, @0x0000000001b09c50, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgClearEntityDecalsEvent::default_instance_
const CMsgClearEntityDecalsEvent *__cdecl CMsgClearEntityDecalsEvent::default_instance()
{
  const CMsgClearEntityDecalsEvent *result; // rax

  result = CMsgClearEntityDecalsEvent::default_instance_;
  if ( CMsgClearEntityDecalsEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgClearEntityDecalsEvent::default_instance_;
  }
  return result;
}


// CMsgClearEntityDecalsEvent::New  (line 1880, @0x0000000001b046c0, libserver.so)
// calls: operator new, CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent, operator delete, _Unwind_Resume
CMsgClearEntityDecalsEvent *__fastcall CMsgClearEntityDecalsEvent::New(const CMsgClearEntityDecalsEvent *const this)
{
  CMsgClearEntityDecalsEvent *v1; // rbx

  v1 = operator new(0x20u);
  CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent(v1);
  return v1;
}


// CMsgClearEntityDecalsEvent::Clear  (line 1884, @0x0000000001afe7c0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CMsgClearEntityDecalsEvent::Clear(CMsgClearEntityDecalsEvent *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgClearEntityDecalsEvent::MergePartialFromCodedStream  (line 1890, @0x0000000001b03080, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_flagstoclear
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CMsgClearEntityDecalsEvent::MergePartialFromCodedStream(
        CMsgClearEntityDecalsEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v3; // r14
  unsigned int v5; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v13; // rax
  int v14; // eax

  v3 = (this + 24);
  v5 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
      goto LABEL_11;
LABEL_3:
    v9 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_11:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v10 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_8:
        if ( (v10 & 7) == 4 )
          return 1;
        if ( google::protobuf::internal::WireFormat::SkipField(input, v10, v5, v2) == 0 )
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
    if ( v10 >> 3 != 1 || v10 != 8 )
      break;
    v13 = input->buffer_;
    if ( v13 >= input->buffer_end_ || ((v14 = *v13) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v3) == 0 )
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
  if ( v10 != 0 )
    goto LABEL_8;
  return 1;
}


// CMsgClearEntityDecalsEvent::SerializeWithCachedSizes  (line 1936, @0x0000000001aff2f0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgClearEntityDecalsEvent::SerializeWithCachedSizes(
        const CMsgClearEntityDecalsEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  _QWORD *v6; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 6), output, v3);
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


// CMsgClearEntityDecalsEvent::SerializeWithCachedSizesToArray  (line 1951, @0x0000000001affe80, libserver.so)  // inlines: WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CMsgClearEntityDecalsEvent::SerializeWithCachedSizesToArray(
        const CMsgClearEntityDecalsEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::io::CodedOutputStream *v4; // rdi
  __int64 v5; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    v4 = *(this + 6);
    *target = 8;
    if ( v4 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v4, target + 1, v2);
    }
    else
    {
      target[1] = v4;
      target += 2;
    }
  }
  v5 = *(this + 1);
  if ( v5 == 0 || *(v5 + 8) == *v5 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v5);
}


// CMsgClearEntityDecalsEvent::ByteSize  (line 1967, @0x0000000001afef50, libserver.so)  // inlines: UInt32Size, VarintSize32, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CMsgClearEntityDecalsEvent::ByteSize(const CMsgClearEntityDecalsEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  google::protobuf::io::CodedOutputStream *v7; // rdi

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v7 = *(this + 6);
    LOBYTE(v3) = 2;
    if ( v7 > 0x7F )
      v3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1) + 1;
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgClearEntityDecalsEvent::MergeFrom  (line 1990, @0x0000000001b04900, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgClearEntityDecalsEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgClearEntityDecalsEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgClearEntityDecalsEvent
void __fastcall CMsgClearEntityDecalsEvent::MergeFrom(
        CMsgClearEntityDecalsEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgClearEntityDecalsEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      1991);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgClearEntityDecalsEvent,
               0)) != 0 )
  {
    CMsgClearEntityDecalsEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgClearEntityDecalsEvent::MergeFrom  (line 2002, @0x0000000001b047d0, libserver.so)  // inlines: set_flagstoclear, set_has_flagstoclear
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgClearEntityDecalsEvent::CMsgClearEntityDecalsEvent, CMsgClearEntityDecalsEvent::MergeFrom, CMsgClearEntityDecalsEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgClearEntityDecalsEvent::MergeFrom(
        CMsgClearEntityDecalsEvent *const this,
        const CMsgClearEntityDecalsEvent *const from)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      2003);
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


// CMsgClearEntityDecalsEvent::CopyFrom  (line 2012, @0x0000000001afe080, libserver.so)
void __fastcall CMsgClearEntityDecalsEvent::CopyFrom(
        CMsgClearEntityDecalsEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgClearEntityDecalsEvent::CopyFrom  (line 2018, @0x0000000001b049e0, libserver.so)
// calls: CMsgClearEntityDecalsEvent::MergeFrom
// callers: CNetMessagePB<203, CMsgClearEntityDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgClearEntityDecalsEvent::CopyFrom(
        CMsgClearEntityDecalsEvent *const this,
        const CMsgClearEntityDecalsEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgClearEntityDecalsEvent::MergeFrom(this, from);
  }
}


// CMsgClearEntityDecalsEvent::IsInitialized  (line 2024, @0x0000000001afe0c0, libserver.so)
bool __fastcall CMsgClearEntityDecalsEvent::IsInitialized(const CMsgClearEntityDecalsEvent *const this)
{
  return 1;
}


// CMsgClearEntityDecalsEvent::Swap  (line 2029, @0x0000000001b04a20, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgClearEntityDecalsEvent::Swap(
        CMsgClearEntityDecalsEvent *const this,
        CMsgClearEntityDecalsEvent *other)
{
  int v2; // eax
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


// CMsgClearEntityDecalsEvent::GetMetadata  (line 2038, @0x0000000001b00db0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgClearEntityDecalsEvent_descriptor_, `anonymous namespace'::CMsgClearEntityDecalsEvent_reflection_
google::protobuf::Metadata __fastcall CMsgClearEntityDecalsEvent::GetMetadata(
        const CMsgClearEntityDecalsEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgClearEntityDecalsEvent_descriptor_;
  result.reflection = `anonymous namespace'::CMsgClearEntityDecalsEvent_reflection_;
  return result;
}


// CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent  (line 2055, @0x0000000001b04a60, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgClearDecalsForSkeletonInstanceEvent::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<204, CMsgClearDecalsForSkeletonInstanceEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CDecalGameSystem::ClearDecalsForSkeletonInstance, CNetMessagePB<204, CMsgClearDecalsForSkeletonInstanceEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent(
        CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  *this = off_3F76F50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CMsgClearDecalsForSkeletonInstanceEvent::InitAsDefaultInstance  (line 2061, @0x0000000001b04b00, libserver.so)
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::InitAsDefaultInstance(
        CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  ;
}


// CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent  (line 2064, @0x0000000001b04cc0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<204, CMsgClearDecalsForSkeletonInstanceEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent(
        CMsgClearDecalsForSkeletonInstanceEvent *const this,
        const CMsgClearDecalsForSkeletonInstanceEvent *const from)
{
  *this = off_3F76F50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom(this, from);
}


// CMsgClearDecalsForSkeletonInstanceEvent::SharedCtor  (line 2071, @0x0000000001b04b10, libserver.so)  // inlines: memset
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::SharedCtor(
        CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent  (line 2079, @0x0000000001afe630, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<204, CMsgClearDecalsForSkeletonInstanceEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::~CNetMessagePB, ClearDecalsForSkeletonInstanceEvent_t::~ClearDecalsForSkeletonInstanceEvent_t, CDecalGameSystem::ClearDecalsForSkeletonInstance, CNetMessagePB<204, CMsgClearDecalsForSkeletonInstanceEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent(
        CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76F50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent  (line 2079, @0x0000000001afe660, libserver.so)  // inlines: ~CMsgClearDecalsForSkeletonInstanceEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::~CMsgClearDecalsForSkeletonInstanceEvent(
        CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F76F50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CMsgClearDecalsForSkeletonInstanceEvent::SharedDtor  (line 2084, @0x0000000001b04b40, libserver.so)
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::SharedDtor(
        CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  ;
}


// CMsgClearDecalsForSkeletonInstanceEvent::SetCachedSize  (line 2089, @0x0000000001afe0d0, libserver.so)
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::SetCachedSize(
        const CMsgClearDecalsForSkeletonInstanceEvent *const this,
        int size)
{
  *(this + 5) = size;
}


// CMsgClearDecalsForSkeletonInstanceEvent::descriptor  (line 2094, @0x0000000001b04b50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgClearDecalsForSkeletonInstanceEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_descriptor_;
}


// CMsgClearDecalsForSkeletonInstanceEvent::default_instance  (line 2099, @0x0000000001b09c80, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgClearDecalsForSkeletonInstanceEvent::default_instance_
const CMsgClearDecalsForSkeletonInstanceEvent *__cdecl CMsgClearDecalsForSkeletonInstanceEvent::default_instance()
{
  const CMsgClearDecalsForSkeletonInstanceEvent *result; // rax

  result = CMsgClearDecalsForSkeletonInstanceEvent::default_instance_;
  if ( CMsgClearDecalsForSkeletonInstanceEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgClearDecalsForSkeletonInstanceEvent::default_instance_;
  }
  return result;
}


// CMsgClearDecalsForSkeletonInstanceEvent::New  (line 2106, @0x0000000001b04ac0, libserver.so)
// calls: operator new, CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent, operator delete, _Unwind_Resume
CMsgClearDecalsForSkeletonInstanceEvent *__fastcall CMsgClearDecalsForSkeletonInstanceEvent::New(
        const CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  CMsgClearDecalsForSkeletonInstanceEvent *v1; // rbx

  v1 = operator new(0x28u);
  CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent(v1);
  return v1;
}


// CMsgClearDecalsForSkeletonInstanceEvent::Clear  (line 2110, @0x0000000001afe800, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::Clear(CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgClearDecalsForSkeletonInstanceEvent::MergePartialFromCodedStream  (line 2130, @0x0000000001b02530, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_entityhandleindex, set_has_flagstoclear, set_has_skeletoninstancehash
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CMsgClearDecalsForSkeletonInstanceEvent::MergePartialFromCodedStream(
        CMsgClearDecalsForSkeletonInstanceEvent *const this,
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
  unsigned int v12; // edx
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v15; // rax
  int v16; // eax
  const google::protobuf::uint8 *v17; // rdx
  const google::protobuf::uint8 *v18; // rdx
  int v19; // eax
  int v20; // eax
  unsigned int *v21; // [rsp+8h] [rbp-38h]

  v2 = (this + 24);
  v4 = (this + 28);
  v5 = (this + 32);
  v7 = this + 8;
  v21 = (this + 24);
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
      v12 = v11 >> 3;
      if ( v11 >> 3 == 2 )
      {
        if ( v11 != 16 )
          goto handle_unusual;
        v17 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_entityhandleindex;
      }
      if ( v12 != 3 )
        break;
      if ( v11 != 24 )
        goto handle_unusual;
      v18 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_skeletoninstancehash:
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
        if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
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
    if ( v15 >= input->buffer_end_ || ((v16 = *v15) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v21) == 0 )
        return 0;
    }
    else
    {
      *(this + 6) = v16;
      ++input->buffer_;
    }
    *(this + 4) |= 1u;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v17 = buffer + 1;
      input->buffer_ = v17;
parse_entityhandleindex:
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
        goto parse_skeletoninstancehash;
      }
    }
  }
handle_unusual:
  if ( v11 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgClearDecalsForSkeletonInstanceEvent::SerializeWithCachedSizes  (line 2206, @0x0000000001aff350, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::SerializeWithCachedSizes(
        const CMsgClearDecalsForSkeletonInstanceEvent *const this,
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


// CMsgClearDecalsForSkeletonInstanceEvent::SerializeWithCachedSizesToArray  (line 2231, @0x0000000001b00090, libserver.so)  // inlines: WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CMsgClearDecalsForSkeletonInstanceEvent::SerializeWithCachedSizesToArray(
        const CMsgClearDecalsForSkeletonInstanceEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  __int64 v8; // rax

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


// CMsgClearDecalsForSkeletonInstanceEvent::ByteSize  (line 2257, @0x0000000001afefb0, libserver.so)  // inlines: UInt32Size, VarintSize32, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CMsgClearDecalsForSkeletonInstanceEvent::ByteSize(
        const CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  _QWORD *v8; // rax
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  int v12; // eax

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
      v7 = *(this + 7);
      if ( v7 > 0x7F )
      {
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
        v5 = *(this + 4);
        v3 += v12 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v10 = *(this + 8);
      if ( v10 > 0x7F )
        v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1) + 1;
      else
        v3 += 2;
    }
  }
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom  (line 2294, @0x0000000001b04d50, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgClearDecalsForSkeletonInstanceEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgClearDecalsForSkeletonInstanceEvent
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom(
        CMsgClearDecalsForSkeletonInstanceEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgClearDecalsForSkeletonInstanceEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      2295);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgClearDecalsForSkeletonInstanceEvent,
               0)) != 0 )
  {
    CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom  (line 2306, @0x0000000001b04be0, libserver.so)  // inlines: set_entityhandleindex, set_flagstoclear, set_has_entityhandleindex, set_has_flagstoclear, set_has_skeletoninstancehash, set_skeletoninstancehash
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgClearDecalsForSkeletonInstanceEvent::CMsgClearDecalsForSkeletonInstanceEvent, CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom, CMsgClearDecalsForSkeletonInstanceEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom(
        CMsgClearDecalsForSkeletonInstanceEvent *const this,
        const CMsgClearDecalsForSkeletonInstanceEvent *const from)
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
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      2307);
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


// CMsgClearDecalsForSkeletonInstanceEvent::CopyFrom  (line 2322, @0x0000000001afe0e0, libserver.so)
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::CopyFrom(
        CMsgClearDecalsForSkeletonInstanceEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgClearDecalsForSkeletonInstanceEvent::CopyFrom  (line 2328, @0x0000000001b04e30, libserver.so)
// calls: CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom
// callers: CNetMessagePB<204, CMsgClearDecalsForSkeletonInstanceEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::CopyFrom(
        CMsgClearDecalsForSkeletonInstanceEvent *const this,
        const CMsgClearDecalsForSkeletonInstanceEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgClearDecalsForSkeletonInstanceEvent::MergeFrom(this, from);
  }
}


// CMsgClearDecalsForSkeletonInstanceEvent::IsInitialized  (line 2334, @0x0000000001afe120, libserver.so)
bool __fastcall CMsgClearDecalsForSkeletonInstanceEvent::IsInitialized(
        const CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  return 1;
}


// CMsgClearDecalsForSkeletonInstanceEvent::Swap  (line 2339, @0x0000000001b04e70, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgClearDecalsForSkeletonInstanceEvent::Swap(
        CMsgClearDecalsForSkeletonInstanceEvent *const this,
        CMsgClearDecalsForSkeletonInstanceEvent *other)
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


// CMsgClearDecalsForSkeletonInstanceEvent::GetMetadata  (line 2350, @0x0000000001b00e50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_descriptor_, `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_reflection_
google::protobuf::Metadata __fastcall CMsgClearDecalsForSkeletonInstanceEvent::GetMetadata(
        const CMsgClearDecalsForSkeletonInstanceEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_descriptor_;
  result.reflection = `anonymous namespace'::CMsgClearDecalsForSkeletonInstanceEvent_reflection_;
  return result;
}


// CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t  (line 2366, @0x0000000001b04fa0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEventList_key_t::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgSource1LegacyGameEventList_key_t::New, CMsgSource1LegacyGameEventList_descriptor_t::MergePartialFromCodedStream, CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom, protobuf_AddDesc_gameevents_2eproto, CGameEventManager::WriteEventList
void __fastcall CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t(
        CMsgSource1LegacyGameEventList_key_t *const this)
{
  *this = off_3F77010;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSource1LegacyGameEventList_key_t::SharedCtor(this);
}


// CMsgSource1LegacyGameEventList_key_t::InitAsDefaultInstance  (line 2372, @0x0000000001b04ed0, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList_key_t::InitAsDefaultInstance(
        CMsgSource1LegacyGameEventList_key_t *const this)
{
  ;
}


// CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t  (line 2375, @0x0000000001b055c0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEventList_key_t::SharedCtor, CMsgSource1LegacyGameEventList_key_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t(
        CMsgSource1LegacyGameEventList_key_t *const this,
        const CMsgSource1LegacyGameEventList_key_t *const from)
{
  *this = off_3F77010;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSource1LegacyGameEventList_key_t::SharedCtor(this);
  CMsgSource1LegacyGameEventList_key_t::MergeFrom(this, from);
}


// CMsgSource1LegacyGameEventList_key_t::SharedCtor  (line 2382, @0x0000000001b04ee0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t
void __fastcall CMsgSource1LegacyGameEventList_key_t::SharedCtor(CMsgSource1LegacyGameEventList_key_t *const this)
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


// CMsgSource1LegacyGameEventList_key_t::~CMsgSource1LegacyGameEventList_key_t  (line 2390, @0x0000000001b053f0, libserver.so)
// calls: CMsgSource1LegacyGameEventList_key_t::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSource1LegacyGameEventList_key_t::~CMsgSource1LegacyGameEventList_key_t
void __fastcall CMsgSource1LegacyGameEventList_key_t::~CMsgSource1LegacyGameEventList_key_t(
        CMsgSource1LegacyGameEventList_key_t *const this)
{
  *this = off_3F77010;
  CMsgSource1LegacyGameEventList_key_t::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSource1LegacyGameEventList_key_t::~CMsgSource1LegacyGameEventList_key_t  (line 2390, @0x0000000001b05430, libserver.so)
// calls: CMsgSource1LegacyGameEventList_key_t::~CMsgSource1LegacyGameEventList_key_t, operator delete
void __fastcall CMsgSource1LegacyGameEventList_key_t::~CMsgSource1LegacyGameEventList_key_t(
        CMsgSource1LegacyGameEventList_key_t *const this)
{
  CMsgSource1LegacyGameEventList_key_t::~CMsgSource1LegacyGameEventList_key_t(this);
  operator delete(this);
}


// CMsgSource1LegacyGameEventList_key_t::SharedDtor  (line 2395, @0x0000000001b05380, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgSource1LegacyGameEventList_key_t::~CMsgSource1LegacyGameEventList_key_t
void __fastcall CMsgSource1LegacyGameEventList_key_t::SharedDtor(CMsgSource1LegacyGameEventList_key_t *const this)
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


// CMsgSource1LegacyGameEventList_key_t::SetCachedSize  (line 2401, @0x0000000001afe130, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList_key_t::SetCachedSize(
        const CMsgSource1LegacyGameEventList_key_t *const this,
        int size)
{
  *(this + 5) = size;
}


// CMsgSource1LegacyGameEventList_key_t::descriptor  (line 2406, @0x0000000001b05450, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSource1LegacyGameEventList_key_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_descriptor_;
}


// CMsgSource1LegacyGameEventList_key_t::default_instance  (line 2411, @0x0000000001b09cb0, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSource1LegacyGameEventList_key_t::default_instance_
const CMsgSource1LegacyGameEventList_key_t *__cdecl CMsgSource1LegacyGameEventList_key_t::default_instance()
{
  const CMsgSource1LegacyGameEventList_key_t *result; // rax

  result = CMsgSource1LegacyGameEventList_key_t::default_instance_;
  if ( CMsgSource1LegacyGameEventList_key_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSource1LegacyGameEventList_key_t::default_instance_;
  }
  return result;
}


// CMsgSource1LegacyGameEventList_key_t::New  (line 2418, @0x0000000001b05000, libserver.so)
// calls: operator new, CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t, operator delete, _Unwind_Resume
CMsgSource1LegacyGameEventList_key_t *__fastcall CMsgSource1LegacyGameEventList_key_t::New(
        const CMsgSource1LegacyGameEventList_key_t *const this)
{
  CMsgSource1LegacyGameEventList_key_t *v1; // rbx

  v1 = operator new(0x28u);
  CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t(v1);
  return v1;
}


// CMsgSource1LegacyGameEventList_key_t::Clear  (line 2422, @0x0000000001afe930, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgSource1LegacyGameEventList_key_t::Clear(CMsgSource1LegacyGameEventList_key_t *const this)
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


// CMsgSource1LegacyGameEventList_key_t::MergePartialFromCodedStream  (line 2433, @0x0000000001b023a0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_name, set_has_name, set_has_type
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CMsgSource1LegacyGameEventList_descriptor_t::MergePartialFromCodedStream
bool __fastcall CMsgSource1LegacyGameEventList_key_t::MergePartialFromCodedStream(
        CMsgSource1LegacyGameEventList_key_t *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  unsigned __int8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  google::protobuf::uint8 *v9; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  unsigned int v13; // edx
  unsigned int v14[9]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = this + 8;
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
    if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v14);
      if ( !result )
        return result;
      v13 = v14[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 8) = v13;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      v9 = (buffer + 1);
      input->buffer_ = v9;
parse_name:
      *(this + 4) |= 2u;
      result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v9);
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
    goto parse_name;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgSource1LegacyGameEventList_key_t::SerializeWithCachedSizes  (line 2496, @0x0000000001afee10, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSource1LegacyGameEventList_key_t::SerializeWithCachedSizes(
        const CMsgSource1LegacyGameEventList_key_t *const this,
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
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 8), output, v3);
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


// CMsgSource1LegacyGameEventList_key_t::SerializeWithCachedSizesToArray  (line 2521, @0x0000000001b007c0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CMsgSource1LegacyGameEventList_descriptor_t::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CMsgSource1LegacyGameEventList_key_t::SerializeWithCachedSizesToArray(
        const CMsgSource1LegacyGameEventList_key_t *const this,
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


// CMsgSource1LegacyGameEventList_key_t::ByteSize  (line 2548, @0x0000000001b00220, libserver.so)  // inlines: Int32Size, StringSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CMsgSource1LegacyGameEventList_descriptor_t::ByteSize
int __fastcall CMsgSource1LegacyGameEventList_key_t::ByteSize(const CMsgSource1LegacyGameEventList_key_t *const this)
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
  if ( v4 == 0 )
    goto LABEL_7;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
    goto LABEL_6;
  v6 = *(this + 8);
  if ( v6 >= 0 )
  {
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v7 + 1;
    }
LABEL_6:
    if ( (v5 & 2) == 0 )
      goto LABEL_7;
    goto LABEL_11;
  }
  v3 = 11;
  if ( (v4 & 2) != 0 )
  {
LABEL_11:
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
LABEL_7:
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgSource1LegacyGameEventList_key_t::MergeFrom  (line 2578, @0x0000000001b05630, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSource1LegacyGameEventList_key_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSource1LegacyGameEventList_key_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSource1LegacyGameEventList_key_t
void __fastcall CMsgSource1LegacyGameEventList_key_t::MergeFrom(
        CMsgSource1LegacyGameEventList_key_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSource1LegacyGameEventList_key_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      2579);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgSource1LegacyGameEventList_key_t,
               0)) != 0 )
  {
    CMsgSource1LegacyGameEventList_key_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSource1LegacyGameEventList_key_t::MergeFrom  (line 2590, @0x0000000001b054e0, libserver.so)  // inlines: set_has_name, set_has_type, set_name, set_type
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t, CMsgSource1LegacyGameEventList_key_t::MergeFrom, CMsgSource1LegacyGameEventList_key_t::CopyFrom, CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgSource1LegacyGameEventList_key_t::MergeFrom(
        CMsgSource1LegacyGameEventList_key_t *const this,
        const CMsgSource1LegacyGameEventList_key_t *const from)
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
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      2591);
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


// CMsgSource1LegacyGameEventList_key_t::CopyFrom  (line 2603, @0x0000000001afe140, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList_key_t::CopyFrom(
        CMsgSource1LegacyGameEventList_key_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSource1LegacyGameEventList_key_t::CopyFrom  (line 2609, @0x0000000001b05710, libserver.so)
// calls: CMsgSource1LegacyGameEventList_key_t::MergeFrom
void __fastcall CMsgSource1LegacyGameEventList_key_t::CopyFrom(
        CMsgSource1LegacyGameEventList_key_t *const this,
        const CMsgSource1LegacyGameEventList_key_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSource1LegacyGameEventList_key_t::MergeFrom(this, from);
  }
}


// CMsgSource1LegacyGameEventList_key_t::IsInitialized  (line 2615, @0x0000000001afe180, libserver.so)
bool __fastcall CMsgSource1LegacyGameEventList_key_t::IsInitialized(
        const CMsgSource1LegacyGameEventList_key_t *const this)
{
  return 1;
}


// CMsgSource1LegacyGameEventList_key_t::Swap  (line 2620, @0x0000000001b05750, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgSource1LegacyGameEventList_key_t::Swap(
        CMsgSource1LegacyGameEventList_key_t *const this,
        CMsgSource1LegacyGameEventList_key_t *other)
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


// CMsgSource1LegacyGameEventList_key_t::GetMetadata  (line 2630, @0x0000000001b00ef0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_descriptor_, `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_reflection_
google::protobuf::Metadata __fastcall CMsgSource1LegacyGameEventList_key_t::GetMetadata(
        const CMsgSource1LegacyGameEventList_key_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSource1LegacyGameEventList_key_t_reflection_;
  return result;
}


// CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t  (line 2647, @0x0000000001b05870, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEventList_descriptor_t::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgSource1LegacyGameEventList_descriptor_t::New, CMsgSource1LegacyGameEventList::MergePartialFromCodedStream, CMsgSource1LegacyGameEventList::MergeFrom, protobuf_AddDesc_gameevents_2eproto, CGameEventManager::WriteEventList
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t(
        CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  *this = off_3F770D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CMsgSource1LegacyGameEventList_descriptor_t::SharedCtor(this);
}


// CMsgSource1LegacyGameEventList_descriptor_t::InitAsDefaultInstance  (line 2653, @0x0000000001b057a0, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::InitAsDefaultInstance(
        CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  ;
}


// CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t  (line 2656, @0x0000000001b05f00, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEventList_descriptor_t::SharedCtor, CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t(
        CMsgSource1LegacyGameEventList_descriptor_t *const this,
        const CMsgSource1LegacyGameEventList_descriptor_t *const from)
{
  *this = off_3F770D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CMsgSource1LegacyGameEventList_descriptor_t::SharedCtor(this);
  CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom(this, from);
}


// CMsgSource1LegacyGameEventList_descriptor_t::SharedCtor  (line 2663, @0x0000000001b057b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::SharedCtor(
        CMsgSource1LegacyGameEventList_descriptor_t *const this)
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
  *(this + 14) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 3) = v4;
  *(this + 4) = 0;
}


// CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t  (line 2671, @0x0000000001b05c00, libserver.so)  // inlines: ~RepeatedPtrField
// calls: CMsgSource1LegacyGameEventList_descriptor_t::SharedDtor, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t(
        CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  *this = off_3F770D0;
  CMsgSource1LegacyGameEventList_descriptor_t::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>(
    (this + 32),
    (this + 44));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t  (line 2671, @0x0000000001b05c40, libserver.so)
// calls: CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t, operator delete
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t(
        CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t(this);
  operator delete(this);
}


// CMsgSource1LegacyGameEventList_descriptor_t::SharedDtor  (line 2676, @0x0000000001b05b90, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::SharedDtor(
        CMsgSource1LegacyGameEventList_descriptor_t *const this)
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


// CMsgSource1LegacyGameEventList_descriptor_t::SetCachedSize  (line 2682, @0x0000000001afe190, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::SetCachedSize(
        const CMsgSource1LegacyGameEventList_descriptor_t *const this,
        int size)
{
  *(this + 5) = size;
}


// CMsgSource1LegacyGameEventList_descriptor_t::descriptor  (line 2687, @0x0000000001b05c60, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSource1LegacyGameEventList_descriptor_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_descriptor_;
}


// CMsgSource1LegacyGameEventList_descriptor_t::default_instance  (line 2692, @0x0000000001b09ce0, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSource1LegacyGameEventList_descriptor_t::default_instance_
const CMsgSource1LegacyGameEventList_descriptor_t *__cdecl CMsgSource1LegacyGameEventList_descriptor_t::default_instance()
{
  const CMsgSource1LegacyGameEventList_descriptor_t *result; // rax

  result = CMsgSource1LegacyGameEventList_descriptor_t::default_instance_;
  if ( CMsgSource1LegacyGameEventList_descriptor_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSource1LegacyGameEventList_descriptor_t::default_instance_;
  }
  return result;
}


// CMsgSource1LegacyGameEventList_descriptor_t::New  (line 2699, @0x0000000001b05900, libserver.so)
// calls: operator new, CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t, operator delete, _Unwind_Resume
CMsgSource1LegacyGameEventList_descriptor_t *__fastcall CMsgSource1LegacyGameEventList_descriptor_t::New(
        const CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  CMsgSource1LegacyGameEventList_descriptor_t *v1; // rbx

  v1 = operator new(0x40u);
  CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t(v1);
  return v1;
}


// CMsgSource1LegacyGameEventList_descriptor_t::Clear  (line 2703, @0x0000000001afebc0, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::Clear(
        CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  int v2; // eax
  __int64 v3; // r12
  int v4; // ebx
  __int64 v5; // rdi
  bool v6; // zf

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    *(this + 14) = 0;
    if ( (v2 & 2) != 0 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v3 = 0;
  v4 = 0;
  while ( v4 < *(this + 10) )
  {
    ++v4;
    v5 = *(*(this + 4) + v3);
    v3 += 8;
    (*(*v5 + 32LL))(v5);
  }
  v6 = *(this + 1) == 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
  if ( !v6 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CMsgSource1LegacyGameEventList_descriptor_t::MergePartialFromCodedStream  (line 2715, @0x0000000001b05040, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CMsgSource1LegacyGameEventList_key_t>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, add_keys, mutable_name, set_has_eventid, set_has_name
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), operator new, CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t, google::protobuf::io::CodedInputStream::PushLimit(int), CMsgSource1LegacyGameEventList_key_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CMsgSource1LegacyGameEventList::MergePartialFromCodedStream
bool __fastcall CMsgSource1LegacyGameEventList_descriptor_t::MergePartialFromCodedStream(
        CMsgSource1LegacyGameEventList_descriptor_t *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  google::protobuf::uint8 *v8; // rdx
  unsigned int v9; // eax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // esi
  CMsgSource1LegacyGameEventList_key_t *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  const google::protobuf::uint8 *v19; // rax
  int v20; // eax
  bool v21; // cc
  int recursion_depth; // edx
  __int64 v23; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase *v24; // [rsp+0h] [rbp-50h]
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  int v26; // [rsp+Ch] [rbp-44h]
  unsigned int v27[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v24 = (this + 32);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  do
  {
    while ( 1 )
    {
LABEL_2:
      if ( buffer_end <= buffer )
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
        break;
      if ( v9 == 3 )
      {
        if ( v7 != 26 )
          goto handle_unusual;
        v14 = *(this + 10);
        v15 = *(this + 11);
        if ( v14 < v15 )
          goto LABEL_45;
        goto LABEL_31;
      }
      if ( v9 != 1 || v7 != 8 )
      {
handle_unusual:
        if ( v7 == 0 )
          return 1;
        goto LABEL_9;
      }
      v12 = input->buffer_;
      if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v27);
        if ( !result )
          return result;
        v13 = v27[0];
      }
      else
      {
        input->buffer_ = v12 + 1;
      }
      *(this + 4) |= 1u;
      *(this + 14) = v13;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 18 )
      {
        v8 = (buffer + 1);
        input->buffer_ = v8;
        goto parse_name;
      }
    }
    if ( v7 != 18 )
      goto handle_unusual;
parse_name:
    *(this + 4) |= 2u;
    if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v8) == 0 )
      return 0;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
  }
  while ( buffer >= buffer_end || *buffer != 26 );
  while ( 1 )
  {
    input->buffer_ = buffer + 1;
    v14 = *(this + 10);
    v15 = *(this + 11);
    if ( v14 < v15 )
    {
LABEL_45:
      v23 = *(this + 4);
      *(this + 10) = v14 + 1;
      v16 = *(v23 + 8 * v14);
      goto LABEL_34;
    }
LABEL_31:
    if ( v15 == *(this + 12) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v24, v15 + 1);
    v16 = operator new(0x28u);
    CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t(v16);
    v17 = *(this + 10);
    v18 = *(this + 4);
    ++*(this + 11);
    *(this + 10) = v17 + 1;
    *(v18 + 8 * v17) = v16;
LABEL_34:
    v19 = input->buffer_;
    if ( v19 >= input->buffer_end_ || *v19 < 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v27) == 0 )
        return 0;
    }
    else
    {
      v27[0] = *v19;
      input->buffer_ = v19 + 1;
    }
    v20 = input->recursion_depth_ + 1;
    v21 = input->recursion_limit_ < v20;
    input->recursion_depth_ = v20;
    if ( v21 )
      return 0;
    v26 = google::protobuf::io::CodedInputStream::PushLimit(input, v27[0]);
    if ( !CMsgSource1LegacyGameEventList_key_t::MergePartialFromCodedStream(v16, input)
      || !input->legitimate_message_end_ )
    {
      return 0;
    }
    legitimate_message_end = input->legitimate_message_end_;
    google::protobuf::io::CodedInputStream::PopLimit(input, v26);
    recursion_depth = input->recursion_depth_;
    result = legitimate_message_end;
    if ( recursion_depth > 0 )
      input->recursion_depth_ = recursion_depth - 1;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer >= buffer_end || *buffer != 26 )
    {
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
      goto LABEL_2;
    }
  }
}


// CMsgSource1LegacyGameEventList_descriptor_t::SerializeWithCachedSizes  (line 2792, @0x0000000001aff080, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, empty, keys
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::SerializeWithCachedSizes(
        const CMsgSource1LegacyGameEventList_descriptor_t *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  __int64 i; // rbx
  _QWORD *v8; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 14), output, v3);
    if ( (*(this + 4) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2, *(this + 3), output, v3);
LABEL_3:
  for ( i = 0; *(this + 10) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 1, *(*(this + 4) + 8 * i), output, v3);
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CMsgSource1LegacyGameEventList_descriptor_t::SerializeWithCachedSizesToArray  (line 2823, @0x0000000001b00860, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, GetCachedSize, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CMsgSource1LegacyGameEventList_key_t>, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, keys
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), CMsgSource1LegacyGameEventList_key_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CMsgSource1LegacyGameEventList::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CMsgSource1LegacyGameEventList_descriptor_t::SerializeWithCachedSizesToArray(
        const CMsgSource1LegacyGameEventList_descriptor_t *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  unsigned __int8 *v7; // rdx
  google::protobuf::io::CodedOutputStream *v8; // rdi
  __int64 v9; // r12
  int v10; // ebx
  google::protobuf::uint8 *v11; // rsi
  unsigned __int8 *v12; // rdx
  unsigned int *v13; // r13
  google::protobuf::io::CodedOutputStream *v14; // rdi
  __int64 v15; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 14);
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
    LODWORD(v4) = *(this + 4);
  }
  v7 = (v4 & 2);
  if ( v7 != 0 )
  {
    v8 = *(this + 3);
    *result = 18;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v8, (result + 1), v7);
  }
  if ( *(this + 10) > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v12 = *(this + 4);
      v13 = *&v12[v9];
      *result = 26;
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
      result = CMsgSource1LegacyGameEventList_key_t::SerializeWithCachedSizesToArray(v13, v11);
    }
    while ( v10 < *(this + 10) );
  }
  v15 = *(this + 1);
  if ( v15 != 0 && *(v15 + 8) != *v15 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v15);
  return result;
}


// CMsgSource1LegacyGameEventList_descriptor_t::ByteSize  (line 2857, @0x0000000001b00b60, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CMsgSource1LegacyGameEventList_key_t>, StringSize, VarintSize32, VarintSize32SignExtended, empty, keys, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), CMsgSource1LegacyGameEventList_key_t::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CMsgSource1LegacyGameEventList::ByteSize
int __fastcall CMsgSource1LegacyGameEventList_descriptor_t::ByteSize(
        const CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v2; // r15d
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // r15d
  __int64 v10; // r13
  int v11; // r12d
  unsigned int v12; // ebx
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v16; // rbx
  google::protobuf::io::CodedOutputStream *v17; // rdi
  int v18; // eax
  int v19; // edx

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_7;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = *(this + 14);
    if ( v6 < 0 )
    {
      v2 = 11;
      if ( (v4 & 2) == 0 )
        goto LABEL_7;
      goto LABEL_16;
    }
    LOBYTE(v2) = 2;
    if ( v6 > 0x7F )
    {
      v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v2 = v7 + 1;
    }
  }
  if ( (v5 & 2) != 0 )
  {
LABEL_16:
    v16 = *(this + 3);
    v17 = *(*v16 - 24LL);
    v18 = 1;
    v19 = v17;
    if ( v17 > 0x7F )
    {
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, v1);
      v19 = *(*v16 - 24LL);
    }
    v2 += v18 + v19 + 1;
  }
LABEL_7:
  v8 = *(this + 10);
  v9 = v8 + v2;
  if ( v8 > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = CMsgSource1LegacyGameEventList_key_t::ByteSize(*(*(this + 4) + v10));
      v13 = 1;
      if ( v12 > 0x7F )
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, v1);
      ++v11;
      v10 += 8;
      v9 += v13 + v12;
    }
    while ( v11 < *(this + 10) );
  }
  v14 = *(this + 1);
  if ( v14 != 0 && v14[1] != *v14 )
    v9 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v9;
  return v9;
}


// CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom  (line 2895, @0x0000000001b05fa0, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSource1LegacyGameEventList_descriptor_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSource1LegacyGameEventList_descriptor_t
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom(
        CMsgSource1LegacyGameEventList_descriptor_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSource1LegacyGameEventList_descriptor_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      2896);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgSource1LegacyGameEventList_descriptor_t,
               0)) != 0 )
  {
    CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom  (line 2907, @0x0000000001b05cf0, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, New, set_eventid, set_has_eventid, set_has_name, set_name
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t, CMsgSource1LegacyGameEventList_key_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t, CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom, CMsgSource1LegacyGameEventList_descriptor_t::CopyFrom, CMsgSource1LegacyGameEventList::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom(
        CMsgSource1LegacyGameEventList_descriptor_t *const this,
        const CMsgSource1LegacyGameEventList_descriptor_t *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CMsgSource1LegacyGameEventList_key_t *v6; // r15
  __int64 v7; // rax
  CMsgSource1LegacyGameEventList_key_t *v8; // rdi
  __int64 v9; // rdx
  const CMsgSource1LegacyGameEventList_key_t *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  const std::string *v16; // rsi
  std::string *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v20; // [rsp+8h] [rbp-68h]
  char v21; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v22; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      2908);
    v18 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v18);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  v20 = (this + 32);
  if ( this + 32 == from + 32 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v19 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v19);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v20, *(from + 10) + *(this + 10));
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
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v20, v12 + 1);
        v6 = operator new(0x28u);
        CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t(v6);
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
      CMsgSource1LegacyGameEventList_key_t::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 10) );
  }
  v14 = *(from + 4);
  if ( v14 != 0 )
  {
    if ( (v14 & 1) != 0 )
    {
      v15 = *(from + 14);
      *(this + 4) |= 1u;
      *(this + 14) = v15;
      v14 = *(from + 4);
    }
    if ( (v14 & 2) != 0 )
    {
      v16 = *(from + 3);
      v17 = *(this + 3);
      *(this + 4) |= 2u;
      std::string::assign(v17, v16);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgSource1LegacyGameEventList_descriptor_t::CopyFrom  (line 2921, @0x0000000001afe1a0, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::CopyFrom(
        CMsgSource1LegacyGameEventList_descriptor_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSource1LegacyGameEventList_descriptor_t::CopyFrom  (line 2927, @0x0000000001b06080, libserver.so)
// calls: CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::CopyFrom(
        CMsgSource1LegacyGameEventList_descriptor_t *const this,
        const CMsgSource1LegacyGameEventList_descriptor_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom(this, from);
  }
}


// CMsgSource1LegacyGameEventList_descriptor_t::IsInitialized  (line 2933, @0x0000000001afe1e0, libserver.so)
bool __fastcall CMsgSource1LegacyGameEventList_descriptor_t::IsInitialized(
        const CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  return 1;
}


// CMsgSource1LegacyGameEventList_descriptor_t::Swap  (line 2938, @0x0000000001b060c0, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CMsgSource1LegacyGameEventList_descriptor_t::Swap(
        CMsgSource1LegacyGameEventList_descriptor_t *const this,
        CMsgSource1LegacyGameEventList_descriptor_t *other)
{
  int v4; // eax
  char *v5; // rsi
  char *v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax

  if ( other != this )
  {
    v4 = *(this + 14);
    v5 = other + 32;
    v6 = this + 32;
    *(v6 + 6) = *(v5 + 6);
    *(v5 + 6) = v4;
    v7 = *(v6 - 1);
    *(v6 - 1) = *(v5 - 1);
    *(v5 - 1) = v7;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v6, v5);
    v8 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v8;
    v9 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v9;
    LODWORD(v9) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v9;
  }
}


// CMsgSource1LegacyGameEventList_descriptor_t::GetMetadata  (line 2949, @0x0000000001b01210, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_descriptor_, `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_reflection_
google::protobuf::Metadata __fastcall CMsgSource1LegacyGameEventList_descriptor_t::GetMetadata(
        const CMsgSource1LegacyGameEventList_descriptor_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_t_reflection_;
  return result;
}


// CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList  (line 2964, @0x0000000001b06140, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgSource1LegacyGameEventList::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<205, CMsgSource1LegacyGameEventList, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CNetMessagePB<205, CMsgSource1LegacyGameEventList, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CSource2Server::WriteSignonMessages
void __fastcall CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList(
        CMsgSource1LegacyGameEventList *const this)
{
  *this = off_3F77190;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CMsgSource1LegacyGameEventList::InitAsDefaultInstance  (line 2970, @0x0000000001b061e0, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList::InitAsDefaultInstance(CMsgSource1LegacyGameEventList *const this)
{
  ;
}


// CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList  (line 2973, @0x0000000001b06480, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEventList::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<205, CMsgSource1LegacyGameEventList, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList(
        CMsgSource1LegacyGameEventList *const this,
        const CMsgSource1LegacyGameEventList *const from)
{
  *this = off_3F77190;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
  CMsgSource1LegacyGameEventList::MergeFrom(this, from);
}


// CMsgSource1LegacyGameEventList::SharedCtor  (line 2980, @0x0000000001b061f0, libserver.so)  // inlines: memset
void __fastcall CMsgSource1LegacyGameEventList::SharedCtor(CMsgSource1LegacyGameEventList *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList  (line 2985, @0x0000000001affc40, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList, CNetMessagePB<205, CMsgSource1LegacyGameEventList, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CNetMessagePB<205, CMsgSource1LegacyGameEventList, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::~CNetMessagePB, Source1LegacyGameEventList_t::~Source1LegacyGameEventList_t, CSource2Server::WriteSignonMessages
void __fastcall CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList(
        CMsgSource1LegacyGameEventList *const this)
{
  *this = off_3F77190;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList  (line 2985, @0x0000000001affc80, libserver.so)
// calls: CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList, operator delete
void __fastcall CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList(
        CMsgSource1LegacyGameEventList *const this)
{
  CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList(this);
  operator delete(this);
}


// CMsgSource1LegacyGameEventList::SharedDtor  (line 2990, @0x0000000001b06210, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList::SharedDtor(CMsgSource1LegacyGameEventList *const this)
{
  ;
}


// CMsgSource1LegacyGameEventList::SetCachedSize  (line 2995, @0x0000000001afe1f0, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList::SetCachedSize(
        const CMsgSource1LegacyGameEventList *const this,
        int size)
{
  *(this + 5) = size;
}


// CMsgSource1LegacyGameEventList::descriptor  (line 3000, @0x0000000001b06220, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSource1LegacyGameEventList::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_;
}


// CMsgSource1LegacyGameEventList::default_instance  (line 3005, @0x0000000001b09d10, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSource1LegacyGameEventList::default_instance_
const CMsgSource1LegacyGameEventList *__cdecl CMsgSource1LegacyGameEventList::default_instance()
{
  const CMsgSource1LegacyGameEventList *result; // rax

  result = CMsgSource1LegacyGameEventList::default_instance_;
  if ( CMsgSource1LegacyGameEventList::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSource1LegacyGameEventList::default_instance_;
  }
  return result;
}


// CMsgSource1LegacyGameEventList::New  (line 3012, @0x0000000001b061a0, libserver.so)
// calls: operator new, CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList, operator delete, _Unwind_Resume
CMsgSource1LegacyGameEventList *__fastcall CMsgSource1LegacyGameEventList::New(
        const CMsgSource1LegacyGameEventList *const this)
{
  CMsgSource1LegacyGameEventList *v1; // rbx

  v1 = operator new(0x30u);
  CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList(v1);
  return v1;
}


// CMsgSource1LegacyGameEventList::Clear  (line 3016, @0x0000000001afec60, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CMsgSource1LegacyGameEventList::Clear(CMsgSource1LegacyGameEventList *const this)
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


// CMsgSource1LegacyGameEventList::MergePartialFromCodedStream  (line 3022, @0x0000000001b05940, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CMsgSource1LegacyGameEventList_descriptor_t>, ReadTagWithCutoff, ReadVarint32, add_descriptors
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CMsgSource1LegacyGameEventList_descriptor_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
bool __fastcall CMsgSource1LegacyGameEventList::MergePartialFromCodedStream(
        CMsgSource1LegacyGameEventList *const this,
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
  CMsgSource1LegacyGameEventList_descriptor_t *v13; // r13
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
        v13 = operator new(0x40u);
        CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t(v13);
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
      if ( !CMsgSource1LegacyGameEventList_descriptor_t::MergePartialFromCodedStream(v13, input)
        || !input->legitimate_message_end_ )
      {
        return 0;
      }
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


// CMsgSource1LegacyGameEventList::SerializeWithCachedSizes  (line 3068, @0x0000000001aff140, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, descriptors, empty
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSource1LegacyGameEventList::SerializeWithCachedSizes(
        const CMsgSource1LegacyGameEventList *const this,
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


// CMsgSource1LegacyGameEventList::SerializeWithCachedSizesToArray  (line 3084, @0x0000000001b00970, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CMsgSource1LegacyGameEventList_descriptor_t>, WriteTagToArray, WriteVarint32ToArray, descriptors, empty
// calls: CMsgSource1LegacyGameEventList_descriptor_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CMsgSource1LegacyGameEventList::SerializeWithCachedSizesToArray(
        const CMsgSource1LegacyGameEventList *const this,
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
      result = CMsgSource1LegacyGameEventList_descriptor_t::SerializeWithCachedSizesToArray(v8, v6);
    }
    while ( v5 < *(this + 8) );
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v10);
  return result;
}


// CMsgSource1LegacyGameEventList::ByteSize  (line 3102, @0x0000000001b00c80, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CMsgSource1LegacyGameEventList_descriptor_t>, VarintSize32, descriptors, empty
// calls: CMsgSource1LegacyGameEventList_descriptor_t::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CMsgSource1LegacyGameEventList::ByteSize(const CMsgSource1LegacyGameEventList *const this)
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
      v6 = CMsgSource1LegacyGameEventList_descriptor_t::ByteSize(*(*(this + 3) + v4));
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


// CMsgSource1LegacyGameEventList::MergeFrom  (line 3124, @0x0000000001b06520, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSource1LegacyGameEventList*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSource1LegacyGameEventList::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSource1LegacyGameEventList
void __fastcall CMsgSource1LegacyGameEventList::MergeFrom(
        CMsgSource1LegacyGameEventList *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSource1LegacyGameEventList *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      3125);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgSource1LegacyGameEventList,
               0)) != 0 )
  {
    CMsgSource1LegacyGameEventList::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSource1LegacyGameEventList::MergeFrom  (line 3136, @0x0000000001b062b0, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, New
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t, CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList, CMsgSource1LegacyGameEventList::MergeFrom, CMsgSource1LegacyGameEventList::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CMsgSource1LegacyGameEventList::MergeFrom(
        CMsgSource1LegacyGameEventList *const this,
        const CMsgSource1LegacyGameEventList *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CMsgSource1LegacyGameEventList_descriptor_t *v6; // r15
  __int64 v7; // rax
  CMsgSource1LegacyGameEventList_descriptor_t *v8; // rdi
  __int64 v9; // rdx
  const CMsgSource1LegacyGameEventList_descriptor_t *v10; // rsi
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
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      3137);
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
        v6 = operator new(0x40u);
        CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t(v6);
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
      CMsgSource1LegacyGameEventList_descriptor_t::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgSource1LegacyGameEventList::CopyFrom  (line 3142, @0x0000000001afe200, libserver.so)
void __fastcall CMsgSource1LegacyGameEventList::CopyFrom(
        CMsgSource1LegacyGameEventList *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSource1LegacyGameEventList::CopyFrom  (line 3148, @0x0000000001b06600, libserver.so)
// calls: CMsgSource1LegacyGameEventList::MergeFrom
// callers: CNetMessagePB<205, CMsgSource1LegacyGameEventList, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgSource1LegacyGameEventList::CopyFrom(
        CMsgSource1LegacyGameEventList *const this,
        const CMsgSource1LegacyGameEventList *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSource1LegacyGameEventList::MergeFrom(this, from);
  }
}


// CMsgSource1LegacyGameEventList::IsInitialized  (line 3154, @0x0000000001afe240, libserver.so)
bool __fastcall CMsgSource1LegacyGameEventList::IsInitialized(const CMsgSource1LegacyGameEventList *const this)
{
  return 1;
}


// CMsgSource1LegacyGameEventList::Swap  (line 3159, @0x0000000001b06640, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CMsgSource1LegacyGameEventList::Swap(
        CMsgSource1LegacyGameEventList *const this,
        CMsgSource1LegacyGameEventList *other)
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


// CMsgSource1LegacyGameEventList::GetMetadata  (line 3168, @0x0000000001b012b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_, `anonymous namespace'::CMsgSource1LegacyGameEventList_reflection_
google::protobuf::Metadata __fastcall CMsgSource1LegacyGameEventList::GetMetadata(
        const CMsgSource1LegacyGameEventList *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSource1LegacyGameEventList_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSource1LegacyGameEventList_reflection_;
  return result;
}


// CMsgSource1LegacyListenEvents::CMsgSource1LegacyListenEvents  (line 3184, @0x0000000001b066a0, libserver.so)  // inlines: RepeatedField, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgSource1LegacyListenEvents::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<206, CMsgSource1LegacyListenEvents, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CNetMessagePB<206, CMsgSource1LegacyListenEvents, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSource1LegacyListenEvents::CMsgSource1LegacyListenEvents(CMsgSource1LegacyListenEvents *const this)
{
  *this = off_3F77250;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 5) = 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
}


// CMsgSource1LegacyListenEvents::InitAsDefaultInstance  (line 3190, @0x0000000001b06740, libserver.so)
void __fastcall CMsgSource1LegacyListenEvents::InitAsDefaultInstance(CMsgSource1LegacyListenEvents *const this)
{
  ;
}


// CMsgSource1LegacyListenEvents::CMsgSource1LegacyListenEvents  (line 3193, @0x0000000001b0a7f0, libserver.so)  // inlines: RepeatedField, SharedCtor, memset, ~RepeatedField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyListenEvents::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, operator delete [], google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<206, CMsgSource1LegacyListenEvents, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgSource1LegacyListenEvents::CMsgSource1LegacyListenEvents(
        CMsgSource1LegacyListenEvents *const this,
        const CMsgSource1LegacyListenEvents *const from)
{
  *this = off_3F77250;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 5) = 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
  CMsgSource1LegacyListenEvents::MergeFrom(this, from);
}


// CMsgSource1LegacyListenEvents::SharedCtor  (line 3200, @0x0000000001b06750, libserver.so)  // inlines: memset
void __fastcall CMsgSource1LegacyListenEvents::SharedCtor(CMsgSource1LegacyListenEvents *const this)
{
  *(this + 5) = 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
}


// CMsgSource1LegacyListenEvents::~CMsgSource1LegacyListenEvents  (line 3206, @0x0000000001aff790, libserver.so)  // inlines: ~RepeatedField
// calls: operator delete [], google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSource1LegacyListenEvents::~CMsgSource1LegacyListenEvents, CNetMessagePB<206, CMsgSource1LegacyListenEvents, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSource1LegacyListenEvents::~CMsgSource1LegacyListenEvents(
        CMsgSource1LegacyListenEvents *const this)
{
  void *v2; // rdi

  *this = off_3F77250;
  v2 = *(this + 3);
  if ( v2 != 0 )
    operator delete[](v2);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSource1LegacyListenEvents::~CMsgSource1LegacyListenEvents  (line 3206, @0x0000000001aff7d0, libserver.so)
// calls: CMsgSource1LegacyListenEvents::~CMsgSource1LegacyListenEvents, operator delete
void __fastcall CMsgSource1LegacyListenEvents::~CMsgSource1LegacyListenEvents(
        CMsgSource1LegacyListenEvents *const this)
{
  CMsgSource1LegacyListenEvents::~CMsgSource1LegacyListenEvents(this);
  operator delete(this);
}


// CMsgSource1LegacyListenEvents::SharedDtor  (line 3211, @0x0000000001b06770, libserver.so)
void __fastcall CMsgSource1LegacyListenEvents::SharedDtor(CMsgSource1LegacyListenEvents *const this)
{
  ;
}


// CMsgSource1LegacyListenEvents::SetCachedSize  (line 3216, @0x0000000001afe250, libserver.so)
void __fastcall CMsgSource1LegacyListenEvents::SetCachedSize(const CMsgSource1LegacyListenEvents *const this, int size)
{
  *(this + 5) = size;
}


// CMsgSource1LegacyListenEvents::descriptor  (line 3221, @0x0000000001b06780, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyListenEvents_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSource1LegacyListenEvents::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSource1LegacyListenEvents_descriptor_;
}


// CMsgSource1LegacyListenEvents::default_instance  (line 3226, @0x0000000001b09d40, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSource1LegacyListenEvents::default_instance_
const CMsgSource1LegacyListenEvents *__cdecl CMsgSource1LegacyListenEvents::default_instance()
{
  const CMsgSource1LegacyListenEvents *result; // rax

  result = CMsgSource1LegacyListenEvents::default_instance_;
  if ( CMsgSource1LegacyListenEvents::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSource1LegacyListenEvents::default_instance_;
  }
  return result;
}


// CMsgSource1LegacyListenEvents::New  (line 3233, @0x0000000001b06700, libserver.so)
// calls: operator new, CMsgSource1LegacyListenEvents::CMsgSource1LegacyListenEvents, operator delete, _Unwind_Resume
CMsgSource1LegacyListenEvents *__fastcall CMsgSource1LegacyListenEvents::New(
        const CMsgSource1LegacyListenEvents *const this)
{
  CMsgSource1LegacyListenEvents *v1; // rbx

  v1 = operator new(0x30u);
  CMsgSource1LegacyListenEvents::CMsgSource1LegacyListenEvents(v1);
  return v1;
}


// CMsgSource1LegacyListenEvents::Clear  (line 3237, @0x0000000001afeb80, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CMsgSource1LegacyListenEvents::Clear(CMsgSource1LegacyListenEvents *const this)
{
  char *v2; // rdi

  *(this + 10) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgSource1LegacyListenEvents::MergePartialFromCodedStream  (line 3244, @0x0000000001b0a9b0, libserver.so)  // inlines: Add, AddAlreadyReserved, Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPackedPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPackedPrimitiveNoInline<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadRepeatedPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_playerslot
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::PushLimit(int), google::protobuf::io::CodedInputStream::BytesUntilLimit(void), google::protobuf::RepeatedField<unsigned int>::Reserve, google::protobuf::io::CodedInputStream::PopLimit(int)
bool __fastcall CMsgSource1LegacyListenEvents::MergePartialFromCodedStream(
        CMsgSource1LegacyListenEvents *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *current_limit; // rcx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v12; // rax
  int fields_high; // edx
  const google::protobuf::uint8 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r14d
  google::protobuf::uint8 v18; // al
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rdx
  const google::protobuf::uint8 *v22; // rax
  int fields; // esi
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rdx
  const google::protobuf::uint8 *v27; // rax
  google::protobuf::RepeatedField<unsigned int> *v28; // [rsp+8h] [rbp-48h]
  google::protobuf::UnknownFieldSet v29; // [rsp+18h] [rbp-38h] BYREF

  v3 = this + 8;
  v28 = (this + 24);
  buffer = input->buffer_;
  current_limit = &v29;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
      goto LABEL_13;
LABEL_3:
    v8 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_13:
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
        v9 = TagFallback;
        input->last_tag_ = TagFallback;
        if ( TagFallback - 1 <= 0x7E )
          break;
        if ( TagFallback == 0 )
          return 1;
LABEL_10:
        if ( (v9 & 7) == 4 )
          return 1;
        result = google::protobuf::internal::WireFormat::SkipField(input, v9, v3, current_limit);
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
    if ( v9 != 8 )
      goto handle_unusual;
    v12 = input->buffer_;
    if ( v12 >= input->buffer_end_ || ((fields_high = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v29.fields_ + 1);
      if ( !result )
        return result;
      fields_high = HIDWORD(v29.fields_);
    }
    else
    {
      input->buffer_ = v12 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 10) = fields_high;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      do
      {
        v14 = buffer + 1;
        input->buffer_ = v14;
parse_eventarraybits:
        if ( v14 >= buffer_end || *v14 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v29.fields_ + 1) == 0 )
            return 0;
        }
        else
        {
          HIDWORD(v29.fields_) = *v14;
          input->buffer_ = v14 + 1;
        }
        v15 = *(this + 8);
        if ( v15 == *(this + 9) )
        {
          google::protobuf::RepeatedField<unsigned int>::Reserve(v28, v15 + 1);
          v15 = *(this + 8);
        }
        v16 = *(this + 3);
        *(this + 8) = v15 + 1;
        *(v16 + 4 * v15) = HIDWORD(v29.fields_);
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        v17 = *(this + 9) - *(this + 8);
        if ( v17 > 0 )
        {
          if ( buffer_end <= buffer )
            break;
          do
          {
            if ( *buffer != 16 )
              break;
            input->buffer_ = buffer + 1;
            if ( buffer + 1 >= buffer_end || ((v18 = buffer[1]) & 0x80u) != 0 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v29.fields_ + 1) == 0 )
                return 0;
              v19 = HIDWORD(v29.fields_);
            }
            else
            {
              v19 = v18;
              HIDWORD(v29.fields_) = v18;
              input->buffer_ = buffer + 2;
            }
            v20 = *(this + 8);
            --v17;
            v21 = *(this + 3);
            *(this + 8) = v20 + 1;
            *(v21 + 4 * v20) = v19;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( v17 == 0 )
              break;
          }
          while ( buffer < buffer_end );
        }
LABEL_33:
        ;
      }
      while ( buffer_end > buffer && *buffer == 16 );
      if ( buffer_end == buffer )
      {
        if ( input->buffer_size_after_limit_ != 0
          || (current_limit = input->current_limit_, input->total_bytes_read_ == current_limit) )
        {
          input->last_tag_ = 0;
          input->legitimate_message_end_ = 1;
          return 1;
        }
        buffer = buffer_end;
      }
    }
  }
  if ( v9 >> 3 == 2 )
  {
    if ( v9 == 16 )
    {
      v14 = input->buffer_;
      buffer_end = input->buffer_end_;
      goto parse_eventarraybits;
    }
    if ( v9 == 18 )
    {
      v22 = input->buffer_;
      if ( v22 >= input->buffer_end_ || ((fields = *v22) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v29) == 0 )
          return 0;
        fields = v29.fields_;
      }
      else
      {
        LODWORD(v29.fields_) = *v22;
        input->buffer_ = v22 + 1;
      }
      v24 = google::protobuf::io::CodedInputStream::PushLimit(input, fields);
      while ( 1 )
      {
        if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
        {
          google::protobuf::io::CodedInputStream::PopLimit(input, v24);
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          goto LABEL_33;
        }
        v27 = input->buffer_;
        if ( v27 < input->buffer_end_ && *v27 >= 0 )
          break;
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v29.fields_ + 1) == 0 )
          return 0;
        v25 = *(this + 8);
        if ( v25 == *(this + 9) )
          goto LABEL_60;
LABEL_54:
        v26 = *(this + 3);
        *(this + 8) = v25 + 1;
        *(v26 + 4 * v25) = HIDWORD(v29.fields_);
      }
      HIDWORD(v29.fields_) = *v27;
      input->buffer_ = v27 + 1;
      v25 = *(this + 8);
      if ( v25 != *(this + 9) )
        goto LABEL_54;
LABEL_60:
      google::protobuf::RepeatedField<unsigned int>::Reserve(v28, v25 + 1);
      v25 = *(this + 8);
      goto LABEL_54;
    }
  }
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_10;
  return 1;
}


// CMsgSource1LegacyListenEvents::SerializeWithCachedSizes  (line 3309, @0x0000000001aff3f0, libserver.so)  // inlines: empty, eventarraybits
// calls: google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSource1LegacyListenEvents::SerializeWithCachedSizes(
        const CMsgSource1LegacyListenEvents *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // rbx
  _QWORD *v7; // rax

  if ( (*(this + 16) & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 10), output, v3);
  for ( i = 0; i < *(this + 8); ++i )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(*(this + 3) + 4 * i), output, v3);
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CMsgSource1LegacyListenEvents::SerializeWithCachedSizesToArray  (line 3330, @0x0000000001b01b60, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, eventarraybits
// calls: google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CMsgSource1LegacyListenEvents::SerializeWithCachedSizesToArray(
        const CMsgSource1LegacyListenEvents *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::uint8 *result; // rax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  __int64 v7; // r12
  int v8; // ebx
  unsigned __int8 *v9; // rdx
  google::protobuf::io::CodedOutputStream *v10; // rdi
  __int64 v11; // rdx

  result = target;
  if ( (*(this + 16) & 1) != 0 )
  {
    v5 = *(this + 10);
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
      while ( 1 )
      {
        v9 = *(this + 3);
        v10 = *&v9[v7];
        *result = 16;
        if ( v10 > 0x7F )
          break;
        result[1] = v10;
        ++v8;
        result += 2;
        v7 += 4;
        if ( v8 >= *(this + 8) )
          goto LABEL_10;
      }
      ++v8;
      v7 += 4;
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, result + 1, v9);
    }
    while ( v8 < *(this + 8) );
  }
LABEL_10:
  v11 = *(this + 1);
  if ( v11 != 0 && *(v11 + 8) != *v11 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v11);
  return result;
}


// CMsgSource1LegacyListenEvents::ByteSize  (line 3352, @0x0000000001b00640, libserver.so)  // inlines: Int32Size, UInt32Size, VarintSize32, VarintSize32SignExtended, empty, eventarraybits
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CMsgSource1LegacyListenEvents::ByteSize(const CMsgSource1LegacyListenEvents *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // r13d
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rbx
  int v7; // r12d
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rax
  int v11; // r13d
  google::protobuf::io::CodedOutputStream *v13; // rdi

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v13 = *(this + 10);
    LOBYTE(v3) = 11;
    if ( v13 >= 0 )
    {
      LOBYTE(v3) = 2;
      if ( v13 > 0x7F )
        v3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, v1) + 1;
    }
  }
  v5 = *(this + 8);
  if ( v5 <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *(*(this + 3) + 4 * v6);
        if ( v8 > 0x7F )
          break;
        ++v7;
        if ( v5 <= ++v6 )
          goto LABEL_8;
      }
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
      v5 = *(this + 8);
      v7 += v9;
      ++v6;
    }
    while ( v5 > v6 );
  }
LABEL_8:
  v10 = *(this + 1);
  v11 = v5 + v7 + v3;
  if ( v10 != 0 && v10[1] != *v10 )
    v11 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v11;
  return v11;
}


// CMsgSource1LegacyListenEvents::MergeFrom  (line 3385, @0x0000000001b0a890, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSource1LegacyListenEvents*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSource1LegacyListenEvents::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSource1LegacyListenEvents
void __fastcall CMsgSource1LegacyListenEvents::MergeFrom(
        CMsgSource1LegacyListenEvents *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSource1LegacyListenEvents *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      3386);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgSource1LegacyListenEvents,
               0)) != 0 )
  {
    CMsgSource1LegacyListenEvents::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSource1LegacyListenEvents::MergeFrom  (line 3397, @0x0000000001b0a690, libserver.so)  // inlines: CopyArray, MergeFrom, memcpy, operator(), set_has_playerslot, set_playerslot
// calls: google::protobuf::RepeatedField<unsigned int>::Reserve, memcpy, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgSource1LegacyListenEvents::CMsgSource1LegacyListenEvents, CMsgSource1LegacyListenEvents::MergeFrom, CMsgSource1LegacyListenEvents::CopyFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgSource1LegacyListenEvents::MergeFrom(
        CMsgSource1LegacyListenEvents *const this,
        const CMsgSource1LegacyListenEvents *const from)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v10; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      3398);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      729);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  v4 = *(from + 8);
  if ( v4 != 0 )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve((this + 24), *(this + 8) + v4);
    memcpy((*(this + 3) + 4LL * *(this + 8)), *(from + 3), 4LL * *(from + 8));
    *(this + 8) += *(from + 8);
  }
  v5 = *(from + 4);
  if ( v5 != 0 && (v5 & 1) != 0 )
  {
    v6 = *(from + 10);
    *(this + 4) |= 1u;
    *(this + 10) = v6;
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgSource1LegacyListenEvents::CopyFrom  (line 3408, @0x0000000001afe260, libserver.so)
void __fastcall CMsgSource1LegacyListenEvents::CopyFrom(
        CMsgSource1LegacyListenEvents *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSource1LegacyListenEvents::CopyFrom  (line 3414, @0x0000000001b0a970, libserver.so)
// calls: CMsgSource1LegacyListenEvents::MergeFrom
// callers: CNetMessagePB<206, CMsgSource1LegacyListenEvents, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgSource1LegacyListenEvents::CopyFrom(
        CMsgSource1LegacyListenEvents *const this,
        const CMsgSource1LegacyListenEvents *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSource1LegacyListenEvents::MergeFrom(this, from);
  }
}


// CMsgSource1LegacyListenEvents::IsInitialized  (line 3420, @0x0000000001afe2a0, libserver.so)
bool __fastcall CMsgSource1LegacyListenEvents::IsInitialized(const CMsgSource1LegacyListenEvents *const this)
{
  return 1;
}


// CMsgSource1LegacyListenEvents::Swap  (line 3425, @0x0000000001b06810, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgSource1LegacyListenEvents::Swap(
        CMsgSource1LegacyListenEvents *const this,
        CMsgSource1LegacyListenEvents *other)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax

  if ( other != this )
  {
    v2 = *(this + 10);
    *(this + 10) = *(other + 10);
    v3 = *(other + 3);
    *(other + 10) = v2;
    v4 = *(this + 3);
    v5 = *(this + 8);
    v6 = *(this + 9);
    *(this + 3) = v3;
    *(this + 8) = *(other + 8);
    *(this + 9) = *(other + 9);
    *(other + 8) = v5;
    v7 = *(other + 4);
    *(other + 3) = v4;
    *(other + 9) = v6;
    v8 = *(this + 4);
    *(this + 4) = v7;
    v9 = *(other + 1);
    *(other + 4) = v8;
    v10 = *(this + 1);
    *(this + 1) = v9;
    LODWORD(v9) = *(other + 5);
    *(other + 1) = v10;
    LODWORD(v10) = *(this + 5);
    *(this + 5) = v9;
    *(other + 5) = v10;
  }
}


// CMsgSource1LegacyListenEvents::GetMetadata  (line 3435, @0x0000000001b01350, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyListenEvents_descriptor_, `anonymous namespace'::CMsgSource1LegacyListenEvents_reflection_
google::protobuf::Metadata __fastcall CMsgSource1LegacyListenEvents::GetMetadata(
        const CMsgSource1LegacyListenEvents *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSource1LegacyListenEvents_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSource1LegacyListenEvents_reflection_;
  return result;
}


// CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t  (line 3457, @0x0000000001b06980, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEvent_key_t::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgSource1LegacyGameEvent_key_t::New, CMsgSource1LegacyGameEvent::MergePartialFromCodedStream, CMsgSource1LegacyGameEvent::MergeFrom, protobuf_AddDesc_gameevents_2eproto, CGameEventManager::SerializeEvent
void __fastcall CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t(
        CMsgSource1LegacyGameEvent_key_t *const this)
{
  *this = off_3F77310;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSource1LegacyGameEvent_key_t::SharedCtor(this);
}


// CMsgSource1LegacyGameEvent_key_t::InitAsDefaultInstance  (line 3463, @0x0000000001b06880, libserver.so)
void __fastcall CMsgSource1LegacyGameEvent_key_t::InitAsDefaultInstance(CMsgSource1LegacyGameEvent_key_t *const this)
{
  ;
}


// CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t  (line 3466, @0x0000000001b07040, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEvent_key_t::SharedCtor, CMsgSource1LegacyGameEvent_key_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t(
        CMsgSource1LegacyGameEvent_key_t *const this,
        const CMsgSource1LegacyGameEvent_key_t *const from)
{
  *this = off_3F77310;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSource1LegacyGameEvent_key_t::SharedCtor(this);
  CMsgSource1LegacyGameEvent_key_t::MergeFrom(this, from);
}


// CMsgSource1LegacyGameEvent_key_t::SharedCtor  (line 3473, @0x0000000001b06890, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t
void __fastcall CMsgSource1LegacyGameEvent_key_t::SharedCtor(CMsgSource1LegacyGameEvent_key_t *const this)
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
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 52) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CMsgSource1LegacyGameEvent_key_t::~CMsgSource1LegacyGameEvent_key_t  (line 3487, @0x0000000001b06dd0, libserver.so)
// calls: CMsgSource1LegacyGameEvent_key_t::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSource1LegacyGameEvent_key_t::~CMsgSource1LegacyGameEvent_key_t
void __fastcall CMsgSource1LegacyGameEvent_key_t::~CMsgSource1LegacyGameEvent_key_t(
        CMsgSource1LegacyGameEvent_key_t *const this)
{
  *this = off_3F77310;
  CMsgSource1LegacyGameEvent_key_t::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSource1LegacyGameEvent_key_t::~CMsgSource1LegacyGameEvent_key_t  (line 3487, @0x0000000001b06e10, libserver.so)
// calls: CMsgSource1LegacyGameEvent_key_t::~CMsgSource1LegacyGameEvent_key_t, operator delete
void __fastcall CMsgSource1LegacyGameEvent_key_t::~CMsgSource1LegacyGameEvent_key_t(
        CMsgSource1LegacyGameEvent_key_t *const this)
{
  CMsgSource1LegacyGameEvent_key_t::~CMsgSource1LegacyGameEvent_key_t(this);
  operator delete(this);
}


// CMsgSource1LegacyGameEvent_key_t::SharedDtor  (line 3492, @0x0000000001b06d60, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgSource1LegacyGameEvent_key_t::~CMsgSource1LegacyGameEvent_key_t
void __fastcall CMsgSource1LegacyGameEvent_key_t::SharedDtor(CMsgSource1LegacyGameEvent_key_t *const this)
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


// CMsgSource1LegacyGameEvent_key_t::SetCachedSize  (line 3498, @0x0000000001afe2b0, libserver.so)
void __fastcall CMsgSource1LegacyGameEvent_key_t::SetCachedSize(
        const CMsgSource1LegacyGameEvent_key_t *const this,
        int size)
{
  *(this + 5) = size;
}


// CMsgSource1LegacyGameEvent_key_t::descriptor  (line 3503, @0x0000000001b06e30, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSource1LegacyGameEvent_key_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_descriptor_;
}


// CMsgSource1LegacyGameEvent_key_t::default_instance  (line 3508, @0x0000000001b09d70, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSource1LegacyGameEvent_key_t::default_instance_
const CMsgSource1LegacyGameEvent_key_t *__cdecl CMsgSource1LegacyGameEvent_key_t::default_instance()
{
  const CMsgSource1LegacyGameEvent_key_t *result; // rax

  result = CMsgSource1LegacyGameEvent_key_t::default_instance_;
  if ( CMsgSource1LegacyGameEvent_key_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSource1LegacyGameEvent_key_t::default_instance_;
  }
  return result;
}


// CMsgSource1LegacyGameEvent_key_t::New  (line 3515, @0x0000000001b069e0, libserver.so)
// calls: operator new, CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t, operator delete, _Unwind_Resume
CMsgSource1LegacyGameEvent_key_t *__fastcall CMsgSource1LegacyGameEvent_key_t::New(
        const CMsgSource1LegacyGameEvent_key_t *const this)
{
  CMsgSource1LegacyGameEvent_key_t *v1; // rbx

  v1 = operator new(0x40u);
  CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t(v1);
  return v1;
}


// CMsgSource1LegacyGameEvent_key_t::Clear  (line 3519, @0x0000000001afe9a0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgSource1LegacyGameEvent_key_t::Clear(CMsgSource1LegacyGameEvent_key_t *const this)
{
  bool v2; // zf

  if ( *(this + 16) != 0 )
  {
    v2 = (*(this + 16) & 2) == 0;
    *(this + 4) = 0;
    *(this + 5) = 0;
    *(this + 6) = 0;
    *(this + 7) = 0;
    if ( !v2 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CMsgSource1LegacyGameEvent_key_t::MergePartialFromCodedStream  (line 3544, @0x0000000001b02b90, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)4u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, memcpy, mutable_val_string, set_has_type, set_has_val_bool, set_has_val_byte, set_has_val_float, set_has_val_long, set_has_val_short, set_has_val_string, set_has_val_uint64
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// callers: CMsgSource1LegacyGameEvent::MergePartialFromCodedStream
// globals: jpt_1B02C04
bool __fastcall CMsgSource1LegacyGameEvent_key_t::MergePartialFromCodedStream(
        CMsgSource1LegacyGameEvent_key_t *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v5; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  unsigned __int8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  google::protobuf::uint8 *v10; // rdx
  const google::protobuf::uint8 *v11; // rdx
  __int64 v12; // rax
  const google::protobuf::uint8 *v13; // rdx
  const google::protobuf::uint8 *v14; // rdx
  unsigned int v15; // eax
  const google::protobuf::uint8 *v16; // rdx
  unsigned int v17; // eax
  const google::protobuf::uint8 *v18; // rdx
  const google::protobuf::uint8 *v19; // rax
  unsigned int v20; // edx
  const google::protobuf::uint8 *v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // eax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  __int64 v26; // rax
  unsigned __int64 *v27; // [rsp+8h] [rbp-48h]
  unsigned int v28[2]; // [rsp+18h] [rbp-38h] BYREF

  v2 = (this + 56);
  v5 = this + 8;
  v27 = (this + 56);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 2 )
  {
    while ( 1 )
    {
      if ( buffer_end > buffer )
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
      if ( google::protobuf::internal::WireFormat::SkipField(input, v9, v5, v2) == 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    v9 = v8;
    input->last_tag_ = v8;
    input->buffer_ = buffer + 1;
LABEL_5:
    v10 = (v9 >> 3);
    switch ( v10 )
    {
      case 1:
        if ( v9 != 8 )
          goto handle_unusual;
        v19 = input->buffer_;
        if ( v19 < input->buffer_end_ )
        {
          v20 = *v19;
          if ( (v20 & 0x80u) == 0 )
          {
            input->buffer_ = v19 + 1;
LABEL_44:
            *(this + 4) |= 1u;
            *(this + 8) = v20;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer < buffer_end && *buffer == 18 )
            {
              v10 = (buffer + 1);
              input->buffer_ = v10;
              goto parse_val_string;
            }
            continue;
          }
        }
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v28);
        if ( result )
        {
          v20 = v28[0];
          goto LABEL_44;
        }
        return result;
      case 2:
        if ( v9 != 18 )
          goto handle_unusual;
parse_val_string:
        *(this + 4) |= 2u;
        if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v10) == 0 )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 29 )
          continue;
        v18 = buffer + 1;
        input->buffer_ = v18;
parse_val_float:
        if ( buffer_end - v18 <= 3 )
        {
          result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v28);
          if ( !result )
            return result;
          v23 = v28[0];
        }
        else
        {
          v23 = *v18;
          input->buffer_ = v18 + 4;
        }
        *(this + 4) |= 4u;
        *(this + 9) = v23;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 32 )
          continue;
        v21 = buffer + 1;
        input->buffer_ = v21;
parse_val_long:
        if ( buffer_end <= v21 || ((v22 = *v21) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v28);
          if ( !result )
            return result;
          v22 = v28[0];
        }
        else
        {
          input->buffer_ = v21 + 1;
        }
        *(this + 4) |= 8u;
        *(this + 10) = v22;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 40 )
          continue;
        v16 = buffer + 1;
        input->buffer_ = v16;
parse_val_short:
        if ( buffer_end <= v16 || ((v17 = *v16) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v28);
          if ( !result )
            return result;
          v17 = v28[0];
        }
        else
        {
          input->buffer_ = v16 + 1;
        }
        *(this + 4) |= 0x10u;
        *(this + 11) = v17;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 48 )
          continue;
        v14 = buffer + 1;
        input->buffer_ = v14;
parse_val_byte:
        if ( v14 >= buffer_end || ((v15 = *v14) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v28);
          if ( !result )
            return result;
          v15 = v28[0];
        }
        else
        {
          input->buffer_ = v14 + 1;
        }
        *(this + 4) |= 0x20u;
        *(this + 12) = v15;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 56 )
          continue;
        v11 = buffer + 1;
        input->buffer_ = v11;
parse_val_bool:
        if ( v11 >= buffer_end || ((v12 = *v11) & 0x80u) != 0LL )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v28);
          if ( !result )
            return result;
          v12 = *v28;
        }
        else
        {
          input->buffer_ = v11 + 1;
        }
        *(this + 52) = v12 != 0;
        *(this + 4) |= 0x40u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 64 )
          continue;
        v13 = buffer + 1;
        input->buffer_ = v13;
parse_val_uint64:
        if ( buffer_end <= v13 || ((v26 = *v13) & 0x80u) != 0LL )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v27) == 0 )
            return 0;
        }
        else
        {
          *(this + 7) = v26;
          ++input->buffer_;
        }
        *(this + 4) |= 0x80u;
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
      case 3:
        if ( v9 != 29 )
          goto handle_unusual;
        v18 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_val_float;
      case 4:
        if ( v9 != 32 )
          goto handle_unusual;
        v21 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_val_long;
      case 5:
        if ( v9 != 40 )
          goto handle_unusual;
        v16 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_val_short;
      case 6:
        if ( v9 != 48 )
          goto handle_unusual;
        v14 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_val_byte;
      case 7:
        if ( v9 != 56 )
          goto handle_unusual;
        v11 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_val_bool;
      case 8:
        if ( v9 != 64 )
          goto handle_unusual;
        v13 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_val_uint64;
      default:
handle_unusual:
        if ( v9 != 0 )
          goto LABEL_8;
        return 1;
    }
  }
}


// CMsgSource1LegacyGameEvent_key_t::SerializeWithCachedSizes  (line 3697, @0x0000000001aff7f0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSource1LegacyGameEvent_key_t::SerializeWithCachedSizes(
        const CMsgSource1LegacyGameEvent_key_t *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 8), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
      goto LABEL_14;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2, *(this + 3), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_15;
  }
LABEL_14:
  google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 1, output, *(this + 9), v2);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
LABEL_15:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 2, *(this + 10), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
LABEL_16:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 3, *(this + 11), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_18;
  }
LABEL_17:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_6, *(this + 12), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_9;
LABEL_19:
    google::protobuf::internal::WireFormatLite::WriteUInt64(&stru_8, *(this + 7), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_10;
  }
LABEL_18:
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_6 + 1, *(this + 52), output, v3);
  if ( (*(this + 4) & 0x80u) != 0 )
    goto LABEL_19;
LABEL_9:
  v7 = *(this + 1);
  if ( v7 == 0 )
    return;
LABEL_10:
  if ( v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CMsgSource1LegacyGameEvent_key_t::SerializeWithCachedSizesToArray  (line 3752, @0x0000000001b01990, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteFloatNoTagToArray, WriteFloatToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian32ToArray, WriteStringToArray, WriteTagToArray, WriteUInt64NoTagToArray, WriteUInt64ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CMsgSource1LegacyGameEvent::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CMsgSource1LegacyGameEvent_key_t::SerializeWithCachedSizesToArray(
        const CMsgSource1LegacyGameEvent_key_t *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // edx
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::uint8 *v10; // rsi
  google::protobuf::io::CodedOutputStream *v11; // rdi
  google::protobuf::uint8 *v12; // rsi
  google::protobuf::io::CodedOutputStream *v13; // rdi
  google::protobuf::uint8 *v14; // rsi
  google::protobuf::uint8 v15; // dl
  unsigned __int8 *v16; // rdx
  google::protobuf::io::CodedOutputStream *v17; // rdi
  __int64 v18; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 8);
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
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 9);
    *result = 29;
    result += 5;
    *(result - 1) = v8;
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v9 = *(this + 10);
    v10 = result + 1;
    *result = 32;
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
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v11 = *(this + 11);
    v12 = result + 1;
    *result = 40;
    if ( v11 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v11, v12, v4);
    }
    else if ( v11 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v11, v12, v4);
    }
    else
    {
      result[1] = v11;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v13 = *(this + 12);
    v14 = result + 1;
    *result = 48;
    if ( v13 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v13, v14, v4);
    }
    else if ( v13 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v13, v14, v4);
    }
    else
    {
      result[1] = v13;
      result += 2;
    }
    LODWORD(v4) = *(this + 4);
  }
  if ( (v4 & 0x40) != 0 )
  {
    v15 = *(this + 52);
    *result = 56;
    result += 2;
    *(result - 1) = v15;
    LODWORD(v4) = *(this + 4);
  }
  v16 = (v4 & 0x80);
  if ( v16 != 0 )
  {
    v17 = *(this + 7);
    *result = 64;
    result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v17, (result + 1), v16);
  }
  v18 = *(this + 1);
  if ( v18 != 0 && *(v18 + 8) != *v18 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v18);
  return result;
}


// CMsgSource1LegacyGameEvent_key_t::ByteSize  (line 3809, @0x0000000001b00420, libserver.so)  // inlines: Int32Size, StringSize, UInt64Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
// callers: CMsgSource1LegacyGameEvent::ByteSize
int __fastcall CMsgSource1LegacyGameEvent_key_t::ByteSize(const CMsgSource1LegacyGameEvent_key_t *const this)
{
  unsigned __int64 v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  int v10; // eax
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // eax
  google::protobuf::io::CodedOutputStream *v14; // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v19; // r13
  google::protobuf::io::CodedOutputStream *v20; // rdi
  int v21; // eax
  int v22; // ecx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_28;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
  {
LABEL_6:
    if ( (v5 & 2) == 0 )
      goto LABEL_7;
    goto LABEL_32;
  }
  v6 = *(this + 8);
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
  if ( (v4 & 2) == 0 )
  {
LABEL_7:
    if ( (v5 & 4) != 0 )
      v3 += 5;
    if ( (v5 & 8) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
LABEL_32:
  v19 = *(this + 3);
  v20 = *(*v19 - 24LL);
  v21 = 1;
  v22 = v20;
  if ( v20 > 0x7F )
  {
    v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, v1);
    v22 = *(*v19 - 24LL);
    v5 = *(this + 4);
  }
  v3 += v21 + v22 + 1;
  if ( (v5 & 4) != 0 )
    v3 += 5;
  if ( (v5 & 8) != 0 )
  {
LABEL_10:
    v8 = *(this + 10);
    v9 = 11;
    if ( v8 >= 0 )
    {
      LOBYTE(v9) = 2;
      if ( v8 > 0x7F )
      {
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
        v5 = *(this + 4);
        v9 = v10 + 1;
      }
    }
    v3 += v9;
  }
LABEL_14:
  if ( (v5 & 0x10) != 0 )
  {
    v11 = *(this + 11);
    v12 = 11;
    if ( v11 >= 0 )
    {
      LOBYTE(v12) = 2;
      if ( v11 > 0x7F )
      {
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
        v5 = *(this + 4);
        v12 = v13 + 1;
      }
    }
    v3 += v12;
  }
  if ( (v5 & 0x20) != 0 )
  {
    v14 = *(this + 12);
    v15 = 11;
    if ( v14 >= 0 )
    {
      LOBYTE(v15) = 2;
      if ( v14 > 0x7F )
      {
        v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
        v5 = *(this + 4);
        v15 = v16 + 1;
      }
    }
    v3 += v15;
  }
  if ( (v5 & 0x40) != 0 )
    v3 += 2;
  if ( (v5 & 0x80) != 0 )
    v3 += google::protobuf::io::CodedOutputStream::VarintSize64(*(this + 7), v1) + 1;
LABEL_28:
  v17 = *(this + 1);
  if ( v17 != 0 && *(v17 + 8) != *v17 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v17);
  *(this + 5) = v3;
  return v3;
}


// CMsgSource1LegacyGameEvent_key_t::MergeFrom  (line 3877, @0x0000000001b070b0, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSource1LegacyGameEvent_key_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSource1LegacyGameEvent_key_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSource1LegacyGameEvent_key_t
void __fastcall CMsgSource1LegacyGameEvent_key_t::MergeFrom(
        CMsgSource1LegacyGameEvent_key_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSource1LegacyGameEvent_key_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      3878);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgSource1LegacyGameEvent_key_t,
               0)) != 0 )
  {
    CMsgSource1LegacyGameEvent_key_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSource1LegacyGameEvent_key_t::MergeFrom  (line 3889, @0x0000000001b06ec0, libserver.so)  // inlines: set_has_type, set_has_val_bool, set_has_val_byte, set_has_val_float, set_has_val_long, set_has_val_short, set_has_val_string, set_has_val_uint64, set_type, set_val_bool, set_val_byte, set_val_float, set_val_long, set_val_short, set_val_string, set_val_uint64
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t, CMsgSource1LegacyGameEvent_key_t::MergeFrom, CMsgSource1LegacyGameEvent_key_t::CopyFrom, CMsgSource1LegacyGameEvent::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgSource1LegacyGameEvent_key_t::MergeFrom(
        CMsgSource1LegacyGameEvent_key_t *const this,
        const CMsgSource1LegacyGameEvent_key_t *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // xmm0_4
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char v10; // al
  __int64 v11; // rax
  const std::string *v12; // rsi
  std::string *v13; // rdi
  __int64 v14; // rax
  char v15; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v16; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v16,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      3890);
    v14 = google::protobuf::internal::LogMessage::operator<<(&v16, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v15, v14);
    google::protobuf::internal::LogMessage::~LogMessage(&v16);
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
      v12 = *(from + 3);
      v13 = *(this + 3);
      *(this + 4) |= 2u;
      std::string::assign(v13, v12);
      v4 = *(from + 4);
      if ( (v4 & 4) == 0 )
        goto LABEL_9;
    }
    else if ( (v4 & 4) == 0 )
    {
LABEL_9:
      if ( (v4 & 8) != 0 )
      {
        v7 = *(from + 10);
        *(this + 4) |= 8u;
        *(this + 10) = v7;
        v4 = *(from + 4);
      }
      if ( (v4 & 0x10) != 0 )
      {
        v8 = *(from + 11);
        *(this + 4) |= 0x10u;
        *(this + 11) = v8;
        v4 = *(from + 4);
      }
      if ( (v4 & 0x20) != 0 )
      {
        v9 = *(from + 12);
        *(this + 4) |= 0x20u;
        *(this + 12) = v9;
        v4 = *(from + 4);
      }
      if ( (v4 & 0x40) != 0 )
      {
        v10 = *(from + 52);
        *(this + 4) |= 0x40u;
        *(this + 52) = v10;
        v4 = *(from + 4);
      }
      if ( (v4 & 0x80u) != 0 )
      {
        v11 = *(from + 7);
        *(this + 4) |= 0x80u;
        *(this + 7) = v11;
      }
      goto LABEL_19;
    }
    v6 = *(from + 9);
    *(this + 4) |= 4u;
    *(this + 9) = v6;
    v4 = *(from + 4);
    goto LABEL_9;
  }
LABEL_19:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgSource1LegacyGameEvent_key_t::CopyFrom  (line 3920, @0x0000000001afe2c0, libserver.so)
void __fastcall CMsgSource1LegacyGameEvent_key_t::CopyFrom(
        CMsgSource1LegacyGameEvent_key_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSource1LegacyGameEvent_key_t::CopyFrom  (line 3926, @0x0000000001b07190, libserver.so)
// calls: CMsgSource1LegacyGameEvent_key_t::MergeFrom
void __fastcall CMsgSource1LegacyGameEvent_key_t::CopyFrom(
        CMsgSource1LegacyGameEvent_key_t *const this,
        const CMsgSource1LegacyGameEvent_key_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSource1LegacyGameEvent_key_t::MergeFrom(this, from);
  }
}


// CMsgSource1LegacyGameEvent_key_t::IsInitialized  (line 3932, @0x0000000001afe300, libserver.so)
bool __fastcall CMsgSource1LegacyGameEvent_key_t::IsInitialized(const CMsgSource1LegacyGameEvent_key_t *const this)
{
  return 1;
}


// CMsgSource1LegacyGameEvent_key_t::Swap  (line 3937, @0x0000000001b071d0, libserver.so)  // inlines: Swap, swap<bool>, swap<float>, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgSource1LegacyGameEvent_key_t::Swap(
        CMsgSource1LegacyGameEvent_key_t *const this,
        CMsgSource1LegacyGameEvent_key_t *other)
{
  int v2; // eax
  __int64 v3; // rax
  int v4; // xmm1_4
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  if ( other != this )
  {
    v2 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v2;
    v3 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v3;
    v4 = *(this + 9);
    *(this + 9) = *(other + 9);
    *(other + 9) = v4;
    LODWORD(v3) = *(this + 10);
    *(this + 10) = *(other + 10);
    *(other + 10) = v3;
    LODWORD(v3) = *(this + 11);
    *(this + 11) = *(other + 11);
    *(other + 11) = v3;
    LODWORD(v3) = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v3;
    LOBYTE(v3) = *(this + 52);
    *(this + 52) = *(other + 52);
    *(other + 52) = v3;
    v5 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v5;
    LODWORD(v5) = *(this + 4);
    *(this + 4) = *(other + 4);
    v6 = *(other + 1);
    *(other + 4) = v5;
    v7 = *(this + 1);
    *(this + 1) = v6;
    LODWORD(v6) = *(other + 5);
    *(other + 1) = v7;
    LODWORD(v7) = *(this + 5);
    *(this + 5) = v6;
    *(other + 5) = v7;
  }
}


// CMsgSource1LegacyGameEvent_key_t::GetMetadata  (line 3953, @0x0000000001b013f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_descriptor_, `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_reflection_
google::protobuf::Metadata __fastcall CMsgSource1LegacyGameEvent_key_t::GetMetadata(
        const CMsgSource1LegacyGameEvent_key_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSource1LegacyGameEvent_key_t_reflection_;
  return result;
}


// CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent  (line 3970, @0x0000000001b07350, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgSource1LegacyGameEvent::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<207, CMsgSource1LegacyGameEvent, (SignonGroup_t)5u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy::FireGameEvent, CNetMessagePB<207, CMsgSource1LegacyGameEvent, (SignonGroup_t)5u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CHLTVDirector::OnHLTVNetMessage, CHLTVDirector::BroadcastEventInternal, CHLTVDirector::CreateLocalChatMessage, CHLTVDirector::BroadcastLocalTitle
void __fastcall CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(CMsgSource1LegacyGameEvent *const this)
{
  *this = off_3F773D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CMsgSource1LegacyGameEvent::SharedCtor(this);
}


// CMsgSource1LegacyGameEvent::InitAsDefaultInstance  (line 3976, @0x0000000001b07280, libserver.so)
void __fastcall CMsgSource1LegacyGameEvent::InitAsDefaultInstance(CMsgSource1LegacyGameEvent *const this)
{
  ;
}


// CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent  (line 3979, @0x0000000001b07790, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSource1LegacyGameEvent::SharedCtor, CMsgSource1LegacyGameEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<207, CMsgSource1LegacyGameEvent, (SignonGroup_t)5u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(
        CMsgSource1LegacyGameEvent *const this,
        const CMsgSource1LegacyGameEvent *const from)
{
  *this = off_3F773D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CMsgSource1LegacyGameEvent::SharedCtor(this);
  CMsgSource1LegacyGameEvent::MergeFrom(this, from);
}


// CMsgSource1LegacyGameEvent::SharedCtor  (line 3986, @0x0000000001b07290, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent
void __fastcall CMsgSource1LegacyGameEvent::SharedCtor(CMsgSource1LegacyGameEvent *const this)
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
  *(this + 14) = 0;
  *(this + 4) = 0;
}


// CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent  (line 3994, @0x0000000001b07490, libserver.so)  // inlines: ~RepeatedPtrField
// calls: CMsgSource1LegacyGameEvent::SharedDtor, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent, CNetMessagePB<207, CMsgSource1LegacyGameEvent, (SignonGroup_t)5u, (NetChannelBufType_t)1, true>::~CNetMessagePB, Source1LegacyGameEvent_t::~Source1LegacyGameEvent_t, CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy::FireGameEvent, CNetMessagePB<207, CMsgSource1LegacyGameEvent, (SignonGroup_t)5u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CHLTVDirector::BroadcastEventInternal, CHLTVDirector::BroadcastLocalTitle
void __fastcall CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent(CMsgSource1LegacyGameEvent *const this)
{
  *this = off_3F773D0;
  CMsgSource1LegacyGameEvent::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>(
    (this + 32),
    (this + 44));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent  (line 3994, @0x0000000001b074d0, libserver.so)
// calls: CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent, operator delete
void __fastcall CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent(CMsgSource1LegacyGameEvent *const this)
{
  CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent(this);
  operator delete(this);
}


// CMsgSource1LegacyGameEvent::SharedDtor  (line 3999, @0x0000000001b07420, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent
void __fastcall CMsgSource1LegacyGameEvent::SharedDtor(CMsgSource1LegacyGameEvent *const this)
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


// CMsgSource1LegacyGameEvent::SetCachedSize  (line 4005, @0x0000000001afe310, libserver.so)
void __fastcall CMsgSource1LegacyGameEvent::SetCachedSize(const CMsgSource1LegacyGameEvent *const this, int size)
{
  *(this + 5) = size;
}


// CMsgSource1LegacyGameEvent::descriptor  (line 4010, @0x0000000001b074f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSource1LegacyGameEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSource1LegacyGameEvent_descriptor_;
}


// CMsgSource1LegacyGameEvent::default_instance  (line 4015, @0x0000000001b09da0, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSource1LegacyGameEvent::default_instance_
const CMsgSource1LegacyGameEvent *__cdecl CMsgSource1LegacyGameEvent::default_instance()
{
  const CMsgSource1LegacyGameEvent *result; // rax

  result = CMsgSource1LegacyGameEvent::default_instance_;
  if ( CMsgSource1LegacyGameEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSource1LegacyGameEvent::default_instance_;
  }
  return result;
}


// CMsgSource1LegacyGameEvent::New  (line 4022, @0x0000000001b073e0, libserver.so)
// calls: operator new, CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent, operator delete, _Unwind_Resume
CMsgSource1LegacyGameEvent *__fastcall CMsgSource1LegacyGameEvent::New(const CMsgSource1LegacyGameEvent *const this)
{
  CMsgSource1LegacyGameEvent *v1; // rbx

  v1 = operator new(0x40u);
  CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(v1);
  return v1;
}


// CMsgSource1LegacyGameEvent::Clear  (line 4026, @0x0000000001afece0, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgSource1LegacyGameEvent::Clear(CMsgSource1LegacyGameEvent *const this)
{
  int v2; // eax
  __int64 v3; // r12
  int v4; // ebx
  __int64 v5; // rdi
  bool v6; // zf

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 1) != 0 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
    *(this + 14) = 0;
  }
  v3 = 0;
  v4 = 0;
  while ( v4 < *(this + 10) )
  {
    ++v4;
    v5 = *(*(this + 4) + v3);
    v3 += 8;
    (*(*v5 + 32LL))(v5);
  }
  v6 = *(this + 1) == 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
  if ( !v6 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CMsgSource1LegacyGameEvent::MergePartialFromCodedStream  (line 4038, @0x0000000001b06a20, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CMsgSource1LegacyGameEvent_key_t>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, add_keys, mutable_event_name, set_has_event_name, set_has_eventid
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), operator new, CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t, google::protobuf::io::CodedInputStream::PushLimit(int), CMsgSource1LegacyGameEvent_key_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
bool __fastcall CMsgSource1LegacyGameEvent::MergePartialFromCodedStream(
        CMsgSource1LegacyGameEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  google::protobuf::uint8 *v8; // rdx
  unsigned int v9; // eax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  CMsgSource1LegacyGameEvent_key_t *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  const google::protobuf::uint8 *v18; // rax
  int v19; // eax
  bool v20; // cc
  int recursion_depth; // edx
  __int64 v22; // rdx
  unsigned int v23; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v24; // [rsp+0h] [rbp-50h]
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  int v26; // [rsp+Ch] [rbp-44h]
  unsigned int v27[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v24 = (this + 32);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  do
  {
    while ( 1 )
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
        v8 = (buffer + 1);
        input->last_tag_ = v7;
        input->buffer_ = v8;
      }
      v9 = v7 >> 3;
      if ( v7 >> 3 == 2 )
        break;
      if ( v9 == 3 )
      {
        if ( v7 != 26 )
          goto handle_unusual;
        v13 = *(this + 10);
        v14 = *(this + 11);
        if ( v13 < v14 )
          goto LABEL_39;
        goto LABEL_25;
      }
      if ( v9 != 1 || v7 != 10 )
      {
handle_unusual:
        if ( v7 == 0 )
          return 1;
        goto LABEL_9;
      }
      *(this + 4) |= 1u;
      if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v8) == 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 16 )
      {
        v12 = buffer + 1;
        input->buffer_ = v12;
        goto parse_eventid;
      }
    }
    if ( v7 != 16 )
      goto handle_unusual;
    v12 = input->buffer_;
    buffer_end = input->buffer_end_;
parse_eventid:
    if ( buffer_end <= v12 || ((v23 = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v27);
      if ( !result )
        return result;
      v23 = v27[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
    }
    *(this + 4) |= 2u;
    *(this + 14) = v23;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
  }
  while ( buffer >= buffer_end || *buffer != 26 );
  while ( 1 )
  {
    input->buffer_ = buffer + 1;
    v13 = *(this + 10);
    v14 = *(this + 11);
    if ( v13 < v14 )
    {
LABEL_39:
      v22 = *(this + 4);
      *(this + 10) = v13 + 1;
      v15 = *(v22 + 8 * v13);
      goto LABEL_28;
    }
LABEL_25:
    if ( v14 == *(this + 12) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v24, v14 + 1);
    v15 = operator new(0x40u);
    CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t(v15);
    v16 = *(this + 10);
    v17 = *(this + 4);
    ++*(this + 11);
    *(this + 10) = v16 + 1;
    *(v17 + 8 * v16) = v15;
LABEL_28:
    v18 = input->buffer_;
    if ( v18 >= input->buffer_end_ || *v18 < 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v27) == 0 )
        return 0;
    }
    else
    {
      v27[0] = *v18;
      input->buffer_ = v18 + 1;
    }
    v19 = input->recursion_depth_ + 1;
    v20 = input->recursion_limit_ < v19;
    input->recursion_depth_ = v19;
    if ( v20 )
      return 0;
    v26 = google::protobuf::io::CodedInputStream::PushLimit(input, v27[0]);
    if ( !CMsgSource1LegacyGameEvent_key_t::MergePartialFromCodedStream(v15, input) || !input->legitimate_message_end_ )
      return 0;
    legitimate_message_end = input->legitimate_message_end_;
    google::protobuf::io::CodedInputStream::PopLimit(input, v26);
    recursion_depth = input->recursion_depth_;
    result = legitimate_message_end;
    if ( recursion_depth > 0 )
      input->recursion_depth_ = recursion_depth - 1;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer >= buffer_end || *buffer != 26 )
    {
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
      goto LABEL_2;
    }
  }
}


// CMsgSource1LegacyGameEvent::SerializeWithCachedSizes  (line 4115, @0x0000000001aff1c0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, empty, keys
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSource1LegacyGameEvent::SerializeWithCachedSizes(
        const CMsgSource1LegacyGameEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  __int64 i; // rbx
  _QWORD *v8; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
    if ( (*(this + 4) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 14), output, v3);
LABEL_3:
  for ( i = 0; *(this + 10) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 1, *(*(this + 4) + 8 * i), output, v3);
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CMsgSource1LegacyGameEvent::SerializeWithCachedSizesToArray  (line 4146, @0x0000000001b01c40, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, GetCachedSize, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CMsgSource1LegacyGameEvent_key_t>, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, keys
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), CMsgSource1LegacyGameEvent_key_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CMsgSource1LegacyGameEvent::SerializeWithCachedSizesToArray(
        const CMsgSource1LegacyGameEvent *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  unsigned __int8 *v7; // rdx
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::uint8 *v9; // rsi
  __int64 v10; // r12
  int v11; // ebx
  google::protobuf::uint8 *v12; // rsi
  unsigned __int8 *v13; // rdx
  unsigned int *v14; // r13
  google::protobuf::io::CodedOutputStream *v15; // rdi
  __int64 v16; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 3);
    v6 = (target + 1);
    HIBYTE(v6[-1]._M_dataplus._M_p) = 10;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v5, v6, v4);
    LODWORD(v4) = *(this + 4);
  }
  v7 = (v4 & 2);
  if ( v7 != 0 )
  {
    v8 = *(this + 14);
    v9 = result + 1;
    *result = 16;
    if ( v8 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v8, v9, v7);
    }
    else if ( v8 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v8, v9, v7);
    }
    else
    {
      result[1] = v8;
      result += 2;
    }
  }
  if ( *(this + 10) > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v13 = *(this + 4);
      v14 = *&v13[v10];
      *result = 26;
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
      result = CMsgSource1LegacyGameEvent_key_t::SerializeWithCachedSizesToArray(v14, v12);
    }
    while ( v11 < *(this + 10) );
  }
  v16 = *(this + 1);
  if ( v16 != 0 && *(v16 + 8) != *v16 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v16);
  return result;
}


// CMsgSource1LegacyGameEvent::ByteSize  (line 4180, @0x0000000001b01710, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CMsgSource1LegacyGameEvent_key_t>, StringSize, VarintSize32, VarintSize32SignExtended, empty, keys, size
// calls: CMsgSource1LegacyGameEvent_key_t::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CMsgSource1LegacyGameEvent::ByteSize(const CMsgSource1LegacyGameEvent *const this)
{
  unsigned int v1; // esi
  int v2; // r15d
  int v4; // eax
  int v5; // eax
  int v6; // r15d
  __int64 v7; // r13
  int v8; // r12d
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rax
  google::protobuf::io::CodedOutputStream *v14; // rdi
  int v15; // eax
  _QWORD *v16; // rbx
  int v17; // ecx
  google::protobuf::io::CodedOutputStream *v18; // rdi
  int v19; // edx

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_4;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) == 0 )
      goto LABEL_4;
    goto LABEL_13;
  }
  v16 = *(this + 3);
  v17 = 1;
  v18 = *(*v16 - 24LL);
  v19 = v18;
  if ( v18 > 0x7F )
  {
    v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v18, v1);
    v19 = *(*v16 - 24LL);
    v4 = *(this + 4);
  }
  v2 = v17 + v19 + 1;
  if ( (v4 & 2) != 0 )
  {
LABEL_13:
    v14 = *(this + 14);
    v15 = 11;
    if ( v14 >= 0 )
    {
      LOBYTE(v15) = 2;
      if ( v14 > 0x7F )
        v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1) + 1;
    }
    v2 += v15;
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
      v9 = CMsgSource1LegacyGameEvent_key_t::ByteSize(*(*(this + 4) + v7));
      v11 = 1;
      if ( v9 > 0x7F )
        v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v10);
      ++v8;
      v7 += 8;
      v6 += v11 + v9;
    }
    while ( v8 < *(this + 10) );
  }
  v12 = *(this + 1);
  if ( v12 != 0 && *(v12 + 8) != *v12 )
    v6 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v12);
  *(this + 5) = v6;
  return v6;
}


// CMsgSource1LegacyGameEvent::MergeFrom  (line 4218, @0x0000000001b07830, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSource1LegacyGameEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSource1LegacyGameEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSource1LegacyGameEvent
void __fastcall CMsgSource1LegacyGameEvent::MergeFrom(
        CMsgSource1LegacyGameEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSource1LegacyGameEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      4219);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgSource1LegacyGameEvent,
               0)) != 0 )
  {
    CMsgSource1LegacyGameEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSource1LegacyGameEvent::MergeFrom  (line 4230, @0x0000000001b07580, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, New, set_event_name, set_eventid, set_has_event_name, set_has_eventid
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t, CMsgSource1LegacyGameEvent_key_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent, CMsgSource1LegacyGameEvent::MergeFrom, CMsgSource1LegacyGameEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CMsgSource1LegacyGameEvent::MergeFrom(
        CMsgSource1LegacyGameEvent *const this,
        const CMsgSource1LegacyGameEvent *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CMsgSource1LegacyGameEvent_key_t *v6; // r15
  __int64 v7; // rax
  CMsgSource1LegacyGameEvent_key_t *v8; // rdi
  __int64 v9; // rdx
  const CMsgSource1LegacyGameEvent_key_t *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  const std::string *v16; // rsi
  std::string *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v20; // [rsp+8h] [rbp-68h]
  char v21; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v22; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      4231);
    v18 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v18);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  v20 = (this + 32);
  if ( this + 32 == from + 32 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v19 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v19);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v20, *(from + 10) + *(this + 10));
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
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v20, v12 + 1);
        v6 = operator new(0x40u);
        CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t(v6);
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
      CMsgSource1LegacyGameEvent_key_t::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 10) );
  }
  v14 = *(from + 4);
  if ( v14 != 0 )
  {
    if ( (v14 & 1) != 0 )
    {
      v16 = *(from + 3);
      v17 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v17, v16);
      if ( (*(from + 4) & 2) == 0 )
        goto LABEL_17;
      goto LABEL_16;
    }
    if ( (v14 & 2) != 0 )
    {
LABEL_16:
      v15 = *(from + 14);
      *(this + 4) |= 2u;
      *(this + 14) = v15;
    }
  }
LABEL_17:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgSource1LegacyGameEvent::CopyFrom  (line 4244, @0x0000000001afe320, libserver.so)
void __fastcall CMsgSource1LegacyGameEvent::CopyFrom(
        CMsgSource1LegacyGameEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSource1LegacyGameEvent::CopyFrom  (line 4250, @0x0000000001b07910, libserver.so)
// calls: CMsgSource1LegacyGameEvent::MergeFrom
// callers: CNetMessagePB<207, CMsgSource1LegacyGameEvent, (SignonGroup_t)5u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy, CHLTVDirector::OnHLTVNetMessage, CHLTVDirector::BroadcastEventInternal
void __fastcall CMsgSource1LegacyGameEvent::CopyFrom(
        CMsgSource1LegacyGameEvent *const this,
        const CMsgSource1LegacyGameEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSource1LegacyGameEvent::MergeFrom(this, from);
  }
}


// CMsgSource1LegacyGameEvent::IsInitialized  (line 4256, @0x0000000001afe360, libserver.so)
bool __fastcall CMsgSource1LegacyGameEvent::IsInitialized(const CMsgSource1LegacyGameEvent *const this)
{
  return 1;
}


// CMsgSource1LegacyGameEvent::Swap  (line 4261, @0x0000000001b07950, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CMsgSource1LegacyGameEvent::Swap(
        CMsgSource1LegacyGameEvent *const this,
        CMsgSource1LegacyGameEvent *other)
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
    LODWORD(v4) = v6[1].elements_;
    LODWORD(v6[1].elements_) = v5[1].elements_;
    LODWORD(v5[1].elements_) = v4;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v6, v5);
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


// CMsgSource1LegacyGameEvent::GetMetadata  (line 4272, @0x0000000001b01490, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSource1LegacyGameEvent_descriptor_, `anonymous namespace'::CMsgSource1LegacyGameEvent_reflection_
google::protobuf::Metadata __fastcall CMsgSource1LegacyGameEvent::GetMetadata(
        const CMsgSource1LegacyGameEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSource1LegacyGameEvent_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSource1LegacyGameEvent_reflection_;
  return result;
}


// CMsgSosStartSoundEvent::CMsgSosStartSoundEvent  (line 4292, @0x0000000001b07ac0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSosStartSoundEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgSosStartSoundEvent::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<208, CMsgSosStartSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<208, CMsgSosStartSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosStartSoundEvent::CMsgSosStartSoundEvent(CMsgSosStartSoundEvent *const this)
{
  *this = off_3F77490;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSosStartSoundEvent::SharedCtor(this);
}


// CMsgSosStartSoundEvent::InitAsDefaultInstance  (line 4298, @0x0000000001b079d0, libserver.so)
void __fastcall CMsgSosStartSoundEvent::InitAsDefaultInstance(CMsgSosStartSoundEvent *const this)
{
  ;
}


// CMsgSosStartSoundEvent::CMsgSosStartSoundEvent  (line 4301, @0x0000000001b07e00, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSosStartSoundEvent::SharedCtor, CMsgSosStartSoundEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<208, CMsgSosStartSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgSosStartSoundEvent::CMsgSosStartSoundEvent(
        CMsgSosStartSoundEvent *const this,
        const CMsgSosStartSoundEvent *const from)
{
  *this = off_3F77490;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSosStartSoundEvent::SharedCtor(this);
  CMsgSosStartSoundEvent::MergeFrom(this, from);
}


// CMsgSosStartSoundEvent::SharedCtor  (line 4308, @0x0000000001b079e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgSosStartSoundEvent::CMsgSosStartSoundEvent
void __fastcall CMsgSosStartSoundEvent::SharedCtor(CMsgSosStartSoundEvent *const this)
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
  *(this + 8) = 0;
  v3 = google::protobuf::internal::empty_string_;
  *(this + 9) = 0;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  *(this + 5) = v4;
  *(this + 12) = 0;
  *(this + 4) = 0;
}


// CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent  (line 4320, @0x0000000001b07bd0, libserver.so)
// calls: CMsgSosStartSoundEvent::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent, CNetMessagePB<208, CMsgSosStartSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::~CNetMessagePB, CMsgSosStartSoundEvent_t::~CMsgSosStartSoundEvent_t, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<208, CMsgSosStartSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent(CMsgSosStartSoundEvent *const this)
{
  *this = off_3F77490;
  CMsgSosStartSoundEvent::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent  (line 4320, @0x0000000001b07c10, libserver.so)
// calls: CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent, operator delete
void __fastcall CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent(CMsgSosStartSoundEvent *const this)
{
  CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent(this);
  operator delete(this);
}


// CMsgSosStartSoundEvent::SharedDtor  (line 4325, @0x0000000001b07b60, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgSosStartSoundEvent::~CMsgSosStartSoundEvent
void __fastcall CMsgSosStartSoundEvent::SharedDtor(CMsgSosStartSoundEvent *const this)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  _BYTE v6[17]; // [rsp+Fh] [rbp-11h] BYREF

  v1 = *(this + 5);
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


// CMsgSosStartSoundEvent::SetCachedSize  (line 4331, @0x0000000001afe370, libserver.so)
void __fastcall CMsgSosStartSoundEvent::SetCachedSize(const CMsgSosStartSoundEvent *const this, int size)
{
  *(this + 5) = size;
}


// CMsgSosStartSoundEvent::descriptor  (line 4336, @0x0000000001b07c30, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosStartSoundEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSosStartSoundEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSosStartSoundEvent_descriptor_;
}


// CMsgSosStartSoundEvent::default_instance  (line 4341, @0x0000000001b09dd0, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSosStartSoundEvent::default_instance_
const CMsgSosStartSoundEvent *__cdecl CMsgSosStartSoundEvent::default_instance()
{
  const CMsgSosStartSoundEvent *result; // rax

  result = CMsgSosStartSoundEvent::default_instance_;
  if ( CMsgSosStartSoundEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSosStartSoundEvent::default_instance_;
  }
  return result;
}


// CMsgSosStartSoundEvent::New  (line 4348, @0x0000000001b07b20, libserver.so)
// calls: operator new, CMsgSosStartSoundEvent::CMsgSosStartSoundEvent, operator delete, _Unwind_Resume
CMsgSosStartSoundEvent *__fastcall CMsgSosStartSoundEvent::New(const CMsgSosStartSoundEvent *const this)
{
  CMsgSosStartSoundEvent *v1; // rbx

  v1 = operator new(0x38u);
  CMsgSosStartSoundEvent::CMsgSosStartSoundEvent(v1);
  return v1;
}


// CMsgSosStartSoundEvent::Clear  (line 4352, @0x0000000001afea20, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgSosStartSoundEvent::Clear(CMsgSosStartSoundEvent *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 0x3F) != 0 )
  {
    v2 = (*(this + 16) & 0x10) == 0;
    *(this + 3) = 0;
    *(this + 4) = 0;
    if ( !v2 )
      std::string::_M_mutate(*(this + 5), 0, *(**(this + 5) - 24LL), 0);
    *(this + 12) = 0;
  }
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CMsgSosStartSoundEvent::MergePartialFromCodedStream  (line 4378, @0x0000000001b027a0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)7u>, ReadTagWithCutoff, ReadVarint32, memcpy, mutable_packed_params, set_has_packed_params, set_has_seed, set_has_soundevent_guid, set_has_soundevent_hash, set_has_source_entity_index, set_has_start_time
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// globals: jpt_1B02814
bool __fastcall CMsgSosStartSoundEvent::MergePartialFromCodedStream(
        CMsgSosStartSoundEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v4; // r15
  unsigned int v6; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *i; // rax
  unsigned __int8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  google::protobuf::uint8 *v11; // rdx
  const google::protobuf::uint8 *v12; // rdx
  const google::protobuf::uint8 *v13; // rdx
  const google::protobuf::uint8 *v14; // rax
  int fields; // edx
  const google::protobuf::uint8 *v16; // rdx
  int v17; // eax
  const google::protobuf::uint8 *v18; // rdx
  int v19; // eax
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  int v22; // eax
  google::protobuf::UnknownFieldSet v23; // [rsp+1Ch] [rbp-34h] BYREF

  v2 = &v23;
  v4 = (this + 28);
  v6 = this + 8;
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( buffer < i )
    {
      v9 = *buffer;
      if ( *buffer <= 0 )
        break;
      v10 = v9;
      input->last_tag_ = v9;
      input->buffer_ = buffer + 1;
LABEL_5:
      v11 = (v10 >> 3);
      switch ( v11 )
      {
        case 1:
          if ( v10 != 8 )
            goto handle_unusual;
          v14 = input->buffer_;
          if ( v14 >= input->buffer_end_ || ((fields = *v14) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v23);
            if ( !result )
              return result;
            fields = v23.fields_;
          }
          else
          {
            input->buffer_ = v14 + 1;
          }
          *(this + 4) |= 1u;
          *(this + 6) = fields;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 21 )
            continue;
          v12 = buffer + 1;
          input->buffer_ = v12;
parse_soundevent_hash:
          if ( i - v12 <= 3 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v4) == 0 )
              return 0;
          }
          else
          {
            *v4 = *v12;
            input->buffer_ += 4;
          }
          *(this + 4) |= 2u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 24 )
            continue;
          v13 = buffer + 1;
          input->buffer_ = v13;
parse_source_entity_index:
          if ( i <= v13 || ((v19 = *v13) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v23);
            if ( !result )
              return result;
            v19 = v23.fields_;
          }
          else
          {
            input->buffer_ = v13 + 1;
          }
          *(this + 4) |= 4u;
          *(this + 8) = v19;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 32 )
            continue;
          v16 = buffer + 1;
          input->buffer_ = v16;
parse_seed:
          if ( v16 >= i || ((v17 = *v16) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v23);
            if ( !result )
              return result;
            v17 = v23.fields_;
          }
          else
          {
            input->buffer_ = v16 + 1;
          }
          *(this + 4) |= 8u;
          *(this + 9) = v17;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 42 )
            continue;
          v11 = (buffer + 1);
          input->buffer_ = v11;
parse_packed_params:
          *(this + 4) |= 0x10u;
          if ( google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 5), v11) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 53 )
            continue;
          v18 = buffer + 1;
          input->buffer_ = v18;
parse_start_time:
          if ( i - v18 <= 3 )
          {
            result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, &v23);
            if ( !result )
              return result;
            v22 = v23.fields_;
          }
          else
          {
            v22 = *v18;
            input->buffer_ = v18 + 4;
          }
          *(this + 4) |= 0x20u;
          *(this + 12) = v22;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer != i )
            continue;
          if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
          {
            input->last_tag_ = 0;
            input->legitimate_message_end_ = 1;
            return 1;
          }
          i = input->buffer_;
          break;
        case 2:
          if ( v10 != 21 )
            goto handle_unusual;
          v12 = input->buffer_;
          i = input->buffer_end_;
          goto parse_soundevent_hash;
        case 3:
          if ( v10 != 24 )
            goto handle_unusual;
          v13 = input->buffer_;
          i = input->buffer_end_;
          goto parse_source_entity_index;
        case 4:
          if ( v10 != 32 )
            goto handle_unusual;
          v16 = input->buffer_;
          i = input->buffer_end_;
          goto parse_seed;
        case 5:
          if ( v10 == 42 )
            goto parse_packed_params;
          if ( v10 == 0 )
            return 1;
          goto LABEL_8;
        case 6:
          if ( v10 != 53 )
            goto handle_unusual;
          v18 = input->buffer_;
          i = input->buffer_end_;
          goto parse_start_time;
        default:
          goto handle_unusual;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v10 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      goto LABEL_5;
handle_unusual:
    if ( v10 == 0 )
      return 1;
LABEL_8:
    if ( (v10 & 7) == 4 )
      break;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v10, v6, v2) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CMsgSosStartSoundEvent::SerializeWithCachedSizes  (line 4497, @0x0000000001aff950, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSosStartSoundEvent::SerializeWithCachedSizes(
        const CMsgSosStartSoundEvent *const this,
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
      goto LABEL_12;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteFixed32(&loc_2, *(this + 7), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(this + 8), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 2, *(this + 9), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_7;
LABEL_15:
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_6, output, *(this + 12), v2);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_8;
  }
LABEL_14:
  google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2 + 3, *(this + 5), output, v3);
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


// CMsgSosStartSoundEvent::SerializeWithCachedSizesToArray  (line 4538, @0x0000000001b01820, libserver.so)  // inlines: WriteBytesToArray, WriteFixed32NoTagToArray, WriteFixed32ToArray, WriteFloatNoTagToArray, WriteFloatToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CMsgSosStartSoundEvent::SerializeWithCachedSizesToArray(
        const CMsgSosStartSoundEvent *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  int v7; // edx
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::uint8 *v9; // rsi
  google::protobuf::io::CodedOutputStream *v10; // rdi
  google::protobuf::uint8 *v11; // rsi
  google::protobuf::io::CodedOutputStream *v12; // rdi
  int v13; // edx
  __int64 v14; // rdx

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
    *result = 21;
    result += 5;
    *(result - 1) = v7;
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 8);
    v9 = result + 1;
    *result = 24;
    if ( v8 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v8, v9, v4);
    }
    else if ( v8 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v8, v9, v4);
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
    v10 = *(this + 9);
    v11 = result + 1;
    *result = 32;
    if ( v10 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v10, v11, v4);
    }
    else if ( v10 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, v11, v4);
    }
    else
    {
      result[1] = v10;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v12 = *(this + 5);
    *result = 42;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v12, (result + 1), v4);
    LODWORD(v4) = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v13 = *(this + 12);
    result += 5;
    *(result - 5) = 53;
    *(result - 1) = v13;
  }
  v14 = *(this + 1);
  if ( v14 != 0 && *(v14 + 8) != *v14 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v14);
  return result;
}


// CMsgSosStartSoundEvent::ByteSize  (line 4581, @0x0000000001b002e0, libserver.so)  // inlines: BytesSize, Int32Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CMsgSosStartSoundEvent::ByteSize(const CMsgSosStartSoundEvent *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  int v10; // eax
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  _QWORD *v16; // r13
  google::protobuf::io::CodedOutputStream *v17; // rdi
  int v18; // eax
  int v19; // ecx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_21;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
  {
LABEL_6:
    if ( (v5 & 2) != 0 )
      v3 += 5;
    if ( (v5 & 4) == 0 )
      goto LABEL_13;
    goto LABEL_9;
  }
  v6 = *(this + 6);
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
    v3 = 16;
  if ( (v4 & 4) != 0 )
  {
LABEL_9:
    v8 = *(this + 8);
    v9 = 11;
    if ( v8 >= 0 )
    {
      LOBYTE(v9) = 2;
      if ( v8 > 0x7F )
      {
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
        v5 = *(this + 4);
        v9 = v10 + 1;
      }
    }
    v3 += v9;
  }
LABEL_13:
  if ( (v5 & 8) != 0 )
  {
    v11 = *(this + 9);
    v12 = 11;
    if ( v11 >= 0 )
    {
      LOBYTE(v12) = 2;
      if ( v11 > 0x7F )
      {
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
        v5 = *(this + 4);
        v12 = v13 + 1;
      }
    }
    v3 += v12;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v16 = *(this + 5);
    v17 = *(*v16 - 24LL);
    v18 = 1;
    v19 = v17;
    if ( v17 > 0x7F )
    {
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, v1);
      v19 = *(*v16 - 24LL);
      v5 = *(this + 4);
    }
    v3 += v18 + v19 + 1;
  }
  if ( (v5 & 0x20) != 0 )
    v3 += 5;
LABEL_21:
  v14 = *(this + 1);
  if ( v14 != 0 && *(v14 + 8) != *v14 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v14);
  *(this + 5) = v3;
  return v3;
}


// CMsgSosStartSoundEvent::MergeFrom  (line 4635, @0x0000000001b07e70, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSosStartSoundEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSosStartSoundEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSosStartSoundEvent
void __fastcall CMsgSosStartSoundEvent::MergeFrom(
        CMsgSosStartSoundEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSosStartSoundEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      4636);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgSosStartSoundEvent, 0)) != 0 )
  {
    CMsgSosStartSoundEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSosStartSoundEvent::MergeFrom  (line 4647, @0x0000000001b07cc0, libserver.so)  // inlines: set_has_packed_params, set_has_seed, set_has_soundevent_guid, set_has_soundevent_hash, set_has_source_entity_index, set_has_start_time, set_packed_params, set_seed, set_soundevent_guid, set_soundevent_hash, set_source_entity_index, set_start_time
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgSosStartSoundEvent::CMsgSosStartSoundEvent, CMsgSosStartSoundEvent::MergeFrom, CMsgSosStartSoundEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgSosStartSoundEvent::MergeFrom(
        CMsgSosStartSoundEvent *const this,
        const CMsgSosStartSoundEvent *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // xmm0_4
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
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      4648);
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
      v7 = *(from + 8);
      *(this + 4) |= 4u;
      *(this + 8) = v7;
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v8 = *(from + 9);
      *(this + 4) |= 8u;
      *(this + 9) = v8;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v10 = *(from + 5);
      v11 = *(this + 5);
      *(this + 4) |= 0x10u;
      std::string::assign(v11, v10);
      if ( (*(from + 4) & 0x20) == 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    if ( (v4 & 0x20) != 0 )
    {
LABEL_14:
      v9 = *(from + 12);
      *(this + 4) |= 0x20u;
      *(this + 12) = v9;
    }
  }
LABEL_15:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgSosStartSoundEvent::CopyFrom  (line 4672, @0x0000000001afe380, libserver.so)
void __fastcall CMsgSosStartSoundEvent::CopyFrom(
        CMsgSosStartSoundEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSosStartSoundEvent::CopyFrom  (line 4678, @0x0000000001b07f50, libserver.so)
// calls: CMsgSosStartSoundEvent::MergeFrom
// callers: CNetMessagePB<208, CMsgSosStartSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgSosStartSoundEvent::CopyFrom(
        CMsgSosStartSoundEvent *const this,
        const CMsgSosStartSoundEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSosStartSoundEvent::MergeFrom(this, from);
  }
}


// CMsgSosStartSoundEvent::IsInitialized  (line 4684, @0x0000000001afe3c0, libserver.so)
bool __fastcall CMsgSosStartSoundEvent::IsInitialized(const CMsgSosStartSoundEvent *const this)
{
  return 1;
}


// CMsgSosStartSoundEvent::Swap  (line 4689, @0x0000000001b07f90, libserver.so)  // inlines: Swap, swap<float>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgSosStartSoundEvent::Swap(CMsgSosStartSoundEvent *const this, CMsgSosStartSoundEvent *other)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  int v7; // xmm1_4
  __int64 v8; // rax

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
    v5 = *(this + 9);
    *(this + 9) = *(other + 9);
    *(other + 9) = v5;
    v6 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v6;
    v7 = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v7;
    LODWORD(v6) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v6;
    v8 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v8;
    LODWORD(v8) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v8;
  }
}


// CMsgSosStartSoundEvent::GetMetadata  (line 4703, @0x0000000001b01530, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosStartSoundEvent_descriptor_, `anonymous namespace'::CMsgSosStartSoundEvent_reflection_
google::protobuf::Metadata __fastcall CMsgSosStartSoundEvent::GetMetadata(const CMsgSosStartSoundEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSosStartSoundEvent_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSosStartSoundEvent_reflection_;
  return result;
}


// CMsgSosStopSoundEvent::CMsgSosStopSoundEvent  (line 4718, @0x0000000001b08020, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgSosStopSoundEvent::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<209, CMsgSosStopSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<209, CMsgSosStopSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosStopSoundEvent::CMsgSosStopSoundEvent(CMsgSosStopSoundEvent *const this)
{
  *this = off_3F77550;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CMsgSosStopSoundEvent::InitAsDefaultInstance  (line 4724, @0x0000000001b080b0, libserver.so)
void __fastcall CMsgSosStopSoundEvent::InitAsDefaultInstance(CMsgSosStopSoundEvent *const this)
{
  ;
}


// CMsgSosStopSoundEvent::CMsgSosStopSoundEvent  (line 4727, @0x0000000001b08230, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSosStopSoundEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<209, CMsgSosStopSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgSosStopSoundEvent::CMsgSosStopSoundEvent(
        CMsgSosStopSoundEvent *const this,
        const CMsgSosStopSoundEvent *const from)
{
  *this = off_3F77550;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  CMsgSosStopSoundEvent::MergeFrom(this, from);
}


// CMsgSosStopSoundEvent::SharedCtor  (line 4734, @0x0000000001b080c0, libserver.so)  // inlines: memset
void __fastcall CMsgSosStopSoundEvent::SharedCtor(CMsgSosStopSoundEvent *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent  (line 4740, @0x0000000001afe6a0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<209, CMsgSosStopSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::~CNetMessagePB, CMsgSosStopSoundEvent_t::~CMsgSosStopSoundEvent_t, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<209, CMsgSosStopSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent(CMsgSosStopSoundEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F77550;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent  (line 4740, @0x0000000001afe6d0, libserver.so)  // inlines: ~CMsgSosStopSoundEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CMsgSosStopSoundEvent::~CMsgSosStopSoundEvent(CMsgSosStopSoundEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F77550;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CMsgSosStopSoundEvent::SharedDtor  (line 4745, @0x0000000001b080e0, libserver.so)
void __fastcall CMsgSosStopSoundEvent::SharedDtor(CMsgSosStopSoundEvent *const this)
{
  ;
}


// CMsgSosStopSoundEvent::SetCachedSize  (line 4750, @0x0000000001afe3d0, libserver.so)
void __fastcall CMsgSosStopSoundEvent::SetCachedSize(const CMsgSosStopSoundEvent *const this, int size)
{
  *(this + 5) = size;
}


// CMsgSosStopSoundEvent::descriptor  (line 4755, @0x0000000001b080f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosStopSoundEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSosStopSoundEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSosStopSoundEvent_descriptor_;
}


// CMsgSosStopSoundEvent::default_instance  (line 4760, @0x0000000001b09e00, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSosStopSoundEvent::default_instance_
const CMsgSosStopSoundEvent *__cdecl CMsgSosStopSoundEvent::default_instance()
{
  const CMsgSosStopSoundEvent *result; // rax

  result = CMsgSosStopSoundEvent::default_instance_;
  if ( CMsgSosStopSoundEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSosStopSoundEvent::default_instance_;
  }
  return result;
}


// CMsgSosStopSoundEvent::New  (line 4767, @0x0000000001b08070, libserver.so)
// calls: operator new, CMsgSosStopSoundEvent::CMsgSosStopSoundEvent, operator delete, _Unwind_Resume
CMsgSosStopSoundEvent *__fastcall CMsgSosStopSoundEvent::New(const CMsgSosStopSoundEvent *const this)
{
  CMsgSosStopSoundEvent *v1; // rbx

  v1 = operator new(0x20u);
  CMsgSosStopSoundEvent::CMsgSosStopSoundEvent(v1);
  return v1;
}


// CMsgSosStopSoundEvent::Clear  (line 4771, @0x0000000001afe840, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CMsgSosStopSoundEvent::Clear(CMsgSosStopSoundEvent *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgSosStopSoundEvent::MergePartialFromCodedStream  (line 4777, @0x0000000001b032e0, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, set_has_soundevent_guid
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CMsgSosStopSoundEvent::MergePartialFromCodedStream(
        CMsgSosStopSoundEvent *const this,
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
    if ( v9 >> 3 != 1 || v9 != 8 )
      break;
    v12 = input->buffer_;
    if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v14);
      if ( !result )
        return result;
      v13 = v14[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
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


// CMsgSosStopSoundEvent::SerializeWithCachedSizes  (line 4823, @0x0000000001afee90, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSosStopSoundEvent::SerializeWithCachedSizes(
        const CMsgSosStopSoundEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  _QWORD *v6; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 6), output, v3);
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


// CMsgSosStopSoundEvent::SerializeWithCachedSizesToArray  (line 4838, @0x0000000001b005c0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CMsgSosStopSoundEvent::SerializeWithCachedSizesToArray(
        const CMsgSosStopSoundEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::io::CodedOutputStream *v4; // rdi
  __int64 v5; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    v4 = *(this + 6);
    *target = 8;
    if ( v4 < 0 )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v4, (target + 1), v2);
    }
    else if ( v4 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v4, target + 1, v2);
    }
    else
    {
      target[1] = v4;
      target += 2;
    }
  }
  v5 = *(this + 1);
  if ( v5 == 0 || *(v5 + 8) == *v5 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v5);
}


// CMsgSosStopSoundEvent::ByteSize  (line 4854, @0x0000000001affef0, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CMsgSosStopSoundEvent::ByteSize(const CMsgSosStopSoundEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  google::protobuf::io::CodedOutputStream *v7; // rdi

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v7 = *(this + 6);
    LOBYTE(v3) = 11;
    if ( v7 >= 0 )
    {
      LOBYTE(v3) = 2;
      if ( v7 > 0x7F )
        v3 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1) + 1;
    }
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgSosStopSoundEvent::MergeFrom  (line 4877, @0x0000000001b082b0, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSosStopSoundEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSosStopSoundEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSosStopSoundEvent
void __fastcall CMsgSosStopSoundEvent::MergeFrom(
        CMsgSosStopSoundEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSosStopSoundEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      4878);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgSosStopSoundEvent, 0)) != 0 )
  {
    CMsgSosStopSoundEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSosStopSoundEvent::MergeFrom  (line 4889, @0x0000000001b08180, libserver.so)  // inlines: set_has_soundevent_guid, set_soundevent_guid
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgSosStopSoundEvent::CMsgSosStopSoundEvent, CMsgSosStopSoundEvent::MergeFrom, CMsgSosStopSoundEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgSosStopSoundEvent::MergeFrom(
        CMsgSosStopSoundEvent *const this,
        const CMsgSosStopSoundEvent *const from)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      4890);
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


// CMsgSosStopSoundEvent::CopyFrom  (line 4899, @0x0000000001afe3e0, libserver.so)
void __fastcall CMsgSosStopSoundEvent::CopyFrom(
        CMsgSosStopSoundEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSosStopSoundEvent::CopyFrom  (line 4905, @0x0000000001b08390, libserver.so)
// calls: CMsgSosStopSoundEvent::MergeFrom
// callers: CNetMessagePB<209, CMsgSosStopSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgSosStopSoundEvent::CopyFrom(
        CMsgSosStopSoundEvent *const this,
        const CMsgSosStopSoundEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSosStopSoundEvent::MergeFrom(this, from);
  }
}


// CMsgSosStopSoundEvent::IsInitialized  (line 4911, @0x0000000001afe420, libserver.so)
bool __fastcall CMsgSosStopSoundEvent::IsInitialized(const CMsgSosStopSoundEvent *const this)
{
  return 1;
}


// CMsgSosStopSoundEvent::Swap  (line 4916, @0x0000000001b083d0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgSosStopSoundEvent::Swap(CMsgSosStopSoundEvent *const this, CMsgSosStopSoundEvent *other)
{
  int v2; // eax
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


// CMsgSosStopSoundEvent::GetMetadata  (line 4925, @0x0000000001b015d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosStopSoundEvent_descriptor_, `anonymous namespace'::CMsgSosStopSoundEvent_reflection_
google::protobuf::Metadata __fastcall CMsgSosStopSoundEvent::GetMetadata(const CMsgSosStopSoundEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSosStopSoundEvent_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSosStopSoundEvent_reflection_;
  return result;
}


// CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash  (line 4941, @0x0000000001b08410, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgSosStopSoundEventHash::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<212, CMsgSosStopSoundEventHash, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<212, CMsgSosStopSoundEventHash, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash(CMsgSosStopSoundEventHash *const this)
{
  *this = off_3F77610;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CMsgSosStopSoundEventHash::InitAsDefaultInstance  (line 4947, @0x0000000001b084b0, libserver.so)
void __fastcall CMsgSosStopSoundEventHash::InitAsDefaultInstance(CMsgSosStopSoundEventHash *const this)
{
  ;
}


// CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash  (line 4950, @0x0000000001b08660, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSosStopSoundEventHash::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<212, CMsgSosStopSoundEventHash, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash(
        CMsgSosStopSoundEventHash *const this,
        const CMsgSosStopSoundEventHash *const from)
{
  *this = off_3F77610;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
  CMsgSosStopSoundEventHash::MergeFrom(this, from);
}


// CMsgSosStopSoundEventHash::SharedCtor  (line 4957, @0x0000000001b084c0, libserver.so)  // inlines: memset
void __fastcall CMsgSosStopSoundEventHash::SharedCtor(CMsgSosStopSoundEventHash *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash  (line 4964, @0x0000000001afe710, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<212, CMsgSosStopSoundEventHash, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::~CNetMessagePB, CMsgSosStopSoundEventHash_t::~CMsgSosStopSoundEventHash_t, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<212, CMsgSosStopSoundEventHash, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash(CMsgSosStopSoundEventHash *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F77610;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash  (line 4964, @0x0000000001afe740, libserver.so)  // inlines: ~CMsgSosStopSoundEventHash
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CMsgSosStopSoundEventHash::~CMsgSosStopSoundEventHash(CMsgSosStopSoundEventHash *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F77610;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CMsgSosStopSoundEventHash::SharedDtor  (line 4969, @0x0000000001b084f0, libserver.so)
void __fastcall CMsgSosStopSoundEventHash::SharedDtor(CMsgSosStopSoundEventHash *const this)
{
  ;
}


// CMsgSosStopSoundEventHash::SetCachedSize  (line 4974, @0x0000000001afe430, libserver.so)
void __fastcall CMsgSosStopSoundEventHash::SetCachedSize(const CMsgSosStopSoundEventHash *const this, int size)
{
  *(this + 5) = size;
}


// CMsgSosStopSoundEventHash::descriptor  (line 4979, @0x0000000001b08500, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosStopSoundEventHash_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSosStopSoundEventHash::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSosStopSoundEventHash_descriptor_;
}


// CMsgSosStopSoundEventHash::default_instance  (line 4984, @0x0000000001b09e30, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSosStopSoundEventHash::default_instance_
const CMsgSosStopSoundEventHash *__cdecl CMsgSosStopSoundEventHash::default_instance()
{
  const CMsgSosStopSoundEventHash *result; // rax

  result = CMsgSosStopSoundEventHash::default_instance_;
  if ( CMsgSosStopSoundEventHash::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSosStopSoundEventHash::default_instance_;
  }
  return result;
}


// CMsgSosStopSoundEventHash::New  (line 4991, @0x0000000001b08470, libserver.so)
// calls: operator new, CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash, operator delete, _Unwind_Resume
CMsgSosStopSoundEventHash *__fastcall CMsgSosStopSoundEventHash::New(const CMsgSosStopSoundEventHash *const this)
{
  CMsgSosStopSoundEventHash *v1; // rbx

  v1 = operator new(0x20u);
  CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash(v1);
  return v1;
}


// CMsgSosStopSoundEventHash::Clear  (line 4995, @0x0000000001afe880, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CMsgSosStopSoundEventHash::Clear(CMsgSosStopSoundEventHash *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgSosStopSoundEventHash::MergePartialFromCodedStream  (line 5015, @0x0000000001b01ec0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)7u>, ReadTagWithCutoff, ReadVarint32, memcpy, set_has_soundevent_hash, set_has_source_entity_index
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
bool __fastcall CMsgSosStopSoundEventHash::MergePartialFromCodedStream(
        CMsgSosStopSoundEventHash *const this,
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
  const google::protobuf::uint8 *v13; // rdx
  const google::protobuf::uint8 *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16[13]; // [rsp+Ch] [rbp-34h] BYREF

  v4 = (this + 24);
  v6 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
      if ( v10 != 13 )
        goto handle_unusual;
      v13 = input->buffer_;
      if ( LODWORD(input->buffer_end_) - v13 <= 3 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *v4 = *v13;
        input->buffer_ += 4;
      }
      *(this + 4) |= 1u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 16 )
      {
        v14 = buffer + 1;
        input->buffer_ = v14;
        goto parse_source_entity_index;
      }
    }
    if ( v10 >> 3 != 2 || v10 != 16 )
      break;
    v14 = input->buffer_;
    buffer_end = input->buffer_end_;
parse_source_entity_index:
    if ( buffer_end <= v14 || ((v15 = *v14) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v16);
      if ( !result )
        return result;
      v15 = v16[0];
    }
    else
    {
      input->buffer_ = v14 + 1;
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
handle_unusual:
  if ( v10 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgSosStopSoundEventHash::SerializeWithCachedSizes  (line 5076, @0x0000000001aff490, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSosStopSoundEventHash::SerializeWithCachedSizes(
        const CMsgSosStopSoundEventHash *const this,
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
  google::protobuf::internal::WireFormatLite::WriteFixed32(&loc_0 + 1, *(this + 6), output, v3);
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


// CMsgSosStopSoundEventHash::SerializeWithCachedSizesToArray  (line 5096, @0x0000000001b00ac0, libserver.so)  // inlines: WriteFixed32NoTagToArray, WriteFixed32ToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CMsgSosStopSoundEventHash::SerializeWithCachedSizesToArray(
        const CMsgSosStopSoundEventHash *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  int v5; // eax
  google::protobuf::io::CodedOutputStream *v6; // rdi
  __int64 v7; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 6);
    *target = 13;
    target += 5;
    *(target - 1) = v5;
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


// CMsgSosStopSoundEventHash::ByteSize  (line 5117, @0x0000000001afff60, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty, has_soundevent_hash
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CMsgSosStopSoundEventHash::ByteSize(const CMsgSosStopSoundEventHash *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = -(*(this + 4) & 1) & 5;
    if ( (v4 & 2) != 0 )
    {
      v7 = *(this + 7);
      v8 = 11;
      if ( v7 >= 0 )
      {
        LOBYTE(v8) = 2;
        if ( v7 > 0x7F )
          v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1) + 1;
      }
      v3 += v8;
    }
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgSosStopSoundEventHash::MergeFrom  (line 5145, @0x0000000001b086e0, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSosStopSoundEventHash*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSosStopSoundEventHash::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSosStopSoundEventHash
void __fastcall CMsgSosStopSoundEventHash::MergeFrom(
        CMsgSosStopSoundEventHash *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSosStopSoundEventHash *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      5146);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgSosStopSoundEventHash, 0)) != 0 )
  {
    CMsgSosStopSoundEventHash::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSosStopSoundEventHash::MergeFrom  (line 5157, @0x0000000001b08590, libserver.so)  // inlines: set_has_soundevent_hash, set_has_source_entity_index, set_soundevent_hash, set_source_entity_index
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgSosStopSoundEventHash::CMsgSosStopSoundEventHash, CMsgSosStopSoundEventHash::MergeFrom, CMsgSosStopSoundEventHash::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgSosStopSoundEventHash::MergeFrom(
        CMsgSosStopSoundEventHash *const this,
        const CMsgSosStopSoundEventHash *const from)
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
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      5158);
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


// CMsgSosStopSoundEventHash::CopyFrom  (line 5170, @0x0000000001afe440, libserver.so)
void __fastcall CMsgSosStopSoundEventHash::CopyFrom(
        CMsgSosStopSoundEventHash *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSosStopSoundEventHash::CopyFrom  (line 5176, @0x0000000001b087c0, libserver.so)
// calls: CMsgSosStopSoundEventHash::MergeFrom
// callers: CNetMessagePB<212, CMsgSosStopSoundEventHash, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgSosStopSoundEventHash::CopyFrom(
        CMsgSosStopSoundEventHash *const this,
        const CMsgSosStopSoundEventHash *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSosStopSoundEventHash::MergeFrom(this, from);
  }
}


// CMsgSosStopSoundEventHash::IsInitialized  (line 5182, @0x0000000001afe480, libserver.so)
bool __fastcall CMsgSosStopSoundEventHash::IsInitialized(const CMsgSosStopSoundEventHash *const this)
{
  return 1;
}


// CMsgSosStopSoundEventHash::Swap  (line 5187, @0x0000000001b08800, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgSosStopSoundEventHash::Swap(
        CMsgSosStopSoundEventHash *const this,
        CMsgSosStopSoundEventHash *other)
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


// CMsgSosStopSoundEventHash::GetMetadata  (line 5197, @0x0000000001b01670, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosStopSoundEventHash_descriptor_, `anonymous namespace'::CMsgSosStopSoundEventHash_reflection_
google::protobuf::Metadata __fastcall CMsgSosStopSoundEventHash::GetMetadata(
        const CMsgSosStopSoundEventHash *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSosStopSoundEventHash_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSosStopSoundEventHash_reflection_;
  return result;
}


// CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams  (line 5213, @0x0000000001b08920, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSosSetSoundEventParams::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgSosSetSoundEventParams::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<210, CMsgSosSetSoundEventParams, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<210, CMsgSosSetSoundEventParams, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams(CMsgSosSetSoundEventParams *const this)
{
  *this = off_3F776D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSosSetSoundEventParams::SharedCtor(this);
}


// CMsgSosSetSoundEventParams::InitAsDefaultInstance  (line 5219, @0x0000000001b08850, libserver.so)
void __fastcall CMsgSosSetSoundEventParams::InitAsDefaultInstance(CMsgSosSetSoundEventParams *const this)
{
  ;
}


// CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams  (line 5222, @0x0000000001b08c00, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSosSetSoundEventParams::SharedCtor, CMsgSosSetSoundEventParams::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<210, CMsgSosSetSoundEventParams, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams(
        CMsgSosSetSoundEventParams *const this,
        const CMsgSosSetSoundEventParams *const from)
{
  *this = off_3F776D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSosSetSoundEventParams::SharedCtor(this);
  CMsgSosSetSoundEventParams::MergeFrom(this, from);
}


// CMsgSosSetSoundEventParams::SharedCtor  (line 5229, @0x0000000001b08860, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams
void __fastcall CMsgSosSetSoundEventParams::SharedCtor(CMsgSosSetSoundEventParams *const this)
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


// CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams  (line 5237, @0x0000000001b08a30, libserver.so)
// calls: CMsgSosSetSoundEventParams::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams, CNetMessagePB<210, CMsgSosSetSoundEventParams, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::~CNetMessagePB, CMsgSosSetSoundEventParams_t::~CMsgSosSetSoundEventParams_t, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<210, CMsgSosSetSoundEventParams, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams(CMsgSosSetSoundEventParams *const this)
{
  *this = off_3F776D0;
  CMsgSosSetSoundEventParams::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams  (line 5237, @0x0000000001b08a70, libserver.so)
// calls: CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams, operator delete
void __fastcall CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams(CMsgSosSetSoundEventParams *const this)
{
  CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams(this);
  operator delete(this);
}


// CMsgSosSetSoundEventParams::SharedDtor  (line 5242, @0x0000000001b089c0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgSosSetSoundEventParams::~CMsgSosSetSoundEventParams
void __fastcall CMsgSosSetSoundEventParams::SharedDtor(CMsgSosSetSoundEventParams *const this)
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


// CMsgSosSetSoundEventParams::SetCachedSize  (line 5248, @0x0000000001afe490, libserver.so)
void __fastcall CMsgSosSetSoundEventParams::SetCachedSize(const CMsgSosSetSoundEventParams *const this, int size)
{
  *(this + 5) = size;
}


// CMsgSosSetSoundEventParams::descriptor  (line 5253, @0x0000000001b08a90, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosSetSoundEventParams_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSosSetSoundEventParams::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSosSetSoundEventParams_descriptor_;
}


// CMsgSosSetSoundEventParams::default_instance  (line 5258, @0x0000000001b09e60, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSosSetSoundEventParams::default_instance_
const CMsgSosSetSoundEventParams *__cdecl CMsgSosSetSoundEventParams::default_instance()
{
  const CMsgSosSetSoundEventParams *result; // rax

  result = CMsgSosSetSoundEventParams::default_instance_;
  if ( CMsgSosSetSoundEventParams::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSosSetSoundEventParams::default_instance_;
  }
  return result;
}


// CMsgSosSetSoundEventParams::New  (line 5265, @0x0000000001b08980, libserver.so)
// calls: operator new, CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams, operator delete, _Unwind_Resume
CMsgSosSetSoundEventParams *__fastcall CMsgSosSetSoundEventParams::New(const CMsgSosSetSoundEventParams *const this)
{
  CMsgSosSetSoundEventParams *v1; // rbx

  v1 = operator new(0x28u);
  CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams(v1);
  return v1;
}


// CMsgSosSetSoundEventParams::Clear  (line 5269, @0x0000000001afeaa0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgSosSetSoundEventParams::Clear(CMsgSosSetSoundEventParams *const this)
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


// CMsgSosSetSoundEventParams::MergePartialFromCodedStream  (line 5280, @0x0000000001b02080, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_packed_params, set_has_packed_params, set_has_soundevent_guid
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CMsgSosSetSoundEventParams::MergePartialFromCodedStream(
        CMsgSosSetSoundEventParams *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  unsigned __int8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  google::protobuf::uint8 *v9; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  unsigned int v13; // edx
  unsigned int v14[9]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = this + 8;
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
    if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v14);
      if ( !result )
        return result;
      v13 = v14[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 8) = v13;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 42 )
    {
      v9 = (buffer + 1);
      input->buffer_ = v9;
parse_packed_params:
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
  if ( v9 == 5 && v8 == 42 )
    goto parse_packed_params;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgSosSetSoundEventParams::SerializeWithCachedSizes  (line 5339, @0x0000000001affa60, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSosSetSoundEventParams::SerializeWithCachedSizes(
        const CMsgSosSetSoundEventParams *const this,
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
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2 + 3, *(this + 3), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 8), output, v3);
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


// CMsgSosSetSoundEventParams::SerializeWithCachedSizesToArray  (line 5360, @0x0000000001b00720, libserver.so)  // inlines: WriteBytesToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CMsgSosSetSoundEventParams::SerializeWithCachedSizesToArray(
        const CMsgSosSetSoundEventParams *const this,
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
    HIBYTE(v7[-1]._M_dataplus._M_p) = 42;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v6, v7, v2);
  }
  v8 = *(this + 1);
  if ( v8 == 0 || *(v8 + 8) == *v8 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v8);
}


// CMsgSosSetSoundEventParams::ByteSize  (line 5383, @0x0000000001afffd0, libserver.so)  // inlines: BytesSize, Int32Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CMsgSosSetSoundEventParams::ByteSize(const CMsgSosSetSoundEventParams *const this)
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
  if ( v4 == 0 )
    goto LABEL_7;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
    goto LABEL_6;
  v6 = *(this + 8);
  if ( v6 >= 0 )
  {
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v7 + 1;
    }
LABEL_6:
    if ( (v5 & 2) == 0 )
      goto LABEL_7;
    goto LABEL_11;
  }
  v3 = 11;
  if ( (v4 & 2) != 0 )
  {
LABEL_11:
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
LABEL_7:
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgSosSetSoundEventParams::MergeFrom  (line 5413, @0x0000000001b08c70, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSosSetSoundEventParams*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSosSetSoundEventParams::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSosSetSoundEventParams
void __fastcall CMsgSosSetSoundEventParams::MergeFrom(
        CMsgSosSetSoundEventParams *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSosSetSoundEventParams *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      5414);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgSosSetSoundEventParams,
               0)) != 0 )
  {
    CMsgSosSetSoundEventParams::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSosSetSoundEventParams::MergeFrom  (line 5425, @0x0000000001b08b20, libserver.so)  // inlines: set_has_packed_params, set_has_soundevent_guid, set_packed_params, set_soundevent_guid
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgSosSetSoundEventParams::CMsgSosSetSoundEventParams, CMsgSosSetSoundEventParams::MergeFrom, CMsgSosSetSoundEventParams::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgSosSetSoundEventParams::MergeFrom(
        CMsgSosSetSoundEventParams *const this,
        const CMsgSosSetSoundEventParams *const from)
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
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      5426);
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


// CMsgSosSetSoundEventParams::CopyFrom  (line 5438, @0x0000000001afe4a0, libserver.so)
void __fastcall CMsgSosSetSoundEventParams::CopyFrom(
        CMsgSosSetSoundEventParams *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSosSetSoundEventParams::CopyFrom  (line 5444, @0x0000000001b08d50, libserver.so)
// calls: CMsgSosSetSoundEventParams::MergeFrom
// callers: CNetMessagePB<210, CMsgSosSetSoundEventParams, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgSosSetSoundEventParams::CopyFrom(
        CMsgSosSetSoundEventParams *const this,
        const CMsgSosSetSoundEventParams *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSosSetSoundEventParams::MergeFrom(this, from);
  }
}


// CMsgSosSetSoundEventParams::IsInitialized  (line 5450, @0x0000000001afe4e0, libserver.so)
bool __fastcall CMsgSosSetSoundEventParams::IsInitialized(const CMsgSosSetSoundEventParams *const this)
{
  return 1;
}


// CMsgSosSetSoundEventParams::Swap  (line 5455, @0x0000000001b08d90, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgSosSetSoundEventParams::Swap(
        CMsgSosSetSoundEventParams *const this,
        CMsgSosSetSoundEventParams *other)
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


// CMsgSosSetSoundEventParams::GetMetadata  (line 5465, @0x0000000001b010d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosSetSoundEventParams_descriptor_, `anonymous namespace'::CMsgSosSetSoundEventParams_reflection_
google::protobuf::Metadata __fastcall CMsgSosSetSoundEventParams::GetMetadata(
        const CMsgSosSetSoundEventParams *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSosSetSoundEventParams_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSosSetSoundEventParams_reflection_;
  return result;
}


// CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields  (line 5481, @0x0000000001b08eb0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSosSetLibraryStackFields::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgSosSetLibraryStackFields::New, protobuf_AddDesc_gameevents_2eproto, CNetMessagePB<211, CMsgSosSetLibraryStackFields, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateMessage, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<211, CMsgSosSetLibraryStackFields, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields(CMsgSosSetLibraryStackFields *const this)
{
  *this = off_3F77790;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSosSetLibraryStackFields::SharedCtor(this);
}


// CMsgSosSetLibraryStackFields::InitAsDefaultInstance  (line 5487, @0x0000000001b08de0, libserver.so)
void __fastcall CMsgSosSetLibraryStackFields::InitAsDefaultInstance(CMsgSosSetLibraryStackFields *const this)
{
  ;
}


// CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields  (line 5490, @0x0000000001b0a4b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgSosSetLibraryStackFields::SharedCtor, CMsgSosSetLibraryStackFields::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<211, CMsgSosSetLibraryStackFields, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields(
        CMsgSosSetLibraryStackFields *const this,
        const CMsgSosSetLibraryStackFields *const from)
{
  *this = off_3F77790;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgSosSetLibraryStackFields::SharedCtor(this);
  CMsgSosSetLibraryStackFields::MergeFrom(this, from);
}


// CMsgSosSetLibraryStackFields::SharedCtor  (line 5497, @0x0000000001b08df0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields
void __fastcall CMsgSosSetLibraryStackFields::SharedCtor(CMsgSosSetLibraryStackFields *const this)
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


// CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields  (line 5505, @0x0000000001b0a2b0, libserver.so)
// calls: CMsgSosSetLibraryStackFields::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields, CNetMessagePB<211, CMsgSosSetLibraryStackFields, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::~CNetMessagePB, CMsgSosSetLibraryStackFields_t::~CMsgSosSetLibraryStackFields_t, CSoundOpGameSystem::FrameUpdatePostEntityThink, CNetMessagePB<211, CMsgSosSetLibraryStackFields, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields(CMsgSosSetLibraryStackFields *const this)
{
  *this = off_3F77790;
  CMsgSosSetLibraryStackFields::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields  (line 5505, @0x0000000001b0a2f0, libserver.so)
// calls: CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields, operator delete
void __fastcall CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields(CMsgSosSetLibraryStackFields *const this)
{
  CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields(this);
  operator delete(this);
}


// CMsgSosSetLibraryStackFields::SharedDtor  (line 5510, @0x0000000001b0a240, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgSosSetLibraryStackFields::~CMsgSosSetLibraryStackFields
void __fastcall CMsgSosSetLibraryStackFields::SharedDtor(CMsgSosSetLibraryStackFields *const this)
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


// CMsgSosSetLibraryStackFields::SetCachedSize  (line 5516, @0x0000000001afe4f0, libserver.so)
void __fastcall CMsgSosSetLibraryStackFields::SetCachedSize(const CMsgSosSetLibraryStackFields *const this, int size)
{
  *(this + 5) = size;
}


// CMsgSosSetLibraryStackFields::descriptor  (line 5521, @0x0000000001b0a310, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosSetLibraryStackFields_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgSosSetLibraryStackFields::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgSosSetLibraryStackFields_descriptor_;
}


// CMsgSosSetLibraryStackFields::default_instance  (line 5526, @0x0000000001b0a3a0, libserver.so)
// calls: protobuf_AddDesc_gameevents_2eproto
// globals: CMsgSosSetLibraryStackFields::default_instance_
const CMsgSosSetLibraryStackFields *__cdecl CMsgSosSetLibraryStackFields::default_instance()
{
  const CMsgSosSetLibraryStackFields *result; // rax

  result = CMsgSosSetLibraryStackFields::default_instance_;
  if ( CMsgSosSetLibraryStackFields::default_instance_ == 0 )
  {
    protobuf_AddDesc_gameevents_2eproto();
    return CMsgSosSetLibraryStackFields::default_instance_;
  }
  return result;
}


// CMsgSosSetLibraryStackFields::New  (line 5533, @0x0000000001b08f10, libserver.so)
// calls: operator new, CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields, operator delete, _Unwind_Resume
CMsgSosSetLibraryStackFields *__fastcall CMsgSosSetLibraryStackFields::New(
        const CMsgSosSetLibraryStackFields *const this)
{
  CMsgSosSetLibraryStackFields *v1; // rbx

  v1 = operator new(0x28u);
  CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields(v1);
  return v1;
}


// CMsgSosSetLibraryStackFields::Clear  (line 5537, @0x0000000001afeb10, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgSosSetLibraryStackFields::Clear(CMsgSosSetLibraryStackFields *const this)
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


// CMsgSosSetLibraryStackFields::MergePartialFromCodedStream  (line 5548, @0x0000000001b01d50, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)7u>, ReadTagWithCutoff, memcpy, mutable_packed_fields, set_has_packed_fields, set_has_stack_hash
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
bool __fastcall CMsgSosSetLibraryStackFields::MergePartialFromCodedStream(
        CMsgSosSetLibraryStackFields *const this,
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
  const google::protobuf::uint8 *v13; // rdx

  v2 = (this + 32);
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
        if ( google::protobuf::internal::WireFormat::SkipField(input, v9, v4, buffer_end) == 0 )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer_end > buffer )
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
    if ( v9 != 13 )
      goto handle_unusual;
    v13 = input->buffer_;
    if ( LODWORD(input->buffer_end_) - v13 <= 3 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v2) == 0 )
        return 0;
    }
    else
    {
      *v2 = *v13;
      input->buffer_ += 4;
    }
    *(this + 4) |= 1u;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 42 )
    {
      v10 = (buffer + 1);
      input->buffer_ = v10;
parse_packed_fields:
      *(this + 4) |= 2u;
      result = google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 3), v10);
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
  if ( v10 == 5 && v9 == 42 )
    goto parse_packed_fields;
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgSosSetLibraryStackFields::SerializeWithCachedSizes  (line 5607, @0x0000000001affae0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgSosSetLibraryStackFields::SerializeWithCachedSizes(
        const CMsgSosSetLibraryStackFields *const this,
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
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2 + 3, *(this + 3), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteFixed32(&loc_0 + 1, *(this + 8), output, v3);
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


// CMsgSosSetLibraryStackFields::SerializeWithCachedSizesToArray  (line 5628, @0x0000000001affd10, libserver.so)  // inlines: WriteBytesToArray, WriteFixed32NoTagToArray, WriteFixed32ToArray, WriteLittleEndian32ToArray, WriteTagToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CMsgSosSetLibraryStackFields::SerializeWithCachedSizesToArray(
        const CMsgSosSetLibraryStackFields *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  int v5; // eax
  google::protobuf::io::CodedOutputStream *v6; // rdi
  const std::string *v7; // rsi
  __int64 v8; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 8);
    *target = 13;
    target += 5;
    *(target - 1) = v5;
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v6 = *(this + 3);
    v7 = (target + 1);
    HIBYTE(v7[-1]._M_dataplus._M_p) = 42;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v6, v7, v2);
  }
  v8 = *(this + 1);
  if ( v8 == 0 || *(v8 + 8) == *v8 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v8);
}


// CMsgSosSetLibraryStackFields::ByteSize  (line 5651, @0x0000000001affd80, libserver.so)  // inlines: BytesSize, VarintSize32, empty, has_stack_hash, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CMsgSosSetLibraryStackFields::ByteSize(const CMsgSosSetLibraryStackFields *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD *v7; // r13
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  int v10; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = -(*(this + 4) & 1) & 5;
    if ( (v4 & 2) != 0 )
    {
      v7 = *(this + 3);
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
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgSosSetLibraryStackFields::MergeFrom  (line 5679, @0x0000000001b0a520, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgSosSetLibraryStackFields*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgSosSetLibraryStackFields::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgSosSetLibraryStackFields
void __fastcall CMsgSosSetLibraryStackFields::MergeFrom(
        CMsgSosSetLibraryStackFields *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgSosSetLibraryStackFields *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      5680);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CMsgSosSetLibraryStackFields,
               0)) != 0 )
  {
    CMsgSosSetLibraryStackFields::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgSosSetLibraryStackFields::MergeFrom  (line 5691, @0x0000000001b0a3d0, libserver.so)  // inlines: set_has_packed_fields, set_has_stack_hash, set_packed_fields, set_stack_hash
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgSosSetLibraryStackFields::CMsgSosSetLibraryStackFields, CMsgSosSetLibraryStackFields::MergeFrom, CMsgSosSetLibraryStackFields::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gameevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgSosSetLibraryStackFields::MergeFrom(
        CMsgSosSetLibraryStackFields *const this,
        const CMsgSosSetLibraryStackFields *const from)
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
      "generated_protodota/linuxsteamrt64/gameevents.pb.cc",
      5692);
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


// CMsgSosSetLibraryStackFields::CopyFrom  (line 5704, @0x0000000001afe500, libserver.so)
void __fastcall CMsgSosSetLibraryStackFields::CopyFrom(
        CMsgSosSetLibraryStackFields *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgSosSetLibraryStackFields::CopyFrom  (line 5710, @0x0000000001b0a600, libserver.so)
// calls: CMsgSosSetLibraryStackFields::MergeFrom
// callers: CNetMessagePB<211, CMsgSosSetLibraryStackFields, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>::CProtobufBinding::Copy
void __fastcall CMsgSosSetLibraryStackFields::CopyFrom(
        CMsgSosSetLibraryStackFields *const this,
        const CMsgSosSetLibraryStackFields *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgSosSetLibraryStackFields::MergeFrom(this, from);
  }
}


// CMsgSosSetLibraryStackFields::IsInitialized  (line 5716, @0x0000000001afe540, libserver.so)
bool __fastcall CMsgSosSetLibraryStackFields::IsInitialized(const CMsgSosSetLibraryStackFields *const this)
{
  return 1;
}


// CMsgSosSetLibraryStackFields::Swap  (line 5721, @0x0000000001b0a640, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgSosSetLibraryStackFields::Swap(
        CMsgSosSetLibraryStackFields *const this,
        CMsgSosSetLibraryStackFields *other)
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


// CMsgSosSetLibraryStackFields::GetMetadata  (line 5731, @0x0000000001b01170, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gameevents_2eproto(void), `anonymous namespace'::CMsgSosSetLibraryStackFields_descriptor_, `anonymous namespace'::CMsgSosSetLibraryStackFields_reflection_
google::protobuf::Metadata __fastcall CMsgSosSetLibraryStackFields::GetMetadata(
        const CMsgSosSetLibraryStackFields *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gameevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgSosSetLibraryStackFields_descriptor_;
  result.reflection = `anonymous namespace'::CMsgSosSetLibraryStackFields_reflection_;
  return result;
}


