// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/gametoolevents.pb.cc:478
struct StaticDescriptorInitializer_gametoolevents_2eproto {
	StaticDescriptorInitializer_gametoolevents_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_gametoolevents_2eproto  (line 77, @0x0000000001b358c0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_gametoolevents_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "gametoolevents.proto", "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::ChangeMapToolEvent_descriptor_, ChangeMapToolEvent::default_instance_, protobuf_AssignDesc_gametoolevents_2eproto(void)::ChangeMapToolEvent_offsets_, `anonymous namespace'::ChangeMapToolEvent_reflection_, `anonymous namespace'::TraceRayServerToolEvent_descriptor_, TraceRayServerToolEvent::default_instance_, protobuf_AssignDesc_gametoolevents_2eproto(void)::TraceRayServerToolEvent_offsets_, `anonymous namespace'::TraceRayServerToolEvent_reflection_ (40 total)
void __cdecl protobuf_AssignDesc_gametoolevents_2eproto()
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
  const google::protobuf::Descriptor *v44; // rax
  google::protobuf::DescriptorPool *v45; // rdi
  const google::protobuf::DescriptorPool *v46; // r13
  google::protobuf::MessageFactory *v47; // rdi
  google::protobuf::MessageFactory *v48; // r14
  google::protobuf::internal::GeneratedMessageReflection *v49; // r12
  const google::protobuf::Descriptor *v50; // rax
  google::protobuf::DescriptorPool *v51; // rdi
  const google::protobuf::DescriptorPool *v52; // r13
  google::protobuf::MessageFactory *v53; // rdi
  google::protobuf::MessageFactory *v54; // r14
  google::protobuf::internal::GeneratedMessageReflection *v55; // r12
  const google::protobuf::Descriptor *v56; // rax
  google::protobuf::DescriptorPool *v57; // rdi
  const google::protobuf::DescriptorPool *v58; // r13
  google::protobuf::MessageFactory *v59; // rdi
  google::protobuf::MessageFactory *v60; // r14
  google::protobuf::internal::GeneratedMessageReflection *v61; // r12
  const google::protobuf::Descriptor *v62; // rax
  google::protobuf::DescriptorPool *v63; // rdi
  const google::protobuf::DescriptorPool *v64; // r13
  google::protobuf::MessageFactory *v65; // rdi
  google::protobuf::MessageFactory *v66; // r14
  google::protobuf::internal::GeneratedMessageReflection *v67; // r12
  const google::protobuf::Descriptor *v68; // rax
  google::protobuf::DescriptorPool *v69; // rdi
  const google::protobuf::DescriptorPool *v70; // r13
  google::protobuf::MessageFactory *v71; // rdi
  google::protobuf::MessageFactory *v72; // r14
  google::protobuf::internal::GeneratedMessageReflection *v73; // r12
  const google::protobuf::Descriptor *v74; // rax
  google::protobuf::DescriptorPool *v75; // rdi
  const google::protobuf::DescriptorPool *v76; // r13
  google::protobuf::MessageFactory *v77; // rdi
  google::protobuf::MessageFactory *v78; // r14
  google::protobuf::internal::GeneratedMessageReflection *v79; // r12
  const google::protobuf::Descriptor *v80; // rax
  google::protobuf::DescriptorPool *v81; // rdi
  const google::protobuf::DescriptorPool *v82; // r13
  google::protobuf::MessageFactory *v83; // rdi
  google::protobuf::MessageFactory *v84; // r14
  google::protobuf::internal::GeneratedMessageReflection *v85; // r12
  const google::protobuf::Descriptor *v86; // rax
  google::protobuf::DescriptorPool *v87; // rdi
  const google::protobuf::DescriptorPool *v88; // r12
  google::protobuf::MessageFactory *v89; // rdi
  google::protobuf::MessageFactory *v90; // r13
  google::protobuf::internal::GeneratedMessageReflection *v91; // rbx
  __int64 v92; // rax
  int v93; // eax
  int v94; // edx
  char v95; // [rsp+3Eh] [rbp-42h] BYREF
  char v96; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v97; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_gametoolevents_2eproto();
  std::string::string(&v97, "gametoolevents.proto", &v95);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v97);
  v3 = *&v97.level_ - 24LL;
  if ( (*&v97.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v93 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v94 = *(*&v97.level_ - 8LL);
      *(*&v97.level_ - 8LL) = v94 - 1;
      v93 = v94;
    }
    if ( v93 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v96);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v97,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      82);
    v92 = google::protobuf::internal::LogMessage::operator<<(&v97, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v96, v92);
    google::protobuf::internal::LogMessage::~LogMessage(&v97);
  }
  `anonymous namespace'::ChangeMapToolEvent_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::ChangeMapToolEvent_descriptor_,
    ChangeMapToolEvent::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ChangeMapToolEvent_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    32);
  v8 = *(FileByName + 80);
  `anonymous namespace'::ChangeMapToolEvent_reflection_ = v7;
  `anonymous namespace'::TraceRayServerToolEvent_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::TraceRayServerToolEvent_descriptor_,
    TraceRayServerToolEvent::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::TraceRayServerToolEvent_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    40);
  v14 = *(FileByName + 80);
  `anonymous namespace'::TraceRayServerToolEvent_reflection_ = v13;
  `anonymous namespace'::ToolTraceRayResult_descriptor_ = v14 + 2;
  v16 = google::protobuf::DescriptorPool::generated_pool(v15);
  v18 = google::protobuf::MessageFactory::generated_factory(v17);
  v19 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v19,
    `anonymous namespace'::ToolTraceRayResult_descriptor_,
    ToolTraceRayResult::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ToolTraceRayResult_offsets_,
    16,
    8,
    -1,
    v16,
    v18,
    56);
  v20 = *(FileByName + 80);
  `anonymous namespace'::ToolTraceRayResult_reflection_ = v19;
  `anonymous namespace'::SpawnEntityToolEvent_descriptor_ = v20 + 3;
  v22 = google::protobuf::DescriptorPool::generated_pool(v21);
  v24 = google::protobuf::MessageFactory::generated_factory(v23);
  v25 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v25,
    `anonymous namespace'::SpawnEntityToolEvent_descriptor_,
    SpawnEntityToolEvent::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::SpawnEntityToolEvent_offsets_,
    16,
    8,
    -1,
    v22,
    v24,
    40);
  v26 = *(FileByName + 80);
  `anonymous namespace'::SpawnEntityToolEvent_reflection_ = v25;
  `anonymous namespace'::SpawnEntityToolEventResult_descriptor_ = v26 + 4;
  v28 = google::protobuf::DescriptorPool::generated_pool(v27);
  v30 = google::protobuf::MessageFactory::generated_factory(v29);
  v31 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v31,
    `anonymous namespace'::SpawnEntityToolEventResult_descriptor_,
    SpawnEntityToolEventResult::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::SpawnEntityToolEventResult_offsets_,
    16,
    8,
    -1,
    v28,
    v30,
    32);
  v32 = *(FileByName + 80);
  `anonymous namespace'::SpawnEntityToolEventResult_reflection_ = v31;
  `anonymous namespace'::DestroyEntityToolEvent_descriptor_ = v32 + 5;
  v34 = google::protobuf::DescriptorPool::generated_pool(v33);
  v36 = google::protobuf::MessageFactory::generated_factory(v35);
  v37 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v37,
    `anonymous namespace'::DestroyEntityToolEvent_descriptor_,
    DestroyEntityToolEvent::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::DestroyEntityToolEvent_offsets_,
    16,
    8,
    -1,
    v34,
    v36,
    32);
  v38 = *(FileByName + 80);
  `anonymous namespace'::DestroyEntityToolEvent_reflection_ = v37;
  `anonymous namespace'::DestroyAllEntitiesToolEvent_descriptor_ = v38 + 6;
  v40 = google::protobuf::DescriptorPool::generated_pool(v39);
  v42 = google::protobuf::MessageFactory::generated_factory(v41);
  v43 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v43,
    `anonymous namespace'::DestroyAllEntitiesToolEvent_descriptor_,
    DestroyAllEntitiesToolEvent::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::DestroyAllEntitiesToolEvent_offsets_,
    16,
    8,
    -1,
    v40,
    v42,
    24);
  v44 = *(FileByName + 80);
  `anonymous namespace'::DestroyAllEntitiesToolEvent_reflection_ = v43;
  `anonymous namespace'::RestartMapToolEvent_descriptor_ = v44 + 7;
  v46 = google::protobuf::DescriptorPool::generated_pool(v45);
  v48 = google::protobuf::MessageFactory::generated_factory(v47);
  v49 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v49,
    `anonymous namespace'::RestartMapToolEvent_descriptor_,
    RestartMapToolEvent::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::RestartMapToolEvent_offsets_,
    16,
    8,
    -1,
    v46,
    v48,
    24);
  v50 = *(FileByName + 80);
  `anonymous namespace'::RestartMapToolEvent_reflection_ = v49;
  `anonymous namespace'::ToolEvent_GetEntityInfo_descriptor_ = v50 + 8;
  v52 = google::protobuf::DescriptorPool::generated_pool(v51);
  v54 = google::protobuf::MessageFactory::generated_factory(v53);
  v55 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v55,
    `anonymous namespace'::ToolEvent_GetEntityInfo_descriptor_,
    ToolEvent_GetEntityInfo::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ToolEvent_GetEntityInfo_offsets_,
    16,
    8,
    -1,
    v52,
    v54,
    32);
  v56 = *(FileByName + 80);
  `anonymous namespace'::ToolEvent_GetEntityInfo_reflection_ = v55;
  `anonymous namespace'::ToolEvent_GetEntityInfoResult_descriptor_ = v56 + 9;
  v58 = google::protobuf::DescriptorPool::generated_pool(v57);
  v60 = google::protobuf::MessageFactory::generated_factory(v59);
  v61 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v61,
    `anonymous namespace'::ToolEvent_GetEntityInfoResult_descriptor_,
    ToolEvent_GetEntityInfoResult::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ToolEvent_GetEntityInfoResult_offsets_,
    16,
    8,
    -1,
    v58,
    v60,
    72);
  v62 = *(FileByName + 80);
  `anonymous namespace'::ToolEvent_GetEntityInfoResult_reflection_ = v61;
  `anonymous namespace'::ToolEvent_GetEntityInputs_descriptor_ = v62 + 10;
  v64 = google::protobuf::DescriptorPool::generated_pool(v63);
  v66 = google::protobuf::MessageFactory::generated_factory(v65);
  v67 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v67,
    `anonymous namespace'::ToolEvent_GetEntityInputs_descriptor_,
    ToolEvent_GetEntityInputs::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ToolEvent_GetEntityInputs_offsets_,
    16,
    8,
    -1,
    v64,
    v66,
    32);
  v68 = *(FileByName + 80);
  `anonymous namespace'::ToolEvent_GetEntityInputs_reflection_ = v67;
  `anonymous namespace'::ToolEvent_GetEntityInputsResult_descriptor_ = v68 + 11;
  v70 = google::protobuf::DescriptorPool::generated_pool(v69);
  v72 = google::protobuf::MessageFactory::generated_factory(v71);
  v73 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v73,
    `anonymous namespace'::ToolEvent_GetEntityInputsResult_descriptor_,
    ToolEvent_GetEntityInputsResult::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ToolEvent_GetEntityInputsResult_offsets_,
    16,
    8,
    -1,
    v70,
    v72,
    48);
  v74 = *(FileByName + 80);
  `anonymous namespace'::ToolEvent_GetEntityInputsResult_reflection_ = v73;
  `anonymous namespace'::ToolEvent_FireEntityInput_descriptor_ = v74 + 12;
  v76 = google::protobuf::DescriptorPool::generated_pool(v75);
  v78 = google::protobuf::MessageFactory::generated_factory(v77);
  v79 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v79,
    `anonymous namespace'::ToolEvent_FireEntityInput_descriptor_,
    ToolEvent_FireEntityInput::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ToolEvent_FireEntityInput_offsets_,
    16,
    8,
    -1,
    v76,
    v78,
    48);
  v80 = *(FileByName + 80);
  `anonymous namespace'::ToolEvent_FireEntityInput_reflection_ = v79;
  `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_descriptor_ = v80 + 13;
  v82 = google::protobuf::DescriptorPool::generated_pool(v81);
  v84 = google::protobuf::MessageFactory::generated_factory(v83);
  v85 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v85,
    `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_descriptor_,
    ToolEvent_SFMRecordingStateChanged::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ToolEvent_SFMRecordingStateChanged_offsets_,
    16,
    8,
    -1,
    v82,
    v84,
    32);
  v86 = *(FileByName + 80);
  `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_reflection_ = v85;
  `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_descriptor_ = v86 + 14;
  v88 = google::protobuf::DescriptorPool::generated_pool(v87);
  v90 = google::protobuf::MessageFactory::generated_factory(v89);
  v91 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v91,
    `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_descriptor_,
    ToolEvent_SFMToolActiveStateChanged::default_instance_,
    protobuf_AssignDesc_gametoolevents_2eproto(void)::ToolEvent_SFMToolActiveStateChanged_offsets_,
    16,
    8,
    -1,
    v88,
    v90,
    32);
  `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_reflection_ = v91;
}


// protobuf_RegisterTypes  (line 333, @0x0000000001b363e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_gametoolevents_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), ChangeMapToolEvent::default_instance_, `anonymous namespace'::ChangeMapToolEvent_descriptor_, TraceRayServerToolEvent::default_instance_, `anonymous namespace'::TraceRayServerToolEvent_descriptor_, ToolTraceRayResult::default_instance_, `anonymous namespace'::ToolTraceRayResult_descriptor_ (32 total)
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
  __int64 v31[2]; // [rsp+0h] [rbp-30h] BYREF
  char v32; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v32 = 0;
    v31[0] = off_47BFB70;
    v31[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v31, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v31);
  }
  v2 = ChangeMapToolEvent::default_instance_;
  if ( ChangeMapToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v2 = ChangeMapToolEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ChangeMapToolEvent_descriptor_,
    v2,
    v1);
  v4 = TraceRayServerToolEvent::default_instance_;
  if ( TraceRayServerToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v4 = TraceRayServerToolEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::TraceRayServerToolEvent_descriptor_,
    v4,
    v3);
  v6 = ToolTraceRayResult::default_instance_;
  if ( ToolTraceRayResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v6 = ToolTraceRayResult::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ToolTraceRayResult_descriptor_,
    v6,
    v5);
  v8 = SpawnEntityToolEvent::default_instance_;
  if ( SpawnEntityToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v8 = SpawnEntityToolEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::SpawnEntityToolEvent_descriptor_,
    v8,
    v7);
  v10 = SpawnEntityToolEventResult::default_instance_;
  if ( SpawnEntityToolEventResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v10 = SpawnEntityToolEventResult::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::SpawnEntityToolEventResult_descriptor_,
    v10,
    v9);
  v12 = DestroyEntityToolEvent::default_instance_;
  if ( DestroyEntityToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v12 = DestroyEntityToolEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::DestroyEntityToolEvent_descriptor_,
    v12,
    v11);
  v14 = DestroyAllEntitiesToolEvent::default_instance_;
  if ( DestroyAllEntitiesToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v14 = DestroyAllEntitiesToolEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::DestroyAllEntitiesToolEvent_descriptor_,
    v14,
    v13);
  v16 = RestartMapToolEvent::default_instance_;
  if ( RestartMapToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v16 = RestartMapToolEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::RestartMapToolEvent_descriptor_,
    v16,
    v15);
  v18 = ToolEvent_GetEntityInfo::default_instance_;
  if ( ToolEvent_GetEntityInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v18 = ToolEvent_GetEntityInfo::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ToolEvent_GetEntityInfo_descriptor_,
    v18,
    v17);
  v20 = ToolEvent_GetEntityInfoResult::default_instance_;
  if ( ToolEvent_GetEntityInfoResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v20 = ToolEvent_GetEntityInfoResult::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ToolEvent_GetEntityInfoResult_descriptor_,
    v20,
    v19);
  v22 = ToolEvent_GetEntityInputs::default_instance_;
  if ( ToolEvent_GetEntityInputs::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v22 = ToolEvent_GetEntityInputs::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ToolEvent_GetEntityInputs_descriptor_,
    v22,
    v21);
  v24 = ToolEvent_GetEntityInputsResult::default_instance_;
  if ( ToolEvent_GetEntityInputsResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v24 = ToolEvent_GetEntityInputsResult::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ToolEvent_GetEntityInputsResult_descriptor_,
    v24,
    v23);
  v26 = ToolEvent_FireEntityInput::default_instance_;
  if ( ToolEvent_FireEntityInput::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v26 = ToolEvent_FireEntityInput::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ToolEvent_FireEntityInput_descriptor_,
    v26,
    v25);
  v28 = ToolEvent_SFMRecordingStateChanged::default_instance_;
  if ( ToolEvent_SFMRecordingStateChanged::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v28 = ToolEvent_SFMRecordingStateChanged::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_descriptor_,
    v28,
    v27);
  v30 = ToolEvent_SFMToolActiveStateChanged::default_instance_;
  if ( ToolEvent_SFMToolActiveStateChanged::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    v30 = ToolEvent_SFMToolActiveStateChanged::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_descriptor_,
    v30,
    v29);
}


// protobuf_ShutdownFile_gametoolevents_2eproto  (line 369, @0x0000000001b2fc00, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// globals: ChangeMapToolEvent::default_instance_, `anonymous namespace'::ChangeMapToolEvent_reflection_, TraceRayServerToolEvent::default_instance_, `anonymous namespace'::TraceRayServerToolEvent_reflection_, ToolTraceRayResult::default_instance_, `anonymous namespace'::ToolTraceRayResult_reflection_, SpawnEntityToolEvent::default_instance_, `anonymous namespace'::SpawnEntityToolEvent_reflection_ (31 total)
void __cdecl protobuf_ShutdownFile_gametoolevents_2eproto()
{
  std::string *v0; // rbx
  char *M_p; // rax
  char *v2; // rdi
  int v3; // eax
  int v4; // edx
  _BYTE v5[17]; // [rsp+Fh] [rbp-11h] BYREF

  if ( ChangeMapToolEvent::default_instance_ != 0 )
    (ChangeMapToolEvent::default_instance_->name_[1]._M_dataplus._M_p)(ChangeMapToolEvent::default_instance_);
  if ( `anonymous namespace'::ChangeMapToolEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::ChangeMapToolEvent_reflection_ + 8LL))(`anonymous namespace'::ChangeMapToolEvent_reflection_);
  if ( TraceRayServerToolEvent::default_instance_ != 0 )
    (TraceRayServerToolEvent::default_instance_->name_[1]._M_dataplus._M_p)(TraceRayServerToolEvent::default_instance_);
  if ( `anonymous namespace'::TraceRayServerToolEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::TraceRayServerToolEvent_reflection_ + 8LL))(`anonymous namespace'::TraceRayServerToolEvent_reflection_);
  if ( ToolTraceRayResult::default_instance_ != 0 )
    (ToolTraceRayResult::default_instance_->name_[1]._M_dataplus._M_p)(ToolTraceRayResult::default_instance_);
  if ( `anonymous namespace'::ToolTraceRayResult_reflection_ != 0 )
    (*(*`anonymous namespace'::ToolTraceRayResult_reflection_ + 8LL))(`anonymous namespace'::ToolTraceRayResult_reflection_);
  if ( SpawnEntityToolEvent::default_instance_ != 0 )
    (SpawnEntityToolEvent::default_instance_->name_[1]._M_dataplus._M_p)(SpawnEntityToolEvent::default_instance_);
  if ( `anonymous namespace'::SpawnEntityToolEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::SpawnEntityToolEvent_reflection_ + 8LL))(`anonymous namespace'::SpawnEntityToolEvent_reflection_);
  if ( SpawnEntityToolEventResult::default_instance_ != 0 )
    (SpawnEntityToolEventResult::default_instance_->name_[1]._M_dataplus._M_p)(SpawnEntityToolEventResult::default_instance_);
  if ( `anonymous namespace'::SpawnEntityToolEventResult_reflection_ != 0 )
    (*(*`anonymous namespace'::SpawnEntityToolEventResult_reflection_ + 8LL))(`anonymous namespace'::SpawnEntityToolEventResult_reflection_);
  if ( DestroyEntityToolEvent::default_instance_ != 0 )
    (DestroyEntityToolEvent::default_instance_->name_[1]._M_dataplus._M_p)(DestroyEntityToolEvent::default_instance_);
  if ( `anonymous namespace'::DestroyEntityToolEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::DestroyEntityToolEvent_reflection_ + 8LL))(`anonymous namespace'::DestroyEntityToolEvent_reflection_);
  if ( DestroyAllEntitiesToolEvent::default_instance_ != 0 )
    (DestroyAllEntitiesToolEvent::default_instance_->name_[1]._M_dataplus._M_p)(DestroyAllEntitiesToolEvent::default_instance_);
  if ( `anonymous namespace'::DestroyAllEntitiesToolEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::DestroyAllEntitiesToolEvent_reflection_ + 8LL))(`anonymous namespace'::DestroyAllEntitiesToolEvent_reflection_);
  if ( RestartMapToolEvent::default_instance_ != 0 )
    (RestartMapToolEvent::default_instance_->name_[1]._M_dataplus._M_p)(RestartMapToolEvent::default_instance_);
  if ( `anonymous namespace'::RestartMapToolEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::RestartMapToolEvent_reflection_ + 8LL))(`anonymous namespace'::RestartMapToolEvent_reflection_);
  if ( ToolEvent_GetEntityInfo::default_instance_ != 0 )
    (ToolEvent_GetEntityInfo::default_instance_->name_[1]._M_dataplus._M_p)(ToolEvent_GetEntityInfo::default_instance_);
  if ( `anonymous namespace'::ToolEvent_GetEntityInfo_reflection_ != 0 )
    (*(*`anonymous namespace'::ToolEvent_GetEntityInfo_reflection_ + 8LL))(`anonymous namespace'::ToolEvent_GetEntityInfo_reflection_);
  if ( ToolEvent_GetEntityInfoResult::default_instance_ != 0 )
    (ToolEvent_GetEntityInfoResult::default_instance_->name_[1]._M_dataplus._M_p)(ToolEvent_GetEntityInfoResult::default_instance_);
  if ( `anonymous namespace'::ToolEvent_GetEntityInfoResult_reflection_ != 0 )
    (*(*`anonymous namespace'::ToolEvent_GetEntityInfoResult_reflection_ + 8LL))(`anonymous namespace'::ToolEvent_GetEntityInfoResult_reflection_);
  v0 = ToolEvent_GetEntityInfoResult::_default_cppclass_;
  if ( ToolEvent_GetEntityInfoResult::_default_cppclass_ != 0 )
  {
    M_p = ToolEvent_GetEntityInfoResult::_default_cppclass_->_M_dataplus._M_p;
    v2 = ToolEvent_GetEntityInfoResult::_default_cppclass_->_M_dataplus._M_p - 24;
    if ( v2 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v3 = _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF);
      }
      else
      {
        v4 = *(M_p - 2);
        *(M_p - 2) = v4 - 1;
        v3 = v4;
      }
      if ( v3 <= 0 )
        std::string::_Rep::_M_destroy(v2, v5);
    }
    operator delete(v0);
  }
  if ( ToolEvent_GetEntityInputs::default_instance_ != 0 )
    (ToolEvent_GetEntityInputs::default_instance_->name_[1]._M_dataplus._M_p)(ToolEvent_GetEntityInputs::default_instance_);
  if ( `anonymous namespace'::ToolEvent_GetEntityInputs_reflection_ != 0 )
    (*(*`anonymous namespace'::ToolEvent_GetEntityInputs_reflection_ + 8LL))(`anonymous namespace'::ToolEvent_GetEntityInputs_reflection_);
  if ( ToolEvent_GetEntityInputsResult::default_instance_ != 0 )
    (ToolEvent_GetEntityInputsResult::default_instance_->name_[1]._M_dataplus._M_p)(ToolEvent_GetEntityInputsResult::default_instance_);
  if ( `anonymous namespace'::ToolEvent_GetEntityInputsResult_reflection_ != 0 )
    (*(*`anonymous namespace'::ToolEvent_GetEntityInputsResult_reflection_ + 8LL))(`anonymous namespace'::ToolEvent_GetEntityInputsResult_reflection_);
  if ( ToolEvent_FireEntityInput::default_instance_ != 0 )
    (ToolEvent_FireEntityInput::default_instance_->name_[1]._M_dataplus._M_p)(ToolEvent_FireEntityInput::default_instance_);
  if ( `anonymous namespace'::ToolEvent_FireEntityInput_reflection_ != 0 )
    (*(*`anonymous namespace'::ToolEvent_FireEntityInput_reflection_ + 8LL))(`anonymous namespace'::ToolEvent_FireEntityInput_reflection_);
  if ( ToolEvent_SFMRecordingStateChanged::default_instance_ != 0 )
    (ToolEvent_SFMRecordingStateChanged::default_instance_->name_[1]._M_dataplus._M_p)(ToolEvent_SFMRecordingStateChanged::default_instance_);
  if ( `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_reflection_ != 0 )
    (*(*`anonymous namespace'::ToolEvent_SFMRecordingStateChanged_reflection_ + 8LL))(`anonymous namespace'::ToolEvent_SFMRecordingStateChanged_reflection_);
  if ( ToolEvent_SFMToolActiveStateChanged::default_instance_ != 0 )
    (ToolEvent_SFMToolActiveStateChanged::default_instance_->name_[1]._M_dataplus._M_p)(ToolEvent_SFMToolActiveStateChanged::default_instance_);
  if ( `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_reflection_ != 0 )
    (*(*`anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_reflection_ + 8LL))(`anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_reflection_);
}


// protobuf_AddDesc_gametoolevents_2eproto  (line 403, @0x0000000001b35500, libserver.so)  // inlines: InitAsDefaultInstance
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), protobuf_AddDesc_networkbasetypes_2eproto, google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, ChangeMapToolEvent::ChangeMapToolEvent, TraceRayServerToolEvent::TraceRayServerToolEvent, ToolTraceRayResult::ToolTraceRayResult, SpawnEntityToolEvent::SpawnEntityToolEvent, SpawnEntityToolEventResult::SpawnEntityToolEventResult, DestroyEntityToolEvent::DestroyEntityToolEvent, DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent (26 total)
// callers: protobuf_AssignDesc_gametoolevents_2eproto, ChangeMapToolEvent::default_instance, TraceRayServerToolEvent::default_instance, ToolTraceRayResult::default_instance, SpawnEntityToolEvent::default_instance, SpawnEntityToolEventResult::default_instance, DestroyEntityToolEvent::default_instance, DestroyAllEntitiesToolEvent::default_instance, RestartMapToolEvent::default_instance, ToolEvent_GetEntityInfo::default_instance, ToolEvent_GetEntityInfoResult::default_instance, ToolEvent_GetEntityInputs::default_instance (18 total)
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "gametoolevents.proto", "shithead"
// globals: protobuf_AddDesc_gametoolevents_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), ChangeMapToolEvent::default_instance_, TraceRayServerToolEvent::default_instance_, ToolTraceRayResult::default_instance_, SpawnEntityToolEvent::default_instance_, SpawnEntityToolEventResult::default_instance_, DestroyEntityToolEvent::default_instance_ (19 total)
void __cdecl protobuf_AddDesc_gametoolevents_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  ChangeMapToolEvent *v3; // rbx
  TraceRayServerToolEvent *v4; // rbx
  ToolTraceRayResult *v5; // rbx
  SpawnEntityToolEvent *v6; // rbx
  SpawnEntityToolEventResult *v7; // rbx
  DestroyEntityToolEvent *v8; // rbx
  DestroyAllEntitiesToolEvent *v9; // rbx
  RestartMapToolEvent *v10; // rbx
  ToolEvent_GetEntityInfo *v11; // rbx
  std::string *v12; // rbx
  ToolEvent_GetEntityInfoResult *v13; // rbx
  ToolEvent_GetEntityInputs *v14; // rbx
  ToolEvent_GetEntityInputsResult *v15; // rbx
  ToolEvent_FireEntityInput *v16; // rbx
  ToolEvent_SFMRecordingStateChanged *v17; // rbx
  ToolEvent_SFMToolActiveStateChanged *v18; // rbx
  google::protobuf::Descriptor *v19; // rbx
  google::protobuf::Descriptor *v20; // rbx
  const CMsgVector *v21; // rax
  ToolEvent_GetEntityInfoResult *v22; // rdi
  void (*v23)(void); // rsi
  char v24; // [rsp-19h] [rbp-19h] BYREF

  if ( !protobuf_AddDesc_gametoolevents_2eproto(void)::already_here )
  {
    protobuf_AddDesc_gametoolevents_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      v0);
    protobuf_AddDesc_networkbasetypes_2eproto();
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_327F430, &stru_10.m_PVSBits.m_Ints[2] + 2, v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "gametoolevents.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x20u);
    ChangeMapToolEvent::ChangeMapToolEvent(v3);
    ChangeMapToolEvent::default_instance_ = v3;
    v4 = operator new(0x28u);
    TraceRayServerToolEvent::TraceRayServerToolEvent(v4);
    TraceRayServerToolEvent::default_instance_ = v4;
    v5 = operator new(0x38u);
    ToolTraceRayResult::ToolTraceRayResult(v5);
    ToolTraceRayResult::default_instance_ = v5;
    v6 = operator new(0x28u);
    SpawnEntityToolEvent::SpawnEntityToolEvent(v6);
    SpawnEntityToolEvent::default_instance_ = v6;
    v7 = operator new(0x20u);
    SpawnEntityToolEventResult::SpawnEntityToolEventResult(v7);
    SpawnEntityToolEventResult::default_instance_ = v7;
    v8 = operator new(0x20u);
    DestroyEntityToolEvent::DestroyEntityToolEvent(v8);
    DestroyEntityToolEvent::default_instance_ = v8;
    v9 = operator new(0x18u);
    DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent(v9);
    DestroyAllEntitiesToolEvent::default_instance_ = v9;
    v10 = operator new(0x18u);
    RestartMapToolEvent::RestartMapToolEvent(v10);
    RestartMapToolEvent::default_instance_ = v10;
    v11 = operator new(0x20u);
    ToolEvent_GetEntityInfo::ToolEvent_GetEntityInfo(v11);
    ToolEvent_GetEntityInfo::default_instance_ = v11;
    v12 = operator new(8u);
    std::string::string(v12, "shithead", 8, &v24);
    ToolEvent_GetEntityInfoResult::_default_cppclass_ = v12;
    v13 = operator new(0x48u);
    ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult(v13);
    ToolEvent_GetEntityInfoResult::default_instance_ = v13;
    v14 = operator new(0x20u);
    ToolEvent_GetEntityInputs::ToolEvent_GetEntityInputs(v14);
    ToolEvent_GetEntityInputs::default_instance_ = v14;
    v15 = operator new(0x30u);
    ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult(v15);
    ToolEvent_GetEntityInputsResult::default_instance_ = v15;
    v16 = operator new(0x30u);
    ToolEvent_FireEntityInput::ToolEvent_FireEntityInput(v16);
    ToolEvent_FireEntityInput::default_instance_ = v16;
    v17 = operator new(0x20u);
    ToolEvent_SFMRecordingStateChanged::ToolEvent_SFMRecordingStateChanged(v17);
    ToolEvent_SFMRecordingStateChanged::default_instance_ = v17;
    v18 = operator new(0x20u);
    ToolEvent_SFMToolActiveStateChanged::ToolEvent_SFMToolActiveStateChanged(v18);
    ToolEvent_SFMToolActiveStateChanged::default_instance_ = v18;
    v19 = TraceRayServerToolEvent::default_instance_;
    v19->containing_type_ = CMsgVector::default_instance();
    v19->options_ = CMsgVector::default_instance();
    v20 = ToolTraceRayResult::default_instance_;
    v20->containing_type_ = CMsgVector::default_instance();
    v21 = CMsgVector::default_instance();
    v22 = ToolEvent_GetEntityInfoResult::default_instance_;
    *&v20->is_placeholder_ = v21;
    ToolEvent_GetEntityInfoResult::InitAsDefaultInstance(v22);
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_gametoolevents_2eproto, v23);
  }
}


// ChangeMapToolEvent::ChangeMapToolEvent  (line 490, @0x0000000001b30d40, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ChangeMapToolEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: ChangeMapToolEvent::New, protobuf_AddDesc_gametoolevents_2eproto
void __fastcall ChangeMapToolEvent::ChangeMapToolEvent(ChangeMapToolEvent *const this)
{
  *this = off_3F796D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  ChangeMapToolEvent::SharedCtor(this);
}


// ChangeMapToolEvent::InitAsDefaultInstance  (line 496, @0x0000000001b30c70, libserver.so)
void __fastcall ChangeMapToolEvent::InitAsDefaultInstance(ChangeMapToolEvent *const this)
{
  ;
}


// ChangeMapToolEvent::ChangeMapToolEvent  (line 499, @0x0000000001b31010, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ChangeMapToolEvent::SharedCtor, ChangeMapToolEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall ChangeMapToolEvent::ChangeMapToolEvent(
        ChangeMapToolEvent *const this,
        const ChangeMapToolEvent *const from)
{
  *this = off_3F796D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  ChangeMapToolEvent::SharedCtor(this);
  ChangeMapToolEvent::MergeFrom(this, from);
}


// ChangeMapToolEvent::SharedCtor  (line 506, @0x0000000001b30c80, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: ChangeMapToolEvent::ChangeMapToolEvent
void __fastcall ChangeMapToolEvent::SharedCtor(ChangeMapToolEvent *const this)
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
  *(this + 4) = 0;
}


// ChangeMapToolEvent::~ChangeMapToolEvent  (line 513, @0x0000000001b30e50, libserver.so)
// calls: ChangeMapToolEvent::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: ChangeMapToolEvent::~ChangeMapToolEvent
void __fastcall ChangeMapToolEvent::~ChangeMapToolEvent(ChangeMapToolEvent *const this)
{
  *this = off_3F796D0;
  ChangeMapToolEvent::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// ChangeMapToolEvent::~ChangeMapToolEvent  (line 513, @0x0000000001b30e90, libserver.so)
// calls: ChangeMapToolEvent::~ChangeMapToolEvent, operator delete
void __fastcall ChangeMapToolEvent::~ChangeMapToolEvent(ChangeMapToolEvent *const this)
{
  ChangeMapToolEvent::~ChangeMapToolEvent(this);
  operator delete(this);
}


// ChangeMapToolEvent::SharedDtor  (line 518, @0x0000000001b30de0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: ChangeMapToolEvent::~ChangeMapToolEvent
void __fastcall ChangeMapToolEvent::SharedDtor(ChangeMapToolEvent *const this)
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


// ChangeMapToolEvent::SetCachedSize  (line 524, @0x0000000001b2cfd0, libserver.so)
void __fastcall ChangeMapToolEvent::SetCachedSize(const ChangeMapToolEvent *const this, int size)
{
  *(this + 5) = size;
}


// ChangeMapToolEvent::descriptor  (line 529, @0x0000000001b30eb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ChangeMapToolEvent_descriptor_
const google::protobuf::Descriptor *__cdecl ChangeMapToolEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ChangeMapToolEvent_descriptor_;
}


// ChangeMapToolEvent::default_instance  (line 534, @0x0000000001b36140, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ChangeMapToolEvent::default_instance_
const ChangeMapToolEvent *__cdecl ChangeMapToolEvent::default_instance()
{
  const ChangeMapToolEvent *result; // rax

  result = ChangeMapToolEvent::default_instance_;
  if ( ChangeMapToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ChangeMapToolEvent::default_instance_;
  }
  return result;
}


// ChangeMapToolEvent::New  (line 541, @0x0000000001b30da0, libserver.so)
// calls: operator new, ChangeMapToolEvent::ChangeMapToolEvent, operator delete, _Unwind_Resume
ChangeMapToolEvent *__fastcall ChangeMapToolEvent::New(const ChangeMapToolEvent *const this)
{
  ChangeMapToolEvent *v1; // rbx

  v1 = operator new(0x20u);
  ChangeMapToolEvent::ChangeMapToolEvent(v1);
  return v1;
}


// ChangeMapToolEvent::Clear  (line 545, @0x0000000001b2dab0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall ChangeMapToolEvent::Clear(ChangeMapToolEvent *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 1) != 0 )
    std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// ChangeMapToolEvent::MergePartialFromCodedStream  (line 553, @0x0000000001b2e970, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, mutable_mapname, set_has_mapname
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
bool __fastcall ChangeMapToolEvent::MergePartialFromCodedStream(
        ChangeMapToolEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  google::protobuf::UnknownFieldSet *v9; // rcx
  std::string *v10; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al

  v3 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
      goto LABEL_11;
LABEL_3:
    v7 = *buffer;
    if ( *buffer <= 0 )
    {
LABEL_11:
      while ( 1 )
      {
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
    v10 = (v8 >> 3);
    if ( v10 != 1 || v8 != 10 )
      break;
    *(this + 4) |= 1u;
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
  if ( v8 != 0 )
    goto LABEL_8;
  return 1;
}


// ChangeMapToolEvent::SerializeWithCachedSizes  (line 601, @0x0000000001b2dc10, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall ChangeMapToolEvent::SerializeWithCachedSizes(
        const ChangeMapToolEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  _QWORD *v6; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
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


// ChangeMapToolEvent::SerializeWithCachedSizesToArray  (line 621, @0x0000000001b2e7b0, libserver.so)  // inlines: WriteStringToArray, WriteTagToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall ChangeMapToolEvent::SerializeWithCachedSizesToArray(
        const ChangeMapToolEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::io::CodedOutputStream *v4; // rdi
  const std::string *v5; // rsi
  __int64 v6; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    v4 = *(this + 3);
    v5 = (target + 1);
    HIBYTE(v5[-1]._M_dataplus._M_p) = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v4, v5, v2);
  }
  v6 = *(this + 1);
  if ( v6 == 0 || *(v6 + 8) == *v6 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v6);
}


// ChangeMapToolEvent::ByteSize  (line 643, @0x0000000001b2eef0, libserver.so)  // inlines: StringSize, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall ChangeMapToolEvent::ByteSize(const ChangeMapToolEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD *v7; // rbx
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  int v10; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
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
    v3 = v9 + v10 + 1;
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// ChangeMapToolEvent::MergeFrom  (line 666, @0x0000000001b31080, libserver.so)  // inlines: dynamic_cast_if_available<const ChangeMapToolEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, ChangeMapToolEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ChangeMapToolEvent
void __fastcall ChangeMapToolEvent::MergeFrom(
        ChangeMapToolEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ChangeMapToolEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      667);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'ChangeMapToolEvent, 0)) != 0 )
  {
    ChangeMapToolEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ChangeMapToolEvent::MergeFrom  (line 678, @0x0000000001b30f40, libserver.so)  // inlines: set_has_mapname, set_mapname
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: ChangeMapToolEvent::ChangeMapToolEvent, ChangeMapToolEvent::MergeFrom, ChangeMapToolEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall ChangeMapToolEvent::MergeFrom(ChangeMapToolEvent *const this, const ChangeMapToolEvent *const from)
{
  int v4; // eax
  const std::string *v5; // rsi
  std::string *v6; // rdi
  __int64 v7; // rax
  char v8; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      679);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
  }
  v4 = *(from + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    v5 = *(from + 3);
    v6 = *(this + 3);
    *(this + 4) |= 1u;
    std::string::assign(v6, v5);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// ChangeMapToolEvent::CopyFrom  (line 688, @0x0000000001b2cfe0, libserver.so)
void __fastcall ChangeMapToolEvent::CopyFrom(
        ChangeMapToolEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ChangeMapToolEvent::CopyFrom  (line 694, @0x0000000001b31160, libserver.so)
// calls: ChangeMapToolEvent::MergeFrom
void __fastcall ChangeMapToolEvent::CopyFrom(ChangeMapToolEvent *const this, const ChangeMapToolEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ChangeMapToolEvent::MergeFrom(this, from);
  }
}


// ChangeMapToolEvent::IsInitialized  (line 700, @0x0000000001b2d020, libserver.so)
bool __fastcall ChangeMapToolEvent::IsInitialized(const ChangeMapToolEvent *const this)
{
  return 1;
}


// ChangeMapToolEvent::Swap  (line 705, @0x0000000001b311a0, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall ChangeMapToolEvent::Swap(ChangeMapToolEvent *const this, ChangeMapToolEvent *other)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( other != this )
  {
    v2 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v2;
    LODWORD(v2) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v2;
    v3 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v3;
    LODWORD(v3) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v3;
  }
}


// ChangeMapToolEvent::GetMetadata  (line 714, @0x0000000001b2f700, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ChangeMapToolEvent_descriptor_, `anonymous namespace'::ChangeMapToolEvent_reflection_
google::protobuf::Metadata __fastcall ChangeMapToolEvent::GetMetadata(const ChangeMapToolEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ChangeMapToolEvent_descriptor_;
  result.reflection = `anonymous namespace'::ChangeMapToolEvent_reflection_;
  return result;
}


// TraceRayServerToolEvent::TraceRayServerToolEvent  (line 730, @0x0000000001b311f0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: TraceRayServerToolEvent::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, TraceRayServerToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, TraceRayServerToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall TraceRayServerToolEvent::TraceRayServerToolEvent(TraceRayServerToolEvent *const this)
{
  *this = off_3F79790;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 4) = 0;
}


// TraceRayServerToolEvent::InitAsDefaultInstance  (line 736, @0x0000000001b31290, libserver.so)
// calls: CMsgVector::default_instance
void __fastcall TraceRayServerToolEvent::InitAsDefaultInstance(TraceRayServerToolEvent *const this)
{
  *(this + 3) = CMsgVector::default_instance();
  *(this + 4) = CMsgVector::default_instance();
}


// TraceRayServerToolEvent::TraceRayServerToolEvent  (line 741, @0x0000000001b315b0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), TraceRayServerToolEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, TraceRayServerToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall TraceRayServerToolEvent::TraceRayServerToolEvent(
        TraceRayServerToolEvent *const this,
        const TraceRayServerToolEvent *const from)
{
  *this = off_3F79790;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 4) = 0;
  TraceRayServerToolEvent::MergeFrom(this, from);
}


// TraceRayServerToolEvent::SharedCtor  (line 748, @0x0000000001b312c0, libserver.so)  // inlines: memset
void __fastcall TraceRayServerToolEvent::SharedCtor(TraceRayServerToolEvent *const this)
{
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 4) = 0;
}


// TraceRayServerToolEvent::~TraceRayServerToolEvent  (line 755, @0x0000000001b31340, libserver.so)
// calls: TraceRayServerToolEvent::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: TraceRayServerToolEvent::~TraceRayServerToolEvent, CNetMessagePB<-1, TraceRayServerToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall TraceRayServerToolEvent::~TraceRayServerToolEvent(TraceRayServerToolEvent *const this)
{
  *this = off_3F79790;
  TraceRayServerToolEvent::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// TraceRayServerToolEvent::~TraceRayServerToolEvent  (line 755, @0x0000000001b31380, libserver.so)
// calls: TraceRayServerToolEvent::~TraceRayServerToolEvent, operator delete
void __fastcall TraceRayServerToolEvent::~TraceRayServerToolEvent(TraceRayServerToolEvent *const this)
{
  TraceRayServerToolEvent::~TraceRayServerToolEvent(this);
  operator delete(this);
}


// TraceRayServerToolEvent::SharedDtor  (line 760, @0x0000000001b312f0, libserver.so)
// callers: TraceRayServerToolEvent::~TraceRayServerToolEvent
// globals: TraceRayServerToolEvent::default_instance_
void __fastcall TraceRayServerToolEvent::SharedDtor(TraceRayServerToolEvent *const this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  if ( this != TraceRayServerToolEvent::default_instance_ )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
    v3 = *(this + 4);
    if ( v3 != 0 )
      (*(*v3 + 8LL))(v3);
  }
}


// TraceRayServerToolEvent::SetCachedSize  (line 767, @0x0000000001b2d030, libserver.so)
void __fastcall TraceRayServerToolEvent::SetCachedSize(const TraceRayServerToolEvent *const this, int size)
{
  *(this + 5) = size;
}


// TraceRayServerToolEvent::descriptor  (line 772, @0x0000000001b313a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::TraceRayServerToolEvent_descriptor_
const google::protobuf::Descriptor *__cdecl TraceRayServerToolEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::TraceRayServerToolEvent_descriptor_;
}


// TraceRayServerToolEvent::default_instance  (line 777, @0x0000000001b36170, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: TraceRayServerToolEvent::default_instance_
const TraceRayServerToolEvent *__cdecl TraceRayServerToolEvent::default_instance()
{
  const TraceRayServerToolEvent *result; // rax

  result = TraceRayServerToolEvent::default_instance_;
  if ( TraceRayServerToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return TraceRayServerToolEvent::default_instance_;
  }
  return result;
}


// TraceRayServerToolEvent::New  (line 784, @0x0000000001b31250, libserver.so)
// calls: operator new, TraceRayServerToolEvent::TraceRayServerToolEvent, operator delete, _Unwind_Resume
TraceRayServerToolEvent *__fastcall TraceRayServerToolEvent::New(const TraceRayServerToolEvent *const this)
{
  TraceRayServerToolEvent *v1; // rbx

  v1 = operator new(0x28u);
  TraceRayServerToolEvent::TraceRayServerToolEvent(v1);
  return v1;
}


// TraceRayServerToolEvent::Clear  (line 788, @0x0000000001b36af0, libserver.so)  // inlines: Clear, memset
// calls: CMsgVector::Clear, google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall TraceRayServerToolEvent::Clear(TraceRayServerToolEvent *const this)
{
  int v2; // eax
  CMsgVector *v3; // rdi
  bool v4; // zf
  CMsgVector *v5; // rdi

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v3 = *(this + 3);
      if ( v3 != 0 )
      {
        CMsgVector::Clear(v3);
        v2 = *(this + 4);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      v5 = *(this + 4);
      if ( v5 != 0 )
        CMsgVector::Clear(v5);
    }
  }
  v4 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v4 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// TraceRayServerToolEvent::MergePartialFromCodedStream  (line 801, @0x0000000001b37760, libserver.so)  // inlines: Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CMsgVector>, ReadTagWithCutoff, ReadVarint32, mutable_end, mutable_start, set_has_end, set_has_start
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CMsgVector::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
bool __fastcall TraceRayServerToolEvent::MergePartialFromCodedStream(
        TraceRayServerToolEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  CMsgVector *v10; // r15
  const google::protobuf::uint8 *v11; // rax
  int v12; // eax
  bool v13; // cc
  int recursion_depth; // eax
  CMsgVector *v15; // r15
  const google::protobuf::uint8 *v16; // rax
  int v17; // eax
  int v18; // edx
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  int v20; // [rsp+Ch] [rbp-44h]
  int v21; // [rsp+Ch] [rbp-44h]
  unsigned int v22[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
        result = google::protobuf::internal::WireFormat::SkipField(input, v7, v3, buffer_end);
        if ( !result )
          return result;
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
    if ( v7 >> 3 != 1 )
      break;
    if ( v7 != 10 )
      goto handle_unusual;
    v10 = *(this + 3);
    *(this + 4) |= 1u;
    if ( v10 == 0 )
    {
      v10 = operator new(0x28u);
      CMsgVector::CMsgVector(v10);
      *(this + 3) = v10;
    }
    v11 = input->buffer_;
    if ( v11 >= input->buffer_end_ || *v11 < 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22) == 0 )
        return 0;
    }
    else
    {
      v22[0] = *v11;
      input->buffer_ = v11 + 1;
    }
    v12 = input->recursion_depth_ + 1;
    v13 = input->recursion_limit_ < v12;
    input->recursion_depth_ = v12;
    if ( v13 )
      return 0;
    v20 = google::protobuf::io::CodedInputStream::PushLimit(input, v22[0]);
    if ( !CMsgVector::MergePartialFromCodedStream(v10, input) || !input->legitimate_message_end_ )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(input, v20);
    recursion_depth = input->recursion_depth_;
    if ( recursion_depth > 0 )
      input->recursion_depth_ = recursion_depth - 1;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      input->buffer_ = buffer + 1;
parse_end:
      v15 = *(this + 4);
      *(this + 4) |= 2u;
      if ( v15 == 0 )
      {
        v15 = operator new(0x28u);
        CMsgVector::CMsgVector(v15);
        *(this + 4) = v15;
      }
      v16 = input->buffer_;
      if ( v16 >= input->buffer_end_ || *v16 < 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22) == 0 )
          return 0;
      }
      else
      {
        v22[0] = *v16;
        input->buffer_ = v16 + 1;
      }
      v17 = input->recursion_depth_ + 1;
      v13 = input->recursion_limit_ < v17;
      input->recursion_depth_ = v17;
      if ( v13 )
        return 0;
      v21 = google::protobuf::io::CodedInputStream::PushLimit(input, v22[0]);
      if ( !CMsgVector::MergePartialFromCodedStream(v15, input) || !input->legitimate_message_end_ )
        return 0;
      legitimate_message_end = input->legitimate_message_end_;
      google::protobuf::io::CodedInputStream::PopLimit(input, v21);
      v18 = input->recursion_depth_;
      result = legitimate_message_end;
      if ( v18 > 0 )
        input->recursion_depth_ = v18 - 1;
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
  if ( v7 >> 3 == 2 && v7 == 18 )
    goto parse_end;
handle_unusual:
  if ( v7 != 0 )
    goto LABEL_9;
  return 1;
}


// TraceRayServerToolEvent::SerializeWithCachedSizes  (line 858, @0x0000000001b2def0, libserver.so)  // inlines: empty, end, start
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
// globals: TraceRayServerToolEvent::default_instance_
void __fastcall TraceRayServerToolEvent::SerializeWithCachedSizes(
        const TraceRayServerToolEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  const google::protobuf::Descriptor *containing_type; // rsi
  const google::protobuf::MessageOptions *options; // rsi
  _QWORD *v9; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = TraceRayServerToolEvent::default_instance_->containing_type_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_0 + 1, containing_type, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
      options = TraceRayServerToolEvent::default_instance_->options_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, options, output, v3);
  }
  v9 = *(this + 1);
  if ( v9 != 0 && v9[1] != *v9 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// TraceRayServerToolEvent::SerializeWithCachedSizesToArray  (line 880, @0x0000000001b37a40, libserver.so)  // inlines: GetCachedSize, WriteMessageNoVirtualToArray<CMsgVector>, WriteTagToArray, WriteVarint32ToArray, empty, end, start
// calls: CMsgVector::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// globals: TraceRayServerToolEvent::default_instance_
google::protobuf::uint8 *__fastcall TraceRayServerToolEvent::SerializeWithCachedSizesToArray(
        const TraceRayServerToolEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  unsigned int *containing_type; // r12
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::uint8 *v7; // rsi
  unsigned int *options; // r12
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::uint8 *v10; // rsi
  __int64 v11; // rax

  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = TraceRayServerToolEvent::default_instance_->containing_type_;
    *target = 10;
    v6 = containing_type[5];
    if ( v6 > 0x7F )
    {
      v7 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v6, target + 1, v2);
    }
    else
    {
      target[1] = v6;
      v7 = target + 2;
    }
    target = CMsgVector::SerializeWithCachedSizesToArray(containing_type, v7);
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
      options = TraceRayServerToolEvent::default_instance_->options_;
    *target = 18;
    v9 = options[5];
    if ( v9 > 0x7F )
    {
      v10 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, target + 1, v2);
    }
    else
    {
      target[1] = v9;
      v10 = target + 2;
    }
    target = CMsgVector::SerializeWithCachedSizesToArray(options, v10);
  }
  v11 = *(this + 1);
  if ( v11 == 0 || *(v11 + 8) == *v11 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v11);
}


// TraceRayServerToolEvent::ByteSize  (line 905, @0x0000000001b37e40, libserver.so)  // inlines: LengthDelimitedSize, MessageSizeNoVirtual<CMsgVector>, VarintSize32, empty, end, start
// calls: CMsgVector::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// globals: TraceRayServerToolEvent::default_instance_
int __fastcall TraceRayServerToolEvent::ByteSize(const TraceRayServerToolEvent *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  const google::protobuf::Descriptor *containing_type; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD *v8; // rax
  const CMsgVector *options; // rdi
  unsigned int v11; // r13d
  int v12; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      containing_type = *(this + 3);
      if ( containing_type == 0 )
        containing_type = TraceRayServerToolEvent::default_instance_->containing_type_;
      v6 = CMsgVector::ByteSize(containing_type);
      v7 = 1;
      if ( v6 > 0x7F )
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v3 = v6 + v7 + 1;
      v4 = *(this + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      options = *(this + 4);
      if ( options == 0 )
        options = TraceRayServerToolEvent::default_instance_->options_;
      v11 = CMsgVector::ByteSize(options);
      v12 = 1;
      if ( v11 > 0x7F )
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
      v3 += v11 + v12 + 1;
    }
  }
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// TraceRayServerToolEvent::MergeFrom  (line 935, @0x0000000001b31630, libserver.so)  // inlines: dynamic_cast_if_available<const TraceRayServerToolEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, TraceRayServerToolEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'TraceRayServerToolEvent
void __fastcall TraceRayServerToolEvent::MergeFrom(
        TraceRayServerToolEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const TraceRayServerToolEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      936);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'TraceRayServerToolEvent, 0)) != 0 )
  {
    TraceRayServerToolEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// TraceRayServerToolEvent::MergeFrom  (line 947, @0x0000000001b31430, libserver.so)  // inlines: end, mutable_end, mutable_start, set_has_end, set_has_start, start
// calls: CMsgVector::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CMsgVector::CMsgVector, _Unwind_Resume, operator delete
// callers: TraceRayServerToolEvent::TraceRayServerToolEvent, TraceRayServerToolEvent::MergeFrom, TraceRayServerToolEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: TraceRayServerToolEvent::default_instance_
void __fastcall TraceRayServerToolEvent::MergeFrom(
        TraceRayServerToolEvent *const this,
        const TraceRayServerToolEvent *const from)
{
  int v4; // eax
  const google::protobuf::Descriptor *containing_type; // r13
  CMsgVector *v6; // rdi
  const CMsgVector *options; // r13
  CMsgVector *v8; // rdi
  __int64 v9; // rax
  CMsgVector *v10; // r14
  CMsgVector *v11; // r14
  char v12; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v13; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v13,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      948);
    v9 = google::protobuf::internal::LogMessage::operator<<(&v13, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v12, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v13);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      containing_type = *(from + 3);
      if ( containing_type == 0 )
        containing_type = TraceRayServerToolEvent::default_instance_->containing_type_;
      v6 = *(this + 3);
      *(this + 4) |= 1u;
      if ( v6 == 0 )
      {
        v11 = operator new(0x28u);
        CMsgVector::CMsgVector(v11);
        *(this + 3) = v11;
        v6 = v11;
      }
      CMsgVector::MergeFrom(v6, containing_type);
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      options = *(from + 4);
      if ( options == 0 )
        options = TraceRayServerToolEvent::default_instance_->options_;
      v8 = *(this + 4);
      *(this + 4) |= 2u;
      if ( v8 == 0 )
      {
        v10 = operator new(0x28u);
        CMsgVector::CMsgVector(v10);
        *(this + 4) = v10;
        v8 = v10;
      }
      CMsgVector::MergeFrom(v8, options);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// TraceRayServerToolEvent::CopyFrom  (line 960, @0x0000000001b2d040, libserver.so)
void __fastcall TraceRayServerToolEvent::CopyFrom(
        TraceRayServerToolEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// TraceRayServerToolEvent::CopyFrom  (line 966, @0x0000000001b31710, libserver.so)
// calls: TraceRayServerToolEvent::MergeFrom
// callers: CNetMessagePB<-1, TraceRayServerToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall TraceRayServerToolEvent::CopyFrom(
        TraceRayServerToolEvent *const this,
        const TraceRayServerToolEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    TraceRayServerToolEvent::MergeFrom(this, from);
  }
}


// TraceRayServerToolEvent::IsInitialized  (line 972, @0x0000000001b2d080, libserver.so)
bool __fastcall TraceRayServerToolEvent::IsInitialized(const TraceRayServerToolEvent *const this)
{
  return 1;
}


// TraceRayServerToolEvent::Swap  (line 977, @0x0000000001b31750, libserver.so)  // inlines: Swap, swap<CMsgVector*>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall TraceRayServerToolEvent::Swap(TraceRayServerToolEvent *const this, TraceRayServerToolEvent *other)
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


// TraceRayServerToolEvent::GetMetadata  (line 987, @0x0000000001b2f7a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::TraceRayServerToolEvent_descriptor_, `anonymous namespace'::TraceRayServerToolEvent_reflection_
google::protobuf::Metadata __fastcall TraceRayServerToolEvent::GetMetadata(const TraceRayServerToolEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::TraceRayServerToolEvent_descriptor_;
  result.reflection = `anonymous namespace'::TraceRayServerToolEvent_reflection_;
  return result;
}


// ToolTraceRayResult::ToolTraceRayResult  (line 1007, @0x0000000001b31820, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolTraceRayResult::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: ToolTraceRayResult::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, ToolTraceRayResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CLoopModeGameToolHooks::CLoopModeGameToolHooks, CNetMessagePB<-1, ToolTraceRayResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolTraceRayResult::ToolTraceRayResult(ToolTraceRayResult *const this)
{
  *this = off_3F79850;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  ToolTraceRayResult::SharedCtor(this);
}


// ToolTraceRayResult::InitAsDefaultInstance  (line 1013, @0x0000000001b317b0, libserver.so)
// calls: CMsgVector::default_instance
void __fastcall ToolTraceRayResult::InitAsDefaultInstance(ToolTraceRayResult *const this)
{
  *(this + 3) = CMsgVector::default_instance();
  *(this + 5) = CMsgVector::default_instance();
}


// ToolTraceRayResult::ToolTraceRayResult  (line 1018, @0x0000000001b31bd0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolTraceRayResult::SharedCtor, ToolTraceRayResult::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, ToolTraceRayResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall ToolTraceRayResult::ToolTraceRayResult(
        ToolTraceRayResult *const this,
        const ToolTraceRayResult *const from)
{
  *this = off_3F79850;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  ToolTraceRayResult::SharedCtor(this);
  ToolTraceRayResult::MergeFrom(this, from);
}


// ToolTraceRayResult::SharedCtor  (line 1025, @0x0000000001b317e0, libserver.so)  // inlines: memset
// callers: ToolTraceRayResult::ToolTraceRayResult
void __fastcall ToolTraceRayResult::SharedCtor(ToolTraceRayResult *const this)
{
  *(this + 5) = 0;
  *(this + 32) = 0;
  *(this + 3) = 0;
  *(this + 5) = 0;
  *(this + 9) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// ToolTraceRayResult::~ToolTraceRayResult  (line 1036, @0x0000000001b318f0, libserver.so)
// calls: ToolTraceRayResult::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: ToolTraceRayResult::~ToolTraceRayResult, CNetMessagePB<-1, ToolTraceRayResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::~CNetMessagePB, ToolTraceRayResult_t::~ToolTraceRayResult_t, CLoopModeGameToolHooks::~CLoopModeGameToolHooks, CNetMessagePB<-1, ToolTraceRayResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolTraceRayResult::~ToolTraceRayResult(ToolTraceRayResult *const this)
{
  *this = off_3F79850;
  ToolTraceRayResult::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// ToolTraceRayResult::~ToolTraceRayResult  (line 1036, @0x0000000001b31930, libserver.so)
// calls: ToolTraceRayResult::~ToolTraceRayResult, operator delete
void __fastcall ToolTraceRayResult::~ToolTraceRayResult(ToolTraceRayResult *const this)
{
  ToolTraceRayResult::~ToolTraceRayResult(this);
  operator delete(this);
}


// ToolTraceRayResult::SharedDtor  (line 1041, @0x0000000001b318a0, libserver.so)
// callers: ToolTraceRayResult::~ToolTraceRayResult
// globals: ToolTraceRayResult::default_instance_
void __fastcall ToolTraceRayResult::SharedDtor(ToolTraceRayResult *const this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  if ( this != ToolTraceRayResult::default_instance_ )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
    v3 = *(this + 5);
    if ( v3 != 0 )
      (*(*v3 + 8LL))(v3);
  }
}


// ToolTraceRayResult::SetCachedSize  (line 1048, @0x0000000001b2d090, libserver.so)
void __fastcall ToolTraceRayResult::SetCachedSize(const ToolTraceRayResult *const this, int size)
{
  *(this + 5) = size;
}


// ToolTraceRayResult::descriptor  (line 1053, @0x0000000001b31950, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolTraceRayResult_descriptor_
const google::protobuf::Descriptor *__cdecl ToolTraceRayResult::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ToolTraceRayResult_descriptor_;
}


// ToolTraceRayResult::default_instance  (line 1058, @0x0000000001b361a0, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ToolTraceRayResult::default_instance_
const ToolTraceRayResult *__cdecl ToolTraceRayResult::default_instance()
{
  const ToolTraceRayResult *result; // rax

  result = ToolTraceRayResult::default_instance_;
  if ( ToolTraceRayResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ToolTraceRayResult::default_instance_;
  }
  return result;
}


// ToolTraceRayResult::New  (line 1065, @0x0000000001b31860, libserver.so)
// calls: operator new, ToolTraceRayResult::ToolTraceRayResult, operator delete, _Unwind_Resume
ToolTraceRayResult *__fastcall ToolTraceRayResult::New(const ToolTraceRayResult *const this)
{
  ToolTraceRayResult *v1; // rbx

  v1 = operator new(0x38u);
  ToolTraceRayResult::ToolTraceRayResult(v1);
  return v1;
}


// ToolTraceRayResult::Clear  (line 1069, @0x0000000001b36b60, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), CMsgVector::Clear
void __fastcall ToolTraceRayResult::Clear(ToolTraceRayResult *const this)
{
  int v2; // eax
  bool v3; // zf
  CMsgVector *v4; // rdi
  CMsgVector *v5; // rdi

  v2 = *(this + 4);
  if ( (v2 & 0x3F) != 0 )
  {
    *(this + 4) = 0;
    *(this + 6) = 0;
    if ( (v2 & 2) != 0 )
    {
      v4 = *(this + 3);
      if ( v4 != 0 )
      {
        CMsgVector::Clear(v4);
        v2 = *(this + 4);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v5 = *(this + 5);
      if ( v5 != 0 )
        CMsgVector::Clear(v5);
    }
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// ToolTraceRayResult::MergePartialFromCodedStream  (line 1098, @0x0000000001b37230, libserver.so)  // inlines: Advance, BufferSize, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadLittleEndian32, ReadMessageNoVirtual<CMsgVector>, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, memcpy, mutable_impact, mutable_normal, set_has_distance, set_has_ehandle, set_has_fraction, set_has_hit, set_has_impact, set_has_normal
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::PushLimit(int), CMsgVector::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), operator new, CMsgVector::CMsgVector, google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *), operator delete, _Unwind_Resume
// globals: jpt_1B37291
bool __fastcall ToolTraceRayResult::MergePartialFromCodedStream(
        ToolTraceRayResult *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *current_limit; // rcx
  unsigned int v4; // r13d
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  bool result; // al
  CMsgVector *v10; // rcx
  const google::protobuf::uint8 *v11; // rax
  int v12; // eax
  bool v13; // cc
  const google::protobuf::uint8 *v14; // rax
  __int64 v15; // rdx
  const google::protobuf::uint8 *v16; // rax
  unsigned int v17; // edx
  const google::protobuf::uint8 *v18; // rax
  CMsgVector *v19; // rcx
  const google::protobuf::uint8 *v20; // rax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edx
  const google::protobuf::uint8 *v24; // rax
  google::protobuf::uint32 TagFallback; // eax
  unsigned int v26; // edx
  char Varint32Fallback; // al
  char v28; // al
  int recursion_depth; // eax
  int v30; // [rsp+4h] [rbp-4Ch]
  int v31; // [rsp+4h] [rbp-4Ch]
  CMsgVector *v32; // [rsp+8h] [rbp-48h]
  CMsgVector *v33; // [rsp+8h] [rbp-48h]
  CMsgVector *v34; // [rsp+8h] [rbp-48h]
  CMsgVector *v35; // [rsp+8h] [rbp-48h]
  CMsgVector *v36; // [rsp+8h] [rbp-48h]
  CMsgVector *v37; // [rsp+8h] [rbp-48h]
  unsigned int v38[2]; // [rsp+18h] [rbp-38h] BYREF

  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 2 )
  {
    while ( 1 )
    {
      if ( buffer_end > buffer )
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
      result = google::protobuf::internal::WireFormat::SkipField(input, v8, v4, current_limit);
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
        v14 = input->buffer_;
        if ( v14 < input->buffer_end_ )
        {
          v15 = *v14;
          if ( (v15 & 0x80u) == 0LL )
          {
            input->buffer_ = v14 + 1;
LABEL_24:
            *(this + 32) = v15 != 0;
            *(this + 4) |= 1u;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer < buffer_end && *buffer == 18 )
            {
              input->buffer_ = buffer + 1;
              goto parse_impact;
            }
            continue;
          }
        }
        result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v38);
        if ( result )
        {
          v15 = *v38;
          goto LABEL_24;
        }
        return result;
      case 2u:
        if ( v8 != 18 )
          goto handle_unusual;
parse_impact:
        v10 = *(this + 3);
        *(this + 4) |= 2u;
        if ( v10 == 0 )
        {
          v37 = operator new(0x28u);
          CMsgVector::CMsgVector(v37);
          *(this + 3) = v37;
          v10 = v37;
        }
        v11 = input->buffer_;
        if ( v11 >= input->buffer_end_ || *v11 < 0 )
        {
          v33 = v10;
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v38);
          v10 = v33;
          if ( Varint32Fallback == 0 )
            return 0;
        }
        else
        {
          v38[0] = *v11;
          input->buffer_ = v11 + 1;
        }
        v12 = input->recursion_depth_ + 1;
        v13 = input->recursion_limit_ < v12;
        input->recursion_depth_ = v12;
        if ( v13 )
          return 0;
        v35 = v10;
        v31 = google::protobuf::io::CodedInputStream::PushLimit(input, v38[0]);
        if ( !CMsgVector::MergePartialFromCodedStream(v35, input) || !input->legitimate_message_end_ )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(input, v31);
        recursion_depth = input->recursion_depth_;
        if ( recursion_depth > 0 )
          input->recursion_depth_ = recursion_depth - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end || *buffer != 26 )
          continue;
        input->buffer_ = buffer + 1;
parse_normal:
        v19 = *(this + 5);
        *(this + 4) |= 4u;
        if ( v19 == 0 )
        {
          v36 = operator new(0x28u);
          CMsgVector::CMsgVector(v36);
          *(this + 5) = v36;
          v19 = v36;
        }
        v20 = input->buffer_;
        if ( v20 >= input->buffer_end_ || *v20 < 0 )
        {
          v34 = v19;
          v28 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v38);
          v19 = v34;
          if ( v28 == 0 )
            return 0;
        }
        else
        {
          v38[0] = *v20;
          input->buffer_ = v20 + 1;
        }
        v21 = input->recursion_depth_ + 1;
        v13 = input->recursion_limit_ < v21;
        input->recursion_depth_ = v21;
        if ( v13 )
          return 0;
        v32 = v19;
        v30 = google::protobuf::io::CodedInputStream::PushLimit(input, v38[0]);
        if ( !CMsgVector::MergePartialFromCodedStream(v32, input) || !input->legitimate_message_end_ )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(input, v30);
        v22 = input->recursion_depth_;
        if ( v22 > 0 )
          input->recursion_depth_ = v22 - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end && *buffer == 37 )
        {
          v16 = buffer + 1;
          input->buffer_ = v16;
parse_distance:
          if ( buffer_end - v16 <= 3 )
          {
            result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v38);
            if ( !result )
              return result;
            v17 = v38[0];
          }
          else
          {
            v17 = *v16;
            input->buffer_ = v16 + 4;
          }
          *(this + 4) |= 8u;
          *(this + 9) = v17;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer < buffer_end && *buffer == 45 )
          {
            v18 = buffer + 1;
            input->buffer_ = v18;
parse_fraction:
            if ( buffer_end - v18 <= 3 )
            {
              result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v38);
              if ( !result )
                return result;
              v23 = v38[0];
            }
            else
            {
              v23 = *v18;
              input->buffer_ = v18 + 4;
            }
            *(this + 4) |= 0x10u;
            *(this + 12) = v23;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer < buffer_end && *buffer == 48 )
            {
              v24 = buffer + 1;
              input->buffer_ = v24;
parse_ehandle:
              if ( buffer_end <= v24 || ((v26 = *v24) & 0x80u) != 0 )
              {
                result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v38);
                if ( !result )
                  return result;
                v26 = v38[0];
              }
              else
              {
                input->buffer_ = v24 + 1;
              }
              *(this + 4) |= 0x20u;
              *(this + 13) = v26;
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
        continue;
      case 3u:
        if ( v8 == 26 )
          goto parse_normal;
        goto handle_unusual;
      case 4u:
        if ( v8 != 37 )
          goto handle_unusual;
        v16 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_distance;
      case 5u:
        if ( v8 != 45 )
          goto handle_unusual;
        v18 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_fraction;
      case 6u:
        if ( v8 != 48 )
          goto handle_unusual;
        v24 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_ehandle;
      default:
handle_unusual:
        if ( v8 != 0 )
          goto LABEL_8;
        return 1;
    }
  }
}


// ToolTraceRayResult::SerializeWithCachedSizes  (line 1215, @0x0000000001b2e1a0, libserver.so)  // inlines: empty, impact, normal
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
// globals: ToolTraceRayResult::default_instance_
void __fastcall ToolTraceRayResult::SerializeWithCachedSizes(
        const ToolTraceRayResult *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  const google::protobuf::Descriptor *containing_type; // rsi
  __int64 v8; // rsi
  _QWORD *v9; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_0 + 1, *(this + 32), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = ToolTraceRayResult::default_instance_->containing_type_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, containing_type, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 4) != 0 )
  {
    v8 = *(this + 5);
    if ( v8 == 0 )
      v8 = *&ToolTraceRayResult::default_instance_->is_placeholder_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 1, v8, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 8) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 2, output, *(this + 9), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x10) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 3, output, *(this + 12), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x20) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_6, *(this + 13), output, v3);
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


// ToolTraceRayResult::SerializeWithCachedSizesToArray  (line 1257, @0x0000000001b37cb0, libserver.so)  // inlines: GetCachedSize, WriteBoolNoTagToArray, WriteBoolToArray, WriteFloatNoTagToArray, WriteFloatToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian32ToArray, WriteMessageNoVirtualToArray<CMsgVector>, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, impact, memcpy, normal
// calls: CMsgVector::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// globals: ToolTraceRayResult::default_instance_
google::protobuf::uint8 *__fastcall ToolTraceRayResult::SerializeWithCachedSizesToArray(
        const ToolTraceRayResult *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::uint8 v5; // dl
  unsigned int *containing_type; // r12
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::uint8 *v8; // rsi
  unsigned int *v9; // r12
  google::protobuf::io::CodedOutputStream *v10; // rdi
  google::protobuf::uint8 *v11; // rsi
  int v12; // edx
  int v13; // edx
  unsigned __int8 *v14; // rdx
  google::protobuf::io::CodedOutputStream *v15; // rdi
  google::protobuf::uint8 *v16; // rsi
  __int64 v17; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 32);
    *target = 8;
    result = target + 2;
    target[1] = v5;
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
    {
      v4 = ToolTraceRayResult::default_instance_;
      containing_type = ToolTraceRayResult::default_instance_->containing_type_;
    }
    *result = 18;
    v7 = containing_type[5];
    if ( v7 > 0x7F )
    {
      v8 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, result + 1, v4);
    }
    else
    {
      result[1] = v7;
      v8 = result + 2;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(containing_type, v8);
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v9 = *(this + 5);
    if ( v9 == 0 )
    {
      v4 = ToolTraceRayResult::default_instance_;
      v9 = *&ToolTraceRayResult::default_instance_->is_placeholder_;
    }
    *result = 26;
    v10 = v9[5];
    if ( v10 > 0x7F )
    {
      v11 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, result + 1, v4);
    }
    else
    {
      result[1] = v10;
      v11 = result + 2;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(v9, v11);
    LODWORD(v4) = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v12 = *(this + 9);
    *result = 37;
    result += 5;
    *(result - 1) = v12;
    LODWORD(v4) = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v13 = *(this + 12);
    *result = 45;
    result += 5;
    *(result - 1) = v13;
    LODWORD(v4) = *(this + 4);
  }
  v14 = (v4 & 0x20);
  if ( v14 != 0 )
  {
    v15 = *(this + 13);
    v16 = result + 1;
    *result = 48;
    if ( v15 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v15, v16, v14);
    }
    else if ( v15 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v15, v16, v14);
    }
    else
    {
      result[1] = v15;
      result += 2;
    }
  }
  v17 = *(this + 1);
  if ( v17 != 0 && *(v17 + 8) != *v17 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v17);
  return result;
}


// ToolTraceRayResult::ByteSize  (line 1302, @0x0000000001b37f30, libserver.so)  // inlines: Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CMsgVector>, VarintSize32, VarintSize32SignExtended, empty, has_hit, impact, normal
// calls: CMsgVector::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// globals: ToolTraceRayResult::default_instance_
int __fastcall ToolTraceRayResult::ByteSize(const ToolTraceRayResult *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  const google::protobuf::Descriptor *containing_type; // rdi
  unsigned int v6; // r13d
  int v7; // eax
  const CMsgVector *v8; // rdi
  unsigned int v9; // r13d
  int v10; // eax
  _QWORD *v11; // rax
  google::protobuf::io::CodedOutputStream *v13; // rdi
  int v14; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = -(*(this + 4) & 1) & 2;
    if ( (v4 & 2) != 0 )
    {
      containing_type = *(this + 3);
      if ( containing_type == 0 )
        containing_type = ToolTraceRayResult::default_instance_->containing_type_;
      v6 = CMsgVector::ByteSize(containing_type);
      v7 = 1;
      if ( v6 > 0x7F )
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v3 += v6 + v7 + 1;
      v4 = *(this + 4);
    }
    if ( (v4 & 4) != 0 )
    {
      v8 = *(this + 5);
      if ( v8 == 0 )
        v8 = *&ToolTraceRayResult::default_instance_->is_placeholder_;
      v9 = CMsgVector::ByteSize(v8);
      v10 = 1;
      if ( v9 > 0x7F )
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      v3 += v9 + v10 + 1;
      v4 = *(this + 4);
    }
    if ( (v4 & 8) != 0 )
      v3 += 5;
    if ( (v4 & 0x10) != 0 )
      v3 += 5;
    if ( (v4 & 0x20) != 0 )
    {
      v13 = *(this + 13);
      v14 = 11;
      if ( v13 >= 0 )
      {
        LOBYTE(v14) = 2;
        if ( v13 > 0x7F )
          v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, v1) + 1;
      }
      v3 += v14;
    }
  }
  v11 = *(this + 1);
  if ( v11 != 0 && v11[1] != *v11 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// ToolTraceRayResult::MergeFrom  (line 1354, @0x0000000001b31c40, libserver.so)  // inlines: dynamic_cast_if_available<const ToolTraceRayResult*, const google::protobuf::Message*>
// calls: __dynamic_cast, ToolTraceRayResult::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ToolTraceRayResult
void __fastcall ToolTraceRayResult::MergeFrom(
        ToolTraceRayResult *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ToolTraceRayResult *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      1355);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'ToolTraceRayResult, 0)) != 0 )
  {
    ToolTraceRayResult::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ToolTraceRayResult::MergeFrom  (line 1366, @0x0000000001b319e0, libserver.so)  // inlines: impact, mutable_impact, mutable_normal, normal, set_distance, set_ehandle, set_fraction, set_has_distance, set_has_ehandle, set_has_fraction, set_has_hit, set_has_impact, set_has_normal, set_hit
// calls: CMsgVector::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CMsgVector::CMsgVector, _Unwind_Resume, operator delete
// callers: ToolTraceRayResult::ToolTraceRayResult, ToolTraceRayResult::MergeFrom, ToolTraceRayResult::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: ToolTraceRayResult::default_instance_
void __fastcall ToolTraceRayResult::MergeFrom(ToolTraceRayResult *const this, const ToolTraceRayResult *const from)
{
  int v4; // eax
  char v5; // al
  const google::protobuf::Descriptor *containing_type; // r13
  CMsgVector *v7; // rdi
  const CMsgVector *v8; // r13
  CMsgVector *v9; // rdi
  int v10; // xmm0_4
  int v11; // xmm0_4
  int v12; // eax
  __int64 v13; // rax
  CMsgVector *v14; // r14
  CMsgVector *v15; // r14
  char v16; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v17; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v17,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      1367);
    v13 = google::protobuf::internal::LogMessage::operator<<(&v17, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v16, v13);
    google::protobuf::internal::LogMessage::~LogMessage(&v17);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v5 = *(from + 32);
      *(this + 4) |= 1u;
      *(this + 32) = v5;
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      containing_type = *(from + 3);
      if ( containing_type == 0 )
        containing_type = ToolTraceRayResult::default_instance_->containing_type_;
      v7 = *(this + 3);
      *(this + 4) |= 2u;
      if ( v7 == 0 )
      {
        v14 = operator new(0x28u);
        CMsgVector::CMsgVector(v14);
        *(this + 3) = v14;
        v7 = v14;
      }
      CMsgVector::MergeFrom(v7, containing_type);
      v4 = *(from + 4);
    }
    if ( (v4 & 4) != 0 )
    {
      v8 = *(from + 5);
      if ( v8 == 0 )
        v8 = *&ToolTraceRayResult::default_instance_->is_placeholder_;
      v9 = *(this + 5);
      *(this + 4) |= 4u;
      if ( v9 == 0 )
      {
        v15 = operator new(0x28u);
        CMsgVector::CMsgVector(v15);
        *(this + 5) = v15;
        v9 = v15;
      }
      CMsgVector::MergeFrom(v9, v8);
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v10 = *(from + 9);
      *(this + 4) |= 8u;
      *(this + 9) = v10;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v11 = *(from + 12);
      *(this + 4) |= 0x10u;
      *(this + 12) = v11;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x20) != 0 )
    {
      v12 = *(from + 13);
      *(this + 4) |= 0x20u;
      *(this + 13) = v12;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// ToolTraceRayResult::CopyFrom  (line 1391, @0x0000000001b2d0a0, libserver.so)
void __fastcall ToolTraceRayResult::CopyFrom(
        ToolTraceRayResult *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ToolTraceRayResult::CopyFrom  (line 1397, @0x0000000001b31d20, libserver.so)
// calls: ToolTraceRayResult::MergeFrom
// callers: CNetMessagePB<-1, ToolTraceRayResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall ToolTraceRayResult::CopyFrom(ToolTraceRayResult *const this, const ToolTraceRayResult *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ToolTraceRayResult::MergeFrom(this, from);
  }
}


// ToolTraceRayResult::IsInitialized  (line 1403, @0x0000000001b2d0e0, libserver.so)
bool __fastcall ToolTraceRayResult::IsInitialized(const ToolTraceRayResult *const this)
{
  return 1;
}


// ToolTraceRayResult::Swap  (line 1408, @0x0000000001b31d60, libserver.so)  // inlines: Swap, swap<CMsgVector*>, swap<bool>, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall ToolTraceRayResult::Swap(ToolTraceRayResult *const this, ToolTraceRayResult *other)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // xmm1_4
  int v6; // xmm1_4
  __int64 v7; // rax

  if ( other != this )
  {
    v2 = *(this + 32);
    *(this + 32) = *(other + 32);
    *(other + 32) = v2;
    v3 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v3;
    v4 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
    v5 = *(this + 9);
    *(this + 9) = *(other + 9);
    *(other + 9) = v5;
    v6 = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v6;
    LODWORD(v4) = *(this + 13);
    *(this + 13) = *(other + 13);
    *(other + 13) = v4;
    LODWORD(v4) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v4;
    v7 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v7;
    LODWORD(v7) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v7;
  }
}


// ToolTraceRayResult::GetMetadata  (line 1422, @0x0000000001b2f840, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolTraceRayResult_descriptor_, `anonymous namespace'::ToolTraceRayResult_reflection_
google::protobuf::Metadata __fastcall ToolTraceRayResult::GetMetadata(const ToolTraceRayResult *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ToolTraceRayResult_descriptor_;
  result.reflection = `anonymous namespace'::ToolTraceRayResult_reflection_;
  return result;
}


// SpawnEntityToolEvent::SpawnEntityToolEvent  (line 1438, @0x0000000001b31ed0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), SpawnEntityToolEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: SpawnEntityToolEvent::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, SpawnEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, SpawnEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall SpawnEntityToolEvent::SpawnEntityToolEvent(SpawnEntityToolEvent *const this)
{
  *this = off_3F79910;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  SpawnEntityToolEvent::SharedCtor(this);
}


// SpawnEntityToolEvent::InitAsDefaultInstance  (line 1444, @0x0000000001b31e00, libserver.so)
void __fastcall SpawnEntityToolEvent::InitAsDefaultInstance(SpawnEntityToolEvent *const this)
{
  ;
}


// SpawnEntityToolEvent::SpawnEntityToolEvent  (line 1447, @0x0000000001b321b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), SpawnEntityToolEvent::SharedCtor, SpawnEntityToolEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, SpawnEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall SpawnEntityToolEvent::SpawnEntityToolEvent(
        SpawnEntityToolEvent *const this,
        const SpawnEntityToolEvent *const from)
{
  *this = off_3F79910;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  SpawnEntityToolEvent::SharedCtor(this);
  SpawnEntityToolEvent::MergeFrom(this, from);
}


// SpawnEntityToolEvent::SharedCtor  (line 1454, @0x0000000001b31e10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: SpawnEntityToolEvent::SpawnEntityToolEvent
void __fastcall SpawnEntityToolEvent::SharedCtor(SpawnEntityToolEvent *const this)
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
  *(this + 32) = 0;
  *(this + 4) = 0;
}


// SpawnEntityToolEvent::~SpawnEntityToolEvent  (line 1462, @0x0000000001b31fe0, libserver.so)
// calls: SpawnEntityToolEvent::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: SpawnEntityToolEvent::~SpawnEntityToolEvent, CNetMessagePB<-1, SpawnEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall SpawnEntityToolEvent::~SpawnEntityToolEvent(SpawnEntityToolEvent *const this)
{
  *this = off_3F79910;
  SpawnEntityToolEvent::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// SpawnEntityToolEvent::~SpawnEntityToolEvent  (line 1462, @0x0000000001b32020, libserver.so)
// calls: SpawnEntityToolEvent::~SpawnEntityToolEvent, operator delete
void __fastcall SpawnEntityToolEvent::~SpawnEntityToolEvent(SpawnEntityToolEvent *const this)
{
  SpawnEntityToolEvent::~SpawnEntityToolEvent(this);
  operator delete(this);
}


// SpawnEntityToolEvent::SharedDtor  (line 1467, @0x0000000001b31f70, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: SpawnEntityToolEvent::~SpawnEntityToolEvent
void __fastcall SpawnEntityToolEvent::SharedDtor(SpawnEntityToolEvent *const this)
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


// SpawnEntityToolEvent::SetCachedSize  (line 1473, @0x0000000001b2d0f0, libserver.so)
void __fastcall SpawnEntityToolEvent::SetCachedSize(const SpawnEntityToolEvent *const this, int size)
{
  *(this + 5) = size;
}


// SpawnEntityToolEvent::descriptor  (line 1478, @0x0000000001b32040, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::SpawnEntityToolEvent_descriptor_
const google::protobuf::Descriptor *__cdecl SpawnEntityToolEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::SpawnEntityToolEvent_descriptor_;
}


// SpawnEntityToolEvent::default_instance  (line 1483, @0x0000000001b361d0, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: SpawnEntityToolEvent::default_instance_
const SpawnEntityToolEvent *__cdecl SpawnEntityToolEvent::default_instance()
{
  const SpawnEntityToolEvent *result; // rax

  result = SpawnEntityToolEvent::default_instance_;
  if ( SpawnEntityToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return SpawnEntityToolEvent::default_instance_;
  }
  return result;
}


// SpawnEntityToolEvent::New  (line 1490, @0x0000000001b31f30, libserver.so)
// calls: operator new, SpawnEntityToolEvent::SpawnEntityToolEvent, operator delete, _Unwind_Resume
SpawnEntityToolEvent *__fastcall SpawnEntityToolEvent::New(const SpawnEntityToolEvent *const this)
{
  SpawnEntityToolEvent *v1; // rbx

  v1 = operator new(0x28u);
  SpawnEntityToolEvent::SpawnEntityToolEvent(v1);
  return v1;
}


// SpawnEntityToolEvent::Clear  (line 1494, @0x0000000001b2db10, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall SpawnEntityToolEvent::Clear(SpawnEntityToolEvent *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 1) != 0 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
    *(this + 32) = 0;
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// SpawnEntityToolEvent::MergePartialFromCodedStream  (line 1505, @0x0000000001b2fe90, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadTagWithCutoff, ReadVarint64, mutable_entity_keyvalues, set_has_clientsideentity, set_has_entity_keyvalues
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
bool __fastcall SpawnEntityToolEvent::MergePartialFromCodedStream(
        SpawnEntityToolEvent *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v4; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  std::string *v10; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15[5]; // [rsp+8h] [rbp-28h] BYREF

  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
          if ( google::protobuf::internal::WireFormat::SkipField(input, v9, v4, v2) == 0 )
            return 0;
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
      v10 = (v9 >> 3);
      if ( v10 != 1 )
        break;
      if ( v9 != 10 )
        goto handle_unusual;
      *(this + 4) |= 1u;
      if ( google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 3), v10) == 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 16 )
      {
        v13 = buffer + 1;
        input->buffer_ = v13;
        goto parse_clientsideentity;
      }
    }
    if ( v10 != 2 || v9 != 16 )
      break;
    v13 = input->buffer_;
    buffer_end = input->buffer_end_;
parse_clientsideentity:
    if ( v13 >= buffer_end || ((v14 = *v13) & 0x80u) != 0LL )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v15);
      if ( !result )
        return result;
      v14 = v15[0];
    }
    else
    {
      input->buffer_ = v13 + 1;
    }
    *(this + 32) = v14 != 0;
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
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// SpawnEntityToolEvent::SerializeWithCachedSizes  (line 1564, @0x0000000001b2e560, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall SpawnEntityToolEvent::SerializeWithCachedSizes(
        const SpawnEntityToolEvent *const this,
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
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_2, *(this + 32), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
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


// SpawnEntityToolEvent::SerializeWithCachedSizesToArray  (line 1585, @0x0000000001b2ed80, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteBytesToArray, WriteTagToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall SpawnEntityToolEvent::SerializeWithCachedSizesToArray(
        const SpawnEntityToolEvent *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  google::protobuf::uint8 v7; // al
  __int64 v8; // rax

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
    v7 = *(this + 32);
    target += 2;
    *(target - 2) = 16;
    *(target - 1) = v7;
  }
  v8 = *(this + 1);
  if ( v8 == 0 || *(v8 + 8) == *v8 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v8);
}


// SpawnEntityToolEvent::ByteSize  (line 1608, @0x0000000001b2de70, libserver.so)  // inlines: BytesSize, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall SpawnEntityToolEvent::ByteSize(const SpawnEntityToolEvent *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rax
  _QWORD *v7; // rbx
  int v8; // ecx
  google::protobuf::io::CodedOutputStream *v9; // rdi
  int v10; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v7 = *(this + 3);
      v8 = 1;
      v9 = *(*v7 - 24LL);
      v10 = v9;
      if ( v9 > 0x7F )
      {
        v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
        v10 = *(*v7 - 24LL);
        v4 = *(this + 4);
      }
      v3 = v8 + v10 + 1;
    }
    if ( (v4 & 2) != 0 )
      v3 += 2;
  }
  v5 = *(this + 1);
  if ( v5 != 0 && *(v5 + 8) != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v5);
  *(this + 5) = v3;
  return v3;
}


// SpawnEntityToolEvent::MergeFrom  (line 1636, @0x0000000001b32220, libserver.so)  // inlines: dynamic_cast_if_available<const SpawnEntityToolEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, SpawnEntityToolEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'SpawnEntityToolEvent
void __fastcall SpawnEntityToolEvent::MergeFrom(
        SpawnEntityToolEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const SpawnEntityToolEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      1637);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'SpawnEntityToolEvent, 0)) != 0 )
  {
    SpawnEntityToolEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// SpawnEntityToolEvent::MergeFrom  (line 1648, @0x0000000001b320d0, libserver.so)  // inlines: set_clientsideentity, set_entity_keyvalues, set_has_clientsideentity, set_has_entity_keyvalues
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: SpawnEntityToolEvent::SpawnEntityToolEvent, SpawnEntityToolEvent::MergeFrom, SpawnEntityToolEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall SpawnEntityToolEvent::MergeFrom(
        SpawnEntityToolEvent *const this,
        const SpawnEntityToolEvent *const from)
{
  int v4; // eax
  char v5; // al
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
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      1649);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v6 = *(from + 3);
      v7 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v7, v6);
      if ( (*(from + 4) & 2) == 0 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( (v4 & 2) != 0 )
    {
LABEL_6:
      v5 = *(from + 32);
      *(this + 4) |= 2u;
      *(this + 32) = v5;
    }
  }
LABEL_7:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// SpawnEntityToolEvent::CopyFrom  (line 1661, @0x0000000001b2d100, libserver.so)
void __fastcall SpawnEntityToolEvent::CopyFrom(
        SpawnEntityToolEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// SpawnEntityToolEvent::CopyFrom  (line 1667, @0x0000000001b32300, libserver.so)
// calls: SpawnEntityToolEvent::MergeFrom
// callers: CNetMessagePB<-1, SpawnEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall SpawnEntityToolEvent::CopyFrom(
        SpawnEntityToolEvent *const this,
        const SpawnEntityToolEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    SpawnEntityToolEvent::MergeFrom(this, from);
  }
}


// SpawnEntityToolEvent::IsInitialized  (line 1673, @0x0000000001b2d140, libserver.so)
bool __fastcall SpawnEntityToolEvent::IsInitialized(const SpawnEntityToolEvent *const this)
{
  return 1;
}


// SpawnEntityToolEvent::Swap  (line 1678, @0x0000000001b32340, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall SpawnEntityToolEvent::Swap(SpawnEntityToolEvent *const this, SpawnEntityToolEvent *other)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( other != this )
  {
    v2 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v2;
    LOBYTE(v2) = *(this + 32);
    *(this + 32) = *(other + 32);
    *(other + 32) = v2;
    LODWORD(v2) = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v2;
    v3 = *(this + 1);
    *(this + 1) = *(other + 1);
    *(other + 1) = v3;
    LODWORD(v3) = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v3;
  }
}


// SpawnEntityToolEvent::GetMetadata  (line 1688, @0x0000000001b2f8e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::SpawnEntityToolEvent_descriptor_, `anonymous namespace'::SpawnEntityToolEvent_reflection_
google::protobuf::Metadata __fastcall SpawnEntityToolEvent::GetMetadata(const SpawnEntityToolEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::SpawnEntityToolEvent_descriptor_;
  result.reflection = `anonymous namespace'::SpawnEntityToolEvent_reflection_;
  return result;
}


// SpawnEntityToolEventResult::SpawnEntityToolEventResult  (line 1703, @0x0000000001b323a0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: SpawnEntityToolEventResult::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CLoopModeGameToolHooks::CLoopModeGameToolHooks, CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall SpawnEntityToolEventResult::SpawnEntityToolEventResult(SpawnEntityToolEventResult *const this)
{
  *this = off_3F799D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// SpawnEntityToolEventResult::InitAsDefaultInstance  (line 1709, @0x0000000001b32430, libserver.so)
void __fastcall SpawnEntityToolEventResult::InitAsDefaultInstance(SpawnEntityToolEventResult *const this)
{
  ;
}


// SpawnEntityToolEventResult::SpawnEntityToolEventResult  (line 1712, @0x0000000001b325b0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), SpawnEntityToolEventResult::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall SpawnEntityToolEventResult::SpawnEntityToolEventResult(
        SpawnEntityToolEventResult *const this,
        const SpawnEntityToolEventResult *const from)
{
  *this = off_3F799D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  SpawnEntityToolEventResult::MergeFrom(this, from);
}


// SpawnEntityToolEventResult::SharedCtor  (line 1719, @0x0000000001b32440, libserver.so)  // inlines: memset
void __fastcall SpawnEntityToolEventResult::SharedCtor(SpawnEntityToolEventResult *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// SpawnEntityToolEventResult::~SpawnEntityToolEventResult  (line 1725, @0x0000000001b2d570, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::~CNetMessagePB, SpawnEntityToolEventResult_t::~SpawnEntityToolEventResult_t, CLoopModeGameToolHooks::~CLoopModeGameToolHooks, CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall SpawnEntityToolEventResult::~SpawnEntityToolEventResult(SpawnEntityToolEventResult *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F799D0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// SpawnEntityToolEventResult::~SpawnEntityToolEventResult  (line 1725, @0x0000000001b2d5a0, libserver.so)  // inlines: ~SpawnEntityToolEventResult
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall SpawnEntityToolEventResult::~SpawnEntityToolEventResult(SpawnEntityToolEventResult *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F799D0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// SpawnEntityToolEventResult::SharedDtor  (line 1730, @0x0000000001b32460, libserver.so)
void __fastcall SpawnEntityToolEventResult::SharedDtor(SpawnEntityToolEventResult *const this)
{
  ;
}


// SpawnEntityToolEventResult::SetCachedSize  (line 1735, @0x0000000001b2d150, libserver.so)
void __fastcall SpawnEntityToolEventResult::SetCachedSize(const SpawnEntityToolEventResult *const this, int size)
{
  *(this + 5) = size;
}


// SpawnEntityToolEventResult::descriptor  (line 1740, @0x0000000001b32470, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::SpawnEntityToolEventResult_descriptor_
const google::protobuf::Descriptor *__cdecl SpawnEntityToolEventResult::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::SpawnEntityToolEventResult_descriptor_;
}


// SpawnEntityToolEventResult::default_instance  (line 1745, @0x0000000001b36200, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: SpawnEntityToolEventResult::default_instance_
const SpawnEntityToolEventResult *__cdecl SpawnEntityToolEventResult::default_instance()
{
  const SpawnEntityToolEventResult *result; // rax

  result = SpawnEntityToolEventResult::default_instance_;
  if ( SpawnEntityToolEventResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return SpawnEntityToolEventResult::default_instance_;
  }
  return result;
}


// SpawnEntityToolEventResult::New  (line 1752, @0x0000000001b323f0, libserver.so)
// calls: operator new, SpawnEntityToolEventResult::SpawnEntityToolEventResult, operator delete, _Unwind_Resume
SpawnEntityToolEventResult *__fastcall SpawnEntityToolEventResult::New(const SpawnEntityToolEventResult *const this)
{
  SpawnEntityToolEventResult *v1; // rbx

  v1 = operator new(0x20u);
  SpawnEntityToolEventResult::SpawnEntityToolEventResult(v1);
  return v1;
}


// SpawnEntityToolEventResult::Clear  (line 1756, @0x0000000001b2d8f0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall SpawnEntityToolEventResult::Clear(SpawnEntityToolEventResult *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// SpawnEntityToolEventResult::MergePartialFromCodedStream  (line 1762, @0x0000000001b30630, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, set_has_ehandle
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall SpawnEntityToolEventResult::MergePartialFromCodedStream(
        SpawnEntityToolEventResult *const this,
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


// SpawnEntityToolEventResult::SerializeWithCachedSizes  (line 1808, @0x0000000001b2e2e0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall SpawnEntityToolEventResult::SerializeWithCachedSizes(
        const SpawnEntityToolEventResult *const this,
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


// SpawnEntityToolEventResult::SerializeWithCachedSizesToArray  (line 1823, @0x0000000001b2edf0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall SpawnEntityToolEventResult::SerializeWithCachedSizesToArray(
        const SpawnEntityToolEventResult *const this,
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


// SpawnEntityToolEventResult::ByteSize  (line 1839, @0x0000000001b2eaf0, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall SpawnEntityToolEventResult::ByteSize(const SpawnEntityToolEventResult *const this)
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


// SpawnEntityToolEventResult::MergeFrom  (line 1862, @0x0000000001b32630, libserver.so)  // inlines: dynamic_cast_if_available<const SpawnEntityToolEventResult*, const google::protobuf::Message*>
// calls: __dynamic_cast, SpawnEntityToolEventResult::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'SpawnEntityToolEventResult
void __fastcall SpawnEntityToolEventResult::MergeFrom(
        SpawnEntityToolEventResult *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const SpawnEntityToolEventResult *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      1863);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'SpawnEntityToolEventResult,
               0)) != 0 )
  {
    SpawnEntityToolEventResult::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// SpawnEntityToolEventResult::MergeFrom  (line 1874, @0x0000000001b32500, libserver.so)  // inlines: set_ehandle, set_has_ehandle
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: SpawnEntityToolEventResult::SpawnEntityToolEventResult, SpawnEntityToolEventResult::MergeFrom, SpawnEntityToolEventResult::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall SpawnEntityToolEventResult::MergeFrom(
        SpawnEntityToolEventResult *const this,
        const SpawnEntityToolEventResult *const from)
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
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      1875);
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


// SpawnEntityToolEventResult::CopyFrom  (line 1884, @0x0000000001b2d160, libserver.so)
void __fastcall SpawnEntityToolEventResult::CopyFrom(
        SpawnEntityToolEventResult *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// SpawnEntityToolEventResult::CopyFrom  (line 1890, @0x0000000001b32710, libserver.so)
// calls: SpawnEntityToolEventResult::MergeFrom
// callers: CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall SpawnEntityToolEventResult::CopyFrom(
        SpawnEntityToolEventResult *const this,
        const SpawnEntityToolEventResult *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    SpawnEntityToolEventResult::MergeFrom(this, from);
  }
}


// SpawnEntityToolEventResult::IsInitialized  (line 1896, @0x0000000001b2d1a0, libserver.so)
bool __fastcall SpawnEntityToolEventResult::IsInitialized(const SpawnEntityToolEventResult *const this)
{
  return 1;
}


// SpawnEntityToolEventResult::Swap  (line 1901, @0x0000000001b32750, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall SpawnEntityToolEventResult::Swap(
        SpawnEntityToolEventResult *const this,
        SpawnEntityToolEventResult *other)
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


// SpawnEntityToolEventResult::GetMetadata  (line 1910, @0x0000000001b2f980, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::SpawnEntityToolEventResult_descriptor_, `anonymous namespace'::SpawnEntityToolEventResult_reflection_
google::protobuf::Metadata __fastcall SpawnEntityToolEventResult::GetMetadata(
        const SpawnEntityToolEventResult *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::SpawnEntityToolEventResult_descriptor_;
  result.reflection = `anonymous namespace'::SpawnEntityToolEventResult_reflection_;
  return result;
}


// DestroyEntityToolEvent::DestroyEntityToolEvent  (line 1925, @0x0000000001b32790, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: DestroyEntityToolEvent::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, DestroyEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, DestroyEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall DestroyEntityToolEvent::DestroyEntityToolEvent(DestroyEntityToolEvent *const this)
{
  *this = off_3F79A90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// DestroyEntityToolEvent::InitAsDefaultInstance  (line 1931, @0x0000000001b32820, libserver.so)
void __fastcall DestroyEntityToolEvent::InitAsDefaultInstance(DestroyEntityToolEvent *const this)
{
  ;
}


// DestroyEntityToolEvent::DestroyEntityToolEvent  (line 1934, @0x0000000001b329a0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), DestroyEntityToolEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, DestroyEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall DestroyEntityToolEvent::DestroyEntityToolEvent(
        DestroyEntityToolEvent *const this,
        const DestroyEntityToolEvent *const from)
{
  *this = off_3F79A90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  DestroyEntityToolEvent::MergeFrom(this, from);
}


// DestroyEntityToolEvent::SharedCtor  (line 1941, @0x0000000001b32830, libserver.so)  // inlines: memset
void __fastcall DestroyEntityToolEvent::SharedCtor(DestroyEntityToolEvent *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// DestroyEntityToolEvent::~DestroyEntityToolEvent  (line 1947, @0x0000000001b2d5e0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<-1, DestroyEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall DestroyEntityToolEvent::~DestroyEntityToolEvent(DestroyEntityToolEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79A90;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// DestroyEntityToolEvent::~DestroyEntityToolEvent  (line 1947, @0x0000000001b2d610, libserver.so)  // inlines: ~DestroyEntityToolEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall DestroyEntityToolEvent::~DestroyEntityToolEvent(DestroyEntityToolEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79A90;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// DestroyEntityToolEvent::SharedDtor  (line 1952, @0x0000000001b32850, libserver.so)
void __fastcall DestroyEntityToolEvent::SharedDtor(DestroyEntityToolEvent *const this)
{
  ;
}


// DestroyEntityToolEvent::SetCachedSize  (line 1957, @0x0000000001b2d1b0, libserver.so)
void __fastcall DestroyEntityToolEvent::SetCachedSize(const DestroyEntityToolEvent *const this, int size)
{
  *(this + 5) = size;
}


// DestroyEntityToolEvent::descriptor  (line 1962, @0x0000000001b32860, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::DestroyEntityToolEvent_descriptor_
const google::protobuf::Descriptor *__cdecl DestroyEntityToolEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DestroyEntityToolEvent_descriptor_;
}


// DestroyEntityToolEvent::default_instance  (line 1967, @0x0000000001b36230, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: DestroyEntityToolEvent::default_instance_
const DestroyEntityToolEvent *__cdecl DestroyEntityToolEvent::default_instance()
{
  const DestroyEntityToolEvent *result; // rax

  result = DestroyEntityToolEvent::default_instance_;
  if ( DestroyEntityToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return DestroyEntityToolEvent::default_instance_;
  }
  return result;
}


// DestroyEntityToolEvent::New  (line 1974, @0x0000000001b327e0, libserver.so)
// calls: operator new, DestroyEntityToolEvent::DestroyEntityToolEvent, operator delete, _Unwind_Resume
DestroyEntityToolEvent *__fastcall DestroyEntityToolEvent::New(const DestroyEntityToolEvent *const this)
{
  DestroyEntityToolEvent *v1; // rbx

  v1 = operator new(0x20u);
  DestroyEntityToolEvent::DestroyEntityToolEvent(v1);
  return v1;
}


// DestroyEntityToolEvent::Clear  (line 1978, @0x0000000001b2d930, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall DestroyEntityToolEvent::Clear(DestroyEntityToolEvent *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// DestroyEntityToolEvent::MergePartialFromCodedStream  (line 1984, @0x0000000001b30760, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, set_has_ehandle
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall DestroyEntityToolEvent::MergePartialFromCodedStream(
        DestroyEntityToolEvent *const this,
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


// DestroyEntityToolEvent::SerializeWithCachedSizes  (line 2030, @0x0000000001b2e340, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall DestroyEntityToolEvent::SerializeWithCachedSizes(
        const DestroyEntityToolEvent *const this,
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


// DestroyEntityToolEvent::SerializeWithCachedSizesToArray  (line 2045, @0x0000000001b2ee70, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall DestroyEntityToolEvent::SerializeWithCachedSizesToArray(
        const DestroyEntityToolEvent *const this,
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


// DestroyEntityToolEvent::ByteSize  (line 2061, @0x0000000001b2ea80, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall DestroyEntityToolEvent::ByteSize(const DestroyEntityToolEvent *const this)
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


// DestroyEntityToolEvent::MergeFrom  (line 2084, @0x0000000001b32a20, libserver.so)  // inlines: dynamic_cast_if_available<const DestroyEntityToolEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, DestroyEntityToolEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'DestroyEntityToolEvent
void __fastcall DestroyEntityToolEvent::MergeFrom(
        DestroyEntityToolEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const DestroyEntityToolEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      2085);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'DestroyEntityToolEvent, 0)) != 0 )
  {
    DestroyEntityToolEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// DestroyEntityToolEvent::MergeFrom  (line 2096, @0x0000000001b328f0, libserver.so)  // inlines: set_ehandle, set_has_ehandle
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: DestroyEntityToolEvent::DestroyEntityToolEvent, DestroyEntityToolEvent::MergeFrom, DestroyEntityToolEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall DestroyEntityToolEvent::MergeFrom(
        DestroyEntityToolEvent *const this,
        const DestroyEntityToolEvent *const from)
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
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      2097);
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


// DestroyEntityToolEvent::CopyFrom  (line 2106, @0x0000000001b2d1c0, libserver.so)
void __fastcall DestroyEntityToolEvent::CopyFrom(
        DestroyEntityToolEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// DestroyEntityToolEvent::CopyFrom  (line 2112, @0x0000000001b32b00, libserver.so)
// calls: DestroyEntityToolEvent::MergeFrom
// callers: CNetMessagePB<-1, DestroyEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall DestroyEntityToolEvent::CopyFrom(
        DestroyEntityToolEvent *const this,
        const DestroyEntityToolEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    DestroyEntityToolEvent::MergeFrom(this, from);
  }
}


// DestroyEntityToolEvent::IsInitialized  (line 2118, @0x0000000001b2d200, libserver.so)
bool __fastcall DestroyEntityToolEvent::IsInitialized(const DestroyEntityToolEvent *const this)
{
  return 1;
}


// DestroyEntityToolEvent::Swap  (line 2123, @0x0000000001b32b40, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall DestroyEntityToolEvent::Swap(DestroyEntityToolEvent *const this, DestroyEntityToolEvent *other)
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


// DestroyEntityToolEvent::GetMetadata  (line 2132, @0x0000000001b2fa20, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::DestroyEntityToolEvent_descriptor_, `anonymous namespace'::DestroyEntityToolEvent_reflection_
google::protobuf::Metadata __fastcall DestroyEntityToolEvent::GetMetadata(const DestroyEntityToolEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::DestroyEntityToolEvent_descriptor_;
  result.reflection = `anonymous namespace'::DestroyEntityToolEvent_reflection_;
  return result;
}


// DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent  (line 2146, @0x0000000001b32b80, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: DestroyAllEntitiesToolEvent::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, DestroyAllEntitiesToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CLoopModeGameToolHooks::OnToolRestartMap, CNetMessagePB<-1, DestroyAllEntitiesToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent(DestroyAllEntitiesToolEvent *const this)
{
  *this = off_3F79B50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// DestroyAllEntitiesToolEvent::InitAsDefaultInstance  (line 2152, @0x0000000001b32c10, libserver.so)
void __fastcall DestroyAllEntitiesToolEvent::InitAsDefaultInstance(DestroyAllEntitiesToolEvent *const this)
{
  ;
}


// DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent  (line 2155, @0x0000000001b32d80, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), DestroyAllEntitiesToolEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, DestroyAllEntitiesToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent(
        DestroyAllEntitiesToolEvent *const this,
        const DestroyAllEntitiesToolEvent *const from)
{
  *this = off_3F79B50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
  DestroyAllEntitiesToolEvent::MergeFrom(this, from);
}


// DestroyAllEntitiesToolEvent::SharedCtor  (line 2162, @0x0000000001b32c20, libserver.so)  // inlines: memset
void __fastcall DestroyAllEntitiesToolEvent::SharedCtor(DestroyAllEntitiesToolEvent *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// DestroyAllEntitiesToolEvent::~DestroyAllEntitiesToolEvent  (line 2167, @0x0000000001b2d650, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<-1, DestroyAllEntitiesToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::~CNetMessagePB, DestroyAllEntitiesToolEvent_t::~DestroyAllEntitiesToolEvent_t, CLoopModeGameToolHooks::OnToolRestartMap, CNetMessagePB<-1, DestroyAllEntitiesToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall DestroyAllEntitiesToolEvent::~DestroyAllEntitiesToolEvent(DestroyAllEntitiesToolEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79B50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// DestroyAllEntitiesToolEvent::~DestroyAllEntitiesToolEvent  (line 2167, @0x0000000001b2d680, libserver.so)  // inlines: ~DestroyAllEntitiesToolEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall DestroyAllEntitiesToolEvent::~DestroyAllEntitiesToolEvent(DestroyAllEntitiesToolEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79B50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// DestroyAllEntitiesToolEvent::SharedDtor  (line 2172, @0x0000000001b32c40, libserver.so)
void __fastcall DestroyAllEntitiesToolEvent::SharedDtor(DestroyAllEntitiesToolEvent *const this)
{
  ;
}


// DestroyAllEntitiesToolEvent::SetCachedSize  (line 2177, @0x0000000001b2d210, libserver.so)
void __fastcall DestroyAllEntitiesToolEvent::SetCachedSize(const DestroyAllEntitiesToolEvent *const this, int size)
{
  *(this + 5) = size;
}


// DestroyAllEntitiesToolEvent::descriptor  (line 2182, @0x0000000001b32c50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::DestroyAllEntitiesToolEvent_descriptor_
const google::protobuf::Descriptor *__cdecl DestroyAllEntitiesToolEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DestroyAllEntitiesToolEvent_descriptor_;
}


// DestroyAllEntitiesToolEvent::default_instance  (line 2187, @0x0000000001b36260, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: DestroyAllEntitiesToolEvent::default_instance_
const DestroyAllEntitiesToolEvent *__cdecl DestroyAllEntitiesToolEvent::default_instance()
{
  const DestroyAllEntitiesToolEvent *result; // rax

  result = DestroyAllEntitiesToolEvent::default_instance_;
  if ( DestroyAllEntitiesToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return DestroyAllEntitiesToolEvent::default_instance_;
  }
  return result;
}


// DestroyAllEntitiesToolEvent::New  (line 2194, @0x0000000001b32bd0, libserver.so)
// calls: operator new, DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent, operator delete, _Unwind_Resume
DestroyAllEntitiesToolEvent *__fastcall DestroyAllEntitiesToolEvent::New(const DestroyAllEntitiesToolEvent *const this)
{
  DestroyAllEntitiesToolEvent *v1; // rbx

  v1 = operator new(0x18u);
  DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent(v1);
  return v1;
}


// DestroyAllEntitiesToolEvent::Clear  (line 2198, @0x0000000001b2d970, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall DestroyAllEntitiesToolEvent::Clear(DestroyAllEntitiesToolEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  *(this + 4) = 0;
  v2 = (this + 8);
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// DestroyAllEntitiesToolEvent::MergePartialFromCodedStream  (line 2203, @0x0000000001b2e900, libserver.so)  // inlines: Advance, GetTagWireType, ReadTagWithCutoff
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void)
bool __fastcall DestroyAllEntitiesToolEvent::MergePartialFromCodedStream(
        DestroyAllEntitiesToolEvent *const this,
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


// DestroyAllEntitiesToolEvent::SerializeWithCachedSizes  (line 2230, @0x0000000001b2dc70, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall DestroyAllEntitiesToolEvent::SerializeWithCachedSizes(
        const DestroyAllEntitiesToolEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  __int64 v2; // rax

  v2 = *(this + 1);
  if ( v2 != 0 && *(v2 + 8) != *v2 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v2);
}


// DestroyAllEntitiesToolEvent::SerializeWithCachedSizesToArray  (line 2240, @0x0000000001b2dcd0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall DestroyAllEntitiesToolEvent::SerializeWithCachedSizesToArray(
        const DestroyAllEntitiesToolEvent *const this,
        google::protobuf::uint8 *target)
{
  __int64 v2; // rdx

  v2 = *(this + 1);
  if ( v2 == 0 || *(v2 + 8) == *v2 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, v2);
}


// DestroyAllEntitiesToolEvent::ByteSize  (line 2251, @0x0000000001b2dd30, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall DestroyAllEntitiesToolEvent::ByteSize(const DestroyAllEntitiesToolEvent *const this)
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


// DestroyAllEntitiesToolEvent::MergeFrom  (line 2265, @0x0000000001b32df0, libserver.so)  // inlines: dynamic_cast_if_available<const DestroyAllEntitiesToolEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, DestroyAllEntitiesToolEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'DestroyAllEntitiesToolEvent
void __fastcall DestroyAllEntitiesToolEvent::MergeFrom(
        DestroyAllEntitiesToolEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const DestroyAllEntitiesToolEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      2266);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'DestroyAllEntitiesToolEvent,
               0)) != 0 )
  {
    DestroyAllEntitiesToolEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// DestroyAllEntitiesToolEvent::MergeFrom  (line 2277, @0x0000000001b32ce0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: DestroyAllEntitiesToolEvent::DestroyAllEntitiesToolEvent, DestroyAllEntitiesToolEvent::MergeFrom, DestroyAllEntitiesToolEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall DestroyAllEntitiesToolEvent::MergeFrom(
        DestroyAllEntitiesToolEvent *const this,
        const DestroyAllEntitiesToolEvent *const from)
{
  __int64 v4; // rax
  char v5; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v6; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      2278);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// DestroyAllEntitiesToolEvent::CopyFrom  (line 2282, @0x0000000001b2d220, libserver.so)
void __fastcall DestroyAllEntitiesToolEvent::CopyFrom(
        DestroyAllEntitiesToolEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// DestroyAllEntitiesToolEvent::CopyFrom  (line 2288, @0x0000000001b32ed0, libserver.so)
// calls: DestroyAllEntitiesToolEvent::MergeFrom
// callers: CNetMessagePB<-1, DestroyAllEntitiesToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall DestroyAllEntitiesToolEvent::CopyFrom(
        DestroyAllEntitiesToolEvent *const this,
        const DestroyAllEntitiesToolEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    DestroyAllEntitiesToolEvent::MergeFrom(this, from);
  }
}


// DestroyAllEntitiesToolEvent::IsInitialized  (line 2294, @0x0000000001b2d260, libserver.so)
bool __fastcall DestroyAllEntitiesToolEvent::IsInitialized(const DestroyAllEntitiesToolEvent *const this)
{
  return 1;
}


// DestroyAllEntitiesToolEvent::Swap  (line 2299, @0x0000000001b32f10, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>
void __fastcall DestroyAllEntitiesToolEvent::Swap(
        DestroyAllEntitiesToolEvent *const this,
        DestroyAllEntitiesToolEvent *other)
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


// DestroyAllEntitiesToolEvent::GetMetadata  (line 2306, @0x0000000001b2fac0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::DestroyAllEntitiesToolEvent_descriptor_, `anonymous namespace'::DestroyAllEntitiesToolEvent_reflection_
google::protobuf::Metadata __fastcall DestroyAllEntitiesToolEvent::GetMetadata(
        const DestroyAllEntitiesToolEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::DestroyAllEntitiesToolEvent_descriptor_;
  result.reflection = `anonymous namespace'::DestroyAllEntitiesToolEvent_reflection_;
  return result;
}


// RestartMapToolEvent::RestartMapToolEvent  (line 2320, @0x0000000001b32f40, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: RestartMapToolEvent::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, RestartMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, RestartMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall RestartMapToolEvent::RestartMapToolEvent(RestartMapToolEvent *const this)
{
  *this = off_3F79C10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// RestartMapToolEvent::InitAsDefaultInstance  (line 2326, @0x0000000001b32fd0, libserver.so)
void __fastcall RestartMapToolEvent::InitAsDefaultInstance(RestartMapToolEvent *const this)
{
  ;
}


// RestartMapToolEvent::RestartMapToolEvent  (line 2329, @0x0000000001b33140, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), RestartMapToolEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, RestartMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall RestartMapToolEvent::RestartMapToolEvent(
        RestartMapToolEvent *const this,
        const RestartMapToolEvent *const from)
{
  *this = off_3F79C10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
  RestartMapToolEvent::MergeFrom(this, from);
}


// RestartMapToolEvent::SharedCtor  (line 2336, @0x0000000001b32fe0, libserver.so)  // inlines: memset
void __fastcall RestartMapToolEvent::SharedCtor(RestartMapToolEvent *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// RestartMapToolEvent::~RestartMapToolEvent  (line 2341, @0x0000000001b2d6c0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<-1, RestartMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall RestartMapToolEvent::~RestartMapToolEvent(RestartMapToolEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79C10;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// RestartMapToolEvent::~RestartMapToolEvent  (line 2341, @0x0000000001b2d6f0, libserver.so)  // inlines: ~RestartMapToolEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall RestartMapToolEvent::~RestartMapToolEvent(RestartMapToolEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79C10;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// RestartMapToolEvent::SharedDtor  (line 2346, @0x0000000001b33000, libserver.so)
void __fastcall RestartMapToolEvent::SharedDtor(RestartMapToolEvent *const this)
{
  ;
}


// RestartMapToolEvent::SetCachedSize  (line 2351, @0x0000000001b2d270, libserver.so)
void __fastcall RestartMapToolEvent::SetCachedSize(const RestartMapToolEvent *const this, int size)
{
  *(this + 5) = size;
}


// RestartMapToolEvent::descriptor  (line 2356, @0x0000000001b33010, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::RestartMapToolEvent_descriptor_
const google::protobuf::Descriptor *__cdecl RestartMapToolEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::RestartMapToolEvent_descriptor_;
}


// RestartMapToolEvent::default_instance  (line 2361, @0x0000000001b36290, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: RestartMapToolEvent::default_instance_
const RestartMapToolEvent *__cdecl RestartMapToolEvent::default_instance()
{
  const RestartMapToolEvent *result; // rax

  result = RestartMapToolEvent::default_instance_;
  if ( RestartMapToolEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return RestartMapToolEvent::default_instance_;
  }
  return result;
}


// RestartMapToolEvent::New  (line 2368, @0x0000000001b32f90, libserver.so)
// calls: operator new, RestartMapToolEvent::RestartMapToolEvent, operator delete, _Unwind_Resume
RestartMapToolEvent *__fastcall RestartMapToolEvent::New(const RestartMapToolEvent *const this)
{
  RestartMapToolEvent *v1; // rbx

  v1 = operator new(0x18u);
  RestartMapToolEvent::RestartMapToolEvent(v1);
  return v1;
}


// RestartMapToolEvent::Clear  (line 2372, @0x0000000001b2d9a0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall RestartMapToolEvent::Clear(RestartMapToolEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  *(this + 4) = 0;
  v2 = (this + 8);
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// RestartMapToolEvent::MergePartialFromCodedStream  (line 2377, @0x0000000001b2e890, libserver.so)  // inlines: Advance, GetTagWireType, ReadTagWithCutoff
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void)
bool __fastcall RestartMapToolEvent::MergePartialFromCodedStream(
        RestartMapToolEvent *const this,
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


// RestartMapToolEvent::SerializeWithCachedSizes  (line 2404, @0x0000000001b2dca0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall RestartMapToolEvent::SerializeWithCachedSizes(
        const RestartMapToolEvent *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  __int64 v2; // rax

  v2 = *(this + 1);
  if ( v2 != 0 && *(v2 + 8) != *v2 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v2);
}


// RestartMapToolEvent::SerializeWithCachedSizesToArray  (line 2414, @0x0000000001b2dd00, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall RestartMapToolEvent::SerializeWithCachedSizesToArray(
        const RestartMapToolEvent *const this,
        google::protobuf::uint8 *target)
{
  __int64 v2; // rdx

  v2 = *(this + 1);
  if ( v2 == 0 || *(v2 + 8) == *v2 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, v2);
}


// RestartMapToolEvent::ByteSize  (line 2425, @0x0000000001b2dd80, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall RestartMapToolEvent::ByteSize(const RestartMapToolEvent *const this)
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


// RestartMapToolEvent::MergeFrom  (line 2439, @0x0000000001b331b0, libserver.so)  // inlines: dynamic_cast_if_available<const RestartMapToolEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, RestartMapToolEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'RestartMapToolEvent
void __fastcall RestartMapToolEvent::MergeFrom(
        RestartMapToolEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const RestartMapToolEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      2440);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'RestartMapToolEvent, 0)) != 0 )
  {
    RestartMapToolEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// RestartMapToolEvent::MergeFrom  (line 2451, @0x0000000001b330a0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: RestartMapToolEvent::RestartMapToolEvent, RestartMapToolEvent::MergeFrom, RestartMapToolEvent::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall RestartMapToolEvent::MergeFrom(RestartMapToolEvent *const this, const RestartMapToolEvent *const from)
{
  __int64 v4; // rax
  char v5; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v6; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      2452);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// RestartMapToolEvent::CopyFrom  (line 2456, @0x0000000001b2d280, libserver.so)
void __fastcall RestartMapToolEvent::CopyFrom(
        RestartMapToolEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// RestartMapToolEvent::CopyFrom  (line 2462, @0x0000000001b33290, libserver.so)
// calls: RestartMapToolEvent::MergeFrom
// callers: CNetMessagePB<-1, RestartMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall RestartMapToolEvent::CopyFrom(RestartMapToolEvent *const this, const RestartMapToolEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    RestartMapToolEvent::MergeFrom(this, from);
  }
}


// RestartMapToolEvent::IsInitialized  (line 2468, @0x0000000001b2d2c0, libserver.so)
bool __fastcall RestartMapToolEvent::IsInitialized(const RestartMapToolEvent *const this)
{
  return 1;
}


// RestartMapToolEvent::Swap  (line 2473, @0x0000000001b332d0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>
void __fastcall RestartMapToolEvent::Swap(RestartMapToolEvent *const this, RestartMapToolEvent *other)
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


// RestartMapToolEvent::GetMetadata  (line 2480, @0x0000000001b2fb60, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::RestartMapToolEvent_descriptor_, `anonymous namespace'::RestartMapToolEvent_reflection_
google::protobuf::Metadata __fastcall RestartMapToolEvent::GetMetadata(const RestartMapToolEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::RestartMapToolEvent_descriptor_;
  result.reflection = `anonymous namespace'::RestartMapToolEvent_reflection_;
  return result;
}


// ToolEvent_GetEntityInfo::ToolEvent_GetEntityInfo  (line 2496, @0x0000000001b33300, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: ToolEvent_GetEntityInfo::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, ToolEvent_GetEntityInfo, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, ToolEvent_GetEntityInfo, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_GetEntityInfo::ToolEvent_GetEntityInfo(ToolEvent_GetEntityInfo *const this)
{
  *this = off_3F79CD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 28) = 0;
  *(this + 4) = 0;
}


// ToolEvent_GetEntityInfo::InitAsDefaultInstance  (line 2502, @0x0000000001b33390, libserver.so)
void __fastcall ToolEvent_GetEntityInfo::InitAsDefaultInstance(ToolEvent_GetEntityInfo *const this)
{
  ;
}


// ToolEvent_GetEntityInfo::ToolEvent_GetEntityInfo  (line 2505, @0x0000000001b33530, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_GetEntityInfo::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInfo, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall ToolEvent_GetEntityInfo::ToolEvent_GetEntityInfo(
        ToolEvent_GetEntityInfo *const this,
        const ToolEvent_GetEntityInfo *const from)
{
  *this = off_3F79CD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 28) = 0;
  *(this + 4) = 0;
  ToolEvent_GetEntityInfo::MergeFrom(this, from);
}


// ToolEvent_GetEntityInfo::SharedCtor  (line 2512, @0x0000000001b333a0, libserver.so)  // inlines: memset
void __fastcall ToolEvent_GetEntityInfo::SharedCtor(ToolEvent_GetEntityInfo *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 28) = 0;
  *(this + 4) = 0;
}


// ToolEvent_GetEntityInfo::~ToolEvent_GetEntityInfo  (line 2519, @0x0000000001b2d730, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInfo, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_GetEntityInfo::~ToolEvent_GetEntityInfo(ToolEvent_GetEntityInfo *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79CD0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// ToolEvent_GetEntityInfo::~ToolEvent_GetEntityInfo  (line 2519, @0x0000000001b2d760, libserver.so)  // inlines: ~ToolEvent_GetEntityInfo
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall ToolEvent_GetEntityInfo::~ToolEvent_GetEntityInfo(ToolEvent_GetEntityInfo *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79CD0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// ToolEvent_GetEntityInfo::SharedDtor  (line 2524, @0x0000000001b333c0, libserver.so)
void __fastcall ToolEvent_GetEntityInfo::SharedDtor(ToolEvent_GetEntityInfo *const this)
{
  ;
}


// ToolEvent_GetEntityInfo::SetCachedSize  (line 2529, @0x0000000001b2d2d0, libserver.so)
void __fastcall ToolEvent_GetEntityInfo::SetCachedSize(const ToolEvent_GetEntityInfo *const this, int size)
{
  *(this + 5) = size;
}


// ToolEvent_GetEntityInfo::descriptor  (line 2534, @0x0000000001b333d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_GetEntityInfo_descriptor_
const google::protobuf::Descriptor *__cdecl ToolEvent_GetEntityInfo::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ToolEvent_GetEntityInfo_descriptor_;
}


// ToolEvent_GetEntityInfo::default_instance  (line 2539, @0x0000000001b362c0, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ToolEvent_GetEntityInfo::default_instance_
const ToolEvent_GetEntityInfo *__cdecl ToolEvent_GetEntityInfo::default_instance()
{
  const ToolEvent_GetEntityInfo *result; // rax

  result = ToolEvent_GetEntityInfo::default_instance_;
  if ( ToolEvent_GetEntityInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ToolEvent_GetEntityInfo::default_instance_;
  }
  return result;
}


// ToolEvent_GetEntityInfo::New  (line 2546, @0x0000000001b33350, libserver.so)
// calls: operator new, ToolEvent_GetEntityInfo::ToolEvent_GetEntityInfo, operator delete, _Unwind_Resume
ToolEvent_GetEntityInfo *__fastcall ToolEvent_GetEntityInfo::New(const ToolEvent_GetEntityInfo *const this)
{
  ToolEvent_GetEntityInfo *v1; // rbx

  v1 = operator new(0x20u);
  ToolEvent_GetEntityInfo::ToolEvent_GetEntityInfo(v1);
  return v1;
}


// ToolEvent_GetEntityInfo::Clear  (line 2550, @0x0000000001b2d9d0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall ToolEvent_GetEntityInfo::Clear(ToolEvent_GetEntityInfo *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  v2[20] = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// ToolEvent_GetEntityInfo::MergePartialFromCodedStream  (line 2570, @0x0000000001b30030, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, set_has_clientsideentity, set_has_ehandle
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall ToolEvent_GetEntityInfo::MergePartialFromCodedStream(
        ToolEvent_GetEntityInfo *const this,
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
  __int64 v15; // rax
  unsigned int v16[2]; // [rsp+8h] [rbp-28h] BYREF

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
      if ( v9 >> 3 != 1 )
        break;
      if ( v9 != 8 )
        goto handle_unusual;
      v12 = input->buffer_;
      if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v16);
        if ( !result )
          return result;
        v13 = v16[0];
      }
      else
      {
        input->buffer_ = v12 + 1;
      }
      *(this + 4) |= 1u;
      *(this + 6) = v13;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 16 )
      {
        v14 = buffer + 1;
        input->buffer_ = v14;
        goto parse_clientsideentity;
      }
    }
    if ( v9 >> 3 != 2 || v9 != 16 )
      break;
    v14 = input->buffer_;
    buffer_end = input->buffer_end_;
parse_clientsideentity:
    if ( buffer_end <= v14 || ((v15 = *v14) & 0x80u) != 0LL )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v16);
      if ( !result )
        return result;
      v15 = *v16;
    }
    else
    {
      input->buffer_ = v14 + 1;
    }
    *(this + 28) = v15 != 0;
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
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// ToolEvent_GetEntityInfo::SerializeWithCachedSizes  (line 2631, @0x0000000001b2e3a0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall ToolEvent_GetEntityInfo::SerializeWithCachedSizes(
        const ToolEvent_GetEntityInfo *const this,
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
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_2, *(this + 28), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 6), output, v3);
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


// ToolEvent_GetEntityInfo::SerializeWithCachedSizesToArray  (line 2651, @0x0000000001b2ef60, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall ToolEvent_GetEntityInfo::SerializeWithCachedSizesToArray(
        const ToolEvent_GetEntityInfo *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 v6; // al
  __int64 v7; // rax

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
    v6 = *(this + 28);
    target += 2;
    *(target - 2) = 16;
    *(target - 1) = v6;
  }
  v7 = *(this + 1);
  if ( v7 == 0 || *(v7 + 8) == *v7 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v7);
}


// ToolEvent_GetEntityInfo::ByteSize  (line 2672, @0x0000000001b2eb60, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall ToolEvent_GetEntityInfo::ByteSize(const ToolEvent_GetEntityInfo *const this)
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
      if ( v8 < 0 )
      {
        LOBYTE(v5) = v4;
        v3 = 11;
      }
      else
      {
        LOBYTE(v3) = 2;
        if ( v8 > 0x7F )
        {
          v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
          v5 = *(this + 4);
          v3 = v9 + 1;
        }
      }
    }
    if ( (v5 & 2) != 0 )
      v3 += 2;
  }
  v6 = *(this + 1);
  if ( v6 != 0 && v6[1] != *v6 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// ToolEvent_GetEntityInfo::MergeFrom  (line 2700, @0x0000000001b335b0, libserver.so)  // inlines: dynamic_cast_if_available<const ToolEvent_GetEntityInfo*, const google::protobuf::Message*>
// calls: __dynamic_cast, ToolEvent_GetEntityInfo::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ToolEvent_GetEntityInfo
void __fastcall ToolEvent_GetEntityInfo::MergeFrom(
        ToolEvent_GetEntityInfo *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ToolEvent_GetEntityInfo *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      2701);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'ToolEvent_GetEntityInfo, 0)) != 0 )
  {
    ToolEvent_GetEntityInfo::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ToolEvent_GetEntityInfo::MergeFrom  (line 2712, @0x0000000001b33460, libserver.so)  // inlines: set_clientsideentity, set_ehandle, set_has_clientsideentity, set_has_ehandle
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: ToolEvent_GetEntityInfo::ToolEvent_GetEntityInfo, ToolEvent_GetEntityInfo::MergeFrom, ToolEvent_GetEntityInfo::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall ToolEvent_GetEntityInfo::MergeFrom(
        ToolEvent_GetEntityInfo *const this,
        const ToolEvent_GetEntityInfo *const from)
{
  int v4; // eax
  int v5; // eax
  char v6; // al
  __int64 v7; // rax
  char v8; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      2713);
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
      v6 = *(from + 28);
      *(this + 4) |= 2u;
      *(this + 28) = v6;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// ToolEvent_GetEntityInfo::CopyFrom  (line 2725, @0x0000000001b2d2e0, libserver.so)
void __fastcall ToolEvent_GetEntityInfo::CopyFrom(
        ToolEvent_GetEntityInfo *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ToolEvent_GetEntityInfo::CopyFrom  (line 2731, @0x0000000001b33690, libserver.so)
// calls: ToolEvent_GetEntityInfo::MergeFrom
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInfo, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall ToolEvent_GetEntityInfo::CopyFrom(
        ToolEvent_GetEntityInfo *const this,
        const ToolEvent_GetEntityInfo *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ToolEvent_GetEntityInfo::MergeFrom(this, from);
  }
}


// ToolEvent_GetEntityInfo::IsInitialized  (line 2737, @0x0000000001b2d320, libserver.so)
bool __fastcall ToolEvent_GetEntityInfo::IsInitialized(const ToolEvent_GetEntityInfo *const this)
{
  return 1;
}


// ToolEvent_GetEntityInfo::Swap  (line 2742, @0x0000000001b336d0, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall ToolEvent_GetEntityInfo::Swap(ToolEvent_GetEntityInfo *const this, ToolEvent_GetEntityInfo *other)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    LOBYTE(v2) = *(this + 28);
    *(this + 28) = *(other + 28);
    *(other + 28) = v2;
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


// ToolEvent_GetEntityInfo::GetMetadata  (line 2752, @0x0000000001b2f2a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_GetEntityInfo_descriptor_, `anonymous namespace'::ToolEvent_GetEntityInfo_reflection_
google::protobuf::Metadata __fastcall ToolEvent_GetEntityInfo::GetMetadata(const ToolEvent_GetEntityInfo *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ToolEvent_GetEntityInfo_descriptor_;
  result.reflection = `anonymous namespace'::ToolEvent_GetEntityInfo_reflection_;
  return result;
}


// ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult  (line 2773, @0x0000000001b33870, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_GetEntityInfoResult::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: ToolEvent_GetEntityInfoResult::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, ToolEvent_GetEntityInfoResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CLoopModeGameToolHooks::CLoopModeGameToolHooks, CNetMessagePB<-1, ToolEvent_GetEntityInfoResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult(ToolEvent_GetEntityInfoResult *const this)
{
  *this = off_3F79D90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  ToolEvent_GetEntityInfoResult::SharedCtor(this);
}


// ToolEvent_GetEntityInfoResult::InitAsDefaultInstance  (line 2779, @0x0000000001b33720, libserver.so)
// calls: CMsgVector::default_instance
// callers: protobuf_AddDesc_gametoolevents_2eproto
void __fastcall ToolEvent_GetEntityInfoResult::InitAsDefaultInstance(ToolEvent_GetEntityInfoResult *const this)
{
  *(this + 6) = CMsgVector::default_instance();
  *(this + 7) = CMsgVector::default_instance();
  *(this + 8) = CMsgVector::default_instance();
}


// ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult  (line 2785, @0x0000000001b33df0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_GetEntityInfoResult::SharedCtor, ToolEvent_GetEntityInfoResult::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInfoResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult(
        ToolEvent_GetEntityInfoResult *const this,
        const ToolEvent_GetEntityInfoResult *const from)
{
  *this = off_3F79D90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  ToolEvent_GetEntityInfoResult::SharedCtor(this);
  ToolEvent_GetEntityInfoResult::MergeFrom(this, from);
}


// ToolEvent_GetEntityInfoResult::SharedCtor  (line 2792, @0x0000000001b33750, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult
// globals: ToolEvent_GetEntityInfoResult::_default_cppclass_
void __fastcall ToolEvent_GetEntityInfoResult::SharedCtor(ToolEvent_GetEntityInfoResult *const this)
{
  google::protobuf::Closure *v1; // rdx
  std::string *v3; // r12
  const std::string *v4; // r14
  std::string *v5; // r12
  const std::string *v6; // r13
  std::string *v7; // r12
  __int64 v8[2]; // [rsp+0h] [rbp-40h] BYREF
  char v9; // [rsp+10h] [rbp-30h]

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v9 = 0;
    v8[0] = off_47BFB70;
    v8[1] = google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, v8, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v8);
  }
  *(this + 5) = 0;
  v3 = operator new(8u);
  std::string::string(v3, ToolEvent_GetEntityInfoResult::_default_cppclass_);
  *(this + 3) = v3;
  v4 = google::protobuf::internal::empty_string_;
  v5 = operator new(8u);
  std::string::string(v5, v4);
  v6 = google::protobuf::internal::empty_string_;
  *(this + 4) = v5;
  v7 = operator new(8u);
  std::string::string(v7, v6);
  *(this + 5) = v7;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult  (line 2804, @0x0000000001b33a80, libserver.so)
// calls: ToolEvent_GetEntityInfoResult::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult, CNetMessagePB<-1, ToolEvent_GetEntityInfoResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::~CNetMessagePB, ToolEvent_GetEntityInfoResult_t::~ToolEvent_GetEntityInfoResult_t, CLoopModeGameToolHooks::~CLoopModeGameToolHooks, CNetMessagePB<-1, ToolEvent_GetEntityInfoResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult(
        ToolEvent_GetEntityInfoResult *const this)
{
  *this = off_3F79D90;
  ToolEvent_GetEntityInfoResult::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult  (line 2804, @0x0000000001b33ac0, libserver.so)
// calls: ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult, operator delete
void __fastcall ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult(
        ToolEvent_GetEntityInfoResult *const this)
{
  ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult(this);
  operator delete(this);
}


// ToolEvent_GetEntityInfoResult::SharedDtor  (line 2809, @0x0000000001b33910, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: ToolEvent_GetEntityInfoResult::~ToolEvent_GetEntityInfoResult
// globals: ToolEvent_GetEntityInfoResult::default_instance_
void __fastcall ToolEvent_GetEntityInfoResult::SharedDtor(ToolEvent_GetEntityInfoResult *const this)
{
  __int64 *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // edx
  int v19; // edx
  _BYTE v20[17]; // [rsp+Fh] [rbp-11h] BYREF

  v2 = *(this + 3);
  if ( v2 != 0 )
  {
    v3 = *v2;
    v4 = *v2 - 24;
    if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v14 = _InterlockedExchangeAdd((v4 + 16), 0xFFFFFFFF);
      }
      else
      {
        v17 = *(v3 - 8);
        *(v3 - 8) = v17 - 1;
        v14 = v17;
      }
      if ( v14 <= 0 )
        std::string::_Rep::_M_destroy(v4, v20);
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
        v16 = _InterlockedExchangeAdd((v7 + 16), 0xFFFFFFFF);
      }
      else
      {
        v19 = *(v6 - 8);
        *(v6 - 8) = v19 - 1;
        v16 = v19;
      }
      if ( v16 <= 0 )
        std::string::_Rep::_M_destroy(v7, v20);
    }
    operator delete(v5);
  }
  v8 = *(this + 5);
  if ( v8 != 0 )
  {
    v9 = *v8;
    v10 = *v8 - 24;
    if ( v10 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v15 = _InterlockedExchangeAdd((v10 + 16), 0xFFFFFFFF);
      }
      else
      {
        v18 = *(v9 - 8);
        *(v9 - 8) = v18 - 1;
        v15 = v18;
      }
      if ( v15 <= 0 )
        std::string::_Rep::_M_destroy(v10, v20);
    }
    operator delete(v8);
  }
  if ( this != ToolEvent_GetEntityInfoResult::default_instance_ )
  {
    v11 = *(this + 6);
    if ( v11 != 0 )
      (*(*v11 + 8LL))(v11);
    v12 = *(this + 7);
    if ( v12 != 0 )
      (*(*v12 + 8LL))(v12);
    v13 = *(this + 8);
    if ( v13 != 0 )
      (*(*v13 + 8LL))(v13);
  }
}


// ToolEvent_GetEntityInfoResult::SetCachedSize  (line 2820, @0x0000000001b2d330, libserver.so)
void __fastcall ToolEvent_GetEntityInfoResult::SetCachedSize(const ToolEvent_GetEntityInfoResult *const this, int size)
{
  *(this + 5) = size;
}


// ToolEvent_GetEntityInfoResult::descriptor  (line 2825, @0x0000000001b33ae0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_GetEntityInfoResult_descriptor_
const google::protobuf::Descriptor *__cdecl ToolEvent_GetEntityInfoResult::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ToolEvent_GetEntityInfoResult_descriptor_;
}


// ToolEvent_GetEntityInfoResult::default_instance  (line 2830, @0x0000000001b362f0, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ToolEvent_GetEntityInfoResult::default_instance_
const ToolEvent_GetEntityInfoResult *__cdecl ToolEvent_GetEntityInfoResult::default_instance()
{
  const ToolEvent_GetEntityInfoResult *result; // rax

  result = ToolEvent_GetEntityInfoResult::default_instance_;
  if ( ToolEvent_GetEntityInfoResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ToolEvent_GetEntityInfoResult::default_instance_;
  }
  return result;
}


// ToolEvent_GetEntityInfoResult::New  (line 2837, @0x0000000001b338d0, libserver.so)
// calls: operator new, ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult, operator delete, _Unwind_Resume
ToolEvent_GetEntityInfoResult *__fastcall ToolEvent_GetEntityInfoResult::New(
        const ToolEvent_GetEntityInfoResult *const this)
{
  ToolEvent_GetEntityInfoResult *v1; // rbx

  v1 = operator new(0x48u);
  ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult(v1);
  return v1;
}


// ToolEvent_GetEntityInfoResult::Clear  (line 2841, @0x0000000001b36be0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: CMsgVector::Clear, google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::assign(std::string const&), std::string::_M_mutate(ulong,ulong,ulong)
// globals: ToolEvent_GetEntityInfoResult::_default_cppclass_
void __fastcall ToolEvent_GetEntityInfoResult::Clear(ToolEvent_GetEntityInfoResult *const this)
{
  int v2; // eax
  CMsgVector *v3; // rdi
  CMsgVector *v4; // rdi
  bool v5; // zf
  CMsgVector *v6; // rdi

  v2 = *(this + 4);
  if ( (v2 & 0x3F) == 0 )
    goto LABEL_12;
  if ( (v2 & 1) != 0 )
  {
    std::string::assign(*(this + 3), ToolEvent_GetEntityInfoResult::_default_cppclass_);
    v2 = *(this + 4);
    if ( (v2 & 2) == 0 )
    {
LABEL_4:
      if ( (v2 & 4) == 0 )
        goto LABEL_5;
      goto LABEL_19;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_4;
  }
  std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
  v2 = *(this + 4);
  if ( (v2 & 4) == 0 )
  {
LABEL_5:
    if ( (v2 & 8) != 0 )
      goto LABEL_6;
    goto LABEL_8;
  }
LABEL_19:
  std::string::_M_mutate(*(this + 5), 0, *(**(this + 5) - 24LL), 0);
  v2 = *(this + 4);
  if ( (v2 & 8) != 0 )
  {
LABEL_6:
    v3 = *(this + 6);
    if ( v3 != 0 )
    {
      CMsgVector::Clear(v3);
      v2 = *(this + 4);
    }
  }
LABEL_8:
  if ( (v2 & 0x10) != 0 )
  {
    v4 = *(this + 7);
    if ( v4 != 0 )
    {
      CMsgVector::Clear(v4);
      v2 = *(this + 4);
    }
  }
  if ( (v2 & 0x20) != 0 )
  {
    v6 = *(this + 8);
    if ( v6 != 0 )
      CMsgVector::Clear(v6);
  }
LABEL_12:
  v5 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v5 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// ToolEvent_GetEntityInfoResult::MergePartialFromCodedStream  (line 2866, @0x0000000001b36ce0, libserver.so)  // inlines: Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CMsgVector>, ReadTagWithCutoff, ReadVarint32, mutable_classname, mutable_cppclass, mutable_maxs, mutable_mins, mutable_name, mutable_origin, set_has_classname, set_has_cppclass, set_has_maxs, set_has_mins, set_has_name, set_has_origin
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::PushLimit(int), CMsgVector::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// globals: jpt_1B36D41
bool __fastcall ToolEvent_GetEntityInfoResult::MergePartialFromCodedStream(
        ToolEvent_GetEntityInfoResult *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r13d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *i; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  google::protobuf::uint8 *v8; // rdx
  CMsgVector *v9; // rcx
  const google::protobuf::uint8 *v10; // rax
  int v11; // eax
  bool v12; // cc
  bool result; // al
  CMsgVector *v14; // rcx
  const google::protobuf::uint8 *v15; // rax
  int v16; // eax
  int v17; // eax
  CMsgVector *v18; // rcx
  const google::protobuf::uint8 *v19; // rax
  int v20; // eax
  int v21; // edx
  google::protobuf::uint32 TagFallback; // eax
  int recursion_depth; // eax
  char v24; // al
  char v25; // al
  char Varint32Fallback; // al
  int v27; // [rsp+4h] [rbp-4Ch]
  int v28; // [rsp+4h] [rbp-4Ch]
  int v29; // [rsp+4h] [rbp-4Ch]
  CMsgVector *v30; // [rsp+8h] [rbp-48h]
  CMsgVector *v31; // [rsp+8h] [rbp-48h]
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  CMsgVector *v33; // [rsp+8h] [rbp-48h]
  CMsgVector *v34; // [rsp+8h] [rbp-48h]
  CMsgVector *v35; // [rsp+8h] [rbp-48h]
  CMsgVector *v36; // [rsp+8h] [rbp-48h]
  CMsgVector *v37; // [rsp+8h] [rbp-48h]
  CMsgVector *v38; // [rsp+8h] [rbp-48h]
  CMsgVector *v39; // [rsp+8h] [rbp-48h]
  unsigned int v40[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = this + 8;
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
LABEL_2:
    if ( i > buffer )
    {
      v7 = *buffer;
      if ( v7 > 0 )
      {
        v8 = (buffer + 1);
        input->last_tag_ = v7;
        input->buffer_ = v8;
        break;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v7 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      break;
handle_unusual:
    if ( v7 == 0 )
      return 1;
LABEL_8:
    if ( (v7 & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v7, v3, i) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  switch ( v7 >> 3 )
  {
    case 1u:
      if ( v7 != 10 )
        goto handle_unusual;
      *(this + 4) |= 1u;
      if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v8) == 0 )
        return 0;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 18 )
        goto LABEL_2;
      v8 = (buffer + 1);
      input->buffer_ = v8;
parse_classname:
      *(this + 4) |= 2u;
      if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), v8) == 0 )
        return 0;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 26 )
        goto LABEL_2;
      v8 = (buffer + 1);
      input->buffer_ = v8;
parse_name:
      *(this + 4) |= 4u;
      if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 5), v8) == 0 )
        return 0;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 34 )
        goto LABEL_2;
      input->buffer_ = buffer + 1;
parse_origin:
      v9 = *(this + 6);
      *(this + 4) |= 8u;
      if ( v9 == 0 )
      {
        v39 = operator new(0x28u);
        CMsgVector::CMsgVector(v39);
        *(this + 6) = v39;
        v9 = v39;
      }
      v10 = input->buffer_;
      if ( v10 >= input->buffer_end_ || *v10 < 0 )
      {
        v36 = v9;
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v40);
        v9 = v36;
        if ( Varint32Fallback == 0 )
          return 0;
      }
      else
      {
        v40[0] = *v10;
        input->buffer_ = v10 + 1;
      }
      v11 = input->recursion_depth_ + 1;
      v12 = input->recursion_limit_ < v11;
      input->recursion_depth_ = v11;
      if ( v12 )
        return 0;
      v33 = v9;
      v29 = google::protobuf::io::CodedInputStream::PushLimit(input, v40[0]);
      if ( !CMsgVector::MergePartialFromCodedStream(v33, input) || !input->legitimate_message_end_ )
        return 0;
      google::protobuf::io::CodedInputStream::PopLimit(input, v29);
      recursion_depth = input->recursion_depth_;
      if ( recursion_depth > 0 )
        input->recursion_depth_ = recursion_depth - 1;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 42 )
        goto LABEL_2;
      input->buffer_ = buffer + 1;
parse_mins:
      v14 = *(this + 7);
      *(this + 4) |= 0x10u;
      if ( v14 == 0 )
      {
        v38 = operator new(0x28u);
        CMsgVector::CMsgVector(v38);
        *(this + 7) = v38;
        v14 = v38;
      }
      v15 = input->buffer_;
      if ( v15 >= input->buffer_end_ || *v15 < 0 )
      {
        v35 = v14;
        v25 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v40);
        v14 = v35;
        if ( v25 == 0 )
          return 0;
      }
      else
      {
        v40[0] = *v15;
        input->buffer_ = v15 + 1;
      }
      v16 = input->recursion_depth_ + 1;
      v12 = input->recursion_limit_ < v16;
      input->recursion_depth_ = v16;
      if ( v12 )
        return 0;
      v30 = v14;
      v27 = google::protobuf::io::CodedInputStream::PushLimit(input, v40[0]);
      if ( !CMsgVector::MergePartialFromCodedStream(v30, input) || !input->legitimate_message_end_ )
        return 0;
      google::protobuf::io::CodedInputStream::PopLimit(input, v27);
      v17 = input->recursion_depth_;
      if ( v17 > 0 )
        input->recursion_depth_ = v17 - 1;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 50 )
        goto LABEL_2;
      input->buffer_ = buffer + 1;
parse_maxs:
      v18 = *(this + 8);
      *(this + 4) |= 0x20u;
      if ( v18 == 0 )
      {
        v37 = operator new(0x28u);
        CMsgVector::CMsgVector(v37);
        *(this + 8) = v37;
        v18 = v37;
      }
      v19 = input->buffer_;
      if ( v19 >= input->buffer_end_ || *v19 < 0 )
      {
        v34 = v18;
        v24 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v40);
        v18 = v34;
        if ( v24 == 0 )
          return 0;
      }
      else
      {
        v40[0] = *v19;
        input->buffer_ = v19 + 1;
      }
      v20 = input->recursion_depth_ + 1;
      v12 = input->recursion_limit_ < v20;
      input->recursion_depth_ = v20;
      if ( v12 )
        return 0;
      v31 = v18;
      v28 = google::protobuf::io::CodedInputStream::PushLimit(input, v40[0]);
      if ( !CMsgVector::MergePartialFromCodedStream(v31, input) || !input->legitimate_message_end_ )
        return 0;
      legitimate_message_end = input->legitimate_message_end_;
      google::protobuf::io::CodedInputStream::PopLimit(input, v28);
      v21 = input->recursion_depth_;
      result = legitimate_message_end;
      if ( v21 > 0 )
        input->recursion_depth_ = v21 - 1;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer != i )
        goto LABEL_2;
      if ( input->buffer_size_after_limit_ == 0 && input->total_bytes_read_ != input->current_limit_ )
      {
        i = input->buffer_;
        goto LABEL_2;
      }
      input->last_tag_ = 0;
      input->legitimate_message_end_ = 1;
      return result;
    case 2u:
      if ( v7 != 18 )
        goto handle_unusual;
      goto parse_classname;
    case 3u:
      if ( v7 != 26 )
        goto handle_unusual;
      goto parse_name;
    case 4u:
      if ( v7 == 34 )
        goto parse_origin;
      if ( v7 == 0 )
        return 1;
      goto LABEL_8;
    case 5u:
      if ( v7 != 42 )
        goto handle_unusual;
      goto parse_mins;
    case 6u:
      if ( v7 != 50 )
        goto handle_unusual;
      goto parse_maxs;
    default:
      goto handle_unusual;
  }
}


// ToolEvent_GetEntityInfoResult::SerializeWithCachedSizes  (line 2987, @0x0000000001b2df90, libserver.so)  // inlines: empty, maxs, mins, origin
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
// globals: ToolEvent_GetEntityInfoResult::default_instance_
void __fastcall ToolEvent_GetEntityInfoResult::SerializeWithCachedSizes(
        const ToolEvent_GetEntityInfoResult *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  google::protobuf::FieldDescriptor *fields; // rsi
  __int64 v8; // rsi
  google::protobuf::OneofDescriptor *oneof_decls; // rsi
  _QWORD *v10; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2, *(this + 4), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 4) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 1, *(this + 5), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 8) != 0 )
  {
    fields = *(this + 6);
    if ( fields == 0 )
      fields = ToolEvent_GetEntityInfoResult::default_instance_->fields_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 2, fields, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x10) != 0 )
  {
    v8 = *(this + 7);
    if ( v8 == 0 )
      v8 = *&ToolEvent_GetEntityInfoResult::default_instance_->oneof_decl_count_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 3, v8, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x20) != 0 )
  {
    oneof_decls = *(this + 8);
    if ( oneof_decls == 0 )
      oneof_decls = ToolEvent_GetEntityInfoResult::default_instance_->oneof_decls_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_6, oneof_decls, output, v3);
  }
  v10 = *(this + 1);
  if ( v10 != 0 && v10[1] != *v10 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// ToolEvent_GetEntityInfoResult::SerializeWithCachedSizesToArray  (line 3045, @0x0000000001b37b20, libserver.so)  // inlines: GetCachedSize, WriteMessageNoVirtualToArray<CMsgVector>, WriteStringToArray, WriteTagToArray, WriteVarint32ToArray, empty, maxs, mins, origin
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), CMsgVector::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// globals: ToolEvent_GetEntityInfoResult::default_instance_
google::protobuf::uint8 *__fastcall ToolEvent_GetEntityInfoResult::SerializeWithCachedSizesToArray(
        const ToolEvent_GetEntityInfoResult *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::io::CodedOutputStream *v8; // rdi
  unsigned int *fields; // r12
  google::protobuf::io::CodedOutputStream *v10; // rdi
  google::protobuf::uint8 *v11; // rsi
  unsigned int *v12; // r12
  google::protobuf::io::CodedOutputStream *v13; // rdi
  google::protobuf::uint8 *v14; // rsi
  unsigned __int8 *v15; // rdx
  unsigned int *oneof_decls; // r12
  google::protobuf::io::CodedOutputStream *v17; // rdi
  google::protobuf::uint8 *v18; // rsi
  __int64 v19; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 3);
    v6 = (target + 1);
    HIBYTE(v6[-1]._M_dataplus._M_p) = 10;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v5, v6, v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v7 = *(this + 4);
    *result = 18;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v7, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 5);
    *result = 26;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v8, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    fields = *(this + 6);
    if ( fields == 0 )
    {
      v4 = ToolEvent_GetEntityInfoResult::default_instance_;
      fields = ToolEvent_GetEntityInfoResult::default_instance_->fields_;
    }
    *result = 34;
    v10 = fields[5];
    if ( v10 > 0x7F )
    {
      v11 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, result + 1, v4);
    }
    else
    {
      result[1] = v10;
      v11 = result + 2;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(fields, v11);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v12 = *(this + 7);
    if ( v12 == 0 )
    {
      v4 = ToolEvent_GetEntityInfoResult::default_instance_;
      v12 = *&ToolEvent_GetEntityInfoResult::default_instance_->oneof_decl_count_;
    }
    *result = 42;
    v13 = v12[5];
    if ( v13 > 0x7F )
    {
      v14 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v13, result + 1, v4);
    }
    else
    {
      result[1] = v13;
      v14 = result + 2;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(v12, v14);
    LODWORD(v4) = *(this + 4);
  }
  v15 = (v4 & 0x20);
  if ( v15 != 0 )
  {
    oneof_decls = *(this + 8);
    if ( oneof_decls == 0 )
    {
      v15 = ToolEvent_GetEntityInfoResult::default_instance_;
      oneof_decls = ToolEvent_GetEntityInfoResult::default_instance_->oneof_decls_;
    }
    *result = 50;
    v17 = oneof_decls[5];
    if ( v17 > 0x7F )
    {
      v18 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v17, result + 1, v15);
    }
    else
    {
      result[1] = v17;
      v18 = result + 2;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(oneof_decls, v18);
  }
  v19 = *(this + 1);
  if ( v19 != 0 && *(v19 + 8) != *v19 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v19);
  return result;
}


// ToolEvent_GetEntityInfoResult::ByteSize  (line 3110, @0x0000000001b38070, libserver.so)  // inlines: LengthDelimitedSize, MessageSizeNoVirtual<CMsgVector>, StringSize, VarintSize32, empty, maxs, mins, origin, size
// calls: CMsgVector::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// globals: ToolEvent_GetEntityInfoResult::default_instance_
int __fastcall ToolEvent_GetEntityInfoResult::ByteSize(const ToolEvent_GetEntityInfoResult *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // edx
  google::protobuf::FieldDescriptor *fields; // rdi
  unsigned int v6; // esi
  unsigned int v7; // r13d
  int v8; // eax
  const CMsgVector *v9; // rdi
  unsigned int v10; // esi
  unsigned int v11; // r13d
  int v12; // eax
  __int64 v13; // rax
  google::protobuf::OneofDescriptor *oneof_decls; // rdi
  unsigned int v16; // esi
  unsigned int v17; // r13d
  int v18; // eax
  _QWORD *v19; // r13
  google::protobuf::io::CodedOutputStream *v20; // rdi
  int v21; // eax
  int v22; // ecx
  _QWORD *v23; // rbx
  google::protobuf::io::CodedOutputStream *v24; // rdi
  int v25; // eax
  int v26; // ecx
  _QWORD *v27; // r13
  google::protobuf::io::CodedOutputStream *v28; // rdi
  int v29; // eax
  int v30; // ecx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_18;
  if ( (v4 & 1) != 0 )
  {
    v23 = *(this + 3);
    v24 = *(*v23 - 24LL);
    v25 = 1;
    v26 = v24;
    if ( v24 > 0x7F )
    {
      v25 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v24, v1);
      v26 = *(*v23 - 24LL);
      v4 = *(this + 4);
    }
    v3 = v25 + v26 + 1;
    if ( (v4 & 2) == 0 )
    {
LABEL_4:
      if ( (v4 & 4) == 0 )
        goto LABEL_5;
LABEL_27:
      v19 = *(this + 5);
      v20 = *(*v19 - 24LL);
      v21 = 1;
      v22 = v20;
      if ( v20 > 0x7F )
      {
        v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, v1);
        v22 = *(*v19 - 24LL);
        v4 = *(this + 4);
      }
      v3 += v21 + v22 + 1;
      if ( (v4 & 8) == 0 )
        goto LABEL_11;
      goto LABEL_6;
    }
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_4;
  }
  v27 = *(this + 4);
  v28 = *(*v27 - 24LL);
  v29 = 1;
  v30 = v28;
  if ( v28 > 0x7F )
  {
    v29 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v28, v1);
    v30 = *(*v27 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v29 + v30 + 1;
  if ( (v4 & 4) != 0 )
    goto LABEL_27;
LABEL_5:
  if ( (v4 & 8) != 0 )
  {
LABEL_6:
    fields = *(this + 6);
    if ( fields == 0 )
      fields = ToolEvent_GetEntityInfoResult::default_instance_->fields_;
    v7 = CMsgVector::ByteSize(fields);
    v8 = 1;
    if ( v7 > 0x7F )
      v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v6);
    v4 = *(this + 4);
    v3 += v7 + v8 + 1;
  }
LABEL_11:
  if ( (v4 & 0x10) != 0 )
  {
    v9 = *(this + 7);
    if ( v9 == 0 )
      v9 = *&ToolEvent_GetEntityInfoResult::default_instance_->oneof_decl_count_;
    v11 = CMsgVector::ByteSize(v9);
    v12 = 1;
    if ( v11 > 0x7F )
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v10);
    v4 = *(this + 4);
    v3 += v11 + v12 + 1;
  }
  if ( (v4 & 0x20) != 0 )
  {
    oneof_decls = *(this + 8);
    if ( oneof_decls == 0 )
      oneof_decls = ToolEvent_GetEntityInfoResult::default_instance_->oneof_decls_;
    v17 = CMsgVector::ByteSize(oneof_decls);
    v18 = 1;
    if ( v17 > 0x7F )
      v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, v16);
    v3 += v17 + v18 + 1;
  }
LABEL_18:
  v13 = *(this + 1);
  if ( v13 != 0 && *(v13 + 8) != *v13 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v13);
  *(this + 5) = v3;
  return v3;
}


// ToolEvent_GetEntityInfoResult::MergeFrom  (line 3168, @0x0000000001b33e60, libserver.so)  // inlines: dynamic_cast_if_available<const ToolEvent_GetEntityInfoResult*, const google::protobuf::Message*>
// calls: __dynamic_cast, ToolEvent_GetEntityInfoResult::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ToolEvent_GetEntityInfoResult
void __fastcall ToolEvent_GetEntityInfoResult::MergeFrom(
        ToolEvent_GetEntityInfoResult *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ToolEvent_GetEntityInfoResult *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      3169);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'ToolEvent_GetEntityInfoResult,
               0)) != 0 )
  {
    ToolEvent_GetEntityInfoResult::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ToolEvent_GetEntityInfoResult::MergeFrom  (line 3180, @0x0000000001b33b70, libserver.so)  // inlines: maxs, mins, mutable_maxs, mutable_mins, mutable_origin, origin, set_classname, set_cppclass, set_has_classname, set_has_cppclass, set_has_maxs, set_has_mins, set_has_name, set_has_origin, set_name
// calls: CMsgVector::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CMsgVector::CMsgVector, _Unwind_Resume, operator delete
// callers: ToolEvent_GetEntityInfoResult::ToolEvent_GetEntityInfoResult, ToolEvent_GetEntityInfoResult::MergeFrom, ToolEvent_GetEntityInfoResult::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: ToolEvent_GetEntityInfoResult::default_instance_
void __fastcall ToolEvent_GetEntityInfoResult::MergeFrom(
        ToolEvent_GetEntityInfoResult *const this,
        const ToolEvent_GetEntityInfoResult *const from)
{
  int v4; // eax
  google::protobuf::FieldDescriptor *fields; // r13
  CMsgVector *v6; // rdi
  const CMsgVector *v7; // r13
  CMsgVector *v8; // rdi
  google::protobuf::OneofDescriptor *oneof_decls; // r13
  CMsgVector *v10; // rdi
  const std::string *v11; // rsi
  std::string *v12; // rdi
  const std::string *v13; // rsi
  std::string *v14; // rdi
  const std::string *v15; // rsi
  std::string *v16; // rdi
  __int64 v17; // rax
  CMsgVector *v18; // r14
  CMsgVector *v19; // r14
  CMsgVector *v20; // r14
  char v21; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v22; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      3181);
    v17 = google::protobuf::internal::LogMessage::operator<<(&v22, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v21, v17);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v13 = *(from + 3);
      v14 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v14, v13);
      v4 = *(from + 4);
      if ( (v4 & 2) == 0 )
      {
LABEL_6:
        if ( (v4 & 4) == 0 )
          goto LABEL_7;
        goto LABEL_26;
      }
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v15 = *(from + 4);
    v16 = *(this + 4);
    *(this + 4) |= 2u;
    std::string::assign(v16, v15);
    v4 = *(from + 4);
    if ( (v4 & 4) == 0 )
    {
LABEL_7:
      if ( (v4 & 8) != 0 )
      {
LABEL_8:
        fields = *(from + 6);
        if ( fields == 0 )
          fields = ToolEvent_GetEntityInfoResult::default_instance_->fields_;
        v6 = *(this + 6);
        *(this + 4) |= 8u;
        if ( v6 == 0 )
        {
          v20 = operator new(0x28u);
          CMsgVector::CMsgVector(v20);
          *(this + 6) = v20;
          v6 = v20;
        }
        CMsgVector::MergeFrom(v6, fields);
        v4 = *(from + 4);
      }
LABEL_13:
      if ( (v4 & 0x10) != 0 )
      {
        v7 = *(from + 7);
        if ( v7 == 0 )
          v7 = *&ToolEvent_GetEntityInfoResult::default_instance_->oneof_decl_count_;
        v8 = *(this + 7);
        *(this + 4) |= 0x10u;
        if ( v8 == 0 )
        {
          v19 = operator new(0x28u);
          CMsgVector::CMsgVector(v19);
          *(this + 7) = v19;
          v8 = v19;
        }
        CMsgVector::MergeFrom(v8, v7);
        v4 = *(from + 4);
      }
      if ( (v4 & 0x20) != 0 )
      {
        oneof_decls = *(from + 8);
        if ( oneof_decls == 0 )
          oneof_decls = ToolEvent_GetEntityInfoResult::default_instance_->oneof_decls_;
        v10 = *(this + 8);
        *(this + 4) |= 0x20u;
        if ( v10 == 0 )
        {
          v18 = operator new(0x28u);
          CMsgVector::CMsgVector(v18);
          *(this + 8) = v18;
          v10 = v18;
        }
        CMsgVector::MergeFrom(v10, oneof_decls);
      }
      goto LABEL_25;
    }
LABEL_26:
    v11 = *(from + 5);
    v12 = *(this + 5);
    *(this + 4) |= 4u;
    std::string::assign(v12, v11);
    v4 = *(from + 4);
    if ( (v4 & 8) != 0 )
      goto LABEL_8;
    goto LABEL_13;
  }
LABEL_25:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// ToolEvent_GetEntityInfoResult::CopyFrom  (line 3205, @0x0000000001b2d340, libserver.so)
void __fastcall ToolEvent_GetEntityInfoResult::CopyFrom(
        ToolEvent_GetEntityInfoResult *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ToolEvent_GetEntityInfoResult::CopyFrom  (line 3211, @0x0000000001b33f40, libserver.so)
// calls: ToolEvent_GetEntityInfoResult::MergeFrom
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInfoResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall ToolEvent_GetEntityInfoResult::CopyFrom(
        ToolEvent_GetEntityInfoResult *const this,
        const ToolEvent_GetEntityInfoResult *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ToolEvent_GetEntityInfoResult::MergeFrom(this, from);
  }
}


// ToolEvent_GetEntityInfoResult::IsInitialized  (line 3217, @0x0000000001b2d380, libserver.so)
bool __fastcall ToolEvent_GetEntityInfoResult::IsInitialized(const ToolEvent_GetEntityInfoResult *const this)
{
  return 1;
}


// ToolEvent_GetEntityInfoResult::Swap  (line 3222, @0x0000000001b33f80, libserver.so)  // inlines: Swap, swap<CMsgVector*>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall ToolEvent_GetEntityInfoResult::Swap(
        ToolEvent_GetEntityInfoResult *const this,
        ToolEvent_GetEntityInfoResult *other)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

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
    v5 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v5;
    v6 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v6;
    v7 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v7;
    LODWORD(v7) = *(this + 4);
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


// ToolEvent_GetEntityInfoResult::GetMetadata  (line 3236, @0x0000000001b2f340, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_GetEntityInfoResult_descriptor_, `anonymous namespace'::ToolEvent_GetEntityInfoResult_reflection_
google::protobuf::Metadata __fastcall ToolEvent_GetEntityInfoResult::GetMetadata(
        const ToolEvent_GetEntityInfoResult *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ToolEvent_GetEntityInfoResult_descriptor_;
  result.reflection = `anonymous namespace'::ToolEvent_GetEntityInfoResult_reflection_;
  return result;
}


// ToolEvent_GetEntityInputs::ToolEvent_GetEntityInputs  (line 3252, @0x0000000001b34020, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: ToolEvent_GetEntityInputs::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, ToolEvent_GetEntityInputs, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, ToolEvent_GetEntityInputs, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_GetEntityInputs::ToolEvent_GetEntityInputs(ToolEvent_GetEntityInputs *const this)
{
  *this = off_3F79E50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 28) = 0;
  *(this + 4) = 0;
}


// ToolEvent_GetEntityInputs::InitAsDefaultInstance  (line 3258, @0x0000000001b340b0, libserver.so)
void __fastcall ToolEvent_GetEntityInputs::InitAsDefaultInstance(ToolEvent_GetEntityInputs *const this)
{
  ;
}


// ToolEvent_GetEntityInputs::ToolEvent_GetEntityInputs  (line 3261, @0x0000000001b34250, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_GetEntityInputs::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInputs, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall ToolEvent_GetEntityInputs::ToolEvent_GetEntityInputs(
        ToolEvent_GetEntityInputs *const this,
        const ToolEvent_GetEntityInputs *const from)
{
  *this = off_3F79E50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 28) = 0;
  *(this + 4) = 0;
  ToolEvent_GetEntityInputs::MergeFrom(this, from);
}


// ToolEvent_GetEntityInputs::SharedCtor  (line 3268, @0x0000000001b340c0, libserver.so)  // inlines: memset
void __fastcall ToolEvent_GetEntityInputs::SharedCtor(ToolEvent_GetEntityInputs *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 28) = 0;
  *(this + 4) = 0;
}


// ToolEvent_GetEntityInputs::~ToolEvent_GetEntityInputs  (line 3275, @0x0000000001b2d7a0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInputs, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_GetEntityInputs::~ToolEvent_GetEntityInputs(ToolEvent_GetEntityInputs *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79E50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// ToolEvent_GetEntityInputs::~ToolEvent_GetEntityInputs  (line 3275, @0x0000000001b2d7d0, libserver.so)  // inlines: ~ToolEvent_GetEntityInputs
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall ToolEvent_GetEntityInputs::~ToolEvent_GetEntityInputs(ToolEvent_GetEntityInputs *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F79E50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// ToolEvent_GetEntityInputs::SharedDtor  (line 3280, @0x0000000001b340e0, libserver.so)
void __fastcall ToolEvent_GetEntityInputs::SharedDtor(ToolEvent_GetEntityInputs *const this)
{
  ;
}


// ToolEvent_GetEntityInputs::SetCachedSize  (line 3285, @0x0000000001b2d390, libserver.so)
void __fastcall ToolEvent_GetEntityInputs::SetCachedSize(const ToolEvent_GetEntityInputs *const this, int size)
{
  *(this + 5) = size;
}


// ToolEvent_GetEntityInputs::descriptor  (line 3290, @0x0000000001b340f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_GetEntityInputs_descriptor_
const google::protobuf::Descriptor *__cdecl ToolEvent_GetEntityInputs::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ToolEvent_GetEntityInputs_descriptor_;
}


// ToolEvent_GetEntityInputs::default_instance  (line 3295, @0x0000000001b36320, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ToolEvent_GetEntityInputs::default_instance_
const ToolEvent_GetEntityInputs *__cdecl ToolEvent_GetEntityInputs::default_instance()
{
  const ToolEvent_GetEntityInputs *result; // rax

  result = ToolEvent_GetEntityInputs::default_instance_;
  if ( ToolEvent_GetEntityInputs::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ToolEvent_GetEntityInputs::default_instance_;
  }
  return result;
}


// ToolEvent_GetEntityInputs::New  (line 3302, @0x0000000001b34070, libserver.so)
// calls: operator new, ToolEvent_GetEntityInputs::ToolEvent_GetEntityInputs, operator delete, _Unwind_Resume
ToolEvent_GetEntityInputs *__fastcall ToolEvent_GetEntityInputs::New(const ToolEvent_GetEntityInputs *const this)
{
  ToolEvent_GetEntityInputs *v1; // rbx

  v1 = operator new(0x20u);
  ToolEvent_GetEntityInputs::ToolEvent_GetEntityInputs(v1);
  return v1;
}


// ToolEvent_GetEntityInputs::Clear  (line 3306, @0x0000000001b2da10, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall ToolEvent_GetEntityInputs::Clear(ToolEvent_GetEntityInputs *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  v2[20] = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// ToolEvent_GetEntityInputs::MergePartialFromCodedStream  (line 3326, @0x0000000001b301f0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, set_has_clientsideentity, set_has_ehandle
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall ToolEvent_GetEntityInputs::MergePartialFromCodedStream(
        ToolEvent_GetEntityInputs *const this,
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
  __int64 v15; // rax
  unsigned int v16[2]; // [rsp+8h] [rbp-28h] BYREF

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
      if ( v9 >> 3 != 1 )
        break;
      if ( v9 != 8 )
        goto handle_unusual;
      v12 = input->buffer_;
      if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v16);
        if ( !result )
          return result;
        v13 = v16[0];
      }
      else
      {
        input->buffer_ = v12 + 1;
      }
      *(this + 4) |= 1u;
      *(this + 6) = v13;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 16 )
      {
        v14 = buffer + 1;
        input->buffer_ = v14;
        goto parse_clientsideentity;
      }
    }
    if ( v9 >> 3 != 2 || v9 != 16 )
      break;
    v14 = input->buffer_;
    buffer_end = input->buffer_end_;
parse_clientsideentity:
    if ( buffer_end <= v14 || ((v15 = *v14) & 0x80u) != 0LL )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v16);
      if ( !result )
        return result;
      v15 = *v16;
    }
    else
    {
      input->buffer_ = v14 + 1;
    }
    *(this + 28) = v15 != 0;
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
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// ToolEvent_GetEntityInputs::SerializeWithCachedSizes  (line 3387, @0x0000000001b2e420, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall ToolEvent_GetEntityInputs::SerializeWithCachedSizes(
        const ToolEvent_GetEntityInputs *const this,
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
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_2, *(this + 28), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_4;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 6), output, v3);
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


// ToolEvent_GetEntityInputs::SerializeWithCachedSizesToArray  (line 3407, @0x0000000001b2f000, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall ToolEvent_GetEntityInputs::SerializeWithCachedSizesToArray(
        const ToolEvent_GetEntityInputs *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 v6; // al
  __int64 v7; // rax

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
    v6 = *(this + 28);
    target += 2;
    *(target - 2) = 16;
    *(target - 1) = v6;
  }
  v7 = *(this + 1);
  if ( v7 == 0 || *(v7 + 8) == *v7 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v7);
}


// ToolEvent_GetEntityInputs::ByteSize  (line 3428, @0x0000000001b2ebe0, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall ToolEvent_GetEntityInputs::ByteSize(const ToolEvent_GetEntityInputs *const this)
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
      if ( v8 < 0 )
      {
        LOBYTE(v5) = v4;
        v3 = 11;
      }
      else
      {
        LOBYTE(v3) = 2;
        if ( v8 > 0x7F )
        {
          v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
          v5 = *(this + 4);
          v3 = v9 + 1;
        }
      }
    }
    if ( (v5 & 2) != 0 )
      v3 += 2;
  }
  v6 = *(this + 1);
  if ( v6 != 0 && v6[1] != *v6 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// ToolEvent_GetEntityInputs::MergeFrom  (line 3456, @0x0000000001b342d0, libserver.so)  // inlines: dynamic_cast_if_available<const ToolEvent_GetEntityInputs*, const google::protobuf::Message*>
// calls: __dynamic_cast, ToolEvent_GetEntityInputs::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ToolEvent_GetEntityInputs
void __fastcall ToolEvent_GetEntityInputs::MergeFrom(
        ToolEvent_GetEntityInputs *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ToolEvent_GetEntityInputs *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      3457);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'ToolEvent_GetEntityInputs, 0)) != 0 )
  {
    ToolEvent_GetEntityInputs::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ToolEvent_GetEntityInputs::MergeFrom  (line 3468, @0x0000000001b34180, libserver.so)  // inlines: set_clientsideentity, set_ehandle, set_has_clientsideentity, set_has_ehandle
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: ToolEvent_GetEntityInputs::ToolEvent_GetEntityInputs, ToolEvent_GetEntityInputs::MergeFrom, ToolEvent_GetEntityInputs::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall ToolEvent_GetEntityInputs::MergeFrom(
        ToolEvent_GetEntityInputs *const this,
        const ToolEvent_GetEntityInputs *const from)
{
  int v4; // eax
  int v5; // eax
  char v6; // al
  __int64 v7; // rax
  char v8; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      3469);
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
      v6 = *(from + 28);
      *(this + 4) |= 2u;
      *(this + 28) = v6;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// ToolEvent_GetEntityInputs::CopyFrom  (line 3481, @0x0000000001b2d3a0, libserver.so)
void __fastcall ToolEvent_GetEntityInputs::CopyFrom(
        ToolEvent_GetEntityInputs *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ToolEvent_GetEntityInputs::CopyFrom  (line 3487, @0x0000000001b343b0, libserver.so)
// calls: ToolEvent_GetEntityInputs::MergeFrom
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInputs, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall ToolEvent_GetEntityInputs::CopyFrom(
        ToolEvent_GetEntityInputs *const this,
        const ToolEvent_GetEntityInputs *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ToolEvent_GetEntityInputs::MergeFrom(this, from);
  }
}


// ToolEvent_GetEntityInputs::IsInitialized  (line 3493, @0x0000000001b2d3e0, libserver.so)
bool __fastcall ToolEvent_GetEntityInputs::IsInitialized(const ToolEvent_GetEntityInputs *const this)
{
  return 1;
}


// ToolEvent_GetEntityInputs::Swap  (line 3498, @0x0000000001b343f0, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall ToolEvent_GetEntityInputs::Swap(
        ToolEvent_GetEntityInputs *const this,
        ToolEvent_GetEntityInputs *other)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    LOBYTE(v2) = *(this + 28);
    *(this + 28) = *(other + 28);
    *(other + 28) = v2;
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


// ToolEvent_GetEntityInputs::GetMetadata  (line 3508, @0x0000000001b2f3e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_GetEntityInputs_descriptor_, `anonymous namespace'::ToolEvent_GetEntityInputs_reflection_
google::protobuf::Metadata __fastcall ToolEvent_GetEntityInputs::GetMetadata(
        const ToolEvent_GetEntityInputs *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ToolEvent_GetEntityInputs_descriptor_;
  result.reflection = `anonymous namespace'::ToolEvent_GetEntityInputs_reflection_;
  return result;
}


// ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult  (line 3523, @0x0000000001b344d0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_GetEntityInputsResult::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: ToolEvent_GetEntityInputsResult::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, ToolEvent_GetEntityInputsResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CLoopModeGameToolHooks::CLoopModeGameToolHooks, CNetMessagePB<-1, ToolEvent_GetEntityInputsResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult(
        ToolEvent_GetEntityInputsResult *const this)
{
  *this = off_3F79F10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  ToolEvent_GetEntityInputsResult::SharedCtor(this);
}


// ToolEvent_GetEntityInputsResult::InitAsDefaultInstance  (line 3529, @0x0000000001b34440, libserver.so)
void __fastcall ToolEvent_GetEntityInputsResult::InitAsDefaultInstance(ToolEvent_GetEntityInputsResult *const this)
{
  ;
}


// ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult  (line 3532, @0x0000000001b347e0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_GetEntityInputsResult::SharedCtor, ToolEvent_GetEntityInputsResult::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInputsResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult(
        ToolEvent_GetEntityInputsResult *const this,
        const ToolEvent_GetEntityInputsResult *const from)
{
  *this = off_3F79F10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  ToolEvent_GetEntityInputsResult::SharedCtor(this);
  ToolEvent_GetEntityInputsResult::MergeFrom(this, from);
}


// ToolEvent_GetEntityInputsResult::SharedCtor  (line 3539, @0x0000000001b34450, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult
void __fastcall ToolEvent_GetEntityInputsResult::SharedCtor(ToolEvent_GetEntityInputsResult *const this)
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
  *(this + 4) = 0;
}


// ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult  (line 3545, @0x0000000001b2e6d0, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult, CNetMessagePB<-1, ToolEvent_GetEntityInputsResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::~CNetMessagePB, ToolEvent_GetEntityInputsResult_t::~ToolEvent_GetEntityInputsResult_t, CLoopModeGameToolHooks::~CLoopModeGameToolHooks, CNetMessagePB<-1, ToolEvent_GetEntityInputsResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult(
        ToolEvent_GetEntityInputsResult *const this)
{
  *this = off_3F79F10;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult  (line 3545, @0x0000000001b2e710, libserver.so)
// calls: ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult, operator delete
void __fastcall ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult(
        ToolEvent_GetEntityInputsResult *const this)
{
  ToolEvent_GetEntityInputsResult::~ToolEvent_GetEntityInputsResult(this);
  operator delete(this);
}


// ToolEvent_GetEntityInputsResult::SharedDtor  (line 3550, @0x0000000001b345a0, libserver.so)
void __fastcall ToolEvent_GetEntityInputsResult::SharedDtor(ToolEvent_GetEntityInputsResult *const this)
{
  ;
}


// ToolEvent_GetEntityInputsResult::SetCachedSize  (line 3555, @0x0000000001b2d3f0, libserver.so)
void __fastcall ToolEvent_GetEntityInputsResult::SetCachedSize(
        const ToolEvent_GetEntityInputsResult *const this,
        int size)
{
  *(this + 5) = size;
}


// ToolEvent_GetEntityInputsResult::descriptor  (line 3560, @0x0000000001b345b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_GetEntityInputsResult_descriptor_
const google::protobuf::Descriptor *__cdecl ToolEvent_GetEntityInputsResult::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ToolEvent_GetEntityInputsResult_descriptor_;
}


// ToolEvent_GetEntityInputsResult::default_instance  (line 3565, @0x0000000001b36350, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ToolEvent_GetEntityInputsResult::default_instance_
const ToolEvent_GetEntityInputsResult *__cdecl ToolEvent_GetEntityInputsResult::default_instance()
{
  const ToolEvent_GetEntityInputsResult *result; // rax

  result = ToolEvent_GetEntityInputsResult::default_instance_;
  if ( ToolEvent_GetEntityInputsResult::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ToolEvent_GetEntityInputsResult::default_instance_;
  }
  return result;
}


// ToolEvent_GetEntityInputsResult::New  (line 3572, @0x0000000001b34560, libserver.so)
// calls: operator new, ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult, operator delete, _Unwind_Resume
ToolEvent_GetEntityInputsResult *__fastcall ToolEvent_GetEntityInputsResult::New(
        const ToolEvent_GetEntityInputsResult *const this)
{
  ToolEvent_GetEntityInputsResult *v1; // rbx

  v1 = operator new(0x30u);
  ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult(v1);
  return v1;
}


// ToolEvent_GetEntityInputsResult::Clear  (line 3576, @0x0000000001b2e730, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, clear, memset, size
// calls: std::string::_M_mutate(ulong,ulong,ulong), google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall ToolEvent_GetEntityInputsResult::Clear(ToolEvent_GetEntityInputsResult *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  std::string *v4; // rdi
  bool v5; // zf

  v2 = 0;
  v3 = 0;
  while ( v3 < *(this + 8) )
  {
    ++v3;
    v4 = *(*(this + 3) + v2);
    v2 += 8;
    std::string::_M_mutate(v4, 0, *(v4->_M_dataplus._M_p - 3), 0);
  }
  v5 = *(this + 1) == 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  if ( !v5 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// ToolEvent_GetEntityInputsResult::MergePartialFromCodedStream  (line 3582, @0x0000000001b309c0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, add_input_list
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::StringTypeHandlerBase::New(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
bool __fastcall ToolEvent_GetEntityInputsResult::MergePartialFromCodedStream(
        ToolEvent_GetEntityInputsResult *const this,
        google::protobuf::io::CodedInputStream *input)
{
  ToolEvent_GetEntityInputsResult *v2; // r14
  google::protobuf::internal::RepeatedPtrFieldBase *v3; // r13
  unsigned int v4; // r12d
  const google::protobuf::uint8 *buffer; // rcx
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  google::protobuf::UnknownFieldSet *v9; // rcx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  google::protobuf::io::CodedInputStream *v12; // rax
  std::string *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  std::string *v17; // rdx

  v2 = this;
  v3 = (this + 24);
  v4 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
      goto LABEL_11;
LABEL_3:
    v8 = *buffer;
    if ( v8 <= 0 )
    {
LABEL_11:
      while ( 1 )
      {
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
        if ( google::protobuf::internal::WireFormat::SkipField(input, v8, v4, v9) == 0 )
          return 0;
        buffer = input->buffer_;
        if ( input->buffer_end_ > buffer )
          goto LABEL_3;
      }
    }
    else
    {
      v9 = (buffer + 1);
      input->last_tag_ = v8;
      input->buffer_ = v9;
    }
    if ( v8 >> 3 != 1 || v8 != 10 )
      break;
    while ( 1 )
    {
      v15 = *(v2 + 8);
      v16 = *(v2 + 9);
      if ( v15 >= v16 )
      {
        if ( v16 == *(v2 + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v3, v16 + 1);
        v12 = google::protobuf::internal::StringTypeHandlerBase::New(this);
        v13 = *(v2 + 8);
        v14 = *(v2 + 3);
        ++*(v2 + 9);
        *(v2 + 8) = v13 + 1;
        *(v14 + 8LL * v13) = v12;
        result = google::protobuf::internal::WireFormatLite::ReadString(input, v12, v13);
        if ( !result )
          return 0;
      }
      else
      {
        v17 = *(v2 + 3);
        *(v2 + 8) = v15 + 1;
        result = google::protobuf::internal::WireFormatLite::ReadString(input, v17[v15]._M_dataplus._M_p, v17);
        if ( !result )
          return 0;
      }
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer >= buffer_end || *buffer != 10 )
        break;
      input->buffer_ = buffer + 1;
    }
    if ( buffer == buffer_end )
    {
      if ( input->buffer_size_after_limit_ != 0 || (this = input->current_limit_, input->total_bytes_read_ == this) )
      {
        input->last_tag_ = 0;
        input->legitimate_message_end_ = 1;
        return result;
      }
      buffer_end = input->buffer_;
    }
  }
  if ( v8 != 0 )
    goto LABEL_8;
  return 1;
}


// ToolEvent_GetEntityInputsResult::SerializeWithCachedSizes  (line 3633, @0x0000000001b2e5e0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, empty, input_list
// calls: google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall ToolEvent_GetEntityInputsResult::SerializeWithCachedSizes(
        const ToolEvent_GetEntityInputsResult *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // rbx
  _QWORD *v7; // rax

  for ( i = 0; i < *(this + 8); ++i )
    google::protobuf::internal::WireFormatLite::WriteString(&loc_0 + 1, *(*(this + 3) + 8 * i), output, v3);
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// ToolEvent_GetEntityInputsResult::SerializeWithCachedSizesToArray  (line 3653, @0x0000000001b2e810, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, WriteStringToArray, WriteTagToArray, empty, input_list
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall ToolEvent_GetEntityInputsResult::SerializeWithCachedSizesToArray(
        const ToolEvent_GetEntityInputsResult *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  __int64 v4; // r12
  int v5; // ebx
  unsigned __int8 *v6; // rdx
  google::protobuf::io::CodedOutputStream *v7; // rdi
  __int64 v8; // rdx

  result = target;
  if ( *(this + 8) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(this + 3);
      ++v5;
      v7 = *&v6[v4];
      *result = 10;
      v4 += 8;
      result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v7, (result + 1), v6);
    }
    while ( v5 < *(this + 8) );
  }
  v8 = *(this + 1);
  if ( v8 != 0 && *(v8 + 8) != *v8 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v8);
  return result;
}


// ToolEvent_GetEntityInputsResult::ByteSize  (line 3674, @0x0000000001b2ece0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, StringSize, VarintSize32, empty, input_list, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall ToolEvent_GetEntityInputsResult::ByteSize(const ToolEvent_GetEntityInputsResult *const this)
{
  unsigned int v1; // esi
  int v3; // r13d
  __int64 v4; // r12
  int v5; // ebx
  _QWORD *v6; // r15
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax

  v3 = *(this + 8);
  if ( v3 > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(*(this + 3) + v4);
      v7 = *(*v6 - 24LL);
      v8 = 1;
      v9 = v7;
      if ( v7 > 0x7F )
      {
        v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
        v9 = *(*v6 - 24LL);
      }
      ++v5;
      v4 += 8;
      v3 += v9 + v8;
    }
    while ( v5 < *(this + 8) );
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v10);
  *(this + 5) = v3;
  return v3;
}


// ToolEvent_GetEntityInputsResult::MergeFrom  (line 3695, @0x0000000001b34880, libserver.so)  // inlines: dynamic_cast_if_available<const ToolEvent_GetEntityInputsResult*, const google::protobuf::Message*>
// calls: __dynamic_cast, ToolEvent_GetEntityInputsResult::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ToolEvent_GetEntityInputsResult
void __fastcall ToolEvent_GetEntityInputsResult::MergeFrom(
        ToolEvent_GetEntityInputsResult *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ToolEvent_GetEntityInputsResult *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      3696);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'ToolEvent_GetEntityInputsResult,
               0)) != 0 )
  {
    ToolEvent_GetEntityInputsResult::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ToolEvent_GetEntityInputsResult::MergeFrom  (line 3707, @0x0000000001b34640, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, operator=
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::internal::StringTypeHandlerBase::New(void), std::string::assign(std::string const&), google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: ToolEvent_GetEntityInputsResult::ToolEvent_GetEntityInputsResult, ToolEvent_GetEntityInputsResult::MergeFrom, ToolEvent_GetEntityInputsResult::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall ToolEvent_GetEntityInputsResult::MergeFrom(
        ToolEvent_GetEntityInputsResult *const this,
        const ToolEvent_GetEntityInputsResult *const from)
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
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v18; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v18,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      3708);
    v15 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v17, v15);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
  }
  if ( this + 24 == from + 24 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v18,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v16 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v17, v16);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
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
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// ToolEvent_GetEntityInputsResult::CopyFrom  (line 3713, @0x0000000001b2d400, libserver.so)
void __fastcall ToolEvent_GetEntityInputsResult::CopyFrom(
        ToolEvent_GetEntityInputsResult *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ToolEvent_GetEntityInputsResult::CopyFrom  (line 3719, @0x0000000001b34960, libserver.so)
// calls: ToolEvent_GetEntityInputsResult::MergeFrom
// callers: CNetMessagePB<-1, ToolEvent_GetEntityInputsResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall ToolEvent_GetEntityInputsResult::CopyFrom(
        ToolEvent_GetEntityInputsResult *const this,
        const ToolEvent_GetEntityInputsResult *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ToolEvent_GetEntityInputsResult::MergeFrom(this, from);
  }
}


// ToolEvent_GetEntityInputsResult::IsInitialized  (line 3725, @0x0000000001b2d440, libserver.so)
bool __fastcall ToolEvent_GetEntityInputsResult::IsInitialized(const ToolEvent_GetEntityInputsResult *const this)
{
  return 1;
}


// ToolEvent_GetEntityInputsResult::Swap  (line 3730, @0x0000000001b349a0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall ToolEvent_GetEntityInputsResult::Swap(
        ToolEvent_GetEntityInputsResult *const this,
        ToolEvent_GetEntityInputsResult *other)
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


// ToolEvent_GetEntityInputsResult::GetMetadata  (line 3739, @0x0000000001b2f480, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_GetEntityInputsResult_descriptor_, `anonymous namespace'::ToolEvent_GetEntityInputsResult_reflection_
google::protobuf::Metadata __fastcall ToolEvent_GetEntityInputsResult::GetMetadata(
        const ToolEvent_GetEntityInputsResult *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ToolEvent_GetEntityInputsResult_descriptor_;
  result.reflection = `anonymous namespace'::ToolEvent_GetEntityInputsResult_reflection_;
  return result;
}


// ToolEvent_FireEntityInput::ToolEvent_FireEntityInput  (line 3757, @0x0000000001b34b00, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_FireEntityInput::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: ToolEvent_FireEntityInput::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, ToolEvent_FireEntityInput, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, ToolEvent_FireEntityInput, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_FireEntityInput::ToolEvent_FireEntityInput(ToolEvent_FireEntityInput *const this)
{
  *this = off_3F79FD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  ToolEvent_FireEntityInput::SharedCtor(this);
}


// ToolEvent_FireEntityInput::InitAsDefaultInstance  (line 3763, @0x0000000001b34a00, libserver.so)
void __fastcall ToolEvent_FireEntityInput::InitAsDefaultInstance(ToolEvent_FireEntityInput *const this)
{
  ;
}


// ToolEvent_FireEntityInput::ToolEvent_FireEntityInput  (line 3766, @0x0000000001b34e70, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_FireEntityInput::SharedCtor, ToolEvent_FireEntityInput::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, ToolEvent_FireEntityInput, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall ToolEvent_FireEntityInput::ToolEvent_FireEntityInput(
        ToolEvent_FireEntityInput *const this,
        const ToolEvent_FireEntityInput *const from)
{
  *this = off_3F79FD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  ToolEvent_FireEntityInput::SharedCtor(this);
  ToolEvent_FireEntityInput::MergeFrom(this, from);
}


// ToolEvent_FireEntityInput::SharedCtor  (line 3773, @0x0000000001b34a10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: ToolEvent_FireEntityInput::ToolEvent_FireEntityInput
void __fastcall ToolEvent_FireEntityInput::SharedCtor(ToolEvent_FireEntityInput *const this)
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
  *(this + 28) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
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


// ToolEvent_FireEntityInput::~ToolEvent_FireEntityInput  (line 3783, @0x0000000001b34c60, libserver.so)
// calls: ToolEvent_FireEntityInput::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: ToolEvent_FireEntityInput::~ToolEvent_FireEntityInput, CNetMessagePB<-1, ToolEvent_FireEntityInput, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_FireEntityInput::~ToolEvent_FireEntityInput(ToolEvent_FireEntityInput *const this)
{
  *this = off_3F79FD0;
  ToolEvent_FireEntityInput::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// ToolEvent_FireEntityInput::~ToolEvent_FireEntityInput  (line 3783, @0x0000000001b34ca0, libserver.so)
// calls: ToolEvent_FireEntityInput::~ToolEvent_FireEntityInput, operator delete
void __fastcall ToolEvent_FireEntityInput::~ToolEvent_FireEntityInput(ToolEvent_FireEntityInput *const this)
{
  ToolEvent_FireEntityInput::~ToolEvent_FireEntityInput(this);
  operator delete(this);
}


// ToolEvent_FireEntityInput::SharedDtor  (line 3788, @0x0000000001b34ba0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: ToolEvent_FireEntityInput::~ToolEvent_FireEntityInput
void __fastcall ToolEvent_FireEntityInput::SharedDtor(ToolEvent_FireEntityInput *const this)
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


// ToolEvent_FireEntityInput::SetCachedSize  (line 3795, @0x0000000001b2d450, libserver.so)
void __fastcall ToolEvent_FireEntityInput::SetCachedSize(const ToolEvent_FireEntityInput *const this, int size)
{
  *(this + 5) = size;
}


// ToolEvent_FireEntityInput::descriptor  (line 3800, @0x0000000001b34cc0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_FireEntityInput_descriptor_
const google::protobuf::Descriptor *__cdecl ToolEvent_FireEntityInput::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ToolEvent_FireEntityInput_descriptor_;
}


// ToolEvent_FireEntityInput::default_instance  (line 3805, @0x0000000001b36380, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ToolEvent_FireEntityInput::default_instance_
const ToolEvent_FireEntityInput *__cdecl ToolEvent_FireEntityInput::default_instance()
{
  const ToolEvent_FireEntityInput *result; // rax

  result = ToolEvent_FireEntityInput::default_instance_;
  if ( ToolEvent_FireEntityInput::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ToolEvent_FireEntityInput::default_instance_;
  }
  return result;
}


// ToolEvent_FireEntityInput::New  (line 3812, @0x0000000001b34b60, libserver.so)
// calls: operator new, ToolEvent_FireEntityInput::ToolEvent_FireEntityInput, operator delete, _Unwind_Resume
ToolEvent_FireEntityInput *__fastcall ToolEvent_FireEntityInput::New(const ToolEvent_FireEntityInput *const this)
{
  ToolEvent_FireEntityInput *v1; // rbx

  v1 = operator new(0x30u);
  ToolEvent_FireEntityInput::ToolEvent_FireEntityInput(v1);
  return v1;
}


// ToolEvent_FireEntityInput::Clear  (line 3816, @0x0000000001b2db80, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall ToolEvent_FireEntityInput::Clear(ToolEvent_FireEntityInput *const this)
{
  bool v2; // zf
  int v3; // eax

  if ( (*(this + 16) & 0xF) != 0 )
  {
    v3 = *(this + 4);
    *(this + 6) = 0;
    *(this + 28) = 0;
    if ( (v3 & 4) != 0 )
    {
      std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
      v3 = *(this + 4);
    }
    if ( (v3 & 8) != 0 )
      std::string::_M_mutate(*(this + 5), 0, *(**(this + 5) - 24LL), 0);
  }
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// ToolEvent_FireEntityInput::MergePartialFromCodedStream  (line 3844, @0x0000000001b303b0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, mutable_input_name, mutable_input_param, set_has_clientsideentity, set_has_ehandle, set_has_input_name, set_has_input_param
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall ToolEvent_FireEntityInput::MergePartialFromCodedStream(
        ToolEvent_FireEntityInput *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  unsigned __int8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  std::string *v9; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v12; // rax
  unsigned int v13; // edx
  const google::protobuf::uint8 *v14; // rdx
  __int64 v15; // rax
  unsigned int v16[2]; // [rsp+8h] [rbp-28h] BYREF

  v3 = this + 8;
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
      if ( *buffer <= 0 )
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
        if ( v8 != 16 )
          goto handle_unusual;
        v14 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_clientsideentity;
      }
      if ( v8 >> 3 <= 2 )
        break;
      if ( v9 == 3 )
      {
        if ( v8 != 26 )
          goto handle_unusual;
        goto parse_input_name;
      }
      if ( v9 != 4 || v8 != 34 )
        goto handle_unusual;
parse_input_param:
      *(this + 4) |= 8u;
      result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 5), v9);
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
    if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v16);
      if ( !result )
        return result;
      v13 = v16[0];
    }
    else
    {
      input->buffer_ = v12 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 6) = v13;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v14 = buffer + 1;
      input->buffer_ = v14;
parse_clientsideentity:
      if ( v14 >= buffer_end || ((v15 = *v14) & 0x80u) != 0LL )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v16);
        if ( !result )
          return result;
        v15 = *v16;
      }
      else
      {
        input->buffer_ = v14 + 1;
      }
      *(this + 28) = v15 != 0;
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 26 )
      {
        v9 = (buffer + 1);
        input->buffer_ = v9;
parse_input_name:
        *(this + 4) |= 4u;
        if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), v9) == 0 )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end && *buffer == 34 )
        {
          v9 = (buffer + 1);
          input->buffer_ = v9;
          goto parse_input_param;
        }
      }
    }
  }
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_11;
  return 1;
}


// ToolEvent_FireEntityInput::SerializeWithCachedSizes  (line 3939, @0x0000000001b2e4a0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall ToolEvent_FireEntityInput::SerializeWithCachedSizes(
        const ToolEvent_FireEntityInput *const this,
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
      goto LABEL_10;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2, *(this + 28), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
LABEL_11:
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 2, *(this + 5), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_6;
  }
LABEL_10:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 1, *(this + 4), output, v3);
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


// ToolEvent_FireEntityInput::SerializeWithCachedSizesToArray  (line 3979, @0x0000000001b2f1c0, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall ToolEvent_FireEntityInput::SerializeWithCachedSizesToArray(
        const ToolEvent_FireEntityInput *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  google::protobuf::uint8 v7; // dl
  google::protobuf::io::CodedOutputStream *v8; // rdi
  unsigned __int8 *v9; // rdx
  google::protobuf::io::CodedOutputStream *v10; // rdi
  __int64 v11; // rdx

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
    v7 = *(this + 28);
    *result = 16;
    result += 2;
    *(result - 1) = v7;
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 4);
    *result = 26;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v8, (result + 1), v4);
    LODWORD(v4) = *(this + 4);
  }
  v9 = (v4 & 8);
  if ( v9 != 0 )
  {
    v10 = *(this + 5);
    *result = 34;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v10, (result + 1), v9);
  }
  v11 = *(this + 1);
  if ( v11 != 0 && *(v11 + 8) != *v11 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v11);
  return result;
}


// ToolEvent_FireEntityInput::ByteSize  (line 4022, @0x0000000001b2f0a0, libserver.so)  // inlines: Int32Size, StringSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall ToolEvent_FireEntityInput::ByteSize(const ToolEvent_FireEntityInput *const this)
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
  int v13; // edx
  _QWORD *v14; // r13
  google::protobuf::io::CodedOutputStream *v15; // rdi
  int v16; // eax
  int v17; // ecx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_10;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
  {
LABEL_6:
    if ( (v5 & 2) != 0 )
      v3 += 2;
    if ( (v5 & 4) == 0 )
      goto LABEL_9;
    goto LABEL_17;
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
    v3 = 13;
  if ( (v4 & 4) == 0 )
  {
LABEL_9:
    if ( (v5 & 8) == 0 )
      goto LABEL_10;
    goto LABEL_14;
  }
LABEL_17:
  v14 = *(this + 4);
  v15 = *(*v14 - 24LL);
  v16 = 1;
  v17 = v15;
  if ( v15 > 0x7F )
  {
    v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v15, v1);
    v17 = *(*v14 - 24LL);
    v5 = *(this + 4);
  }
  v3 += v16 + v17 + 1;
  if ( (v5 & 8) != 0 )
  {
LABEL_14:
    v10 = *(this + 5);
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
LABEL_10:
  v8 = *(this + 1);
  if ( v8 != 0 && *(v8 + 8) != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v8);
  *(this + 5) = v3;
  return v3;
}


// ToolEvent_FireEntityInput::MergeFrom  (line 4064, @0x0000000001b34ee0, libserver.so)  // inlines: dynamic_cast_if_available<const ToolEvent_FireEntityInput*, const google::protobuf::Message*>
// calls: __dynamic_cast, ToolEvent_FireEntityInput::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ToolEvent_FireEntityInput
void __fastcall ToolEvent_FireEntityInput::MergeFrom(
        ToolEvent_FireEntityInput *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ToolEvent_FireEntityInput *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      4065);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'ToolEvent_FireEntityInput, 0)) != 0 )
  {
    ToolEvent_FireEntityInput::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ToolEvent_FireEntityInput::MergeFrom  (line 4076, @0x0000000001b34d50, libserver.so)  // inlines: set_clientsideentity, set_ehandle, set_has_clientsideentity, set_has_ehandle, set_has_input_name, set_has_input_param, set_input_name, set_input_param
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: ToolEvent_FireEntityInput::ToolEvent_FireEntityInput, ToolEvent_FireEntityInput::MergeFrom, ToolEvent_FireEntityInput::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall ToolEvent_FireEntityInput::MergeFrom(
        ToolEvent_FireEntityInput *const this,
        const ToolEvent_FireEntityInput *const from)
{
  int v4; // eax
  int v5; // eax
  char v6; // al
  const std::string *v7; // rsi
  std::string *v8; // rdi
  const std::string *v9; // rsi
  std::string *v10; // rdi
  __int64 v11; // rax
  char v12; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v13; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v13,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      4077);
    v11 = google::protobuf::internal::LogMessage::operator<<(&v13, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v12, v11);
    google::protobuf::internal::LogMessage::~LogMessage(&v13);
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
      v6 = *(from + 28);
      *(this + 4) |= 2u;
      *(this + 28) = v6;
      v4 = *(from + 4);
    }
    if ( (v4 & 4) != 0 )
    {
      v9 = *(from + 4);
      v10 = *(this + 4);
      *(this + 4) |= 4u;
      std::string::assign(v10, v9);
      if ( (*(from + 4) & 8) == 0 )
        goto LABEL_10;
    }
    else if ( (v4 & 8) == 0 )
    {
      goto LABEL_10;
    }
    v7 = *(from + 5);
    v8 = *(this + 5);
    *(this + 4) |= 8u;
    std::string::assign(v8, v7);
  }
LABEL_10:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// ToolEvent_FireEntityInput::CopyFrom  (line 4095, @0x0000000001b2d460, libserver.so)
void __fastcall ToolEvent_FireEntityInput::CopyFrom(
        ToolEvent_FireEntityInput *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ToolEvent_FireEntityInput::CopyFrom  (line 4101, @0x0000000001b34fc0, libserver.so)
// calls: ToolEvent_FireEntityInput::MergeFrom
// callers: CNetMessagePB<-1, ToolEvent_FireEntityInput, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall ToolEvent_FireEntityInput::CopyFrom(
        ToolEvent_FireEntityInput *const this,
        const ToolEvent_FireEntityInput *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ToolEvent_FireEntityInput::MergeFrom(this, from);
  }
}


// ToolEvent_FireEntityInput::IsInitialized  (line 4107, @0x0000000001b2d4a0, libserver.so)
bool __fastcall ToolEvent_FireEntityInput::IsInitialized(const ToolEvent_FireEntityInput *const this)
{
  return 1;
}


// ToolEvent_FireEntityInput::Swap  (line 4112, @0x0000000001b35000, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall ToolEvent_FireEntityInput::Swap(
        ToolEvent_FireEntityInput *const this,
        ToolEvent_FireEntityInput *other)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    LOBYTE(v2) = *(this + 28);
    *(this + 28) = *(other + 28);
    *(other + 28) = v2;
    v3 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v3;
    v4 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
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


// ToolEvent_FireEntityInput::GetMetadata  (line 4124, @0x0000000001b2f520, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_FireEntityInput_descriptor_, `anonymous namespace'::ToolEvent_FireEntityInput_reflection_
google::protobuf::Metadata __fastcall ToolEvent_FireEntityInput::GetMetadata(
        const ToolEvent_FireEntityInput *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ToolEvent_FireEntityInput_descriptor_;
  result.reflection = `anonymous namespace'::ToolEvent_FireEntityInput_reflection_;
  return result;
}


// ToolEvent_SFMRecordingStateChanged::ToolEvent_SFMRecordingStateChanged  (line 4139, @0x0000000001b35070, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: ToolEvent_SFMRecordingStateChanged::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, ToolEvent_SFMRecordingStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, ToolEvent_SFMRecordingStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_SFMRecordingStateChanged::ToolEvent_SFMRecordingStateChanged(
        ToolEvent_SFMRecordingStateChanged *const this)
{
  *this = off_3F7A090;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
}


// ToolEvent_SFMRecordingStateChanged::InitAsDefaultInstance  (line 4145, @0x0000000001b35100, libserver.so)
void __fastcall ToolEvent_SFMRecordingStateChanged::InitAsDefaultInstance(
        ToolEvent_SFMRecordingStateChanged *const this)
{
  ;
}


// ToolEvent_SFMRecordingStateChanged::ToolEvent_SFMRecordingStateChanged  (line 4148, @0x0000000001b35280, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_SFMRecordingStateChanged::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, ToolEvent_SFMRecordingStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall ToolEvent_SFMRecordingStateChanged::ToolEvent_SFMRecordingStateChanged(
        ToolEvent_SFMRecordingStateChanged *const this,
        const ToolEvent_SFMRecordingStateChanged *const from)
{
  *this = off_3F7A090;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
  ToolEvent_SFMRecordingStateChanged::MergeFrom(this, from);
}


// ToolEvent_SFMRecordingStateChanged::SharedCtor  (line 4155, @0x0000000001b35110, libserver.so)  // inlines: memset
void __fastcall ToolEvent_SFMRecordingStateChanged::SharedCtor(ToolEvent_SFMRecordingStateChanged *const this)
{
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
}


// ToolEvent_SFMRecordingStateChanged::~ToolEvent_SFMRecordingStateChanged  (line 4161, @0x0000000001b2d810, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<-1, ToolEvent_SFMRecordingStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_SFMRecordingStateChanged::~ToolEvent_SFMRecordingStateChanged(
        ToolEvent_SFMRecordingStateChanged *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7A090;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// ToolEvent_SFMRecordingStateChanged::~ToolEvent_SFMRecordingStateChanged  (line 4161, @0x0000000001b2d840, libserver.so)  // inlines: ~ToolEvent_SFMRecordingStateChanged
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall ToolEvent_SFMRecordingStateChanged::~ToolEvent_SFMRecordingStateChanged(
        ToolEvent_SFMRecordingStateChanged *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7A090;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// ToolEvent_SFMRecordingStateChanged::SharedDtor  (line 4166, @0x0000000001b35130, libserver.so)
void __fastcall ToolEvent_SFMRecordingStateChanged::SharedDtor(ToolEvent_SFMRecordingStateChanged *const this)
{
  ;
}


// ToolEvent_SFMRecordingStateChanged::SetCachedSize  (line 4171, @0x0000000001b2d4b0, libserver.so)
void __fastcall ToolEvent_SFMRecordingStateChanged::SetCachedSize(
        const ToolEvent_SFMRecordingStateChanged *const this,
        int size)
{
  *(this + 5) = size;
}


// ToolEvent_SFMRecordingStateChanged::descriptor  (line 4176, @0x0000000001b35140, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_descriptor_
const google::protobuf::Descriptor *__cdecl ToolEvent_SFMRecordingStateChanged::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_descriptor_;
}


// ToolEvent_SFMRecordingStateChanged::default_instance  (line 4181, @0x0000000001b363b0, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ToolEvent_SFMRecordingStateChanged::default_instance_
const ToolEvent_SFMRecordingStateChanged *__cdecl ToolEvent_SFMRecordingStateChanged::default_instance()
{
  const ToolEvent_SFMRecordingStateChanged *result; // rax

  result = ToolEvent_SFMRecordingStateChanged::default_instance_;
  if ( ToolEvent_SFMRecordingStateChanged::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ToolEvent_SFMRecordingStateChanged::default_instance_;
  }
  return result;
}


// ToolEvent_SFMRecordingStateChanged::New  (line 4188, @0x0000000001b350c0, libserver.so)
// calls: operator new, ToolEvent_SFMRecordingStateChanged::ToolEvent_SFMRecordingStateChanged, operator delete, _Unwind_Resume
ToolEvent_SFMRecordingStateChanged *__fastcall ToolEvent_SFMRecordingStateChanged::New(
        const ToolEvent_SFMRecordingStateChanged *const this)
{
  ToolEvent_SFMRecordingStateChanged *v1; // rbx

  v1 = operator new(0x20u);
  ToolEvent_SFMRecordingStateChanged::ToolEvent_SFMRecordingStateChanged(v1);
  return v1;
}


// ToolEvent_SFMRecordingStateChanged::Clear  (line 4192, @0x0000000001b2da50, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall ToolEvent_SFMRecordingStateChanged::Clear(ToolEvent_SFMRecordingStateChanged *const this)
{
  char *v2; // rdi

  *(this + 24) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// ToolEvent_SFMRecordingStateChanged::MergePartialFromCodedStream  (line 4198, @0x0000000001b30890, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadTagWithCutoff, ReadVarint64, set_has_isrecording
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
bool __fastcall ToolEvent_SFMRecordingStateChanged::MergePartialFromCodedStream(
        ToolEvent_SFMRecordingStateChanged *const this,
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


// ToolEvent_SFMRecordingStateChanged::SerializeWithCachedSizes  (line 4244, @0x0000000001b2e0e0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall ToolEvent_SFMRecordingStateChanged::SerializeWithCachedSizes(
        const ToolEvent_SFMRecordingStateChanged *const this,
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


// ToolEvent_SFMRecordingStateChanged::SerializeWithCachedSizesToArray  (line 4259, @0x0000000001b2ec60, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteTagToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall ToolEvent_SFMRecordingStateChanged::SerializeWithCachedSizesToArray(
        const ToolEvent_SFMRecordingStateChanged *const this,
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


// ToolEvent_SFMRecordingStateChanged::ByteSize  (line 4275, @0x0000000001b2ddd0, libserver.so)  // inlines: empty, has_isrecording
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall ToolEvent_SFMRecordingStateChanged::ByteSize(const ToolEvent_SFMRecordingStateChanged *const this)
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


// ToolEvent_SFMRecordingStateChanged::MergeFrom  (line 4296, @0x0000000001b35300, libserver.so)  // inlines: dynamic_cast_if_available<const ToolEvent_SFMRecordingStateChanged*, const google::protobuf::Message*>
// calls: __dynamic_cast, ToolEvent_SFMRecordingStateChanged::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ToolEvent_SFMRecordingStateChanged
void __fastcall ToolEvent_SFMRecordingStateChanged::MergeFrom(
        ToolEvent_SFMRecordingStateChanged *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ToolEvent_SFMRecordingStateChanged *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      4297);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'ToolEvent_SFMRecordingStateChanged,
               0)) != 0 )
  {
    ToolEvent_SFMRecordingStateChanged::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ToolEvent_SFMRecordingStateChanged::MergeFrom  (line 4308, @0x0000000001b351d0, libserver.so)  // inlines: set_has_isrecording, set_isrecording
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: ToolEvent_SFMRecordingStateChanged::ToolEvent_SFMRecordingStateChanged, ToolEvent_SFMRecordingStateChanged::MergeFrom, ToolEvent_SFMRecordingStateChanged::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall ToolEvent_SFMRecordingStateChanged::MergeFrom(
        ToolEvent_SFMRecordingStateChanged *const this,
        const ToolEvent_SFMRecordingStateChanged *const from)
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
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      4309);
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


// ToolEvent_SFMRecordingStateChanged::CopyFrom  (line 4318, @0x0000000001b2d4c0, libserver.so)
void __fastcall ToolEvent_SFMRecordingStateChanged::CopyFrom(
        ToolEvent_SFMRecordingStateChanged *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ToolEvent_SFMRecordingStateChanged::CopyFrom  (line 4324, @0x0000000001b353e0, libserver.so)
// calls: ToolEvent_SFMRecordingStateChanged::MergeFrom
// callers: CNetMessagePB<-1, ToolEvent_SFMRecordingStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall ToolEvent_SFMRecordingStateChanged::CopyFrom(
        ToolEvent_SFMRecordingStateChanged *const this,
        const ToolEvent_SFMRecordingStateChanged *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ToolEvent_SFMRecordingStateChanged::MergeFrom(this, from);
  }
}


// ToolEvent_SFMRecordingStateChanged::IsInitialized  (line 4330, @0x0000000001b2d500, libserver.so)
bool __fastcall ToolEvent_SFMRecordingStateChanged::IsInitialized(const ToolEvent_SFMRecordingStateChanged *const this)
{
  return 1;
}


// ToolEvent_SFMRecordingStateChanged::Swap  (line 4335, @0x0000000001b35420, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall ToolEvent_SFMRecordingStateChanged::Swap(
        ToolEvent_SFMRecordingStateChanged *const this,
        ToolEvent_SFMRecordingStateChanged *other)
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


// ToolEvent_SFMRecordingStateChanged::GetMetadata  (line 4344, @0x0000000001b2f5c0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_descriptor_, `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_reflection_
google::protobuf::Metadata __fastcall ToolEvent_SFMRecordingStateChanged::GetMetadata(
        const ToolEvent_SFMRecordingStateChanged *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_descriptor_;
  result.reflection = `anonymous namespace'::ToolEvent_SFMRecordingStateChanged_reflection_;
  return result;
}


// ToolEvent_SFMToolActiveStateChanged::ToolEvent_SFMToolActiveStateChanged  (line 4359, @0x0000000001b35470, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: ToolEvent_SFMToolActiveStateChanged::New, protobuf_AddDesc_gametoolevents_2eproto, CNetMessagePB<-1, ToolEvent_SFMToolActiveStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateMessage, CNetMessagePB<-1, ToolEvent_SFMToolActiveStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_SFMToolActiveStateChanged::ToolEvent_SFMToolActiveStateChanged(
        ToolEvent_SFMToolActiveStateChanged *const this)
{
  *this = off_3F7A150;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
}


// ToolEvent_SFMToolActiveStateChanged::InitAsDefaultInstance  (line 4365, @0x0000000001b36750, libserver.so)
void __fastcall ToolEvent_SFMToolActiveStateChanged::InitAsDefaultInstance(
        ToolEvent_SFMToolActiveStateChanged *const this)
{
  ;
}


// ToolEvent_SFMToolActiveStateChanged::ToolEvent_SFMToolActiveStateChanged  (line 4368, @0x0000000001b36900, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), ToolEvent_SFMToolActiveStateChanged::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNetMessagePB<-1, ToolEvent_SFMToolActiveStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::AllocateAndCopyConstructNetMessage
void __fastcall ToolEvent_SFMToolActiveStateChanged::ToolEvent_SFMToolActiveStateChanged(
        ToolEvent_SFMToolActiveStateChanged *const this,
        const ToolEvent_SFMToolActiveStateChanged *const from)
{
  *this = off_3F7A150;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
  ToolEvent_SFMToolActiveStateChanged::MergeFrom(this, from);
}


// ToolEvent_SFMToolActiveStateChanged::SharedCtor  (line 4375, @0x0000000001b36760, libserver.so)  // inlines: memset
void __fastcall ToolEvent_SFMToolActiveStateChanged::SharedCtor(ToolEvent_SFMToolActiveStateChanged *const this)
{
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 4) = 0;
}


// ToolEvent_SFMToolActiveStateChanged::~ToolEvent_SFMToolActiveStateChanged  (line 4381, @0x0000000001b2d880, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNetMessagePB<-1, ToolEvent_SFMToolActiveStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::GetName
void __fastcall ToolEvent_SFMToolActiveStateChanged::~ToolEvent_SFMToolActiveStateChanged(
        ToolEvent_SFMToolActiveStateChanged *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7A150;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// ToolEvent_SFMToolActiveStateChanged::~ToolEvent_SFMToolActiveStateChanged  (line 4381, @0x0000000001b2d8b0, libserver.so)  // inlines: ~ToolEvent_SFMToolActiveStateChanged
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall ToolEvent_SFMToolActiveStateChanged::~ToolEvent_SFMToolActiveStateChanged(
        ToolEvent_SFMToolActiveStateChanged *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7A150;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// ToolEvent_SFMToolActiveStateChanged::SharedDtor  (line 4386, @0x0000000001b36780, libserver.so)
void __fastcall ToolEvent_SFMToolActiveStateChanged::SharedDtor(ToolEvent_SFMToolActiveStateChanged *const this)
{
  ;
}


// ToolEvent_SFMToolActiveStateChanged::SetCachedSize  (line 4391, @0x0000000001b2d510, libserver.so)
void __fastcall ToolEvent_SFMToolActiveStateChanged::SetCachedSize(
        const ToolEvent_SFMToolActiveStateChanged *const this,
        int size)
{
  *(this + 5) = size;
}


// ToolEvent_SFMToolActiveStateChanged::descriptor  (line 4396, @0x0000000001b36790, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_descriptor_
const google::protobuf::Descriptor *__cdecl ToolEvent_SFMToolActiveStateChanged::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_descriptor_;
}


// ToolEvent_SFMToolActiveStateChanged::default_instance  (line 4401, @0x0000000001b36820, libserver.so)
// calls: protobuf_AddDesc_gametoolevents_2eproto
// globals: ToolEvent_SFMToolActiveStateChanged::default_instance_
const ToolEvent_SFMToolActiveStateChanged *__cdecl ToolEvent_SFMToolActiveStateChanged::default_instance()
{
  const ToolEvent_SFMToolActiveStateChanged *result; // rax

  result = ToolEvent_SFMToolActiveStateChanged::default_instance_;
  if ( ToolEvent_SFMToolActiveStateChanged::default_instance_ == 0 )
  {
    protobuf_AddDesc_gametoolevents_2eproto();
    return ToolEvent_SFMToolActiveStateChanged::default_instance_;
  }
  return result;
}


// ToolEvent_SFMToolActiveStateChanged::New  (line 4408, @0x0000000001b354c0, libserver.so)
// calls: operator new, ToolEvent_SFMToolActiveStateChanged::ToolEvent_SFMToolActiveStateChanged, operator delete, _Unwind_Resume
ToolEvent_SFMToolActiveStateChanged *__fastcall ToolEvent_SFMToolActiveStateChanged::New(
        const ToolEvent_SFMToolActiveStateChanged *const this)
{
  ToolEvent_SFMToolActiveStateChanged *v1; // rbx

  v1 = operator new(0x20u);
  ToolEvent_SFMToolActiveStateChanged::ToolEvent_SFMToolActiveStateChanged(v1);
  return v1;
}


// ToolEvent_SFMToolActiveStateChanged::Clear  (line 4412, @0x0000000001b2da80, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall ToolEvent_SFMToolActiveStateChanged::Clear(ToolEvent_SFMToolActiveStateChanged *const this)
{
  char *v2; // rdi

  *(this + 24) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// ToolEvent_SFMToolActiveStateChanged::MergePartialFromCodedStream  (line 4418, @0x0000000001b30b40, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadTagWithCutoff, ReadVarint64, set_has_isactive
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
bool __fastcall ToolEvent_SFMToolActiveStateChanged::MergePartialFromCodedStream(
        ToolEvent_SFMToolActiveStateChanged *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *buffer_size_after_limit; // rcx
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
        result = google::protobuf::internal::WireFormat::SkipField(input, v9, v4, buffer_size_after_limit);
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
  if ( v9 != 0 )
    goto LABEL_8;
  return 1;
}


// ToolEvent_SFMToolActiveStateChanged::SerializeWithCachedSizes  (line 4464, @0x0000000001b2e140, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall ToolEvent_SFMToolActiveStateChanged::SerializeWithCachedSizes(
        const ToolEvent_SFMToolActiveStateChanged *const this,
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


// ToolEvent_SFMToolActiveStateChanged::SerializeWithCachedSizesToArray  (line 4479, @0x0000000001b2eca0, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteTagToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall ToolEvent_SFMToolActiveStateChanged::SerializeWithCachedSizesToArray(
        const ToolEvent_SFMToolActiveStateChanged *const this,
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


// ToolEvent_SFMToolActiveStateChanged::ByteSize  (line 4495, @0x0000000001b2de20, libserver.so)  // inlines: empty, has_isactive
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall ToolEvent_SFMToolActiveStateChanged::ByteSize(const ToolEvent_SFMToolActiveStateChanged *const this)
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


// ToolEvent_SFMToolActiveStateChanged::MergeFrom  (line 4516, @0x0000000001b36980, libserver.so)  // inlines: dynamic_cast_if_available<const ToolEvent_SFMToolActiveStateChanged*, const google::protobuf::Message*>
// calls: __dynamic_cast, ToolEvent_SFMToolActiveStateChanged::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'ToolEvent_SFMToolActiveStateChanged
void __fastcall ToolEvent_SFMToolActiveStateChanged::MergeFrom(
        ToolEvent_SFMToolActiveStateChanged *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const ToolEvent_SFMToolActiveStateChanged *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      4517);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'ToolEvent_SFMToolActiveStateChanged,
               0)) != 0 )
  {
    ToolEvent_SFMToolActiveStateChanged::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// ToolEvent_SFMToolActiveStateChanged::MergeFrom  (line 4528, @0x0000000001b36850, libserver.so)  // inlines: set_has_isactive, set_isactive
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: ToolEvent_SFMToolActiveStateChanged::ToolEvent_SFMToolActiveStateChanged, ToolEvent_SFMToolActiveStateChanged::MergeFrom, ToolEvent_SFMToolActiveStateChanged::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall ToolEvent_SFMToolActiveStateChanged::MergeFrom(
        ToolEvent_SFMToolActiveStateChanged *const this,
        const ToolEvent_SFMToolActiveStateChanged *const from)
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
      "generated_protodota/linuxsteamrt64/gametoolevents.pb.cc",
      4529);
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


// ToolEvent_SFMToolActiveStateChanged::CopyFrom  (line 4538, @0x0000000001b2d520, libserver.so)
void __fastcall ToolEvent_SFMToolActiveStateChanged::CopyFrom(
        ToolEvent_SFMToolActiveStateChanged *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// ToolEvent_SFMToolActiveStateChanged::CopyFrom  (line 4544, @0x0000000001b36a60, libserver.so)
// calls: ToolEvent_SFMToolActiveStateChanged::MergeFrom
// callers: CNetMessagePB<-1, ToolEvent_SFMToolActiveStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>::CProtobufBinding::Copy
void __fastcall ToolEvent_SFMToolActiveStateChanged::CopyFrom(
        ToolEvent_SFMToolActiveStateChanged *const this,
        const ToolEvent_SFMToolActiveStateChanged *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    ToolEvent_SFMToolActiveStateChanged::MergeFrom(this, from);
  }
}


// ToolEvent_SFMToolActiveStateChanged::IsInitialized  (line 4550, @0x0000000001b2d560, libserver.so)
bool __fastcall ToolEvent_SFMToolActiveStateChanged::IsInitialized(
        const ToolEvent_SFMToolActiveStateChanged *const this)
{
  return 1;
}


// ToolEvent_SFMToolActiveStateChanged::Swap  (line 4555, @0x0000000001b36aa0, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall ToolEvent_SFMToolActiveStateChanged::Swap(
        ToolEvent_SFMToolActiveStateChanged *const this,
        ToolEvent_SFMToolActiveStateChanged *other)
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


// ToolEvent_SFMToolActiveStateChanged::GetMetadata  (line 4564, @0x0000000001b2f660, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_gametoolevents_2eproto(void), `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_descriptor_, `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_reflection_
google::protobuf::Metadata __fastcall ToolEvent_SFMToolActiveStateChanged::GetMetadata(
        const ToolEvent_SFMToolActiveStateChanged *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_gametoolevents_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_descriptor_;
  result.reflection = `anonymous namespace'::ToolEvent_SFMToolActiveStateChanged_reflection_;
  return result;
}


