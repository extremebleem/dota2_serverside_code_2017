// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc:860
struct StaticDescriptorInitializer_networkbasetypes_2eproto {
	StaticDescriptorInitializer_networkbasetypes_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_networkbasetypes_2eproto  (line 112, @0x0000000001a8aa40, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_networkbasetypes_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "networkbasetypes.proto", "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CMsgVector_descriptor_, CMsgVector::default_instance_, protobuf_AssignDesc_networkbasetypes_2eproto(void)::CMsgVector_offsets_, `anonymous namespace'::CMsgVector_reflection_, `anonymous namespace'::CMsgVector2D_descriptor_, CMsgVector2D::default_instance_, protobuf_AssignDesc_networkbasetypes_2eproto(void)::CMsgVector2D_offsets_, `anonymous namespace'::CMsgVector2D_reflection_ (40 total)
void __cdecl protobuf_AssignDesc_networkbasetypes_2eproto()
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
  google::protobuf::DescriptorPool *v32; // rdi
  const google::protobuf::DescriptorPool *v33; // r13
  google::protobuf::MessageFactory *v34; // rdi
  google::protobuf::MessageFactory *v35; // r14
  google::protobuf::internal::GeneratedMessageReflection *v36; // r12
  const google::protobuf::Descriptor *v37; // rax
  google::protobuf::DescriptorPool *v38; // rdi
  const google::protobuf::DescriptorPool *v39; // r13
  google::protobuf::MessageFactory *v40; // rdi
  google::protobuf::MessageFactory *v41; // r14
  google::protobuf::internal::GeneratedMessageReflection *v42; // r12
  const google::protobuf::Descriptor *v43; // rax
  google::protobuf::DescriptorPool *v44; // rdi
  const google::protobuf::DescriptorPool *v45; // r13
  google::protobuf::MessageFactory *v46; // rdi
  google::protobuf::MessageFactory *v47; // r14
  google::protobuf::internal::GeneratedMessageReflection *v48; // r12
  const google::protobuf::Descriptor *v49; // rax
  google::protobuf::DescriptorPool *v50; // rdi
  const google::protobuf::DescriptorPool *v51; // r13
  google::protobuf::MessageFactory *v52; // rdi
  google::protobuf::MessageFactory *v53; // r14
  google::protobuf::internal::GeneratedMessageReflection *v54; // r12
  const google::protobuf::Descriptor *v55; // rax
  google::protobuf::DescriptorPool *v56; // rdi
  const google::protobuf::DescriptorPool *v57; // r13
  google::protobuf::MessageFactory *v58; // rdi
  google::protobuf::MessageFactory *v59; // r14
  google::protobuf::internal::GeneratedMessageReflection *v60; // r12
  const google::protobuf::Descriptor *v61; // rax
  google::protobuf::DescriptorPool *v62; // rdi
  const google::protobuf::DescriptorPool *v63; // r13
  google::protobuf::MessageFactory *v64; // rdi
  google::protobuf::MessageFactory *v65; // r14
  google::protobuf::internal::GeneratedMessageReflection *v66; // r12
  const google::protobuf::Descriptor *v67; // rax
  google::protobuf::DescriptorPool *v68; // rdi
  const google::protobuf::DescriptorPool *v69; // r13
  google::protobuf::MessageFactory *v70; // rdi
  google::protobuf::MessageFactory *v71; // r14
  google::protobuf::internal::GeneratedMessageReflection *v72; // r12
  const google::protobuf::Descriptor *v73; // rax
  google::protobuf::DescriptorPool *v74; // rdi
  const google::protobuf::DescriptorPool *v75; // r13
  google::protobuf::MessageFactory *v76; // rdi
  google::protobuf::MessageFactory *v77; // r14
  google::protobuf::internal::GeneratedMessageReflection *v78; // r12
  const google::protobuf::Descriptor *v79; // rax
  google::protobuf::DescriptorPool *v80; // rdi
  const google::protobuf::DescriptorPool *v81; // r13
  google::protobuf::MessageFactory *v82; // rdi
  google::protobuf::MessageFactory *v83; // r14
  google::protobuf::internal::GeneratedMessageReflection *v84; // r12
  google::protobuf::DescriptorPool *v85; // rdi
  const google::protobuf::DescriptorPool *v86; // r13
  google::protobuf::MessageFactory *v87; // rdi
  google::protobuf::MessageFactory *v88; // r14
  google::protobuf::internal::GeneratedMessageReflection *v89; // r12
  const google::protobuf::Descriptor *v90; // rax
  google::protobuf::DescriptorPool *v91; // rdi
  const google::protobuf::DescriptorPool *v92; // r13
  google::protobuf::MessageFactory *v93; // rdi
  google::protobuf::MessageFactory *v94; // r14
  google::protobuf::internal::GeneratedMessageReflection *v95; // r12
  google::protobuf::DescriptorPool *v96; // rdi
  const google::protobuf::DescriptorPool *v97; // r13
  google::protobuf::MessageFactory *v98; // rdi
  google::protobuf::MessageFactory *v99; // r14
  google::protobuf::internal::GeneratedMessageReflection *v100; // r12
  const google::protobuf::Descriptor *v101; // rax
  google::protobuf::DescriptorPool *v102; // rdi
  const google::protobuf::DescriptorPool *v103; // r13
  google::protobuf::MessageFactory *v104; // rdi
  google::protobuf::MessageFactory *v105; // r14
  google::protobuf::internal::GeneratedMessageReflection *v106; // r12
  const google::protobuf::Descriptor *v107; // rax
  google::protobuf::DescriptorPool *v108; // rdi
  const google::protobuf::DescriptorPool *v109; // r13
  google::protobuf::MessageFactory *v110; // rdi
  google::protobuf::MessageFactory *v111; // r14
  google::protobuf::internal::GeneratedMessageReflection *v112; // r12
  google::protobuf::DescriptorPool *v113; // rdi
  const google::protobuf::DescriptorPool *v114; // r13
  google::protobuf::MessageFactory *v115; // rdi
  google::protobuf::MessageFactory *v116; // r14
  google::protobuf::internal::GeneratedMessageReflection *v117; // r12
  const google::protobuf::Descriptor *v118; // rax
  google::protobuf::DescriptorPool *v119; // rdi
  const google::protobuf::DescriptorPool *v120; // r13
  google::protobuf::MessageFactory *v121; // rdi
  google::protobuf::MessageFactory *v122; // r14
  google::protobuf::internal::GeneratedMessageReflection *v123; // r12
  const google::protobuf::Descriptor *v124; // rax
  google::protobuf::DescriptorPool *v125; // rdi
  const google::protobuf::DescriptorPool *v126; // r13
  google::protobuf::MessageFactory *v127; // rdi
  google::protobuf::MessageFactory *v128; // r14
  google::protobuf::internal::GeneratedMessageReflection *v129; // r12
  const google::protobuf::Descriptor *v130; // rax
  google::protobuf::DescriptorPool *v131; // rdi
  const google::protobuf::DescriptorPool *v132; // r13
  google::protobuf::MessageFactory *v133; // rdi
  google::protobuf::MessageFactory *v134; // r14
  google::protobuf::internal::GeneratedMessageReflection *v135; // r12
  const google::protobuf::Descriptor *v136; // rax
  google::protobuf::DescriptorPool *v137; // rdi
  const google::protobuf::DescriptorPool *v138; // r13
  google::protobuf::MessageFactory *v139; // rdi
  google::protobuf::MessageFactory *v140; // r14
  google::protobuf::internal::GeneratedMessageReflection *v141; // r12
  const google::protobuf::Descriptor *v142; // rax
  google::protobuf::DescriptorPool *v143; // rdi
  const google::protobuf::DescriptorPool *v144; // r13
  google::protobuf::MessageFactory *v145; // rdi
  google::protobuf::MessageFactory *v146; // r14
  google::protobuf::internal::GeneratedMessageReflection *v147; // r12
  const google::protobuf::Descriptor *v148; // rax
  google::protobuf::DescriptorPool *v149; // rdi
  const google::protobuf::DescriptorPool *v150; // r13
  google::protobuf::MessageFactory *v151; // rdi
  google::protobuf::MessageFactory *v152; // r14
  google::protobuf::internal::GeneratedMessageReflection *v153; // r12
  const google::protobuf::EnumDescriptor *v154; // rax
  __int64 v155; // rax
  int v156; // eax
  int v157; // edx
  char v158; // [rsp+3Eh] [rbp-42h] BYREF
  char v159; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v160; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_networkbasetypes_2eproto();
  std::string::string(&v160, "networkbasetypes.proto", &v158);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v160);
  v3 = *&v160.level_ - 24LL;
  if ( (*&v160.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v156 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v157 = *(*&v160.level_ - 8LL);
      *(*&v160.level_ - 8LL) = v157 - 1;
      v156 = v157;
    }
    if ( v156 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v159);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v160,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      117);
    v155 = google::protobuf::internal::LogMessage::operator<<(&v160, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v159, v155);
    google::protobuf::internal::LogMessage::~LogMessage(&v160);
  }
  `anonymous namespace'::CMsgVector_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CMsgVector_descriptor_,
    CMsgVector::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CMsgVector_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    40);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CMsgVector_reflection_ = v7;
  `anonymous namespace'::CMsgVector2D_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CMsgVector2D_descriptor_,
    CMsgVector2D::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CMsgVector2D_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    32);
  v14 = *(FileByName + 80);
  `anonymous namespace'::CMsgVector2D_reflection_ = v13;
  `anonymous namespace'::CMsgQAngle_descriptor_ = v14 + 2;
  v16 = google::protobuf::DescriptorPool::generated_pool(v15);
  v18 = google::protobuf::MessageFactory::generated_factory(v17);
  v19 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v19,
    `anonymous namespace'::CMsgQAngle_descriptor_,
    CMsgQAngle::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CMsgQAngle_offsets_,
    16,
    8,
    -1,
    v16,
    v18,
    40);
  v20 = *(FileByName + 80);
  `anonymous namespace'::CMsgQAngle_reflection_ = v19;
  `anonymous namespace'::CMsgPlayerInfo_descriptor_ = v20 + 3;
  v22 = google::protobuf::DescriptorPool::generated_pool(v21);
  v24 = google::protobuf::MessageFactory::generated_factory(v23);
  v25 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v25,
    `anonymous namespace'::CMsgPlayerInfo_descriptor_,
    CMsgPlayerInfo::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CMsgPlayerInfo_offsets_,
    16,
    8,
    -1,
    v22,
    v24,
    56);
  v26 = *(FileByName + 80);
  `anonymous namespace'::CMsgPlayerInfo_reflection_ = v25;
  `anonymous namespace'::CMsg_CVars_descriptor_ = v26 + 4;
  v28 = google::protobuf::DescriptorPool::generated_pool(v27);
  v30 = google::protobuf::MessageFactory::generated_factory(v29);
  v31 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v31,
    `anonymous namespace'::CMsg_CVars_descriptor_,
    CMsg_CVars::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CMsg_CVars_offsets_,
    16,
    8,
    -1,
    v28,
    v30,
    48);
  `anonymous namespace'::CMsg_CVars_reflection_ = v31;
  `anonymous namespace'::CMsg_CVars_CVar_descriptor_ = `anonymous namespace'::CMsg_CVars_descriptor_->nested_types_;
  v33 = google::protobuf::DescriptorPool::generated_pool(v32);
  v35 = google::protobuf::MessageFactory::generated_factory(v34);
  v36 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v36,
    `anonymous namespace'::CMsg_CVars_CVar_descriptor_,
    CMsg_CVars_CVar::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CMsg_CVars_CVar_offsets_,
    16,
    8,
    -1,
    v33,
    v35,
    40);
  v37 = *(FileByName + 80);
  `anonymous namespace'::CMsg_CVars_CVar_reflection_ = v36;
  `anonymous namespace'::CNETMsg_NOP_descriptor_ = v37 + 5;
  v39 = google::protobuf::DescriptorPool::generated_pool(v38);
  v41 = google::protobuf::MessageFactory::generated_factory(v40);
  v42 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v42,
    `anonymous namespace'::CNETMsg_NOP_descriptor_,
    CNETMsg_NOP::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_NOP_offsets_,
    16,
    8,
    -1,
    v39,
    v41,
    24);
  v43 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_NOP_reflection_ = v42;
  `anonymous namespace'::CNETMsg_SplitScreenUser_descriptor_ = v43 + 6;
  v45 = google::protobuf::DescriptorPool::generated_pool(v44);
  v47 = google::protobuf::MessageFactory::generated_factory(v46);
  v48 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v48,
    `anonymous namespace'::CNETMsg_SplitScreenUser_descriptor_,
    CNETMsg_SplitScreenUser::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_SplitScreenUser_offsets_,
    16,
    8,
    -1,
    v45,
    v47,
    32);
  v49 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_SplitScreenUser_reflection_ = v48;
  `anonymous namespace'::CNETMsg_Disconnect_descriptor_ = v49 + 7;
  v51 = google::protobuf::DescriptorPool::generated_pool(v50);
  v53 = google::protobuf::MessageFactory::generated_factory(v52);
  v54 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v54,
    `anonymous namespace'::CNETMsg_Disconnect_descriptor_,
    CNETMsg_Disconnect::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_Disconnect_offsets_,
    16,
    8,
    -1,
    v51,
    v53,
    32);
  v55 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_Disconnect_reflection_ = v54;
  `anonymous namespace'::CNETMsg_Tick_descriptor_ = v55 + 8;
  v57 = google::protobuf::DescriptorPool::generated_pool(v56);
  v59 = google::protobuf::MessageFactory::generated_factory(v58);
  v60 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v60,
    `anonymous namespace'::CNETMsg_Tick_descriptor_,
    CNETMsg_Tick::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_Tick_offsets_,
    16,
    8,
    -1,
    v57,
    v59,
    48);
  v61 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_Tick_reflection_ = v60;
  `anonymous namespace'::CNETMsg_StringCmd_descriptor_ = v61 + 9;
  v63 = google::protobuf::DescriptorPool::generated_pool(v62);
  v65 = google::protobuf::MessageFactory::generated_factory(v64);
  v66 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v66,
    `anonymous namespace'::CNETMsg_StringCmd_descriptor_,
    CNETMsg_StringCmd::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_StringCmd_offsets_,
    16,
    8,
    -1,
    v63,
    v65,
    32);
  v67 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_StringCmd_reflection_ = v66;
  `anonymous namespace'::CNETMsg_SetConVar_descriptor_ = v67 + 10;
  v69 = google::protobuf::DescriptorPool::generated_pool(v68);
  v71 = google::protobuf::MessageFactory::generated_factory(v70);
  v72 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v72,
    `anonymous namespace'::CNETMsg_SetConVar_descriptor_,
    CNETMsg_SetConVar::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_SetConVar_offsets_,
    16,
    8,
    -1,
    v69,
    v71,
    32);
  v73 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_SetConVar_reflection_ = v72;
  `anonymous namespace'::CNETMsg_SignonState_descriptor_ = v73 + 11;
  v75 = google::protobuf::DescriptorPool::generated_pool(v74);
  v77 = google::protobuf::MessageFactory::generated_factory(v76);
  v78 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v78,
    `anonymous namespace'::CNETMsg_SignonState_descriptor_,
    CNETMsg_SignonState::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_SignonState_offsets_,
    16,
    8,
    -1,
    v75,
    v77,
    80);
  v79 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_SignonState_reflection_ = v78;
  `anonymous namespace'::CSVCMsg_GameEvent_descriptor_ = v79 + 12;
  v81 = google::protobuf::DescriptorPool::generated_pool(v80);
  v83 = google::protobuf::MessageFactory::generated_factory(v82);
  v84 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v84,
    `anonymous namespace'::CSVCMsg_GameEvent_descriptor_,
    CSVCMsg_GameEvent::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CSVCMsg_GameEvent_offsets_,
    16,
    8,
    -1,
    v81,
    v83,
    64);
  `anonymous namespace'::CSVCMsg_GameEvent_reflection_ = v84;
  `anonymous namespace'::CSVCMsg_GameEvent_key_t_descriptor_ = `anonymous namespace'::CSVCMsg_GameEvent_descriptor_->nested_types_;
  v86 = google::protobuf::DescriptorPool::generated_pool(v85);
  v88 = google::protobuf::MessageFactory::generated_factory(v87);
  v89 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v89,
    `anonymous namespace'::CSVCMsg_GameEvent_key_t_descriptor_,
    CSVCMsg_GameEvent_key_t::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CSVCMsg_GameEvent_key_t_offsets_,
    16,
    8,
    -1,
    v86,
    v88,
    64);
  v90 = *(FileByName + 80);
  `anonymous namespace'::CSVCMsg_GameEvent_key_t_reflection_ = v89;
  `anonymous namespace'::CSVCMsgList_GameEvents_descriptor_ = v90 + 13;
  v92 = google::protobuf::DescriptorPool::generated_pool(v91);
  v94 = google::protobuf::MessageFactory::generated_factory(v93);
  v95 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v95,
    `anonymous namespace'::CSVCMsgList_GameEvents_descriptor_,
    CSVCMsgList_GameEvents::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CSVCMsgList_GameEvents_offsets_,
    16,
    8,
    -1,
    v92,
    v94,
    48);
  `anonymous namespace'::CSVCMsgList_GameEvents_reflection_ = v95;
  `anonymous namespace'::CSVCMsgList_GameEvents_event_t_descriptor_ = `anonymous namespace'::CSVCMsgList_GameEvents_descriptor_->nested_types_;
  v97 = google::protobuf::DescriptorPool::generated_pool(v96);
  v99 = google::protobuf::MessageFactory::generated_factory(v98);
  v100 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v100,
    `anonymous namespace'::CSVCMsgList_GameEvents_event_t_descriptor_,
    CSVCMsgList_GameEvents_event_t::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CSVCMsgList_GameEvents_event_t_offsets_,
    16,
    8,
    -1,
    v97,
    v99,
    40);
  v101 = *(FileByName + 80);
  `anonymous namespace'::CSVCMsgList_GameEvents_event_t_reflection_ = v100;
  `anonymous namespace'::CSVCMsg_UserMessage_descriptor_ = v101 + 14;
  v103 = google::protobuf::DescriptorPool::generated_pool(v102);
  v105 = google::protobuf::MessageFactory::generated_factory(v104);
  v106 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v106,
    `anonymous namespace'::CSVCMsg_UserMessage_descriptor_,
    CSVCMsg_UserMessage::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CSVCMsg_UserMessage_offsets_,
    16,
    8,
    -1,
    v103,
    v105,
    40);
  v107 = *(FileByName + 80);
  `anonymous namespace'::CSVCMsg_UserMessage_reflection_ = v106;
  `anonymous namespace'::CSVCMsgList_UserMessages_descriptor_ = v107 + 15;
  v109 = google::protobuf::DescriptorPool::generated_pool(v108);
  v111 = google::protobuf::MessageFactory::generated_factory(v110);
  v112 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v112,
    `anonymous namespace'::CSVCMsgList_UserMessages_descriptor_,
    CSVCMsgList_UserMessages::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CSVCMsgList_UserMessages_offsets_,
    16,
    8,
    -1,
    v109,
    v111,
    48);
  `anonymous namespace'::CSVCMsgList_UserMessages_reflection_ = v112;
  `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_descriptor_ = `anonymous namespace'::CSVCMsgList_UserMessages_descriptor_->nested_types_;
  v114 = google::protobuf::DescriptorPool::generated_pool(v113);
  v116 = google::protobuf::MessageFactory::generated_factory(v115);
  v117 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v117,
    `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_descriptor_,
    CSVCMsgList_UserMessages_usermsg_t::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CSVCMsgList_UserMessages_usermsg_t_offsets_,
    16,
    8,
    -1,
    v114,
    v116,
    40);
  v118 = *(FileByName + 80);
  `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_reflection_ = v117;
  `anonymous namespace'::CNETMsg_SpawnGroup_Load_descriptor_ = v118 + 16;
  v120 = google::protobuf::DescriptorPool::generated_pool(v119);
  v122 = google::protobuf::MessageFactory::generated_factory(v121);
  v123 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v123,
    `anonymous namespace'::CNETMsg_SpawnGroup_Load_descriptor_,
    CNETMsg_SpawnGroup_Load::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_SpawnGroup_Load_offsets_,
    16,
    8,
    -1,
    v120,
    v122,
    136);
  v124 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_SpawnGroup_Load_reflection_ = v123;
  `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_descriptor_ = v124 + 17;
  v126 = google::protobuf::DescriptorPool::generated_pool(v125);
  v128 = google::protobuf::MessageFactory::generated_factory(v127);
  v129 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v129,
    `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_descriptor_,
    CNETMsg_SpawnGroup_ManifestUpdate::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_SpawnGroup_ManifestUpdate_offsets_,
    16,
    8,
    -1,
    v126,
    v128,
    40);
  v130 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_reflection_ = v129;
  `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_descriptor_ = v130 + 18;
  v132 = google::protobuf::DescriptorPool::generated_pool(v131);
  v134 = google::protobuf::MessageFactory::generated_factory(v133);
  v135 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v135,
    `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_descriptor_,
    CNETMsg_SpawnGroup_SetCreationTick::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_SpawnGroup_SetCreationTick_offsets_,
    16,
    8,
    -1,
    v132,
    v134,
    40);
  v136 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_reflection_ = v135;
  `anonymous namespace'::CNETMsg_SpawnGroup_Unload_descriptor_ = v136 + 19;
  v138 = google::protobuf::DescriptorPool::generated_pool(v137);
  v140 = google::protobuf::MessageFactory::generated_factory(v139);
  v141 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v141,
    `anonymous namespace'::CNETMsg_SpawnGroup_Unload_descriptor_,
    CNETMsg_SpawnGroup_Unload::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_SpawnGroup_Unload_offsets_,
    16,
    8,
    -1,
    v138,
    v140,
    40);
  v142 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_SpawnGroup_Unload_reflection_ = v141;
  `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_descriptor_ = v142 + 20;
  v144 = google::protobuf::DescriptorPool::generated_pool(v143);
  v146 = google::protobuf::MessageFactory::generated_factory(v145);
  v147 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v147,
    `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_descriptor_,
    CNETMsg_SpawnGroup_LoadCompleted::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CNETMsg_SpawnGroup_LoadCompleted_offsets_,
    16,
    8,
    -1,
    v144,
    v146,
    32);
  v148 = *(FileByName + 80);
  `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_reflection_ = v147;
  `anonymous namespace'::CSVCMsg_GameSessionConfiguration_descriptor_ = v148 + 21;
  v150 = google::protobuf::DescriptorPool::generated_pool(v149);
  v152 = google::protobuf::MessageFactory::generated_factory(v151);
  v153 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v153,
    `anonymous namespace'::CSVCMsg_GameSessionConfiguration_descriptor_,
    CSVCMsg_GameSessionConfiguration::default_instance_,
    protobuf_AssignDesc_networkbasetypes_2eproto(void)::CSVCMsg_GameSessionConfiguration_offsets_,
    16,
    8,
    -1,
    v150,
    v152,
    112);
  v154 = *(FileByName + 96);
  `anonymous namespace'::CSVCMsg_GameSessionConfiguration_reflection_ = v153;
  `anonymous namespace'::NET_Messages_descriptor_ = v154;
  `anonymous namespace'::SpawnGroupFlags_t_descriptor_ = v154 + 1;
}


// protobuf_RegisterTypes  (line 592, @0x0000000001a8be30, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_networkbasetypes_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), CMsgVector::default_instance_, `anonymous namespace'::CMsgVector_descriptor_, CMsgVector2D::default_instance_, `anonymous namespace'::CMsgVector2D_descriptor_, CMsgQAngle::default_instance_, `anonymous namespace'::CMsgQAngle_descriptor_ (40 total)
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
  const google::protobuf::Message *v33; // rdx
  const google::protobuf::Descriptor *v34; // rsi
  const google::protobuf::Message *v35; // rdx
  const google::protobuf::Descriptor *v36; // rsi
  const google::protobuf::Message *v37; // rdx
  const google::protobuf::Descriptor *v38; // rsi
  const google::protobuf::Message *v39; // rdx
  const google::protobuf::Descriptor *v40; // rsi
  const google::protobuf::Message *v41; // rdx
  const google::protobuf::Descriptor *v42; // rsi
  const google::protobuf::Message *v43; // rdx
  const google::protobuf::Descriptor *v44; // rsi
  const google::protobuf::Message *v45; // rdx
  const google::protobuf::Descriptor *v46; // rsi
  const google::protobuf::Message *v47; // rdx
  const google::protobuf::Descriptor *v48; // rsi
  const google::protobuf::Message *v49; // rdx
  const google::protobuf::Descriptor *v50; // rsi
  const google::protobuf::Message *v51; // rdx
  const google::protobuf::Descriptor *v52; // rsi
  __int64 v53[2]; // [rsp+0h] [rbp-30h] BYREF
  char v54; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v54 = 0;
    v53[0] = off_47BFB70;
    v53[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v53, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v53);
  }
  v2 = CMsgVector::default_instance_;
  if ( CMsgVector::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v2 = CMsgVector::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgVector_descriptor_,
    v2,
    v1);
  v4 = CMsgVector2D::default_instance_;
  if ( CMsgVector2D::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v4 = CMsgVector2D::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgVector2D_descriptor_,
    v4,
    v3);
  v6 = CMsgQAngle::default_instance_;
  if ( CMsgQAngle::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v6 = CMsgQAngle::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgQAngle_descriptor_,
    v6,
    v5);
  v8 = CMsgPlayerInfo::default_instance_;
  if ( CMsgPlayerInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v8 = CMsgPlayerInfo::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsgPlayerInfo_descriptor_,
    v8,
    v7);
  v10 = CMsg_CVars::default_instance_;
  if ( CMsg_CVars::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v10 = CMsg_CVars::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsg_CVars_descriptor_,
    v10,
    v9);
  v12 = CMsg_CVars_CVar::default_instance_;
  if ( CMsg_CVars_CVar::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v12 = CMsg_CVars_CVar::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CMsg_CVars_CVar_descriptor_,
    v12,
    v11);
  v14 = CNETMsg_NOP::default_instance_;
  if ( CNETMsg_NOP::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v14 = CNETMsg_NOP::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_NOP_descriptor_,
    v14,
    v13);
  v16 = CNETMsg_SplitScreenUser::default_instance_;
  if ( CNETMsg_SplitScreenUser::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v16 = CNETMsg_SplitScreenUser::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_SplitScreenUser_descriptor_,
    v16,
    v15);
  v18 = CNETMsg_Disconnect::default_instance_;
  if ( CNETMsg_Disconnect::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v18 = CNETMsg_Disconnect::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_Disconnect_descriptor_,
    v18,
    v17);
  v20 = CNETMsg_Tick::default_instance_;
  if ( CNETMsg_Tick::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v20 = CNETMsg_Tick::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_Tick_descriptor_,
    v20,
    v19);
  v22 = CNETMsg_StringCmd::default_instance_;
  if ( CNETMsg_StringCmd::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v22 = CNETMsg_StringCmd::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_StringCmd_descriptor_,
    v22,
    v21);
  v24 = CNETMsg_SetConVar::default_instance_;
  if ( CNETMsg_SetConVar::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v24 = CNETMsg_SetConVar::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_SetConVar_descriptor_,
    v24,
    v23);
  v26 = CNETMsg_SignonState::default_instance_;
  if ( CNETMsg_SignonState::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v26 = CNETMsg_SignonState::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_SignonState_descriptor_,
    v26,
    v25);
  v28 = CSVCMsg_GameEvent::default_instance_;
  if ( CSVCMsg_GameEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v28 = CSVCMsg_GameEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CSVCMsg_GameEvent_descriptor_,
    v28,
    v27);
  v30 = CSVCMsg_GameEvent_key_t::default_instance_;
  if ( CSVCMsg_GameEvent_key_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v30 = CSVCMsg_GameEvent_key_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CSVCMsg_GameEvent_key_t_descriptor_,
    v30,
    v29);
  v32 = CSVCMsgList_GameEvents::default_instance_;
  if ( CSVCMsgList_GameEvents::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v32 = CSVCMsgList_GameEvents::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CSVCMsgList_GameEvents_descriptor_,
    v32,
    v31);
  v34 = CSVCMsgList_GameEvents_event_t::default_instance_;
  if ( CSVCMsgList_GameEvents_event_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v34 = CSVCMsgList_GameEvents_event_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CSVCMsgList_GameEvents_event_t_descriptor_,
    v34,
    v33);
  v36 = CSVCMsg_UserMessage::default_instance_;
  if ( CSVCMsg_UserMessage::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v36 = CSVCMsg_UserMessage::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CSVCMsg_UserMessage_descriptor_,
    v36,
    v35);
  v38 = CSVCMsgList_UserMessages::default_instance_;
  if ( CSVCMsgList_UserMessages::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v38 = CSVCMsgList_UserMessages::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CSVCMsgList_UserMessages_descriptor_,
    v38,
    v37);
  v40 = CSVCMsgList_UserMessages_usermsg_t::default_instance_;
  if ( CSVCMsgList_UserMessages_usermsg_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v40 = CSVCMsgList_UserMessages_usermsg_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_descriptor_,
    v40,
    v39);
  v42 = CNETMsg_SpawnGroup_Load::default_instance_;
  if ( CNETMsg_SpawnGroup_Load::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v42 = CNETMsg_SpawnGroup_Load::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_SpawnGroup_Load_descriptor_,
    v42,
    v41);
  v44 = CNETMsg_SpawnGroup_ManifestUpdate::default_instance_;
  if ( CNETMsg_SpawnGroup_ManifestUpdate::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v44 = CNETMsg_SpawnGroup_ManifestUpdate::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_descriptor_,
    v44,
    v43);
  v46 = CNETMsg_SpawnGroup_SetCreationTick::default_instance_;
  if ( CNETMsg_SpawnGroup_SetCreationTick::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v46 = CNETMsg_SpawnGroup_SetCreationTick::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_descriptor_,
    v46,
    v45);
  v48 = CNETMsg_SpawnGroup_Unload::default_instance_;
  if ( CNETMsg_SpawnGroup_Unload::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v48 = CNETMsg_SpawnGroup_Unload::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_SpawnGroup_Unload_descriptor_,
    v48,
    v47);
  v50 = CNETMsg_SpawnGroup_LoadCompleted::default_instance_;
  if ( CNETMsg_SpawnGroup_LoadCompleted::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v50 = CNETMsg_SpawnGroup_LoadCompleted::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_descriptor_,
    v50,
    v49);
  v52 = CSVCMsg_GameSessionConfiguration::default_instance_;
  if ( CSVCMsg_GameSessionConfiguration::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    v52 = CSVCMsg_GameSessionConfiguration::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CSVCMsg_GameSessionConfiguration_descriptor_,
    v52,
    v51);
}


// protobuf_ShutdownFile_networkbasetypes_2eproto  (line 650, @0x0000000001a75290, libserver.so)
// globals: CMsgVector::default_instance_, `anonymous namespace'::CMsgVector_reflection_, CMsgVector2D::default_instance_, `anonymous namespace'::CMsgVector2D_reflection_, CMsgQAngle::default_instance_, `anonymous namespace'::CMsgQAngle_reflection_, CMsgPlayerInfo::default_instance_, `anonymous namespace'::CMsgPlayerInfo_reflection_ (40 total)
void __cdecl protobuf_ShutdownFile_networkbasetypes_2eproto()
{
  if ( CMsgVector::default_instance_ != 0 )
    (CMsgVector::default_instance_->name_[1]._M_dataplus._M_p)(CMsgVector::default_instance_);
  if ( `anonymous namespace'::CMsgVector_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgVector_reflection_ + 8LL))(`anonymous namespace'::CMsgVector_reflection_);
  if ( CMsgVector2D::default_instance_ != 0 )
    (CMsgVector2D::default_instance_->name_[1]._M_dataplus._M_p)(CMsgVector2D::default_instance_);
  if ( `anonymous namespace'::CMsgVector2D_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgVector2D_reflection_ + 8LL))(`anonymous namespace'::CMsgVector2D_reflection_);
  if ( CMsgQAngle::default_instance_ != 0 )
    (CMsgQAngle::default_instance_->name_[1]._M_dataplus._M_p)(CMsgQAngle::default_instance_);
  if ( `anonymous namespace'::CMsgQAngle_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgQAngle_reflection_ + 8LL))(`anonymous namespace'::CMsgQAngle_reflection_);
  if ( CMsgPlayerInfo::default_instance_ != 0 )
    (CMsgPlayerInfo::default_instance_->name_[1]._M_dataplus._M_p)(CMsgPlayerInfo::default_instance_);
  if ( `anonymous namespace'::CMsgPlayerInfo_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsgPlayerInfo_reflection_ + 8LL))(`anonymous namespace'::CMsgPlayerInfo_reflection_);
  if ( CMsg_CVars::default_instance_ != 0 )
    (CMsg_CVars::default_instance_->name_[1]._M_dataplus._M_p)(CMsg_CVars::default_instance_);
  if ( `anonymous namespace'::CMsg_CVars_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsg_CVars_reflection_ + 8LL))(`anonymous namespace'::CMsg_CVars_reflection_);
  if ( CMsg_CVars_CVar::default_instance_ != 0 )
    (CMsg_CVars_CVar::default_instance_->name_[1]._M_dataplus._M_p)(CMsg_CVars_CVar::default_instance_);
  if ( `anonymous namespace'::CMsg_CVars_CVar_reflection_ != 0 )
    (*(*`anonymous namespace'::CMsg_CVars_CVar_reflection_ + 8LL))(`anonymous namespace'::CMsg_CVars_CVar_reflection_);
  if ( CNETMsg_NOP::default_instance_ != 0 )
    (CNETMsg_NOP::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_NOP::default_instance_);
  if ( `anonymous namespace'::CNETMsg_NOP_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_NOP_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_NOP_reflection_);
  if ( CNETMsg_SplitScreenUser::default_instance_ != 0 )
    (CNETMsg_SplitScreenUser::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_SplitScreenUser::default_instance_);
  if ( `anonymous namespace'::CNETMsg_SplitScreenUser_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_SplitScreenUser_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_SplitScreenUser_reflection_);
  if ( CNETMsg_Disconnect::default_instance_ != 0 )
    (CNETMsg_Disconnect::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_Disconnect::default_instance_);
  if ( `anonymous namespace'::CNETMsg_Disconnect_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_Disconnect_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_Disconnect_reflection_);
  if ( CNETMsg_Tick::default_instance_ != 0 )
    (CNETMsg_Tick::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_Tick::default_instance_);
  if ( `anonymous namespace'::CNETMsg_Tick_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_Tick_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_Tick_reflection_);
  if ( CNETMsg_StringCmd::default_instance_ != 0 )
    (CNETMsg_StringCmd::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_StringCmd::default_instance_);
  if ( `anonymous namespace'::CNETMsg_StringCmd_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_StringCmd_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_StringCmd_reflection_);
  if ( CNETMsg_SetConVar::default_instance_ != 0 )
    (CNETMsg_SetConVar::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_SetConVar::default_instance_);
  if ( `anonymous namespace'::CNETMsg_SetConVar_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_SetConVar_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_SetConVar_reflection_);
  if ( CNETMsg_SignonState::default_instance_ != 0 )
    (CNETMsg_SignonState::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_SignonState::default_instance_);
  if ( `anonymous namespace'::CNETMsg_SignonState_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_SignonState_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_SignonState_reflection_);
  if ( CSVCMsg_GameEvent::default_instance_ != 0 )
    (CSVCMsg_GameEvent::default_instance_->name_[1]._M_dataplus._M_p)(CSVCMsg_GameEvent::default_instance_);
  if ( `anonymous namespace'::CSVCMsg_GameEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CSVCMsg_GameEvent_reflection_ + 8LL))(`anonymous namespace'::CSVCMsg_GameEvent_reflection_);
  if ( CSVCMsg_GameEvent_key_t::default_instance_ != 0 )
    (CSVCMsg_GameEvent_key_t::default_instance_->name_[1]._M_dataplus._M_p)(CSVCMsg_GameEvent_key_t::default_instance_);
  if ( `anonymous namespace'::CSVCMsg_GameEvent_key_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CSVCMsg_GameEvent_key_t_reflection_ + 8LL))(`anonymous namespace'::CSVCMsg_GameEvent_key_t_reflection_);
  if ( CSVCMsgList_GameEvents::default_instance_ != 0 )
    (CSVCMsgList_GameEvents::default_instance_->name_[1]._M_dataplus._M_p)(CSVCMsgList_GameEvents::default_instance_);
  if ( `anonymous namespace'::CSVCMsgList_GameEvents_reflection_ != 0 )
    (*(*`anonymous namespace'::CSVCMsgList_GameEvents_reflection_ + 8LL))(`anonymous namespace'::CSVCMsgList_GameEvents_reflection_);
  if ( CSVCMsgList_GameEvents_event_t::default_instance_ != 0 )
    (CSVCMsgList_GameEvents_event_t::default_instance_->name_[1]._M_dataplus._M_p)(CSVCMsgList_GameEvents_event_t::default_instance_);
  if ( `anonymous namespace'::CSVCMsgList_GameEvents_event_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CSVCMsgList_GameEvents_event_t_reflection_ + 8LL))(`anonymous namespace'::CSVCMsgList_GameEvents_event_t_reflection_);
  if ( CSVCMsg_UserMessage::default_instance_ != 0 )
    (CSVCMsg_UserMessage::default_instance_->name_[1]._M_dataplus._M_p)(CSVCMsg_UserMessage::default_instance_);
  if ( `anonymous namespace'::CSVCMsg_UserMessage_reflection_ != 0 )
    (*(*`anonymous namespace'::CSVCMsg_UserMessage_reflection_ + 8LL))(`anonymous namespace'::CSVCMsg_UserMessage_reflection_);
  if ( CSVCMsgList_UserMessages::default_instance_ != 0 )
    (CSVCMsgList_UserMessages::default_instance_->name_[1]._M_dataplus._M_p)(CSVCMsgList_UserMessages::default_instance_);
  if ( `anonymous namespace'::CSVCMsgList_UserMessages_reflection_ != 0 )
    (*(*`anonymous namespace'::CSVCMsgList_UserMessages_reflection_ + 8LL))(`anonymous namespace'::CSVCMsgList_UserMessages_reflection_);
  if ( CSVCMsgList_UserMessages_usermsg_t::default_instance_ != 0 )
    (CSVCMsgList_UserMessages_usermsg_t::default_instance_->name_[1]._M_dataplus._M_p)(CSVCMsgList_UserMessages_usermsg_t::default_instance_);
  if ( `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_reflection_ + 8LL))(`anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_reflection_);
  if ( CNETMsg_SpawnGroup_Load::default_instance_ != 0 )
    (CNETMsg_SpawnGroup_Load::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_SpawnGroup_Load::default_instance_);
  if ( `anonymous namespace'::CNETMsg_SpawnGroup_Load_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_SpawnGroup_Load_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_SpawnGroup_Load_reflection_);
  if ( CNETMsg_SpawnGroup_ManifestUpdate::default_instance_ != 0 )
    (CNETMsg_SpawnGroup_ManifestUpdate::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_SpawnGroup_ManifestUpdate::default_instance_);
  if ( `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_reflection_);
  if ( CNETMsg_SpawnGroup_SetCreationTick::default_instance_ != 0 )
    (CNETMsg_SpawnGroup_SetCreationTick::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_SpawnGroup_SetCreationTick::default_instance_);
  if ( `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_reflection_);
  if ( CNETMsg_SpawnGroup_Unload::default_instance_ != 0 )
    (CNETMsg_SpawnGroup_Unload::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_SpawnGroup_Unload::default_instance_);
  if ( `anonymous namespace'::CNETMsg_SpawnGroup_Unload_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_SpawnGroup_Unload_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_SpawnGroup_Unload_reflection_);
  if ( CNETMsg_SpawnGroup_LoadCompleted::default_instance_ != 0 )
    (CNETMsg_SpawnGroup_LoadCompleted::default_instance_->name_[1]._M_dataplus._M_p)(CNETMsg_SpawnGroup_LoadCompleted::default_instance_);
  if ( `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_reflection_ != 0 )
    (*(*`anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_reflection_ + 8LL))(`anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_reflection_);
  if ( CSVCMsg_GameSessionConfiguration::default_instance_ != 0 )
    (CSVCMsg_GameSessionConfiguration::default_instance_->name_[1]._M_dataplus._M_p)(CSVCMsg_GameSessionConfiguration::default_instance_);
  if ( `anonymous namespace'::CSVCMsg_GameSessionConfiguration_reflection_ != 0 )
    (*(*`anonymous namespace'::CSVCMsg_GameSessionConfiguration_reflection_ + 8LL))(`anonymous namespace'::CSVCMsg_GameSessionConfiguration_reflection_);
}


// protobuf_AddDesc_networkbasetypes_2eproto  (line 705, @0x0000000001a8a4d0, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), protobuf_AddDesc_network_5fconnection_2eproto, google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CMsgVector::CMsgVector, CMsgVector2D::CMsgVector2D, CMsgQAngle::CMsgQAngle, CMsgPlayerInfo::CMsgPlayerInfo, CMsg_CVars::CMsg_CVars, CMsg_CVars_CVar::CMsg_CVars_CVar, CNETMsg_NOP::CNETMsg_NOP (38 total)
// callers: protobuf_AssignDesc_networkbasetypes_2eproto, CMsgVector::default_instance, CMsgVector2D::default_instance, CMsgQAngle::default_instance, CNETMsg_SpawnGroup_Load::InitAsDefaultInstance, CMsgPlayerInfo::default_instance, CMsg_CVars_CVar::default_instance, CMsg_CVars::default_instance, CNETMsg_SetConVar::InitAsDefaultInstance, CNETMsg_NOP::default_instance, CNETMsg_SplitScreenUser::default_instance, CNETMsg_Disconnect::default_instance (41 total)
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "networkbasetypes.proto"
// globals: protobuf_AddDesc_networkbasetypes_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CMsgVector::default_instance_, CMsgVector2D::default_instance_, CMsgQAngle::default_instance_, CMsgPlayerInfo::default_instance_, CMsg_CVars::default_instance_, CMsg_CVars_CVar::default_instance_ (29 total)
void __cdecl protobuf_AddDesc_networkbasetypes_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CMsgVector *v3; // rbx
  CMsgVector2D *v4; // rbx
  CMsgQAngle *v5; // rbx
  CMsgPlayerInfo *v6; // rbx
  CMsg_CVars *v7; // rbx
  CMsg_CVars_CVar *v8; // rbx
  CNETMsg_NOP *v9; // rbx
  CNETMsg_SplitScreenUser *v10; // rbx
  CNETMsg_Disconnect *v11; // rbx
  CNETMsg_Tick *v12; // rbx
  CNETMsg_StringCmd *v13; // rbx
  CNETMsg_SetConVar *v14; // rbx
  CNETMsg_SignonState *v15; // rbx
  CSVCMsg_GameEvent *v16; // rbx
  CSVCMsg_GameEvent_key_t *v17; // rbx
  CSVCMsgList_GameEvents *v18; // rbx
  CSVCMsgList_GameEvents_event_t *v19; // rbx
  CSVCMsg_UserMessage *v20; // rbx
  CSVCMsgList_UserMessages *v21; // rbx
  CSVCMsgList_UserMessages_usermsg_t *v22; // rbx
  CNETMsg_SpawnGroup_Load *v23; // rbx
  CNETMsg_SpawnGroup_ManifestUpdate *v24; // rbx
  CNETMsg_SpawnGroup_SetCreationTick *v25; // rbx
  CNETMsg_SpawnGroup_Unload *v26; // rbx
  CNETMsg_SpawnGroup_LoadCompleted *v27; // rbx
  CSVCMsg_GameSessionConfiguration *v28; // rbx
  void (*v29)(void); // rsi

  if ( !protobuf_AddDesc_networkbasetypes_2eproto(void)::already_here )
  {
    protobuf_AddDesc_networkbasetypes_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      v0);
    protobuf_AddDesc_network_5fconnection_2eproto();
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_3274770, &stru_DE8, v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "networkbasetypes.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x28u);
    CMsgVector::CMsgVector(v3);
    CMsgVector::default_instance_ = v3;
    v4 = operator new(0x20u);
    CMsgVector2D::CMsgVector2D(v4);
    CMsgVector2D::default_instance_ = v4;
    v5 = operator new(0x28u);
    CMsgQAngle::CMsgQAngle(v5);
    CMsgQAngle::default_instance_ = v5;
    v6 = operator new(0x38u);
    CMsgPlayerInfo::CMsgPlayerInfo(v6);
    CMsgPlayerInfo::default_instance_ = v6;
    v7 = operator new(0x30u);
    CMsg_CVars::CMsg_CVars(v7);
    CMsg_CVars::default_instance_ = v7;
    v8 = operator new(0x28u);
    CMsg_CVars_CVar::CMsg_CVars_CVar(v8);
    CMsg_CVars_CVar::default_instance_ = v8;
    v9 = operator new(0x18u);
    CNETMsg_NOP::CNETMsg_NOP(v9);
    CNETMsg_NOP::default_instance_ = v9;
    v10 = operator new(0x20u);
    CNETMsg_SplitScreenUser::CNETMsg_SplitScreenUser(v10);
    CNETMsg_SplitScreenUser::default_instance_ = v10;
    v11 = operator new(0x20u);
    CNETMsg_Disconnect::CNETMsg_Disconnect(v11);
    CNETMsg_Disconnect::default_instance_ = v11;
    v12 = operator new(0x30u);
    CNETMsg_Tick::CNETMsg_Tick(v12);
    CNETMsg_Tick::default_instance_ = v12;
    v13 = operator new(0x20u);
    CNETMsg_StringCmd::CNETMsg_StringCmd(v13);
    CNETMsg_StringCmd::default_instance_ = v13;
    v14 = operator new(0x20u);
    CNETMsg_SetConVar::CNETMsg_SetConVar(v14);
    CNETMsg_SetConVar::default_instance_ = v14;
    v15 = operator new(0x50u);
    CNETMsg_SignonState::CNETMsg_SignonState(v15);
    CNETMsg_SignonState::default_instance_ = v15;
    v16 = operator new(0x40u);
    CSVCMsg_GameEvent::CSVCMsg_GameEvent(v16);
    CSVCMsg_GameEvent::default_instance_ = v16;
    v17 = operator new(0x40u);
    CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t(v17);
    CSVCMsg_GameEvent_key_t::default_instance_ = v17;
    v18 = operator new(0x30u);
    CSVCMsgList_GameEvents::CSVCMsgList_GameEvents(v18);
    CSVCMsgList_GameEvents::default_instance_ = v18;
    v19 = operator new(0x28u);
    CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t(v19);
    CSVCMsgList_GameEvents_event_t::default_instance_ = v19;
    v20 = operator new(0x28u);
    CSVCMsg_UserMessage::CSVCMsg_UserMessage(v20);
    CSVCMsg_UserMessage::default_instance_ = v20;
    v21 = operator new(0x30u);
    CSVCMsgList_UserMessages::CSVCMsgList_UserMessages(v21);
    CSVCMsgList_UserMessages::default_instance_ = v21;
    v22 = operator new(0x28u);
    CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t(v22);
    CSVCMsgList_UserMessages_usermsg_t::default_instance_ = v22;
    v23 = operator new(0x88u);
    CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load(v23);
    CNETMsg_SpawnGroup_Load::default_instance_ = v23;
    v24 = operator new(0x28u);
    CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate(v24);
    CNETMsg_SpawnGroup_ManifestUpdate::default_instance_ = v24;
    v25 = operator new(0x28u);
    CNETMsg_SpawnGroup_SetCreationTick::CNETMsg_SpawnGroup_SetCreationTick(v25);
    CNETMsg_SpawnGroup_SetCreationTick::default_instance_ = v25;
    v26 = operator new(0x28u);
    CNETMsg_SpawnGroup_Unload::CNETMsg_SpawnGroup_Unload(v26);
    CNETMsg_SpawnGroup_Unload::default_instance_ = v26;
    v27 = operator new(0x20u);
    CNETMsg_SpawnGroup_LoadCompleted::CNETMsg_SpawnGroup_LoadCompleted(v27);
    CNETMsg_SpawnGroup_LoadCompleted::default_instance_ = v27;
    v28 = operator new(0x70u);
    CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration(v28);
    CSVCMsg_GameSessionConfiguration::default_instance_ = v28;
    CNETMsg_SetConVar::InitAsDefaultInstance(CNETMsg_SetConVar::default_instance_);
    CSVCMsgList_GameEvents_event_t::InitAsDefaultInstance(CSVCMsgList_GameEvents_event_t::default_instance_);
    CSVCMsgList_UserMessages_usermsg_t::InitAsDefaultInstance(CSVCMsgList_UserMessages_usermsg_t::default_instance_);
    CNETMsg_SpawnGroup_Load::InitAsDefaultInstance(CNETMsg_SpawnGroup_Load::default_instance_);
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_networkbasetypes_2eproto, v29);
  }
}


// NET_Messages_descriptor  (line 865, @0x0000000001a7fbc0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::NET_Messages_descriptor_
const google::protobuf::EnumDescriptor *__cdecl NET_Messages_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::NET_Messages_descriptor_;
}


// NET_Messages_IsValid  (line 869, @0x0000000001a7fc50, libserver.so)
bool __fastcall NET_Messages_IsValid(int value)
{
  bool result; // al

  result = 0;
  if ( value <= 0xD )
    return ((1LL << value) & 0x3BFB) != 0;
  return result;
}


// SpawnGroupFlags_t_descriptor  (line 889, @0x0000000001a7fc70, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::SpawnGroupFlags_t_descriptor_
const google::protobuf::EnumDescriptor *__cdecl SpawnGroupFlags_t_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::SpawnGroupFlags_t_descriptor_;
}


// SpawnGroupFlags_t_IsValid  (line 893, @0x0000000001a7fd00, libserver.so)
bool __fastcall SpawnGroupFlags_t_IsValid(int value)
{
  if ( value == 16 )
    return 1;
  if ( value > 16 )
  {
    if ( value != 64 )
    {
      if ( value > 64 )
        return value == 128 || value == 256;
      if ( value != 32 )
        return 0;
    }
    return 1;
  }
  if ( value == 4 )
    return 1;
  if ( value <= 4 )
    return (value - 1) <= 1;
  return value == 8;
}


// CMsgVector::CMsgVector  (line 919, @0x0000000001a7fd70, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgVector::New, CNETMsg_SpawnGroup_Load::MergePartialFromCodedStream, CNETMsg_SpawnGroup_Load::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto, CSVCMsg_BSPDecal::MergeFrom, CSVCMsg_BSPDecal::MergePartialFromCodedStream, CUserMessageShakeDir::MergeFrom, CUserMessageScreenTilt::MergeFrom, CEntityMessagePropagateForce::MergeFrom, CEntityMessageDoSpark::MergeFrom, CUserMsg_ParticleManager_UpdateParticle::MergeFrom, CUserMsg_ParticleManager_UpdateParticleFwd::MergeFrom (159 total)
void __fastcall CMsgVector::CMsgVector(CMsgVector *const this)
{
  *this = off_3F6E510;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CMsgVector::InitAsDefaultInstance  (line 925, @0x0000000001a7fe10, libserver.so)
void __fastcall CMsgVector::InitAsDefaultInstance(CMsgVector *const this)
{
  ;
}


// CMsgVector::CMsgVector  (line 928, @0x0000000001a7ffe0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgVector::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgVector::CMsgVector(CMsgVector *const this, const CMsgVector *const from)
{
  *this = off_3F6E510;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  CMsgVector::MergeFrom(this, from);
}


// CMsgVector::SharedCtor  (line 935, @0x0000000001a7fe20, libserver.so)  // inlines: memset
void __fastcall CMsgVector::SharedCtor(CMsgVector *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CMsgVector::~CMsgVector  (line 943, @0x0000000001a76010, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CMsgVector::~CMsgVector(CMsgVector *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6E510;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CMsgVector::~CMsgVector  (line 943, @0x0000000001a76040, libserver.so)  // inlines: ~CMsgVector
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CMsgVector::~CMsgVector(CMsgVector *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6E510;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CMsgVector::SharedDtor  (line 948, @0x0000000001a7fe50, libserver.so)
void __fastcall CMsgVector::SharedDtor(CMsgVector *const this)
{
  ;
}


// CMsgVector::SetCachedSize  (line 953, @0x0000000001a75650, libserver.so)
void __fastcall CMsgVector::SetCachedSize(const CMsgVector *const this, int size)
{
  *(this + 5) = size;
}


// CMsgVector::descriptor  (line 958, @0x0000000001a7fe60, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsgVector_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgVector::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgVector_descriptor_;
}


// CMsgVector::default_instance  (line 963, @0x0000000001a8b850, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// callers: CSVCMsg_BSPDecal::InitAsDefaultInstance, protobuf_AddDesc_netmessages_2eproto, CUserMessageScreenTilt::InitAsDefaultInstance, CEntityMessagePropagateForce::InitAsDefaultInstance, CEntityMessageDoSpark::InitAsDefaultInstance, CUserMsg_ParticleManager_UpdateParticle::InitAsDefaultInstance, CUserMsg_ParticleManager_UpdateParticleFwd::InitAsDefaultInstance, CUserMsg_ParticleManager_UpdateParticleOrient::InitAsDefaultInstance, CUserMsg_ParticleManager_UpdateParticleFallback::InitAsDefaultInstance, CUserMsg_ParticleManager_UpdateParticleOffset::InitAsDefaultInstance, CUserMsg_ParticleManager_UpdateParticleEnt::InitAsDefaultInstance, protobuf_AddDesc_usermessages_2eproto (62 total)
// globals: CMsgVector::default_instance_
const CMsgVector *__cdecl CMsgVector::default_instance()
{
  const CMsgVector *result; // rax

  result = CMsgVector::default_instance_;
  if ( CMsgVector::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CMsgVector::default_instance_;
  }
  return result;
}


// CMsgVector::New  (line 970, @0x0000000001a7fdd0, libserver.so)
// calls: operator new, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
CMsgVector *__fastcall CMsgVector::New(const CMsgVector *const this)
{
  CMsgVector *v1; // rbx

  v1 = operator new(0x28u);
  CMsgVector::CMsgVector(v1);
  return v1;
}


// CMsgVector::Clear  (line 974, @0x0000000001a765c0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CNETMsg_SpawnGroup_Load::Clear, CSVCMsg_BSPDecal::Clear, CUserMessageShakeDir::Clear, CUserMessageScreenTilt::Clear, CEntityMessagePropagateForce::Clear, CEntityMessageDoSpark::Clear, CUserMsg_ParticleManager_UpdateParticle::Clear, CUserMsg_ParticleManager_UpdateParticleFwd::Clear, CUserMsg_ParticleManager_UpdateParticleOrient::Clear, CUserMsg_ParticleManager_UpdateParticleFallback::Clear, CUserMsg_ParticleManager_UpdateParticleOffset::Clear, CUserMsg_ParticleManager_UpdateParticleEnt::Clear (56 total)
void __fastcall CMsgVector::Clear(CMsgVector *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgVector::MergePartialFromCodedStream  (line 994, @0x0000000001a7d2b0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadTagWithCutoff, memcpy, set_has_x, set_has_y, set_has_z
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// callers: CNETMsg_SpawnGroup_Load::MergePartialFromCodedStream, CSVCMsg_BSPDecal::MergePartialFromCodedStream, CEntityMessageDoSpark::MergePartialFromCodedStream, CUserMsg_ParticleManager_UpdateParticle::MergePartialFromCodedStream, CUserMsg_ParticleManager_UpdateParticleOffset::MergePartialFromCodedStream, CUserMsg_ParticleManager_UpdateParticleFwd::MergePartialFromCodedStream, CUserMsg_ParticleManager_UpdateParticleFallback::MergePartialFromCodedStream, CUserMessageShakeDir::MergePartialFromCodedStream, CUserMessageScreenTilt::MergePartialFromCodedStream, CUserMsg_ParticleManager_UpdateParticleEnt::MergePartialFromCodedStream, CEntityMessagePropagateForce::MergePartialFromCodedStream, CUserMsg_ParticleManager_UpdateParticleOrient::MergePartialFromCodedStream (56 total)
bool __fastcall CMsgVector::MergePartialFromCodedStream(
        CMsgVector *const this,
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
        if ( v9 != 21 )
          goto handle_unusual;
        v15 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_y;
      }
      if ( v10 != 3 )
        break;
      if ( v9 != 29 )
        goto handle_unusual;
      v16 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_z:
      if ( buffer_end - v16 <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v19);
        if ( !result )
          return result;
        v17 = v19[0];
      }
      else
      {
        v17 = *v16;
        input->buffer_ = v16 + 4;
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
    if ( v10 != 1 || v9 != 13 )
      break;
    v13 = input->buffer_;
    if ( LODWORD(input->buffer_end_) - v13 <= 3 )
    {
      result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v19);
      if ( !result )
        return result;
      v14 = v19[0];
    }
    else
    {
      v14 = *v13;
      input->buffer_ = v13 + 4;
    }
    *(this + 4) |= 1u;
    *(this + 6) = v14;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 21 )
    {
      v15 = buffer + 1;
      input->buffer_ = v15;
parse_y:
      if ( buffer_end - v15 <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v19);
        if ( !result )
          return result;
        v18 = v19[0];
      }
      else
      {
        v18 = *v15;
        input->buffer_ = v15 + 4;
      }
      *(this + 4) |= 2u;
      *(this + 7) = v18;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 29 )
      {
        v16 = buffer + 1;
        input->buffer_ = v16;
        goto parse_z;
      }
    }
  }
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgVector::SerializeWithCachedSizes  (line 1070, @0x0000000001a76a10, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgVector::SerializeWithCachedSizes(
        const CMsgVector *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  int v5; // eax
  __int64 v6; // rax

  v5 = *(this + 4);
  if ( (v5 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_0 + 1, output, *(this + 6), v2);
    v5 = *(this + 4);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
LABEL_9:
      google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 1, output, *(this + 8), v2);
      v6 = *(this + 1);
      if ( v6 == 0 )
        return;
      goto LABEL_5;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2, output, *(this + 7), v2);
  if ( (*(this + 4) & 4) != 0 )
    goto LABEL_9;
LABEL_4:
  v6 = *(this + 1);
  if ( v6 == 0 )
    return;
LABEL_5:
  if ( *(v6 + 8) != *v6 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v6);
}


// CMsgVector::SerializeWithCachedSizesToArray  (line 1095, @0x0000000001a791e0, libserver.so)  // inlines: WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteTagToArray, empty, memcpy
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CNETMsg_SpawnGroup_Load::SerializeWithCachedSizesToArray, CSVCMsg_BSPDecal::SerializeWithCachedSizesToArray, CEntityMessageDoSpark::SerializeWithCachedSizesToArray, CEntityMessagePropagateForce::SerializeWithCachedSizesToArray, CUserMsg_ParticleManager_UpdateParticleFwd::SerializeWithCachedSizesToArray, CUserMsg_ParticleManager_UpdateParticle::SerializeWithCachedSizesToArray, CUserMsg_ParticleManager_UpdateParticleFallback::SerializeWithCachedSizesToArray, CUserMsg_ParticleManager_UpdateParticleOffset::SerializeWithCachedSizesToArray, CUserMessageShakeDir::SerializeWithCachedSizesToArray, CUserMsg_ParticleManager_UpdateParticleOrient::SerializeWithCachedSizesToArray, CUserMessageScreenTilt::SerializeWithCachedSizesToArray, CUserMsg_ParticleManager_UpdateParticleEnt::SerializeWithCachedSizesToArray (56 total)
google::protobuf::uint8 *__fastcall CMsgVector::SerializeWithCachedSizesToArray(
        const CMsgVector *const this,
        google::protobuf::uint8 *target)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

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
    *target = 21;
    target += 5;
    *(target - 1) = v4;
    v2 = *(this + 4);
  }
  if ( (v2 & 4) != 0 )
  {
    v5 = *(this + 8);
    target += 5;
    *(target - 5) = 29;
    *(target - 1) = v5;
  }
  v6 = *(this + 1);
  if ( v6 == 0 || *(v6 + 8) == *v6 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v6);
}


// CMsgVector::ByteSize  (line 1121, @0x0000000001a76c30, libserver.so)  // inlines: empty, has_x
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CNETMsg_SpawnGroup_Load::ByteSize, CSVCMsg_BSPDecal::ByteSize, CUserMsg_ParticleManager_UpdateParticleEnt::ByteSize, CEntityMessagePropagateForce::ByteSize, CUserMsg_ParticleManager_UpdateParticleFallback::ByteSize, CUserMsg_ParticleManager_UpdateParticleOffset::ByteSize, CUserMsg_ParticleManager_UpdateParticle::ByteSize, CUserMsg_ParticleManager_UpdateParticleFwd::ByteSize, CUserMessageShakeDir::ByteSize, CUserMessageScreenTilt::ByteSize, CEntityMessageDoSpark::ByteSize, CUserMsg_ParticleManager_UpdateParticleOrient::ByteSize (56 total)
int __fastcall CMsgVector::ByteSize(const CMsgVector *const this)
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
    if ( (v4 & 4) != 0 )
      v3 += 5;
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgVector::MergeFrom  (line 1152, @0x0000000001a80070, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgVector*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgVector::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgVector
void __fastcall CMsgVector::MergeFrom(CMsgVector *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgVector *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      1153);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgVector, 0)) != 0 )
  {
    CMsgVector::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgVector::MergeFrom  (line 1164, @0x0000000001a7fef0, libserver.so)  // inlines: set_has_x, set_has_y, set_has_z, set_x, set_y, set_z
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgVector::CMsgVector, CMsgVector::MergeFrom, CMsgVector::CopyFrom, CNETMsg_SpawnGroup_Load::MergeFrom, CSVCMsg_BSPDecal::MergeFrom, CUserMessageShakeDir::MergeFrom, CUserMessageScreenTilt::MergeFrom, CEntityMessagePropagateForce::MergeFrom, CEntityMessageDoSpark::MergeFrom, CUserMsg_ParticleManager_UpdateParticle::MergeFrom, CUserMsg_ParticleManager_UpdateParticleFwd::MergeFrom, CUserMsg_ParticleManager_UpdateParticleOrient::MergeFrom (59 total)
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgVector::MergeFrom(CMsgVector *const this, const CMsgVector *const from)
{
  int v4; // eax
  int v5; // xmm0_4
  int v6; // xmm0_4
  int v7; // xmm0_4
  __int64 v8; // rax
  char v9; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v10; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      1165);
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


// CMsgVector::CopyFrom  (line 1180, @0x0000000001a75660, libserver.so)
void __fastcall CMsgVector::CopyFrom(CMsgVector *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgVector::CopyFrom  (line 1186, @0x0000000001a80150, libserver.so)
// calls: CMsgVector::MergeFrom
void __fastcall CMsgVector::CopyFrom(CMsgVector *const this, const CMsgVector *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgVector::MergeFrom(this, from);
  }
}


// CMsgVector::IsInitialized  (line 1192, @0x0000000001a756a0, libserver.so)
bool __fastcall CMsgVector::IsInitialized(const CMsgVector *const this)
{
  return 1;
}


// CMsgVector::Swap  (line 1197, @0x0000000001a80190, libserver.so)  // inlines: Swap, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgVector::Swap(CMsgVector *const this, CMsgVector *other)
{
  int v2; // xmm1_4
  int v3; // xmm1_4
  int v4; // xmm1_4
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


// CMsgVector::GetMetadata  (line 1208, @0x0000000001a7b9f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsgVector_descriptor_, `anonymous namespace'::CMsgVector_reflection_
google::protobuf::Metadata __fastcall CMsgVector::GetMetadata(const CMsgVector *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgVector_descriptor_;
  result.reflection = `anonymous namespace'::CMsgVector_reflection_;
  return result;
}


// CMsgVector2D::CMsgVector2D  (line 1224, @0x0000000001a80200, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgVector2D::New, protobuf_AddDesc_networkbasetypes_2eproto, CDOTAUserMsg_CombatHeroPositions::MergeFrom, CDOTAUserMsg_CreateLinearProjectile::MergeFrom, CDOTAUserMsg_CombatHeroPositions::MergePartialFromCodedStream, CDOTAUserMsg_CreateLinearProjectile::MergePartialFromCodedStream, CDOTA_CombatLog::SendHeroPositions, CDOTA_ProjectileManager::CreateLinearProjectile
void __fastcall CMsgVector2D::CMsgVector2D(CMsgVector2D *const this)
{
  *this = off_3F6E5D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CMsgVector2D::InitAsDefaultInstance  (line 1230, @0x0000000001a802a0, libserver.so)
void __fastcall CMsgVector2D::InitAsDefaultInstance(CMsgVector2D *const this)
{
  ;
}


// CMsgVector2D::CMsgVector2D  (line 1233, @0x0000000001a80460, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgVector2D::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgVector2D::CMsgVector2D(CMsgVector2D *const this, const CMsgVector2D *const from)
{
  *this = off_3F6E5D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
  CMsgVector2D::MergeFrom(this, from);
}


// CMsgVector2D::SharedCtor  (line 1240, @0x0000000001a802b0, libserver.so)  // inlines: memset
void __fastcall CMsgVector2D::SharedCtor(CMsgVector2D *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 4) = 0;
}


// CMsgVector2D::~CMsgVector2D  (line 1247, @0x0000000001a76080, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CMsgVector2D::~CMsgVector2D(CMsgVector2D *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6E5D0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CMsgVector2D::~CMsgVector2D  (line 1247, @0x0000000001a760b0, libserver.so)  // inlines: ~CMsgVector2D
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CMsgVector2D::~CMsgVector2D(CMsgVector2D *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6E5D0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CMsgVector2D::SharedDtor  (line 1252, @0x0000000001a802e0, libserver.so)
void __fastcall CMsgVector2D::SharedDtor(CMsgVector2D *const this)
{
  ;
}


// CMsgVector2D::SetCachedSize  (line 1257, @0x0000000001a756b0, libserver.so)
void __fastcall CMsgVector2D::SetCachedSize(const CMsgVector2D *const this, int size)
{
  *(this + 5) = size;
}


// CMsgVector2D::descriptor  (line 1262, @0x0000000001a802f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsgVector2D_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgVector2D::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgVector2D_descriptor_;
}


// CMsgVector2D::default_instance  (line 1267, @0x0000000001a8b880, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// callers: CDOTAUserMsg_CombatHeroPositions::InitAsDefaultInstance, CDOTAUserMsg_CreateLinearProjectile::InitAsDefaultInstance, protobuf_AddDesc_dota_5fusermessages_2eproto
// globals: CMsgVector2D::default_instance_
const CMsgVector2D *__cdecl CMsgVector2D::default_instance()
{
  const CMsgVector2D *result; // rax

  result = CMsgVector2D::default_instance_;
  if ( CMsgVector2D::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CMsgVector2D::default_instance_;
  }
  return result;
}


// CMsgVector2D::New  (line 1274, @0x0000000001a80260, libserver.so)
// calls: operator new, CMsgVector2D::CMsgVector2D, operator delete, _Unwind_Resume
CMsgVector2D *__fastcall CMsgVector2D::New(const CMsgVector2D *const this)
{
  CMsgVector2D *v1; // rbx

  v1 = operator new(0x20u);
  CMsgVector2D::CMsgVector2D(v1);
  return v1;
}


// CMsgVector2D::Clear  (line 1278, @0x0000000001a76600, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CDOTAUserMsg_CombatHeroPositions::Clear, CDOTAUserMsg_CreateLinearProjectile::Clear
void __fastcall CMsgVector2D::Clear(CMsgVector2D *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgVector2D::MergePartialFromCodedStream  (line 1298, @0x0000000001a7ced0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadTagWithCutoff, memcpy, set_has_x, set_has_y
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// callers: CDOTAUserMsg_CombatHeroPositions::MergePartialFromCodedStream, CDOTAUserMsg_CreateLinearProjectile::MergePartialFromCodedStream
bool __fastcall CMsgVector2D::MergePartialFromCodedStream(
        CMsgVector2D *const this,
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


// CMsgVector2D::SerializeWithCachedSizes  (line 1359, @0x0000000001a76ab0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgVector2D::SerializeWithCachedSizes(
        const CMsgVector2D *const this,
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


// CMsgVector2D::SerializeWithCachedSizesToArray  (line 1379, @0x0000000001a79110, libserver.so)  // inlines: WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteTagToArray, empty, memcpy
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDOTAUserMsg_CombatHeroPositions::SerializeWithCachedSizesToArray, CDOTAUserMsg_CreateLinearProjectile::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CMsgVector2D::SerializeWithCachedSizesToArray(
        const CMsgVector2D *const this,
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


// CMsgVector2D::ByteSize  (line 1400, @0x0000000001a76c90, libserver.so)  // inlines: empty, has_x
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDOTAUserMsg_CombatHeroPositions::ByteSize, CDOTAUserMsg_CreateLinearProjectile::ByteSize
int __fastcall CMsgVector2D::ByteSize(const CMsgVector2D *const this)
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


// CMsgVector2D::MergeFrom  (line 1426, @0x0000000001a804e0, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgVector2D*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgVector2D::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgVector2D
void __fastcall CMsgVector2D::MergeFrom(CMsgVector2D *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgVector2D *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      1427);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgVector2D, 0)) != 0 )
  {
    CMsgVector2D::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgVector2D::MergeFrom  (line 1438, @0x0000000001a80380, libserver.so)  // inlines: set_has_x, set_has_y, set_x, set_y
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgVector2D::CMsgVector2D, CMsgVector2D::MergeFrom, CMsgVector2D::CopyFrom, CDOTAUserMsg_CombatHeroPositions::MergeFrom, CDOTAUserMsg_CreateLinearProjectile::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgVector2D::MergeFrom(CMsgVector2D *const this, const CMsgVector2D *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      1439);
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


// CMsgVector2D::CopyFrom  (line 1451, @0x0000000001a756c0, libserver.so)
void __fastcall CMsgVector2D::CopyFrom(CMsgVector2D *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgVector2D::CopyFrom  (line 1457, @0x0000000001a805c0, libserver.so)
// calls: CMsgVector2D::MergeFrom
void __fastcall CMsgVector2D::CopyFrom(CMsgVector2D *const this, const CMsgVector2D *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgVector2D::MergeFrom(this, from);
  }
}


// CMsgVector2D::IsInitialized  (line 1463, @0x0000000001a75700, libserver.so)
bool __fastcall CMsgVector2D::IsInitialized(const CMsgVector2D *const this)
{
  return 1;
}


// CMsgVector2D::Swap  (line 1468, @0x0000000001a80600, libserver.so)  // inlines: Swap, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgVector2D::Swap(CMsgVector2D *const this, CMsgVector2D *other)
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


// CMsgVector2D::GetMetadata  (line 1478, @0x0000000001a7aaf0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsgVector2D_descriptor_, `anonymous namespace'::CMsgVector2D_reflection_
google::protobuf::Metadata __fastcall CMsgVector2D::GetMetadata(const CMsgVector2D *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgVector2D_descriptor_;
  result.reflection = `anonymous namespace'::CMsgVector2D_reflection_;
  return result;
}


// CMsgQAngle::CMsgQAngle  (line 1495, @0x0000000001a80660, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsgQAngle::New, CNETMsg_SpawnGroup_Load::MergePartialFromCodedStream, CNETMsg_SpawnGroup_Load::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto, CSVCMsg_FixAngle::MergeFrom, CSVCMsg_CrosshairAngle::MergeFrom, CSVCMsg_CrosshairAngle::MergePartialFromCodedStream, CSVCMsg_FixAngle::MergePartialFromCodedStream, CUserMessageCrosshairAngle::MergeFrom, CEntityMessageFixAngle::MergeFrom, CUserMessageCrosshairAngle::MergePartialFromCodedStream, CEntityMessageFixAngle::MergePartialFromCodedStream (31 total)
void __fastcall CMsgQAngle::CMsgQAngle(CMsgQAngle *const this)
{
  *this = off_3F6E690;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CMsgQAngle::InitAsDefaultInstance  (line 1501, @0x0000000001a811a0, libserver.so)
void __fastcall CMsgQAngle::InitAsDefaultInstance(CMsgQAngle *const this)
{
  ;
}


// CMsgQAngle::CMsgQAngle  (line 1504, @0x0000000001a81370, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgQAngle::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgQAngle::CMsgQAngle(CMsgQAngle *const this, const CMsgQAngle *const from)
{
  *this = off_3F6E690;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  CMsgQAngle::MergeFrom(this, from);
}


// CMsgQAngle::SharedCtor  (line 1511, @0x0000000001a811b0, libserver.so)  // inlines: memset
void __fastcall CMsgQAngle::SharedCtor(CMsgQAngle *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CMsgQAngle::~CMsgQAngle  (line 1519, @0x0000000001a760f0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CMsgQAngle::~CMsgQAngle(CMsgQAngle *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6E690;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CMsgQAngle::~CMsgQAngle  (line 1519, @0x0000000001a76120, libserver.so)  // inlines: ~CMsgQAngle
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CMsgQAngle::~CMsgQAngle(CMsgQAngle *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6E690;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CMsgQAngle::SharedDtor  (line 1524, @0x0000000001a811e0, libserver.so)
void __fastcall CMsgQAngle::SharedDtor(CMsgQAngle *const this)
{
  ;
}


// CMsgQAngle::SetCachedSize  (line 1529, @0x0000000001a75710, libserver.so)
void __fastcall CMsgQAngle::SetCachedSize(const CMsgQAngle *const this, int size)
{
  *(this + 5) = size;
}


// CMsgQAngle::descriptor  (line 1534, @0x0000000001a811f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsgQAngle_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgQAngle::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgQAngle_descriptor_;
}


// CMsgQAngle::default_instance  (line 1539, @0x0000000001a8b8b0, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// callers: CSVCMsg_FixAngle::InitAsDefaultInstance, CSVCMsg_CrosshairAngle::InitAsDefaultInstance, protobuf_AddDesc_netmessages_2eproto, CUserMessageCrosshairAngle::InitAsDefaultInstance, CEntityMessageFixAngle::InitAsDefaultInstance, protobuf_AddDesc_usermessages_2eproto, CMsgTEBreakModel::InitAsDefaultInstance, CMsgEffectData::InitAsDefaultInstance, CMsgTEShatterSurface::InitAsDefaultInstance, CMsgTEMuzzleFlash::InitAsDefaultInstance, CMsgTEPhysicsProp::InitAsDefaultInstance, CMsgTEProjectedDecal::InitAsDefaultInstance (13 total)
// globals: CMsgQAngle::default_instance_
const CMsgQAngle *__cdecl CMsgQAngle::default_instance()
{
  const CMsgQAngle *result; // rax

  result = CMsgQAngle::default_instance_;
  if ( CMsgQAngle::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CMsgQAngle::default_instance_;
  }
  return result;
}


// CMsgQAngle::New  (line 1546, @0x0000000001a806c0, libserver.so)
// calls: operator new, CMsgQAngle::CMsgQAngle, operator delete, _Unwind_Resume
CMsgQAngle *__fastcall CMsgQAngle::New(const CMsgQAngle *const this)
{
  CMsgQAngle *v1; // rbx

  v1 = operator new(0x28u);
  CMsgQAngle::CMsgQAngle(v1);
  return v1;
}


// CMsgQAngle::Clear  (line 1550, @0x0000000001a76640, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CNETMsg_SpawnGroup_Load::Clear, CSVCMsg_FixAngle::Clear, CSVCMsg_CrosshairAngle::Clear, CUserMessageCrosshairAngle::Clear, CEntityMessageFixAngle::Clear, CMsgTEBreakModel::Clear, CMsgEffectData::Clear, CMsgTEShatterSurface::Clear, CMsgTEMuzzleFlash::Clear, CMsgTEPhysicsProp::Clear, CMsgTEProjectedDecal::Clear
void __fastcall CMsgQAngle::Clear(CMsgQAngle *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CMsgQAngle::MergePartialFromCodedStream  (line 1570, @0x0000000001a7d080, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadTagWithCutoff, memcpy, set_has_x, set_has_y, set_has_z
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// callers: CNETMsg_SpawnGroup_Load::MergePartialFromCodedStream, CSVCMsg_CrosshairAngle::MergePartialFromCodedStream, CSVCMsg_FixAngle::MergePartialFromCodedStream, CUserMessageCrosshairAngle::MergePartialFromCodedStream, CEntityMessageFixAngle::MergePartialFromCodedStream, CMsgEffectData::MergePartialFromCodedStream, CMsgTEMuzzleFlash::MergePartialFromCodedStream, CMsgTEProjectedDecal::MergePartialFromCodedStream, CMsgTEPhysicsProp::MergePartialFromCodedStream, CMsgTEBreakModel::MergePartialFromCodedStream, CMsgTEShatterSurface::MergePartialFromCodedStream
bool __fastcall CMsgQAngle::MergePartialFromCodedStream(
        CMsgQAngle *const this,
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
        if ( v9 != 21 )
          goto handle_unusual;
        v15 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_y;
      }
      if ( v10 != 3 )
        break;
      if ( v9 != 29 )
        goto handle_unusual;
      v16 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_z:
      if ( buffer_end - v16 <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v19);
        if ( !result )
          return result;
        v17 = v19[0];
      }
      else
      {
        v17 = *v16;
        input->buffer_ = v16 + 4;
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
    if ( v10 != 1 || v9 != 13 )
      break;
    v13 = input->buffer_;
    if ( LODWORD(input->buffer_end_) - v13 <= 3 )
    {
      result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v19);
      if ( !result )
        return result;
      v14 = v19[0];
    }
    else
    {
      v14 = *v13;
      input->buffer_ = v13 + 4;
    }
    *(this + 4) |= 1u;
    *(this + 6) = v14;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 21 )
    {
      v15 = buffer + 1;
      input->buffer_ = v15;
parse_y:
      if ( buffer_end - v15 <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v19);
        if ( !result )
          return result;
        v18 = v19[0];
      }
      else
      {
        v18 = *v15;
        input->buffer_ = v15 + 4;
      }
      *(this + 4) |= 2u;
      *(this + 7) = v18;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 29 )
      {
        v16 = buffer + 1;
        input->buffer_ = v16;
        goto parse_z;
      }
    }
  }
handle_unusual:
  if ( v9 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsgQAngle::SerializeWithCachedSizes  (line 1646, @0x0000000001a76b30, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgQAngle::SerializeWithCachedSizes(
        const CMsgQAngle *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  int v5; // eax
  __int64 v6; // rax

  v5 = *(this + 4);
  if ( (v5 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_0 + 1, output, *(this + 6), v2);
    v5 = *(this + 4);
    if ( (v5 & 2) == 0 )
    {
LABEL_3:
      if ( (v5 & 4) == 0 )
        goto LABEL_4;
LABEL_9:
      google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2 + 1, output, *(this + 8), v2);
      v6 = *(this + 1);
      if ( v6 == 0 )
        return;
      goto LABEL_5;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(&loc_2, output, *(this + 7), v2);
  if ( (*(this + 4) & 4) != 0 )
    goto LABEL_9;
LABEL_4:
  v6 = *(this + 1);
  if ( v6 == 0 )
    return;
LABEL_5:
  if ( *(v6 + 8) != *v6 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v6);
}


// CMsgQAngle::SerializeWithCachedSizesToArray  (line 1671, @0x0000000001a79170, libserver.so)  // inlines: WriteFloatNoTagToArray, WriteFloatToArray, WriteLittleEndian32ToArray, WriteTagToArray, empty, memcpy
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CNETMsg_SpawnGroup_Load::SerializeWithCachedSizesToArray, CSVCMsg_FixAngle::SerializeWithCachedSizesToArray, CSVCMsg_CrosshairAngle::SerializeWithCachedSizesToArray, CEntityMessageFixAngle::SerializeWithCachedSizesToArray, CUserMessageCrosshairAngle::SerializeWithCachedSizesToArray, CMsgEffectData::SerializeWithCachedSizesToArray, CMsgTEMuzzleFlash::SerializeWithCachedSizesToArray, CMsgTEProjectedDecal::SerializeWithCachedSizesToArray, CMsgTEBreakModel::SerializeWithCachedSizesToArray, CMsgTEPhysicsProp::SerializeWithCachedSizesToArray, CMsgTEShatterSurface::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CMsgQAngle::SerializeWithCachedSizesToArray(
        const CMsgQAngle *const this,
        google::protobuf::uint8 *target)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

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
    *target = 21;
    target += 5;
    *(target - 1) = v4;
    v2 = *(this + 4);
  }
  if ( (v2 & 4) != 0 )
  {
    v5 = *(this + 8);
    target += 5;
    *(target - 5) = 29;
    *(target - 1) = v5;
  }
  v6 = *(this + 1);
  if ( v6 == 0 || *(v6 + 8) == *v6 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v6);
}


// CMsgQAngle::ByteSize  (line 1697, @0x0000000001a76ce0, libserver.so)  // inlines: empty, has_x
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CNETMsg_SpawnGroup_Load::ByteSize, CSVCMsg_FixAngle::ByteSize, CSVCMsg_CrosshairAngle::ByteSize, CEntityMessageFixAngle::ByteSize, CUserMessageCrosshairAngle::ByteSize, CMsgEffectData::ByteSize, CMsgTEMuzzleFlash::ByteSize, CMsgTEProjectedDecal::ByteSize, CMsgTEShatterSurface::ByteSize, CMsgTEPhysicsProp::ByteSize, CMsgTEBreakModel::ByteSize
int __fastcall CMsgQAngle::ByteSize(const CMsgQAngle *const this)
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
    if ( (v4 & 4) != 0 )
      v3 += 5;
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CMsgQAngle::MergeFrom  (line 1728, @0x0000000001a81400, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgQAngle*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgQAngle::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgQAngle
void __fastcall CMsgQAngle::MergeFrom(CMsgQAngle *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgQAngle *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      1729);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgQAngle, 0)) != 0 )
  {
    CMsgQAngle::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgQAngle::MergeFrom  (line 1740, @0x0000000001a81280, libserver.so)  // inlines: set_has_x, set_has_y, set_has_z, set_x, set_y, set_z
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgQAngle::CMsgQAngle, CMsgQAngle::MergeFrom, CMsgQAngle::CopyFrom, CNETMsg_SpawnGroup_Load::MergeFrom, CSVCMsg_FixAngle::MergeFrom, CSVCMsg_CrosshairAngle::MergeFrom, CUserMessageCrosshairAngle::MergeFrom, CEntityMessageFixAngle::MergeFrom, CMsgTEBreakModel::MergeFrom, CMsgEffectData::MergeFrom, CMsgTEShatterSurface::MergeFrom, CMsgTEMuzzleFlash::MergeFrom (14 total)
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgQAngle::MergeFrom(CMsgQAngle *const this, const CMsgQAngle *const from)
{
  int v4; // eax
  int v5; // xmm0_4
  int v6; // xmm0_4
  int v7; // xmm0_4
  __int64 v8; // rax
  char v9; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v10; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      1741);
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


// CMsgQAngle::CopyFrom  (line 1756, @0x0000000001a75720, libserver.so)
void __fastcall CMsgQAngle::CopyFrom(CMsgQAngle *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgQAngle::CopyFrom  (line 1762, @0x0000000001a814e0, libserver.so)
// calls: CMsgQAngle::MergeFrom
void __fastcall CMsgQAngle::CopyFrom(CMsgQAngle *const this, const CMsgQAngle *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgQAngle::MergeFrom(this, from);
  }
}


// CMsgQAngle::IsInitialized  (line 1768, @0x0000000001a75760, libserver.so)
bool __fastcall CMsgQAngle::IsInitialized(const CMsgQAngle *const this)
{
  return 1;
}


// CMsgQAngle::Swap  (line 1773, @0x0000000001a81520, libserver.so)  // inlines: Swap, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgQAngle::Swap(CMsgQAngle *const this, CMsgQAngle *other)
{
  int v2; // xmm1_4
  int v3; // xmm1_4
  int v4; // xmm1_4
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


// CMsgQAngle::GetMetadata  (line 1784, @0x0000000001a7ab90, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsgQAngle_descriptor_, `anonymous namespace'::CMsgQAngle_reflection_
google::protobuf::Metadata __fastcall CMsgQAngle::GetMetadata(const CMsgQAngle *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgQAngle_descriptor_;
  result.reflection = `anonymous namespace'::CMsgQAngle_reflection_;
  return result;
}


// CMsgPlayerInfo::CMsgPlayerInfo  (line 1804, @0x0000000001a81680, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgPlayerInfo::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsgPlayerInfo::New, protobuf_AddDesc_networkbasetypes_2eproto, CGameRules::ClientSettingsChanged, CTeamplayRules::ClientSettingsChanged, CDOTAPlayer::UpdatePlayerIDFromSteamID
void __fastcall CMsgPlayerInfo::CMsgPlayerInfo(CMsgPlayerInfo *const this)
{
  *this = off_3F6E750;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgPlayerInfo::SharedCtor(this);
}


// CMsgPlayerInfo::InitAsDefaultInstance  (line 1810, @0x0000000001a81590, libserver.so)
void __fastcall CMsgPlayerInfo::InitAsDefaultInstance(CMsgPlayerInfo *const this)
{
  ;
}


// CMsgPlayerInfo::CMsgPlayerInfo  (line 1813, @0x0000000001a819c0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsgPlayerInfo::SharedCtor, CMsgPlayerInfo::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsgPlayerInfo::CMsgPlayerInfo(CMsgPlayerInfo *const this, const CMsgPlayerInfo *const from)
{
  *this = off_3F6E750;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsgPlayerInfo::SharedCtor(this);
  CMsgPlayerInfo::MergeFrom(this, from);
}


// CMsgPlayerInfo::SharedCtor  (line 1820, @0x0000000001a815a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsgPlayerInfo::CMsgPlayerInfo
void __fastcall CMsgPlayerInfo::SharedCtor(CMsgPlayerInfo *const this)
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
  *(this + 12) = 0;
  *(this + 5) = 0;
  *(this + 52) = 0;
  *(this + 53) = 0;
  *(this + 4) = 0;
}


// CMsgPlayerInfo::~CMsgPlayerInfo  (line 1832, @0x0000000001a81790, libserver.so)
// calls: CMsgPlayerInfo::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsgPlayerInfo::~CMsgPlayerInfo, CGameRules::ClientSettingsChanged, CTeamplayRules::ClientSettingsChanged, CDOTAPlayer::UpdatePlayerIDFromSteamID
void __fastcall CMsgPlayerInfo::~CMsgPlayerInfo(CMsgPlayerInfo *const this)
{
  *this = off_3F6E750;
  CMsgPlayerInfo::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsgPlayerInfo::~CMsgPlayerInfo  (line 1832, @0x0000000001a817d0, libserver.so)
// calls: CMsgPlayerInfo::~CMsgPlayerInfo, operator delete
void __fastcall CMsgPlayerInfo::~CMsgPlayerInfo(CMsgPlayerInfo *const this)
{
  CMsgPlayerInfo::~CMsgPlayerInfo(this);
  operator delete(this);
}


// CMsgPlayerInfo::SharedDtor  (line 1837, @0x0000000001a81720, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsgPlayerInfo::~CMsgPlayerInfo
void __fastcall CMsgPlayerInfo::SharedDtor(CMsgPlayerInfo *const this)
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


// CMsgPlayerInfo::SetCachedSize  (line 1843, @0x0000000001a75770, libserver.so)
void __fastcall CMsgPlayerInfo::SetCachedSize(const CMsgPlayerInfo *const this, int size)
{
  *(this + 5) = size;
}


// CMsgPlayerInfo::descriptor  (line 1848, @0x0000000001a817f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsgPlayerInfo_descriptor_
const google::protobuf::Descriptor *__cdecl CMsgPlayerInfo::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsgPlayerInfo_descriptor_;
}


// CMsgPlayerInfo::default_instance  (line 1853, @0x0000000001a8b950, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CMsgPlayerInfo::default_instance_
const CMsgPlayerInfo *__cdecl CMsgPlayerInfo::default_instance()
{
  const CMsgPlayerInfo *result; // rax

  result = CMsgPlayerInfo::default_instance_;
  if ( CMsgPlayerInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CMsgPlayerInfo::default_instance_;
  }
  return result;
}


// CMsgPlayerInfo::New  (line 1860, @0x0000000001a816e0, libserver.so)
// calls: operator new, CMsgPlayerInfo::CMsgPlayerInfo, operator delete, _Unwind_Resume
CMsgPlayerInfo *__fastcall CMsgPlayerInfo::New(const CMsgPlayerInfo *const this)
{
  CMsgPlayerInfo *v1; // rbx

  v1 = operator new(0x38u);
  CMsgPlayerInfo::CMsgPlayerInfo(v1);
  return v1;
}


// CMsgPlayerInfo::Clear  (line 1864, @0x0000000001a76d90, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsgPlayerInfo::Clear(CMsgPlayerInfo *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 0x3F) != 0 )
  {
    v2 = (*(this + 16) & 1) == 0;
    *(this + 4) = 0;
    *(this + 5) = 0;
    *(this + 12) = 0;
    *(this + 26) = 0;
    if ( !v2 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CMsgPlayerInfo::MergePartialFromCodedStream  (line 1889, @0x0000000001a7d4e0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian64, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)6u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, memcpy, mutable_name, set_has_fakeplayer, set_has_ishltv, set_has_name, set_has_steamid, set_has_userid, set_has_xuid
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// globals: jpt_1A7D550
bool __fastcall CMsgPlayerInfo::MergePartialFromCodedStream(
        CMsgPlayerInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned __int64 *v4; // r14
  unsigned int v6; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *i; // rax
  google::protobuf::uint32 TagFallback; // eax
  std::string *v10; // rdx
  const google::protobuf::uint8 *v11; // rdx
  const google::protobuf::uint8 *v12; // rdx
  const google::protobuf::uint8 *v13; // rdx
  const google::protobuf::uint8 *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rax
  const google::protobuf::uint8 *v17; // rdx
  bool result; // al
  __int64 v19; // rax
  unsigned __int64 *v20; // [rsp+8h] [rbp-48h]
  unsigned int v21[2]; // [rsp+18h] [rbp-38h] BYREF

  v2 = (this + 32);
  v4 = (this + 40);
  v6 = this + 8;
  v20 = (this + 32);
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
      v10 = (TagFallback >> 3);
      switch ( v10 )
      {
        case 1:
          if ( TagFallback != 10 )
            goto LABEL_7;
          *(this + 4) |= 1u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 17 )
            continue;
          v11 = buffer + 1;
          input->buffer_ = v11;
parse_xuid:
          if ( i - v11 <= 7 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, v20) == 0 )
              return 0;
          }
          else
          {
            v2 = v20;
            *v20 = *v11;
            input->buffer_ += 8;
          }
          *(this + 4) |= 2u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 24 )
            continue;
          v12 = buffer + 1;
          input->buffer_ = v12;
parse_userid:
          if ( i <= v12 || ((v15 = *v12) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v21);
            if ( !result )
              return result;
            v15 = v21[0];
          }
          else
          {
            input->buffer_ = v12 + 1;
          }
          *(this + 4) |= 4u;
          *(this + 12) = v15;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 33 )
            continue;
          v13 = buffer + 1;
          input->buffer_ = v13;
parse_steamid:
          if ( i - v13 <= 7 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, v4) == 0 )
              return 0;
          }
          else
          {
            *v4 = *v13;
            input->buffer_ += 8;
          }
          *(this + 4) |= 8u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer < i && *buffer == 40 )
          {
            v14 = buffer + 1;
            input->buffer_ = v14;
parse_fakeplayer:
            if ( v14 >= i || ((v16 = *v14) & 0x80u) != 0LL )
            {
              result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v21);
              if ( !result )
                return result;
              v16 = *v21;
            }
            else
            {
              input->buffer_ = v14 + 1;
            }
            *(this + 52) = v16 != 0;
            *(this + 4) |= 0x10u;
            buffer = input->buffer_;
            i = input->buffer_end_;
            if ( buffer < i && *buffer == 48 )
            {
              v17 = buffer + 1;
              input->buffer_ = v17;
parse_ishltv:
              if ( v17 >= i || ((v19 = *v17) & 0x80u) != 0LL )
              {
                result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v21);
                if ( !result )
                  return result;
                v19 = *v21;
              }
              else
              {
                input->buffer_ = v17 + 1;
              }
              *(this + 53) = v19 != 0;
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
          break;
        case 2:
          if ( TagFallback != 17 )
            goto LABEL_7;
          v11 = input->buffer_;
          i = input->buffer_end_;
          goto parse_xuid;
        case 3:
          if ( TagFallback != 24 )
            goto LABEL_7;
          v12 = input->buffer_;
          i = input->buffer_end_;
          goto parse_userid;
        case 4:
          if ( TagFallback != 33 )
            goto LABEL_7;
          v13 = input->buffer_;
          i = input->buffer_end_;
          goto parse_steamid;
        case 5:
          if ( TagFallback != 40 )
            goto LABEL_7;
          v14 = input->buffer_;
          i = input->buffer_end_;
          goto parse_fakeplayer;
        case 6:
          if ( TagFallback != 48 )
            goto LABEL_7;
          v17 = input->buffer_;
          i = input->buffer_end_;
          goto parse_ishltv;
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


// CMsgPlayerInfo::SerializeWithCachedSizes  (line 2012, @0x0000000001a776b0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsgPlayerInfo::SerializeWithCachedSizes(
        const CMsgPlayerInfo *const this,
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
      goto LABEL_12;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteFixed64(&loc_2, *(this + 4), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(this + 12), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  google::protobuf::internal::WireFormatLite::WriteFixed64(&loc_2 + 2, *(this + 5), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_7;
LABEL_15:
    google::protobuf::internal::WireFormatLite::WriteBool(&loc_6, *(this + 53), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_8;
  }
LABEL_14:
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 3, *(this + 52), output, v3);
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


// CMsgPlayerInfo::SerializeWithCachedSizesToArray  (line 2057, @0x0000000001a7a710, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteFixed64NoTagToArray, WriteFixed64ToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian64ToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CMsgPlayerInfo::SerializeWithCachedSizesToArray(
        const CMsgPlayerInfo *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  __int64 v7; // rax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  __int64 v9; // rax
  google::protobuf::uint8 v10; // al
  google::protobuf::uint8 v11; // al
  __int64 v12; // rax

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
    *target = 17;
    target += 9;
    *(target - 1) = v7;
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 12);
    *target = 24;
    if ( v8 < 0 )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v8, (target + 1), v2);
    }
    else if ( v8 > 0x7F )
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
    v9 = *(this + 5);
    *target = 33;
    target += 9;
    *(target - 1) = v9;
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v10 = *(this + 52);
    *target = 40;
    target += 2;
    *(target - 1) = v10;
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v11 = *(this + 53);
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


// CMsgPlayerInfo::ByteSize  (line 2104, @0x0000000001a7a1b0, libserver.so)  // inlines: Int32Size, StringSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CMsgPlayerInfo::ByteSize(const CMsgPlayerInfo *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // edx
  __int64 v5; // rax
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rbx
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_12;
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
    v13 = v11 + v12 + 10;
    if ( (v4 & 2) != 0 )
      v3 = v13;
    if ( (v4 & 4) == 0 )
      goto LABEL_6;
  }
  else
  {
    if ( (v4 & 2) != 0 )
      v3 = 9;
    if ( (v4 & 4) == 0 )
      goto LABEL_6;
  }
  v7 = *(this + 12);
  v8 = 11;
  if ( v7 >= 0 && (LOBYTE(v8) = 2, v7 > 0x7F) )
  {
    v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
    v4 = *(this + 4);
    v3 += v14 + 1;
  }
  else
  {
    v3 += v8;
  }
LABEL_6:
  if ( (v4 & 8) != 0 )
    v3 += 9;
  if ( (v4 & 0x10) != 0 )
    v3 += 2;
  if ( (v4 & 0x20) != 0 )
    v3 += 2;
LABEL_12:
  v5 = *(this + 1);
  if ( v5 != 0 && *(v5 + 8) != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v5);
  *(this + 5) = v3;
  return v3;
}


// CMsgPlayerInfo::MergeFrom  (line 2154, @0x0000000001a81a30, libserver.so)  // inlines: dynamic_cast_if_available<const CMsgPlayerInfo*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsgPlayerInfo::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsgPlayerInfo
void __fastcall CMsgPlayerInfo::MergeFrom(CMsgPlayerInfo *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsgPlayerInfo *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      2155);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsgPlayerInfo, 0)) != 0 )
  {
    CMsgPlayerInfo::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsgPlayerInfo::MergeFrom  (line 2166, @0x0000000001a81880, libserver.so)  // inlines: set_fakeplayer, set_has_fakeplayer, set_has_ishltv, set_has_name, set_has_steamid, set_has_userid, set_has_xuid, set_ishltv, set_name, set_steamid, set_userid, set_xuid
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsgPlayerInfo::CMsgPlayerInfo, CMsgPlayerInfo::MergeFrom, CMsgPlayerInfo::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsgPlayerInfo::MergeFrom(CMsgPlayerInfo *const this, const CMsgPlayerInfo *const from)
{
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  char v8; // al
  char v9; // al
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      2167);
    v12 = google::protobuf::internal::LogMessage::operator<<(&v14, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v10 = *(from + 3);
      v11 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v11, v10);
      v4 = *(from + 4);
      if ( (v4 & 2) == 0 )
        goto LABEL_7;
    }
    else if ( (v4 & 2) == 0 )
    {
LABEL_7:
      if ( (v4 & 4) != 0 )
      {
        v6 = *(from + 12);
        *(this + 4) |= 4u;
        *(this + 12) = v6;
        v4 = *(from + 4);
      }
      if ( (v4 & 8) != 0 )
      {
        v7 = *(from + 5);
        *(this + 4) |= 8u;
        *(this + 5) = v7;
        v4 = *(from + 4);
      }
      if ( (v4 & 0x10) != 0 )
      {
        v8 = *(from + 52);
        *(this + 4) |= 0x10u;
        *(this + 52) = v8;
        v4 = *(from + 4);
      }
      if ( (v4 & 0x20) != 0 )
      {
        v9 = *(from + 53);
        *(this + 4) |= 0x20u;
        *(this + 53) = v9;
      }
      goto LABEL_15;
    }
    v5 = *(from + 4);
    *(this + 4) |= 2u;
    *(this + 4) = v5;
    v4 = *(from + 4);
    goto LABEL_7;
  }
LABEL_15:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsgPlayerInfo::CopyFrom  (line 2191, @0x0000000001a75780, libserver.so)
void __fastcall CMsgPlayerInfo::CopyFrom(CMsgPlayerInfo *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsgPlayerInfo::CopyFrom  (line 2197, @0x0000000001a81b10, libserver.so)
// calls: CMsgPlayerInfo::MergeFrom
void __fastcall CMsgPlayerInfo::CopyFrom(CMsgPlayerInfo *const this, const CMsgPlayerInfo *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsgPlayerInfo::MergeFrom(this, from);
  }
}


// CMsgPlayerInfo::IsInitialized  (line 2203, @0x0000000001a757c0, libserver.so)
bool __fastcall CMsgPlayerInfo::IsInitialized(const CMsgPlayerInfo *const this)
{
  return 1;
}


// CMsgPlayerInfo::Swap  (line 2208, @0x0000000001a81b50, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsgPlayerInfo::Swap(CMsgPlayerInfo *const this, CMsgPlayerInfo *other)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( other != this )
  {
    v2 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v2;
    v3 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v3;
    LODWORD(v3) = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v3;
    v4 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
    LOBYTE(v4) = *(this + 52);
    *(this + 52) = *(other + 52);
    *(other + 52) = v4;
    LOBYTE(v4) = *(this + 53);
    *(this + 53) = *(other + 53);
    *(other + 53) = v4;
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


// CMsgPlayerInfo::GetMetadata  (line 2222, @0x0000000001a7ac30, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsgPlayerInfo_descriptor_, `anonymous namespace'::CMsgPlayerInfo_reflection_
google::protobuf::Metadata __fastcall CMsgPlayerInfo::GetMetadata(const CMsgPlayerInfo *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsgPlayerInfo_descriptor_;
  result.reflection = `anonymous namespace'::CMsgPlayerInfo_reflection_;
  return result;
}


// CMsg_CVars_CVar::CMsg_CVars_CVar  (line 2238, @0x0000000001a81cd0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsg_CVars_CVar::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CMsg_CVars_CVar::New, CMsg_CVars::MergePartialFromCodedStream, CMsg_CVars::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CMsg_CVars_CVar::CMsg_CVars_CVar(CMsg_CVars_CVar *const this)
{
  *this = off_3F6E810;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsg_CVars_CVar::SharedCtor(this);
}


// CMsg_CVars_CVar::InitAsDefaultInstance  (line 2244, @0x0000000001a81be0, libserver.so)
void __fastcall CMsg_CVars_CVar::InitAsDefaultInstance(CMsg_CVars_CVar *const this)
{
  ;
}


// CMsg_CVars_CVar::CMsg_CVars_CVar  (line 2247, @0x0000000001a82260, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsg_CVars_CVar::SharedCtor, CMsg_CVars_CVar::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsg_CVars_CVar::CMsg_CVars_CVar(CMsg_CVars_CVar *const this, const CMsg_CVars_CVar *const from)
{
  *this = off_3F6E810;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CMsg_CVars_CVar::SharedCtor(this);
  CMsg_CVars_CVar::MergeFrom(this, from);
}


// CMsg_CVars_CVar::SharedCtor  (line 2254, @0x0000000001a81bf0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CMsg_CVars_CVar::CMsg_CVars_CVar
void __fastcall CMsg_CVars_CVar::SharedCtor(CMsg_CVars_CVar *const this)
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


// CMsg_CVars_CVar::~CMsg_CVars_CVar  (line 2262, @0x0000000001a82080, libserver.so)
// calls: CMsg_CVars_CVar::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsg_CVars_CVar::~CMsg_CVars_CVar
void __fastcall CMsg_CVars_CVar::~CMsg_CVars_CVar(CMsg_CVars_CVar *const this)
{
  *this = off_3F6E810;
  CMsg_CVars_CVar::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsg_CVars_CVar::~CMsg_CVars_CVar  (line 2262, @0x0000000001a820c0, libserver.so)
// calls: CMsg_CVars_CVar::~CMsg_CVars_CVar, operator delete
void __fastcall CMsg_CVars_CVar::~CMsg_CVars_CVar(CMsg_CVars_CVar *const this)
{
  CMsg_CVars_CVar::~CMsg_CVars_CVar(this);
  operator delete(this);
}


// CMsg_CVars_CVar::SharedDtor  (line 2267, @0x0000000001a81fc0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CMsg_CVars_CVar::~CMsg_CVars_CVar
void __fastcall CMsg_CVars_CVar::SharedDtor(CMsg_CVars_CVar *const this)
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


// CMsg_CVars_CVar::SetCachedSize  (line 2274, @0x0000000001a757d0, libserver.so)
void __fastcall CMsg_CVars_CVar::SetCachedSize(const CMsg_CVars_CVar *const this, int size)
{
  *(this + 5) = size;
}


// CMsg_CVars_CVar::descriptor  (line 2279, @0x0000000001a820e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsg_CVars_CVar_descriptor_
const google::protobuf::Descriptor *__cdecl CMsg_CVars_CVar::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsg_CVars_CVar_descriptor_;
}


// CMsg_CVars_CVar::default_instance  (line 2284, @0x0000000001a8b980, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CMsg_CVars_CVar::default_instance_
const CMsg_CVars_CVar *__cdecl CMsg_CVars_CVar::default_instance()
{
  const CMsg_CVars_CVar *result; // rax

  result = CMsg_CVars_CVar::default_instance_;
  if ( CMsg_CVars_CVar::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CMsg_CVars_CVar::default_instance_;
  }
  return result;
}


// CMsg_CVars_CVar::New  (line 2291, @0x0000000001a81d30, libserver.so)
// calls: operator new, CMsg_CVars_CVar::CMsg_CVars_CVar, operator delete, _Unwind_Resume
CMsg_CVars_CVar *__fastcall CMsg_CVars_CVar::New(const CMsg_CVars_CVar *const this)
{
  CMsg_CVars_CVar *v1; // rbx

  v1 = operator new(0x28u);
  CMsg_CVars_CVar::CMsg_CVars_CVar(v1);
  return v1;
}


// CMsg_CVars_CVar::Clear  (line 2295, @0x0000000001a76e10, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CMsg_CVars_CVar::Clear(CMsg_CVars_CVar *const this)
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


// CMsg_CVars_CVar::MergePartialFromCodedStream  (line 2308, @0x0000000001a7cd80, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, mutable_name, mutable_value, set_has_name, set_has_value
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
// callers: CMsg_CVars::MergePartialFromCodedStream
bool __fastcall CMsg_CVars_CVar::MergePartialFromCodedStream(
        CMsg_CVars_CVar *const this,
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
parse_value:
      *(this + 4) |= 2u;
      result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), buffer_end);
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
    goto parse_value;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CMsg_CVars_CVar::SerializeWithCachedSizes  (line 2373, @0x0000000001a77570, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsg_CVars_CVar::SerializeWithCachedSizes(
        const CMsg_CVars_CVar *const this,
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
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2, *(this + 4), output, v3);
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


// CMsg_CVars_CVar::SerializeWithCachedSizesToArray  (line 2403, @0x0000000001a78e90, libserver.so)  // inlines: WriteStringToArray, WriteTagToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CMsg_CVars::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CMsg_CVars_CVar::SerializeWithCachedSizesToArray(
        const CMsg_CVars_CVar *const this,
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


// CMsg_CVars_CVar::ByteSize  (line 2436, @0x0000000001a79e00, libserver.so)  // inlines: StringSize, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CMsg_CVars::ByteSize
int __fastcall CMsg_CVars_CVar::ByteSize(const CMsg_CVars_CVar *const this)
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


// CMsg_CVars_CVar::MergeFrom  (line 2466, @0x0000000001a822d0, libserver.so)  // inlines: dynamic_cast_if_available<const CMsg_CVars_CVar*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsg_CVars_CVar::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsg_CVars_CVar
void __fastcall CMsg_CVars_CVar::MergeFrom(CMsg_CVars_CVar *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsg_CVars_CVar *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      2467);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsg_CVars_CVar, 0)) != 0 )
  {
    CMsg_CVars_CVar::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsg_CVars_CVar::MergeFrom  (line 2478, @0x0000000001a82170, libserver.so)  // inlines: set_has_name, set_has_value, set_name, set_value
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CMsg_CVars_CVar::CMsg_CVars_CVar, CMsg_CVars_CVar::MergeFrom, CMsg_CVars_CVar::CopyFrom, CMsg_CVars::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CMsg_CVars_CVar::MergeFrom(CMsg_CVars_CVar *const this, const CMsg_CVars_CVar *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      2479);
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


// CMsg_CVars_CVar::CopyFrom  (line 2491, @0x0000000001a757e0, libserver.so)
void __fastcall CMsg_CVars_CVar::CopyFrom(CMsg_CVars_CVar *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsg_CVars_CVar::CopyFrom  (line 2497, @0x0000000001a823b0, libserver.so)
// calls: CMsg_CVars_CVar::MergeFrom
void __fastcall CMsg_CVars_CVar::CopyFrom(CMsg_CVars_CVar *const this, const CMsg_CVars_CVar *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsg_CVars_CVar::MergeFrom(this, from);
  }
}


// CMsg_CVars_CVar::IsInitialized  (line 2503, @0x0000000001a75820, libserver.so)
bool __fastcall CMsg_CVars_CVar::IsInitialized(const CMsg_CVars_CVar *const this)
{
  return 1;
}


// CMsg_CVars_CVar::Swap  (line 2508, @0x0000000001a823f0, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CMsg_CVars_CVar::Swap(CMsg_CVars_CVar *const this, CMsg_CVars_CVar *other)
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


// CMsg_CVars_CVar::GetMetadata  (line 2518, @0x0000000001a7acd0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsg_CVars_CVar_descriptor_, `anonymous namespace'::CMsg_CVars_CVar_reflection_
google::protobuf::Metadata __fastcall CMsg_CVars_CVar::GetMetadata(const CMsg_CVars_CVar *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsg_CVars_CVar_descriptor_;
  result.reflection = `anonymous namespace'::CMsg_CVars_CVar_reflection_;
  return result;
}


// CMsg_CVars::CMsg_CVars  (line 2533, @0x0000000001a82450, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CMsg_CVars::New, CNETMsg_SetConVar::MergePartialFromCodedStream, CNETMsg_SetConVar::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CMsg_CVars::CMsg_CVars(CMsg_CVars *const this)
{
  *this = off_3F6E8D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CMsg_CVars::InitAsDefaultInstance  (line 2539, @0x0000000001a826c0, libserver.so)
void __fastcall CMsg_CVars::InitAsDefaultInstance(CMsg_CVars *const this)
{
  ;
}


// CMsg_CVars::CMsg_CVars  (line 2542, @0x0000000001a82960, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CMsg_CVars::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CMsg_CVars::CMsg_CVars(CMsg_CVars *const this, const CMsg_CVars *const from)
{
  *this = off_3F6E8D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
  CMsg_CVars::MergeFrom(this, from);
}


// CMsg_CVars::SharedCtor  (line 2549, @0x0000000001a826d0, libserver.so)  // inlines: memset
void __fastcall CMsg_CVars::SharedCtor(CMsg_CVars *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CMsg_CVars::~CMsg_CVars  (line 2554, @0x0000000001a78c20, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CMsg_CVars::~CMsg_CVars
void __fastcall CMsg_CVars::~CMsg_CVars(CMsg_CVars *const this)
{
  *this = off_3F6E8D0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CMsg_CVars::~CMsg_CVars  (line 2554, @0x0000000001a78c60, libserver.so)
// calls: CMsg_CVars::~CMsg_CVars, operator delete
void __fastcall CMsg_CVars::~CMsg_CVars(CMsg_CVars *const this)
{
  CMsg_CVars::~CMsg_CVars(this);
  operator delete(this);
}


// CMsg_CVars::SharedDtor  (line 2559, @0x0000000001a826f0, libserver.so)
void __fastcall CMsg_CVars::SharedDtor(CMsg_CVars *const this)
{
  ;
}


// CMsg_CVars::SetCachedSize  (line 2564, @0x0000000001a75830, libserver.so)
void __fastcall CMsg_CVars::SetCachedSize(const CMsg_CVars *const this, int size)
{
  *(this + 5) = size;
}


// CMsg_CVars::descriptor  (line 2569, @0x0000000001a82700, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsg_CVars_descriptor_
const google::protobuf::Descriptor *__cdecl CMsg_CVars::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CMsg_CVars_descriptor_;
}


// CMsg_CVars::default_instance  (line 2574, @0x0000000001a8b9b0, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CMsg_CVars::default_instance_
const CMsg_CVars *__cdecl CMsg_CVars::default_instance()
{
  const CMsg_CVars *result; // rax

  result = CMsg_CVars::default_instance_;
  if ( CMsg_CVars::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CMsg_CVars::default_instance_;
  }
  return result;
}


// CMsg_CVars::New  (line 2581, @0x0000000001a824b0, libserver.so)
// calls: operator new, CMsg_CVars::CMsg_CVars, operator delete, _Unwind_Resume
CMsg_CVars *__fastcall CMsg_CVars::New(const CMsg_CVars *const this)
{
  CMsg_CVars *v1; // rbx

  v1 = operator new(0x30u);
  CMsg_CVars::CMsg_CVars(v1);
  return v1;
}


// CMsg_CVars::Clear  (line 2585, @0x0000000001a76840, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CNETMsg_SetConVar::Clear
void __fastcall CMsg_CVars::Clear(CMsg_CVars *const this)
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


// CMsg_CVars::MergePartialFromCodedStream  (line 2591, @0x0000000001a81d70, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CMsg_CVars_CVar>, ReadTagWithCutoff, ReadVarint32, add_cvars
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CMsg_CVars_CVar::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CMsg_CVars_CVar::CMsg_CVars_CVar, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CNETMsg_SetConVar::MergePartialFromCodedStream
bool __fastcall CMsg_CVars::MergePartialFromCodedStream(
        CMsg_CVars *const this,
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
  CMsg_CVars_CVar *v13; // r13
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
        v13 = operator new(0x28u);
        CMsg_CVars_CVar::CMsg_CVars_CVar(v13);
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
      if ( !CMsg_CVars_CVar::MergePartialFromCodedStream(v13, input) || !input->legitimate_message_end_ )
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


// CMsg_CVars::SerializeWithCachedSizes  (line 2637, @0x0000000001a77b00, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, cvars, empty
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CMsg_CVars::SerializeWithCachedSizes(
        const CMsg_CVars *const this,
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


// CMsg_CVars::SerializeWithCachedSizesToArray  (line 2653, @0x0000000001a78f70, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CMsg_CVars_CVar>, WriteTagToArray, WriteVarint32ToArray, cvars, empty
// calls: CMsg_CVars_CVar::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CNETMsg_SetConVar::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CMsg_CVars::SerializeWithCachedSizesToArray(
        const CMsg_CVars *const this,
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
      result = CMsg_CVars_CVar::SerializeWithCachedSizesToArray(v8, v6);
    }
    while ( v5 < *(this + 8) );
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v10);
  return result;
}


// CMsg_CVars::ByteSize  (line 2671, @0x0000000001a79ec0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CMsg_CVars_CVar>, VarintSize32, cvars, empty
// calls: CMsg_CVars_CVar::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CNETMsg_SetConVar::ByteSize
int __fastcall CMsg_CVars::ByteSize(const CMsg_CVars *const this)
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
      v6 = CMsg_CVars_CVar::ByteSize(*(*(this + 3) + v4));
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


// CMsg_CVars::MergeFrom  (line 2693, @0x0000000001a82a00, libserver.so)  // inlines: dynamic_cast_if_available<const CMsg_CVars*, const google::protobuf::Message*>
// calls: __dynamic_cast, CMsg_CVars::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CMsg_CVars
void __fastcall CMsg_CVars::MergeFrom(CMsg_CVars *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CMsg_CVars *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      2694);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CMsg_CVars, 0)) != 0 )
  {
    CMsg_CVars::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CMsg_CVars::MergeFrom  (line 2705, @0x0000000001a82790, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>, New
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CMsg_CVars_CVar::CMsg_CVars_CVar, CMsg_CVars_CVar::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CMsg_CVars::CMsg_CVars, CMsg_CVars::MergeFrom, CMsg_CVars::CopyFrom, CNETMsg_SetConVar::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CMsg_CVars::MergeFrom(CMsg_CVars *const this, const CMsg_CVars *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CMsg_CVars_CVar *v6; // r15
  __int64 v7; // rax
  CMsg_CVars_CVar *v8; // rdi
  __int64 v9; // rdx
  const CMsg_CVars_CVar *v10; // rsi
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      2706);
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
        v6 = operator new(0x28u);
        CMsg_CVars_CVar::CMsg_CVars_CVar(v6);
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
      CMsg_CVars_CVar::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CMsg_CVars::CopyFrom  (line 2711, @0x0000000001a75840, libserver.so)
void __fastcall CMsg_CVars::CopyFrom(CMsg_CVars *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CMsg_CVars::CopyFrom  (line 2717, @0x0000000001a82ae0, libserver.so)
// calls: CMsg_CVars::MergeFrom
void __fastcall CMsg_CVars::CopyFrom(CMsg_CVars *const this, const CMsg_CVars *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CMsg_CVars::MergeFrom(this, from);
  }
}


// CMsg_CVars::IsInitialized  (line 2723, @0x0000000001a75880, libserver.so)
bool __fastcall CMsg_CVars::IsInitialized(const CMsg_CVars *const this)
{
  return 1;
}


// CMsg_CVars::Swap  (line 2728, @0x0000000001a82b20, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CMsg_CVars::Swap(CMsg_CVars *const this, CMsg_CVars *other)
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


// CMsg_CVars::GetMetadata  (line 2737, @0x0000000001a7ad70, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CMsg_CVars_descriptor_, `anonymous namespace'::CMsg_CVars_reflection_
google::protobuf::Metadata __fastcall CMsg_CVars::GetMetadata(const CMsg_CVars *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CMsg_CVars_descriptor_;
  result.reflection = `anonymous namespace'::CMsg_CVars_reflection_;
  return result;
}


// CNETMsg_NOP::CNETMsg_NOP  (line 2751, @0x0000000001a82b80, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CNETMsg_NOP::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_NOP::CNETMsg_NOP(CNETMsg_NOP *const this)
{
  *this = off_3F6E990;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CNETMsg_NOP::InitAsDefaultInstance  (line 2757, @0x0000000001a82c10, libserver.so)
void __fastcall CNETMsg_NOP::InitAsDefaultInstance(CNETMsg_NOP *const this)
{
  ;
}


// CNETMsg_NOP::CNETMsg_NOP  (line 2760, @0x0000000001a82d80, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_NOP::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_NOP::CNETMsg_NOP(CNETMsg_NOP *const this, const CNETMsg_NOP *const from)
{
  *this = off_3F6E990;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
  CNETMsg_NOP::MergeFrom(this, from);
}


// CNETMsg_NOP::SharedCtor  (line 2767, @0x0000000001a82c20, libserver.so)  // inlines: memset
void __fastcall CNETMsg_NOP::SharedCtor(CNETMsg_NOP *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CNETMsg_NOP::~CNETMsg_NOP  (line 2772, @0x0000000001a76160, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CNETMsg_NOP::~CNETMsg_NOP(CNETMsg_NOP *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6E990;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_NOP::~CNETMsg_NOP  (line 2772, @0x0000000001a76190, libserver.so)  // inlines: ~CNETMsg_NOP
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CNETMsg_NOP::~CNETMsg_NOP(CNETMsg_NOP *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6E990;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CNETMsg_NOP::SharedDtor  (line 2777, @0x0000000001a82c40, libserver.so)
void __fastcall CNETMsg_NOP::SharedDtor(CNETMsg_NOP *const this)
{
  ;
}


// CNETMsg_NOP::SetCachedSize  (line 2782, @0x0000000001a75890, libserver.so)
void __fastcall CNETMsg_NOP::SetCachedSize(const CNETMsg_NOP *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_NOP::descriptor  (line 2787, @0x0000000001a82c50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_NOP_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_NOP::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_NOP_descriptor_;
}


// CNETMsg_NOP::default_instance  (line 2792, @0x0000000001a8ba20, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_NOP::default_instance_
const CNETMsg_NOP *__cdecl CNETMsg_NOP::default_instance()
{
  const CNETMsg_NOP *result; // rax

  result = CNETMsg_NOP::default_instance_;
  if ( CNETMsg_NOP::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_NOP::default_instance_;
  }
  return result;
}


// CNETMsg_NOP::New  (line 2799, @0x0000000001a82bd0, libserver.so)
// calls: operator new, CNETMsg_NOP::CNETMsg_NOP, operator delete, _Unwind_Resume
CNETMsg_NOP *__fastcall CNETMsg_NOP::New(const CNETMsg_NOP *const this)
{
  CNETMsg_NOP *v1; // rbx

  v1 = operator new(0x18u);
  CNETMsg_NOP::CNETMsg_NOP(v1);
  return v1;
}


// CNETMsg_NOP::Clear  (line 2803, @0x0000000001a76680, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_NOP::Clear(CNETMsg_NOP *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  *(this + 4) = 0;
  v2 = (this + 8);
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CNETMsg_NOP::MergePartialFromCodedStream  (line 2808, @0x0000000001a790a0, libserver.so)  // inlines: Advance, GetTagWireType, ReadTagWithCutoff
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void)
bool __fastcall CNETMsg_NOP::MergePartialFromCodedStream(
        CNETMsg_NOP *const this,
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


// CNETMsg_NOP::SerializeWithCachedSizes  (line 2835, @0x0000000001a76bd0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_NOP::SerializeWithCachedSizes(
        const CNETMsg_NOP *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  __int64 v2; // rax

  v2 = *(this + 1);
  if ( v2 != 0 && *(v2 + 8) != *v2 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v2);
}


// CNETMsg_NOP::SerializeWithCachedSizesToArray  (line 2845, @0x0000000001a76c00, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_NOP::SerializeWithCachedSizesToArray(
        const CNETMsg_NOP *const this,
        google::protobuf::uint8 *target)
{
  __int64 v2; // rdx

  v2 = *(this + 1);
  if ( v2 == 0 || *(v2 + 8) == *v2 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, v2);
}


// CNETMsg_NOP::ByteSize  (line 2856, @0x0000000001a76d40, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CNETMsg_NOP::ByteSize(const CNETMsg_NOP *const this)
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


// CNETMsg_NOP::MergeFrom  (line 2870, @0x0000000001a82df0, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_NOP*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_NOP::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_NOP
void __fastcall CNETMsg_NOP::MergeFrom(CNETMsg_NOP *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_NOP *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      2871);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_NOP, 0)) != 0 )
  {
    CNETMsg_NOP::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_NOP::MergeFrom  (line 2882, @0x0000000001a82ce0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_NOP::CNETMsg_NOP, CNETMsg_NOP::MergeFrom, CNETMsg_NOP::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_NOP::MergeFrom(CNETMsg_NOP *const this, const CNETMsg_NOP *const from)
{
  __int64 v4; // rax
  char v5; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v6; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      2883);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CNETMsg_NOP::CopyFrom  (line 2887, @0x0000000001a758a0, libserver.so)
void __fastcall CNETMsg_NOP::CopyFrom(CNETMsg_NOP *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_NOP::CopyFrom  (line 2893, @0x0000000001a82ed0, libserver.so)
// calls: CNETMsg_NOP::MergeFrom
void __fastcall CNETMsg_NOP::CopyFrom(CNETMsg_NOP *const this, const CNETMsg_NOP *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_NOP::MergeFrom(this, from);
  }
}


// CNETMsg_NOP::IsInitialized  (line 2899, @0x0000000001a758e0, libserver.so)
bool __fastcall CNETMsg_NOP::IsInitialized(const CNETMsg_NOP *const this)
{
  return 1;
}


// CNETMsg_NOP::Swap  (line 2904, @0x0000000001a82f10, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>
void __fastcall CNETMsg_NOP::Swap(CNETMsg_NOP *const this, CNETMsg_NOP *other)
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


// CNETMsg_NOP::GetMetadata  (line 2911, @0x0000000001a7ae10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_NOP_descriptor_, `anonymous namespace'::CNETMsg_NOP_reflection_
google::protobuf::Metadata __fastcall CNETMsg_NOP::GetMetadata(const CNETMsg_NOP *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_NOP_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_NOP_reflection_;
  return result;
}


// CNETMsg_SplitScreenUser::CNETMsg_SplitScreenUser  (line 2926, @0x0000000001a82f40, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CNETMsg_SplitScreenUser::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_SplitScreenUser::CNETMsg_SplitScreenUser(CNETMsg_SplitScreenUser *const this)
{
  *this = off_3F6EA50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SplitScreenUser::InitAsDefaultInstance  (line 2932, @0x0000000001a82fd0, libserver.so)
void __fastcall CNETMsg_SplitScreenUser::InitAsDefaultInstance(CNETMsg_SplitScreenUser *const this)
{
  ;
}


// CNETMsg_SplitScreenUser::CNETMsg_SplitScreenUser  (line 2935, @0x0000000001a83150, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SplitScreenUser::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_SplitScreenUser::CNETMsg_SplitScreenUser(
        CNETMsg_SplitScreenUser *const this,
        const CNETMsg_SplitScreenUser *const from)
{
  *this = off_3F6EA50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  CNETMsg_SplitScreenUser::MergeFrom(this, from);
}


// CNETMsg_SplitScreenUser::SharedCtor  (line 2942, @0x0000000001a82fe0, libserver.so)  // inlines: memset
void __fastcall CNETMsg_SplitScreenUser::SharedCtor(CNETMsg_SplitScreenUser *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SplitScreenUser::~CNETMsg_SplitScreenUser  (line 2948, @0x0000000001a761d0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CNETMsg_SplitScreenUser::~CNETMsg_SplitScreenUser(CNETMsg_SplitScreenUser *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6EA50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_SplitScreenUser::~CNETMsg_SplitScreenUser  (line 2948, @0x0000000001a76200, libserver.so)  // inlines: ~CNETMsg_SplitScreenUser
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CNETMsg_SplitScreenUser::~CNETMsg_SplitScreenUser(CNETMsg_SplitScreenUser *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6EA50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CNETMsg_SplitScreenUser::SharedDtor  (line 2953, @0x0000000001a83000, libserver.so)
void __fastcall CNETMsg_SplitScreenUser::SharedDtor(CNETMsg_SplitScreenUser *const this)
{
  ;
}


// CNETMsg_SplitScreenUser::SetCachedSize  (line 2958, @0x0000000001a758f0, libserver.so)
void __fastcall CNETMsg_SplitScreenUser::SetCachedSize(const CNETMsg_SplitScreenUser *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_SplitScreenUser::descriptor  (line 2963, @0x0000000001a83010, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SplitScreenUser_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_SplitScreenUser::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_SplitScreenUser_descriptor_;
}


// CNETMsg_SplitScreenUser::default_instance  (line 2968, @0x0000000001a8ba50, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_SplitScreenUser::default_instance_
const CNETMsg_SplitScreenUser *__cdecl CNETMsg_SplitScreenUser::default_instance()
{
  const CNETMsg_SplitScreenUser *result; // rax

  result = CNETMsg_SplitScreenUser::default_instance_;
  if ( CNETMsg_SplitScreenUser::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_SplitScreenUser::default_instance_;
  }
  return result;
}


// CNETMsg_SplitScreenUser::New  (line 2975, @0x0000000001a82f90, libserver.so)
// calls: operator new, CNETMsg_SplitScreenUser::CNETMsg_SplitScreenUser, operator delete, _Unwind_Resume
CNETMsg_SplitScreenUser *__fastcall CNETMsg_SplitScreenUser::New(const CNETMsg_SplitScreenUser *const this)
{
  CNETMsg_SplitScreenUser *v1; // rbx

  v1 = operator new(0x20u);
  CNETMsg_SplitScreenUser::CNETMsg_SplitScreenUser(v1);
  return v1;
}


// CNETMsg_SplitScreenUser::Clear  (line 2979, @0x0000000001a766b0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_SplitScreenUser::Clear(CNETMsg_SplitScreenUser *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CNETMsg_SplitScreenUser::MergePartialFromCodedStream  (line 2985, @0x0000000001a7ef40, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, set_has_slot
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CNETMsg_SplitScreenUser::MergePartialFromCodedStream(
        CNETMsg_SplitScreenUser *const this,
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


// CNETMsg_SplitScreenUser::SerializeWithCachedSizes  (line 3031, @0x0000000001a77650, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_SplitScreenUser::SerializeWithCachedSizes(
        const CNETMsg_SplitScreenUser *const this,
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


// CNETMsg_SplitScreenUser::SerializeWithCachedSizesToArray  (line 3046, @0x0000000001a79970, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_SplitScreenUser::SerializeWithCachedSizesToArray(
        const CNETMsg_SplitScreenUser *const this,
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


// CNETMsg_SplitScreenUser::ByteSize  (line 3062, @0x0000000001a79250, libserver.so)  // inlines: Int32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CNETMsg_SplitScreenUser::ByteSize(const CNETMsg_SplitScreenUser *const this)
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


// CNETMsg_SplitScreenUser::MergeFrom  (line 3085, @0x0000000001a831d0, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_SplitScreenUser*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_SplitScreenUser::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_SplitScreenUser
void __fastcall CNETMsg_SplitScreenUser::MergeFrom(
        CNETMsg_SplitScreenUser *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_SplitScreenUser *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      3086);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_SplitScreenUser, 0)) != 0 )
  {
    CNETMsg_SplitScreenUser::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_SplitScreenUser::MergeFrom  (line 3097, @0x0000000001a830a0, libserver.so)  // inlines: set_has_slot, set_slot
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_SplitScreenUser::CNETMsg_SplitScreenUser, CNETMsg_SplitScreenUser::MergeFrom, CNETMsg_SplitScreenUser::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_SplitScreenUser::MergeFrom(
        CNETMsg_SplitScreenUser *const this,
        const CNETMsg_SplitScreenUser *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      3098);
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


// CNETMsg_SplitScreenUser::CopyFrom  (line 3107, @0x0000000001a75900, libserver.so)
void __fastcall CNETMsg_SplitScreenUser::CopyFrom(
        CNETMsg_SplitScreenUser *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_SplitScreenUser::CopyFrom  (line 3113, @0x0000000001a832b0, libserver.so)
// calls: CNETMsg_SplitScreenUser::MergeFrom
void __fastcall CNETMsg_SplitScreenUser::CopyFrom(
        CNETMsg_SplitScreenUser *const this,
        const CNETMsg_SplitScreenUser *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_SplitScreenUser::MergeFrom(this, from);
  }
}


// CNETMsg_SplitScreenUser::IsInitialized  (line 3119, @0x0000000001a75940, libserver.so)
bool __fastcall CNETMsg_SplitScreenUser::IsInitialized(const CNETMsg_SplitScreenUser *const this)
{
  return 1;
}


// CNETMsg_SplitScreenUser::Swap  (line 3124, @0x0000000001a832f0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_SplitScreenUser::Swap(CNETMsg_SplitScreenUser *const this, CNETMsg_SplitScreenUser *other)
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


// CNETMsg_SplitScreenUser::GetMetadata  (line 3133, @0x0000000001a7aeb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SplitScreenUser_descriptor_, `anonymous namespace'::CNETMsg_SplitScreenUser_reflection_
google::protobuf::Metadata __fastcall CNETMsg_SplitScreenUser::GetMetadata(const CNETMsg_SplitScreenUser *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_SplitScreenUser_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_SplitScreenUser_reflection_;
  return result;
}


// CNETMsg_Disconnect::CNETMsg_Disconnect  (line 3148, @0x0000000001a83330, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CNETMsg_Disconnect::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_Disconnect::CNETMsg_Disconnect(CNETMsg_Disconnect *const this)
{
  *this = off_3F6EB10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CNETMsg_Disconnect::InitAsDefaultInstance  (line 3154, @0x0000000001a833c0, libserver.so)
void __fastcall CNETMsg_Disconnect::InitAsDefaultInstance(CNETMsg_Disconnect *const this)
{
  ;
}


// CNETMsg_Disconnect::CNETMsg_Disconnect  (line 3157, @0x0000000001a83540, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_Disconnect::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_Disconnect::CNETMsg_Disconnect(
        CNETMsg_Disconnect *const this,
        const CNETMsg_Disconnect *const from)
{
  *this = off_3F6EB10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  CNETMsg_Disconnect::MergeFrom(this, from);
}


// CNETMsg_Disconnect::SharedCtor  (line 3164, @0x0000000001a833d0, libserver.so)  // inlines: memset
void __fastcall CNETMsg_Disconnect::SharedCtor(CNETMsg_Disconnect *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CNETMsg_Disconnect::~CNETMsg_Disconnect  (line 3170, @0x0000000001a76240, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CNETMsg_Disconnect::~CNETMsg_Disconnect(CNETMsg_Disconnect *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6EB10;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_Disconnect::~CNETMsg_Disconnect  (line 3170, @0x0000000001a76270, libserver.so)  // inlines: ~CNETMsg_Disconnect
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CNETMsg_Disconnect::~CNETMsg_Disconnect(CNETMsg_Disconnect *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6EB10;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CNETMsg_Disconnect::SharedDtor  (line 3175, @0x0000000001a833f0, libserver.so)
void __fastcall CNETMsg_Disconnect::SharedDtor(CNETMsg_Disconnect *const this)
{
  ;
}


// CNETMsg_Disconnect::SetCachedSize  (line 3180, @0x0000000001a75950, libserver.so)
void __fastcall CNETMsg_Disconnect::SetCachedSize(const CNETMsg_Disconnect *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_Disconnect::descriptor  (line 3185, @0x0000000001a83400, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_Disconnect_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_Disconnect::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_Disconnect_descriptor_;
}


// CNETMsg_Disconnect::default_instance  (line 3190, @0x0000000001a8ba80, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_Disconnect::default_instance_
const CNETMsg_Disconnect *__cdecl CNETMsg_Disconnect::default_instance()
{
  const CNETMsg_Disconnect *result; // rax

  result = CNETMsg_Disconnect::default_instance_;
  if ( CNETMsg_Disconnect::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_Disconnect::default_instance_;
  }
  return result;
}


// CNETMsg_Disconnect::New  (line 3197, @0x0000000001a83380, libserver.so)
// calls: operator new, CNETMsg_Disconnect::CNETMsg_Disconnect, operator delete, _Unwind_Resume
CNETMsg_Disconnect *__fastcall CNETMsg_Disconnect::New(const CNETMsg_Disconnect *const this)
{
  CNETMsg_Disconnect *v1; // rbx

  v1 = operator new(0x20u);
  CNETMsg_Disconnect::CNETMsg_Disconnect(v1);
  return v1;
}


// CNETMsg_Disconnect::Clear  (line 3201, @0x0000000001a766f0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_Disconnect::Clear(CNETMsg_Disconnect *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CNETMsg_Disconnect::MergePartialFromCodedStream  (line 3207, @0x0000000001a7f070, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)14u>, ReadTagWithCutoff, ReadVarint32, set_has_reason, set_reason
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), ENetworkDisconnectionReason_IsValid, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::UnknownFieldSet::AddVarint(int,ulong)
bool __fastcall CNETMsg_Disconnect::MergePartialFromCodedStream(
        CNETMsg_Disconnect *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  google::protobuf::UnknownFieldSet *v4; // r12
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v12; // rax
  signed int v13; // r15d
  unsigned int v14[13]; // [rsp+Ch] [rbp-34h] BYREF

  v4 = (this + 8);
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
    if ( buffer_end <= buffer )
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
    if ( v9 >> 3 != 2 || v9 != 16 )
      break;
    v12 = input->buffer_;
    if ( v12 >= input->buffer_end_ || ((v13 = *v12) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v14);
      if ( !result )
        return result;
      v13 = v14[0];
      if ( !ENetworkDisconnectionReason_IsValid(v14[0]) )
      {
LABEL_25:
        google::protobuf::UnknownFieldSet::AddVarint(v4, 2, v13);
        goto LABEL_19;
      }
    }
    else
    {
      input->buffer_ = v12 + 1;
      if ( !ENetworkDisconnectionReason_IsValid(v13) )
        goto LABEL_25;
    }
    *(this + 4) |= 1u;
    *(this + 6) = v13;
LABEL_19:
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


// CNETMsg_Disconnect::SerializeWithCachedSizes  (line 3258, @0x0000000001a77d50, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_Disconnect::SerializeWithCachedSizes(
        const CNETMsg_Disconnect *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  _QWORD *v6; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteEnum(&loc_2, *(this + 6), output, v3);
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


// CNETMsg_Disconnect::SerializeWithCachedSizesToArray  (line 3274, @0x0000000001a798f0, libserver.so)  // inlines: WriteEnumNoTagToArray, WriteEnumToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_Disconnect::SerializeWithCachedSizesToArray(
        const CNETMsg_Disconnect *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::io::CodedOutputStream *v4; // rdi
  __int64 v5; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    v4 = *(this + 6);
    *target = 16;
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


// CNETMsg_Disconnect::ByteSize  (line 3291, @0x0000000001a792c0, libserver.so)  // inlines: EnumSize, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CNETMsg_Disconnect::ByteSize(const CNETMsg_Disconnect *const this)
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


// CNETMsg_Disconnect::MergeFrom  (line 3313, @0x0000000001a835c0, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_Disconnect*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_Disconnect::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_Disconnect
void __fastcall CNETMsg_Disconnect::MergeFrom(
        CNETMsg_Disconnect *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_Disconnect *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      3314);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_Disconnect, 0)) != 0 )
  {
    CNETMsg_Disconnect::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_Disconnect::MergeFrom  (line 3325, @0x0000000001a83490, libserver.so)  // inlines: set_has_reason, set_reason
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_Disconnect::CNETMsg_Disconnect, CNETMsg_Disconnect::MergeFrom, CNETMsg_Disconnect::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_Disconnect::MergeFrom(CNETMsg_Disconnect *const this, const CNETMsg_Disconnect *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      3326);
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


// CNETMsg_Disconnect::CopyFrom  (line 3335, @0x0000000001a75960, libserver.so)
void __fastcall CNETMsg_Disconnect::CopyFrom(
        CNETMsg_Disconnect *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_Disconnect::CopyFrom  (line 3341, @0x0000000001a836a0, libserver.so)
// calls: CNETMsg_Disconnect::MergeFrom
void __fastcall CNETMsg_Disconnect::CopyFrom(CNETMsg_Disconnect *const this, const CNETMsg_Disconnect *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_Disconnect::MergeFrom(this, from);
  }
}


// CNETMsg_Disconnect::IsInitialized  (line 3347, @0x0000000001a759a0, libserver.so)
bool __fastcall CNETMsg_Disconnect::IsInitialized(const CNETMsg_Disconnect *const this)
{
  return 1;
}


// CNETMsg_Disconnect::Swap  (line 3352, @0x0000000001a836e0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_Disconnect::Swap(CNETMsg_Disconnect *const this, CNETMsg_Disconnect *other)
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


// CNETMsg_Disconnect::GetMetadata  (line 3361, @0x0000000001a7af50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_Disconnect_descriptor_, `anonymous namespace'::CNETMsg_Disconnect_reflection_
google::protobuf::Metadata __fastcall CNETMsg_Disconnect::GetMetadata(const CNETMsg_Disconnect *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_Disconnect_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_Disconnect_reflection_;
  return result;
}


// CNETMsg_Tick::CNETMsg_Tick  (line 3381, @0x0000000001a83770, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_Tick::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CNETMsg_Tick::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_Tick::CNETMsg_Tick(CNETMsg_Tick *const this)
{
  *this = off_3F6EBD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CNETMsg_Tick::SharedCtor(this);
}


// CNETMsg_Tick::InitAsDefaultInstance  (line 3387, @0x0000000001a83720, libserver.so)
void __fastcall CNETMsg_Tick::InitAsDefaultInstance(CNETMsg_Tick *const this)
{
  ;
}


// CNETMsg_Tick::CNETMsg_Tick  (line 3390, @0x0000000001a839c0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_Tick::SharedCtor, CNETMsg_Tick::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_Tick::CNETMsg_Tick(CNETMsg_Tick *const this, const CNETMsg_Tick *const from)
{
  *this = off_3F6EBD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CNETMsg_Tick::SharedCtor(this);
  CNETMsg_Tick::MergeFrom(this, from);
}


// CNETMsg_Tick::SharedCtor  (line 3397, @0x0000000001a83730, libserver.so)  // inlines: memset
// callers: CNETMsg_Tick::CNETMsg_Tick
void __fastcall CNETMsg_Tick::SharedCtor(CNETMsg_Tick *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 4) = 0;
}


// CNETMsg_Tick::~CNETMsg_Tick  (line 3408, @0x0000000001a762b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CNETMsg_Tick::~CNETMsg_Tick(CNETMsg_Tick *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6EBD0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_Tick::~CNETMsg_Tick  (line 3408, @0x0000000001a762e0, libserver.so)  // inlines: ~CNETMsg_Tick
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CNETMsg_Tick::~CNETMsg_Tick(CNETMsg_Tick *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6EBD0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CNETMsg_Tick::SharedDtor  (line 3413, @0x0000000001a837f0, libserver.so)
void __fastcall CNETMsg_Tick::SharedDtor(CNETMsg_Tick *const this)
{
  ;
}


// CNETMsg_Tick::SetCachedSize  (line 3418, @0x0000000001a759b0, libserver.so)
void __fastcall CNETMsg_Tick::SetCachedSize(const CNETMsg_Tick *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_Tick::descriptor  (line 3423, @0x0000000001a83800, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_Tick_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_Tick::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_Tick_descriptor_;
}


// CNETMsg_Tick::default_instance  (line 3428, @0x0000000001a8bab0, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_Tick::default_instance_
const CNETMsg_Tick *__cdecl CNETMsg_Tick::default_instance()
{
  const CNETMsg_Tick *result; // rax

  result = CNETMsg_Tick::default_instance_;
  if ( CNETMsg_Tick::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_Tick::default_instance_;
  }
  return result;
}


// CNETMsg_Tick::New  (line 3435, @0x0000000001a837b0, libserver.so)
// calls: operator new, CNETMsg_Tick::CNETMsg_Tick, operator delete, _Unwind_Resume
CNETMsg_Tick *__fastcall CNETMsg_Tick::New(const CNETMsg_Tick *const this)
{
  CNETMsg_Tick *v1; // rbx

  v1 = operator new(0x30u);
  CNETMsg_Tick::CNETMsg_Tick(v1);
  return v1;
}


// CNETMsg_Tick::Clear  (line 3439, @0x0000000001a76730, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_Tick::Clear(CNETMsg_Tick *const this)
{
  bool v1; // zf
  google::protobuf::UnknownFieldSet *v2; // rdi

  if ( (*(this + 16) & 0x3F) != 0 )
  {
    *(this + 3) = 0;
    *(this + 4) = 0;
    *(this + 5) = 0;
  }
  v1 = *(this + 1) == 0;
  *(this + 4) = 0;
  v2 = (this + 8);
  if ( !v1 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CNETMsg_Tick::MergePartialFromCodedStream  (line 3461, @0x0000000001a7e630, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_host_computationtime, set_has_host_computationtime_std_deviation, set_has_host_framestarttime_std_deviation, set_has_host_frametime, set_has_host_frametime_std_deviation, set_has_tick
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// globals: jpt_1A7E6A0
bool __fastcall CNETMsg_Tick::MergePartialFromCodedStream(
        CNETMsg_Tick *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v3; // r15
  unsigned int *v5; // r13
  unsigned int v7; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *i; // rax
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v11; // rdx
  int v12; // eax
  const google::protobuf::uint8 *v13; // rdx
  const google::protobuf::uint8 *v14; // rax
  int v15; // eax
  const google::protobuf::uint8 *v16; // rdx
  int v17; // eax
  const google::protobuf::uint8 *v18; // rdx
  int v19; // eax
  int v20; // eax
  const google::protobuf::uint8 *v21; // rdx
  int v23; // eax
  unsigned int *v24; // [rsp+8h] [rbp-38h]

  v2 = (this + 36);
  v3 = (this + 40);
  v5 = (this + 44);
  v7 = this + 8;
  v24 = (this + 36);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
LABEL_2:
    if ( buffer < i )
    {
      TagFallback = *buffer;
      if ( TagFallback > 0 )
      {
        input->last_tag_ = TagFallback;
        input->buffer_ = buffer + 1;
        break;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      break;
    if ( TagFallback == 0 )
      return 1;
LABEL_7:
    if ( (TagFallback & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7, v2) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  switch ( TagFallback >> 3 )
  {
    case 1u:
      if ( TagFallback != 8 )
        goto LABEL_7;
      v14 = input->buffer_;
      if ( v14 >= input->buffer_end_ || ((v15 = *v14) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 6) == 0 )
          return 0;
      }
      else
      {
        *(this + 6) = v15;
        ++input->buffer_;
      }
      *(this + 4) |= 1u;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 16 )
        goto LABEL_2;
      v11 = buffer + 1;
      input->buffer_ = v11;
parse_host_frametime:
      if ( i <= v11 || ((v12 = *v11) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 7) == 0 )
          return 0;
      }
      else
      {
        *(this + 7) = v12;
        ++input->buffer_;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 24 )
        goto LABEL_2;
      v13 = buffer + 1;
      input->buffer_ = v13;
parse_host_frametime_std_deviation:
      if ( i <= v13 || ((v19 = *v13) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 8) == 0 )
          return 0;
      }
      else
      {
        *(this + 8) = v19;
        ++input->buffer_;
      }
      *(this + 4) |= 4u;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 32 )
        goto LABEL_2;
      v16 = buffer + 1;
      input->buffer_ = v16;
parse_host_computationtime:
      if ( i <= v16 || ((v17 = *v16) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v24) == 0 )
          return 0;
      }
      else
      {
        *(this + 9) = v17;
        ++input->buffer_;
      }
      *(this + 4) |= 8u;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 40 )
        goto LABEL_2;
      v18 = buffer + 1;
      input->buffer_ = v18;
parse_host_computationtime_std_deviation:
      if ( v18 >= i || ((v20 = *v18) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v3) == 0 )
          return 0;
      }
      else
      {
        *(this + 10) = v20;
        ++input->buffer_;
      }
      *(this + 4) |= 0x10u;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 48 )
        goto LABEL_2;
      v21 = buffer + 1;
      input->buffer_ = v21;
parse_host_framestarttime_std_deviation:
      if ( v21 >= i || ((v23 = *v21) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v5) == 0 )
          return 0;
      }
      else
      {
        *(this + 11) = v23;
        ++input->buffer_;
      }
      *(this + 4) |= 0x20u;
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
      return 1;
    case 2u:
      if ( TagFallback != 16 )
        goto LABEL_7;
      v11 = input->buffer_;
      i = input->buffer_end_;
      goto parse_host_frametime;
    case 3u:
      if ( TagFallback != 24 )
        goto LABEL_7;
      v13 = input->buffer_;
      i = input->buffer_end_;
      goto parse_host_frametime_std_deviation;
    case 4u:
      if ( TagFallback != 32 )
        goto LABEL_7;
      v16 = input->buffer_;
      i = input->buffer_end_;
      goto parse_host_computationtime;
    case 5u:
      if ( TagFallback != 40 )
        goto LABEL_7;
      v18 = input->buffer_;
      i = input->buffer_end_;
      goto parse_host_computationtime_std_deviation;
    case 6u:
      if ( TagFallback != 48 )
        goto LABEL_7;
      v21 = input->buffer_;
      i = input->buffer_end_;
      goto parse_host_framestarttime_std_deviation;
    default:
      goto LABEL_7;
  }
}


// CNETMsg_Tick::SerializeWithCachedSizes  (line 3582, @0x0000000001a77db0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_Tick::SerializeWithCachedSizes(
        const CNETMsg_Tick *const this,
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
      goto LABEL_12;
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
    goto LABEL_13;
  }
LABEL_12:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 8), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 2, *(this + 9), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_7;
LABEL_15:
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6, *(this + 11), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_8;
  }
LABEL_14:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 3, *(this + 10), output, v3);
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


// CNETMsg_Tick::SerializeWithCachedSizesToArray  (line 3622, @0x0000000001a799f0, libserver.so)  // inlines: WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_Tick::SerializeWithCachedSizesToArray(
        const CNETMsg_Tick *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::io::CodedOutputStream *v10; // rdi
  __int64 v11; // rax

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
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v8 = *(this + 9);
    *target = 32;
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
  if ( (v4 & 0x10) != 0 )
  {
    v9 = *(this + 10);
    *target = 40;
    if ( v9 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, target + 1, v2);
    }
    else
    {
      target[1] = v9;
      target += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v10 = *(this + 11);
    *target = 48;
    if ( v10 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, target + 1, v2);
    }
    else
    {
      target[1] = v10;
      target += 2;
    }
  }
  v11 = *(this + 1);
  if ( v11 == 0 || *(v11 + 8) == *v11 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v11);
}


// CNETMsg_Tick::ByteSize  (line 3663, @0x0000000001a777c0, libserver.so)  // inlines: UInt32Size, VarintSize32, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CNETMsg_Tick::ByteSize(const CNETMsg_Tick *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::io::CodedOutputStream *v10; // rdi
  _QWORD *v11; // rax
  google::protobuf::io::CodedOutputStream *v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax

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
        v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
        v5 = *(this + 4);
        v3 += v16 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v8 = *(this + 8);
      if ( v8 > 0x7F )
      {
        v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
        v5 = *(this + 4);
        v3 += v15 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v5 & 8) != 0 )
    {
      v9 = *(this + 9);
      if ( v9 > 0x7F )
      {
        v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
        v5 = *(this + 4);
        v3 += v17 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v10 = *(this + 10);
      if ( v10 > 0x7F )
      {
        v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
        v5 = *(this + 4);
        v3 += v18 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v5 & 0x20) != 0 )
    {
      v13 = *(this + 11);
      if ( v13 > 0x7F )
        v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, v1) + 1;
      else
        v3 += 2;
    }
  }
  v11 = *(this + 1);
  if ( v11 != 0 && v11[1] != *v11 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CNETMsg_Tick::MergeFrom  (line 3721, @0x0000000001a83a30, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_Tick*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_Tick::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_Tick
void __fastcall CNETMsg_Tick::MergeFrom(CNETMsg_Tick *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_Tick *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      3722);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_Tick, 0)) != 0 )
  {
    CNETMsg_Tick::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_Tick::MergeFrom  (line 3733, @0x0000000001a83890, libserver.so)  // inlines: set_has_host_computationtime, set_has_host_computationtime_std_deviation, set_has_host_framestarttime_std_deviation, set_has_host_frametime, set_has_host_frametime_std_deviation, set_has_tick, set_host_computationtime, set_host_computationtime_std_deviation, set_host_framestarttime_std_deviation, set_host_frametime, set_host_frametime_std_deviation, set_tick
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_Tick::CNETMsg_Tick, CNETMsg_Tick::MergeFrom, CNETMsg_Tick::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_Tick::MergeFrom(CNETMsg_Tick *const this, const CNETMsg_Tick *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  char v12; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v13; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v13,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      3734);
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
      v9 = *(from + 10);
      *(this + 4) |= 0x10u;
      *(this + 10) = v9;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x20) != 0 )
    {
      v10 = *(from + 11);
      *(this + 4) |= 0x20u;
      *(this + 11) = v10;
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CNETMsg_Tick::CopyFrom  (line 3758, @0x0000000001a759c0, libserver.so)
void __fastcall CNETMsg_Tick::CopyFrom(CNETMsg_Tick *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_Tick::CopyFrom  (line 3764, @0x0000000001a83b10, libserver.so)
// calls: CNETMsg_Tick::MergeFrom
void __fastcall CNETMsg_Tick::CopyFrom(CNETMsg_Tick *const this, const CNETMsg_Tick *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_Tick::MergeFrom(this, from);
  }
}


// CNETMsg_Tick::IsInitialized  (line 3770, @0x0000000001a75a00, libserver.so)
bool __fastcall CNETMsg_Tick::IsInitialized(const CNETMsg_Tick *const this)
{
  return 1;
}


// CNETMsg_Tick::Swap  (line 3775, @0x0000000001a83b50, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_Tick::Swap(CNETMsg_Tick *const this, CNETMsg_Tick *other)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax

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
    v6 = *(this + 10);
    *(this + 10) = *(other + 10);
    *(other + 10) = v6;
    v7 = *(this + 11);
    *(this + 11) = *(other + 11);
    *(other + 11) = v7;
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


// CNETMsg_Tick::GetMetadata  (line 3789, @0x0000000001a7aff0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_Tick_descriptor_, `anonymous namespace'::CNETMsg_Tick_reflection_
google::protobuf::Metadata __fastcall CNETMsg_Tick::GetMetadata(const CNETMsg_Tick *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_Tick_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_Tick_reflection_;
  return result;
}


// CNETMsg_StringCmd::CNETMsg_StringCmd  (line 3804, @0x0000000001a83ca0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_StringCmd::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNETMsg_StringCmd::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_StringCmd::CNETMsg_StringCmd(CNETMsg_StringCmd *const this)
{
  *this = off_3F6EC90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CNETMsg_StringCmd::SharedCtor(this);
}


// CNETMsg_StringCmd::InitAsDefaultInstance  (line 3810, @0x0000000001a83bd0, libserver.so)
void __fastcall CNETMsg_StringCmd::InitAsDefaultInstance(CNETMsg_StringCmd *const this)
{
  ;
}


// CNETMsg_StringCmd::CNETMsg_StringCmd  (line 3813, @0x0000000001a83f70, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_StringCmd::SharedCtor, CNETMsg_StringCmd::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_StringCmd::CNETMsg_StringCmd(
        CNETMsg_StringCmd *const this,
        const CNETMsg_StringCmd *const from)
{
  *this = off_3F6EC90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CNETMsg_StringCmd::SharedCtor(this);
  CNETMsg_StringCmd::MergeFrom(this, from);
}


// CNETMsg_StringCmd::SharedCtor  (line 3820, @0x0000000001a83be0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CNETMsg_StringCmd::CNETMsg_StringCmd
void __fastcall CNETMsg_StringCmd::SharedCtor(CNETMsg_StringCmd *const this)
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


// CNETMsg_StringCmd::~CNETMsg_StringCmd  (line 3827, @0x0000000001a83db0, libserver.so)
// calls: CNETMsg_StringCmd::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNETMsg_StringCmd::~CNETMsg_StringCmd
void __fastcall CNETMsg_StringCmd::~CNETMsg_StringCmd(CNETMsg_StringCmd *const this)
{
  *this = off_3F6EC90;
  CNETMsg_StringCmd::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_StringCmd::~CNETMsg_StringCmd  (line 3827, @0x0000000001a83df0, libserver.so)
// calls: CNETMsg_StringCmd::~CNETMsg_StringCmd, operator delete
void __fastcall CNETMsg_StringCmd::~CNETMsg_StringCmd(CNETMsg_StringCmd *const this)
{
  CNETMsg_StringCmd::~CNETMsg_StringCmd(this);
  operator delete(this);
}


// CNETMsg_StringCmd::SharedDtor  (line 3832, @0x0000000001a83d40, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CNETMsg_StringCmd::~CNETMsg_StringCmd
void __fastcall CNETMsg_StringCmd::SharedDtor(CNETMsg_StringCmd *const this)
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


// CNETMsg_StringCmd::SetCachedSize  (line 3838, @0x0000000001a75a10, libserver.so)
void __fastcall CNETMsg_StringCmd::SetCachedSize(const CNETMsg_StringCmd *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_StringCmd::descriptor  (line 3843, @0x0000000001a83e10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_StringCmd_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_StringCmd::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_StringCmd_descriptor_;
}


// CNETMsg_StringCmd::default_instance  (line 3848, @0x0000000001a8bae0, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_StringCmd::default_instance_
const CNETMsg_StringCmd *__cdecl CNETMsg_StringCmd::default_instance()
{
  const CNETMsg_StringCmd *result; // rax

  result = CNETMsg_StringCmd::default_instance_;
  if ( CNETMsg_StringCmd::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_StringCmd::default_instance_;
  }
  return result;
}


// CNETMsg_StringCmd::New  (line 3855, @0x0000000001a83d00, libserver.so)
// calls: operator new, CNETMsg_StringCmd::CNETMsg_StringCmd, operator delete, _Unwind_Resume
CNETMsg_StringCmd *__fastcall CNETMsg_StringCmd::New(const CNETMsg_StringCmd *const this)
{
  CNETMsg_StringCmd *v1; // rbx

  v1 = operator new(0x20u);
  CNETMsg_StringCmd::CNETMsg_StringCmd(v1);
  return v1;
}


// CNETMsg_StringCmd::Clear  (line 3859, @0x0000000001a76ea0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CNETMsg_StringCmd::Clear(CNETMsg_StringCmd *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 1) != 0 )
    std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CNETMsg_StringCmd::MergePartialFromCodedStream  (line 3867, @0x0000000001a7fab0, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, mutable_command, set_has_command
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
bool __fastcall CNETMsg_StringCmd::MergePartialFromCodedStream(
        CNETMsg_StringCmd *const this,
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


// CNETMsg_StringCmd::SerializeWithCachedSizes  (line 3915, @0x0000000001a775f0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_StringCmd::SerializeWithCachedSizes(
        const CNETMsg_StringCmd *const this,
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


// CNETMsg_StringCmd::SerializeWithCachedSizesToArray  (line 3935, @0x0000000001a78f10, libserver.so)  // inlines: WriteStringToArray, WriteTagToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_StringCmd::SerializeWithCachedSizesToArray(
        const CNETMsg_StringCmd *const this,
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


// CNETMsg_StringCmd::ByteSize  (line 3957, @0x0000000001a79b80, libserver.so)  // inlines: StringSize, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CNETMsg_StringCmd::ByteSize(const CNETMsg_StringCmd *const this)
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


// CNETMsg_StringCmd::MergeFrom  (line 3980, @0x0000000001a83fe0, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_StringCmd*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_StringCmd::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_StringCmd
void __fastcall CNETMsg_StringCmd::MergeFrom(
        CNETMsg_StringCmd *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_StringCmd *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      3981);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_StringCmd, 0)) != 0 )
  {
    CNETMsg_StringCmd::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_StringCmd::MergeFrom  (line 3992, @0x0000000001a83ea0, libserver.so)  // inlines: set_command, set_has_command
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_StringCmd::CNETMsg_StringCmd, CNETMsg_StringCmd::MergeFrom, CNETMsg_StringCmd::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_StringCmd::MergeFrom(CNETMsg_StringCmd *const this, const CNETMsg_StringCmd *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      3993);
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


// CNETMsg_StringCmd::CopyFrom  (line 4002, @0x0000000001a75a20, libserver.so)
void __fastcall CNETMsg_StringCmd::CopyFrom(CNETMsg_StringCmd *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_StringCmd::CopyFrom  (line 4008, @0x0000000001a840c0, libserver.so)
// calls: CNETMsg_StringCmd::MergeFrom
void __fastcall CNETMsg_StringCmd::CopyFrom(CNETMsg_StringCmd *const this, const CNETMsg_StringCmd *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_StringCmd::MergeFrom(this, from);
  }
}


// CNETMsg_StringCmd::IsInitialized  (line 4014, @0x0000000001a75a60, libserver.so)
bool __fastcall CNETMsg_StringCmd::IsInitialized(const CNETMsg_StringCmd *const this)
{
  return 1;
}


// CNETMsg_StringCmd::Swap  (line 4019, @0x0000000001a84100, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_StringCmd::Swap(CNETMsg_StringCmd *const this, CNETMsg_StringCmd *other)
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


// CNETMsg_StringCmd::GetMetadata  (line 4028, @0x0000000001a7b090, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_StringCmd_descriptor_, `anonymous namespace'::CNETMsg_StringCmd_reflection_
google::protobuf::Metadata __fastcall CNETMsg_StringCmd::GetMetadata(const CNETMsg_StringCmd *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_StringCmd_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_StringCmd_reflection_;
  return result;
}


// CNETMsg_SetConVar::CNETMsg_SetConVar  (line 4043, @0x0000000001a84150, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CNETMsg_SetConVar::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_SetConVar::CNETMsg_SetConVar(CNETMsg_SetConVar *const this)
{
  *this = off_3F6ED50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SetConVar::InitAsDefaultInstance  (line 4049, @0x0000000001a8b9e0, libserver.so)  // inlines: default_instance
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// callers: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CMsg_CVars::default_instance_
void __fastcall CNETMsg_SetConVar::InitAsDefaultInstance(CNETMsg_SetConVar *const this)
{
  if ( CMsg_CVars::default_instance_ != 0 )
  {
    *(this + 3) = CMsg_CVars::default_instance_;
  }
  else
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    *(this + 3) = CMsg_CVars::default_instance_;
  }
}


// CNETMsg_SetConVar::CNETMsg_SetConVar  (line 4053, @0x0000000001a843e0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SetConVar::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_SetConVar::CNETMsg_SetConVar(
        CNETMsg_SetConVar *const this,
        const CNETMsg_SetConVar *const from)
{
  *this = off_3F6ED50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  CNETMsg_SetConVar::MergeFrom(this, from);
}


// CNETMsg_SetConVar::SharedCtor  (line 4060, @0x0000000001a841e0, libserver.so)  // inlines: memset
void __fastcall CNETMsg_SetConVar::SharedCtor(CNETMsg_SetConVar *const this)
{
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SetConVar::~CNETMsg_SetConVar  (line 4066, @0x0000000001a76320, libserver.so)  // inlines: SharedDtor
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNETMsg_SetConVar::~CNETMsg_SetConVar
// globals: CNETMsg_SetConVar::default_instance_
void __fastcall CNETMsg_SetConVar::~CNETMsg_SetConVar(CNETMsg_SetConVar *const this)
{
  __int64 v2; // rdi

  *this = off_3F6ED50;
  if ( this != CNETMsg_SetConVar::default_instance_ )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
  }
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_SetConVar::~CNETMsg_SetConVar  (line 4066, @0x0000000001a76370, libserver.so)
// calls: CNETMsg_SetConVar::~CNETMsg_SetConVar, operator delete
void __fastcall CNETMsg_SetConVar::~CNETMsg_SetConVar(CNETMsg_SetConVar *const this)
{
  CNETMsg_SetConVar::~CNETMsg_SetConVar(this);
  operator delete(this);
}


// CNETMsg_SetConVar::SharedDtor  (line 4071, @0x0000000001a84200, libserver.so)
// globals: CNETMsg_SetConVar::default_instance_
void __fastcall CNETMsg_SetConVar::SharedDtor(CNETMsg_SetConVar *const this)
{
  __int64 v1; // rdi

  if ( this != CNETMsg_SetConVar::default_instance_ )
  {
    v1 = *(this + 3);
    if ( v1 != 0 )
      (*(*v1 + 8LL))(v1);
  }
}


// CNETMsg_SetConVar::SetCachedSize  (line 4077, @0x0000000001a75a70, libserver.so)
void __fastcall CNETMsg_SetConVar::SetCachedSize(const CNETMsg_SetConVar *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_SetConVar::descriptor  (line 4082, @0x0000000001a84230, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SetConVar_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_SetConVar::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_SetConVar_descriptor_;
}


// CNETMsg_SetConVar::default_instance  (line 4087, @0x0000000001a8bb10, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_SetConVar::default_instance_
const CNETMsg_SetConVar *__cdecl CNETMsg_SetConVar::default_instance()
{
  const CNETMsg_SetConVar *result; // rax

  result = CNETMsg_SetConVar::default_instance_;
  if ( CNETMsg_SetConVar::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_SetConVar::default_instance_;
  }
  return result;
}


// CNETMsg_SetConVar::New  (line 4094, @0x0000000001a841a0, libserver.so)
// calls: operator new, CNETMsg_SetConVar::CNETMsg_SetConVar, operator delete, _Unwind_Resume
CNETMsg_SetConVar *__fastcall CNETMsg_SetConVar::New(const CNETMsg_SetConVar *const this)
{
  CNETMsg_SetConVar *v1; // rbx

  v1 = operator new(0x20u);
  CNETMsg_SetConVar::CNETMsg_SetConVar(v1);
  return v1;
}


// CNETMsg_SetConVar::Clear  (line 4098, @0x0000000001a768c0, libserver.so)  // inlines: Clear, memset
// calls: CMsg_CVars::Clear, google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_SetConVar::Clear(CNETMsg_SetConVar *const this)
{
  CMsg_CVars *v2; // rdi
  bool v3; // zf

  if ( (*(this + 16) & 1) != 0 )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      CMsg_CVars::Clear(v2);
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CNETMsg_SetConVar::MergePartialFromCodedStream  (line 4106, @0x0000000001a824f0, libserver.so)  // inlines: Advance, DecrementRecursionDepth, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CMsg_CVars>, ReadTagWithCutoff, ReadVarint32, mutable_convars, set_has_convars
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::PushLimit(int), CMsg_CVars::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CMsg_CVars::CMsg_CVars, operator delete, _Unwind_Resume
bool __fastcall CNETMsg_SetConVar::MergePartialFromCodedStream(
        CNETMsg_SetConVar *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  CMsg_CVars *v10; // r15
  const google::protobuf::uint8 *v11; // rax
  int v12; // eax
  bool v13; // cc
  int recursion_depth; // edx
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  int v16; // [rsp+Ch] [rbp-44h]
  unsigned int v17[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = this + 8;
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
        result = google::protobuf::internal::WireFormat::SkipField(input, v7, v3, buffer_end);
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
    v10 = *(this + 3);
    *(this + 4) |= 1u;
    if ( v10 == 0 )
    {
      v10 = operator new(0x30u);
      CMsg_CVars::CMsg_CVars(v10);
      *(this + 3) = v10;
    }
    v11 = input->buffer_;
    if ( v11 >= input->buffer_end_ || *v11 < 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v17) == 0 )
        return 0;
    }
    else
    {
      v17[0] = *v11;
      input->buffer_ = v11 + 1;
    }
    v12 = input->recursion_depth_ + 1;
    v13 = input->recursion_limit_ < v12;
    input->recursion_depth_ = v12;
    if ( v13 )
      return 0;
    v16 = google::protobuf::io::CodedInputStream::PushLimit(input, v17[0]);
    if ( !CMsg_CVars::MergePartialFromCodedStream(v10, input) || !input->legitimate_message_end_ )
      return 0;
    legitimate_message_end = input->legitimate_message_end_;
    google::protobuf::io::CodedInputStream::PopLimit(input, v16);
    recursion_depth = input->recursion_depth_;
    result = legitimate_message_end;
    if ( recursion_depth > 0 )
      input->recursion_depth_ = recursion_depth - 1;
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
  if ( v7 != 0 )
    goto LABEL_8;
  return 1;
}


// CNETMsg_SetConVar::SerializeWithCachedSizes  (line 4150, @0x0000000001a77990, libserver.so)  // inlines: convars, empty
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
// globals: CNETMsg_SetConVar::default_instance_
void __fastcall CNETMsg_SetConVar::SerializeWithCachedSizes(
        const CNETMsg_SetConVar *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  const google::protobuf::Descriptor *containing_type; // rsi
  _QWORD *v7; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CNETMsg_SetConVar::default_instance_->containing_type_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_0 + 1, containing_type, output, v3);
  }
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CNETMsg_SetConVar::SerializeWithCachedSizesToArray  (line 4166, @0x0000000001a79010, libserver.so)  // inlines: GetCachedSize, WriteMessageNoVirtualToArray<CMsg_CVars>, WriteTagToArray, WriteVarint32ToArray, convars, empty
// calls: CMsg_CVars::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// globals: CNETMsg_SetConVar::default_instance_
google::protobuf::uint8 *__fastcall CNETMsg_SetConVar::SerializeWithCachedSizesToArray(
        const CNETMsg_SetConVar *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  unsigned int *containing_type; // r12
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::uint8 *v6; // rsi
  __int64 v7; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CNETMsg_SetConVar::default_instance_->containing_type_;
    *target = 10;
    v5 = containing_type[5];
    if ( v5 > 0x7F )
    {
      v6 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v5, target + 1, v2);
    }
    else
    {
      target[1] = v5;
      v6 = target + 2;
    }
    target = CMsg_CVars::SerializeWithCachedSizesToArray(containing_type, v6);
  }
  v7 = *(this + 1);
  if ( v7 == 0 || *(v7 + 8) == *v7 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v7);
}


// CNETMsg_SetConVar::ByteSize  (line 4184, @0x0000000001a79f50, libserver.so)  // inlines: LengthDelimitedSize, MessageSizeNoVirtual<CMsg_CVars>, VarintSize32, convars, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), CMsg_CVars::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// globals: CNETMsg_SetConVar::default_instance_
int __fastcall CNETMsg_SetConVar::ByteSize(const CNETMsg_SetConVar *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  _QWORD *v5; // rax
  const google::protobuf::Descriptor *containing_type; // rdi
  unsigned int v8; // ebx
  int v9; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CNETMsg_SetConVar::default_instance_->containing_type_;
    v8 = CMsg_CVars::ByteSize(containing_type);
    v9 = 1;
    if ( v8 > 0x7F )
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
    v3 = v8 + v9 + 1;
  }
  v5 = *(this + 1);
  if ( v5 != 0 && v5[1] != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CNETMsg_SetConVar::MergeFrom  (line 4207, @0x0000000001a84460, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_SetConVar*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_SetConVar::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_SetConVar
void __fastcall CNETMsg_SetConVar::MergeFrom(
        CNETMsg_SetConVar *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_SetConVar *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      4208);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_SetConVar, 0)) != 0 )
  {
    CNETMsg_SetConVar::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_SetConVar::MergeFrom  (line 4219, @0x0000000001a842c0, libserver.so)  // inlines: convars, mutable_convars, set_has_convars
// calls: CMsg_CVars::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CMsg_CVars::CMsg_CVars, _Unwind_Resume, operator delete
// callers: CNETMsg_SetConVar::CNETMsg_SetConVar, CNETMsg_SetConVar::MergeFrom, CNETMsg_SetConVar::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CNETMsg_SetConVar::default_instance_
void __fastcall CNETMsg_SetConVar::MergeFrom(CNETMsg_SetConVar *const this, const CNETMsg_SetConVar *const from)
{
  int v4; // eax
  const google::protobuf::Descriptor *containing_type; // r13
  CMsg_CVars *v6; // rdi
  __int64 v7; // rax
  CMsg_CVars *v8; // r14
  char v9; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v10; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      4220);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  v4 = *(from + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    containing_type = *(from + 3);
    if ( containing_type == 0 )
      containing_type = CNETMsg_SetConVar::default_instance_->containing_type_;
    v6 = *(this + 3);
    *(this + 4) |= 1u;
    if ( v6 == 0 )
    {
      v8 = operator new(0x30u);
      CMsg_CVars::CMsg_CVars(v8);
      *(this + 3) = v8;
      v6 = v8;
    }
    CMsg_CVars::MergeFrom(v6, containing_type);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CNETMsg_SetConVar::CopyFrom  (line 4229, @0x0000000001a75a80, libserver.so)
void __fastcall CNETMsg_SetConVar::CopyFrom(CNETMsg_SetConVar *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_SetConVar::CopyFrom  (line 4235, @0x0000000001a84540, libserver.so)
// calls: CNETMsg_SetConVar::MergeFrom
void __fastcall CNETMsg_SetConVar::CopyFrom(CNETMsg_SetConVar *const this, const CNETMsg_SetConVar *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_SetConVar::MergeFrom(this, from);
  }
}


// CNETMsg_SetConVar::IsInitialized  (line 4241, @0x0000000001a75ac0, libserver.so)
bool __fastcall CNETMsg_SetConVar::IsInitialized(const CNETMsg_SetConVar *const this)
{
  return 1;
}


// CNETMsg_SetConVar::Swap  (line 4246, @0x0000000001a84580, libserver.so)  // inlines: Swap, swap<CMsg_CVars*>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_SetConVar::Swap(CNETMsg_SetConVar *const this, CNETMsg_SetConVar *other)
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


// CNETMsg_SetConVar::GetMetadata  (line 4255, @0x0000000001a7b130, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SetConVar_descriptor_, `anonymous namespace'::CNETMsg_SetConVar_reflection_
google::protobuf::Metadata __fastcall CNETMsg_SetConVar::GetMetadata(const CNETMsg_SetConVar *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_SetConVar_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_SetConVar_reflection_;
  return result;
}


// CNETMsg_SignonState::CNETMsg_SignonState  (line 4275, @0x0000000001a846e0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SignonState::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNETMsg_SignonState::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_SignonState::CNETMsg_SignonState(CNETMsg_SignonState *const this)
{
  *this = off_3F6EE10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CNETMsg_SignonState::SharedCtor(this);
}


// CNETMsg_SignonState::InitAsDefaultInstance  (line 4281, @0x0000000001a845d0, libserver.so)
void __fastcall CNETMsg_SignonState::InitAsDefaultInstance(CNETMsg_SignonState *const this)
{
  ;
}


// CNETMsg_SignonState::CNETMsg_SignonState  (line 4284, @0x0000000001a84b80, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SignonState::SharedCtor, CNETMsg_SignonState::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_SignonState::CNETMsg_SignonState(
        CNETMsg_SignonState *const this,
        const CNETMsg_SignonState *const from)
{
  *this = off_3F6EE10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CNETMsg_SignonState::SharedCtor(this);
  CNETMsg_SignonState::MergeFrom(this, from);
}


// CNETMsg_SignonState::SharedCtor  (line 4291, @0x0000000001a845e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CNETMsg_SignonState::CNETMsg_SignonState
void __fastcall CNETMsg_SignonState::SharedCtor(CNETMsg_SignonState *const this)
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
  *(this + 18) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  v5 = google::protobuf::internal::empty_string_;
  *(this + 7) = v4;
  v6 = operator new(8u);
  std::string::string(v6, v5);
  *(this + 8) = v6;
  *(this + 4) = 0;
}


// CNETMsg_SignonState::~CNETMsg_SignonState  (line 4302, @0x0000000001a84870, libserver.so)  // inlines: ~RepeatedPtrField
// calls: CNETMsg_SignonState::SharedDtor, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNETMsg_SignonState::~CNETMsg_SignonState
void __fastcall CNETMsg_SignonState::~CNETMsg_SignonState(CNETMsg_SignonState *const this)
{
  *this = off_3F6EE10;
  CNETMsg_SignonState::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    (this + 32),
    (this + 44));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_SignonState::~CNETMsg_SignonState  (line 4302, @0x0000000001a848b0, libserver.so)
// calls: CNETMsg_SignonState::~CNETMsg_SignonState, operator delete
void __fastcall CNETMsg_SignonState::~CNETMsg_SignonState(CNETMsg_SignonState *const this)
{
  CNETMsg_SignonState::~CNETMsg_SignonState(this);
  operator delete(this);
}


// CNETMsg_SignonState::SharedDtor  (line 4307, @0x0000000001a847b0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CNETMsg_SignonState::~CNETMsg_SignonState
void __fastcall CNETMsg_SignonState::SharedDtor(CNETMsg_SignonState *const this)
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

  v2 = *(this + 7);
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
  v5 = *(this + 8);
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


// CNETMsg_SignonState::SetCachedSize  (line 4314, @0x0000000001a75ad0, libserver.so)
void __fastcall CNETMsg_SignonState::SetCachedSize(const CNETMsg_SignonState *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_SignonState::descriptor  (line 4319, @0x0000000001a848d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SignonState_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_SignonState::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_SignonState_descriptor_;
}


// CNETMsg_SignonState::default_instance  (line 4324, @0x0000000001a8bb40, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_SignonState::default_instance_
const CNETMsg_SignonState *__cdecl CNETMsg_SignonState::default_instance()
{
  const CNETMsg_SignonState *result; // rax

  result = CNETMsg_SignonState::default_instance_;
  if ( CNETMsg_SignonState::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_SignonState::default_instance_;
  }
  return result;
}


// CNETMsg_SignonState::New  (line 4331, @0x0000000001a84770, libserver.so)
// calls: operator new, CNETMsg_SignonState::CNETMsg_SignonState, operator delete, _Unwind_Resume
CNETMsg_SignonState *__fastcall CNETMsg_SignonState::New(const CNETMsg_SignonState *const this)
{
  CNETMsg_SignonState *v1; // rbx

  v1 = operator new(0x50u);
  CNETMsg_SignonState::CNETMsg_SignonState(v1);
  return v1;
}


// CNETMsg_SignonState::Clear  (line 4335, @0x0000000001a78ad0, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, clear, memset, size
// calls: std::string::_M_mutate(ulong,ulong,ulong), google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_SignonState::Clear(CNETMsg_SignonState *const this)
{
  int v2; // eax
  __int64 v3; // r12
  int v4; // ebx
  std::string *v5; // rdi
  bool v6; // zf

  v2 = *(this + 4);
  if ( (v2 & 0x37) != 0 )
  {
    *(this + 3) = 0;
    *(this + 18) = 0;
    if ( (v2 & 0x10) != 0 )
    {
      std::string::_M_mutate(*(this + 7), 0, *(**(this + 7) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x20) != 0 )
      std::string::_M_mutate(*(this + 8), 0, *(**(this + 8) - 24LL), 0);
  }
  v3 = 0;
  v4 = 0;
  while ( v4 < *(this + 10) )
  {
    ++v4;
    v5 = *(*(this + 4) + v3);
    v3 += 8;
    std::string::_M_mutate(v5, 0, *(v5->_M_dataplus._M_p - 3), 0);
  }
  v6 = *(this + 1) == 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
  if ( !v6 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CNETMsg_SignonState::MergePartialFromCodedStream  (line 4365, @0x0000000001a7eb60, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, add_players_networkids, mutable_addons, mutable_map_name, set_has_addons, set_has_map_name, set_has_num_server_players, set_has_signon_state, set_has_spawn_count
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::internal::StringTypeHandlerBase::New(void), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// globals: jpt_1A7EBD1
bool __fastcall CNETMsg_SignonState::MergePartialFromCodedStream(
        CNETMsg_SignonState *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *current_limit; // rcx
  unsigned int *v4; // r14
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // r13
  unsigned int v6; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *i; // rsi
  google::protobuf::io::CodedInputStream *v10; // rsi
  google::protobuf::uint8 *v11; // rdx
  const google::protobuf::uint8 *v12; // rdx
  int v13; // eax
  const google::protobuf::uint8 *v14; // rdx
  const google::protobuf::uint8 *v15; // rax
  int v16; // eax
  bool result; // al
  int v18; // eax
  google::protobuf::io::CodedInputStream *v19; // rax
  std::string *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // esi
  std::string *v24; // rdx
  google::protobuf::uint32 TagFallback; // eax
  unsigned int *v26; // [rsp+8h] [rbp-38h]

  v4 = (this + 72);
  v5 = (this + 32);
  v6 = this + 8;
  v26 = (this + 28);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
LABEL_2:
    if ( i > buffer )
    {
      v10 = *buffer;
      if ( v10 > 0 )
      {
        v11 = (buffer + 1);
        input->last_tag_ = v10;
        input->buffer_ = v11;
        break;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v10 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      break;
handle_unusual:
    if ( v10 == 0 )
      return 1;
LABEL_8:
    if ( (v10 & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v10, v6, current_limit) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  switch ( v10 >> 3 )
  {
    case 1u:
      if ( v10 != 8 )
        goto handle_unusual;
      v15 = input->buffer_;
      if ( v15 >= input->buffer_end_ || ((v16 = *v15) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 6) == 0 )
          return 0;
      }
      else
      {
        *(this + 6) = v16;
        ++input->buffer_;
      }
      *(this + 4) |= 1u;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 16 )
        goto LABEL_2;
      v12 = buffer + 1;
      input->buffer_ = v12;
parse_spawn_count:
      if ( i <= v12 || ((v13 = *v12) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v26) == 0 )
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
        goto LABEL_2;
      v14 = buffer + 1;
      input->buffer_ = v14;
parse_num_server_players:
      if ( v14 >= i || ((v18 = *v14) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *(this + 18) = v18;
        ++input->buffer_;
      }
      *(this + 4) |= 4u;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 34 )
        goto LABEL_2;
      do
      {
        input->buffer_ = buffer + 1;
LABEL_53:
        v22 = *(this + 10);
        v23 = *(this + 11);
        if ( v22 >= v23 )
        {
          if ( v23 == *(this + 12) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v5, v23 + 1);
          v19 = google::protobuf::internal::StringTypeHandlerBase::New(this);
          v20 = *(this + 10);
          v21 = *(this + 4);
          ++*(this + 11);
          *(this + 10) = v20 + 1;
          *(v21 + 8LL * v20) = v19;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, v19, v20) == 0 )
            return 0;
        }
        else
        {
          v24 = *(this + 4);
          *(this + 10) = v22 + 1;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, v24[v22]._M_dataplus._M_p, v24) == 0 )
            return 0;
        }
        buffer = input->buffer_;
        i = input->buffer_end_;
        if ( buffer >= i )
          goto LABEL_2;
      }
      while ( *buffer == 34 );
      if ( *buffer != 42 )
        goto LABEL_2;
      v11 = (buffer + 1);
      input->buffer_ = v11;
parse_map_name:
      *(this + 4) |= 0x10u;
      if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 7), v11) == 0 )
        return 0;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer >= i || *buffer != 50 )
        goto LABEL_2;
      v11 = (buffer + 1);
      input->buffer_ = v11;
parse_addons:
      *(this + 4) |= 0x20u;
      result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 8), v11);
      if ( !result )
        return 0;
      buffer = input->buffer_;
      i = input->buffer_end_;
      if ( buffer != i )
        goto LABEL_2;
      if ( input->buffer_size_after_limit_ == 0 )
      {
        current_limit = input->current_limit_;
        if ( input->total_bytes_read_ != current_limit )
        {
          i = input->buffer_;
          goto LABEL_2;
        }
      }
      input->last_tag_ = 0;
      input->legitimate_message_end_ = 1;
      return result;
    case 2u:
      if ( v10 != 16 )
        goto handle_unusual;
      v12 = input->buffer_;
      i = input->buffer_end_;
      goto parse_spawn_count;
    case 3u:
      if ( v10 != 24 )
        goto handle_unusual;
      v14 = input->buffer_;
      i = input->buffer_end_;
      goto parse_num_server_players;
    case 4u:
      if ( v10 == 34 )
        goto LABEL_53;
      if ( v10 == 0 )
        return 1;
      goto LABEL_8;
    case 5u:
      if ( v10 != 42 )
        goto handle_unusual;
      goto parse_map_name;
    case 6u:
      if ( v10 != 50 )
        goto handle_unusual;
      goto parse_addons;
    default:
      goto handle_unusual;
  }
}


// CNETMsg_SignonState::SerializeWithCachedSizes  (line 4494, @0x0000000001a78060, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, empty, players_networkids
// calls: google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_SignonState::SerializeWithCachedSizes(
        const CNETMsg_SignonState *const this,
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
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2, *(this + 7), output, v3);
    if ( (*(this + 4) & 4) == 0 )
      goto LABEL_4;
    goto LABEL_14;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 6), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 2) != 0 )
    goto LABEL_13;
LABEL_3:
  if ( (v6 & 4) != 0 )
LABEL_14:
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 1, *(this + 18), output, v3);
LABEL_4:
  for ( i = 0; *(this + 10) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteString(&loc_2 + 2, *(*(this + 4) + 8 * i), output, v3);
  v8 = *(this + 4);
  if ( (v8 & 0x10) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 3, *(this + 7), output, v3);
    v8 = *(this + 4);
  }
  if ( (v8 & 0x20) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_6, *(this + 8), output, v3);
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


// CNETMsg_SignonState::SerializeWithCachedSizesToArray  (line 4549, @0x0000000001a7bef0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty, players_networkids
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_SignonState::SerializeWithCachedSizesToArray(
        const CNETMsg_SignonState *const this,
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
  unsigned __int8 *v11; // rdx
  google::protobuf::io::CodedOutputStream *v12; // rdi
  unsigned __int8 *v13; // rdx
  google::protobuf::io::CodedOutputStream *v14; // rdi
  unsigned __int8 *v15; // rdx
  google::protobuf::io::CodedOutputStream *v16; // rdi
  __int64 v17; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 6);
    *target = 8;
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
    *result = 16;
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
    v8 = *(this + 18);
    *result = 24;
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
      v11 = *(this + 4);
      ++v10;
      v12 = *&v11[v9];
      *result = 34;
      v9 += 8;
      result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v12, (result + 1), v11);
    }
    while ( v10 < *(this + 10) );
  }
  v13 = *(this + 4);
  if ( (v13 & 0x10) != 0 )
  {
    v14 = *(this + 7);
    *result = 42;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v14, (result + 1), v13);
    LODWORD(v13) = *(this + 4);
  }
  v15 = (v13 & 0x20);
  if ( v15 != 0 )
  {
    v16 = *(this + 8);
    *result = 50;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v16, (result + 1), v15);
  }
  v17 = *(this + 1);
  if ( v17 != 0 && *(v17 + 8) != *v17 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v17);
  return result;
}


// CNETMsg_SignonState::ByteSize  (line 4607, @0x0000000001a7cbe0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, StringSize, UInt32Size, VarintSize32, empty, players_networkids, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CNETMsg_SignonState::ByteSize(const CNETMsg_SignonState *const this)
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
  int v11; // eax
  int v12; // r14d
  __int64 v13; // r12
  int v14; // ebx
  _QWORD *v15; // r15
  google::protobuf::io::CodedOutputStream *v16; // rdi
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  _QWORD *v21; // rbx
  google::protobuf::io::CodedOutputStream *v22; // rdi
  int v23; // eax
  int v24; // edx
  _QWORD *v25; // rbx
  google::protobuf::io::CodedOutputStream *v26; // rdi
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // eax

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_15;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = *(this + 6);
    LOBYTE(v2) = 2;
    if ( v6 > 0x7F )
    {
      v30 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v2 = v30 + 1;
    }
  }
  if ( (v5 & 2) != 0 )
  {
    v7 = *(this + 7);
    v8 = 2;
    if ( v7 > 0x7F )
    {
      v31 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
      v5 = *(this + 4);
      v8 = v31 + 1;
    }
    v2 += v8;
  }
  if ( (v5 & 4) != 0 )
  {
    v9 = *(this + 18);
    v10 = 2;
    if ( v9 > 0x7F )
    {
      v29 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      v5 = *(this + 4);
      v10 = v29 + 1;
    }
    v2 += v10;
  }
  if ( (v5 & 0x10) == 0 )
  {
    if ( (v5 & 0x20) == 0 )
      goto LABEL_15;
    goto LABEL_24;
  }
  v25 = *(this + 7);
  v26 = *(*v25 - 24LL);
  v27 = 1;
  v28 = v26;
  if ( v26 > 0x7F )
  {
    v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v26, v1);
    v28 = *(*v25 - 24LL);
    v5 = *(this + 4);
  }
  v2 += v27 + v28 + 1;
  if ( (v5 & 0x20) != 0 )
  {
LABEL_24:
    v21 = *(this + 8);
    v22 = *(*v21 - 24LL);
    v23 = 1;
    v24 = v22;
    if ( v22 > 0x7F )
    {
      v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, v1);
      v24 = *(*v21 - 24LL);
    }
    v2 += v23 + v24 + 1;
  }
LABEL_15:
  v11 = *(this + 10);
  v12 = v11 + v2;
  if ( v11 > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = *(*(this + 4) + v13);
      v16 = *(*v15 - 24LL);
      v17 = 1;
      v18 = v16;
      if ( v16 > 0x7F )
      {
        v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, v1);
        v18 = *(*v15 - 24LL);
      }
      ++v14;
      v13 += 8;
      v12 += v18 + v17;
    }
    while ( v14 < *(this + 10) );
  }
  v19 = *(this + 1);
  if ( v19 != 0 && *(v19 + 8) != *v19 )
    v12 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v19);
  *(this + 5) = v12;
  return v12;
}


// CNETMsg_SignonState::MergeFrom  (line 4665, @0x0000000001a84c20, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_SignonState*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_SignonState::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_SignonState
void __fastcall CNETMsg_SignonState::MergeFrom(
        CNETMsg_SignonState *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_SignonState *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      4666);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_SignonState, 0)) != 0 )
  {
    CNETMsg_SignonState::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_SignonState::MergeFrom  (line 4677, @0x0000000001a84960, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, operator=, set_addons, set_has_addons, set_has_map_name, set_has_num_server_players, set_has_signon_state, set_has_spawn_count, set_map_name, set_num_server_players, set_signon_state, set_spawn_count
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::internal::StringTypeHandlerBase::New(void), std::string::assign(std::string const&), google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_SignonState::CNETMsg_SignonState, CNETMsg_SignonState::MergeFrom, CNETMsg_SignonState::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CNETMsg_SignonState::MergeFrom(CNETMsg_SignonState *const this, const CNETMsg_SignonState *const from)
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
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const std::string *v19; // rsi
  std::string *v20; // rdi
  const std::string *v21; // rsi
  std::string *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v26; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v26,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      4678);
    v23 = google::protobuf::internal::LogMessage::operator<<(&v26, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v25, v23);
    google::protobuf::internal::LogMessage::~LogMessage(&v26);
  }
  if ( this + 32 == from + 32 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v26,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v24 = google::protobuf::internal::LogMessage::operator<<(&v26, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v25, v24);
    google::protobuf::internal::LogMessage::~LogMessage(&v26);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve((this + 32), *(from + 10) + *(this + 10));
  if ( *(from + 10) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v12 = *(this + 10);
      v13 = *(this + 11);
      if ( v12 >= v13 )
      {
        if ( v13 == *(this + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((this + 32), v13 + 1);
        v7 = google::protobuf::internal::StringTypeHandlerBase::New(v4);
        v8 = *(this + 10);
        v9 = *(this + 4);
        v10 = v7;
        ++*(this + 11);
        *(this + 10) = v8 + 1;
        *(v9 + 8 * v8) = v7;
      }
      else
      {
        v14 = *(this + 4);
        *(this + 10) = v12 + 1;
        v10 = *(v14 + 8 * v12);
      }
      ++v6;
      v11 = *(*(from + 4) + v5);
      v5 += 8;
      std::string::assign(v10, v11);
    }
    while ( v6 < *(from + 10) );
  }
  v15 = *(from + 4);
  if ( v15 != 0 )
  {
    if ( (v15 & 1) != 0 )
    {
      v16 = *(from + 6);
      *(this + 4) |= 1u;
      *(this + 6) = v16;
      v15 = *(from + 4);
    }
    if ( (v15 & 2) != 0 )
    {
      v17 = *(from + 7);
      *(this + 4) |= 2u;
      *(this + 7) = v17;
      v15 = *(from + 4);
    }
    if ( (v15 & 4) != 0 )
    {
      v18 = *(from + 18);
      *(this + 4) |= 4u;
      *(this + 18) = v18;
      v15 = *(from + 4);
    }
    if ( (v15 & 0x10) != 0 )
    {
      v21 = *(from + 7);
      v22 = *(this + 7);
      *(this + 4) |= 0x10u;
      std::string::assign(v22, v21);
      if ( (*(from + 4) & 0x20) == 0 )
        goto LABEL_22;
    }
    else if ( (v15 & 0x20) == 0 )
    {
      goto LABEL_22;
    }
    v19 = *(from + 8);
    v20 = *(this + 8);
    *(this + 4) |= 0x20u;
    std::string::assign(v20, v19);
  }
LABEL_22:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CNETMsg_SignonState::CopyFrom  (line 4700, @0x0000000001a75ae0, libserver.so)
void __fastcall CNETMsg_SignonState::CopyFrom(
        CNETMsg_SignonState *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_SignonState::CopyFrom  (line 4706, @0x0000000001a84d00, libserver.so)
// calls: CNETMsg_SignonState::MergeFrom
void __fastcall CNETMsg_SignonState::CopyFrom(CNETMsg_SignonState *const this, const CNETMsg_SignonState *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_SignonState::MergeFrom(this, from);
  }
}


// CNETMsg_SignonState::IsInitialized  (line 4712, @0x0000000001a75b20, libserver.so)
bool __fastcall CNETMsg_SignonState::IsInitialized(const CNETMsg_SignonState *const this)
{
  return 1;
}


// CNETMsg_SignonState::Swap  (line 4717, @0x0000000001a84d40, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CNETMsg_SignonState::Swap(CNETMsg_SignonState *const this, CNETMsg_SignonState *other)
{
  int v4; // eax
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // rdi
  int v7; // eax
  int total_size; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( other != this )
  {
    v4 = *(this + 6);
    v5 = (other + 32);
    v6 = (this + 32);
    v6[-1].total_size_ = v5[-1].total_size_;
    v5[-1].total_size_ = v4;
    v7 = *(&v6[-1].total_size_ + 1);
    *(&v6[-1].total_size_ + 1) = *(&v5[-1].total_size_ + 1);
    *(&v5[-1].total_size_ + 1) = v7;
    total_size = v6[1].total_size_;
    v6[1].total_size_ = v5[1].total_size_;
    v5[1].total_size_ = total_size;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v6, v5);
    v9 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v9;
    v10 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v10;
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


// CNETMsg_SignonState::GetMetadata  (line 4731, @0x0000000001a7b1d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SignonState_descriptor_, `anonymous namespace'::CNETMsg_SignonState_reflection_
google::protobuf::Metadata __fastcall CNETMsg_SignonState::GetMetadata(const CNETMsg_SignonState *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_SignonState_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_SignonState_reflection_;
  return result;
}


// CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t  (line 4753, @0x0000000001a84ef0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsg_GameEvent_key_t::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CSVCMsg_GameEvent_key_t::New, CSVCMsg_GameEvent::MergePartialFromCodedStream, CSVCMsg_GameEvent::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t(CSVCMsg_GameEvent_key_t *const this)
{
  *this = off_3F6EED0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CSVCMsg_GameEvent_key_t::SharedCtor(this);
}


// CSVCMsg_GameEvent_key_t::InitAsDefaultInstance  (line 4759, @0x0000000001a84df0, libserver.so)
void __fastcall CSVCMsg_GameEvent_key_t::InitAsDefaultInstance(CSVCMsg_GameEvent_key_t *const this)
{
  ;
}


// CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t  (line 4762, @0x0000000001a855b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsg_GameEvent_key_t::SharedCtor, CSVCMsg_GameEvent_key_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t(
        CSVCMsg_GameEvent_key_t *const this,
        const CSVCMsg_GameEvent_key_t *const from)
{
  *this = off_3F6EED0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CSVCMsg_GameEvent_key_t::SharedCtor(this);
  CSVCMsg_GameEvent_key_t::MergeFrom(this, from);
}


// CSVCMsg_GameEvent_key_t::SharedCtor  (line 4769, @0x0000000001a84e00, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t
void __fastcall CSVCMsg_GameEvent_key_t::SharedCtor(CSVCMsg_GameEvent_key_t *const this)
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


// CSVCMsg_GameEvent_key_t::~CSVCMsg_GameEvent_key_t  (line 4783, @0x0000000001a85340, libserver.so)
// calls: CSVCMsg_GameEvent_key_t::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CSVCMsg_GameEvent_key_t::~CSVCMsg_GameEvent_key_t
void __fastcall CSVCMsg_GameEvent_key_t::~CSVCMsg_GameEvent_key_t(CSVCMsg_GameEvent_key_t *const this)
{
  *this = off_3F6EED0;
  CSVCMsg_GameEvent_key_t::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CSVCMsg_GameEvent_key_t::~CSVCMsg_GameEvent_key_t  (line 4783, @0x0000000001a85380, libserver.so)
// calls: CSVCMsg_GameEvent_key_t::~CSVCMsg_GameEvent_key_t, operator delete
void __fastcall CSVCMsg_GameEvent_key_t::~CSVCMsg_GameEvent_key_t(CSVCMsg_GameEvent_key_t *const this)
{
  CSVCMsg_GameEvent_key_t::~CSVCMsg_GameEvent_key_t(this);
  operator delete(this);
}


// CSVCMsg_GameEvent_key_t::SharedDtor  (line 4788, @0x0000000001a852d0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CSVCMsg_GameEvent_key_t::~CSVCMsg_GameEvent_key_t
void __fastcall CSVCMsg_GameEvent_key_t::SharedDtor(CSVCMsg_GameEvent_key_t *const this)
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


// CSVCMsg_GameEvent_key_t::SetCachedSize  (line 4794, @0x0000000001a75b30, libserver.so)
void __fastcall CSVCMsg_GameEvent_key_t::SetCachedSize(const CSVCMsg_GameEvent_key_t *const this, int size)
{
  *(this + 5) = size;
}


// CSVCMsg_GameEvent_key_t::descriptor  (line 4799, @0x0000000001a853a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsg_GameEvent_key_t_descriptor_
const google::protobuf::Descriptor *__cdecl CSVCMsg_GameEvent_key_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CSVCMsg_GameEvent_key_t_descriptor_;
}


// CSVCMsg_GameEvent_key_t::default_instance  (line 4804, @0x0000000001a8bb70, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsg_GameEvent_key_t::default_instance_
const CSVCMsg_GameEvent_key_t *__cdecl CSVCMsg_GameEvent_key_t::default_instance()
{
  const CSVCMsg_GameEvent_key_t *result; // rax

  result = CSVCMsg_GameEvent_key_t::default_instance_;
  if ( CSVCMsg_GameEvent_key_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CSVCMsg_GameEvent_key_t::default_instance_;
  }
  return result;
}


// CSVCMsg_GameEvent_key_t::New  (line 4811, @0x0000000001a84f50, libserver.so)
// calls: operator new, CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t, operator delete, _Unwind_Resume
CSVCMsg_GameEvent_key_t *__fastcall CSVCMsg_GameEvent_key_t::New(const CSVCMsg_GameEvent_key_t *const this)
{
  CSVCMsg_GameEvent_key_t *v1; // rbx

  v1 = operator new(0x40u);
  CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t(v1);
  return v1;
}


// CSVCMsg_GameEvent_key_t::Clear  (line 4815, @0x0000000001a76f00, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CSVCMsg_GameEvent_key_t::Clear(CSVCMsg_GameEvent_key_t *const this)
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


// CSVCMsg_GameEvent_key_t::MergePartialFromCodedStream  (line 4840, @0x0000000001a7d8c0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)4u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, memcpy, mutable_val_string, set_has_type, set_has_val_bool, set_has_val_byte, set_has_val_float, set_has_val_long, set_has_val_short, set_has_val_string, set_has_val_uint64
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
// callers: CSVCMsg_GameEvent::MergePartialFromCodedStream
// globals: jpt_1A7D934
bool __fastcall CSVCMsg_GameEvent_key_t::MergePartialFromCodedStream(
        CSVCMsg_GameEvent_key_t *const this,
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


// CSVCMsg_GameEvent_key_t::SerializeWithCachedSizes  (line 4993, @0x0000000001a781c0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *)
void __fastcall CSVCMsg_GameEvent_key_t::SerializeWithCachedSizes(
        const CSVCMsg_GameEvent_key_t *const this,
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


// CSVCMsg_GameEvent_key_t::SerializeWithCachedSizesToArray  (line 5048, @0x0000000001a7ba90, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteFloatNoTagToArray, WriteFloatToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian32ToArray, WriteStringToArray, WriteTagToArray, WriteUInt64NoTagToArray, WriteUInt64ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CSVCMsg_GameEvent::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CSVCMsg_GameEvent_key_t::SerializeWithCachedSizesToArray(
        const CSVCMsg_GameEvent_key_t *const this,
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


// CSVCMsg_GameEvent_key_t::ByteSize  (line 5105, @0x0000000001a7a2a0, libserver.so)  // inlines: Int32Size, StringSize, UInt64Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
// callers: CSVCMsg_GameEvent::ByteSize
int __fastcall CSVCMsg_GameEvent_key_t::ByteSize(const CSVCMsg_GameEvent_key_t *const this)
{
  unsigned __int64 v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  google::protobuf::io::CodedOutputStream *v9; // rdi
  int v10; // eax
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  _QWORD *v15; // r13
  google::protobuf::io::CodedOutputStream *v16; // rdi
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_25;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
  {
LABEL_6:
    if ( (v5 & 2) == 0 )
      goto LABEL_7;
    goto LABEL_29;
  }
  v6 = *(this + 8);
  if ( v6 >= 0 )
  {
    LOBYTE(v3) = 2;
    if ( v6 > 0x7F )
    {
      v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v21 + 1;
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
      goto LABEL_13;
    goto LABEL_10;
  }
LABEL_29:
  v15 = *(this + 3);
  v16 = *(*v15 - 24LL);
  v17 = 1;
  v18 = v16;
  if ( v16 > 0x7F )
  {
    v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, v1);
    v18 = *(*v15 - 24LL);
    v5 = *(this + 4);
  }
  v3 += v17 + v18 + 1;
  if ( (v5 & 4) != 0 )
    v3 += 5;
  if ( (v5 & 8) != 0 )
  {
LABEL_10:
    v7 = *(this + 10);
    v8 = 11;
    if ( v7 >= 0 && (LOBYTE(v8) = 2, v7 > 0x7F) )
    {
      v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
      v5 = *(this + 4);
      v3 += v20 + 1;
    }
    else
    {
      v3 += v8;
    }
  }
LABEL_13:
  if ( (v5 & 0x10) != 0 )
  {
    v9 = *(this + 11);
    v10 = 11;
    if ( v9 >= 0 && (LOBYTE(v10) = 2, v9 > 0x7F) )
    {
      v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
      v5 = *(this + 4);
      v3 += v19 + 1;
    }
    else
    {
      v3 += v10;
    }
  }
  if ( (v5 & 0x20) != 0 )
  {
    v11 = *(this + 12);
    v12 = 11;
    if ( v11 >= 0 && (LOBYTE(v12) = 2, v11 > 0x7F) )
    {
      v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
      v5 = *(this + 4);
      v3 += v22 + 1;
    }
    else
    {
      v3 += v12;
    }
  }
  if ( (v5 & 0x40) != 0 )
    v3 += 2;
  if ( (v5 & 0x80) != 0 )
    v3 += google::protobuf::io::CodedOutputStream::VarintSize64(*(this + 7), v1) + 1;
LABEL_25:
  v13 = *(this + 1);
  if ( v13 != 0 && *(v13 + 8) != *v13 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v13);
  *(this + 5) = v3;
  return v3;
}


// CSVCMsg_GameEvent_key_t::MergeFrom  (line 5173, @0x0000000001a85620, libserver.so)  // inlines: dynamic_cast_if_available<const CSVCMsg_GameEvent_key_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CSVCMsg_GameEvent_key_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CSVCMsg_GameEvent_key_t
void __fastcall CSVCMsg_GameEvent_key_t::MergeFrom(
        CSVCMsg_GameEvent_key_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CSVCMsg_GameEvent_key_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      5174);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CSVCMsg_GameEvent_key_t, 0)) != 0 )
  {
    CSVCMsg_GameEvent_key_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CSVCMsg_GameEvent_key_t::MergeFrom  (line 5185, @0x0000000001a85430, libserver.so)  // inlines: set_has_type, set_has_val_bool, set_has_val_byte, set_has_val_float, set_has_val_long, set_has_val_short, set_has_val_string, set_has_val_uint64, set_type, set_val_bool, set_val_byte, set_val_float, set_val_long, set_val_short, set_val_string, set_val_uint64
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t, CSVCMsg_GameEvent_key_t::MergeFrom, CSVCMsg_GameEvent_key_t::CopyFrom, CSVCMsg_GameEvent::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CSVCMsg_GameEvent_key_t::MergeFrom(
        CSVCMsg_GameEvent_key_t *const this,
        const CSVCMsg_GameEvent_key_t *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      5186);
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


// CSVCMsg_GameEvent_key_t::CopyFrom  (line 5216, @0x0000000001a75b40, libserver.so)
void __fastcall CSVCMsg_GameEvent_key_t::CopyFrom(
        CSVCMsg_GameEvent_key_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CSVCMsg_GameEvent_key_t::CopyFrom  (line 5222, @0x0000000001a85700, libserver.so)
// calls: CSVCMsg_GameEvent_key_t::MergeFrom
void __fastcall CSVCMsg_GameEvent_key_t::CopyFrom(
        CSVCMsg_GameEvent_key_t *const this,
        const CSVCMsg_GameEvent_key_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CSVCMsg_GameEvent_key_t::MergeFrom(this, from);
  }
}


// CSVCMsg_GameEvent_key_t::IsInitialized  (line 5228, @0x0000000001a75b80, libserver.so)
bool __fastcall CSVCMsg_GameEvent_key_t::IsInitialized(const CSVCMsg_GameEvent_key_t *const this)
{
  return 1;
}


// CSVCMsg_GameEvent_key_t::Swap  (line 5233, @0x0000000001a85740, libserver.so)  // inlines: Swap, swap<bool>, swap<float>, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CSVCMsg_GameEvent_key_t::Swap(CSVCMsg_GameEvent_key_t *const this, CSVCMsg_GameEvent_key_t *other)
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


// CSVCMsg_GameEvent_key_t::GetMetadata  (line 5249, @0x0000000001a7b270, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsg_GameEvent_key_t_descriptor_, `anonymous namespace'::CSVCMsg_GameEvent_key_t_reflection_
google::protobuf::Metadata __fastcall CSVCMsg_GameEvent_key_t::GetMetadata(const CSVCMsg_GameEvent_key_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CSVCMsg_GameEvent_key_t_descriptor_;
  result.reflection = `anonymous namespace'::CSVCMsg_GameEvent_key_t_reflection_;
  return result;
}


// CSVCMsg_GameEvent::CSVCMsg_GameEvent  (line 5266, @0x0000000001a858c0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsg_GameEvent::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CSVCMsg_GameEvent::New, CSVCMsgList_GameEvents_event_t::MergePartialFromCodedStream, CSVCMsgList_GameEvents_event_t::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CSVCMsg_GameEvent::CSVCMsg_GameEvent(CSVCMsg_GameEvent *const this)
{
  *this = off_3F6EF90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CSVCMsg_GameEvent::SharedCtor(this);
}


// CSVCMsg_GameEvent::InitAsDefaultInstance  (line 5272, @0x0000000001a857f0, libserver.so)
void __fastcall CSVCMsg_GameEvent::InitAsDefaultInstance(CSVCMsg_GameEvent *const this)
{
  ;
}


// CSVCMsg_GameEvent::CSVCMsg_GameEvent  (line 5275, @0x0000000001a85f50, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsg_GameEvent::SharedCtor, CSVCMsg_GameEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CSVCMsg_GameEvent::CSVCMsg_GameEvent(
        CSVCMsg_GameEvent *const this,
        const CSVCMsg_GameEvent *const from)
{
  *this = off_3F6EF90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  CSVCMsg_GameEvent::SharedCtor(this);
  CSVCMsg_GameEvent::MergeFrom(this, from);
}


// CSVCMsg_GameEvent::SharedCtor  (line 5282, @0x0000000001a85800, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CSVCMsg_GameEvent::CSVCMsg_GameEvent
void __fastcall CSVCMsg_GameEvent::SharedCtor(CSVCMsg_GameEvent *const this)
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


// CSVCMsg_GameEvent::~CSVCMsg_GameEvent  (line 5290, @0x0000000001a85c50, libserver.so)  // inlines: ~RepeatedPtrField
// calls: CSVCMsg_GameEvent::SharedDtor, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CSVCMsg_GameEvent::~CSVCMsg_GameEvent
void __fastcall CSVCMsg_GameEvent::~CSVCMsg_GameEvent(CSVCMsg_GameEvent *const this)
{
  *this = off_3F6EF90;
  CSVCMsg_GameEvent::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>(
    (this + 32),
    (this + 44));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CSVCMsg_GameEvent::~CSVCMsg_GameEvent  (line 5290, @0x0000000001a85c90, libserver.so)
// calls: CSVCMsg_GameEvent::~CSVCMsg_GameEvent, operator delete
void __fastcall CSVCMsg_GameEvent::~CSVCMsg_GameEvent(CSVCMsg_GameEvent *const this)
{
  CSVCMsg_GameEvent::~CSVCMsg_GameEvent(this);
  operator delete(this);
}


// CSVCMsg_GameEvent::SharedDtor  (line 5295, @0x0000000001a85be0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CSVCMsg_GameEvent::~CSVCMsg_GameEvent
void __fastcall CSVCMsg_GameEvent::SharedDtor(CSVCMsg_GameEvent *const this)
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


// CSVCMsg_GameEvent::SetCachedSize  (line 5301, @0x0000000001a75b90, libserver.so)
void __fastcall CSVCMsg_GameEvent::SetCachedSize(const CSVCMsg_GameEvent *const this, int size)
{
  *(this + 5) = size;
}


// CSVCMsg_GameEvent::descriptor  (line 5306, @0x0000000001a85cb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsg_GameEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CSVCMsg_GameEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CSVCMsg_GameEvent_descriptor_;
}


// CSVCMsg_GameEvent::default_instance  (line 5311, @0x0000000001a8bba0, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsg_GameEvent::default_instance_
const CSVCMsg_GameEvent *__cdecl CSVCMsg_GameEvent::default_instance()
{
  const CSVCMsg_GameEvent *result; // rax

  result = CSVCMsg_GameEvent::default_instance_;
  if ( CSVCMsg_GameEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CSVCMsg_GameEvent::default_instance_;
  }
  return result;
}


// CSVCMsg_GameEvent::New  (line 5318, @0x0000000001a85950, libserver.so)
// calls: operator new, CSVCMsg_GameEvent::CSVCMsg_GameEvent, operator delete, _Unwind_Resume
CSVCMsg_GameEvent *__fastcall CSVCMsg_GameEvent::New(const CSVCMsg_GameEvent *const this)
{
  CSVCMsg_GameEvent *v1; // rbx

  v1 = operator new(0x40u);
  CSVCMsg_GameEvent::CSVCMsg_GameEvent(v1);
  return v1;
}


// CSVCMsg_GameEvent::Clear  (line 5322, @0x0000000001a77460, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
// callers: CSVCMsgList_GameEvents_event_t::Clear
void __fastcall CSVCMsg_GameEvent::Clear(CSVCMsg_GameEvent *const this)
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


// CSVCMsg_GameEvent::MergePartialFromCodedStream  (line 5334, @0x0000000001a84f90, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CSVCMsg_GameEvent_key_t>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, add_keys, mutable_event_name, set_has_event_name, set_has_eventid
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), operator new, CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t, google::protobuf::io::CodedInputStream::PushLimit(int), CSVCMsg_GameEvent_key_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CSVCMsgList_GameEvents_event_t::MergePartialFromCodedStream
bool __fastcall CSVCMsg_GameEvent::MergePartialFromCodedStream(
        CSVCMsg_GameEvent *const this,
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
  CSVCMsg_GameEvent_key_t *v15; // r14
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
    CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t(v15);
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
    if ( !CSVCMsg_GameEvent_key_t::MergePartialFromCodedStream(v15, input) || !input->legitimate_message_end_ )
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


// CSVCMsg_GameEvent::SerializeWithCachedSizes  (line 5411, @0x0000000001a77b80, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, empty, keys
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CSVCMsg_GameEvent::SerializeWithCachedSizes(
        const CSVCMsg_GameEvent *const this,
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


// CSVCMsg_GameEvent::SerializeWithCachedSizesToArray  (line 5442, @0x0000000001a7bc60, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, GetCachedSize, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CSVCMsg_GameEvent_key_t>, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, keys
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), CSVCMsg_GameEvent_key_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CSVCMsgList_GameEvents_event_t::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CSVCMsg_GameEvent::SerializeWithCachedSizesToArray(
        const CSVCMsg_GameEvent *const this,
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
      result = CSVCMsg_GameEvent_key_t::SerializeWithCachedSizesToArray(v14, v12);
    }
    while ( v11 < *(this + 10) );
  }
  v16 = *(this + 1);
  if ( v16 != 0 && *(v16 + 8) != *v16 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v16);
  return result;
}


// CSVCMsg_GameEvent::ByteSize  (line 5476, @0x0000000001a7a470, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CSVCMsg_GameEvent_key_t>, StringSize, VarintSize32, VarintSize32SignExtended, empty, keys, size
// calls: CSVCMsg_GameEvent_key_t::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CSVCMsgList_GameEvents_event_t::ByteSize
int __fastcall CSVCMsg_GameEvent::ByteSize(const CSVCMsg_GameEvent *const this)
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
      v9 = CSVCMsg_GameEvent_key_t::ByteSize(*(*(this + 4) + v7));
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


// CSVCMsg_GameEvent::MergeFrom  (line 5514, @0x0000000001a85ff0, libserver.so)  // inlines: dynamic_cast_if_available<const CSVCMsg_GameEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CSVCMsg_GameEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CSVCMsg_GameEvent
void __fastcall CSVCMsg_GameEvent::MergeFrom(
        CSVCMsg_GameEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CSVCMsg_GameEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      5515);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CSVCMsg_GameEvent, 0)) != 0 )
  {
    CSVCMsg_GameEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CSVCMsg_GameEvent::MergeFrom  (line 5526, @0x0000000001a85d40, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>, New, set_event_name, set_eventid, set_has_event_name, set_has_eventid
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t, CSVCMsg_GameEvent_key_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CSVCMsg_GameEvent::CSVCMsg_GameEvent, CSVCMsg_GameEvent::MergeFrom, CSVCMsg_GameEvent::CopyFrom, CSVCMsgList_GameEvents_event_t::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CSVCMsg_GameEvent::MergeFrom(CSVCMsg_GameEvent *const this, const CSVCMsg_GameEvent *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CSVCMsg_GameEvent_key_t *v6; // r15
  __int64 v7; // rax
  CSVCMsg_GameEvent_key_t *v8; // rdi
  __int64 v9; // rdx
  const CSVCMsg_GameEvent_key_t *v10; // rsi
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      5527);
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
        CSVCMsg_GameEvent_key_t::CSVCMsg_GameEvent_key_t(v6);
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
      CSVCMsg_GameEvent_key_t::MergeFrom(v8, v10);
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


// CSVCMsg_GameEvent::CopyFrom  (line 5540, @0x0000000001a75ba0, libserver.so)
void __fastcall CSVCMsg_GameEvent::CopyFrom(CSVCMsg_GameEvent *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CSVCMsg_GameEvent::CopyFrom  (line 5546, @0x0000000001a860d0, libserver.so)
// calls: CSVCMsg_GameEvent::MergeFrom
void __fastcall CSVCMsg_GameEvent::CopyFrom(CSVCMsg_GameEvent *const this, const CSVCMsg_GameEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CSVCMsg_GameEvent::MergeFrom(this, from);
  }
}


// CSVCMsg_GameEvent::IsInitialized  (line 5552, @0x0000000001a75be0, libserver.so)
bool __fastcall CSVCMsg_GameEvent::IsInitialized(const CSVCMsg_GameEvent *const this)
{
  return 1;
}


// CSVCMsg_GameEvent::Swap  (line 5557, @0x0000000001a86110, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CSVCMsg_GameEvent::Swap(CSVCMsg_GameEvent *const this, CSVCMsg_GameEvent *other)
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


// CSVCMsg_GameEvent::GetMetadata  (line 5568, @0x0000000001a7b310, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsg_GameEvent_descriptor_, `anonymous namespace'::CSVCMsg_GameEvent_reflection_
google::protobuf::Metadata __fastcall CSVCMsg_GameEvent::GetMetadata(const CSVCMsg_GameEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CSVCMsg_GameEvent_descriptor_;
  result.reflection = `anonymous namespace'::CSVCMsg_GameEvent_reflection_;
  return result;
}


// CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t  (line 5584, @0x0000000001a86190, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CSVCMsgList_GameEvents_event_t::New, CSVCMsgList_GameEvents::MergePartialFromCodedStream, CSVCMsgList_GameEvents::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t(
        CSVCMsgList_GameEvents_event_t *const this)
{
  *this = off_3F6F050;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
}


// CSVCMsgList_GameEvents_event_t::InitAsDefaultInstance  (line 5590, @0x0000000001a8bbd0, libserver.so)  // inlines: default_instance
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// callers: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsg_GameEvent::default_instance_
void __fastcall CSVCMsgList_GameEvents_event_t::InitAsDefaultInstance(CSVCMsgList_GameEvents_event_t *const this)
{
  if ( CSVCMsg_GameEvent::default_instance_ != 0 )
  {
    *(this + 3) = CSVCMsg_GameEvent::default_instance_;
  }
  else
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    *(this + 3) = CSVCMsg_GameEvent::default_instance_;
  }
}


// CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t  (line 5594, @0x0000000001a866b0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsgList_GameEvents_event_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t(
        CSVCMsgList_GameEvents_event_t *const this,
        const CSVCMsgList_GameEvents_event_t *const from)
{
  *this = off_3F6F050;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  CSVCMsgList_GameEvents_event_t::MergeFrom(this, from);
}


// CSVCMsgList_GameEvents_event_t::SharedCtor  (line 5601, @0x0000000001a86480, libserver.so)  // inlines: memset
void __fastcall CSVCMsgList_GameEvents_event_t::SharedCtor(CSVCMsgList_GameEvents_event_t *const this)
{
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
}


// CSVCMsgList_GameEvents_event_t::~CSVCMsgList_GameEvents_event_t  (line 5608, @0x0000000001a76390, libserver.so)  // inlines: SharedDtor
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CSVCMsgList_GameEvents_event_t::~CSVCMsgList_GameEvents_event_t
// globals: CSVCMsgList_GameEvents_event_t::default_instance_
void __fastcall CSVCMsgList_GameEvents_event_t::~CSVCMsgList_GameEvents_event_t(
        CSVCMsgList_GameEvents_event_t *const this)
{
  __int64 v2; // rdi

  *this = off_3F6F050;
  if ( this != CSVCMsgList_GameEvents_event_t::default_instance_ )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
  }
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CSVCMsgList_GameEvents_event_t::~CSVCMsgList_GameEvents_event_t  (line 5608, @0x0000000001a763e0, libserver.so)
// calls: CSVCMsgList_GameEvents_event_t::~CSVCMsgList_GameEvents_event_t, operator delete
void __fastcall CSVCMsgList_GameEvents_event_t::~CSVCMsgList_GameEvents_event_t(
        CSVCMsgList_GameEvents_event_t *const this)
{
  CSVCMsgList_GameEvents_event_t::~CSVCMsgList_GameEvents_event_t(this);
  operator delete(this);
}


// CSVCMsgList_GameEvents_event_t::SharedDtor  (line 5613, @0x0000000001a864b0, libserver.so)
// globals: CSVCMsgList_GameEvents_event_t::default_instance_
void __fastcall CSVCMsgList_GameEvents_event_t::SharedDtor(CSVCMsgList_GameEvents_event_t *const this)
{
  __int64 v1; // rdi

  if ( this != CSVCMsgList_GameEvents_event_t::default_instance_ )
  {
    v1 = *(this + 3);
    if ( v1 != 0 )
      (*(*v1 + 8LL))(v1);
  }
}


// CSVCMsgList_GameEvents_event_t::SetCachedSize  (line 5619, @0x0000000001a75bf0, libserver.so)
void __fastcall CSVCMsgList_GameEvents_event_t::SetCachedSize(
        const CSVCMsgList_GameEvents_event_t *const this,
        int size)
{
  *(this + 5) = size;
}


// CSVCMsgList_GameEvents_event_t::descriptor  (line 5624, @0x0000000001a864e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsgList_GameEvents_event_t_descriptor_
const google::protobuf::Descriptor *__cdecl CSVCMsgList_GameEvents_event_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CSVCMsgList_GameEvents_event_t_descriptor_;
}


// CSVCMsgList_GameEvents_event_t::default_instance  (line 5629, @0x0000000001a8bc10, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsgList_GameEvents_event_t::default_instance_
const CSVCMsgList_GameEvents_event_t *__cdecl CSVCMsgList_GameEvents_event_t::default_instance()
{
  const CSVCMsgList_GameEvents_event_t *result; // rax

  result = CSVCMsgList_GameEvents_event_t::default_instance_;
  if ( CSVCMsgList_GameEvents_event_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CSVCMsgList_GameEvents_event_t::default_instance_;
  }
  return result;
}


// CSVCMsgList_GameEvents_event_t::New  (line 5636, @0x0000000001a861f0, libserver.so)
// calls: operator new, CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t, operator delete, _Unwind_Resume
CSVCMsgList_GameEvents_event_t *__fastcall CSVCMsgList_GameEvents_event_t::New(
        const CSVCMsgList_GameEvents_event_t *const this)
{
  CSVCMsgList_GameEvents_event_t *v1; // rbx

  v1 = operator new(0x28u);
  CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t(v1);
  return v1;
}


// CSVCMsgList_GameEvents_event_t::Clear  (line 5640, @0x0000000001a77510, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), CSVCMsg_GameEvent::Clear
void __fastcall CSVCMsgList_GameEvents_event_t::Clear(CSVCMsgList_GameEvents_event_t *const this)
{
  int v2; // eax
  bool v3; // zf
  CSVCMsg_GameEvent *v4; // rdi

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    *(this + 8) = 0;
    if ( (v2 & 2) != 0 )
    {
      v4 = *(this + 3);
      if ( v4 != 0 )
        CSVCMsg_GameEvent::Clear(v4);
    }
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CSVCMsgList_GameEvents_event_t::MergePartialFromCodedStream  (line 5651, @0x0000000001a85990, libserver.so)  // inlines: Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CSVCMsg_GameEvent>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_event, set_has_event, set_has_tick
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::PushLimit(int), CSVCMsg_GameEvent::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CSVCMsg_GameEvent::CSVCMsg_GameEvent, operator delete, _Unwind_Resume
// callers: CSVCMsgList_GameEvents::MergePartialFromCodedStream
bool __fastcall CSVCMsgList_GameEvents_event_t::MergePartialFromCodedStream(
        CSVCMsgList_GameEvents_event_t *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v10; // rax
  unsigned int v11; // edx
  CSVCMsg_GameEvent *v12; // r15
  const google::protobuf::uint8 *v13; // rax
  int v14; // eax
  bool v15; // cc
  int recursion_depth; // edx
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  int v18; // [rsp+Ch] [rbp-44h]
  unsigned int v19[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
        result = google::protobuf::internal::WireFormat::SkipField(input, v7, v3, buffer_end);
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
    if ( v7 >> 3 != 1 )
      break;
    if ( v7 != 8 )
      goto handle_unusual;
    v10 = input->buffer_;
    if ( v10 >= input->buffer_end_ || ((v11 = *v10) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19);
      if ( !result )
        return result;
      v11 = v19[0];
    }
    else
    {
      input->buffer_ = v10 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 8) = v11;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      input->buffer_ = buffer + 1;
parse_event:
      v12 = *(this + 3);
      *(this + 4) |= 2u;
      if ( v12 == 0 )
      {
        v12 = operator new(0x40u);
        CSVCMsg_GameEvent::CSVCMsg_GameEvent(v12);
        *(this + 3) = v12;
      }
      v13 = input->buffer_;
      if ( v13 >= input->buffer_end_ || *v13 < 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19) == 0 )
          return 0;
      }
      else
      {
        v19[0] = *v13;
        input->buffer_ = v13 + 1;
      }
      v14 = input->recursion_depth_ + 1;
      v15 = input->recursion_limit_ < v14;
      input->recursion_depth_ = v14;
      if ( v15 )
        return 0;
      v18 = google::protobuf::io::CodedInputStream::PushLimit(input, v19[0]);
      if ( !CSVCMsg_GameEvent::MergePartialFromCodedStream(v12, input) || !input->legitimate_message_end_ )
        return 0;
      legitimate_message_end = input->legitimate_message_end_;
      google::protobuf::io::CodedInputStream::PopLimit(input, v18);
      recursion_depth = input->recursion_depth_;
      result = legitimate_message_end;
      if ( recursion_depth > 0 )
        input->recursion_depth_ = recursion_depth - 1;
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
    goto parse_event;
handle_unusual:
  if ( v7 != 0 )
    goto LABEL_9;
  return 1;
}


// CSVCMsgList_GameEvents_event_t::SerializeWithCachedSizes  (line 5710, @0x0000000001a77a00, libserver.so)  // inlines: empty, event
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
// globals: CSVCMsgList_GameEvents_event_t::default_instance_
void __fastcall CSVCMsgList_GameEvents_event_t::SerializeWithCachedSizes(
        const CSVCMsgList_GameEvents_event_t *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  const google::protobuf::Descriptor *containing_type; // rsi
  _QWORD *v8; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 8), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CSVCMsgList_GameEvents_event_t::default_instance_->containing_type_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, containing_type, output, v3);
  }
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CSVCMsgList_GameEvents_event_t::SerializeWithCachedSizesToArray  (line 5731, @0x0000000001a7bd70, libserver.so)  // inlines: GetCachedSize, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CSVCMsg_GameEvent>, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, event
// calls: CSVCMsg_GameEvent::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CSVCMsgList_GameEvents::SerializeWithCachedSizesToArray
// globals: CSVCMsgList_GameEvents_event_t::default_instance_
google::protobuf::uint8 *__fastcall CSVCMsgList_GameEvents_event_t::SerializeWithCachedSizesToArray(
        const CSVCMsgList_GameEvents_event_t *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  unsigned int *containing_type; // r12
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::uint8 *v8; // rsi
  __int64 v9; // rax

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
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CSVCMsgList_GameEvents_event_t::default_instance_->containing_type_;
    *target = 18;
    v7 = containing_type[5];
    if ( v7 > 0x7F )
    {
      v8 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, target + 1, v2);
    }
    else
    {
      target[1] = v7;
      v8 = target + 2;
    }
    target = CSVCMsg_GameEvent::SerializeWithCachedSizesToArray(containing_type, v8);
  }
  v9 = *(this + 1);
  if ( v9 == 0 || *(v9 + 8) == *v9 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v9);
}


// CSVCMsgList_GameEvents_event_t::ByteSize  (line 5754, @0x0000000001a7a590, libserver.so)  // inlines: Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CSVCMsg_GameEvent>, VarintSize32, VarintSize32SignExtended, empty, event
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), CSVCMsg_GameEvent::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CSVCMsgList_GameEvents::ByteSize
// globals: CSVCMsgList_GameEvents_event_t::default_instance_
int __fastcall CSVCMsgList_GameEvents_event_t::ByteSize(const CSVCMsgList_GameEvents_event_t *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  _QWORD *v7; // rax
  const google::protobuf::Descriptor *containing_type; // rdi
  unsigned int v10; // r13d
  int v11; // eax
  int v12; // eax

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
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v12 + 1;
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
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CSVCMsgList_GameEvents_event_t::default_instance_->containing_type_;
    v10 = CSVCMsg_GameEvent::ByteSize(containing_type);
    v11 = 1;
    if ( v10 > 0x7F )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
    v3 += v10 + v11 + 1;
  }
LABEL_7:
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CSVCMsgList_GameEvents_event_t::MergeFrom  (line 5784, @0x0000000001a86730, libserver.so)  // inlines: dynamic_cast_if_available<const CSVCMsgList_GameEvents_event_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CSVCMsgList_GameEvents_event_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CSVCMsgList_GameEvents_event_t
void __fastcall CSVCMsgList_GameEvents_event_t::MergeFrom(
        CSVCMsgList_GameEvents_event_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CSVCMsgList_GameEvents_event_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      5785);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CSVCMsgList_GameEvents_event_t,
               0)) != 0 )
  {
    CSVCMsgList_GameEvents_event_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CSVCMsgList_GameEvents_event_t::MergeFrom  (line 5796, @0x0000000001a86570, libserver.so)  // inlines: event, mutable_event, set_has_event, set_has_tick, set_tick
// calls: CSVCMsg_GameEvent::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CSVCMsg_GameEvent::CSVCMsg_GameEvent, _Unwind_Resume, operator delete
// callers: CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t, CSVCMsgList_GameEvents_event_t::MergeFrom, CSVCMsgList_GameEvents_event_t::CopyFrom, CSVCMsgList_GameEvents::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CSVCMsgList_GameEvents_event_t::default_instance_
void __fastcall CSVCMsgList_GameEvents_event_t::MergeFrom(
        CSVCMsgList_GameEvents_event_t *const this,
        const CSVCMsgList_GameEvents_event_t *const from)
{
  int v4; // eax
  int v5; // eax
  const google::protobuf::Descriptor *containing_type; // r13
  CSVCMsg_GameEvent *v7; // rdi
  __int64 v8; // rax
  CSVCMsg_GameEvent *v9; // r14
  char v10; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v11; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v11,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      5797);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v10, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
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
      containing_type = *(from + 3);
      if ( containing_type == 0 )
        containing_type = CSVCMsgList_GameEvents_event_t::default_instance_->containing_type_;
      v7 = *(this + 3);
      *(this + 4) |= 2u;
      if ( v7 == 0 )
      {
        v9 = operator new(0x40u);
        CSVCMsg_GameEvent::CSVCMsg_GameEvent(v9);
        *(this + 3) = v9;
        v7 = v9;
      }
      CSVCMsg_GameEvent::MergeFrom(v7, containing_type);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CSVCMsgList_GameEvents_event_t::CopyFrom  (line 5809, @0x0000000001a75c00, libserver.so)
void __fastcall CSVCMsgList_GameEvents_event_t::CopyFrom(
        CSVCMsgList_GameEvents_event_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CSVCMsgList_GameEvents_event_t::CopyFrom  (line 5815, @0x0000000001a86810, libserver.so)
// calls: CSVCMsgList_GameEvents_event_t::MergeFrom
void __fastcall CSVCMsgList_GameEvents_event_t::CopyFrom(
        CSVCMsgList_GameEvents_event_t *const this,
        const CSVCMsgList_GameEvents_event_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CSVCMsgList_GameEvents_event_t::MergeFrom(this, from);
  }
}


// CSVCMsgList_GameEvents_event_t::IsInitialized  (line 5821, @0x0000000001a75c40, libserver.so)
bool __fastcall CSVCMsgList_GameEvents_event_t::IsInitialized(const CSVCMsgList_GameEvents_event_t *const this)
{
  return 1;
}


// CSVCMsgList_GameEvents_event_t::Swap  (line 5826, @0x0000000001a86850, libserver.so)  // inlines: Swap, swap<CSVCMsg_GameEvent*>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CSVCMsgList_GameEvents_event_t::Swap(
        CSVCMsgList_GameEvents_event_t *const this,
        CSVCMsgList_GameEvents_event_t *other)
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


// CSVCMsgList_GameEvents_event_t::GetMetadata  (line 5836, @0x0000000001a7b3b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsgList_GameEvents_event_t_descriptor_, `anonymous namespace'::CSVCMsgList_GameEvents_event_t_reflection_
google::protobuf::Metadata __fastcall CSVCMsgList_GameEvents_event_t::GetMetadata(
        const CSVCMsgList_GameEvents_event_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CSVCMsgList_GameEvents_event_t_descriptor_;
  result.reflection = `anonymous namespace'::CSVCMsgList_GameEvents_event_t_reflection_;
  return result;
}


// CSVCMsgList_GameEvents::CSVCMsgList_GameEvents  (line 5851, @0x0000000001a868a0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CSVCMsgList_GameEvents::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CSVCMsgList_GameEvents::CSVCMsgList_GameEvents(CSVCMsgList_GameEvents *const this)
{
  *this = off_3F6F110;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CSVCMsgList_GameEvents::InitAsDefaultInstance  (line 5857, @0x0000000001a86940, libserver.so)
void __fastcall CSVCMsgList_GameEvents::InitAsDefaultInstance(CSVCMsgList_GameEvents *const this)
{
  ;
}


// CSVCMsgList_GameEvents::CSVCMsgList_GameEvents  (line 5860, @0x0000000001a86be0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsgList_GameEvents::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CSVCMsgList_GameEvents::CSVCMsgList_GameEvents(
        CSVCMsgList_GameEvents *const this,
        const CSVCMsgList_GameEvents *const from)
{
  *this = off_3F6F110;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
  CSVCMsgList_GameEvents::MergeFrom(this, from);
}


// CSVCMsgList_GameEvents::SharedCtor  (line 5867, @0x0000000001a86950, libserver.so)  // inlines: memset
void __fastcall CSVCMsgList_GameEvents::SharedCtor(CSVCMsgList_GameEvents *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CSVCMsgList_GameEvents::~CSVCMsgList_GameEvents  (line 5872, @0x0000000001a78d60, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CSVCMsgList_GameEvents::~CSVCMsgList_GameEvents
void __fastcall CSVCMsgList_GameEvents::~CSVCMsgList_GameEvents(CSVCMsgList_GameEvents *const this)
{
  *this = off_3F6F110;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CSVCMsgList_GameEvents::~CSVCMsgList_GameEvents  (line 5872, @0x0000000001a78da0, libserver.so)
// calls: CSVCMsgList_GameEvents::~CSVCMsgList_GameEvents, operator delete
void __fastcall CSVCMsgList_GameEvents::~CSVCMsgList_GameEvents(CSVCMsgList_GameEvents *const this)
{
  CSVCMsgList_GameEvents::~CSVCMsgList_GameEvents(this);
  operator delete(this);
}


// CSVCMsgList_GameEvents::SharedDtor  (line 5877, @0x0000000001a86970, libserver.so)
void __fastcall CSVCMsgList_GameEvents::SharedDtor(CSVCMsgList_GameEvents *const this)
{
  ;
}


// CSVCMsgList_GameEvents::SetCachedSize  (line 5882, @0x0000000001a75c50, libserver.so)
void __fastcall CSVCMsgList_GameEvents::SetCachedSize(const CSVCMsgList_GameEvents *const this, int size)
{
  *(this + 5) = size;
}


// CSVCMsgList_GameEvents::descriptor  (line 5887, @0x0000000001a86980, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsgList_GameEvents_descriptor_
const google::protobuf::Descriptor *__cdecl CSVCMsgList_GameEvents::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CSVCMsgList_GameEvents_descriptor_;
}


// CSVCMsgList_GameEvents::default_instance  (line 5892, @0x0000000001a8bc40, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsgList_GameEvents::default_instance_
const CSVCMsgList_GameEvents *__cdecl CSVCMsgList_GameEvents::default_instance()
{
  const CSVCMsgList_GameEvents *result; // rax

  result = CSVCMsgList_GameEvents::default_instance_;
  if ( CSVCMsgList_GameEvents::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CSVCMsgList_GameEvents::default_instance_;
  }
  return result;
}


// CSVCMsgList_GameEvents::New  (line 5899, @0x0000000001a86900, libserver.so)
// calls: operator new, CSVCMsgList_GameEvents::CSVCMsgList_GameEvents, operator delete, _Unwind_Resume
CSVCMsgList_GameEvents *__fastcall CSVCMsgList_GameEvents::New(const CSVCMsgList_GameEvents *const this)
{
  CSVCMsgList_GameEvents *v1; // rbx

  v1 = operator new(0x30u);
  CSVCMsgList_GameEvents::CSVCMsgList_GameEvents(v1);
  return v1;
}


// CSVCMsgList_GameEvents::Clear  (line 5903, @0x0000000001a76910, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CSVCMsgList_GameEvents::Clear(CSVCMsgList_GameEvents *const this)
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


// CSVCMsgList_GameEvents::MergePartialFromCodedStream  (line 5909, @0x0000000001a86230, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CSVCMsgList_GameEvents_event_t>, ReadTagWithCutoff, ReadVarint32, add_events
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CSVCMsgList_GameEvents_event_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
bool __fastcall CSVCMsgList_GameEvents::MergePartialFromCodedStream(
        CSVCMsgList_GameEvents *const this,
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
  CSVCMsgList_GameEvents_event_t *v13; // r13
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
        v13 = operator new(0x28u);
        CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t(v13);
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
      if ( !CSVCMsgList_GameEvents_event_t::MergePartialFromCodedStream(v13, input) || !input->legitimate_message_end_ )
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


// CSVCMsgList_GameEvents::SerializeWithCachedSizes  (line 5955, @0x0000000001a77c50, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, empty, events
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CSVCMsgList_GameEvents::SerializeWithCachedSizes(
        const CSVCMsgList_GameEvents *const this,
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


// CSVCMsgList_GameEvents::SerializeWithCachedSizesToArray  (line 5971, @0x0000000001a7be40, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CSVCMsgList_GameEvents_event_t>, WriteTagToArray, WriteVarint32ToArray, empty, events
// calls: CSVCMsgList_GameEvents_event_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CSVCMsgList_GameEvents::SerializeWithCachedSizesToArray(
        const CSVCMsgList_GameEvents *const this,
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
      result = CSVCMsgList_GameEvents_event_t::SerializeWithCachedSizesToArray(v8, v6);
    }
    while ( v5 < *(this + 8) );
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v10);
  return result;
}


// CSVCMsgList_GameEvents::ByteSize  (line 5989, @0x0000000001a7a680, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CSVCMsgList_GameEvents_event_t>, VarintSize32, empty, events
// calls: CSVCMsgList_GameEvents_event_t::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CSVCMsgList_GameEvents::ByteSize(const CSVCMsgList_GameEvents *const this)
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
      v6 = CSVCMsgList_GameEvents_event_t::ByteSize(*(*(this + 3) + v4));
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


// CSVCMsgList_GameEvents::MergeFrom  (line 6011, @0x0000000001a86c80, libserver.so)  // inlines: dynamic_cast_if_available<const CSVCMsgList_GameEvents*, const google::protobuf::Message*>
// calls: __dynamic_cast, CSVCMsgList_GameEvents::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CSVCMsgList_GameEvents
void __fastcall CSVCMsgList_GameEvents::MergeFrom(
        CSVCMsgList_GameEvents *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CSVCMsgList_GameEvents *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      6012);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CSVCMsgList_GameEvents, 0)) != 0 )
  {
    CSVCMsgList_GameEvents::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CSVCMsgList_GameEvents::MergeFrom  (line 6023, @0x0000000001a86a10, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>, New
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t, CSVCMsgList_GameEvents_event_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CSVCMsgList_GameEvents::CSVCMsgList_GameEvents, CSVCMsgList_GameEvents::MergeFrom, CSVCMsgList_GameEvents::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CSVCMsgList_GameEvents::MergeFrom(
        CSVCMsgList_GameEvents *const this,
        const CSVCMsgList_GameEvents *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CSVCMsgList_GameEvents_event_t *v6; // r15
  __int64 v7; // rax
  CSVCMsgList_GameEvents_event_t *v8; // rdi
  __int64 v9; // rdx
  const CSVCMsgList_GameEvents_event_t *v10; // rsi
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      6024);
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
        v6 = operator new(0x28u);
        CSVCMsgList_GameEvents_event_t::CSVCMsgList_GameEvents_event_t(v6);
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
      CSVCMsgList_GameEvents_event_t::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CSVCMsgList_GameEvents::CopyFrom  (line 6029, @0x0000000001a75c60, libserver.so)
void __fastcall CSVCMsgList_GameEvents::CopyFrom(
        CSVCMsgList_GameEvents *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CSVCMsgList_GameEvents::CopyFrom  (line 6035, @0x0000000001a86d60, libserver.so)
// calls: CSVCMsgList_GameEvents::MergeFrom
void __fastcall CSVCMsgList_GameEvents::CopyFrom(
        CSVCMsgList_GameEvents *const this,
        const CSVCMsgList_GameEvents *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CSVCMsgList_GameEvents::MergeFrom(this, from);
  }
}


// CSVCMsgList_GameEvents::IsInitialized  (line 6041, @0x0000000001a75ca0, libserver.so)
bool __fastcall CSVCMsgList_GameEvents::IsInitialized(const CSVCMsgList_GameEvents *const this)
{
  return 1;
}


// CSVCMsgList_GameEvents::Swap  (line 6046, @0x0000000001a86da0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CSVCMsgList_GameEvents::Swap(CSVCMsgList_GameEvents *const this, CSVCMsgList_GameEvents *other)
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


// CSVCMsgList_GameEvents::GetMetadata  (line 6055, @0x0000000001a7b450, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsgList_GameEvents_descriptor_, `anonymous namespace'::CSVCMsgList_GameEvents_reflection_
google::protobuf::Metadata __fastcall CSVCMsgList_GameEvents::GetMetadata(const CSVCMsgList_GameEvents *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CSVCMsgList_GameEvents_descriptor_;
  result.reflection = `anonymous namespace'::CSVCMsgList_GameEvents_reflection_;
  return result;
}


// CSVCMsg_UserMessage::CSVCMsg_UserMessage  (line 6071, @0x0000000001a86ed0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsg_UserMessage::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CSVCMsg_UserMessage::New, CSVCMsgList_UserMessages_usermsg_t::MergePartialFromCodedStream, CSVCMsgList_UserMessages_usermsg_t::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CSVCMsg_UserMessage::CSVCMsg_UserMessage(CSVCMsg_UserMessage *const this)
{
  *this = off_3F6F1D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CSVCMsg_UserMessage::SharedCtor(this);
}


// CSVCMsg_UserMessage::InitAsDefaultInstance  (line 6077, @0x0000000001a86e00, libserver.so)
void __fastcall CSVCMsg_UserMessage::InitAsDefaultInstance(CSVCMsg_UserMessage *const this)
{
  ;
}


// CSVCMsg_UserMessage::CSVCMsg_UserMessage  (line 6080, @0x0000000001a873f0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsg_UserMessage::SharedCtor, CSVCMsg_UserMessage::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CSVCMsg_UserMessage::CSVCMsg_UserMessage(
        CSVCMsg_UserMessage *const this,
        const CSVCMsg_UserMessage *const from)
{
  *this = off_3F6F1D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CSVCMsg_UserMessage::SharedCtor(this);
  CSVCMsg_UserMessage::MergeFrom(this, from);
}


// CSVCMsg_UserMessage::SharedCtor  (line 6087, @0x0000000001a86e10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CSVCMsg_UserMessage::CSVCMsg_UserMessage
void __fastcall CSVCMsg_UserMessage::SharedCtor(CSVCMsg_UserMessage *const this)
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


// CSVCMsg_UserMessage::~CSVCMsg_UserMessage  (line 6095, @0x0000000001a87220, libserver.so)
// calls: CSVCMsg_UserMessage::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CSVCMsg_UserMessage::~CSVCMsg_UserMessage
void __fastcall CSVCMsg_UserMessage::~CSVCMsg_UserMessage(CSVCMsg_UserMessage *const this)
{
  *this = off_3F6F1D0;
  CSVCMsg_UserMessage::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CSVCMsg_UserMessage::~CSVCMsg_UserMessage  (line 6095, @0x0000000001a87260, libserver.so)
// calls: CSVCMsg_UserMessage::~CSVCMsg_UserMessage, operator delete
void __fastcall CSVCMsg_UserMessage::~CSVCMsg_UserMessage(CSVCMsg_UserMessage *const this)
{
  CSVCMsg_UserMessage::~CSVCMsg_UserMessage(this);
  operator delete(this);
}


// CSVCMsg_UserMessage::SharedDtor  (line 6100, @0x0000000001a871b0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CSVCMsg_UserMessage::~CSVCMsg_UserMessage
void __fastcall CSVCMsg_UserMessage::SharedDtor(CSVCMsg_UserMessage *const this)
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


// CSVCMsg_UserMessage::SetCachedSize  (line 6106, @0x0000000001a75cb0, libserver.so)
void __fastcall CSVCMsg_UserMessage::SetCachedSize(const CSVCMsg_UserMessage *const this, int size)
{
  *(this + 5) = size;
}


// CSVCMsg_UserMessage::descriptor  (line 6111, @0x0000000001a87280, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsg_UserMessage_descriptor_
const google::protobuf::Descriptor *__cdecl CSVCMsg_UserMessage::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CSVCMsg_UserMessage_descriptor_;
}


// CSVCMsg_UserMessage::default_instance  (line 6116, @0x0000000001a8bc70, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsg_UserMessage::default_instance_
const CSVCMsg_UserMessage *__cdecl CSVCMsg_UserMessage::default_instance()
{
  const CSVCMsg_UserMessage *result; // rax

  result = CSVCMsg_UserMessage::default_instance_;
  if ( CSVCMsg_UserMessage::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CSVCMsg_UserMessage::default_instance_;
  }
  return result;
}


// CSVCMsg_UserMessage::New  (line 6123, @0x0000000001a86f30, libserver.so)
// calls: operator new, CSVCMsg_UserMessage::CSVCMsg_UserMessage, operator delete, _Unwind_Resume
CSVCMsg_UserMessage *__fastcall CSVCMsg_UserMessage::New(const CSVCMsg_UserMessage *const this)
{
  CSVCMsg_UserMessage *v1; // rbx

  v1 = operator new(0x28u);
  CSVCMsg_UserMessage::CSVCMsg_UserMessage(v1);
  return v1;
}


// CSVCMsg_UserMessage::Clear  (line 6127, @0x0000000001a76f80, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
// callers: CSVCMsgList_UserMessages_usermsg_t::Clear
void __fastcall CSVCMsg_UserMessage::Clear(CSVCMsg_UserMessage *const this)
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


// CSVCMsg_UserMessage::MergePartialFromCodedStream  (line 6138, @0x0000000001a7ddb0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_msg_data, set_has_msg_data, set_has_msg_type
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CSVCMsgList_UserMessages_usermsg_t::MergePartialFromCodedStream
bool __fastcall CSVCMsg_UserMessage::MergePartialFromCodedStream(
        CSVCMsg_UserMessage *const this,
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
parse_msg_data:
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
    goto parse_msg_data;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CSVCMsg_UserMessage::SerializeWithCachedSizes  (line 6197, @0x0000000001a78320, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CSVCMsg_UserMessage::SerializeWithCachedSizes(
        const CSVCMsg_UserMessage *const this,
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


// CSVCMsg_UserMessage::SerializeWithCachedSizesToArray  (line 6218, @0x0000000001a79bf0, libserver.so)  // inlines: WriteBytesToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CSVCMsgList_UserMessages_usermsg_t::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CSVCMsg_UserMessage::SerializeWithCachedSizesToArray(
        const CSVCMsg_UserMessage *const this,
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


// CSVCMsg_UserMessage::ByteSize  (line 6241, @0x0000000001a79330, libserver.so)  // inlines: BytesSize, Int32Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CSVCMsgList_UserMessages_usermsg_t::ByteSize
int __fastcall CSVCMsg_UserMessage::ByteSize(const CSVCMsg_UserMessage *const this)
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
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v13 + 1;
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
LABEL_7:
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CSVCMsg_UserMessage::MergeFrom  (line 6271, @0x0000000001a87460, libserver.so)  // inlines: dynamic_cast_if_available<const CSVCMsg_UserMessage*, const google::protobuf::Message*>
// calls: __dynamic_cast, CSVCMsg_UserMessage::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CSVCMsg_UserMessage
void __fastcall CSVCMsg_UserMessage::MergeFrom(
        CSVCMsg_UserMessage *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CSVCMsg_UserMessage *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      6272);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CSVCMsg_UserMessage, 0)) != 0 )
  {
    CSVCMsg_UserMessage::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CSVCMsg_UserMessage::MergeFrom  (line 6283, @0x0000000001a87310, libserver.so)  // inlines: set_has_msg_data, set_has_msg_type, set_msg_data, set_msg_type
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CSVCMsg_UserMessage::CSVCMsg_UserMessage, CSVCMsg_UserMessage::MergeFrom, CSVCMsg_UserMessage::CopyFrom, CSVCMsgList_UserMessages_usermsg_t::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CSVCMsg_UserMessage::MergeFrom(CSVCMsg_UserMessage *const this, const CSVCMsg_UserMessage *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      6284);
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


// CSVCMsg_UserMessage::CopyFrom  (line 6296, @0x0000000001a75cc0, libserver.so)
void __fastcall CSVCMsg_UserMessage::CopyFrom(
        CSVCMsg_UserMessage *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CSVCMsg_UserMessage::CopyFrom  (line 6302, @0x0000000001a87540, libserver.so)
// calls: CSVCMsg_UserMessage::MergeFrom
void __fastcall CSVCMsg_UserMessage::CopyFrom(CSVCMsg_UserMessage *const this, const CSVCMsg_UserMessage *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CSVCMsg_UserMessage::MergeFrom(this, from);
  }
}


// CSVCMsg_UserMessage::IsInitialized  (line 6308, @0x0000000001a75d00, libserver.so)
bool __fastcall CSVCMsg_UserMessage::IsInitialized(const CSVCMsg_UserMessage *const this)
{
  return 1;
}


// CSVCMsg_UserMessage::Swap  (line 6313, @0x0000000001a87580, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CSVCMsg_UserMessage::Swap(CSVCMsg_UserMessage *const this, CSVCMsg_UserMessage *other)
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


// CSVCMsg_UserMessage::GetMetadata  (line 6323, @0x0000000001a7b4f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsg_UserMessage_descriptor_, `anonymous namespace'::CSVCMsg_UserMessage_reflection_
google::protobuf::Metadata __fastcall CSVCMsg_UserMessage::GetMetadata(const CSVCMsg_UserMessage *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CSVCMsg_UserMessage_descriptor_;
  result.reflection = `anonymous namespace'::CSVCMsg_UserMessage_reflection_;
  return result;
}


// CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t  (line 6339, @0x0000000001a875d0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CSVCMsgList_UserMessages_usermsg_t::New, CSVCMsgList_UserMessages::MergePartialFromCodedStream, CSVCMsgList_UserMessages::MergeFrom, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t(
        CSVCMsgList_UserMessages_usermsg_t *const this)
{
  *this = off_3F6F290;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
}


// CSVCMsgList_UserMessages_usermsg_t::InitAsDefaultInstance  (line 6345, @0x0000000001a8bca0, libserver.so)  // inlines: default_instance
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// callers: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsg_UserMessage::default_instance_
void __fastcall CSVCMsgList_UserMessages_usermsg_t::InitAsDefaultInstance(
        CSVCMsgList_UserMessages_usermsg_t *const this)
{
  if ( CSVCMsg_UserMessage::default_instance_ != 0 )
  {
    *(this + 3) = CSVCMsg_UserMessage::default_instance_;
  }
  else
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    *(this + 3) = CSVCMsg_UserMessage::default_instance_;
  }
}


// CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t  (line 6349, @0x0000000001a87af0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsgList_UserMessages_usermsg_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t(
        CSVCMsgList_UserMessages_usermsg_t *const this,
        const CSVCMsgList_UserMessages_usermsg_t *const from)
{
  *this = off_3F6F290;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  CSVCMsgList_UserMessages_usermsg_t::MergeFrom(this, from);
}


// CSVCMsgList_UserMessages_usermsg_t::SharedCtor  (line 6356, @0x0000000001a878c0, libserver.so)  // inlines: memset
void __fastcall CSVCMsgList_UserMessages_usermsg_t::SharedCtor(CSVCMsgList_UserMessages_usermsg_t *const this)
{
  *(this + 5) = 0;
  *(this + 8) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
}


// CSVCMsgList_UserMessages_usermsg_t::~CSVCMsgList_UserMessages_usermsg_t  (line 6363, @0x0000000001a76400, libserver.so)  // inlines: SharedDtor
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CSVCMsgList_UserMessages_usermsg_t::~CSVCMsgList_UserMessages_usermsg_t
// globals: CSVCMsgList_UserMessages_usermsg_t::default_instance_
void __fastcall CSVCMsgList_UserMessages_usermsg_t::~CSVCMsgList_UserMessages_usermsg_t(
        CSVCMsgList_UserMessages_usermsg_t *const this)
{
  __int64 v2; // rdi

  *this = off_3F6F290;
  if ( this != CSVCMsgList_UserMessages_usermsg_t::default_instance_ )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
  }
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CSVCMsgList_UserMessages_usermsg_t::~CSVCMsgList_UserMessages_usermsg_t  (line 6363, @0x0000000001a76450, libserver.so)
// calls: CSVCMsgList_UserMessages_usermsg_t::~CSVCMsgList_UserMessages_usermsg_t, operator delete
void __fastcall CSVCMsgList_UserMessages_usermsg_t::~CSVCMsgList_UserMessages_usermsg_t(
        CSVCMsgList_UserMessages_usermsg_t *const this)
{
  CSVCMsgList_UserMessages_usermsg_t::~CSVCMsgList_UserMessages_usermsg_t(this);
  operator delete(this);
}


// CSVCMsgList_UserMessages_usermsg_t::SharedDtor  (line 6368, @0x0000000001a878f0, libserver.so)
// globals: CSVCMsgList_UserMessages_usermsg_t::default_instance_
void __fastcall CSVCMsgList_UserMessages_usermsg_t::SharedDtor(CSVCMsgList_UserMessages_usermsg_t *const this)
{
  __int64 v1; // rdi

  if ( this != CSVCMsgList_UserMessages_usermsg_t::default_instance_ )
  {
    v1 = *(this + 3);
    if ( v1 != 0 )
      (*(*v1 + 8LL))(v1);
  }
}


// CSVCMsgList_UserMessages_usermsg_t::SetCachedSize  (line 6374, @0x0000000001a75d10, libserver.so)
void __fastcall CSVCMsgList_UserMessages_usermsg_t::SetCachedSize(
        const CSVCMsgList_UserMessages_usermsg_t *const this,
        int size)
{
  *(this + 5) = size;
}


// CSVCMsgList_UserMessages_usermsg_t::descriptor  (line 6379, @0x0000000001a87920, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_descriptor_
const google::protobuf::Descriptor *__cdecl CSVCMsgList_UserMessages_usermsg_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_descriptor_;
}


// CSVCMsgList_UserMessages_usermsg_t::default_instance  (line 6384, @0x0000000001a8bce0, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsgList_UserMessages_usermsg_t::default_instance_
const CSVCMsgList_UserMessages_usermsg_t *__cdecl CSVCMsgList_UserMessages_usermsg_t::default_instance()
{
  const CSVCMsgList_UserMessages_usermsg_t *result; // rax

  result = CSVCMsgList_UserMessages_usermsg_t::default_instance_;
  if ( CSVCMsgList_UserMessages_usermsg_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CSVCMsgList_UserMessages_usermsg_t::default_instance_;
  }
  return result;
}


// CSVCMsgList_UserMessages_usermsg_t::New  (line 6391, @0x0000000001a87630, libserver.so)
// calls: operator new, CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t, operator delete, _Unwind_Resume
CSVCMsgList_UserMessages_usermsg_t *__fastcall CSVCMsgList_UserMessages_usermsg_t::New(
        const CSVCMsgList_UserMessages_usermsg_t *const this)
{
  CSVCMsgList_UserMessages_usermsg_t *v1; // rbx

  v1 = operator new(0x28u);
  CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t(v1);
  return v1;
}


// CSVCMsgList_UserMessages_usermsg_t::Clear  (line 6395, @0x0000000001a76ff0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), CSVCMsg_UserMessage::Clear
void __fastcall CSVCMsgList_UserMessages_usermsg_t::Clear(CSVCMsgList_UserMessages_usermsg_t *const this)
{
  int v2; // eax
  bool v3; // zf
  CSVCMsg_UserMessage *v4; // rdi

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    *(this + 8) = 0;
    if ( (v2 & 2) != 0 )
    {
      v4 = *(this + 3);
      if ( v4 != 0 )
        CSVCMsg_UserMessage::Clear(v4);
    }
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CSVCMsgList_UserMessages_usermsg_t::MergePartialFromCodedStream  (line 6406, @0x0000000001a86f70, libserver.so)  // inlines: Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CSVCMsg_UserMessage>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_msg, set_has_msg, set_has_tick
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::PushLimit(int), CSVCMsg_UserMessage::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CSVCMsg_UserMessage::CSVCMsg_UserMessage, operator delete, _Unwind_Resume
// callers: CSVCMsgList_UserMessages::MergePartialFromCodedStream
bool __fastcall CSVCMsgList_UserMessages_usermsg_t::MergePartialFromCodedStream(
        CSVCMsgList_UserMessages_usermsg_t *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v10; // rax
  unsigned int v11; // edx
  CSVCMsg_UserMessage *v12; // r15
  const google::protobuf::uint8 *v13; // rax
  int v14; // eax
  bool v15; // cc
  int recursion_depth; // edx
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  int v18; // [rsp+Ch] [rbp-44h]
  unsigned int v19[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
        result = google::protobuf::internal::WireFormat::SkipField(input, v7, v3, buffer_end);
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
    if ( v7 >> 3 != 1 )
      break;
    if ( v7 != 8 )
      goto handle_unusual;
    v10 = input->buffer_;
    if ( v10 >= input->buffer_end_ || ((v11 = *v10) & 0x80u) != 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19);
      if ( !result )
        return result;
      v11 = v19[0];
    }
    else
    {
      input->buffer_ = v10 + 1;
    }
    *(this + 4) |= 1u;
    *(this + 8) = v11;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      input->buffer_ = buffer + 1;
parse_msg:
      v12 = *(this + 3);
      *(this + 4) |= 2u;
      if ( v12 == 0 )
      {
        v12 = operator new(0x28u);
        CSVCMsg_UserMessage::CSVCMsg_UserMessage(v12);
        *(this + 3) = v12;
      }
      v13 = input->buffer_;
      if ( v13 >= input->buffer_end_ || *v13 < 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v19) == 0 )
          return 0;
      }
      else
      {
        v19[0] = *v13;
        input->buffer_ = v13 + 1;
      }
      v14 = input->recursion_depth_ + 1;
      v15 = input->recursion_limit_ < v14;
      input->recursion_depth_ = v14;
      if ( v15 )
        return 0;
      v18 = google::protobuf::io::CodedInputStream::PushLimit(input, v19[0]);
      if ( !CSVCMsg_UserMessage::MergePartialFromCodedStream(v12, input) || !input->legitimate_message_end_ )
        return 0;
      legitimate_message_end = input->legitimate_message_end_;
      google::protobuf::io::CodedInputStream::PopLimit(input, v18);
      recursion_depth = input->recursion_depth_;
      result = legitimate_message_end;
      if ( recursion_depth > 0 )
        input->recursion_depth_ = recursion_depth - 1;
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
    goto parse_msg;
handle_unusual:
  if ( v7 != 0 )
    goto LABEL_9;
  return 1;
}


// CSVCMsgList_UserMessages_usermsg_t::SerializeWithCachedSizes  (line 6465, @0x0000000001a77a80, libserver.so)  // inlines: empty, msg
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
// globals: CSVCMsgList_UserMessages_usermsg_t::default_instance_
void __fastcall CSVCMsgList_UserMessages_usermsg_t::SerializeWithCachedSizes(
        const CSVCMsgList_UserMessages_usermsg_t *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  const google::protobuf::Descriptor *containing_type; // rsi
  _QWORD *v8; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 8), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CSVCMsgList_UserMessages_usermsg_t::default_instance_->containing_type_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, containing_type, output, v3);
  }
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CSVCMsgList_UserMessages_usermsg_t::SerializeWithCachedSizesToArray  (line 6486, @0x0000000001a79c90, libserver.so)  // inlines: GetCachedSize, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CSVCMsg_UserMessage>, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, msg
// calls: CSVCMsg_UserMessage::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CSVCMsgList_UserMessages::SerializeWithCachedSizesToArray
// globals: CSVCMsgList_UserMessages_usermsg_t::default_instance_
google::protobuf::uint8 *__fastcall CSVCMsgList_UserMessages_usermsg_t::SerializeWithCachedSizesToArray(
        const CSVCMsgList_UserMessages_usermsg_t *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  unsigned int *containing_type; // r12
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::uint8 *v8; // rsi
  __int64 v9; // rax

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
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CSVCMsgList_UserMessages_usermsg_t::default_instance_->containing_type_;
    *target = 18;
    v7 = containing_type[5];
    if ( v7 > 0x7F )
    {
      v8 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v7, target + 1, v2);
    }
    else
    {
      target[1] = v7;
      v8 = target + 2;
    }
    target = CSVCMsg_UserMessage::SerializeWithCachedSizesToArray(containing_type, v8);
  }
  v9 = *(this + 1);
  if ( v9 == 0 || *(v9 + 8) == *v9 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v9);
}


// CSVCMsgList_UserMessages_usermsg_t::ByteSize  (line 6509, @0x0000000001a794c0, libserver.so)  // inlines: Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CSVCMsg_UserMessage>, VarintSize32, VarintSize32SignExtended, empty, msg
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), CSVCMsg_UserMessage::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CSVCMsgList_UserMessages::ByteSize
// globals: CSVCMsgList_UserMessages_usermsg_t::default_instance_
int __fastcall CSVCMsgList_UserMessages_usermsg_t::ByteSize(const CSVCMsgList_UserMessages_usermsg_t *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  _QWORD *v7; // rax
  const google::protobuf::Descriptor *containing_type; // rdi
  unsigned int v10; // r13d
  int v11; // eax
  int v12; // eax

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
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v5 = *(this + 4);
      v3 = v12 + 1;
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
    containing_type = *(this + 3);
    if ( containing_type == 0 )
      containing_type = CSVCMsgList_UserMessages_usermsg_t::default_instance_->containing_type_;
    v10 = CSVCMsg_UserMessage::ByteSize(containing_type);
    v11 = 1;
    if ( v10 > 0x7F )
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
    v3 += v10 + v11 + 1;
  }
LABEL_7:
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CSVCMsgList_UserMessages_usermsg_t::MergeFrom  (line 6539, @0x0000000001a87b70, libserver.so)  // inlines: dynamic_cast_if_available<const CSVCMsgList_UserMessages_usermsg_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CSVCMsgList_UserMessages_usermsg_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CSVCMsgList_UserMessages_usermsg_t
void __fastcall CSVCMsgList_UserMessages_usermsg_t::MergeFrom(
        CSVCMsgList_UserMessages_usermsg_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CSVCMsgList_UserMessages_usermsg_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      6540);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CSVCMsgList_UserMessages_usermsg_t,
               0)) != 0 )
  {
    CSVCMsgList_UserMessages_usermsg_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CSVCMsgList_UserMessages_usermsg_t::MergeFrom  (line 6551, @0x0000000001a879b0, libserver.so)  // inlines: msg, mutable_msg, set_has_msg, set_has_tick, set_tick
// calls: CSVCMsg_UserMessage::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CSVCMsg_UserMessage::CSVCMsg_UserMessage, _Unwind_Resume, operator delete
// callers: CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t, CSVCMsgList_UserMessages_usermsg_t::MergeFrom, CSVCMsgList_UserMessages_usermsg_t::CopyFrom, CSVCMsgList_UserMessages::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CSVCMsgList_UserMessages_usermsg_t::default_instance_
void __fastcall CSVCMsgList_UserMessages_usermsg_t::MergeFrom(
        CSVCMsgList_UserMessages_usermsg_t *const this,
        const CSVCMsgList_UserMessages_usermsg_t *const from)
{
  int v4; // eax
  int v5; // eax
  const google::protobuf::Descriptor *containing_type; // r13
  CSVCMsg_UserMessage *v7; // rdi
  __int64 v8; // rax
  CSVCMsg_UserMessage *v9; // r14
  char v10; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v11; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v11,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      6552);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v10, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
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
      containing_type = *(from + 3);
      if ( containing_type == 0 )
        containing_type = CSVCMsgList_UserMessages_usermsg_t::default_instance_->containing_type_;
      v7 = *(this + 3);
      *(this + 4) |= 2u;
      if ( v7 == 0 )
      {
        v9 = operator new(0x28u);
        CSVCMsg_UserMessage::CSVCMsg_UserMessage(v9);
        *(this + 3) = v9;
        v7 = v9;
      }
      CSVCMsg_UserMessage::MergeFrom(v7, containing_type);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CSVCMsgList_UserMessages_usermsg_t::CopyFrom  (line 6564, @0x0000000001a75d20, libserver.so)
void __fastcall CSVCMsgList_UserMessages_usermsg_t::CopyFrom(
        CSVCMsgList_UserMessages_usermsg_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CSVCMsgList_UserMessages_usermsg_t::CopyFrom  (line 6570, @0x0000000001a87c50, libserver.so)
// calls: CSVCMsgList_UserMessages_usermsg_t::MergeFrom
void __fastcall CSVCMsgList_UserMessages_usermsg_t::CopyFrom(
        CSVCMsgList_UserMessages_usermsg_t *const this,
        const CSVCMsgList_UserMessages_usermsg_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CSVCMsgList_UserMessages_usermsg_t::MergeFrom(this, from);
  }
}


// CSVCMsgList_UserMessages_usermsg_t::IsInitialized  (line 6576, @0x0000000001a75d60, libserver.so)
bool __fastcall CSVCMsgList_UserMessages_usermsg_t::IsInitialized(const CSVCMsgList_UserMessages_usermsg_t *const this)
{
  return 1;
}


// CSVCMsgList_UserMessages_usermsg_t::Swap  (line 6581, @0x0000000001a87c90, libserver.so)  // inlines: Swap, swap<CSVCMsg_UserMessage*>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CSVCMsgList_UserMessages_usermsg_t::Swap(
        CSVCMsgList_UserMessages_usermsg_t *const this,
        CSVCMsgList_UserMessages_usermsg_t *other)
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


// CSVCMsgList_UserMessages_usermsg_t::GetMetadata  (line 6591, @0x0000000001a7b590, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_descriptor_, `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_reflection_
google::protobuf::Metadata __fastcall CSVCMsgList_UserMessages_usermsg_t::GetMetadata(
        const CSVCMsgList_UserMessages_usermsg_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_descriptor_;
  result.reflection = `anonymous namespace'::CSVCMsgList_UserMessages_usermsg_t_reflection_;
  return result;
}


// CSVCMsgList_UserMessages::CSVCMsgList_UserMessages  (line 6606, @0x0000000001a87ce0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CSVCMsgList_UserMessages::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CSVCMsgList_UserMessages::CSVCMsgList_UserMessages(CSVCMsgList_UserMessages *const this)
{
  *this = off_3F6F350;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CSVCMsgList_UserMessages::InitAsDefaultInstance  (line 6612, @0x0000000001a87d80, libserver.so)
void __fastcall CSVCMsgList_UserMessages::InitAsDefaultInstance(CSVCMsgList_UserMessages *const this)
{
  ;
}


// CSVCMsgList_UserMessages::CSVCMsgList_UserMessages  (line 6615, @0x0000000001a88020, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsgList_UserMessages::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CSVCMsgList_UserMessages::CSVCMsgList_UserMessages(
        CSVCMsgList_UserMessages *const this,
        const CSVCMsgList_UserMessages *const from)
{
  *this = off_3F6F350;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
  CSVCMsgList_UserMessages::MergeFrom(this, from);
}


// CSVCMsgList_UserMessages::SharedCtor  (line 6622, @0x0000000001a87d90, libserver.so)  // inlines: memset
void __fastcall CSVCMsgList_UserMessages::SharedCtor(CSVCMsgList_UserMessages *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CSVCMsgList_UserMessages::~CSVCMsgList_UserMessages  (line 6627, @0x0000000001a78e30, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CSVCMsgList_UserMessages::~CSVCMsgList_UserMessages
void __fastcall CSVCMsgList_UserMessages::~CSVCMsgList_UserMessages(CSVCMsgList_UserMessages *const this)
{
  *this = off_3F6F350;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CSVCMsgList_UserMessages::~CSVCMsgList_UserMessages  (line 6627, @0x0000000001a78e70, libserver.so)
// calls: CSVCMsgList_UserMessages::~CSVCMsgList_UserMessages, operator delete
void __fastcall CSVCMsgList_UserMessages::~CSVCMsgList_UserMessages(CSVCMsgList_UserMessages *const this)
{
  CSVCMsgList_UserMessages::~CSVCMsgList_UserMessages(this);
  operator delete(this);
}


// CSVCMsgList_UserMessages::SharedDtor  (line 6632, @0x0000000001a87db0, libserver.so)
void __fastcall CSVCMsgList_UserMessages::SharedDtor(CSVCMsgList_UserMessages *const this)
{
  ;
}


// CSVCMsgList_UserMessages::SetCachedSize  (line 6637, @0x0000000001a75d70, libserver.so)
void __fastcall CSVCMsgList_UserMessages::SetCachedSize(const CSVCMsgList_UserMessages *const this, int size)
{
  *(this + 5) = size;
}


// CSVCMsgList_UserMessages::descriptor  (line 6642, @0x0000000001a87dc0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsgList_UserMessages_descriptor_
const google::protobuf::Descriptor *__cdecl CSVCMsgList_UserMessages::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CSVCMsgList_UserMessages_descriptor_;
}


// CSVCMsgList_UserMessages::default_instance  (line 6647, @0x0000000001a8bd10, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CSVCMsgList_UserMessages::default_instance_
const CSVCMsgList_UserMessages *__cdecl CSVCMsgList_UserMessages::default_instance()
{
  const CSVCMsgList_UserMessages *result; // rax

  result = CSVCMsgList_UserMessages::default_instance_;
  if ( CSVCMsgList_UserMessages::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CSVCMsgList_UserMessages::default_instance_;
  }
  return result;
}


// CSVCMsgList_UserMessages::New  (line 6654, @0x0000000001a87d40, libserver.so)
// calls: operator new, CSVCMsgList_UserMessages::CSVCMsgList_UserMessages, operator delete, _Unwind_Resume
CSVCMsgList_UserMessages *__fastcall CSVCMsgList_UserMessages::New(const CSVCMsgList_UserMessages *const this)
{
  CSVCMsgList_UserMessages *v1; // rbx

  v1 = operator new(0x30u);
  CSVCMsgList_UserMessages::CSVCMsgList_UserMessages(v1);
  return v1;
}


// CSVCMsgList_UserMessages::Clear  (line 6658, @0x0000000001a76990, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CSVCMsgList_UserMessages::Clear(CSVCMsgList_UserMessages *const this)
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


// CSVCMsgList_UserMessages::MergePartialFromCodedStream  (line 6664, @0x0000000001a87670, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CSVCMsgList_UserMessages_usermsg_t>, ReadTagWithCutoff, ReadVarint32, add_usermsgs
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CSVCMsgList_UserMessages_usermsg_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
bool __fastcall CSVCMsgList_UserMessages::MergePartialFromCodedStream(
        CSVCMsgList_UserMessages *const this,
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
  CSVCMsgList_UserMessages_usermsg_t *v13; // r13
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
        v13 = operator new(0x28u);
        CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t(v13);
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
      if ( !CSVCMsgList_UserMessages_usermsg_t::MergePartialFromCodedStream(v13, input)
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


// CSVCMsgList_UserMessages::SerializeWithCachedSizes  (line 6710, @0x0000000001a77cd0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, empty, usermsgs
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CSVCMsgList_UserMessages::SerializeWithCachedSizes(
        const CSVCMsgList_UserMessages *const this,
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


// CSVCMsgList_UserMessages::SerializeWithCachedSizesToArray  (line 6726, @0x0000000001a79d60, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CSVCMsgList_UserMessages_usermsg_t>, WriteTagToArray, WriteVarint32ToArray, empty, usermsgs
// calls: CSVCMsgList_UserMessages_usermsg_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CSVCMsgList_UserMessages::SerializeWithCachedSizesToArray(
        const CSVCMsgList_UserMessages *const this,
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
      result = CSVCMsgList_UserMessages_usermsg_t::SerializeWithCachedSizesToArray(v8, v6);
    }
    while ( v5 < *(this + 8) );
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v10);
  return result;
}


// CSVCMsgList_UserMessages::ByteSize  (line 6744, @0x0000000001a795b0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CSVCMsgList_UserMessages_usermsg_t>, VarintSize32, empty, usermsgs
// calls: CSVCMsgList_UserMessages_usermsg_t::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CSVCMsgList_UserMessages::ByteSize(const CSVCMsgList_UserMessages *const this)
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
      v6 = CSVCMsgList_UserMessages_usermsg_t::ByteSize(*(*(this + 3) + v4));
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


// CSVCMsgList_UserMessages::MergeFrom  (line 6766, @0x0000000001a880c0, libserver.so)  // inlines: dynamic_cast_if_available<const CSVCMsgList_UserMessages*, const google::protobuf::Message*>
// calls: __dynamic_cast, CSVCMsgList_UserMessages::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CSVCMsgList_UserMessages
void __fastcall CSVCMsgList_UserMessages::MergeFrom(
        CSVCMsgList_UserMessages *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CSVCMsgList_UserMessages *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      6767);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CSVCMsgList_UserMessages, 0)) != 0 )
  {
    CSVCMsgList_UserMessages::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CSVCMsgList_UserMessages::MergeFrom  (line 6778, @0x0000000001a87e50, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>, New
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t, CSVCMsgList_UserMessages_usermsg_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CSVCMsgList_UserMessages::CSVCMsgList_UserMessages, CSVCMsgList_UserMessages::MergeFrom, CSVCMsgList_UserMessages::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CSVCMsgList_UserMessages::MergeFrom(
        CSVCMsgList_UserMessages *const this,
        const CSVCMsgList_UserMessages *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CSVCMsgList_UserMessages_usermsg_t *v6; // r15
  __int64 v7; // rax
  CSVCMsgList_UserMessages_usermsg_t *v8; // rdi
  __int64 v9; // rdx
  const CSVCMsgList_UserMessages_usermsg_t *v10; // rsi
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      6779);
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
        v6 = operator new(0x28u);
        CSVCMsgList_UserMessages_usermsg_t::CSVCMsgList_UserMessages_usermsg_t(v6);
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
      CSVCMsgList_UserMessages_usermsg_t::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CSVCMsgList_UserMessages::CopyFrom  (line 6784, @0x0000000001a75d80, libserver.so)
void __fastcall CSVCMsgList_UserMessages::CopyFrom(
        CSVCMsgList_UserMessages *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CSVCMsgList_UserMessages::CopyFrom  (line 6790, @0x0000000001a881a0, libserver.so)
// calls: CSVCMsgList_UserMessages::MergeFrom
void __fastcall CSVCMsgList_UserMessages::CopyFrom(
        CSVCMsgList_UserMessages *const this,
        const CSVCMsgList_UserMessages *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CSVCMsgList_UserMessages::MergeFrom(this, from);
  }
}


// CSVCMsgList_UserMessages::IsInitialized  (line 6796, @0x0000000001a75dc0, libserver.so)
bool __fastcall CSVCMsgList_UserMessages::IsInitialized(const CSVCMsgList_UserMessages *const this)
{
  return 1;
}


// CSVCMsgList_UserMessages::Swap  (line 6801, @0x0000000001a881e0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CSVCMsgList_UserMessages::Swap(CSVCMsgList_UserMessages *const this, CSVCMsgList_UserMessages *other)
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


// CSVCMsgList_UserMessages::GetMetadata  (line 6810, @0x0000000001a7b630, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsgList_UserMessages_descriptor_, `anonymous namespace'::CSVCMsgList_UserMessages_reflection_
google::protobuf::Metadata __fastcall CSVCMsgList_UserMessages::GetMetadata(const CSVCMsgList_UserMessages *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CSVCMsgList_UserMessages_descriptor_;
  result.reflection = `anonymous namespace'::CSVCMsgList_UserMessages_reflection_;
  return result;
}


// CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load  (line 6842, @0x0000000001a88440, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SpawnGroup_Load::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNETMsg_SpawnGroup_Load::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load(CNETMsg_SpawnGroup_Load *const this)
{
  *this = off_3F6F410;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CNETMsg_SpawnGroup_Load::SharedCtor(this);
}


// CNETMsg_SpawnGroup_Load::InitAsDefaultInstance  (line 6848, @0x0000000001a8b8e0, libserver.so)  // inlines: default_instance
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// callers: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CMsgVector::default_instance_, CMsgQAngle::default_instance_
void __fastcall CNETMsg_SpawnGroup_Load::InitAsDefaultInstance(CNETMsg_SpawnGroup_Load *const this)
{
  google::protobuf::Descriptor *v1; // rax
  CNETMsg_SpawnGroup_Load *thisb; // [rsp+8h] [rbp-8h]
  CNETMsg_SpawnGroup_Load *thisa; // [rsp+8h] [rbp-8h]

  v1 = CMsgVector::default_instance_;
  if ( CMsgVector::default_instance_ == 0 )
  {
    thisa = this;
    protobuf_AddDesc_networkbasetypes_2eproto();
    v1 = CMsgVector::default_instance_;
    this = thisa;
  }
  *(this + 7) = v1;
  if ( CMsgQAngle::default_instance_ != 0 )
  {
    *(this + 8) = CMsgQAngle::default_instance_;
  }
  else
  {
    thisb = this;
    protobuf_AddDesc_networkbasetypes_2eproto();
    *(thisb + 8) = CMsgQAngle::default_instance_;
  }
}


// CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load  (line 6853, @0x0000000001a88ca0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SpawnGroup_Load::SharedCtor, CNETMsg_SpawnGroup_Load::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load(
        CNETMsg_SpawnGroup_Load *const this,
        const CNETMsg_SpawnGroup_Load *const from)
{
  *this = off_3F6F410;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CNETMsg_SpawnGroup_Load::SharedCtor(this);
  CNETMsg_SpawnGroup_Load::MergeFrom(this, from);
}


// CNETMsg_SpawnGroup_Load::SharedCtor  (line 6860, @0x0000000001a88240, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load
void __fastcall CNETMsg_SpawnGroup_Load::SharedCtor(CNETMsg_SpawnGroup_Load *const this)
{
  google::protobuf::Closure *v1; // rdx
  const std::string *v3; // r14
  std::string *v4; // r13
  const std::string *v5; // r14
  std::string *v6; // r13
  const std::string *v7; // r14
  std::string *v8; // r13
  const std::string *v9; // r14
  std::string *v10; // r13
  const std::string *v11; // r14
  std::string *v12; // r13
  const std::string *v13; // r14
  std::string *v14; // r13
  const std::string *v15; // r13
  std::string *v16; // r12
  __int64 v17[2]; // [rsp+0h] [rbp-40h] BYREF
  char v18; // [rsp+10h] [rbp-30h]

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v18 = 0;
    v17[0] = off_47BFB70;
    v17[1] = google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, v17, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v17);
  }
  *(this + 5) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  v5 = google::protobuf::internal::empty_string_;
  *(this + 3) = v4;
  v6 = operator new(8u);
  std::string::string(v6, v5);
  v7 = google::protobuf::internal::empty_string_;
  *(this + 4) = v6;
  v8 = operator new(8u);
  std::string::string(v8, v7);
  v9 = google::protobuf::internal::empty_string_;
  *(this + 5) = v8;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  v10 = operator new(8u);
  std::string::string(v10, v9);
  v11 = google::protobuf::internal::empty_string_;
  *(this + 9) = v10;
  *(this + 20) = 0;
  *(this + 21) = 0;
  *(this + 96) = 0;
  v12 = operator new(8u);
  std::string::string(v12, v11);
  v13 = google::protobuf::internal::empty_string_;
  *(this + 11) = v12;
  v14 = operator new(8u);
  std::string::string(v14, v13);
  *(this + 13) = v14;
  v15 = google::protobuf::internal::empty_string_;
  *(this + 25) = 0;
  *(this + 28) = 0;
  *(this + 29) = 0;
  v16 = operator new(8u);
  std::string::string(v16, v15);
  *(this + 15) = v16;
  *(this + 32) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SpawnGroup_Load::~CNETMsg_SpawnGroup_Load  (line 6884, @0x0000000001a887e0, libserver.so)
// calls: CNETMsg_SpawnGroup_Load::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNETMsg_SpawnGroup_Load::~CNETMsg_SpawnGroup_Load
void __fastcall CNETMsg_SpawnGroup_Load::~CNETMsg_SpawnGroup_Load(CNETMsg_SpawnGroup_Load *const this)
{
  *this = off_3F6F410;
  CNETMsg_SpawnGroup_Load::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_SpawnGroup_Load::~CNETMsg_SpawnGroup_Load  (line 6884, @0x0000000001a88820, libserver.so)
// calls: CNETMsg_SpawnGroup_Load::~CNETMsg_SpawnGroup_Load, operator delete
void __fastcall CNETMsg_SpawnGroup_Load::~CNETMsg_SpawnGroup_Load(CNETMsg_SpawnGroup_Load *const this)
{
  CNETMsg_SpawnGroup_Load::~CNETMsg_SpawnGroup_Load(this);
  operator delete(this);
}


// CNETMsg_SpawnGroup_Load::SharedDtor  (line 6889, @0x0000000001a884e0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CNETMsg_SpawnGroup_Load::~CNETMsg_SpawnGroup_Load
// globals: CNETMsg_SpawnGroup_Load::default_instance_
void __fastcall CNETMsg_SpawnGroup_Load::SharedDtor(CNETMsg_SpawnGroup_Load *const this)
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
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  _BYTE v39[17]; // [rsp+Fh] [rbp-11h] BYREF

  v2 = *(this + 3);
  if ( v2 != 0 )
  {
    v3 = *v2;
    v4 = *v2 - 24;
    if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v25 = _InterlockedExchangeAdd((v4 + 16), 0xFFFFFFFF);
      }
      else
      {
        v32 = *(v3 - 8);
        *(v3 - 8) = v32 - 1;
        v25 = v32;
      }
      if ( v25 <= 0 )
        std::string::_Rep::_M_destroy(v4, v39);
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
        v31 = _InterlockedExchangeAdd((v7 + 16), 0xFFFFFFFF);
      }
      else
      {
        v34 = *(v6 - 8);
        *(v6 - 8) = v34 - 1;
        v31 = v34;
      }
      if ( v31 <= 0 )
        std::string::_Rep::_M_destroy(v7, v39);
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
        v29 = _InterlockedExchangeAdd((v10 + 16), 0xFFFFFFFF);
      }
      else
      {
        v36 = *(v9 - 8);
        *(v9 - 8) = v36 - 1;
        v29 = v36;
      }
      if ( v29 <= 0 )
        std::string::_Rep::_M_destroy(v10, v39);
    }
    operator delete(v8);
  }
  v11 = *(this + 9);
  if ( v11 != 0 )
  {
    v12 = *v11;
    v13 = *v11 - 24;
    if ( v13 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v30 = _InterlockedExchangeAdd((v13 + 16), 0xFFFFFFFF);
      }
      else
      {
        v38 = *(v12 - 8);
        *(v12 - 8) = v38 - 1;
        v30 = v38;
      }
      if ( v30 <= 0 )
        std::string::_Rep::_M_destroy(v13, v39);
    }
    operator delete(v11);
  }
  v14 = *(this + 11);
  if ( v14 != 0 )
  {
    v15 = *v14;
    v16 = *v14 - 24;
    if ( v16 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v28 = _InterlockedExchangeAdd((v16 + 16), 0xFFFFFFFF);
      }
      else
      {
        v37 = *(v15 - 8);
        *(v15 - 8) = v37 - 1;
        v28 = v37;
      }
      if ( v28 <= 0 )
        std::string::_Rep::_M_destroy(v16, v39);
    }
    operator delete(v14);
  }
  v17 = *(this + 13);
  if ( v17 != 0 )
  {
    v18 = *v17;
    v19 = *v17 - 24;
    if ( v19 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v27 = _InterlockedExchangeAdd((v19 + 16), 0xFFFFFFFF);
      }
      else
      {
        v35 = *(v18 - 8);
        *(v18 - 8) = v35 - 1;
        v27 = v35;
      }
      if ( v27 <= 0 )
        std::string::_Rep::_M_destroy(v19, v39);
    }
    operator delete(v17);
  }
  v20 = *(this + 15);
  if ( v20 != 0 )
  {
    v21 = *v20;
    v22 = *v20 - 24;
    if ( v22 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v26 = _InterlockedExchangeAdd((v22 + 16), 0xFFFFFFFF);
      }
      else
      {
        v33 = *(v21 - 8);
        *(v21 - 8) = v33 - 1;
        v26 = v33;
      }
      if ( v26 <= 0 )
        std::string::_Rep::_M_destroy(v22, v39);
    }
    operator delete(v20);
  }
  if ( this != CNETMsg_SpawnGroup_Load::default_instance_ )
  {
    v23 = *(this + 7);
    if ( v23 != 0 )
      (*(*v23 + 8LL))(v23);
    v24 = *(this + 8);
    if ( v24 != 0 )
      (*(*v24 + 8LL))(v24);
  }
}


// CNETMsg_SpawnGroup_Load::SetCachedSize  (line 6903, @0x0000000001a75dd0, libserver.so)
void __fastcall CNETMsg_SpawnGroup_Load::SetCachedSize(const CNETMsg_SpawnGroup_Load *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_SpawnGroup_Load::descriptor  (line 6908, @0x0000000001a88840, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_Load_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_SpawnGroup_Load::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_SpawnGroup_Load_descriptor_;
}


// CNETMsg_SpawnGroup_Load::default_instance  (line 6913, @0x0000000001a8bd40, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_SpawnGroup_Load::default_instance_
const CNETMsg_SpawnGroup_Load *__cdecl CNETMsg_SpawnGroup_Load::default_instance()
{
  const CNETMsg_SpawnGroup_Load *result; // rax

  result = CNETMsg_SpawnGroup_Load::default_instance_;
  if ( CNETMsg_SpawnGroup_Load::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_SpawnGroup_Load::default_instance_;
  }
  return result;
}


// CNETMsg_SpawnGroup_Load::New  (line 6920, @0x0000000001a884a0, libserver.so)
// calls: operator new, CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load, operator delete, _Unwind_Resume
CNETMsg_SpawnGroup_Load *__fastcall CNETMsg_SpawnGroup_Load::New(const CNETMsg_SpawnGroup_Load *const this)
{
  CNETMsg_SpawnGroup_Load *v1; // rbx

  v1 = operator new(0x88u);
  CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load(v1);
  return v1;
}


// CNETMsg_SpawnGroup_Load::Clear  (line 6924, @0x0000000001a77050, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong), CMsgVector::Clear, CMsgQAngle::Clear
void __fastcall CNETMsg_SpawnGroup_Load::Clear(CNETMsg_SpawnGroup_Load *const this)
{
  int v2; // eax
  bool v3; // zf
  CMsgVector *v4; // rdi
  CMsgQAngle *v5; // rdi

  v2 = *(this + 4);
  if ( v2 != 0 )
  {
    *(this + 6) = 0;
    if ( (v2 & 1) != 0 )
    {
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 2) != 0 )
    {
      std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 4) != 0 )
    {
      std::string::_M_mutate(*(this + 5), 0, *(**(this + 5) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x20) != 0 )
    {
      v4 = *(this + 7);
      if ( v4 != 0 )
      {
        CMsgVector::Clear(v4);
        v2 = *(this + 4);
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v5 = *(this + 8);
      if ( v5 != 0 )
      {
        CMsgQAngle::Clear(v5);
        v2 = *(this + 4);
      }
    }
    if ( (v2 & 0x80u) != 0 )
    {
      std::string::_M_mutate(*(this + 9), 0, *(**(this + 9) - 24LL), 0);
      v2 = *(this + 4);
    }
  }
  if ( BYTE1(v2) != 0 )
  {
    v2 = *(this + 4);
    *(this + 10) = 0;
    *(this + 12) = 0;
    *(this + 14) = 0;
    if ( (v2 & 0x800) != 0 )
    {
      std::string::_M_mutate(*(this + 11), 0, *(**(this + 11) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x1000) != 0 )
    {
      std::string::_M_mutate(*(this + 13), 0, *(**(this + 13) - 24LL), 0);
      v2 = *(this + 4);
    }
  }
  if ( (v2 & 0x30000) != 0 )
  {
    if ( (v2 & 0x10000) != 0 )
      std::string::_M_mutate(*(this + 15), 0, *(**(this + 15) - 24LL), 0);
    *(this + 32) = 0;
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CNETMsg_SpawnGroup_Load::MergePartialFromCodedStream  (line 6981, @0x0000000001a80700, libserver.so)  // inlines: Advance, BufferSize, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CMsgQAngle>, ReadMessageNoVirtual<CMsgVector>, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, mutable_entityfiltername, mutable_entitylumpname, mutable_localnamefixup, mutable_parentnamefixup, mutable_savegamefilename, mutable_spawngroupmanifest, mutable_world_offset_angle, mutable_world_offset_pos, mutable_worldname, set_has_creationsequence, set_has_entityfiltername, set_has_entitylumpname, set_has_flags, set_has_localnamefixup, set_has_manifestincomplete, set_has_manifestloadpriority, set_has_parentnamefixup, set_has_savegamefilename, set_has_spawngrouphandle, set_has_spawngroupmanifest, set_has_spawngroupownerhandle, set_has_spawngroupparenthandle, set_has_tickcount, set_has_world_offset_angle, set_has_world_offset_pos, set_has_worldgroupid, set_has_worldname
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::PushLimit(int), CMsgVector::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), CMsgQAngle::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), operator new, CMsgQAngle::CMsgQAngle, CMsgVector::CMsgVector (15 total)
// globals: jpt_1A80778
bool __fastcall CNETMsg_SpawnGroup_Load::MergePartialFromCodedStream(
        CNETMsg_SpawnGroup_Load *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v3; // r15
  unsigned int v4; // r13d
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint8 *i; // rdx
  unsigned __int64 v9; // rsi
  const google::protobuf::uint8 *v10; // rax
  int v11; // eax
  const google::protobuf::uint8 *v12; // rax
  const google::protobuf::uint8 *v13; // rax
  bool result; // al
  const google::protobuf::uint8 *v15; // rax
  unsigned int v16; // edx
  int v17; // eax
  const google::protobuf::uint8 *v18; // rax
  const google::protobuf::uint8 *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdx
  const google::protobuf::uint8 *v22; // rax
  int v23; // eax
  CMsgVector *v24; // rcx
  const google::protobuf::uint8 *v25; // rax
  int v26; // eax
  bool v27; // cc
  CMsgVector *v28; // rcx
  const google::protobuf::uint8 *v29; // rax
  int v30; // eax
  int recursion_depth; // eax
  const google::protobuf::uint8 *v32; // rax
  int v33; // eax
  const google::protobuf::uint8 *v34; // rax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  char Varint32Fallback; // al
  char v39; // al
  google::protobuf::uint32 TagFallback; // eax
  int v41; // [rsp+Ch] [rbp-54h]
  int v42; // [rsp+Ch] [rbp-54h]
  CMsgVector *v43; // [rsp+10h] [rbp-50h]
  CMsgVector *v44; // [rsp+10h] [rbp-50h]
  CMsgVector *v45; // [rsp+10h] [rbp-50h]
  CMsgVector *v46; // [rsp+10h] [rbp-50h]
  CMsgVector *v47; // [rsp+10h] [rbp-50h]
  CMsgVector *v48; // [rsp+10h] [rbp-50h]
  unsigned int *v49; // [rsp+18h] [rbp-48h]
  unsigned int v50[2]; // [rsp+28h] [rbp-38h] BYREF

  v3 = (this + 128);
  v4 = this + 8;
  v49 = (this + 116);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( 1 )
    {
      if ( i <= buffer )
        goto LABEL_179;
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
          *(this + 4) |= 1u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), i) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 18 )
            continue;
          input->buffer_ = buffer + 1;
parse_entitylumpname:
          *(this + 4) |= 2u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), i) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 26 )
            continue;
          input->buffer_ = buffer + 1;
parse_entityfiltername:
          *(this + 4) |= 4u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 5), i) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 32 )
            continue;
          v34 = buffer + 1;
          input->buffer_ = v34;
parse_spawngrouphandle:
          if ( v34 >= i || ((v35 = *v34) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 12) == 0 )
              return 0;
          }
          else
          {
            *(this + 12) = v35;
            ++input->buffer_;
          }
          *(this + 4) |= 8u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 40 )
            continue;
          v32 = buffer + 1;
          input->buffer_ = v32;
parse_spawngroupownerhandle:
          if ( v32 >= i || ((v33 = *v32) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 13) == 0 )
              return 0;
          }
          else
          {
            *(this + 13) = v33;
            ++input->buffer_;
          }
          *(this + 4) |= 0x10u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 50 )
            continue;
          input->buffer_ = buffer + 1;
parse_world_offset_pos:
          v28 = *(this + 7);
          *(this + 4) |= 0x20u;
          if ( v28 == 0 )
          {
            v48 = operator new(0x28u);
            CMsgVector::CMsgVector(v48);
            *(this + 7) = v48;
            v28 = v48;
          }
          v29 = input->buffer_;
          if ( v29 >= input->buffer_end_ || *v29 < 0 )
          {
            v45 = v28;
            Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v50);
            v28 = v45;
            if ( Varint32Fallback == 0 )
              return 0;
          }
          else
          {
            v50[0] = *v29;
            input->buffer_ = v29 + 1;
          }
          v30 = input->recursion_depth_ + 1;
          v27 = input->recursion_limit_ < v30;
          input->recursion_depth_ = v30;
          if ( v27 )
            return 0;
          v43 = v28;
          v41 = google::protobuf::io::CodedInputStream::PushLimit(input, v50[0]);
          if ( !CMsgVector::MergePartialFromCodedStream(v43, input) || !input->legitimate_message_end_ )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(input, v41);
          recursion_depth = input->recursion_depth_;
          if ( recursion_depth > 0 )
            input->recursion_depth_ = recursion_depth - 1;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 58 )
            continue;
          input->buffer_ = buffer + 1;
parse_world_offset_angle:
          v24 = *(this + 8);
          *(this + 4) |= 0x40u;
          if ( v24 == 0 )
          {
            v47 = operator new(0x28u);
            CMsgQAngle::CMsgQAngle(v47);
            *(this + 8) = v47;
            v24 = v47;
          }
          v25 = input->buffer_;
          if ( v25 >= input->buffer_end_ || *v25 < 0 )
          {
            v46 = v24;
            v39 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v50);
            v24 = v46;
            if ( v39 == 0 )
              return 0;
          }
          else
          {
            v50[0] = *v25;
            input->buffer_ = v25 + 1;
          }
          v26 = input->recursion_depth_ + 1;
          v27 = input->recursion_limit_ < v26;
          input->recursion_depth_ = v26;
          if ( v27 )
            return 0;
          v44 = v24;
          v42 = google::protobuf::io::CodedInputStream::PushLimit(input, v50[0]);
          if ( !CMsgQAngle::MergePartialFromCodedStream(v44, input) || !input->legitimate_message_end_ )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(input, v42);
          v37 = input->recursion_depth_;
          if ( v37 > 0 )
            input->recursion_depth_ = v37 - 1;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 66 )
            continue;
          input->buffer_ = buffer + 1;
parse_spawngroupmanifest:
          *(this + 4) |= 0x80u;
          if ( google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 9), i) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 72 )
            continue;
          v22 = buffer + 1;
          input->buffer_ = v22;
parse_flags:
          if ( i <= v22 || ((v23 = *v22) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 20) == 0 )
              return 0;
          }
          else
          {
            *(this + 20) = v23;
            ++input->buffer_;
          }
          *(this + 4) |= 0x100u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 80 )
            continue;
          v19 = buffer + 1;
          input->buffer_ = v19;
parse_tickcount:
          if ( i <= v19 || ((v20 = *v19) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v50);
            if ( !result )
              return result;
            v20 = v50[0];
          }
          else
          {
            input->buffer_ = v19 + 1;
          }
          *(this + 4) |= 0x200u;
          *(this + 21) = v20;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 88 )
            continue;
          v18 = buffer + 1;
          input->buffer_ = v18;
parse_manifestincomplete:
          if ( i <= v18 || ((v21 = *v18) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v50);
            if ( !result )
              return result;
            v21 = *v50;
          }
          else
          {
            input->buffer_ = v18 + 1;
          }
          *(this + 96) = v21 != 0;
          *(this + 4) |= 0x400u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 98 )
            continue;
          input->buffer_ = buffer + 1;
parse_localnamefixup:
          *(this + 4) |= 0x800u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 11), i) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 106 )
            continue;
          input->buffer_ = buffer + 1;
parse_parentnamefixup:
          *(this + 4) |= 0x1000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 13), i) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 112 )
            continue;
          v15 = buffer + 1;
          input->buffer_ = v15;
parse_manifestloadpriority:
          if ( i <= v15 || ((v16 = *v15) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v50);
            if ( !result )
              return result;
            v16 = v50[0];
          }
          else
          {
            input->buffer_ = v15 + 1;
          }
          *(this + 4) |= 0x2000u;
          *(this + 25) = v16;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 120 )
            continue;
          v13 = buffer + 1;
          input->buffer_ = v13;
parse_worldgroupid:
          if ( i <= v13 || ((v17 = *v13) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 28) == 0 )
              return 0;
          }
          else
          {
            *(this + 28) = v17;
            ++input->buffer_;
          }
          *(this + 4) |= 0x4000u;
          i = input->buffer_end_;
          buffer = input->buffer_;
          v2 = (i - buffer);
          if ( i - buffer <= 1 || *buffer != 0x80 || buffer[1] != 1 )
            continue;
          v10 = buffer + 2;
          input->buffer_ = v10;
parse_creationsequence:
          if ( i <= v10 || ((v11 = *v10) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v49) == 0 )
              return 0;
          }
          else
          {
            *(this + 29) = v11;
            ++input->buffer_;
          }
          *(this + 4) |= 0x8000u;
          i = input->buffer_end_;
          buffer = input->buffer_;
          v2 = (i - buffer);
          if ( i - buffer <= 1 || *buffer != 0x8A || buffer[1] != 1 )
            continue;
          input->buffer_ = buffer + 2;
parse_savegamefilename:
          *(this + 4) |= 0x10000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 15), i) == 0 )
            return 0;
          i = input->buffer_end_;
          buffer = input->buffer_;
          v2 = (i - buffer);
          if ( i - buffer <= 1 || *buffer != 0x90 || buffer[1] != 1 )
            continue;
          v12 = buffer + 2;
          input->buffer_ = v12;
parse_spawngroupparenthandle:
          if ( v12 >= i || ((v36 = *v12) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v3) == 0 )
              return 0;
          }
          else
          {
            *(this + 32) = v36;
            ++input->buffer_;
          }
          *(this + 4) |= 0x20000u;
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
        case 2u:
          if ( v9 != 18 )
            goto handle_unusual;
          goto parse_entitylumpname;
        case 3u:
          if ( v9 != 26 )
            goto handle_unusual;
          goto parse_entityfiltername;
        case 4u:
          if ( v9 != 32 )
            goto handle_unusual;
          v34 = input->buffer_;
          i = input->buffer_end_;
          goto parse_spawngrouphandle;
        case 5u:
          if ( v9 != 40 )
            goto handle_unusual;
          v32 = input->buffer_;
          i = input->buffer_end_;
          goto parse_spawngroupownerhandle;
        case 6u:
          if ( v9 != 50 )
            goto handle_unusual;
          goto parse_world_offset_pos;
        case 7u:
          if ( v9 != 58 )
            goto handle_unusual;
          goto parse_world_offset_angle;
        case 8u:
          if ( v9 != 66 )
            goto handle_unusual;
          goto parse_spawngroupmanifest;
        case 9u:
          if ( v9 != 72 )
            goto handle_unusual;
          v22 = input->buffer_;
          i = input->buffer_end_;
          goto parse_flags;
        case 0xAu:
          if ( v9 != 80 )
            goto handle_unusual;
          v19 = input->buffer_;
          i = input->buffer_end_;
          goto parse_tickcount;
        case 0xBu:
          if ( v9 != 88 )
            goto handle_unusual;
          v18 = input->buffer_;
          i = input->buffer_end_;
          goto parse_manifestincomplete;
        case 0xCu:
          if ( v9 != 98 )
            goto handle_unusual;
          goto parse_localnamefixup;
        case 0xDu:
          if ( v9 != 106 )
            goto handle_unusual;
          goto parse_parentnamefixup;
        case 0xEu:
          if ( v9 != 112 )
            goto handle_unusual;
          v15 = input->buffer_;
          i = input->buffer_end_;
          goto parse_manifestloadpriority;
        case 0xFu:
          if ( v9 != 120 )
            goto handle_unusual;
          v13 = input->buffer_;
          i = input->buffer_end_;
          goto parse_worldgroupid;
        case 0x10u:
          if ( v9 != 128 )
            goto handle_unusual;
          v10 = input->buffer_;
          i = input->buffer_end_;
          goto parse_creationsequence;
        case 0x11u:
          if ( v9 == 138 )
            goto parse_savegamefilename;
          if ( v9 == 0 )
            return 1;
          goto LABEL_8;
        case 0x12u:
          if ( v9 != 144 )
            goto handle_unusual;
          v12 = input->buffer_;
          i = input->buffer_end_;
          goto parse_spawngroupparenthandle;
        default:
          goto handle_unusual;
      }
    }
    if ( i > buffer + 1 )
    {
      i = (v9 & ~buffer[1]);
      if ( i > 127 )
      {
        v2 = (buffer[1] << 7);
        v9 = (v9 + v2 - 128);
        input->buffer_ = buffer + 2;
        input->last_tag_ = v9;
        goto LABEL_5;
      }
    }
LABEL_179:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v9 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x3FFE )
      goto LABEL_5;
handle_unusual:
    if ( v9 == 0 )
      return 1;
LABEL_8:
    if ( (v9 & 7) == 4 )
      break;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v9, v4, v2) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CNETMsg_SpawnGroup_Load::SerializeWithCachedSizes  (line 7288, @0x0000000001a783a0, libserver.so)  // inlines: empty, world_offset_angle, world_offset_pos
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
// globals: CNETMsg_SpawnGroup_Load::default_instance_
void __fastcall CNETMsg_SpawnGroup_Load::SerializeWithCachedSizes(
        const CNETMsg_SpawnGroup_Load *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  __int64 v7; // rsi
  google::protobuf::OneofDescriptor *oneof_decls; // rsi
  _QWORD *v9; // rax

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
    v7 = *(this + 7);
    if ( v7 == 0 )
      v7 = *&CNETMsg_SpawnGroup_Load::default_instance_->oneof_decl_count_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_6, v7, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x40) != 0 )
  {
    oneof_decls = *(this + 8);
    if ( oneof_decls == 0 )
      oneof_decls = CNETMsg_SpawnGroup_Load::default_instance_->oneof_decls_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_6 + 1, oneof_decls, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x80u) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&stru_8, *(this + 9), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x100) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_9, *(this + 20), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x200) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&stru_A, *(this + 21), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x400) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&stru_B, *(this + 96), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x800) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_C, *(this + 11), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x1000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_D, *(this + 13), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x2000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&stru_E, *(this + 25), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x4000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_F, *(this + 28), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x8000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_10, *(this + 29), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x10000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 1,
      *(this + 15),
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x20000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 2,
      *(this + 32),
      output,
      v3);
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


// CNETMsg_SpawnGroup_Load::SerializeWithCachedSizesToArray  (line 7421, @0x0000000001a7c860, libserver.so)  // inlines: GetCachedSize, WriteBoolNoTagToArray, WriteBoolToArray, WriteBytesToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CMsgQAngle>, WriteMessageNoVirtualToArray<CMsgVector>, WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, world_offset_angle, world_offset_pos
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), CMsgVector::SerializeWithCachedSizesToArray, CMsgQAngle::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// globals: CNETMsg_SpawnGroup_Load::default_instance_
google::protobuf::uint8 *__fastcall CNETMsg_SpawnGroup_Load::SerializeWithCachedSizesToArray(
        const CNETMsg_SpawnGroup_Load *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::io::CodedOutputStream *v10; // rdi
  unsigned int *v11; // r12
  google::protobuf::io::CodedOutputStream *v12; // rdi
  google::protobuf::uint8 *v13; // rsi
  unsigned int *oneof_decls; // r12
  google::protobuf::io::CodedOutputStream *v15; // rdi
  google::protobuf::uint8 *v16; // rsi
  google::protobuf::io::CodedOutputStream *v17; // rdi
  google::protobuf::io::CodedOutputStream *v18; // rdi
  google::protobuf::io::CodedOutputStream *v19; // rdi
  google::protobuf::uint8 *v20; // rsi
  google::protobuf::uint8 v21; // dl
  google::protobuf::io::CodedOutputStream *v22; // rdi
  google::protobuf::io::CodedOutputStream *v23; // rdi
  google::protobuf::io::CodedOutputStream *v24; // rdi
  google::protobuf::uint8 *v25; // rsi
  google::protobuf::io::CodedOutputStream *v26; // rdi
  google::protobuf::io::CodedOutputStream *v27; // rdi
  google::protobuf::io::CodedOutputStream *v28; // rdi
  unsigned __int8 *v29; // rdx
  google::protobuf::io::CodedOutputStream *v30; // rdi
  __int64 v31; // rdx

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
    v9 = *(this + 12);
    *result = 32;
    if ( v9 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, result + 1, v4);
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
    v10 = *(this + 13);
    *result = 40;
    if ( v10 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, result + 1, v4);
    }
    else
    {
      result[1] = v10;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v11 = *(this + 7);
    if ( v11 == 0 )
    {
      v4 = CNETMsg_SpawnGroup_Load::default_instance_;
      v11 = *&CNETMsg_SpawnGroup_Load::default_instance_->oneof_decl_count_;
    }
    *result = 50;
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
  if ( (v4 & 0x40) != 0 )
  {
    oneof_decls = *(this + 8);
    if ( oneof_decls == 0 )
    {
      v4 = CNETMsg_SpawnGroup_Load::default_instance_;
      oneof_decls = CNETMsg_SpawnGroup_Load::default_instance_->oneof_decls_;
    }
    *result = 58;
    v15 = oneof_decls[5];
    if ( v15 > 0x7F )
    {
      v16 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v15, result + 1, v4);
    }
    else
    {
      result[1] = v15;
      v16 = result + 2;
    }
    result = CMsgQAngle::SerializeWithCachedSizesToArray(oneof_decls, v16);
    v4 = *(this + 4);
  }
  if ( v4 < 0 )
  {
    v17 = *(this + 9);
    *result = 66;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v17, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 1) != 0 )
  {
    v18 = *(this + 20);
    *result = 72;
    if ( v18 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v18, result + 1, v4);
    }
    else
    {
      result[1] = v18;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 2) != 0 )
  {
    v19 = *(this + 21);
    v20 = result + 1;
    *result = 80;
    if ( v19 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v19, v20, v4);
    }
    else if ( v19 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v19, v20, v4);
    }
    else
    {
      result[1] = v19;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 4) != 0 )
  {
    v21 = *(this + 96);
    *result = 88;
    result += 2;
    *(result - 1) = v21;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 8) != 0 )
  {
    v22 = *(this + 11);
    *result = 98;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v22, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x10) != 0 )
  {
    v23 = *(this + 13);
    *result = 106;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v23, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x20) != 0 )
  {
    v24 = *(this + 25);
    v25 = result + 1;
    *result = 112;
    if ( v24 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v24, v25, v4);
    }
    else if ( v24 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v24, v25, v4);
    }
    else
    {
      result[1] = v24;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x40) != 0 )
  {
    v26 = *(this + 28);
    *result = 120;
    if ( v26 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v26, result + 1, v4);
    }
    else
    {
      result[1] = v26;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( SBYTE1(v4) < 0 )
  {
    v27 = *(this + 29);
    *result = 0x80;
    result[1] = 1;
    if ( v27 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v27, result + 2, v4);
    }
    else
    {
      result[2] = v27;
      result += 3;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10000) != 0 )
  {
    v28 = *(this + 15);
    *result = -118;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v28, (result + 2), v4);
    LODWORD(v4) = *(this + 4);
  }
  v29 = (v4 & 0x20000);
  if ( v29 != 0 )
  {
    v30 = *(this + 32);
    *result = -112;
    result[1] = 1;
    if ( v30 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v30, result + 2, v29);
    }
    else
    {
      result[2] = v30;
      result += 3;
    }
  }
  v31 = *(this + 1);
  if ( v31 != 0 && *(v31 + 8) != *v31 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v31);
  return result;
}


// CNETMsg_SpawnGroup_Load::ByteSize  (line 7564, @0x0000000001a7c3a0, libserver.so)  // inlines: BytesSize, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CMsgQAngle>, MessageSizeNoVirtual<CMsgVector>, StringSize, UInt32Size, VarintSize32, VarintSize32SignExtended, empty, size, world_offset_angle, world_offset_pos
// calls: CMsgVector::ByteSize, CMsgQAngle::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// globals: CNETMsg_SpawnGroup_Load::default_instance_
int __fastcall CNETMsg_SpawnGroup_Load::ByteSize(const CNETMsg_SpawnGroup_Load *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // edx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  const CMsgVector *v7; // rdi
  unsigned int v8; // r13d
  int v9; // eax
  google::protobuf::OneofDescriptor *oneof_decls; // rdi
  unsigned int v11; // r13d
  int v12; // eax
  google::protobuf::io::CodedOutputStream *v13; // rdi
  google::protobuf::io::CodedOutputStream *v14; // rdi
  int v15; // eax
  google::protobuf::io::CodedOutputStream *v16; // rdi
  int v17; // eax
  google::protobuf::io::CodedOutputStream *v18; // rdi
  __int64 v19; // rax
  google::protobuf::io::CodedOutputStream *v21; // rdi
  google::protobuf::io::CodedOutputStream *v22; // rdi
  _QWORD *v23; // r13
  google::protobuf::io::CodedOutputStream *v24; // rdi
  int v25; // eax
  int v26; // ecx
  _QWORD *v27; // r13
  google::protobuf::io::CodedOutputStream *v28; // rdi
  int v29; // eax
  int v30; // ecx
  _QWORD *v31; // rbx
  google::protobuf::io::CodedOutputStream *v32; // rdi
  int v33; // eax
  int v34; // ecx
  _QWORD *v35; // r13
  google::protobuf::io::CodedOutputStream *v36; // rdi
  int v37; // eax
  int v38; // ecx
  _QWORD *v39; // r13
  google::protobuf::io::CodedOutputStream *v40; // rdi
  int v41; // eax
  int v42; // ecx
  _QWORD *v43; // r13
  google::protobuf::io::CodedOutputStream *v44; // rdi
  int v45; // eax
  int v46; // ecx
  _QWORD *v47; // r13
  google::protobuf::io::CodedOutputStream *v48; // rdi
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_24;
  if ( (v4 & 1) != 0 )
  {
    v31 = *(this + 3);
    v32 = *(*v31 - 24LL);
    v33 = 1;
    v34 = v32;
    if ( v32 > 0x7F )
    {
      v33 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v32, v1);
      v34 = *(*v31 - 24LL);
      v4 = *(this + 4);
    }
    v3 = v33 + v34 + 1;
    if ( (v4 & 2) == 0 )
    {
LABEL_4:
      if ( (v4 & 4) == 0 )
        goto LABEL_5;
LABEL_59:
      v27 = *(this + 5);
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
      if ( (v4 & 8) == 0 )
        goto LABEL_8;
      goto LABEL_6;
    }
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_4;
  }
  v35 = *(this + 4);
  v36 = *(*v35 - 24LL);
  v37 = 1;
  v38 = v36;
  if ( v36 > 0x7F )
  {
    v37 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v36, v1);
    v38 = *(*v35 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v37 + v38 + 1;
  if ( (v4 & 4) != 0 )
    goto LABEL_59;
LABEL_5:
  if ( (v4 & 8) != 0 )
  {
LABEL_6:
    v5 = *(this + 12);
    if ( v5 > 0x7F )
    {
      v55 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
      v4 = *(this + 4);
      v3 += v55 + 1;
    }
    else
    {
      v3 += 2;
    }
  }
LABEL_8:
  if ( (v4 & 0x10) != 0 )
  {
    v6 = *(this + 13);
    if ( v6 > 0x7F )
    {
      v54 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
      v4 = *(this + 4);
      v3 += v54 + 1;
    }
    else
    {
      v3 += 2;
    }
  }
  if ( (v4 & 0x20) != 0 )
  {
    v7 = *(this + 7);
    if ( v7 == 0 )
      v7 = *&CNETMsg_SpawnGroup_Load::default_instance_->oneof_decl_count_;
    v8 = CMsgVector::ByteSize(v7);
    v9 = 1;
    if ( v8 > 0x7F )
      v9 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
    v4 = *(this + 4);
    v3 += v8 + v9 + 1;
  }
  if ( (v4 & 0x40) != 0 )
  {
    oneof_decls = *(this + 8);
    if ( oneof_decls == 0 )
      oneof_decls = CNETMsg_SpawnGroup_Load::default_instance_->oneof_decls_;
    v11 = CMsgQAngle::ByteSize(oneof_decls);
    v12 = 1;
    if ( v11 > 0x7F )
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
    v4 = *(this + 4);
    v3 += v11 + v12 + 1;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v47 = *(this + 9);
    v48 = *(*v47 - 24LL);
    v49 = 1;
    v50 = v48;
    if ( v48 > 0x7F )
    {
      v49 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v48, v1);
      v50 = *(*v47 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v49 + v50 + 1;
  }
LABEL_24:
  if ( BYTE1(v4) == 0 )
    goto LABEL_44;
  if ( (v4 & 0x100) != 0 )
  {
    v13 = *(this + 20);
    if ( v13 > 0x7F )
    {
      v51 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, v1);
      v4 = *(this + 4);
      v3 += v51 + 1;
    }
    else
    {
      v3 += 2;
    }
  }
  if ( (v4 & 0x200) != 0 )
  {
    v14 = *(this + 21);
    v15 = 11;
    if ( v14 >= 0 && (LOBYTE(v15) = 2, v14 > 0x7F) )
    {
      v56 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
      v4 = *(this + 4);
      v3 += v56 + 1;
    }
    else
    {
      v3 += v15;
    }
  }
  if ( (v4 & 0x400) != 0 )
    v3 += 2;
  if ( (v4 & 0x800) == 0 )
  {
    if ( (v4 & 0x1000) == 0 )
      goto LABEL_36;
LABEL_73:
    v43 = *(this + 13);
    v44 = *(*v43 - 24LL);
    v45 = 1;
    v46 = v44;
    if ( v44 > 0x7F )
    {
      v45 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v44, v1);
      v46 = *(*v43 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v45 + v46 + 1;
    if ( (v4 & 0x2000) == 0 )
      goto LABEL_40;
    goto LABEL_37;
  }
  v39 = *(this + 11);
  v40 = *(*v39 - 24LL);
  v41 = 1;
  v42 = v40;
  if ( v40 > 0x7F )
  {
    v41 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v40, v1);
    v42 = *(*v39 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v41 + v42 + 1;
  if ( (v4 & 0x1000) != 0 )
    goto LABEL_73;
LABEL_36:
  if ( (v4 & 0x2000) != 0 )
  {
LABEL_37:
    v16 = *(this + 25);
    v17 = 11;
    if ( v16 >= 0 && (LOBYTE(v17) = 2, v16 > 0x7F) )
    {
      v57 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, v1);
      v4 = *(this + 4);
      v3 += v57 + 1;
    }
    else
    {
      v3 += v17;
    }
  }
LABEL_40:
  if ( (v4 & 0x4000) != 0 )
  {
    v18 = *(this + 28);
    if ( v18 > 0x7F )
    {
      v52 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v18, v1);
      v4 = *(this + 4);
      v3 += v52 + 1;
    }
    else
    {
      v3 += 2;
    }
  }
  if ( (v4 & 0x8000) != 0 )
  {
    v22 = *(this + 29);
    if ( v22 > 0x7F )
    {
      v53 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, v1);
      v4 = *(this + 4);
      v3 += v53 + 2;
    }
    else
    {
      v3 += 3;
    }
  }
LABEL_44:
  if ( (v4 & 0xFF0000) == 0 )
    goto LABEL_47;
  if ( (v4 & 0x10000) == 0 )
  {
    if ( (v4 & 0x20000) == 0 )
      goto LABEL_47;
    goto LABEL_51;
  }
  v23 = *(this + 15);
  v24 = *(*v23 - 24LL);
  v25 = 1;
  v26 = v24;
  if ( v24 > 0x7F )
  {
    v25 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v24, v1);
    v26 = *(*v23 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v25 + v26 + 2;
  if ( (v4 & 0x20000) != 0 )
  {
LABEL_51:
    v21 = *(this + 32);
    if ( v21 > 0x7F )
      v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v21, v1) + 2;
    else
      v3 += 3;
  }
LABEL_47:
  v19 = *(this + 1);
  if ( v19 != 0 && *(v19 + 8) != *v19 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v19);
  *(this + 5) = v3;
  return v3;
}


// CNETMsg_SpawnGroup_Load::MergeFrom  (line 7708, @0x0000000001a88d10, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_SpawnGroup_Load*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_SpawnGroup_Load::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_SpawnGroup_Load
void __fastcall CNETMsg_SpawnGroup_Load::MergeFrom(
        CNETMsg_SpawnGroup_Load *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_SpawnGroup_Load *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      7709);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_SpawnGroup_Load, 0)) != 0 )
  {
    CNETMsg_SpawnGroup_Load::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_SpawnGroup_Load::MergeFrom  (line 7720, @0x0000000001a888d0, libserver.so)  // inlines: mutable_world_offset_angle, mutable_world_offset_pos, set_creationsequence, set_entityfiltername, set_entitylumpname, set_flags, set_has_creationsequence, set_has_entityfiltername, set_has_entitylumpname, set_has_flags, set_has_localnamefixup, set_has_manifestincomplete, set_has_manifestloadpriority, set_has_parentnamefixup, set_has_savegamefilename, set_has_spawngrouphandle, set_has_spawngroupmanifest, set_has_spawngroupownerhandle, set_has_spawngroupparenthandle, set_has_tickcount, set_has_world_offset_angle, set_has_world_offset_pos, set_has_worldgroupid, set_has_worldname, set_localnamefixup, set_manifestincomplete, set_manifestloadpriority, set_parentnamefixup, set_savegamefilename, set_spawngrouphandle, set_spawngroupmanifest, set_spawngroupownerhandle, set_spawngroupparenthandle, set_tickcount, set_worldgroupid, set_worldname, world_offset_angle, world_offset_pos
// calls: CMsgVector::MergeFrom, CMsgQAngle::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CMsgVector::CMsgVector, CMsgQAngle::CMsgQAngle, _Unwind_Resume (13 total)
// callers: CNETMsg_SpawnGroup_Load::CNETMsg_SpawnGroup_Load, CNETMsg_SpawnGroup_Load::MergeFrom, CNETMsg_SpawnGroup_Load::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CNETMsg_SpawnGroup_Load::default_instance_
void __fastcall CNETMsg_SpawnGroup_Load::MergeFrom(
        CNETMsg_SpawnGroup_Load *const this,
        const CNETMsg_SpawnGroup_Load *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const CMsgVector *v7; // r13
  CMsgVector *v8; // rdi
  google::protobuf::OneofDescriptor *oneof_decls; // r13
  CMsgQAngle *v10; // rdi
  int v11; // eax
  int v12; // eax
  char v13; // al
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  const std::string *v18; // rsi
  std::string *v19; // rdi
  const std::string *v20; // rsi
  std::string *v21; // rdi
  const std::string *v22; // rsi
  std::string *v23; // rdi
  const std::string *v24; // rsi
  std::string *v25; // rdi
  const std::string *v26; // rsi
  std::string *v27; // rdi
  const std::string *v28; // rsi
  std::string *v29; // rdi
  const std::string *v30; // rsi
  std::string *v31; // rdi
  __int64 v32; // rax
  CMsgVector *v33; // r14
  CMsgQAngle *v34; // r14
  char v35; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v36; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v36,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      7721);
    v32 = google::protobuf::internal::LogMessage::operator<<(&v36, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v35, v32);
    google::protobuf::internal::LogMessage::~LogMessage(&v36);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v20 = *(from + 3);
      v21 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v21, v20);
      v4 = *(from + 4);
      if ( (v4 & 2) == 0 )
      {
LABEL_6:
        if ( (v4 & 4) == 0 )
          goto LABEL_7;
        goto LABEL_49;
      }
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v22 = *(from + 4);
    v23 = *(this + 4);
    *(this + 4) |= 2u;
    std::string::assign(v23, v22);
    v4 = *(from + 4);
    if ( (v4 & 4) == 0 )
    {
LABEL_7:
      if ( (v4 & 8) == 0 )
      {
LABEL_9:
        if ( (v4 & 0x10) != 0 )
        {
          v6 = *(from + 13);
          *(this + 4) |= 0x10u;
          *(this + 13) = v6;
          v4 = *(from + 4);
        }
        if ( (v4 & 0x20) != 0 )
        {
          v7 = *(from + 7);
          if ( v7 == 0 )
            v7 = *&CNETMsg_SpawnGroup_Load::default_instance_->oneof_decl_count_;
          v8 = *(this + 7);
          *(this + 4) |= 0x20u;
          if ( v8 == 0 )
          {
            v33 = operator new(0x28u);
            CMsgVector::CMsgVector(v33);
            *(this + 7) = v33;
            v8 = v33;
          }
          CMsgVector::MergeFrom(v8, v7);
          v4 = *(from + 4);
        }
        if ( (v4 & 0x40) != 0 )
        {
          oneof_decls = *(from + 8);
          if ( oneof_decls == 0 )
            oneof_decls = CNETMsg_SpawnGroup_Load::default_instance_->oneof_decls_;
          v10 = *(this + 8);
          *(this + 4) |= 0x40u;
          if ( v10 == 0 )
          {
            v34 = operator new(0x28u);
            CMsgQAngle::CMsgQAngle(v34);
            *(this + 8) = v34;
            v10 = v34;
          }
          CMsgQAngle::MergeFrom(v10, oneof_decls);
          v4 = *(from + 4);
        }
        if ( (v4 & 0x80u) != 0 )
        {
          v30 = *(from + 9);
          v31 = *(this + 9);
          *(this + 4) |= 0x80u;
          std::string::assign(v31, v30);
          v4 = *(from + 4);
        }
        goto LABEL_25;
      }
LABEL_8:
      v5 = *(from + 12);
      *(this + 4) |= 8u;
      *(this + 12) = v5;
      v4 = *(from + 4);
      goto LABEL_9;
    }
LABEL_49:
    v24 = *(from + 5);
    v25 = *(this + 5);
    *(this + 4) |= 4u;
    std::string::assign(v25, v24);
    v4 = *(from + 4);
    if ( (v4 & 8) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_25:
  if ( BYTE1(v4) == 0 )
    goto LABEL_40;
  if ( (v4 & 0x100) != 0 )
  {
    v11 = *(from + 20);
    *(this + 4) |= 0x100u;
    *(this + 20) = v11;
    v4 = *(from + 4);
  }
  if ( (v4 & 0x200) != 0 )
  {
    v12 = *(from + 21);
    *(this + 4) |= 0x200u;
    *(this + 21) = v12;
    v4 = *(from + 4);
  }
  if ( (v4 & 0x400) != 0 )
  {
    v13 = *(from + 96);
    *(this + 4) |= 0x400u;
    *(this + 96) = v13;
    v4 = *(from + 4);
  }
  if ( (v4 & 0x800) == 0 )
  {
    if ( (v4 & 0x1000) == 0 )
      goto LABEL_34;
LABEL_52:
    v28 = *(from + 13);
    v29 = *(this + 13);
    *(this + 4) |= 0x1000u;
    std::string::assign(v29, v28);
    v4 = *(from + 4);
    if ( (v4 & 0x2000) == 0 )
      goto LABEL_36;
    goto LABEL_35;
  }
  v26 = *(from + 11);
  v27 = *(this + 11);
  *(this + 4) |= 0x800u;
  std::string::assign(v27, v26);
  v4 = *(from + 4);
  if ( (v4 & 0x1000) != 0 )
    goto LABEL_52;
LABEL_34:
  if ( (v4 & 0x2000) != 0 )
  {
LABEL_35:
    v14 = *(from + 25);
    *(this + 4) |= 0x2000u;
    *(this + 25) = v14;
    v4 = *(from + 4);
  }
LABEL_36:
  if ( (v4 & 0x4000) != 0 )
  {
    v15 = *(from + 28);
    *(this + 4) |= 0x4000u;
    *(this + 28) = v15;
    v4 = *(from + 4);
  }
  if ( (v4 & 0x8000) != 0 )
  {
    v17 = *(from + 29);
    *(this + 4) |= 0x8000u;
    *(this + 29) = v17;
    v4 = *(from + 4);
  }
LABEL_40:
  if ( (v4 & 0xFF0000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v18 = *(from + 15);
      v19 = *(this + 15);
      *(this + 4) |= 0x10000u;
      std::string::assign(v19, v18);
      if ( (*(from + 4) & 0x20000) == 0 )
        goto LABEL_44;
      goto LABEL_43;
    }
    if ( (v4 & 0x20000) != 0 )
    {
LABEL_43:
      v16 = *(from + 32);
      *(this + 4) |= 0x20000u;
      *(this + 32) = v16;
    }
  }
LABEL_44:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CNETMsg_SpawnGroup_Load::CopyFrom  (line 7785, @0x0000000001a75de0, libserver.so)
void __fastcall CNETMsg_SpawnGroup_Load::CopyFrom(
        CNETMsg_SpawnGroup_Load *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_SpawnGroup_Load::CopyFrom  (line 7791, @0x0000000001a88df0, libserver.so)
// calls: CNETMsg_SpawnGroup_Load::MergeFrom
void __fastcall CNETMsg_SpawnGroup_Load::CopyFrom(
        CNETMsg_SpawnGroup_Load *const this,
        const CNETMsg_SpawnGroup_Load *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_SpawnGroup_Load::MergeFrom(this, from);
  }
}


// CNETMsg_SpawnGroup_Load::IsInitialized  (line 7797, @0x0000000001a75e20, libserver.so)
bool __fastcall CNETMsg_SpawnGroup_Load::IsInitialized(const CNETMsg_SpawnGroup_Load *const this)
{
  return 1;
}


// CNETMsg_SpawnGroup_Load::Swap  (line 7802, @0x0000000001a88e30, libserver.so)  // inlines: Swap, swap<CMsgQAngle*>, swap<CMsgVector*>, swap<bool>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_SpawnGroup_Load::Swap(CNETMsg_SpawnGroup_Load *const this, CNETMsg_SpawnGroup_Load *other)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax

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
    v5 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v5;
    v6 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v6;
    v7 = *(this + 9);
    *(this + 9) = *(other + 9);
    *(other + 9) = v7;
    LODWORD(v7) = *(this + 20);
    *(this + 20) = *(other + 20);
    v8 = *(other + 21);
    *(other + 20) = v7;
    LODWORD(v7) = *(this + 21);
    *(this + 21) = v8;
    LOBYTE(v8) = *(other + 96);
    *(other + 21) = v7;
    LOBYTE(v7) = *(this + 96);
    *(this + 96) = v8;
    v9 = *(other + 11);
    *(other + 96) = v7;
    v10 = *(this + 11);
    *(this + 11) = v9;
    v11 = *(other + 13);
    *(other + 11) = v10;
    v12 = *(this + 13);
    *(this + 13) = v11;
    LODWORD(v11) = *(other + 25);
    *(other + 13) = v12;
    LODWORD(v12) = *(this + 25);
    *(this + 25) = v11;
    LODWORD(v11) = *(other + 28);
    *(other + 25) = v12;
    LODWORD(v12) = *(this + 28);
    *(this + 28) = v11;
    LODWORD(v11) = *(other + 29);
    *(other + 28) = v12;
    LODWORD(v12) = *(this + 29);
    *(this + 29) = v11;
    v13 = *(other + 15);
    *(other + 29) = v12;
    v14 = *(this + 15);
    *(this + 15) = v13;
    LODWORD(v13) = *(other + 32);
    *(other + 15) = v14;
    LODWORD(v14) = *(this + 32);
    *(this + 32) = v13;
    LODWORD(v13) = *(other + 4);
    *(other + 32) = v14;
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


// CNETMsg_SpawnGroup_Load::GetMetadata  (line 7828, @0x0000000001a7b6d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_Load_descriptor_, `anonymous namespace'::CNETMsg_SpawnGroup_Load_reflection_
google::protobuf::Metadata __fastcall CNETMsg_SpawnGroup_Load::GetMetadata(const CNETMsg_SpawnGroup_Load *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_SpawnGroup_Load_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_SpawnGroup_Load_reflection_;
  return result;
}


// CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate  (line 7845, @0x0000000001a89060, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SpawnGroup_ManifestUpdate::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CNETMsg_SpawnGroup_ManifestUpdate::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate(
        CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  *this = off_3F6F4D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CNETMsg_SpawnGroup_ManifestUpdate::SharedCtor(this);
}


// CNETMsg_SpawnGroup_ManifestUpdate::InitAsDefaultInstance  (line 7851, @0x0000000001a88f80, libserver.so)
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::InitAsDefaultInstance(CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  ;
}


// CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate  (line 7854, @0x0000000001a89350, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SpawnGroup_ManifestUpdate::SharedCtor, CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate(
        CNETMsg_SpawnGroup_ManifestUpdate *const this,
        const CNETMsg_SpawnGroup_ManifestUpdate *const from)
{
  *this = off_3F6F4D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CNETMsg_SpawnGroup_ManifestUpdate::SharedCtor(this);
  CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom(this, from);
}


// CNETMsg_SpawnGroup_ManifestUpdate::SharedCtor  (line 7861, @0x0000000001a88f90, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::SharedCtor(CNETMsg_SpawnGroup_ManifestUpdate *const this)
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
  *(this + 36) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SpawnGroup_ManifestUpdate::~CNETMsg_SpawnGroup_ManifestUpdate  (line 7870, @0x0000000001a89170, libserver.so)
// calls: CNETMsg_SpawnGroup_ManifestUpdate::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CNETMsg_SpawnGroup_ManifestUpdate::~CNETMsg_SpawnGroup_ManifestUpdate
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::~CNETMsg_SpawnGroup_ManifestUpdate(
        CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  *this = off_3F6F4D0;
  CNETMsg_SpawnGroup_ManifestUpdate::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_SpawnGroup_ManifestUpdate::~CNETMsg_SpawnGroup_ManifestUpdate  (line 7870, @0x0000000001a891b0, libserver.so)
// calls: CNETMsg_SpawnGroup_ManifestUpdate::~CNETMsg_SpawnGroup_ManifestUpdate, operator delete
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::~CNETMsg_SpawnGroup_ManifestUpdate(
        CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  CNETMsg_SpawnGroup_ManifestUpdate::~CNETMsg_SpawnGroup_ManifestUpdate(this);
  operator delete(this);
}


// CNETMsg_SpawnGroup_ManifestUpdate::SharedDtor  (line 7875, @0x0000000001a89100, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CNETMsg_SpawnGroup_ManifestUpdate::~CNETMsg_SpawnGroup_ManifestUpdate
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::SharedDtor(CNETMsg_SpawnGroup_ManifestUpdate *const this)
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


// CNETMsg_SpawnGroup_ManifestUpdate::SetCachedSize  (line 7881, @0x0000000001a75e30, libserver.so)
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::SetCachedSize(
        const CNETMsg_SpawnGroup_ManifestUpdate *const this,
        int size)
{
  *(this + 5) = size;
}


// CNETMsg_SpawnGroup_ManifestUpdate::descriptor  (line 7886, @0x0000000001a891d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_SpawnGroup_ManifestUpdate::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_descriptor_;
}


// CNETMsg_SpawnGroup_ManifestUpdate::default_instance  (line 7891, @0x0000000001a8bd70, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_SpawnGroup_ManifestUpdate::default_instance_
const CNETMsg_SpawnGroup_ManifestUpdate *__cdecl CNETMsg_SpawnGroup_ManifestUpdate::default_instance()
{
  const CNETMsg_SpawnGroup_ManifestUpdate *result; // rax

  result = CNETMsg_SpawnGroup_ManifestUpdate::default_instance_;
  if ( CNETMsg_SpawnGroup_ManifestUpdate::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_SpawnGroup_ManifestUpdate::default_instance_;
  }
  return result;
}


// CNETMsg_SpawnGroup_ManifestUpdate::New  (line 7898, @0x0000000001a890c0, libserver.so)
// calls: operator new, CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate, operator delete, _Unwind_Resume
CNETMsg_SpawnGroup_ManifestUpdate *__fastcall CNETMsg_SpawnGroup_ManifestUpdate::New(
        const CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  CNETMsg_SpawnGroup_ManifestUpdate *v1; // rbx

  v1 = operator new(0x28u);
  CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate(v1);
  return v1;
}


// CNETMsg_SpawnGroup_ManifestUpdate::Clear  (line 7902, @0x0000000001a77210, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::Clear(CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 7) != 0 )
  {
    v2 = (*(this + 16) & 2) == 0;
    *(this + 8) = 0;
    *(this + 36) = 0;
    if ( !v2 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CNETMsg_SpawnGroup_ManifestUpdate::MergePartialFromCodedStream  (line 7927, @0x0000000001a7e410, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, mutable_spawngroupmanifest, set_has_manifestincomplete, set_has_spawngrouphandle, set_has_spawngroupmanifest
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CNETMsg_SpawnGroup_ManifestUpdate::MergePartialFromCodedStream(
        CNETMsg_SpawnGroup_ManifestUpdate *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v4; // r14
  unsigned int v6; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  google::protobuf::uint8 *v11; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v14; // rax
  int v15; // eax
  const google::protobuf::uint8 *v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18[7]; // [rsp+8h] [rbp-38h] BYREF

  v4 = (this + 32);
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
      v11 = (v10 >> 3);
      if ( v11 == 2 )
      {
        if ( v10 != 18 )
          goto handle_unusual;
        goto parse_spawngroupmanifest;
      }
      if ( v11 != 3 )
        break;
      if ( v10 != 24 )
        goto handle_unusual;
      v16 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_manifestincomplete:
      if ( buffer_end <= v16 || ((v17 = *v16) & 0x80u) != 0LL )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v18);
        if ( !result )
          return result;
        v17 = v18[0];
      }
      else
      {
        input->buffer_ = v16 + 1;
      }
      *(this + 36) = v17 != 0;
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
    if ( v11 != 1 || v10 != 8 )
      break;
    v14 = input->buffer_;
    if ( v14 >= input->buffer_end_ || ((v15 = *v14) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
        return 0;
    }
    else
    {
      *(this + 8) = v15;
      ++input->buffer_;
    }
    *(this + 4) |= 1u;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      v11 = (buffer + 1);
      input->buffer_ = v11;
parse_spawngroupmanifest:
      *(this + 4) |= 2u;
      if ( google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 3), v11) == 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v16 = buffer + 1;
        input->buffer_ = v16;
        goto parse_manifestincomplete;
      }
    }
  }
handle_unusual:
  if ( v10 != 0 )
    goto LABEL_9;
  return 1;
}


// CNETMsg_SpawnGroup_ManifestUpdate::SerializeWithCachedSizes  (line 8001, @0x0000000001a786d0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::SerializeWithCachedSizes(
        const CNETMsg_SpawnGroup_ManifestUpdate *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_0 + 1, *(this + 8), output, v3);
    v6 = *(this + 4);
    if ( (v6 & 2) == 0 )
    {
LABEL_3:
      if ( (v6 & 4) == 0 )
        goto LABEL_4;
LABEL_9:
      google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 1, *(this + 36), output, v3);
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
  google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_2, *(this + 3), output, v3);
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


// CNETMsg_SpawnGroup_ManifestUpdate::SerializeWithCachedSizesToArray  (line 8027, @0x0000000001a79850, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteBytesToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_SpawnGroup_ManifestUpdate::SerializeWithCachedSizesToArray(
        const CNETMsg_SpawnGroup_ManifestUpdate *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  const std::string *v7; // rsi
  google::protobuf::uint8 v8; // al
  __int64 v9; // rax

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
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 36);
    target += 2;
    *(target - 2) = 24;
    *(target - 1) = v8;
  }
  v9 = *(this + 1);
  if ( v9 == 0 || *(v9 + 8) == *v9 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v9);
}


// CNETMsg_SpawnGroup_ManifestUpdate::ByteSize  (line 8055, @0x0000000001a79400, libserver.so)  // inlines: BytesSize, UInt32Size, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CNETMsg_SpawnGroup_ManifestUpdate::ByteSize(const CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  __int64 v7; // rax
  _QWORD *v9; // r13
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  int v12; // ecx
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
        v5 = *(this + 4);
      }
      v3 += v11 + v12 + 1;
    }
    if ( (v5 & 4) != 0 )
      v3 += 2;
  }
  v7 = *(this + 1);
  if ( v7 != 0 && *(v7 + 8) != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v7);
  *(this + 5) = v3;
  return v3;
}


// CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom  (line 8090, @0x0000000001a893c0, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_SpawnGroup_ManifestUpdate*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_SpawnGroup_ManifestUpdate
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom(
        CNETMsg_SpawnGroup_ManifestUpdate *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_SpawnGroup_ManifestUpdate *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      8091);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CNETMsg_SpawnGroup_ManifestUpdate,
               0)) != 0 )
  {
    CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom  (line 8102, @0x0000000001a89260, libserver.so)  // inlines: set_has_manifestincomplete, set_has_spawngrouphandle, set_has_spawngroupmanifest, set_manifestincomplete, set_spawngrouphandle, set_spawngroupmanifest
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_SpawnGroup_ManifestUpdate::CNETMsg_SpawnGroup_ManifestUpdate, CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom, CNETMsg_SpawnGroup_ManifestUpdate::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom(
        CNETMsg_SpawnGroup_ManifestUpdate *const this,
        const CNETMsg_SpawnGroup_ManifestUpdate *const from)
{
  int v4; // eax
  int v5; // eax
  char v6; // al
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      8103);
    v9 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v10, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
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
      v7 = *(from + 3);
      v8 = *(this + 3);
      *(this + 4) |= 2u;
      std::string::assign(v8, v7);
      if ( (*(from + 4) & 4) == 0 )
        goto LABEL_9;
      goto LABEL_8;
    }
    if ( (v4 & 4) != 0 )
    {
LABEL_8:
      v6 = *(from + 36);
      *(this + 4) |= 4u;
      *(this + 36) = v6;
    }
  }
LABEL_9:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CNETMsg_SpawnGroup_ManifestUpdate::CopyFrom  (line 8118, @0x0000000001a75e40, libserver.so)
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::CopyFrom(
        CNETMsg_SpawnGroup_ManifestUpdate *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_SpawnGroup_ManifestUpdate::CopyFrom  (line 8124, @0x0000000001a894a0, libserver.so)
// calls: CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::CopyFrom(
        CNETMsg_SpawnGroup_ManifestUpdate *const this,
        const CNETMsg_SpawnGroup_ManifestUpdate *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_SpawnGroup_ManifestUpdate::MergeFrom(this, from);
  }
}


// CNETMsg_SpawnGroup_ManifestUpdate::IsInitialized  (line 8130, @0x0000000001a75e80, libserver.so)
bool __fastcall CNETMsg_SpawnGroup_ManifestUpdate::IsInitialized(const CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  return 1;
}


// CNETMsg_SpawnGroup_ManifestUpdate::Swap  (line 8135, @0x0000000001a894e0, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_SpawnGroup_ManifestUpdate::Swap(
        CNETMsg_SpawnGroup_ManifestUpdate *const this,
        CNETMsg_SpawnGroup_ManifestUpdate *other)
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
    LOBYTE(v3) = *(this + 36);
    *(this + 36) = *(other + 36);
    *(other + 36) = v3;
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


// CNETMsg_SpawnGroup_ManifestUpdate::GetMetadata  (line 8146, @0x0000000001a7b770, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_descriptor_, `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_reflection_
google::protobuf::Metadata __fastcall CNETMsg_SpawnGroup_ManifestUpdate::GetMetadata(
        const CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_SpawnGroup_ManifestUpdate_reflection_;
  return result;
}


// CNETMsg_SpawnGroup_SetCreationTick::CNETMsg_SpawnGroup_SetCreationTick  (line 8163, @0x0000000001a89540, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CNETMsg_SpawnGroup_SetCreationTick::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::CNETMsg_SpawnGroup_SetCreationTick(
        CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  *this = off_3F6F590;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SpawnGroup_SetCreationTick::InitAsDefaultInstance  (line 8169, @0x0000000001a895e0, libserver.so)
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::InitAsDefaultInstance(
        CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  ;
}


// CNETMsg_SpawnGroup_SetCreationTick::CNETMsg_SpawnGroup_SetCreationTick  (line 8172, @0x0000000001a897a0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SpawnGroup_SetCreationTick::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::CNETMsg_SpawnGroup_SetCreationTick(
        CNETMsg_SpawnGroup_SetCreationTick *const this,
        const CNETMsg_SpawnGroup_SetCreationTick *const from)
{
  *this = off_3F6F590;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  CNETMsg_SpawnGroup_SetCreationTick::MergeFrom(this, from);
}


// CNETMsg_SpawnGroup_SetCreationTick::SharedCtor  (line 8179, @0x0000000001a895f0, libserver.so)  // inlines: memset
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::SharedCtor(CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SpawnGroup_SetCreationTick::~CNETMsg_SpawnGroup_SetCreationTick  (line 8187, @0x0000000001a76470, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::~CNETMsg_SpawnGroup_SetCreationTick(
        CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6F590;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_SpawnGroup_SetCreationTick::~CNETMsg_SpawnGroup_SetCreationTick  (line 8187, @0x0000000001a764a0, libserver.so)  // inlines: ~CNETMsg_SpawnGroup_SetCreationTick
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::~CNETMsg_SpawnGroup_SetCreationTick(
        CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6F590;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CNETMsg_SpawnGroup_SetCreationTick::SharedDtor  (line 8192, @0x0000000001a89620, libserver.so)
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::SharedDtor(CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  ;
}


// CNETMsg_SpawnGroup_SetCreationTick::SetCachedSize  (line 8197, @0x0000000001a75e90, libserver.so)
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::SetCachedSize(
        const CNETMsg_SpawnGroup_SetCreationTick *const this,
        int size)
{
  *(this + 5) = size;
}


// CNETMsg_SpawnGroup_SetCreationTick::descriptor  (line 8202, @0x0000000001a89630, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_SpawnGroup_SetCreationTick::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_descriptor_;
}


// CNETMsg_SpawnGroup_SetCreationTick::default_instance  (line 8207, @0x0000000001a8bda0, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_SpawnGroup_SetCreationTick::default_instance_
const CNETMsg_SpawnGroup_SetCreationTick *__cdecl CNETMsg_SpawnGroup_SetCreationTick::default_instance()
{
  const CNETMsg_SpawnGroup_SetCreationTick *result; // rax

  result = CNETMsg_SpawnGroup_SetCreationTick::default_instance_;
  if ( CNETMsg_SpawnGroup_SetCreationTick::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_SpawnGroup_SetCreationTick::default_instance_;
  }
  return result;
}


// CNETMsg_SpawnGroup_SetCreationTick::New  (line 8214, @0x0000000001a895a0, libserver.so)
// calls: operator new, CNETMsg_SpawnGroup_SetCreationTick::CNETMsg_SpawnGroup_SetCreationTick, operator delete, _Unwind_Resume
CNETMsg_SpawnGroup_SetCreationTick *__fastcall CNETMsg_SpawnGroup_SetCreationTick::New(
        const CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  CNETMsg_SpawnGroup_SetCreationTick *v1; // rbx

  v1 = operator new(0x28u);
  CNETMsg_SpawnGroup_SetCreationTick::CNETMsg_SpawnGroup_SetCreationTick(v1);
  return v1;
}


// CNETMsg_SpawnGroup_SetCreationTick::Clear  (line 8218, @0x0000000001a76780, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::Clear(CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CNETMsg_SpawnGroup_SetCreationTick::MergePartialFromCodedStream  (line 8238, @0x0000000001a7df30, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_creationsequence, set_has_spawngrouphandle, set_has_tickcount
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CNETMsg_SpawnGroup_SetCreationTick::MergePartialFromCodedStream(
        CNETMsg_SpawnGroup_SetCreationTick *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v4; // r13
  unsigned int v6; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  unsigned int v11; // edx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v14; // rax
  int v15; // eax
  const google::protobuf::uint8 *v16; // rdx
  const google::protobuf::uint8 *v17; // rdx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int *v20; // [rsp+8h] [rbp-48h]
  unsigned int v21[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v2 = (this + 24);
  v4 = (this + 32);
  v6 = this + 8;
  v20 = (this + 24);
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
      v11 = v10 >> 3;
      if ( v10 >> 3 == 2 )
      {
        if ( v10 != 16 )
          goto handle_unusual;
        v16 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_tickcount;
      }
      if ( v11 != 3 )
        break;
      if ( v10 != 24 )
        goto handle_unusual;
      v17 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_creationsequence:
      if ( buffer_end <= v17 || ((v18 = *v17) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *(this + 8) = v18;
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
    if ( v11 != 1 || v10 != 8 )
      break;
    v14 = input->buffer_;
    if ( v14 >= input->buffer_end_ || ((v15 = *v14) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v20) == 0 )
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
parse_tickcount:
      if ( v16 >= buffer_end || ((v19 = *v16) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v21);
        if ( !result )
          return result;
        v19 = v21[0];
      }
      else
      {
        input->buffer_ = v16 + 1;
      }
      *(this + 4) |= 2u;
      *(this + 7) = v19;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v17 = buffer + 1;
        input->buffer_ = v17;
        goto parse_creationsequence;
      }
    }
  }
handle_unusual:
  if ( v10 != 0 )
    goto LABEL_9;
  return 1;
}


// CNETMsg_SpawnGroup_SetCreationTick::SerializeWithCachedSizes  (line 8314, @0x0000000001a77ec0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::SerializeWithCachedSizes(
        const CNETMsg_SpawnGroup_SetCreationTick *const this,
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


// CNETMsg_SpawnGroup_SetCreationTick::SerializeWithCachedSizesToArray  (line 8339, @0x0000000001a7a0c0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_SpawnGroup_SetCreationTick::SerializeWithCachedSizesToArray(
        const CNETMsg_SpawnGroup_SetCreationTick *const this,
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


// CNETMsg_SpawnGroup_SetCreationTick::ByteSize  (line 8365, @0x0000000001a79640, libserver.so)  // inlines: Int32Size, UInt32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CNETMsg_SpawnGroup_SetCreationTick::ByteSize(const CNETMsg_SpawnGroup_SetCreationTick *const this)
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
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v3 = v12 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
    {
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
    if ( (v5 & 4) != 0 )
    {
      v11 = *(this + 8);
      if ( v11 > 0x7F )
        v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1) + 1;
      else
        v3 += 2;
    }
  }
  v9 = *(this + 1);
  if ( v9 != 0 && v9[1] != *v9 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CNETMsg_SpawnGroup_SetCreationTick::MergeFrom  (line 8402, @0x0000000001a89830, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_SpawnGroup_SetCreationTick*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_SpawnGroup_SetCreationTick::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_SpawnGroup_SetCreationTick
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::MergeFrom(
        CNETMsg_SpawnGroup_SetCreationTick *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_SpawnGroup_SetCreationTick *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      8403);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CNETMsg_SpawnGroup_SetCreationTick,
               0)) != 0 )
  {
    CNETMsg_SpawnGroup_SetCreationTick::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_SpawnGroup_SetCreationTick::MergeFrom  (line 8414, @0x0000000001a896c0, libserver.so)  // inlines: set_creationsequence, set_has_creationsequence, set_has_spawngrouphandle, set_has_tickcount, set_spawngrouphandle, set_tickcount
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_SpawnGroup_SetCreationTick::CNETMsg_SpawnGroup_SetCreationTick, CNETMsg_SpawnGroup_SetCreationTick::MergeFrom, CNETMsg_SpawnGroup_SetCreationTick::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::MergeFrom(
        CNETMsg_SpawnGroup_SetCreationTick *const this,
        const CNETMsg_SpawnGroup_SetCreationTick *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      8415);
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


// CNETMsg_SpawnGroup_SetCreationTick::CopyFrom  (line 8430, @0x0000000001a75ea0, libserver.so)
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::CopyFrom(
        CNETMsg_SpawnGroup_SetCreationTick *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_SpawnGroup_SetCreationTick::CopyFrom  (line 8436, @0x0000000001a89910, libserver.so)
// calls: CNETMsg_SpawnGroup_SetCreationTick::MergeFrom
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::CopyFrom(
        CNETMsg_SpawnGroup_SetCreationTick *const this,
        const CNETMsg_SpawnGroup_SetCreationTick *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_SpawnGroup_SetCreationTick::MergeFrom(this, from);
  }
}


// CNETMsg_SpawnGroup_SetCreationTick::IsInitialized  (line 8442, @0x0000000001a75ee0, libserver.so)
bool __fastcall CNETMsg_SpawnGroup_SetCreationTick::IsInitialized(const CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  return 1;
}


// CNETMsg_SpawnGroup_SetCreationTick::Swap  (line 8447, @0x0000000001a89950, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_SpawnGroup_SetCreationTick::Swap(
        CNETMsg_SpawnGroup_SetCreationTick *const this,
        CNETMsg_SpawnGroup_SetCreationTick *other)
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


// CNETMsg_SpawnGroup_SetCreationTick::GetMetadata  (line 8458, @0x0000000001a7b810, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_descriptor_, `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_reflection_
google::protobuf::Metadata __fastcall CNETMsg_SpawnGroup_SetCreationTick::GetMetadata(
        const CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_SpawnGroup_SetCreationTick_reflection_;
  return result;
}


// CNETMsg_SpawnGroup_Unload::CNETMsg_SpawnGroup_Unload  (line 8475, @0x0000000001a899b0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CNETMsg_SpawnGroup_Unload::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_SpawnGroup_Unload::CNETMsg_SpawnGroup_Unload(CNETMsg_SpawnGroup_Unload *const this)
{
  *this = off_3F6F650;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SpawnGroup_Unload::InitAsDefaultInstance  (line 8481, @0x0000000001a89a50, libserver.so)
void __fastcall CNETMsg_SpawnGroup_Unload::InitAsDefaultInstance(CNETMsg_SpawnGroup_Unload *const this)
{
  ;
}


// CNETMsg_SpawnGroup_Unload::CNETMsg_SpawnGroup_Unload  (line 8484, @0x0000000001a89c10, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SpawnGroup_Unload::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_SpawnGroup_Unload::CNETMsg_SpawnGroup_Unload(
        CNETMsg_SpawnGroup_Unload *const this,
        const CNETMsg_SpawnGroup_Unload *const from)
{
  *this = off_3F6F650;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  CNETMsg_SpawnGroup_Unload::MergeFrom(this, from);
}


// CNETMsg_SpawnGroup_Unload::SharedCtor  (line 8491, @0x0000000001a89a60, libserver.so)  // inlines: memset
void __fastcall CNETMsg_SpawnGroup_Unload::SharedCtor(CNETMsg_SpawnGroup_Unload *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SpawnGroup_Unload::~CNETMsg_SpawnGroup_Unload  (line 8499, @0x0000000001a764e0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CNETMsg_SpawnGroup_Unload::~CNETMsg_SpawnGroup_Unload(CNETMsg_SpawnGroup_Unload *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6F650;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_SpawnGroup_Unload::~CNETMsg_SpawnGroup_Unload  (line 8499, @0x0000000001a76510, libserver.so)  // inlines: ~CNETMsg_SpawnGroup_Unload
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CNETMsg_SpawnGroup_Unload::~CNETMsg_SpawnGroup_Unload(CNETMsg_SpawnGroup_Unload *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6F650;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CNETMsg_SpawnGroup_Unload::SharedDtor  (line 8504, @0x0000000001a89a90, libserver.so)
void __fastcall CNETMsg_SpawnGroup_Unload::SharedDtor(CNETMsg_SpawnGroup_Unload *const this)
{
  ;
}


// CNETMsg_SpawnGroup_Unload::SetCachedSize  (line 8509, @0x0000000001a75ef0, libserver.so)
void __fastcall CNETMsg_SpawnGroup_Unload::SetCachedSize(const CNETMsg_SpawnGroup_Unload *const this, int size)
{
  *(this + 5) = size;
}


// CNETMsg_SpawnGroup_Unload::descriptor  (line 8514, @0x0000000001a89aa0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_Unload_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_SpawnGroup_Unload::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_SpawnGroup_Unload_descriptor_;
}


// CNETMsg_SpawnGroup_Unload::default_instance  (line 8519, @0x0000000001a8bdd0, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_SpawnGroup_Unload::default_instance_
const CNETMsg_SpawnGroup_Unload *__cdecl CNETMsg_SpawnGroup_Unload::default_instance()
{
  const CNETMsg_SpawnGroup_Unload *result; // rax

  result = CNETMsg_SpawnGroup_Unload::default_instance_;
  if ( CNETMsg_SpawnGroup_Unload::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_SpawnGroup_Unload::default_instance_;
  }
  return result;
}


// CNETMsg_SpawnGroup_Unload::New  (line 8526, @0x0000000001a89a10, libserver.so)
// calls: operator new, CNETMsg_SpawnGroup_Unload::CNETMsg_SpawnGroup_Unload, operator delete, _Unwind_Resume
CNETMsg_SpawnGroup_Unload *__fastcall CNETMsg_SpawnGroup_Unload::New(const CNETMsg_SpawnGroup_Unload *const this)
{
  CNETMsg_SpawnGroup_Unload *v1; // rbx

  v1 = operator new(0x28u);
  CNETMsg_SpawnGroup_Unload::CNETMsg_SpawnGroup_Unload(v1);
  return v1;
}


// CNETMsg_SpawnGroup_Unload::Clear  (line 8530, @0x0000000001a767c0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_SpawnGroup_Unload::Clear(CNETMsg_SpawnGroup_Unload *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CNETMsg_SpawnGroup_Unload::MergePartialFromCodedStream  (line 8550, @0x0000000001a7e1a0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_flags, set_has_spawngrouphandle, set_has_tickcount
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CNETMsg_SpawnGroup_Unload::MergePartialFromCodedStream(
        CNETMsg_SpawnGroup_Unload *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int *v4; // r14
  unsigned int v6; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v9; // al
  google::protobuf::io::CodedInputStream *v10; // rsi
  unsigned int v11; // edx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v14; // rax
  int v15; // eax
  const google::protobuf::uint8 *v16; // rdx
  const google::protobuf::uint8 *v17; // rdx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int *v20; // [rsp+8h] [rbp-48h]
  unsigned int v21[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v2 = (this + 24);
  v4 = (this + 28);
  v6 = this + 8;
  v20 = (this + 24);
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
      v11 = v10 >> 3;
      if ( v10 >> 3 == 2 )
      {
        if ( v10 != 16 )
          goto handle_unusual;
        v16 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_flags;
      }
      if ( v11 != 3 )
        break;
      if ( v10 != 24 )
        goto handle_unusual;
      v17 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_tickcount:
      if ( buffer_end <= v17 || ((v18 = *v17) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v21);
        if ( !result )
          return result;
        v18 = v21[0];
      }
      else
      {
        input->buffer_ = v17 + 1;
      }
      *(this + 4) |= 4u;
      *(this + 8) = v18;
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
    if ( v11 != 1 || v10 != 8 )
      break;
    v14 = input->buffer_;
    if ( v14 >= input->buffer_end_ || ((v15 = *v14) & 0x80u) != 0 )
    {
      if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v20) == 0 )
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
parse_flags:
      if ( buffer_end <= v16 || ((v19 = *v16) & 0x80u) != 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *(this + 7) = v19;
        ++input->buffer_;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v17 = buffer + 1;
        input->buffer_ = v17;
        goto parse_tickcount;
      }
    }
  }
handle_unusual:
  if ( v10 != 0 )
    goto LABEL_9;
  return 1;
}


// CNETMsg_SpawnGroup_Unload::SerializeWithCachedSizes  (line 8626, @0x0000000001a77f60, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_SpawnGroup_Unload::SerializeWithCachedSizes(
        const CNETMsg_SpawnGroup_Unload *const this,
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


// CNETMsg_SpawnGroup_Unload::SerializeWithCachedSizesToArray  (line 8651, @0x0000000001a79fe0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_SpawnGroup_Unload::SerializeWithCachedSizesToArray(
        const CNETMsg_SpawnGroup_Unload *const this,
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
    if ( v7 < 0 )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v7, (target + 1), v2);
    }
    else if ( v7 > 0x7F )
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


// CNETMsg_SpawnGroup_Unload::ByteSize  (line 8677, @0x0000000001a79710, libserver.so)  // inlines: Int32Size, UInt32Size, VarintSize32, VarintSize32SignExtended, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CNETMsg_SpawnGroup_Unload::ByteSize(const CNETMsg_SpawnGroup_Unload *const this)
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
  int v13; // eax

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
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v5 = *(this + 4);
        v3 = v12 + 1;
      }
    }
    if ( (v5 & 2) != 0 )
    {
      v7 = *(this + 7);
      if ( v7 > 0x7F )
      {
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1);
        v5 = *(this + 4);
        v3 += v13 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v10 = *(this + 8);
      v11 = 11;
      if ( v10 >= 0 && (LOBYTE(v11) = 2, v10 > 0x7F) )
        v3 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1) + 1;
      else
        v3 += v11;
    }
  }
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CNETMsg_SpawnGroup_Unload::MergeFrom  (line 8714, @0x0000000001a89ca0, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_SpawnGroup_Unload*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_SpawnGroup_Unload::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_SpawnGroup_Unload
void __fastcall CNETMsg_SpawnGroup_Unload::MergeFrom(
        CNETMsg_SpawnGroup_Unload *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_SpawnGroup_Unload *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      8715);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CNETMsg_SpawnGroup_Unload, 0)) != 0 )
  {
    CNETMsg_SpawnGroup_Unload::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_SpawnGroup_Unload::MergeFrom  (line 8726, @0x0000000001a89b30, libserver.so)  // inlines: set_flags, set_has_flags, set_has_spawngrouphandle, set_has_tickcount, set_spawngrouphandle, set_tickcount
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_SpawnGroup_Unload::CNETMsg_SpawnGroup_Unload, CNETMsg_SpawnGroup_Unload::MergeFrom, CNETMsg_SpawnGroup_Unload::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_SpawnGroup_Unload::MergeFrom(
        CNETMsg_SpawnGroup_Unload *const this,
        const CNETMsg_SpawnGroup_Unload *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      8727);
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


// CNETMsg_SpawnGroup_Unload::CopyFrom  (line 8742, @0x0000000001a75f00, libserver.so)
void __fastcall CNETMsg_SpawnGroup_Unload::CopyFrom(
        CNETMsg_SpawnGroup_Unload *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_SpawnGroup_Unload::CopyFrom  (line 8748, @0x0000000001a89d80, libserver.so)
// calls: CNETMsg_SpawnGroup_Unload::MergeFrom
void __fastcall CNETMsg_SpawnGroup_Unload::CopyFrom(
        CNETMsg_SpawnGroup_Unload *const this,
        const CNETMsg_SpawnGroup_Unload *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_SpawnGroup_Unload::MergeFrom(this, from);
  }
}


// CNETMsg_SpawnGroup_Unload::IsInitialized  (line 8754, @0x0000000001a75f40, libserver.so)
bool __fastcall CNETMsg_SpawnGroup_Unload::IsInitialized(const CNETMsg_SpawnGroup_Unload *const this)
{
  return 1;
}


// CNETMsg_SpawnGroup_Unload::Swap  (line 8759, @0x0000000001a89dc0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_SpawnGroup_Unload::Swap(
        CNETMsg_SpawnGroup_Unload *const this,
        CNETMsg_SpawnGroup_Unload *other)
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


// CNETMsg_SpawnGroup_Unload::GetMetadata  (line 8770, @0x0000000001a7b8b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_Unload_descriptor_, `anonymous namespace'::CNETMsg_SpawnGroup_Unload_reflection_
google::protobuf::Metadata __fastcall CNETMsg_SpawnGroup_Unload::GetMetadata(
        const CNETMsg_SpawnGroup_Unload *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_SpawnGroup_Unload_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_SpawnGroup_Unload_reflection_;
  return result;
}


// CNETMsg_SpawnGroup_LoadCompleted::CNETMsg_SpawnGroup_LoadCompleted  (line 8785, @0x0000000001a89e20, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CNETMsg_SpawnGroup_LoadCompleted::New, protobuf_AddDesc_networkbasetypes_2eproto
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::CNETMsg_SpawnGroup_LoadCompleted(
        CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  *this = off_3F6F710;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SpawnGroup_LoadCompleted::InitAsDefaultInstance  (line 8791, @0x0000000001a89eb0, libserver.so)
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::InitAsDefaultInstance(CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  ;
}


// CNETMsg_SpawnGroup_LoadCompleted::CNETMsg_SpawnGroup_LoadCompleted  (line 8794, @0x0000000001a8a030, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CNETMsg_SpawnGroup_LoadCompleted::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::CNETMsg_SpawnGroup_LoadCompleted(
        CNETMsg_SpawnGroup_LoadCompleted *const this,
        const CNETMsg_SpawnGroup_LoadCompleted *const from)
{
  *this = off_3F6F710;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
  CNETMsg_SpawnGroup_LoadCompleted::MergeFrom(this, from);
}


// CNETMsg_SpawnGroup_LoadCompleted::SharedCtor  (line 8801, @0x0000000001a89ec0, libserver.so)  // inlines: memset
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::SharedCtor(CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = 0;
}


// CNETMsg_SpawnGroup_LoadCompleted::~CNETMsg_SpawnGroup_LoadCompleted  (line 8807, @0x0000000001a76550, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::~CNETMsg_SpawnGroup_LoadCompleted(
        CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6F710;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CNETMsg_SpawnGroup_LoadCompleted::~CNETMsg_SpawnGroup_LoadCompleted  (line 8807, @0x0000000001a76580, libserver.so)  // inlines: ~CNETMsg_SpawnGroup_LoadCompleted
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::~CNETMsg_SpawnGroup_LoadCompleted(
        CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F6F710;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CNETMsg_SpawnGroup_LoadCompleted::SharedDtor  (line 8812, @0x0000000001a89ee0, libserver.so)
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::SharedDtor(CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  ;
}


// CNETMsg_SpawnGroup_LoadCompleted::SetCachedSize  (line 8817, @0x0000000001a75f50, libserver.so)
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::SetCachedSize(
        const CNETMsg_SpawnGroup_LoadCompleted *const this,
        int size)
{
  *(this + 5) = size;
}


// CNETMsg_SpawnGroup_LoadCompleted::descriptor  (line 8822, @0x0000000001a89ef0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_descriptor_
const google::protobuf::Descriptor *__cdecl CNETMsg_SpawnGroup_LoadCompleted::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_descriptor_;
}


// CNETMsg_SpawnGroup_LoadCompleted::default_instance  (line 8827, @0x0000000001a8be00, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// globals: CNETMsg_SpawnGroup_LoadCompleted::default_instance_
const CNETMsg_SpawnGroup_LoadCompleted *__cdecl CNETMsg_SpawnGroup_LoadCompleted::default_instance()
{
  const CNETMsg_SpawnGroup_LoadCompleted *result; // rax

  result = CNETMsg_SpawnGroup_LoadCompleted::default_instance_;
  if ( CNETMsg_SpawnGroup_LoadCompleted::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CNETMsg_SpawnGroup_LoadCompleted::default_instance_;
  }
  return result;
}


// CNETMsg_SpawnGroup_LoadCompleted::New  (line 8834, @0x0000000001a89e70, libserver.so)
// calls: operator new, CNETMsg_SpawnGroup_LoadCompleted::CNETMsg_SpawnGroup_LoadCompleted, operator delete, _Unwind_Resume
CNETMsg_SpawnGroup_LoadCompleted *__fastcall CNETMsg_SpawnGroup_LoadCompleted::New(
        const CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  CNETMsg_SpawnGroup_LoadCompleted *v1; // rbx

  v1 = operator new(0x20u);
  CNETMsg_SpawnGroup_LoadCompleted::CNETMsg_SpawnGroup_LoadCompleted(v1);
  return v1;
}


// CNETMsg_SpawnGroup_LoadCompleted::Clear  (line 8838, @0x0000000001a76800, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::Clear(CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  char *v2; // rdi

  *(this + 6) = 0;
  v2 = this + 8;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CNETMsg_SpawnGroup_LoadCompleted::MergePartialFromCodedStream  (line 8844, @0x0000000001a7ea30, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, set_has_spawngrouphandle
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CNETMsg_SpawnGroup_LoadCompleted::MergePartialFromCodedStream(
        CNETMsg_SpawnGroup_LoadCompleted *const this,
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


// CNETMsg_SpawnGroup_LoadCompleted::SerializeWithCachedSizes  (line 8890, @0x0000000001a78000, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::SerializeWithCachedSizes(
        const CNETMsg_SpawnGroup_LoadCompleted *const this,
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


// CNETMsg_SpawnGroup_LoadCompleted::SerializeWithCachedSizesToArray  (line 8905, @0x0000000001a797e0, libserver.so)  // inlines: WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
google::protobuf::uint8 *__fastcall CNETMsg_SpawnGroup_LoadCompleted::SerializeWithCachedSizesToArray(
        const CNETMsg_SpawnGroup_LoadCompleted *const this,
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


// CNETMsg_SpawnGroup_LoadCompleted::ByteSize  (line 8921, @0x0000000001a77930, libserver.so)  // inlines: UInt32Size, VarintSize32, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CNETMsg_SpawnGroup_LoadCompleted::ByteSize(const CNETMsg_SpawnGroup_LoadCompleted *const this)
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


// CNETMsg_SpawnGroup_LoadCompleted::MergeFrom  (line 8944, @0x0000000001a8a0b0, libserver.so)  // inlines: dynamic_cast_if_available<const CNETMsg_SpawnGroup_LoadCompleted*, const google::protobuf::Message*>
// calls: __dynamic_cast, CNETMsg_SpawnGroup_LoadCompleted::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CNETMsg_SpawnGroup_LoadCompleted
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::MergeFrom(
        CNETMsg_SpawnGroup_LoadCompleted *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CNETMsg_SpawnGroup_LoadCompleted *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      8945);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CNETMsg_SpawnGroup_LoadCompleted,
               0)) != 0 )
  {
    CNETMsg_SpawnGroup_LoadCompleted::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CNETMsg_SpawnGroup_LoadCompleted::MergeFrom  (line 8956, @0x0000000001a89f80, libserver.so)  // inlines: set_has_spawngrouphandle, set_spawngrouphandle
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CNETMsg_SpawnGroup_LoadCompleted::CNETMsg_SpawnGroup_LoadCompleted, CNETMsg_SpawnGroup_LoadCompleted::MergeFrom, CNETMsg_SpawnGroup_LoadCompleted::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::MergeFrom(
        CNETMsg_SpawnGroup_LoadCompleted *const this,
        const CNETMsg_SpawnGroup_LoadCompleted *const from)
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
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      8957);
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


// CNETMsg_SpawnGroup_LoadCompleted::CopyFrom  (line 8966, @0x0000000001a75f60, libserver.so)
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::CopyFrom(
        CNETMsg_SpawnGroup_LoadCompleted *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CNETMsg_SpawnGroup_LoadCompleted::CopyFrom  (line 8972, @0x0000000001a8a190, libserver.so)
// calls: CNETMsg_SpawnGroup_LoadCompleted::MergeFrom
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::CopyFrom(
        CNETMsg_SpawnGroup_LoadCompleted *const this,
        const CNETMsg_SpawnGroup_LoadCompleted *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CNETMsg_SpawnGroup_LoadCompleted::MergeFrom(this, from);
  }
}


// CNETMsg_SpawnGroup_LoadCompleted::IsInitialized  (line 8978, @0x0000000001a75fa0, libserver.so)
bool __fastcall CNETMsg_SpawnGroup_LoadCompleted::IsInitialized(const CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  return 1;
}


// CNETMsg_SpawnGroup_LoadCompleted::Swap  (line 8983, @0x0000000001a8a1d0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CNETMsg_SpawnGroup_LoadCompleted::Swap(
        CNETMsg_SpawnGroup_LoadCompleted *const this,
        CNETMsg_SpawnGroup_LoadCompleted *other)
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


// CNETMsg_SpawnGroup_LoadCompleted::GetMetadata  (line 8992, @0x0000000001a7b950, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_descriptor_, `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_reflection_
google::protobuf::Metadata __fastcall CNETMsg_SpawnGroup_LoadCompleted::GetMetadata(
        const CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_descriptor_;
  result.reflection = `anonymous namespace'::CNETMsg_SpawnGroup_LoadCompleted_reflection_;
  return result;
}


// CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration  (line 9024, @0x0000000001a8a430, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsg_GameSessionConfiguration::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CSVCMsg_GameSessionConfiguration::New, protobuf_AddDesc_networkbasetypes_2eproto, CSVCMsg_ServerInfo::MergeFrom, CSVCMsg_ServerInfo::MergePartialFromCodedStream, CLoopModeGame::LoopInit
void __fastcall CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration(
        CSVCMsg_GameSessionConfiguration *const this)
{
  *this = off_3F6F7D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CSVCMsg_GameSessionConfiguration::SharedCtor(this);
}


// CSVCMsg_GameSessionConfiguration::InitAsDefaultInstance  (line 9030, @0x0000000001a8a210, libserver.so)
void __fastcall CSVCMsg_GameSessionConfiguration::InitAsDefaultInstance(CSVCMsg_GameSessionConfiguration *const this)
{
  ;
}


// CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration  (line 9033, @0x0000000001a8cb70, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CSVCMsg_GameSessionConfiguration::SharedCtor, CSVCMsg_GameSessionConfiguration::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration(
        CSVCMsg_GameSessionConfiguration *const this,
        const CSVCMsg_GameSessionConfiguration *const from)
{
  *this = off_3F6F7D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CSVCMsg_GameSessionConfiguration::SharedCtor(this);
  CSVCMsg_GameSessionConfiguration::MergeFrom(this, from);
}


// CSVCMsg_GameSessionConfiguration::SharedCtor  (line 9040, @0x0000000001a8a220, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration
void __fastcall CSVCMsg_GameSessionConfiguration::SharedCtor(CSVCMsg_GameSessionConfiguration *const this)
{
  google::protobuf::Closure *v1; // rdx
  const std::string *v3; // r14
  std::string *v4; // r13
  const std::string *v5; // r14
  std::string *v6; // r13
  const std::string *v7; // r14
  std::string *v8; // r13
  const std::string *v9; // r14
  std::string *v10; // r13
  const std::string *v11; // r14
  std::string *v12; // r13
  const std::string *v13; // r14
  std::string *v14; // r13
  const std::string *v15; // r14
  std::string *v16; // r13
  const std::string *v17; // r13
  std::string *v18; // r12
  __int64 v19[2]; // [rsp+0h] [rbp-40h] BYREF
  char v20; // [rsp+10h] [rbp-30h]

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v20 = 0;
    v19[0] = off_47BFB70;
    v19[1] = google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, v19, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v19);
  }
  *(this + 24) = 0;
  *(this + 5) = 0;
  *(this + 25) = 0;
  *(this + 26) = 0;
  v3 = google::protobuf::internal::empty_string_;
  *(this + 27) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 20) = 0;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  v5 = google::protobuf::internal::empty_string_;
  *(this + 5) = v4;
  v6 = operator new(8u);
  std::string::string(v6, v5);
  v7 = google::protobuf::internal::empty_string_;
  *(this + 6) = v6;
  v8 = operator new(8u);
  std::string::string(v8, v7);
  v9 = google::protobuf::internal::empty_string_;
  *(this + 7) = v8;
  v10 = operator new(8u);
  std::string::string(v10, v9);
  v11 = google::protobuf::internal::empty_string_;
  *(this + 8) = v10;
  v12 = operator new(8u);
  std::string::string(v12, v11);
  v13 = google::protobuf::internal::empty_string_;
  *(this + 9) = v12;
  v14 = operator new(8u);
  std::string::string(v14, v13);
  v15 = google::protobuf::internal::empty_string_;
  *(this + 11) = v14;
  *(this + 84) = 0;
  *(this + 85) = 0;
  v16 = operator new(8u);
  std::string::string(v16, v15);
  *(this + 12) = v16;
  v17 = google::protobuf::internal::empty_string_;
  v18 = operator new(8u);
  std::string::string(v18, v17);
  *(this + 13) = v18;
  *(this + 4) = 0;
}


// CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration  (line 9064, @0x0000000001a8c710, libserver.so)
// calls: CSVCMsg_GameSessionConfiguration::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration, CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration>::~CBaseCmdKeyValues, GameSessionConfiguration_t::~GameSessionConfiguration_t
void __fastcall CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration(
        CSVCMsg_GameSessionConfiguration *const this)
{
  *this = off_3F6F7D0;
  CSVCMsg_GameSessionConfiguration::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration  (line 9064, @0x0000000001a8c750, libserver.so)
// calls: CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration, operator delete
void __fastcall CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration(
        CSVCMsg_GameSessionConfiguration *const this)
{
  CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration(this);
  operator delete(this);
}


// CSVCMsg_GameSessionConfiguration::SharedDtor  (line 9069, @0x0000000001a8c3e0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration
void __fastcall CSVCMsg_GameSessionConfiguration::SharedDtor(CSVCMsg_GameSessionConfiguration *const this)
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
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  int v41; // edx
  _BYTE v42[17]; // [rsp+Fh] [rbp-11h] BYREF

  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    v3 = *v2;
    v4 = *v2 - 24;
    if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v26 = _InterlockedExchangeAdd((v4 + 16), 0xFFFFFFFF);
      }
      else
      {
        v34 = *(v3 - 8);
        *(v3 - 8) = v34 - 1;
        v26 = v34;
      }
      if ( v26 <= 0 )
        std::string::_Rep::_M_destroy(v4, v42);
    }
    operator delete(v2);
  }
  v5 = *(this + 6);
  if ( v5 != 0 )
  {
    v6 = *v5;
    v7 = *v5 - 24;
    if ( v7 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v33 = _InterlockedExchangeAdd((v7 + 16), 0xFFFFFFFF);
      }
      else
      {
        v35 = *(v6 - 8);
        *(v6 - 8) = v35 - 1;
        v33 = v35;
      }
      if ( v33 <= 0 )
        std::string::_Rep::_M_destroy(v7, v42);
    }
    operator delete(v5);
  }
  v8 = *(this + 7);
  if ( v8 != 0 )
  {
    v9 = *v8;
    v10 = *v8 - 24;
    if ( v10 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v31 = _InterlockedExchangeAdd((v10 + 16), 0xFFFFFFFF);
      }
      else
      {
        v39 = *(v9 - 8);
        *(v9 - 8) = v39 - 1;
        v31 = v39;
      }
      if ( v31 <= 0 )
        std::string::_Rep::_M_destroy(v10, v42);
    }
    operator delete(v8);
  }
  v11 = *(this + 8);
  if ( v11 != 0 )
  {
    v12 = *v11;
    v13 = *v11 - 24;
    if ( v13 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v32 = _InterlockedExchangeAdd((v13 + 16), 0xFFFFFFFF);
      }
      else
      {
        v41 = *(v12 - 8);
        *(v12 - 8) = v41 - 1;
        v32 = v41;
      }
      if ( v32 <= 0 )
        std::string::_Rep::_M_destroy(v13, v42);
    }
    operator delete(v11);
  }
  v14 = *(this + 9);
  if ( v14 != 0 )
  {
    v15 = *v14;
    v16 = *v14 - 24;
    if ( v16 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v30 = _InterlockedExchangeAdd((v16 + 16), 0xFFFFFFFF);
      }
      else
      {
        v40 = *(v15 - 8);
        *(v15 - 8) = v40 - 1;
        v30 = v40;
      }
      if ( v30 <= 0 )
        std::string::_Rep::_M_destroy(v16, v42);
    }
    operator delete(v14);
  }
  v17 = *(this + 11);
  if ( v17 != 0 )
  {
    v18 = *v17;
    v19 = *v17 - 24;
    if ( v19 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v29 = _InterlockedExchangeAdd((v19 + 16), 0xFFFFFFFF);
      }
      else
      {
        v38 = *(v18 - 8);
        *(v18 - 8) = v38 - 1;
        v29 = v38;
      }
      if ( v29 <= 0 )
        std::string::_Rep::_M_destroy(v19, v42);
    }
    operator delete(v17);
  }
  v20 = *(this + 12);
  if ( v20 != 0 )
  {
    v21 = *v20;
    v22 = *v20 - 24;
    if ( v22 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v28 = _InterlockedExchangeAdd((v22 + 16), 0xFFFFFFFF);
      }
      else
      {
        v37 = *(v21 - 8);
        *(v21 - 8) = v37 - 1;
        v28 = v37;
      }
      if ( v28 <= 0 )
        std::string::_Rep::_M_destroy(v22, v42);
    }
    operator delete(v20);
  }
  v23 = *(this + 13);
  if ( v23 != 0 )
  {
    v24 = *v23;
    v25 = *v23 - 24;
    if ( v25 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v27 = _InterlockedExchangeAdd((v25 + 16), 0xFFFFFFFF);
      }
      else
      {
        v36 = *(v24 - 8);
        *(v24 - 8) = v36 - 1;
        v27 = v36;
      }
      if ( v27 <= 0 )
        std::string::_Rep::_M_destroy(v25, v42);
    }
    operator delete(v23);
  }
}


// CSVCMsg_GameSessionConfiguration::SetCachedSize  (line 9082, @0x0000000001a75fb0, libserver.so)
void __fastcall CSVCMsg_GameSessionConfiguration::SetCachedSize(
        const CSVCMsg_GameSessionConfiguration *const this,
        int size)
{
  *(this + 5) = size;
}


// CSVCMsg_GameSessionConfiguration::descriptor  (line 9087, @0x0000000001a8c770, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsg_GameSessionConfiguration_descriptor_
const google::protobuf::Descriptor *__cdecl CSVCMsg_GameSessionConfiguration::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CSVCMsg_GameSessionConfiguration_descriptor_;
}


// CSVCMsg_GameSessionConfiguration::default_instance  (line 9092, @0x0000000001a8c800, libserver.so)
// calls: protobuf_AddDesc_networkbasetypes_2eproto
// callers: CSVCMsg_ServerInfo::InitAsDefaultInstance, protobuf_AddDesc_netmessages_2eproto
// globals: CSVCMsg_GameSessionConfiguration::default_instance_
const CSVCMsg_GameSessionConfiguration *__cdecl CSVCMsg_GameSessionConfiguration::default_instance()
{
  const CSVCMsg_GameSessionConfiguration *result; // rax

  result = CSVCMsg_GameSessionConfiguration::default_instance_;
  if ( CSVCMsg_GameSessionConfiguration::default_instance_ == 0 )
  {
    protobuf_AddDesc_networkbasetypes_2eproto();
    return CSVCMsg_GameSessionConfiguration::default_instance_;
  }
  return result;
}


// CSVCMsg_GameSessionConfiguration::New  (line 9099, @0x0000000001a8a490, libserver.so)
// calls: operator new, CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration, operator delete, _Unwind_Resume
CSVCMsg_GameSessionConfiguration *__fastcall CSVCMsg_GameSessionConfiguration::New(
        const CSVCMsg_GameSessionConfiguration *const this)
{
  CSVCMsg_GameSessionConfiguration *v1; // rbx

  v1 = operator new(0x70u);
  CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration(v1);
  return v1;
}


// CSVCMsg_GameSessionConfiguration::Clear  (line 9103, @0x0000000001a77280, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
// callers: CSVCMsg_ServerInfo::Clear
void __fastcall CSVCMsg_GameSessionConfiguration::Clear(CSVCMsg_GameSessionConfiguration *const this)
{
  int v2; // eax
  bool v3; // zf

  v2 = *(this + 4);
  if ( v2 != 0 )
  {
    *(this + 3) = 0;
    *(this + 4) = 0;
    *(this + 20) = 0;
  }
  if ( BYTE1(v2) != 0 )
  {
    v2 = *(this + 4);
    *(this + 42) = 0;
    if ( (v2 & 0x100) != 0 )
    {
      std::string::_M_mutate(*(this + 5), 0, *(**(this + 5) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x200) != 0 )
    {
      std::string::_M_mutate(*(this + 6), 0, *(**(this + 6) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x400) != 0 )
    {
      std::string::_M_mutate(*(this + 7), 0, *(**(this + 7) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x800) != 0 )
    {
      std::string::_M_mutate(*(this + 8), 0, *(**(this + 8) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x1000) != 0 )
    {
      std::string::_M_mutate(*(this + 9), 0, *(**(this + 9) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x2000) != 0 )
    {
      std::string::_M_mutate(*(this + 11), 0, *(**(this + 11) - 24LL), 0);
      v2 = *(this + 4);
    }
  }
  if ( (v2 & 0x30000) != 0 )
  {
    if ( (v2 & 0x10000) == 0 )
    {
      if ( (v2 & 0x20000) == 0 )
        goto LABEL_7;
      goto LABEL_22;
    }
    std::string::_M_mutate(*(this + 12), 0, *(**(this + 12) - 24LL), 0);
    if ( (*(this + 4) & 0x20000) != 0 )
LABEL_22:
      std::string::_M_mutate(*(this + 13), 0, *(**(this + 13) - 24LL), 0);
  }
LABEL_7:
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CSVCMsg_GameSessionConfiguration::MergePartialFromCodedStream  (line 9155, @0x0000000001a7f1d0, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian32, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)7u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, memcpy, mutable_data, mutable_gamemode, mutable_hostname, mutable_landmarkname, mutable_previouslevel, mutable_s1_mapname, mutable_savegamename, mutable_server_ip_address, set_has_data, set_has_gamemode, set_has_hostname, set_has_is_background_map, set_has_is_headless, set_has_is_loadsavegame, set_has_is_localonly, set_has_is_multiplayer, set_has_is_transition, set_has_landmarkname, set_has_max_client_limit, set_has_max_clients, set_has_min_client_limit, set_has_previouslevel, set_has_s1_mapname, set_has_savegamename, set_has_server_ip_address, set_has_tick_interval
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadTagFallback(void)
// callers: CSVCMsg_ServerInfo::MergePartialFromCodedStream
// globals: jpt_1A7F240
bool __fastcall CSVCMsg_GameSessionConfiguration::MergePartialFromCodedStream(
        CSVCMsg_GameSessionConfiguration *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *current_limit; // rcx
  unsigned int *v4; // r14
  unsigned int v5; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *i; // rsi
  google::protobuf::uint32 TagFallback; // eax
  google::protobuf::uint8 *v10; // rdx
  const google::protobuf::uint8 *v11; // rdx
  unsigned __int64 v12; // rax
  bool result; // al
  const google::protobuf::uint8 *v14; // rdx
  unsigned __int64 v15; // rax
  const google::protobuf::uint8 *v16; // rax
  const google::protobuf::uint8 *v17; // rdx
  const google::protobuf::uint8 *v18; // rdx
  int v19; // eax
  int v20; // eax
  const google::protobuf::uint8 *v21; // rdx
  int v22; // eax
  const google::protobuf::uint8 *v23; // rdx
  unsigned __int64 v24; // rax
  const google::protobuf::uint8 *v25; // rdx
  const google::protobuf::uint8 *v26; // rax
  unsigned __int64 v27; // rdx
  const google::protobuf::uint8 *v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned int *v31; // [rsp+8h] [rbp-48h]
  unsigned __int64 v32[7]; // [rsp+18h] [rbp-38h] BYREF

  v4 = (this + 80);
  v5 = this + 8;
  v31 = (this + 36);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( 1 )
    {
      if ( i <= buffer )
        goto LABEL_158;
      TagFallback = *buffer;
      if ( TagFallback <= 0 )
        break;
      input->last_tag_ = TagFallback;
      input->buffer_ = buffer + 1;
LABEL_5:
      v10 = (TagFallback >> 3);
      switch ( v10 )
      {
        case 1:
          if ( TagFallback != 8 )
            goto handle_unusual;
          v26 = input->buffer_;
          if ( v26 >= input->buffer_end_ || ((v27 = *v26) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v32);
            if ( !result )
              return result;
            v27 = v32[0];
          }
          else
          {
            input->buffer_ = v26 + 1;
          }
          *(this + 24) = v27 != 0;
          *(this + 4) |= 1u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 16 )
            continue;
          v23 = buffer + 1;
          input->buffer_ = v23;
parse_is_loadsavegame:
          if ( i <= v23 || ((v24 = *v23) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v32);
            if ( !result )
              return result;
            v24 = v32[0];
          }
          else
          {
            input->buffer_ = v23 + 1;
          }
          *(this + 25) = v24 != 0;
          *(this + 4) |= 2u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 24 )
            continue;
          v25 = buffer + 1;
          input->buffer_ = v25;
parse_is_background_map:
          if ( v25 >= i || ((v30 = *v25) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v32);
            if ( !result )
              return result;
            v30 = v32[0];
          }
          else
          {
            input->buffer_ = v25 + 1;
          }
          *(this + 26) = v30 != 0;
          *(this + 4) |= 4u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 32 )
            continue;
          v28 = buffer + 1;
          input->buffer_ = v28;
parse_is_headless:
          if ( i <= v28 || ((v29 = *v28) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v32);
            if ( !result )
              return result;
            v29 = v32[0];
          }
          else
          {
            input->buffer_ = v28 + 1;
          }
          *(this + 27) = v29 != 0;
          *(this + 4) |= 8u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 40 )
            continue;
          v21 = buffer + 1;
          input->buffer_ = v21;
parse_min_client_limit:
          if ( i <= v21 || ((v22 = *v21) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 7) == 0 )
              return 0;
          }
          else
          {
            *(this + 7) = v22;
            ++input->buffer_;
          }
          *(this + 4) |= 0x10u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 48 )
            continue;
          v18 = buffer + 1;
          input->buffer_ = v18;
parse_max_client_limit:
          if ( v18 >= i || ((v19 = *v18) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 8) == 0 )
              return 0;
          }
          else
          {
            *(this + 8) = v19;
            ++input->buffer_;
          }
          *(this + 4) |= 0x20u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 56 )
            continue;
          v17 = buffer + 1;
          input->buffer_ = v17;
parse_max_clients:
          if ( v17 >= i || ((v20 = *v17) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v31) == 0 )
              return 0;
          }
          else
          {
            *(this + 9) = v20;
            ++input->buffer_;
          }
          *(this + 4) |= 0x40u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 69 )
            continue;
          v16 = buffer + 1;
          input->buffer_ = buffer + 1;
parse_tick_interval:
          if ( i - v16 <= 3 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v4) == 0 )
              return 0;
          }
          else
          {
            *v4 = *v16;
            input->buffer_ += 4;
          }
          *(this + 4) |= 0x80u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 74 )
            continue;
          v10 = (buffer + 1);
          input->buffer_ = v10;
parse_hostname:
          *(this + 4) |= 0x100u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 5), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 82 )
            continue;
          v10 = (buffer + 1);
          input->buffer_ = v10;
parse_savegamename:
          *(this + 4) |= 0x200u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 6), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 90 )
            continue;
          v10 = (buffer + 1);
          input->buffer_ = v10;
parse_s1_mapname:
          *(this + 4) |= 0x400u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 7), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 98 )
            continue;
          v10 = (buffer + 1);
          input->buffer_ = v10;
parse_gamemode:
          *(this + 4) |= 0x800u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 8), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 106 )
            continue;
          v10 = (buffer + 1);
          input->buffer_ = v10;
parse_server_ip_address:
          *(this + 4) |= 0x1000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 9), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 114 )
            continue;
          v10 = (buffer + 1);
          input->buffer_ = v10;
parse_data:
          *(this + 4) |= 0x2000u;
          if ( google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 11), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 120 )
            continue;
          v14 = buffer + 1;
          input->buffer_ = v14;
parse_is_localonly:
          if ( i <= v14 || ((v15 = *v14) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v32);
            if ( !result )
              return result;
            v15 = v32[0];
          }
          else
          {
            input->buffer_ = v14 + 1;
          }
          *(this + 84) = v15 != 0;
          *(this + 4) |= 0x4000u;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x80 || buffer[1] != 1 )
            continue;
          v11 = buffer + 2;
          input->buffer_ = v11;
parse_is_transition:
          if ( v11 >= i || ((v12 = *v11) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v32);
            if ( !result )
              return result;
            v12 = v32[0];
          }
          else
          {
            input->buffer_ = v11 + 1;
          }
          *(this + 85) = v12 != 0;
          *(this + 4) |= 0x8000u;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x8A || buffer[1] != 1 )
            continue;
          v10 = (buffer + 2);
          input->buffer_ = v10;
parse_previouslevel:
          *(this + 4) |= 0x10000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 12), v10) == 0 )
            return 0;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x92 || buffer[1] != 1 )
            continue;
          v10 = (buffer + 2);
          input->buffer_ = v10;
parse_landmarkname:
          *(this + 4) |= 0x20000u;
          result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 13), v10);
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
            goto handle_unusual;
          v23 = input->buffer_;
          i = input->buffer_end_;
          goto parse_is_loadsavegame;
        case 3:
          if ( TagFallback != 24 )
            goto handle_unusual;
          v25 = input->buffer_;
          i = input->buffer_end_;
          goto parse_is_background_map;
        case 4:
          if ( TagFallback != 32 )
            goto handle_unusual;
          v28 = input->buffer_;
          i = input->buffer_end_;
          goto parse_is_headless;
        case 5:
          if ( TagFallback != 40 )
            goto handle_unusual;
          v21 = input->buffer_;
          i = input->buffer_end_;
          goto parse_min_client_limit;
        case 6:
          if ( TagFallback != 48 )
            goto handle_unusual;
          v18 = input->buffer_;
          i = input->buffer_end_;
          goto parse_max_client_limit;
        case 7:
          if ( TagFallback != 56 )
            goto handle_unusual;
          v17 = input->buffer_;
          i = input->buffer_end_;
          goto parse_max_clients;
        case 8:
          if ( TagFallback != 69 )
            goto handle_unusual;
          v16 = input->buffer_;
          i = input->buffer_end_;
          goto parse_tick_interval;
        case 9:
          if ( TagFallback != 74 )
            goto handle_unusual;
          goto parse_hostname;
        case 10:
          if ( TagFallback != 82 )
            goto handle_unusual;
          goto parse_savegamename;
        case 11:
          if ( TagFallback != 90 )
            goto handle_unusual;
          goto parse_s1_mapname;
        case 12:
          if ( TagFallback != 98 )
            goto handle_unusual;
          goto parse_gamemode;
        case 13:
          if ( TagFallback != 106 )
            goto handle_unusual;
          goto parse_server_ip_address;
        case 14:
          if ( TagFallback != 114 )
            goto handle_unusual;
          goto parse_data;
        case 15:
          if ( TagFallback != 120 )
            goto handle_unusual;
          v14 = input->buffer_;
          i = input->buffer_end_;
          goto parse_is_localonly;
        case 16:
          if ( TagFallback != 128 )
            goto handle_unusual;
          v11 = input->buffer_;
          i = input->buffer_end_;
          goto parse_is_transition;
        case 17:
          if ( TagFallback == 138 )
            goto parse_previouslevel;
          if ( TagFallback == 0 )
            return 1;
          goto LABEL_8;
        case 18:
          if ( TagFallback != 146 )
            goto handle_unusual;
          goto parse_landmarkname;
        default:
          goto handle_unusual;
      }
    }
    if ( i > buffer + 1 && (*buffer & ~buffer[1]) > 0x7Fu )
    {
      TagFallback = TagFallback + (buffer[1] << 7) - 128;
      input->buffer_ = buffer + 2;
      input->last_tag_ = TagFallback;
      goto LABEL_5;
    }
LABEL_158:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x3FFE )
      goto LABEL_5;
handle_unusual:
    if ( TagFallback == 0 )
      return 1;
LABEL_8:
    if ( (TagFallback & 7) == 4 )
      break;
    if ( google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v5, current_limit) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CSVCMsg_GameSessionConfiguration::SerializeWithCachedSizes  (line 9468, @0x0000000001a78770, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CSVCMsg_GameSessionConfiguration::SerializeWithCachedSizes(
        const CSVCMsg_GameSessionConfiguration *const this,
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
      goto LABEL_24;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2, *(this + 25), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_25;
  }
LABEL_24:
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 1, *(this + 26), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_26;
  }
LABEL_25:
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 2, *(this + 27), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_27;
  }
LABEL_26:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 3, *(this + 7), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_28;
  }
LABEL_27:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6, *(this + 8), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_9;
    goto LABEL_29;
  }
LABEL_28:
  google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6 + 1, *(this + 9), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x80u) == 0 )
  {
LABEL_9:
    if ( (v6 & 0x100) == 0 )
      goto LABEL_10;
    goto LABEL_30;
  }
LABEL_29:
  google::protobuf::internal::WireFormatLite::WriteFixed32(&stru_8, *(this + 20), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x100) == 0 )
  {
LABEL_10:
    if ( (v6 & 0x200) == 0 )
      goto LABEL_11;
    goto LABEL_31;
  }
LABEL_30:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_9, *(this + 5), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x200) == 0 )
  {
LABEL_11:
    if ( (v6 & 0x400) == 0 )
      goto LABEL_12;
    goto LABEL_32;
  }
LABEL_31:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_A, *(this + 6), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x400) == 0 )
  {
LABEL_12:
    if ( (v6 & 0x800) == 0 )
      goto LABEL_13;
    goto LABEL_33;
  }
LABEL_32:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_B, *(this + 7), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x800) == 0 )
  {
LABEL_13:
    if ( (v6 & 0x1000) == 0 )
      goto LABEL_14;
    goto LABEL_34;
  }
LABEL_33:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_C, *(this + 8), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x1000) == 0 )
  {
LABEL_14:
    if ( (v6 & 0x2000) == 0 )
      goto LABEL_15;
    goto LABEL_35;
  }
LABEL_34:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_D, *(this + 9), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x2000) == 0 )
  {
LABEL_15:
    if ( (v6 & 0x4000) == 0 )
      goto LABEL_16;
    goto LABEL_36;
  }
LABEL_35:
  google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&stru_E, *(this + 11), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x4000) == 0 )
  {
LABEL_16:
    if ( (v6 & 0x8000) == 0 )
      goto LABEL_17;
    goto LABEL_37;
  }
LABEL_36:
  google::protobuf::internal::WireFormatLite::WriteBool(&stru_F, *(this + 84), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x8000) == 0 )
  {
LABEL_17:
    if ( (v6 & 0x10000) == 0 )
      goto LABEL_18;
    goto LABEL_38;
  }
LABEL_37:
  google::protobuf::internal::WireFormatLite::WriteBool(&stru_10, *(this + 85), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x10000) == 0 )
  {
LABEL_18:
    if ( (v6 & 0x20000) == 0 )
      goto LABEL_19;
LABEL_39:
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 2,
      *(this + 13),
      output,
      v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_20;
  }
LABEL_38:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
    &stru_10.CThreadLockableObject<CThreadNullMutex> + 1,
    *(this + 12),
    output,
    v3);
  if ( (*(this + 4) & 0x20000) != 0 )
    goto LABEL_39;
LABEL_19:
  v7 = *(this + 1);
  if ( v7 == 0 )
    return;
LABEL_20:
  if ( v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CSVCMsg_GameSessionConfiguration::SerializeWithCachedSizesToArray  (line 9604, @0x0000000001a7a810, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteBytesToArray, WriteFixed32NoTagToArray, WriteFixed32ToArray, WriteLittleEndian32ToArray, WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CSVCMsg_ServerInfo::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CSVCMsg_GameSessionConfiguration::SerializeWithCachedSizesToArray(
        const CSVCMsg_GameSessionConfiguration *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::uint8 v5; // dl
  google::protobuf::uint8 v6; // dl
  google::protobuf::uint8 v7; // dl
  google::protobuf::uint8 v8; // dl
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::io::CodedOutputStream *v10; // rdi
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // edx
  google::protobuf::io::CodedOutputStream *v13; // rdi
  google::protobuf::io::CodedOutputStream *v14; // rdi
  google::protobuf::io::CodedOutputStream *v15; // rdi
  google::protobuf::io::CodedOutputStream *v16; // rdi
  google::protobuf::io::CodedOutputStream *v17; // rdi
  google::protobuf::io::CodedOutputStream *v18; // rdi
  google::protobuf::uint8 v19; // dl
  google::protobuf::uint8 v20; // dl
  google::protobuf::io::CodedOutputStream *v21; // rdi
  unsigned __int8 *v22; // rdx
  google::protobuf::io::CodedOutputStream *v23; // rdi
  __int64 v24; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 24);
    *target = 8;
    result = target + 2;
    target[1] = v5;
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v6 = *(this + 25);
    *result = 16;
    result += 2;
    *(result - 1) = v6;
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v7 = *(this + 26);
    *result = 24;
    result += 2;
    *(result - 1) = v7;
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v8 = *(this + 27);
    *result = 32;
    result += 2;
    *(result - 1) = v8;
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v9 = *(this + 7);
    *result = 40;
    if ( v9 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, result + 1, v4);
    }
    else
    {
      result[1] = v9;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v10 = *(this + 8);
    *result = 48;
    if ( v10 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v10, result + 1, v4);
    }
    else
    {
      result[1] = v10;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x40) != 0 )
  {
    v11 = *(this + 9);
    *result = 56;
    if ( v11 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v11, result + 1, v4);
    }
    else
    {
      result[1] = v11;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( v4 < 0 )
  {
    v12 = *(this + 20);
    *result = 69;
    result += 5;
    *(result - 1) = v12;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 1) != 0 )
  {
    v13 = *(this + 5);
    *result = 74;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v13, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 2) != 0 )
  {
    v14 = *(this + 6);
    *result = 82;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v14, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 4) != 0 )
  {
    v15 = *(this + 7);
    *result = 90;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v15, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 8) != 0 )
  {
    v16 = *(this + 8);
    *result = 98;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v16, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x10) != 0 )
  {
    v17 = *(this + 9);
    *result = 106;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v17, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x20) != 0 )
  {
    v18 = *(this + 11);
    *result = 114;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v18, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x40) != 0 )
  {
    v19 = *(this + 84);
    *result = 120;
    result += 2;
    *(result - 1) = v19;
    v4 = *(this + 4);
  }
  if ( SBYTE1(v4) < 0 )
  {
    v20 = *(this + 85);
    *result = 0x80;
    result += 3;
    *(result - 2) = 1;
    *(result - 1) = v20;
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10000) != 0 )
  {
    v21 = *(this + 12);
    *result = -118;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v21, (result + 2), v4);
    LODWORD(v4) = *(this + 4);
  }
  v22 = (v4 & 0x20000);
  if ( v22 != 0 )
  {
    v23 = *(this + 13);
    *result = -110;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v23, (result + 2), v22);
  }
  v24 = *(this + 1);
  if ( v24 != 0 && *(v24 + 8) != *v24 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v24);
  return result;
}


// CSVCMsg_GameSessionConfiguration::ByteSize  (line 9749, @0x0000000001a7c040, libserver.so)  // inlines: BytesSize, StringSize, UInt32Size, VarintSize32, empty, has_is_multiplayer, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CSVCMsg_ServerInfo::ByteSize
int __fastcall CSVCMsg_GameSessionConfiguration::ByteSize(const CSVCMsg_GameSessionConfiguration *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // edx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  google::protobuf::io::CodedOutputStream *v6; // rdi
  __int64 v7; // rax
  google::protobuf::io::CodedOutputStream *v9; // rdi
  _QWORD *v10; // r13
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  int v13; // edx
  _QWORD *v14; // r13
  google::protobuf::io::CodedOutputStream *v15; // rdi
  int v16; // eax
  int v17; // ecx
  _QWORD *v18; // r13
  google::protobuf::io::CodedOutputStream *v19; // rdi
  int v20; // eax
  int v21; // ecx
  _QWORD *v22; // r13
  google::protobuf::io::CodedOutputStream *v23; // rdi
  int v24; // eax
  int v25; // ecx
  _QWORD *v26; // r13
  google::protobuf::io::CodedOutputStream *v27; // rdi
  int v28; // eax
  int v29; // ecx
  _QWORD *v30; // r13
  google::protobuf::io::CodedOutputStream *v31; // rdi
  int v32; // eax
  int v33; // ecx
  _QWORD *v34; // r13
  google::protobuf::io::CodedOutputStream *v35; // rdi
  int v36; // eax
  int v37; // ecx
  _QWORD *v38; // r13
  google::protobuf::io::CodedOutputStream *v39; // rdi
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = -(*(this + 4) & 1) & 2;
    if ( (v4 & 2) != 0 )
      v3 += 2;
    if ( (v4 & 4) != 0 )
      v3 += 2;
    if ( (v4 & 8) != 0 )
      v3 += 2;
    if ( (v4 & 0x10) != 0 )
    {
      v5 = *(this + 7);
      if ( v5 > 0x7F )
      {
        v43 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
        v4 = *(this + 4);
        v3 += v43 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v4 & 0x20) != 0 )
    {
      v6 = *(this + 8);
      if ( v6 > 0x7F )
      {
        v44 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v4 = *(this + 4);
        v3 += v44 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v4 & 0x40) != 0 )
    {
      v9 = *(this + 9);
      if ( v9 > 0x7F )
      {
        v42 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, v1);
        v4 = *(this + 4);
        v3 += v42 + 1;
      }
      else
      {
        v3 += 2;
      }
    }
    if ( (v4 & 0x80u) != 0 )
      v3 += 5;
  }
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      v14 = *(this + 5);
      v15 = *(*v14 - 24LL);
      v16 = 1;
      v17 = v15;
      if ( v15 > 0x7F )
      {
        v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v15, v1);
        v17 = *(*v14 - 24LL);
        v4 = *(this + 4);
      }
      v3 += v16 + v17 + 1;
      if ( (v4 & 0x200) == 0 )
      {
LABEL_20:
        if ( (v4 & 0x400) == 0 )
          goto LABEL_21;
        goto LABEL_46;
      }
    }
    else if ( (v4 & 0x200) == 0 )
    {
      goto LABEL_20;
    }
    v18 = *(this + 6);
    v19 = *(*v18 - 24LL);
    v20 = 1;
    v21 = v19;
    if ( v19 > 0x7F )
    {
      v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v19, v1);
      v21 = *(*v18 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v20 + v21 + 1;
    if ( (v4 & 0x400) == 0 )
    {
LABEL_21:
      if ( (v4 & 0x800) == 0 )
        goto LABEL_22;
      goto LABEL_49;
    }
LABEL_46:
    v22 = *(this + 7);
    v23 = *(*v22 - 24LL);
    v24 = 1;
    v25 = v23;
    if ( v23 > 0x7F )
    {
      v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v23, v1);
      v25 = *(*v22 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v24 + v25 + 1;
    if ( (v4 & 0x800) == 0 )
    {
LABEL_22:
      if ( (v4 & 0x1000) == 0 )
        goto LABEL_23;
      goto LABEL_52;
    }
LABEL_49:
    v26 = *(this + 8);
    v27 = *(*v26 - 24LL);
    v28 = 1;
    v29 = v27;
    if ( v27 > 0x7F )
    {
      v28 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v27, v1);
      v29 = *(*v26 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v28 + v29 + 1;
    if ( (v4 & 0x1000) == 0 )
    {
LABEL_23:
      if ( (v4 & 0x2000) == 0 )
      {
LABEL_24:
        if ( (v4 & 0x4000) != 0 )
          v3 += 2;
        if ( (v4 & 0x8000) != 0 )
          v3 += 3;
        goto LABEL_28;
      }
LABEL_55:
      v34 = *(this + 11);
      v35 = *(*v34 - 24LL);
      v36 = 1;
      v37 = v35;
      if ( v35 > 0x7F )
      {
        v36 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v35, v1);
        v37 = *(*v34 - 24LL);
        v4 = *(this + 4);
      }
      v3 += v36 + v37 + 1;
      goto LABEL_24;
    }
LABEL_52:
    v30 = *(this + 9);
    v31 = *(*v30 - 24LL);
    v32 = 1;
    v33 = v31;
    if ( v31 > 0x7F )
    {
      v32 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v31, v1);
      v33 = *(*v30 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v32 + v33 + 1;
    if ( (v4 & 0x2000) == 0 )
      goto LABEL_24;
    goto LABEL_55;
  }
LABEL_28:
  if ( (v4 & 0xFF0000) == 0 )
    goto LABEL_31;
  if ( (v4 & 0x10000) == 0 )
  {
    if ( (v4 & 0x20000) == 0 )
      goto LABEL_31;
    goto LABEL_37;
  }
  v38 = *(this + 12);
  v39 = *(*v38 - 24LL);
  v40 = 1;
  v41 = v39;
  if ( v39 > 0x7F )
  {
    v40 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v39, v1);
    v41 = *(*v38 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v40 + v41 + 2;
  if ( (v4 & 0x20000) != 0 )
  {
LABEL_37:
    v10 = *(this + 13);
    v11 = *(*v10 - 24LL);
    v12 = 1;
    v13 = v11;
    if ( v11 > 0x7F )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
      v13 = *(*v10 - 24LL);
    }
    v3 += v12 + v13 + 2;
  }
LABEL_31:
  v7 = *(this + 1);
  if ( v7 != 0 && *(v7 + 8) != *v7 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v7);
  *(this + 5) = v3;
  return v3;
}


// CSVCMsg_GameSessionConfiguration::MergeFrom  (line 9881, @0x0000000001a8cbe0, libserver.so)  // inlines: dynamic_cast_if_available<const CSVCMsg_GameSessionConfiguration*, const google::protobuf::Message*>
// calls: __dynamic_cast, CSVCMsg_GameSessionConfiguration::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CSVCMsg_GameSessionConfiguration
void __fastcall CSVCMsg_GameSessionConfiguration::MergeFrom(
        CSVCMsg_GameSessionConfiguration *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CSVCMsg_GameSessionConfiguration *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      9882);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CSVCMsg_GameSessionConfiguration,
               0)) != 0 )
  {
    CSVCMsg_GameSessionConfiguration::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CSVCMsg_GameSessionConfiguration::MergeFrom  (line 9893, @0x0000000001a8c830, libserver.so)  // inlines: set_data, set_gamemode, set_has_data, set_has_gamemode, set_has_hostname, set_has_is_background_map, set_has_is_headless, set_has_is_loadsavegame, set_has_is_localonly, set_has_is_multiplayer, set_has_is_transition, set_has_landmarkname, set_has_max_client_limit, set_has_max_clients, set_has_min_client_limit, set_has_previouslevel, set_has_s1_mapname, set_has_savegamename, set_has_server_ip_address, set_has_tick_interval, set_hostname, set_is_background_map, set_is_headless, set_is_loadsavegame, set_is_localonly, set_is_multiplayer, set_is_transition, set_landmarkname, set_max_client_limit, set_max_clients, set_min_client_limit, set_previouslevel, set_s1_mapname, set_savegamename, set_server_ip_address, set_tick_interval
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CSVCMsg_GameSessionConfiguration::CSVCMsg_GameSessionConfiguration, CSVCMsg_GameSessionConfiguration::MergeFrom, CSVCMsg_GameSessionConfiguration::CopyFrom, CSVCMsg_ServerInfo::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CSVCMsg_GameSessionConfiguration::MergeFrom(
        CSVCMsg_GameSessionConfiguration *const this,
        const CSVCMsg_GameSessionConfiguration *const from)
{
  int v4; // eax
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // al
  char v13; // al
  int v14; // eax
  const std::string *v15; // rsi
  std::string *v16; // rdi
  const std::string *v17; // rsi
  std::string *v18; // rdi
  const std::string *v19; // rsi
  std::string *v20; // rdi
  const std::string *v21; // rsi
  std::string *v22; // rdi
  const std::string *v23; // rsi
  std::string *v24; // rdi
  const std::string *v25; // rsi
  std::string *v26; // rdi
  const std::string *v27; // rsi
  std::string *v28; // rdi
  const std::string *v29; // rsi
  std::string *v30; // rdi
  __int64 v31; // rax
  char v32; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v33; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v33,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/networkbasetypes.pb.cc",
      9894);
    v31 = google::protobuf::internal::LogMessage::operator<<(&v33, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v32, v31);
    google::protobuf::internal::LogMessage::~LogMessage(&v33);
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
      v6 = *(from + 25);
      *(this + 4) |= 2u;
      *(this + 25) = v6;
      v4 = *(from + 4);
    }
    if ( (v4 & 4) != 0 )
    {
      v7 = *(from + 26);
      *(this + 4) |= 4u;
      *(this + 26) = v7;
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      v8 = *(from + 27);
      *(this + 4) |= 8u;
      *(this + 27) = v8;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v9 = *(from + 7);
      *(this + 4) |= 0x10u;
      *(this + 7) = v9;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x20) != 0 )
    {
      v10 = *(from + 8);
      *(this + 4) |= 0x20u;
      *(this + 8) = v10;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x40) != 0 )
    {
      v11 = *(from + 9);
      *(this + 4) |= 0x40u;
      *(this + 9) = v11;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v14 = *(from + 20);
      *(this + 4) |= 0x80u;
      *(this + 20) = v14;
      v4 = *(from + 4);
    }
  }
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      v27 = *(from + 5);
      v28 = *(this + 5);
      *(this + 4) |= 0x100u;
      std::string::assign(v28, v27);
      v4 = *(from + 4);
      if ( (v4 & 0x200) == 0 )
      {
LABEL_23:
        if ( (v4 & 0x400) == 0 )
          goto LABEL_24;
        goto LABEL_39;
      }
    }
    else if ( (v4 & 0x200) == 0 )
    {
      goto LABEL_23;
    }
    v19 = *(from + 6);
    v20 = *(this + 6);
    *(this + 4) |= 0x200u;
    std::string::assign(v20, v19);
    v4 = *(from + 4);
    if ( (v4 & 0x400) == 0 )
    {
LABEL_24:
      if ( (v4 & 0x800) == 0 )
        goto LABEL_25;
      goto LABEL_40;
    }
LABEL_39:
    v21 = *(from + 7);
    v22 = *(this + 7);
    *(this + 4) |= 0x400u;
    std::string::assign(v22, v21);
    v4 = *(from + 4);
    if ( (v4 & 0x800) == 0 )
    {
LABEL_25:
      if ( (v4 & 0x1000) == 0 )
        goto LABEL_26;
      goto LABEL_41;
    }
LABEL_40:
    v23 = *(from + 8);
    v24 = *(this + 8);
    *(this + 4) |= 0x800u;
    std::string::assign(v24, v23);
    v4 = *(from + 4);
    if ( (v4 & 0x1000) == 0 )
    {
LABEL_26:
      if ( (v4 & 0x2000) == 0 )
        goto LABEL_27;
      goto LABEL_45;
    }
LABEL_41:
    v25 = *(from + 9);
    v26 = *(this + 9);
    *(this + 4) |= 0x1000u;
    std::string::assign(v26, v25);
    v4 = *(from + 4);
    if ( (v4 & 0x2000) == 0 )
    {
LABEL_27:
      if ( (v4 & 0x4000) == 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
LABEL_45:
    v29 = *(from + 11);
    v30 = *(this + 11);
    *(this + 4) |= 0x2000u;
    std::string::assign(v30, v29);
    v4 = *(from + 4);
    if ( (v4 & 0x4000) == 0 )
    {
LABEL_29:
      if ( (v4 & 0x8000) != 0 )
      {
        v13 = *(from + 85);
        *(this + 4) |= 0x8000u;
        *(this + 85) = v13;
        v4 = *(from + 4);
      }
      goto LABEL_31;
    }
LABEL_28:
    v12 = *(from + 84);
    *(this + 4) |= 0x4000u;
    *(this + 84) = v12;
    v4 = *(from + 4);
    goto LABEL_29;
  }
LABEL_31:
  if ( (v4 & 0xFF0000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v17 = *(from + 12);
      v18 = *(this + 12);
      *(this + 4) |= 0x10000u;
      std::string::assign(v18, v17);
      if ( (*(from + 4) & 0x20000) == 0 )
        goto LABEL_34;
    }
    else if ( (v4 & 0x20000) == 0 )
    {
      goto LABEL_34;
    }
    v15 = *(from + 13);
    v16 = *(this + 13);
    *(this + 4) |= 0x20000u;
    std::string::assign(v16, v15);
  }
LABEL_34:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CSVCMsg_GameSessionConfiguration::CopyFrom  (line 9958, @0x0000000001a75fc0, libserver.so)
void __fastcall CSVCMsg_GameSessionConfiguration::CopyFrom(
        CSVCMsg_GameSessionConfiguration *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CSVCMsg_GameSessionConfiguration::CopyFrom  (line 9964, @0x0000000001a8ccc0, libserver.so)
// calls: CSVCMsg_GameSessionConfiguration::MergeFrom
void __fastcall CSVCMsg_GameSessionConfiguration::CopyFrom(
        CSVCMsg_GameSessionConfiguration *const this,
        const CSVCMsg_GameSessionConfiguration *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CSVCMsg_GameSessionConfiguration::MergeFrom(this, from);
  }
}


// CSVCMsg_GameSessionConfiguration::IsInitialized  (line 9970, @0x0000000001a76000, libserver.so)
bool __fastcall CSVCMsg_GameSessionConfiguration::IsInitialized(const CSVCMsg_GameSessionConfiguration *const this)
{
  return 1;
}


// CSVCMsg_GameSessionConfiguration::Swap  (line 9975, @0x0000000001a8cd00, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CSVCMsg_GameSessionConfiguration::Swap(
        CSVCMsg_GameSessionConfiguration *const this,
        CSVCMsg_GameSessionConfiguration *other)
{
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax

  if ( other != this )
  {
    v2 = *(this + 24);
    *(this + 24) = *(other + 24);
    *(other + 24) = v2;
    v3 = *(this + 25);
    *(this + 25) = *(other + 25);
    *(other + 25) = v3;
    v4 = *(this + 26);
    *(this + 26) = *(other + 26);
    *(other + 26) = v4;
    v5 = *(this + 27);
    *(this + 27) = *(other + 27);
    *(other + 27) = v5;
    v6 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v6;
    v7 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v7;
    v8 = *(this + 9);
    *(this + 9) = *(other + 9);
    *(other + 9) = v8;
    v9 = *(this + 20);
    *(this + 20) = *(other + 20);
    *(other + 20) = v9;
    v10 = *(this + 5);
    *(this + 5) = *(other + 5);
    v11 = *(other + 6);
    *(other + 5) = v10;
    v12 = *(this + 6);
    *(this + 6) = v11;
    v13 = *(other + 7);
    *(other + 6) = v12;
    v14 = *(this + 7);
    *(this + 7) = v13;
    v15 = *(other + 8);
    *(other + 7) = v14;
    v16 = *(this + 8);
    *(this + 8) = v15;
    v17 = *(other + 9);
    *(other + 8) = v16;
    v18 = *(this + 9);
    *(this + 9) = v17;
    v19 = *(other + 11);
    *(other + 9) = v18;
    v20 = *(this + 11);
    *(this + 11) = v19;
    LOBYTE(v19) = *(other + 84);
    *(other + 11) = v20;
    LOBYTE(v20) = *(this + 84);
    *(this + 84) = v19;
    LOBYTE(v19) = *(other + 85);
    *(other + 84) = v20;
    LOBYTE(v20) = *(this + 85);
    *(this + 85) = v19;
    v21 = *(other + 12);
    *(other + 85) = v20;
    v22 = *(this + 12);
    *(this + 12) = v21;
    v23 = *(other + 13);
    *(other + 12) = v22;
    v24 = *(this + 13);
    *(this + 13) = v23;
    LODWORD(v23) = *(other + 4);
    *(other + 13) = v24;
    LODWORD(v24) = *(this + 4);
    *(this + 4) = v23;
    v25 = *(other + 1);
    *(other + 4) = v24;
    v26 = *(this + 1);
    *(this + 1) = v25;
    LODWORD(v25) = *(other + 5);
    *(other + 1) = v26;
    LODWORD(v26) = *(this + 5);
    *(this + 5) = v25;
    *(other + 5) = v26;
  }
}


// CSVCMsg_GameSessionConfiguration::GetMetadata  (line 10001, @0x0000000001a7aa50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_networkbasetypes_2eproto(void), `anonymous namespace'::CSVCMsg_GameSessionConfiguration_descriptor_, `anonymous namespace'::CSVCMsg_GameSessionConfiguration_reflection_
google::protobuf::Metadata __fastcall CSVCMsg_GameSessionConfiguration::GetMetadata(
        const CSVCMsg_GameSessionConfiguration *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_networkbasetypes_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CSVCMsg_GameSessionConfiguration_descriptor_;
  result.reflection = `anonymous namespace'::CSVCMsg_GameSessionConfiguration_reflection_;
  return result;
}


