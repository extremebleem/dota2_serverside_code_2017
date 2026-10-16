// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.cc:698
struct StaticDescriptorInitializer_demo_2eproto {
	StaticDescriptorInitializer_demo_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_demo_2eproto  (line 99, @0x0000000001b4d3c0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_demo_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "demo.proto", "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CDemoFileHeader_descriptor_, CDemoFileHeader::default_instance_, protobuf_AssignDesc_demo_2eproto(void)::CDemoFileHeader_offsets_, `anonymous namespace'::CDemoFileHeader_reflection_, `anonymous namespace'::CGameInfo_descriptor_, CGameInfo::default_instance_, protobuf_AssignDesc_demo_2eproto(void)::CGameInfo_offsets_, `anonymous namespace'::CGameInfo_reflection_ (40 total)
void __cdecl protobuf_AssignDesc_demo_2eproto()
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
  const google::protobuf::Descriptor *v29; // rax
  google::protobuf::DescriptorPool *v30; // rdi
  const google::protobuf::DescriptorPool *v31; // r13
  google::protobuf::MessageFactory *v32; // rdi
  google::protobuf::MessageFactory *v33; // r14
  google::protobuf::internal::GeneratedMessageReflection *v34; // r12
  const google::protobuf::Descriptor *v35; // rax
  google::protobuf::DescriptorPool *v36; // rdi
  const google::protobuf::DescriptorPool *v37; // r13
  google::protobuf::MessageFactory *v38; // rdi
  google::protobuf::MessageFactory *v39; // r14
  google::protobuf::internal::GeneratedMessageReflection *v40; // r12
  const google::protobuf::Descriptor *v41; // rax
  google::protobuf::DescriptorPool *v42; // rdi
  const google::protobuf::DescriptorPool *v43; // r13
  google::protobuf::MessageFactory *v44; // rdi
  google::protobuf::MessageFactory *v45; // r14
  google::protobuf::internal::GeneratedMessageReflection *v46; // r12
  const google::protobuf::Descriptor *v47; // rax
  google::protobuf::DescriptorPool *v48; // rdi
  const google::protobuf::DescriptorPool *v49; // r13
  google::protobuf::MessageFactory *v50; // rdi
  google::protobuf::MessageFactory *v51; // r14
  google::protobuf::internal::GeneratedMessageReflection *v52; // r12
  const google::protobuf::Descriptor *v53; // rax
  google::protobuf::DescriptorPool *v54; // rdi
  const google::protobuf::DescriptorPool *v55; // r13
  google::protobuf::MessageFactory *v56; // rdi
  google::protobuf::MessageFactory *v57; // r14
  google::protobuf::internal::GeneratedMessageReflection *v58; // r12
  const google::protobuf::Descriptor *v59; // rax
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
  google::protobuf::DescriptorPool *v77; // rdi
  const google::protobuf::DescriptorPool *v78; // r13
  google::protobuf::MessageFactory *v79; // rdi
  google::protobuf::MessageFactory *v80; // r14
  google::protobuf::internal::GeneratedMessageReflection *v81; // r12
  const google::protobuf::Descriptor *v82; // rax
  google::protobuf::DescriptorPool *v83; // rdi
  const google::protobuf::DescriptorPool *v84; // r13
  google::protobuf::MessageFactory *v85; // rdi
  google::protobuf::MessageFactory *v86; // r14
  google::protobuf::internal::GeneratedMessageReflection *v87; // r12
  const google::protobuf::Descriptor *v88; // rax
  google::protobuf::DescriptorPool *v89; // rdi
  const google::protobuf::DescriptorPool *v90; // r13
  google::protobuf::MessageFactory *v91; // rdi
  google::protobuf::MessageFactory *v92; // r14
  google::protobuf::internal::GeneratedMessageReflection *v93; // r12
  const google::protobuf::Descriptor *v94; // rax
  google::protobuf::DescriptorPool *v95; // rdi
  const google::protobuf::DescriptorPool *v96; // r13
  google::protobuf::MessageFactory *v97; // rdi
  google::protobuf::MessageFactory *v98; // r14
  google::protobuf::internal::GeneratedMessageReflection *v99; // r12
  google::protobuf::DescriptorPool *v100; // rdi
  const google::protobuf::DescriptorPool *v101; // r13
  google::protobuf::MessageFactory *v102; // rdi
  google::protobuf::MessageFactory *v103; // r14
  google::protobuf::internal::GeneratedMessageReflection *v104; // r12
  google::protobuf::DescriptorPool *v105; // rdi
  const google::protobuf::DescriptorPool *v106; // r13
  google::protobuf::MessageFactory *v107; // rdi
  google::protobuf::MessageFactory *v108; // r14
  google::protobuf::internal::GeneratedMessageReflection *v109; // r12
  const google::protobuf::Descriptor *v110; // rax
  google::protobuf::DescriptorPool *v111; // rdi
  const google::protobuf::DescriptorPool *v112; // r13
  google::protobuf::MessageFactory *v113; // rdi
  google::protobuf::MessageFactory *v114; // r14
  google::protobuf::internal::GeneratedMessageReflection *v115; // r12
  const google::protobuf::Descriptor *v116; // rax
  google::protobuf::DescriptorPool *v117; // rdi
  const google::protobuf::DescriptorPool *v118; // r13
  google::protobuf::MessageFactory *v119; // rdi
  google::protobuf::MessageFactory *v120; // r14
  google::protobuf::internal::GeneratedMessageReflection *v121; // r12
  const google::protobuf::Descriptor *v122; // rax
  google::protobuf::DescriptorPool *v123; // rdi
  const google::protobuf::DescriptorPool *v124; // r13
  google::protobuf::MessageFactory *v125; // rdi
  google::protobuf::MessageFactory *v126; // r14
  google::protobuf::internal::GeneratedMessageReflection *v127; // r12
  const google::protobuf::EnumDescriptor *v128; // rax
  __int64 v129; // rax
  int v130; // eax
  int v131; // edx
  char v132; // [rsp+3Eh] [rbp-42h] BYREF
  char v133; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v134; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_demo_2eproto();
  std::string::string(&v134, "demo.proto", &v132);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v134);
  v3 = *&v134.level_ - 24LL;
  if ( (*&v134.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v130 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v131 = *(*&v134.level_ - 8LL);
      *(*&v134.level_ - 8LL) = v131 - 1;
      v130 = v131;
    }
    if ( v130 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v133);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v134,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      104);
    v129 = google::protobuf::internal::LogMessage::operator<<(&v134, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v133, v129);
    google::protobuf::internal::LogMessage::~LogMessage(&v134);
  }
  `anonymous namespace'::CDemoFileHeader_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CDemoFileHeader_descriptor_,
    CDemoFileHeader::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoFileHeader_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    88);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CDemoFileHeader_reflection_ = v7;
  `anonymous namespace'::CGameInfo_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CGameInfo_descriptor_,
    CGameInfo::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CGameInfo_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    32);
  `anonymous namespace'::CGameInfo_reflection_ = v13;
  `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_ = `anonymous namespace'::CGameInfo_descriptor_->nested_types_;
  v15 = google::protobuf::DescriptorPool::generated_pool(v14);
  v17 = google::protobuf::MessageFactory::generated_factory(v16);
  v18 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v18,
    `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_,
    CGameInfo_CDotaGameInfo::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CGameInfo_CDotaGameInfo_offsets_,
    16,
    8,
    -1,
    v15,
    v17,
    120);
  `anonymous namespace'::CGameInfo_CDotaGameInfo_reflection_ = v18;
  `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_descriptor_ = `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_->nested_types_;
  v20 = google::protobuf::DescriptorPool::generated_pool(v19);
  v22 = google::protobuf::MessageFactory::generated_factory(v21);
  v23 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v23,
    `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_descriptor_,
    CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CGameInfo_CDotaGameInfo_CPlayerInfo_offsets_,
    16,
    8,
    -1,
    v20,
    v22,
    56);
  `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_reflection_ = v23;
  `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_descriptor_ = `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_->nested_types_
                                                                              + 1;
  v25 = google::protobuf::DescriptorPool::generated_pool(v24);
  v27 = google::protobuf::MessageFactory::generated_factory(v26);
  v28 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v28,
    `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_descriptor_,
    CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CGameInfo_CDotaGameInfo_CHeroSelectEvent_offsets_,
    16,
    8,
    -1,
    v25,
    v27,
    40);
  v29 = *(FileByName + 80);
  `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_reflection_ = v28;
  `anonymous namespace'::CDemoFileInfo_descriptor_ = v29 + 2;
  v31 = google::protobuf::DescriptorPool::generated_pool(v30);
  v33 = google::protobuf::MessageFactory::generated_factory(v32);
  v34 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v34,
    `anonymous namespace'::CDemoFileInfo_descriptor_,
    CDemoFileInfo::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoFileInfo_offsets_,
    16,
    8,
    -1,
    v31,
    v33,
    48);
  v35 = *(FileByName + 80);
  `anonymous namespace'::CDemoFileInfo_reflection_ = v34;
  `anonymous namespace'::CDemoPacket_descriptor_ = v35 + 3;
  v37 = google::protobuf::DescriptorPool::generated_pool(v36);
  v39 = google::protobuf::MessageFactory::generated_factory(v38);
  v40 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v40,
    `anonymous namespace'::CDemoPacket_descriptor_,
    CDemoPacket::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoPacket_offsets_,
    16,
    8,
    -1,
    v37,
    v39,
    40);
  v41 = *(FileByName + 80);
  `anonymous namespace'::CDemoPacket_reflection_ = v40;
  `anonymous namespace'::CDemoFullPacket_descriptor_ = v41 + 4;
  v43 = google::protobuf::DescriptorPool::generated_pool(v42);
  v45 = google::protobuf::MessageFactory::generated_factory(v44);
  v46 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v46,
    `anonymous namespace'::CDemoFullPacket_descriptor_,
    CDemoFullPacket::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoFullPacket_offsets_,
    16,
    8,
    -1,
    v43,
    v45,
    40);
  v47 = *(FileByName + 80);
  `anonymous namespace'::CDemoFullPacket_reflection_ = v46;
  `anonymous namespace'::CDemoSaveGame_descriptor_ = v47 + 5;
  v49 = google::protobuf::DescriptorPool::generated_pool(v48);
  v51 = google::protobuf::MessageFactory::generated_factory(v50);
  v52 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v52,
    `anonymous namespace'::CDemoSaveGame_descriptor_,
    CDemoSaveGame::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoSaveGame_offsets_,
    16,
    8,
    -1,
    v49,
    v51,
    56);
  v53 = *(FileByName + 80);
  `anonymous namespace'::CDemoSaveGame_reflection_ = v52;
  `anonymous namespace'::CDemoSyncTick_descriptor_ = v53 + 6;
  v55 = google::protobuf::DescriptorPool::generated_pool(v54);
  v57 = google::protobuf::MessageFactory::generated_factory(v56);
  v58 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v58,
    `anonymous namespace'::CDemoSyncTick_descriptor_,
    CDemoSyncTick::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoSyncTick_offsets_,
    16,
    8,
    -1,
    v55,
    v57,
    24);
  v59 = *(FileByName + 80);
  `anonymous namespace'::CDemoSyncTick_reflection_ = v58;
  `anonymous namespace'::CDemoConsoleCmd_descriptor_ = v59 + 7;
  v61 = google::protobuf::DescriptorPool::generated_pool(v60);
  v63 = google::protobuf::MessageFactory::generated_factory(v62);
  v64 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v64,
    `anonymous namespace'::CDemoConsoleCmd_descriptor_,
    CDemoConsoleCmd::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoConsoleCmd_offsets_,
    16,
    8,
    -1,
    v61,
    v63,
    32);
  v65 = *(FileByName + 80);
  `anonymous namespace'::CDemoConsoleCmd_reflection_ = v64;
  `anonymous namespace'::CDemoSendTables_descriptor_ = v65 + 8;
  v67 = google::protobuf::DescriptorPool::generated_pool(v66);
  v69 = google::protobuf::MessageFactory::generated_factory(v68);
  v70 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v70,
    `anonymous namespace'::CDemoSendTables_descriptor_,
    CDemoSendTables::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoSendTables_offsets_,
    16,
    8,
    -1,
    v67,
    v69,
    32);
  v71 = *(FileByName + 80);
  `anonymous namespace'::CDemoSendTables_reflection_ = v70;
  `anonymous namespace'::CDemoClassInfo_descriptor_ = v71 + 9;
  v73 = google::protobuf::DescriptorPool::generated_pool(v72);
  v75 = google::protobuf::MessageFactory::generated_factory(v74);
  v76 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v76,
    `anonymous namespace'::CDemoClassInfo_descriptor_,
    CDemoClassInfo::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoClassInfo_offsets_,
    16,
    8,
    -1,
    v73,
    v75,
    48);
  `anonymous namespace'::CDemoClassInfo_reflection_ = v76;
  `anonymous namespace'::CDemoClassInfo_class_t_descriptor_ = `anonymous namespace'::CDemoClassInfo_descriptor_->nested_types_;
  v78 = google::protobuf::DescriptorPool::generated_pool(v77);
  v80 = google::protobuf::MessageFactory::generated_factory(v79);
  v81 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v81,
    `anonymous namespace'::CDemoClassInfo_class_t_descriptor_,
    CDemoClassInfo_class_t::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoClassInfo_class_t_offsets_,
    16,
    8,
    -1,
    v78,
    v80,
    48);
  v82 = *(FileByName + 80);
  `anonymous namespace'::CDemoClassInfo_class_t_reflection_ = v81;
  `anonymous namespace'::CDemoCustomData_descriptor_ = v82 + 10;
  v84 = google::protobuf::DescriptorPool::generated_pool(v83);
  v86 = google::protobuf::MessageFactory::generated_factory(v85);
  v87 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v87,
    `anonymous namespace'::CDemoCustomData_descriptor_,
    CDemoCustomData::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoCustomData_offsets_,
    16,
    8,
    -1,
    v84,
    v86,
    40);
  v88 = *(FileByName + 80);
  `anonymous namespace'::CDemoCustomData_reflection_ = v87;
  `anonymous namespace'::CDemoCustomDataCallbacks_descriptor_ = v88 + 11;
  v90 = google::protobuf::DescriptorPool::generated_pool(v89);
  v92 = google::protobuf::MessageFactory::generated_factory(v91);
  v93 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v93,
    `anonymous namespace'::CDemoCustomDataCallbacks_descriptor_,
    CDemoCustomDataCallbacks::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoCustomDataCallbacks_offsets_,
    16,
    8,
    -1,
    v90,
    v92,
    48);
  v94 = *(FileByName + 80);
  `anonymous namespace'::CDemoCustomDataCallbacks_reflection_ = v93;
  `anonymous namespace'::CDemoStringTables_descriptor_ = v94 + 12;
  v96 = google::protobuf::DescriptorPool::generated_pool(v95);
  v98 = google::protobuf::MessageFactory::generated_factory(v97);
  v99 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v99,
    `anonymous namespace'::CDemoStringTables_descriptor_,
    CDemoStringTables::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoStringTables_offsets_,
    16,
    8,
    -1,
    v96,
    v98,
    48);
  `anonymous namespace'::CDemoStringTables_reflection_ = v99;
  `anonymous namespace'::CDemoStringTables_items_t_descriptor_ = `anonymous namespace'::CDemoStringTables_descriptor_->nested_types_;
  v101 = google::protobuf::DescriptorPool::generated_pool(v100);
  v103 = google::protobuf::MessageFactory::generated_factory(v102);
  v104 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v104,
    `anonymous namespace'::CDemoStringTables_items_t_descriptor_,
    CDemoStringTables_items_t::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoStringTables_items_t_offsets_,
    16,
    8,
    -1,
    v101,
    v103,
    40);
  `anonymous namespace'::CDemoStringTables_items_t_reflection_ = v104;
  `anonymous namespace'::CDemoStringTables_table_t_descriptor_ = `anonymous namespace'::CDemoStringTables_descriptor_->nested_types_
                                                               + 1;
  v106 = google::protobuf::DescriptorPool::generated_pool(v105);
  v108 = google::protobuf::MessageFactory::generated_factory(v107);
  v109 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v109,
    `anonymous namespace'::CDemoStringTables_table_t_descriptor_,
    CDemoStringTables_table_t::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoStringTables_table_t_offsets_,
    16,
    8,
    -1,
    v106,
    v108,
    88);
  v110 = *(FileByName + 80);
  `anonymous namespace'::CDemoStringTables_table_t_reflection_ = v109;
  `anonymous namespace'::CDemoStop_descriptor_ = v110 + 13;
  v112 = google::protobuf::DescriptorPool::generated_pool(v111);
  v114 = google::protobuf::MessageFactory::generated_factory(v113);
  v115 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v115,
    `anonymous namespace'::CDemoStop_descriptor_,
    CDemoStop::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoStop_offsets_,
    16,
    8,
    -1,
    v112,
    v114,
    24);
  v116 = *(FileByName + 80);
  `anonymous namespace'::CDemoStop_reflection_ = v115;
  `anonymous namespace'::CDemoUserCmd_descriptor_ = v116 + 14;
  v118 = google::protobuf::DescriptorPool::generated_pool(v117);
  v120 = google::protobuf::MessageFactory::generated_factory(v119);
  v121 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v121,
    `anonymous namespace'::CDemoUserCmd_descriptor_,
    CDemoUserCmd::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoUserCmd_offsets_,
    16,
    8,
    -1,
    v118,
    v120,
    40);
  v122 = *(FileByName + 80);
  `anonymous namespace'::CDemoUserCmd_reflection_ = v121;
  `anonymous namespace'::CDemoSpawnGroups_descriptor_ = v122 + 15;
  v124 = google::protobuf::DescriptorPool::generated_pool(v123);
  v126 = google::protobuf::MessageFactory::generated_factory(v125);
  v127 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v127,
    `anonymous namespace'::CDemoSpawnGroups_descriptor_,
    CDemoSpawnGroups::default_instance_,
    protobuf_AssignDesc_demo_2eproto(void)::CDemoSpawnGroups_offsets_,
    16,
    8,
    -1,
    v124,
    v126,
    48);
  v128 = *(FileByName + 96);
  `anonymous namespace'::CDemoSpawnGroups_reflection_ = v127;
  `anonymous namespace'::EDemoCommands_descriptor_ = v128;
}


// protobuf_RegisterTypes  (line 486, @0x0000000001b4e490, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_demo_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), CDemoFileHeader::default_instance_, `anonymous namespace'::CDemoFileHeader_descriptor_, CGameInfo::default_instance_, `anonymous namespace'::CGameInfo_descriptor_, CGameInfo_CDotaGameInfo::default_instance_, `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_ (40 total)
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
  __int64 v45[2]; // [rsp+0h] [rbp-30h] BYREF
  char v46; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v46 = 0;
    v45[0] = off_47BFB70;
    v45[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v45, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v45);
  }
  v2 = CDemoFileHeader::default_instance_;
  if ( CDemoFileHeader::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v2 = CDemoFileHeader::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoFileHeader_descriptor_,
    v2,
    v1);
  v4 = CGameInfo::default_instance_;
  if ( CGameInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v4 = CGameInfo::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CGameInfo_descriptor_,
    v4,
    v3);
  v6 = CGameInfo_CDotaGameInfo::default_instance_;
  if ( CGameInfo_CDotaGameInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v6 = CGameInfo_CDotaGameInfo::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_,
    v6,
    v5);
  v8 = CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_;
  if ( CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v8 = CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_descriptor_,
    v8,
    v7);
  v10 = CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_;
  if ( CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v10 = CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_descriptor_,
    v10,
    v9);
  v12 = CDemoFileInfo::default_instance_;
  if ( CDemoFileInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v12 = CDemoFileInfo::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoFileInfo_descriptor_,
    v12,
    v11);
  v14 = CDemoPacket::default_instance_;
  if ( CDemoPacket::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v14 = CDemoPacket::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoPacket_descriptor_,
    v14,
    v13);
  v16 = CDemoFullPacket::default_instance_;
  if ( CDemoFullPacket::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v16 = CDemoFullPacket::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoFullPacket_descriptor_,
    v16,
    v15);
  v18 = CDemoSaveGame::default_instance_;
  if ( CDemoSaveGame::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v18 = CDemoSaveGame::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoSaveGame_descriptor_,
    v18,
    v17);
  v20 = CDemoSyncTick::default_instance_;
  if ( CDemoSyncTick::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v20 = CDemoSyncTick::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoSyncTick_descriptor_,
    v20,
    v19);
  v22 = CDemoConsoleCmd::default_instance_;
  if ( CDemoConsoleCmd::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v22 = CDemoConsoleCmd::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoConsoleCmd_descriptor_,
    v22,
    v21);
  v24 = CDemoSendTables::default_instance_;
  if ( CDemoSendTables::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v24 = CDemoSendTables::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoSendTables_descriptor_,
    v24,
    v23);
  v26 = CDemoClassInfo::default_instance_;
  if ( CDemoClassInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v26 = CDemoClassInfo::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoClassInfo_descriptor_,
    v26,
    v25);
  v28 = CDemoClassInfo_class_t::default_instance_;
  if ( CDemoClassInfo_class_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v28 = CDemoClassInfo_class_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoClassInfo_class_t_descriptor_,
    v28,
    v27);
  v30 = CDemoCustomData::default_instance_;
  if ( CDemoCustomData::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v30 = CDemoCustomData::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoCustomData_descriptor_,
    v30,
    v29);
  v32 = CDemoCustomDataCallbacks::default_instance_;
  if ( CDemoCustomDataCallbacks::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v32 = CDemoCustomDataCallbacks::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoCustomDataCallbacks_descriptor_,
    v32,
    v31);
  v34 = CDemoStringTables::default_instance_;
  if ( CDemoStringTables::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v34 = CDemoStringTables::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoStringTables_descriptor_,
    v34,
    v33);
  v36 = CDemoStringTables_items_t::default_instance_;
  if ( CDemoStringTables_items_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v36 = CDemoStringTables_items_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoStringTables_items_t_descriptor_,
    v36,
    v35);
  v38 = CDemoStringTables_table_t::default_instance_;
  if ( CDemoStringTables_table_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v38 = CDemoStringTables_table_t::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoStringTables_table_t_descriptor_,
    v38,
    v37);
  v40 = CDemoStop::default_instance_;
  if ( CDemoStop::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v40 = CDemoStop::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoStop_descriptor_,
    v40,
    v39);
  v42 = CDemoUserCmd::default_instance_;
  if ( CDemoUserCmd::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v42 = CDemoUserCmd::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoUserCmd_descriptor_,
    v42,
    v41);
  v44 = CDemoSpawnGroups::default_instance_;
  if ( CDemoSpawnGroups::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    v44 = CDemoSpawnGroups::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDemoSpawnGroups_descriptor_,
    v44,
    v43);
}


// protobuf_ShutdownFile_demo_2eproto  (line 536, @0x0000000001b3b9f0, libserver.so)
// globals: CDemoFileHeader::default_instance_, `anonymous namespace'::CDemoFileHeader_reflection_, CGameInfo::default_instance_, `anonymous namespace'::CGameInfo_reflection_, CGameInfo_CDotaGameInfo::default_instance_, `anonymous namespace'::CGameInfo_CDotaGameInfo_reflection_, CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_, `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_reflection_ (40 total)
void __cdecl protobuf_ShutdownFile_demo_2eproto()
{
  if ( CDemoFileHeader::default_instance_ != 0 )
    (CDemoFileHeader::default_instance_->name_[1]._M_dataplus._M_p)(CDemoFileHeader::default_instance_);
  if ( `anonymous namespace'::CDemoFileHeader_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoFileHeader_reflection_ + 8LL))(`anonymous namespace'::CDemoFileHeader_reflection_);
  if ( CGameInfo::default_instance_ != 0 )
    (CGameInfo::default_instance_->name_[1]._M_dataplus._M_p)(CGameInfo::default_instance_);
  if ( `anonymous namespace'::CGameInfo_reflection_ != 0 )
    (*(*`anonymous namespace'::CGameInfo_reflection_ + 8LL))(`anonymous namespace'::CGameInfo_reflection_);
  if ( CGameInfo_CDotaGameInfo::default_instance_ != 0 )
    (CGameInfo_CDotaGameInfo::default_instance_->name_[1]._M_dataplus._M_p)(CGameInfo_CDotaGameInfo::default_instance_);
  if ( `anonymous namespace'::CGameInfo_CDotaGameInfo_reflection_ != 0 )
    (*(*`anonymous namespace'::CGameInfo_CDotaGameInfo_reflection_ + 8LL))(`anonymous namespace'::CGameInfo_CDotaGameInfo_reflection_);
  if ( CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_ != 0 )
    (CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_->name_[1]._M_dataplus._M_p)(CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_);
  if ( `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_reflection_ != 0 )
    (*(*`anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_reflection_ + 8LL))(`anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_reflection_);
  if ( CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_ != 0 )
    (CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_->name_[1]._M_dataplus._M_p)(CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_);
  if ( `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_reflection_ != 0 )
    (*(*`anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_reflection_ + 8LL))(`anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_reflection_);
  if ( CDemoFileInfo::default_instance_ != 0 )
    (CDemoFileInfo::default_instance_->name_[1]._M_dataplus._M_p)(CDemoFileInfo::default_instance_);
  if ( `anonymous namespace'::CDemoFileInfo_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoFileInfo_reflection_ + 8LL))(`anonymous namespace'::CDemoFileInfo_reflection_);
  if ( CDemoPacket::default_instance_ != 0 )
    (CDemoPacket::default_instance_->name_[1]._M_dataplus._M_p)(CDemoPacket::default_instance_);
  if ( `anonymous namespace'::CDemoPacket_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoPacket_reflection_ + 8LL))(`anonymous namespace'::CDemoPacket_reflection_);
  if ( CDemoFullPacket::default_instance_ != 0 )
    (CDemoFullPacket::default_instance_->name_[1]._M_dataplus._M_p)(CDemoFullPacket::default_instance_);
  if ( `anonymous namespace'::CDemoFullPacket_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoFullPacket_reflection_ + 8LL))(`anonymous namespace'::CDemoFullPacket_reflection_);
  if ( CDemoSaveGame::default_instance_ != 0 )
    (CDemoSaveGame::default_instance_->name_[1]._M_dataplus._M_p)(CDemoSaveGame::default_instance_);
  if ( `anonymous namespace'::CDemoSaveGame_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoSaveGame_reflection_ + 8LL))(`anonymous namespace'::CDemoSaveGame_reflection_);
  if ( CDemoSyncTick::default_instance_ != 0 )
    (CDemoSyncTick::default_instance_->name_[1]._M_dataplus._M_p)(CDemoSyncTick::default_instance_);
  if ( `anonymous namespace'::CDemoSyncTick_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoSyncTick_reflection_ + 8LL))(`anonymous namespace'::CDemoSyncTick_reflection_);
  if ( CDemoConsoleCmd::default_instance_ != 0 )
    (CDemoConsoleCmd::default_instance_->name_[1]._M_dataplus._M_p)(CDemoConsoleCmd::default_instance_);
  if ( `anonymous namespace'::CDemoConsoleCmd_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoConsoleCmd_reflection_ + 8LL))(`anonymous namespace'::CDemoConsoleCmd_reflection_);
  if ( CDemoSendTables::default_instance_ != 0 )
    (CDemoSendTables::default_instance_->name_[1]._M_dataplus._M_p)(CDemoSendTables::default_instance_);
  if ( `anonymous namespace'::CDemoSendTables_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoSendTables_reflection_ + 8LL))(`anonymous namespace'::CDemoSendTables_reflection_);
  if ( CDemoClassInfo::default_instance_ != 0 )
    (CDemoClassInfo::default_instance_->name_[1]._M_dataplus._M_p)(CDemoClassInfo::default_instance_);
  if ( `anonymous namespace'::CDemoClassInfo_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoClassInfo_reflection_ + 8LL))(`anonymous namespace'::CDemoClassInfo_reflection_);
  if ( CDemoClassInfo_class_t::default_instance_ != 0 )
    (CDemoClassInfo_class_t::default_instance_->name_[1]._M_dataplus._M_p)(CDemoClassInfo_class_t::default_instance_);
  if ( `anonymous namespace'::CDemoClassInfo_class_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoClassInfo_class_t_reflection_ + 8LL))(`anonymous namespace'::CDemoClassInfo_class_t_reflection_);
  if ( CDemoCustomData::default_instance_ != 0 )
    (CDemoCustomData::default_instance_->name_[1]._M_dataplus._M_p)(CDemoCustomData::default_instance_);
  if ( `anonymous namespace'::CDemoCustomData_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoCustomData_reflection_ + 8LL))(`anonymous namespace'::CDemoCustomData_reflection_);
  if ( CDemoCustomDataCallbacks::default_instance_ != 0 )
    (CDemoCustomDataCallbacks::default_instance_->name_[1]._M_dataplus._M_p)(CDemoCustomDataCallbacks::default_instance_);
  if ( `anonymous namespace'::CDemoCustomDataCallbacks_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoCustomDataCallbacks_reflection_ + 8LL))(`anonymous namespace'::CDemoCustomDataCallbacks_reflection_);
  if ( CDemoStringTables::default_instance_ != 0 )
    (CDemoStringTables::default_instance_->name_[1]._M_dataplus._M_p)(CDemoStringTables::default_instance_);
  if ( `anonymous namespace'::CDemoStringTables_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoStringTables_reflection_ + 8LL))(`anonymous namespace'::CDemoStringTables_reflection_);
  if ( CDemoStringTables_items_t::default_instance_ != 0 )
    (CDemoStringTables_items_t::default_instance_->name_[1]._M_dataplus._M_p)(CDemoStringTables_items_t::default_instance_);
  if ( `anonymous namespace'::CDemoStringTables_items_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoStringTables_items_t_reflection_ + 8LL))(`anonymous namespace'::CDemoStringTables_items_t_reflection_);
  if ( CDemoStringTables_table_t::default_instance_ != 0 )
    (CDemoStringTables_table_t::default_instance_->name_[1]._M_dataplus._M_p)(CDemoStringTables_table_t::default_instance_);
  if ( `anonymous namespace'::CDemoStringTables_table_t_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoStringTables_table_t_reflection_ + 8LL))(`anonymous namespace'::CDemoStringTables_table_t_reflection_);
  if ( CDemoStop::default_instance_ != 0 )
    (CDemoStop::default_instance_->name_[1]._M_dataplus._M_p)(CDemoStop::default_instance_);
  if ( `anonymous namespace'::CDemoStop_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoStop_reflection_ + 8LL))(`anonymous namespace'::CDemoStop_reflection_);
  if ( CDemoUserCmd::default_instance_ != 0 )
    (CDemoUserCmd::default_instance_->name_[1]._M_dataplus._M_p)(CDemoUserCmd::default_instance_);
  if ( `anonymous namespace'::CDemoUserCmd_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoUserCmd_reflection_ + 8LL))(`anonymous namespace'::CDemoUserCmd_reflection_);
  if ( CDemoSpawnGroups::default_instance_ != 0 )
    (CDemoSpawnGroups::default_instance_->name_[1]._M_dataplus._M_p)(CDemoSpawnGroups::default_instance_);
  if ( `anonymous namespace'::CDemoSpawnGroups_reflection_ != 0 )
    (*(*`anonymous namespace'::CDemoSpawnGroups_reflection_ + 8LL))(`anonymous namespace'::CDemoSpawnGroups_reflection_);
}


// protobuf_AddDesc_demo_2eproto  (line 583, @0x0000000001b4cf20, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CDemoFileHeader::CDemoFileHeader, CGameInfo::CGameInfo, CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo, CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo, CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent, CDemoFileInfo::CDemoFileInfo, CDemoPacket::CDemoPacket, CDemoFullPacket::CDemoFullPacket (32 total)
// callers: protobuf_AssignDesc_demo_2eproto, CDemoFileHeader::default_instance, CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance, CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance, CGameInfo_CDotaGameInfo::default_instance, CGameInfo::InitAsDefaultInstance, CGameInfo::default_instance, CDemoFileInfo::InitAsDefaultInstance, CDemoFileInfo::default_instance, CDemoPacket::default_instance, CDemoFullPacket::default_instance, CDemoSaveGame::default_instance (28 total)
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "demo.proto"
// globals: protobuf_AddDesc_demo_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CDemoFileHeader::default_instance_, CGameInfo::default_instance_, CGameInfo_CDotaGameInfo::default_instance_, CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_, CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_, CDemoFileInfo::default_instance_ (25 total)
void __cdecl protobuf_AddDesc_demo_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CDemoFileHeader *v3; // rbx
  CGameInfo *v4; // rbx
  CGameInfo_CDotaGameInfo *v5; // rbx
  CGameInfo_CDotaGameInfo_CPlayerInfo *v6; // rbx
  CGameInfo_CDotaGameInfo_CHeroSelectEvent *v7; // rbx
  CDemoFileInfo *v8; // rbx
  CDemoPacket *v9; // rbx
  CDemoFullPacket *v10; // rbx
  CDemoSaveGame *v11; // rbx
  CDemoSyncTick *v12; // rbx
  CDemoConsoleCmd *v13; // rbx
  CDemoSendTables *v14; // rbx
  CDemoClassInfo *v15; // rbx
  CDemoClassInfo_class_t *v16; // rbx
  CDemoCustomData *v17; // rbx
  CDemoCustomDataCallbacks *v18; // rbx
  CDemoStringTables *v19; // rbx
  CDemoStringTables_items_t *v20; // rbx
  CDemoStringTables_table_t *v21; // rbx
  CDemoStop *v22; // rbx
  CDemoUserCmd *v23; // rbx
  CDemoSpawnGroups *v24; // rbx
  void (*v25)(void); // rsi

  if ( !protobuf_AddDesc_demo_2eproto(void)::already_here )
  {
    protobuf_AddDesc_demo_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      v0);
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_327FF78, &stru_10.m_PVSBits.m_Ints[289] + 3, v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "demo.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0x58u);
    CDemoFileHeader::CDemoFileHeader(v3);
    CDemoFileHeader::default_instance_ = v3;
    v4 = operator new(0x20u);
    CGameInfo::CGameInfo(v4);
    CGameInfo::default_instance_ = v4;
    v5 = operator new(0x78u);
    CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(v5);
    CGameInfo_CDotaGameInfo::default_instance_ = v5;
    v6 = operator new(0x38u);
    CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo(v6);
    CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_ = v6;
    v7 = operator new(0x28u);
    CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent(v7);
    CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_ = v7;
    v8 = operator new(0x30u);
    CDemoFileInfo::CDemoFileInfo(v8);
    CDemoFileInfo::default_instance_ = v8;
    v9 = operator new(0x28u);
    CDemoPacket::CDemoPacket(v9);
    CDemoPacket::default_instance_ = v9;
    v10 = operator new(0x28u);
    CDemoFullPacket::CDemoFullPacket(v10);
    CDemoFullPacket::default_instance_ = v10;
    v11 = operator new(0x38u);
    CDemoSaveGame::CDemoSaveGame(v11);
    CDemoSaveGame::default_instance_ = v11;
    v12 = operator new(0x18u);
    CDemoSyncTick::CDemoSyncTick(v12);
    CDemoSyncTick::default_instance_ = v12;
    v13 = operator new(0x20u);
    CDemoConsoleCmd::CDemoConsoleCmd(v13);
    CDemoConsoleCmd::default_instance_ = v13;
    v14 = operator new(0x20u);
    CDemoSendTables::CDemoSendTables(v14);
    CDemoSendTables::default_instance_ = v14;
    v15 = operator new(0x30u);
    CDemoClassInfo::CDemoClassInfo(v15);
    CDemoClassInfo::default_instance_ = v15;
    v16 = operator new(0x30u);
    CDemoClassInfo_class_t::CDemoClassInfo_class_t(v16);
    CDemoClassInfo_class_t::default_instance_ = v16;
    v17 = operator new(0x28u);
    CDemoCustomData::CDemoCustomData(v17);
    CDemoCustomData::default_instance_ = v17;
    v18 = operator new(0x30u);
    CDemoCustomDataCallbacks::CDemoCustomDataCallbacks(v18);
    CDemoCustomDataCallbacks::default_instance_ = v18;
    v19 = operator new(0x30u);
    CDemoStringTables::CDemoStringTables(v19);
    CDemoStringTables::default_instance_ = v19;
    v20 = operator new(0x28u);
    CDemoStringTables_items_t::CDemoStringTables_items_t(v20);
    CDemoStringTables_items_t::default_instance_ = v20;
    v21 = operator new(0x58u);
    CDemoStringTables_table_t::CDemoStringTables_table_t(v21);
    CDemoStringTables_table_t::default_instance_ = v21;
    v22 = operator new(0x18u);
    CDemoStop::CDemoStop(v22);
    CDemoStop::default_instance_ = v22;
    v23 = operator new(0x28u);
    CDemoUserCmd::CDemoUserCmd(v23);
    CDemoUserCmd::default_instance_ = v23;
    v24 = operator new(0x30u);
    CDemoSpawnGroups::CDemoSpawnGroups(v24);
    CDemoSpawnGroups::default_instance_ = v24;
    CGameInfo::InitAsDefaultInstance(CGameInfo::default_instance_);
    CDemoFileInfo::InitAsDefaultInstance(CDemoFileInfo::default_instance_);
    CDemoFullPacket::InitAsDefaultInstance(CDemoFullPacket::default_instance_);
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_demo_2eproto, v25);
  }
}


// EDemoCommands_descriptor  (line 703, @0x0000000001b43530, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::EDemoCommands_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EDemoCommands_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EDemoCommands_descriptor_;
}


// EDemoCommands_IsValid  (line 707, @0x0000000001b435c0, libserver.so)
bool __fastcall EDemoCommands_IsValid(int value)
{
  return value >= -1 && (value <= 16 || value == 64);
}


// CDemoFileHeader::CDemoFileHeader  (line 750, @0x0000000001b437a0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoFileHeader::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoFileHeader::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoFileHeader::CDemoFileHeader(CDemoFileHeader *const this)
{
  *this = off_3F7B010;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoFileHeader::SharedCtor(this);
}


// CDemoFileHeader::InitAsDefaultInstance  (line 756, @0x0000000001b435f0, libserver.so)
void __fastcall CDemoFileHeader::InitAsDefaultInstance(CDemoFileHeader *const this)
{
  ;
}


// CDemoFileHeader::CDemoFileHeader  (line 759, @0x0000000001b43dc0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoFileHeader::SharedCtor, CDemoFileHeader::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoFileHeader::CDemoFileHeader(CDemoFileHeader *const this, const CDemoFileHeader *const from)
{
  *this = off_3F7B010;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoFileHeader::SharedCtor(this);
  CDemoFileHeader::MergeFrom(this, from);
}


// CDemoFileHeader::SharedCtor  (line 766, @0x0000000001b43600, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoFileHeader::CDemoFileHeader
void __fastcall CDemoFileHeader::SharedCtor(CDemoFileHeader *const this)
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
  const std::string *v13; // r13
  std::string *v14; // r12
  __int64 v15[2]; // [rsp+0h] [rbp-40h] BYREF
  char v16; // [rsp+10h] [rbp-30h]

  if ( google::protobuf::internal::empty_string_once_init_ != 2 )
  {
    v16 = 0;
    v15[0] = off_47BFB70;
    v15[1] = google::protobuf::internal::InitEmptyString;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::internal::empty_string_once_init_, v15, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v15);
  }
  *(this + 5) = 0;
  v3 = google::protobuf::internal::empty_string_;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  v5 = google::protobuf::internal::empty_string_;
  *(this + 3) = v4;
  *(this + 12) = 0;
  v6 = operator new(8u);
  std::string::string(v6, v5);
  v7 = google::protobuf::internal::empty_string_;
  *(this + 4) = v6;
  v8 = operator new(8u);
  std::string::string(v8, v7);
  v9 = google::protobuf::internal::empty_string_;
  *(this + 5) = v8;
  v10 = operator new(8u);
  std::string::string(v10, v9);
  v11 = google::protobuf::internal::empty_string_;
  *(this + 7) = v10;
  v12 = operator new(8u);
  std::string::string(v12, v11);
  *(this + 8) = v12;
  v13 = google::protobuf::internal::empty_string_;
  *(this + 13) = 0;
  *(this + 80) = 0;
  *(this + 81) = 0;
  v14 = operator new(8u);
  std::string::string(v14, v13);
  *(this + 9) = v14;
  *(this + 4) = 0;
}


// CDemoFileHeader::~CDemoFileHeader  (line 782, @0x0000000001b43ab0, libserver.so)
// calls: CDemoFileHeader::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoFileHeader::~CDemoFileHeader
void __fastcall CDemoFileHeader::~CDemoFileHeader(CDemoFileHeader *const this)
{
  *this = off_3F7B010;
  CDemoFileHeader::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoFileHeader::~CDemoFileHeader  (line 782, @0x0000000001b43af0, libserver.so)
// calls: CDemoFileHeader::~CDemoFileHeader, operator delete
void __fastcall CDemoFileHeader::~CDemoFileHeader(CDemoFileHeader *const this)
{
  CDemoFileHeader::~CDemoFileHeader(this);
  operator delete(this);
}


// CDemoFileHeader::SharedDtor  (line 787, @0x0000000001b43840, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoFileHeader::~CDemoFileHeader
void __fastcall CDemoFileHeader::SharedDtor(CDemoFileHeader *const this)
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
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  _BYTE v32[17]; // [rsp+Fh] [rbp-11h] BYREF

  v2 = *(this + 3);
  if ( v2 != 0 )
  {
    v3 = *v2;
    v4 = *v2 - 24;
    if ( v4 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v20 = _InterlockedExchangeAdd((v4 + 16), 0xFFFFFFFF);
      }
      else
      {
        v26 = *(v3 - 8);
        *(v3 - 8) = v26 - 1;
        v20 = v26;
      }
      if ( v20 <= 0 )
        std::string::_Rep::_M_destroy(v4, v32);
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
        v25 = _InterlockedExchangeAdd((v7 + 16), 0xFFFFFFFF);
      }
      else
      {
        v27 = *(v6 - 8);
        *(v6 - 8) = v27 - 1;
        v25 = v27;
      }
      if ( v25 <= 0 )
        std::string::_Rep::_M_destroy(v7, v32);
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
        v23 = _InterlockedExchangeAdd((v10 + 16), 0xFFFFFFFF);
      }
      else
      {
        v29 = *(v9 - 8);
        *(v9 - 8) = v29 - 1;
        v23 = v29;
      }
      if ( v23 <= 0 )
        std::string::_Rep::_M_destroy(v10, v32);
    }
    operator delete(v8);
  }
  v11 = *(this + 7);
  if ( v11 != 0 )
  {
    v12 = *v11;
    v13 = *v11 - 24;
    if ( v13 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v24 = _InterlockedExchangeAdd((v13 + 16), 0xFFFFFFFF);
      }
      else
      {
        v31 = *(v12 - 8);
        *(v12 - 8) = v31 - 1;
        v24 = v31;
      }
      if ( v24 <= 0 )
        std::string::_Rep::_M_destroy(v13, v32);
    }
    operator delete(v11);
  }
  v14 = *(this + 8);
  if ( v14 != 0 )
  {
    v15 = *v14;
    v16 = *v14 - 24;
    if ( v16 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v22 = _InterlockedExchangeAdd((v16 + 16), 0xFFFFFFFF);
      }
      else
      {
        v30 = *(v15 - 8);
        *(v15 - 8) = v30 - 1;
        v22 = v30;
      }
      if ( v22 <= 0 )
        std::string::_Rep::_M_destroy(v16, v32);
    }
    operator delete(v14);
  }
  v17 = *(this + 9);
  if ( v17 != 0 )
  {
    v18 = *v17;
    v19 = *v17 - 24;
    if ( v19 != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create != 0 )
      {
        v21 = _InterlockedExchangeAdd((v19 + 16), 0xFFFFFFFF);
      }
      else
      {
        v28 = *(v18 - 8);
        *(v18 - 8) = v28 - 1;
        v21 = v28;
      }
      if ( v21 <= 0 )
        std::string::_Rep::_M_destroy(v19, v32);
    }
    operator delete(v17);
  }
}


// CDemoFileHeader::SetCachedSize  (line 798, @0x0000000001b3bd20, libserver.so)
void __fastcall CDemoFileHeader::SetCachedSize(const CDemoFileHeader *const this, int size)
{
  *(this + 5) = size;
}


// CDemoFileHeader::descriptor  (line 803, @0x0000000001b43b10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoFileHeader_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoFileHeader::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoFileHeader_descriptor_;
}


// CDemoFileHeader::default_instance  (line 808, @0x0000000001b4dfb0, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoFileHeader::default_instance_
const CDemoFileHeader *__cdecl CDemoFileHeader::default_instance()
{
  const CDemoFileHeader *result; // rax

  result = CDemoFileHeader::default_instance_;
  if ( CDemoFileHeader::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoFileHeader::default_instance_;
  }
  return result;
}


// CDemoFileHeader::New  (line 815, @0x0000000001b43800, libserver.so)
// calls: operator new, CDemoFileHeader::CDemoFileHeader, operator delete, _Unwind_Resume
CDemoFileHeader *__fastcall CDemoFileHeader::New(const CDemoFileHeader *const this)
{
  CDemoFileHeader *v1; // rbx

  v1 = operator new(0x58u);
  CDemoFileHeader::CDemoFileHeader(v1);
  return v1;
}


// CDemoFileHeader::Clear  (line 819, @0x0000000001b3c830, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoFileHeader::Clear(CDemoFileHeader *const this)
{
  int v2; // eax
  int v3; // edx
  bool v4; // zf

  v2 = *(this + 4);
  BYTE1(v3) = BYTE1(v2);
  if ( v2 != 0 )
  {
    *(this + 6) = 0;
    if ( (v2 & 1) != 0 )
    {
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 4) != 0 )
    {
      std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 8) != 0 )
    {
      std::string::_M_mutate(*(this + 5), 0, *(**(this + 5) - 24LL), 0);
      v2 = *(this + 4);
    }
    if ( (v2 & 0x10) != 0 )
    {
      std::string::_M_mutate(*(this + 7), 0, *(**(this + 7) - 24LL), 0);
      v2 = *(this + 4);
    }
    BYTE1(v3) = BYTE1(v2);
    if ( (v2 & 0x20) != 0 )
    {
      std::string::_M_mutate(*(this + 8), 0, *(**(this + 8) - 24LL), 0);
      v3 = *(this + 4);
    }
    *(this + 80) = 0;
  }
  if ( (v3 & 0x300) != 0 )
  {
    *(this + 81) = 0;
    if ( (v3 & 0x200) != 0 )
      std::string::_M_mutate(*(this + 9), 0, *(**(this + 9) - 24LL), 0);
  }
  v4 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v4 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoFileHeader::MergePartialFromCodedStream  (line 863, @0x0000000001b42c90, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, mutable_addons, mutable_client_name, mutable_demo_file_stamp, mutable_game_directory, mutable_map_name, mutable_server_name, set_has_addons, set_has_allow_clientside_entities, set_has_allow_clientside_particles, set_has_client_name, set_has_demo_file_stamp, set_has_fullpackets_version, set_has_game_directory, set_has_map_name, set_has_network_protocol, set_has_server_name
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// globals: jpt_1B42CF4
bool __fastcall CDemoFileHeader::MergePartialFromCodedStream(
        CDemoFileHeader *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v4; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *i; // rcx
  unsigned __int8 v7; // al
  google::protobuf::io::CodedInputStream *v8; // rsi
  std::string *v9; // rdx
  const google::protobuf::uint8 *v10; // rdx
  __int64 v11; // rax
  const google::protobuf::uint8 *v12; // rdx
  __int64 v13; // rax
  bool result; // al
  const google::protobuf::uint8 *v15; // rdx
  unsigned int v16; // eax
  const google::protobuf::uint8 *v17; // rdx
  unsigned int v18; // eax
  google::protobuf::uint32 TagFallback; // eax
  unsigned int v20[2]; // [rsp+8h] [rbp-38h] BYREF

  v4 = this + 8;
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( buffer < i )
    {
      v7 = *buffer;
      if ( *buffer <= 0 )
        break;
      v8 = v7;
      input->last_tag_ = v7;
      input->buffer_ = buffer + 1;
LABEL_5:
      v9 = (v8 >> 3);
      switch ( v9 )
      {
        case 1:
          if ( v8 != 10 )
            goto handle_unusual;
          *(this + 4) |= 1u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v9) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 16 )
            continue;
          v17 = buffer + 1;
          input->buffer_ = v17;
parse_network_protocol:
          if ( i <= v17 || ((v18 = *v17) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v20);
            if ( !result )
              return result;
            v18 = v20[0];
          }
          else
          {
            input->buffer_ = v17 + 1;
          }
          *(this + 4) |= 2u;
          *(this + 12) = v18;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 26 )
            continue;
          v9 = (buffer + 1);
          input->buffer_ = v9;
parse_server_name:
          *(this + 4) |= 4u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), v9) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 34 )
            continue;
          v9 = (buffer + 1);
          input->buffer_ = v9;
parse_client_name:
          *(this + 4) |= 8u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 5), v9) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 42 )
            continue;
          v9 = (buffer + 1);
          input->buffer_ = v9;
parse_map_name:
          *(this + 4) |= 0x10u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 7), v9) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 50 )
            continue;
          v9 = (buffer + 1);
          input->buffer_ = v9;
parse_game_directory:
          *(this + 4) |= 0x20u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 8), v9) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 56 )
            continue;
          v15 = buffer + 1;
          input->buffer_ = v15;
parse_fullpackets_version:
          if ( i <= v15 || ((v16 = *v15) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v20);
            if ( !result )
              return result;
            v16 = v20[0];
          }
          else
          {
            input->buffer_ = v15 + 1;
          }
          *(this + 4) |= 0x40u;
          *(this + 13) = v16;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 64 )
            continue;
          v10 = buffer + 1;
          input->buffer_ = v10;
parse_allow_clientside_entities:
          if ( i <= v10 || ((v11 = *v10) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v20);
            if ( !result )
              return result;
            v11 = *v20;
          }
          else
          {
            input->buffer_ = v10 + 1;
          }
          *(this + 80) = v11 != 0;
          *(this + 4) |= 0x80u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 72 )
            continue;
          v12 = buffer + 1;
          input->buffer_ = v12;
parse_allow_clientside_particles:
          if ( v12 >= i || ((v13 = *v12) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v20);
            if ( !result )
              return result;
            v13 = *v20;
          }
          else
          {
            input->buffer_ = v12 + 1;
          }
          *(this + 81) = v13 != 0;
          *(this + 4) |= 0x100u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 82 )
            continue;
          v9 = (buffer + 1);
          input->buffer_ = v9;
parse_addons:
          *(this + 4) |= 0x200u;
          result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 9), v9);
          if ( !result )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer != i )
            continue;
          if ( input->buffer_size_after_limit_ != 0 || input->total_bytes_read_ == input->current_limit_ )
          {
            input->last_tag_ = 0;
            input->legitimate_message_end_ = 1;
            return result;
          }
          i = input->buffer_;
          break;
        case 2:
          if ( v8 != 16 )
            goto handle_unusual;
          v17 = input->buffer_;
          i = input->buffer_end_;
          goto parse_network_protocol;
        case 3:
          if ( v8 != 26 )
            goto handle_unusual;
          goto parse_server_name;
        case 4:
          if ( v8 == 34 )
            goto parse_client_name;
          if ( v8 == 0 )
            return 1;
          goto LABEL_8;
        case 5:
          if ( v8 != 42 )
            goto handle_unusual;
          goto parse_map_name;
        case 6:
          if ( v8 != 50 )
            goto handle_unusual;
          goto parse_game_directory;
        case 7:
          if ( v8 != 56 )
            goto handle_unusual;
          v15 = input->buffer_;
          i = input->buffer_end_;
          goto parse_fullpackets_version;
        case 8:
          if ( v8 != 64 )
            goto handle_unusual;
          v10 = input->buffer_;
          i = input->buffer_end_;
          goto parse_allow_clientside_entities;
        case 9:
          if ( v8 != 72 )
            goto handle_unusual;
          v12 = input->buffer_;
          i = input->buffer_end_;
          goto parse_allow_clientside_particles;
        case 10:
          if ( v8 != 82 )
            goto handle_unusual;
          goto parse_addons;
        default:
          goto handle_unusual;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v8 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      goto LABEL_5;
handle_unusual:
    if ( v8 == 0 )
      return 1;
LABEL_8:
    if ( (v8 & 7) == 4 )
      break;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v8, v4, i) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CDemoFileHeader::SerializeWithCachedSizes  (line 1056, @0x0000000001b3d100, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoFileHeader::SerializeWithCachedSizes(
        const CDemoFileHeader *const this,
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
      goto LABEL_16;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 12), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_17;
  }
LABEL_16:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 1, *(this + 4), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
    goto LABEL_18;
  }
LABEL_17:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 2, *(this + 5), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_7;
    goto LABEL_19;
  }
LABEL_18:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2 + 3, *(this + 7), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x20) == 0 )
  {
LABEL_7:
    if ( (v6 & 0x40) == 0 )
      goto LABEL_8;
    goto LABEL_20;
  }
LABEL_19:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_6, *(this + 8), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x40) == 0 )
  {
LABEL_8:
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_9;
    goto LABEL_21;
  }
LABEL_20:
  google::protobuf::internal::WireFormatLite::WriteInt32(&loc_6 + 1, *(this + 13), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x80u) == 0 )
  {
LABEL_9:
    if ( (v6 & 0x100) == 0 )
      goto LABEL_10;
    goto LABEL_22;
  }
LABEL_21:
  google::protobuf::internal::WireFormatLite::WriteBool(&stru_8, *(this + 80), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 0x100) == 0 )
  {
LABEL_10:
    if ( (v6 & 0x200) == 0 )
      goto LABEL_11;
LABEL_23:
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_A, *(this + 9), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_12;
  }
LABEL_22:
  google::protobuf::internal::WireFormatLite::WriteBool(&stru_9, *(this + 81), output, v3);
  if ( (*(this + 4) & 0x200) != 0 )
    goto LABEL_23;
LABEL_11:
  v7 = *(this + 1);
  if ( v7 == 0 )
    return;
LABEL_12:
  if ( v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDemoFileHeader::SerializeWithCachedSizesToArray  (line 1146, @0x0000000001b40b70, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CDemoFileHeader::SerializeWithCachedSizesToArray(
        const CDemoFileHeader *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::uint8 *v8; // rsi
  google::protobuf::io::CodedOutputStream *v9; // rdi
  google::protobuf::io::CodedOutputStream *v10; // rdi
  google::protobuf::io::CodedOutputStream *v11; // rdi
  google::protobuf::io::CodedOutputStream *v12; // rdi
  google::protobuf::io::CodedOutputStream *v13; // rdi
  google::protobuf::uint8 *v14; // rsi
  google::protobuf::uint8 v15; // dl
  google::protobuf::uint8 v16; // dl
  google::protobuf::io::CodedOutputStream *v17; // rdi
  __int64 v18; // rdx

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
    v7 = *(this + 12);
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
    v9 = *(this + 4);
    *result = 26;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v9, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v10 = *(this + 5);
    *result = 34;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v10, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10) != 0 )
  {
    v11 = *(this + 7);
    *result = 42;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v11, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20) != 0 )
  {
    v12 = *(this + 8);
    *result = 50;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v12, (result + 1), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x40) != 0 )
  {
    v13 = *(this + 13);
    v14 = result + 1;
    *result = 56;
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
    v4 = *(this + 4);
  }
  if ( v4 < 0 )
  {
    v15 = *(this + 80);
    *result = 64;
    result += 2;
    *(result - 1) = v15;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 1) != 0 )
  {
    v16 = *(this + 81);
    *result = 72;
    result += 2;
    *(result - 1) = v16;
    v4 = *(this + 4);
  }
  BYTE1(v4) &= 2u;
  if ( BYTE1(v4) != 0 )
  {
    v17 = *(this + 9);
    *result = 82;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v17, (result + 1), v4);
  }
  v18 = *(this + 1);
  if ( v18 != 0 && *(v18 + 8) != *v18 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v18);
  return result;
}


// CDemoFileHeader::ByteSize  (line 1243, @0x0000000001b3fa60, libserver.so)  // inlines: Int32Size, StringSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDemoFileHeader::ByteSize(const CDemoFileHeader *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // edx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // r13
  google::protobuf::io::CodedOutputStream *v14; // rdi
  int v15; // eax
  int v16; // ecx
  _QWORD *v17; // r13
  google::protobuf::io::CodedOutputStream *v18; // rdi
  int v19; // eax
  int v20; // ecx
  _QWORD *v21; // r13
  google::protobuf::io::CodedOutputStream *v22; // rdi
  int v23; // eax
  int v24; // edx
  _QWORD *v25; // rbx
  google::protobuf::io::CodedOutputStream *v26; // rdi
  int v27; // eax
  int v28; // ecx
  _QWORD *v29; // r13
  google::protobuf::io::CodedOutputStream *v30; // rdi
  int v31; // eax
  int v32; // ecx
  _QWORD *v33; // r13
  google::protobuf::io::CodedOutputStream *v34; // rdi
  int v35; // eax
  int v36; // ecx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_15;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) == 0 )
      goto LABEL_8;
    goto LABEL_4;
  }
  v25 = *(this + 3);
  v26 = *(*v25 - 24LL);
  v27 = 1;
  v28 = v26;
  if ( v26 > 0x7F )
  {
    v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v26, v1);
    v28 = *(*v25 - 24LL);
    v4 = *(this + 4);
  }
  v3 = v27 + v28 + 1;
  if ( (v4 & 2) != 0 )
  {
LABEL_4:
    v5 = *(this + 12);
    v6 = 11;
    if ( v5 >= 0 )
    {
      LOBYTE(v6) = 2;
      if ( v5 > 0x7F )
      {
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
        v4 = *(this + 4);
        v6 = v7 + 1;
      }
    }
    v3 += v6;
  }
LABEL_8:
  if ( (v4 & 4) != 0 )
  {
    v17 = *(this + 4);
    v18 = *(*v17 - 24LL);
    v19 = 1;
    v20 = v18;
    if ( v18 > 0x7F )
    {
      v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v18, v1);
      v20 = *(*v17 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v19 + v20 + 1;
    if ( (v4 & 8) == 0 )
    {
LABEL_10:
      if ( (v4 & 0x10) == 0 )
        goto LABEL_11;
      goto LABEL_45;
    }
  }
  else if ( (v4 & 8) == 0 )
  {
    goto LABEL_10;
  }
  v29 = *(this + 5);
  v30 = *(*v29 - 24LL);
  v31 = 1;
  v32 = v30;
  if ( v30 > 0x7F )
  {
    v31 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v30, v1);
    v32 = *(*v29 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v31 + v32 + 1;
  if ( (v4 & 0x10) == 0 )
  {
LABEL_11:
    if ( (v4 & 0x20) == 0 )
      goto LABEL_12;
LABEL_27:
    v13 = *(this + 8);
    v14 = *(*v13 - 24LL);
    v15 = 1;
    v16 = v14;
    if ( v14 > 0x7F )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
      v16 = *(*v13 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v15 + v16 + 1;
    if ( (v4 & 0x40) == 0 )
      goto LABEL_13;
    goto LABEL_23;
  }
LABEL_45:
  v33 = *(this + 7);
  v34 = *(*v33 - 24LL);
  v35 = 1;
  v36 = v34;
  if ( v34 > 0x7F )
  {
    v35 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v34, v1);
    v36 = *(*v33 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v35 + v36 + 1;
  if ( (v4 & 0x20) != 0 )
    goto LABEL_27;
LABEL_12:
  if ( (v4 & 0x40) != 0 )
  {
LABEL_23:
    v10 = *(this + 13);
    v11 = 11;
    if ( v10 >= 0 )
    {
      LOBYTE(v11) = 2;
      if ( v10 > 0x7F )
      {
        v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
        v4 = *(this + 4);
        v11 = v12 + 1;
      }
    }
    v3 += v11;
  }
LABEL_13:
  if ( (v4 & 0x80u) != 0 )
    v3 += 2;
LABEL_15:
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
      v3 += 2;
    if ( (v4 & 0x200) != 0 )
    {
      v21 = *(this + 9);
      v22 = *(*v21 - 24LL);
      v23 = 1;
      v24 = v22;
      if ( v22 > 0x7F )
      {
        v23 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, v1);
        v24 = *(*v21 - 24LL);
      }
      v3 += v23 + v24 + 1;
    }
  }
  v8 = *(this + 1);
  if ( v8 != 0 && *(v8 + 8) != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v8);
  *(this + 5) = v3;
  return v3;
}


// CDemoFileHeader::MergeFrom  (line 1327, @0x0000000001b43e30, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoFileHeader*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoFileHeader::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoFileHeader
void __fastcall CDemoFileHeader::MergeFrom(CDemoFileHeader *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoFileHeader *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      1328);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoFileHeader, 0)) != 0 )
  {
    CDemoFileHeader::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoFileHeader::MergeFrom  (line 1339, @0x0000000001b43ba0, libserver.so)  // inlines: set_addons, set_allow_clientside_entities, set_allow_clientside_particles, set_client_name, set_demo_file_stamp, set_fullpackets_version, set_game_directory, set_has_addons, set_has_allow_clientside_entities, set_has_allow_clientside_particles, set_has_client_name, set_has_demo_file_stamp, set_has_fullpackets_version, set_has_game_directory, set_has_map_name, set_has_network_protocol, set_has_server_name, set_map_name, set_network_protocol, set_server_name
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoFileHeader::CDemoFileHeader, CDemoFileHeader::MergeFrom, CDemoFileHeader::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoFileHeader::MergeFrom(CDemoFileHeader *const this, const CDemoFileHeader *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  char v7; // al
  char v8; // al
  const std::string *v9; // rsi
  std::string *v10; // rdi
  const std::string *v11; // rsi
  std::string *v12; // rdi
  const std::string *v13; // rsi
  std::string *v14; // rdi
  const std::string *v15; // rsi
  std::string *v16; // rdi
  const std::string *v17; // rsi
  std::string *v18; // rdi
  const std::string *v19; // rsi
  std::string *v20; // rdi
  __int64 v21; // rax
  char v22; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v23; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v23,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      1340);
    v21 = google::protobuf::internal::LogMessage::operator<<(&v23, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v22, v21);
    google::protobuf::internal::LogMessage::~LogMessage(&v23);
  }
  v4 = *(from + 4);
  if ( v4 != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v11 = *(from + 3);
      v12 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v12, v11);
      v4 = *(from + 4);
      if ( (v4 & 2) == 0 )
      {
LABEL_7:
        if ( (v4 & 4) != 0 )
        {
          v13 = *(from + 4);
          v14 = *(this + 4);
          *(this + 4) |= 4u;
          std::string::assign(v14, v13);
          v4 = *(from + 4);
          if ( (v4 & 8) == 0 )
          {
LABEL_9:
            if ( (v4 & 0x10) == 0 )
              goto LABEL_10;
            goto LABEL_25;
          }
        }
        else if ( (v4 & 8) == 0 )
        {
          goto LABEL_9;
        }
        v15 = *(from + 5);
        v16 = *(this + 5);
        *(this + 4) |= 8u;
        std::string::assign(v16, v15);
        v4 = *(from + 4);
        if ( (v4 & 0x10) == 0 )
        {
LABEL_10:
          if ( (v4 & 0x20) == 0 )
            goto LABEL_11;
          goto LABEL_26;
        }
LABEL_25:
        v17 = *(from + 7);
        v18 = *(this + 7);
        *(this + 4) |= 0x10u;
        std::string::assign(v18, v17);
        v4 = *(from + 4);
        if ( (v4 & 0x20) == 0 )
        {
LABEL_11:
          if ( (v4 & 0x40) == 0 )
            goto LABEL_13;
          goto LABEL_12;
        }
LABEL_26:
        v19 = *(from + 8);
        v20 = *(this + 8);
        *(this + 4) |= 0x20u;
        std::string::assign(v20, v19);
        v4 = *(from + 4);
        if ( (v4 & 0x40) == 0 )
        {
LABEL_13:
          if ( (v4 & 0x80u) != 0 )
          {
            v8 = *(from + 80);
            *(this + 4) |= 0x80u;
            *(this + 80) = v8;
            v4 = *(from + 4);
          }
          goto LABEL_15;
        }
LABEL_12:
        v6 = *(from + 13);
        *(this + 4) |= 0x40u;
        *(this + 13) = v6;
        v4 = *(from + 4);
        goto LABEL_13;
      }
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_7;
    }
    v5 = *(from + 12);
    *(this + 4) |= 2u;
    *(this + 12) = v5;
    v4 = *(from + 4);
    goto LABEL_7;
  }
LABEL_15:
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      v7 = *(from + 81);
      *(this + 4) |= 0x100u;
      *(this + 81) = v7;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x200) != 0 )
    {
      v9 = *(from + 9);
      v10 = *(this + 9);
      *(this + 4) |= 0x200u;
      std::string::assign(v10, v9);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoFileHeader::CopyFrom  (line 1378, @0x0000000001b3bd30, libserver.so)
void __fastcall CDemoFileHeader::CopyFrom(CDemoFileHeader *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoFileHeader::CopyFrom  (line 1384, @0x0000000001b43f10, libserver.so)
// calls: CDemoFileHeader::MergeFrom
void __fastcall CDemoFileHeader::CopyFrom(CDemoFileHeader *const this, const CDemoFileHeader *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoFileHeader::MergeFrom(this, from);
  }
}


// CDemoFileHeader::IsInitialized  (line 1390, @0x0000000001b3bd70, libserver.so)
bool __fastcall CDemoFileHeader::IsInitialized(const CDemoFileHeader *const this)
{
  return *(this + 4) & 1;
}


// CDemoFileHeader::Swap  (line 1396, @0x0000000001b43f50, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoFileHeader::Swap(CDemoFileHeader *const this, CDemoFileHeader *other)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax

  if ( other != this )
  {
    v2 = *(this + 3);
    *(this + 3) = *(other + 3);
    *(other + 3) = v2;
    LODWORD(v2) = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v2;
    v3 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v3;
    v4 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
    v5 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v5;
    v6 = *(this + 8);
    *(this + 8) = *(other + 8);
    *(other + 8) = v6;
    LODWORD(v6) = *(this + 13);
    *(this + 13) = *(other + 13);
    *(other + 13) = v6;
    LOBYTE(v6) = *(this + 80);
    *(this + 80) = *(other + 80);
    *(other + 80) = v6;
    LOBYTE(v6) = *(this + 81);
    *(this + 81) = *(other + 81);
    v7 = *(other + 9);
    *(other + 81) = v6;
    v8 = *(this + 9);
    *(this + 9) = v7;
    LODWORD(v7) = *(other + 4);
    *(other + 9) = v8;
    LODWORD(v8) = *(this + 4);
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


// CDemoFileHeader::GetMetadata  (line 1414, @0x0000000001b40ad0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoFileHeader_descriptor_, `anonymous namespace'::CDemoFileHeader_reflection_
google::protobuf::Metadata __fastcall CDemoFileHeader::GetMetadata(const CDemoFileHeader *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoFileHeader_descriptor_;
  result.reflection = `anonymous namespace'::CDemoFileHeader_reflection_;
  return result;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo  (line 1433, @0x0000000001b44130, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CGameInfo_CDotaGameInfo_CPlayerInfo::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CGameInfo_CDotaGameInfo_CPlayerInfo::New, CGameInfo_CDotaGameInfo::MergePartialFromCodedStream, CGameInfo_CDotaGameInfo::MergeFrom, protobuf_AddDesc_demo_2eproto, CDOTAHLTVDirector::FinishRecording
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  *this = off_3F7B0D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CGameInfo_CDotaGameInfo_CPlayerInfo::SharedCtor(this);
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::InitAsDefaultInstance  (line 1439, @0x0000000001b44020, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::InitAsDefaultInstance(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  ;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo  (line 1442, @0x0000000001b444c0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CGameInfo_CDotaGameInfo_CPlayerInfo::SharedCtor, CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const from)
{
  *this = off_3F7B0D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CGameInfo_CDotaGameInfo_CPlayerInfo::SharedCtor(this);
  CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom(this, from);
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::SharedCtor  (line 1449, @0x0000000001b44030, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::SharedCtor(CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
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
  *(this + 48) = 0;
  *(this + 5) = 0;
  *(this + 13) = 0;
  *(this + 4) = 0;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::~CGameInfo_CDotaGameInfo_CPlayerInfo  (line 1460, @0x0000000001b44290, libserver.so)
// calls: CGameInfo_CDotaGameInfo_CPlayerInfo::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CGameInfo_CDotaGameInfo_CPlayerInfo::~CGameInfo_CDotaGameInfo_CPlayerInfo
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::~CGameInfo_CDotaGameInfo_CPlayerInfo(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  *this = off_3F7B0D0;
  CGameInfo_CDotaGameInfo_CPlayerInfo::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::~CGameInfo_CDotaGameInfo_CPlayerInfo  (line 1460, @0x0000000001b442d0, libserver.so)
// calls: CGameInfo_CDotaGameInfo_CPlayerInfo::~CGameInfo_CDotaGameInfo_CPlayerInfo, operator delete
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::~CGameInfo_CDotaGameInfo_CPlayerInfo(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  CGameInfo_CDotaGameInfo_CPlayerInfo::~CGameInfo_CDotaGameInfo_CPlayerInfo(this);
  operator delete(this);
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::SharedDtor  (line 1465, @0x0000000001b441d0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CGameInfo_CDotaGameInfo_CPlayerInfo::~CGameInfo_CDotaGameInfo_CPlayerInfo
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::SharedDtor(CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
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


// CGameInfo_CDotaGameInfo_CPlayerInfo::SetCachedSize  (line 1472, @0x0000000001b3bd80, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::SetCachedSize(
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        int size)
{
  *(this + 5) = size;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::descriptor  (line 1477, @0x0000000001b442f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_descriptor_
const google::protobuf::Descriptor *__cdecl CGameInfo_CDotaGameInfo_CPlayerInfo::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_descriptor_;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance  (line 1482, @0x0000000001b4dfe0, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_
const CGameInfo_CDotaGameInfo_CPlayerInfo *__cdecl CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance()
{
  const CGameInfo_CDotaGameInfo_CPlayerInfo *result; // rax

  result = CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_;
  if ( CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CGameInfo_CDotaGameInfo_CPlayerInfo::default_instance_;
  }
  return result;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::New  (line 1489, @0x0000000001b44190, libserver.so)
// calls: operator new, CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo, operator delete, _Unwind_Resume
CGameInfo_CDotaGameInfo_CPlayerInfo *__fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::New(
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  CGameInfo_CDotaGameInfo_CPlayerInfo *v1; // rbx

  v1 = operator new(0x38u);
  CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo(v1);
  return v1;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::Clear  (line 1493, @0x0000000001b3c970, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::Clear(CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  bool v2; // zf
  int v3; // eax

  if ( (*(this + 16) & 0x1F) != 0 )
  {
    v3 = *(this + 4);
    *(this + 5) = 0;
    *(this + 6) = 0;
    if ( (v3 & 1) != 0 )
    {
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
      v3 = *(this + 4);
    }
    if ( (v3 & 2) != 0 )
      std::string::_M_mutate(*(this + 4), 0, *(**(this + 4) - 24LL), 0);
  }
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::MergePartialFromCodedStream  (line 1521, @0x0000000001b42500, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)4u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, mutable_hero_name, mutable_player_name, set_has_game_team, set_has_hero_name, set_has_is_fake_client, set_has_player_name, set_has_steamid
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CGameInfo_CDotaGameInfo::MergePartialFromCodedStream
// globals: jpt_1B42574
bool __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::MergePartialFromCodedStream(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v2; // rcx
  unsigned int v5; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *i; // rax
  unsigned __int8 v8; // al
  google::protobuf::io::CodedInputStream *v9; // rsi
  std::string *v10; // rdx
  const google::protobuf::uint8 *v11; // rdx
  const google::protobuf::uint8 *v12; // rdx
  __int64 v13; // rax
  const google::protobuf::uint8 *v14; // rdx
  __int64 v15; // rax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  unsigned int v18; // eax
  unsigned __int64 *v19; // [rsp+8h] [rbp-48h]
  unsigned int v20[2]; // [rsp+18h] [rbp-38h] BYREF

  v2 = (this + 40);
  v5 = this + 8;
  v19 = (this + 40);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( i > buffer )
    {
      v8 = *buffer;
      if ( *buffer <= 0 )
        break;
      v9 = v8;
      input->last_tag_ = v8;
      input->buffer_ = buffer + 1;
LABEL_5:
      v10 = (v9 >> 3);
      switch ( v10 )
      {
        case 1:
          if ( v9 != 10 )
            goto handle_unusual;
          *(this + 4) |= 1u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 18 )
            continue;
          v10 = (buffer + 1);
          input->buffer_ = v10;
          goto parse_player_name;
        case 2:
          if ( v9 != 18 )
            goto handle_unusual;
parse_player_name:
          *(this + 4) |= 2u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 4), v10) == 0 )
            return 0;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 24 )
            continue;
          v11 = buffer + 1;
          input->buffer_ = v11;
parse_is_fake_client:
          if ( v11 >= i || ((v15 = *v11) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v20);
            if ( !result )
              return result;
            v15 = *v20;
          }
          else
          {
            input->buffer_ = v11 + 1;
          }
          *(this + 48) = v15 != 0;
          *(this + 4) |= 4u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 32 )
            continue;
          v12 = buffer + 1;
          input->buffer_ = v12;
parse_steamid:
          if ( v12 >= i || ((v13 = *v12) & 0x80u) != 0LL )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v19) == 0 )
              return 0;
          }
          else
          {
            *(this + 5) = v13;
            ++input->buffer_;
          }
          *(this + 4) |= 8u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 40 )
            continue;
          v14 = buffer + 1;
          input->buffer_ = v14;
parse_game_team:
          if ( v14 >= i || ((v18 = *v14) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v20);
            if ( !result )
              return result;
            v18 = v20[0];
          }
          else
          {
            input->buffer_ = v14 + 1;
          }
          *(this + 4) |= 0x10u;
          *(this + 13) = v18;
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
        case 3:
          if ( v9 != 24 )
            goto handle_unusual;
          v11 = input->buffer_;
          i = input->buffer_end_;
          goto parse_is_fake_client;
        case 4:
          if ( v9 != 32 )
            goto handle_unusual;
          v12 = input->buffer_;
          i = input->buffer_end_;
          goto parse_steamid;
        case 5:
          if ( v9 != 40 )
            goto handle_unusual;
          v14 = input->buffer_;
          i = input->buffer_end_;
          goto parse_game_team;
        default:
handle_unusual:
          if ( v9 != 0 )
            goto LABEL_8;
          return 1;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v9 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x7E )
      goto LABEL_5;
    if ( TagFallback == 0 )
      break;
LABEL_8:
    if ( (v9 & 7) == 4 )
      return 1;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v9, v5, v2) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::SerializeWithCachedSizes  (line 1631, @0x0000000001b3d5c0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::SerializeWithCachedSizes(
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
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
      goto LABEL_11;
    }
  }
  else if ( (v6 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_2, *(this + 4), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  google::protobuf::internal::WireFormatLite::WriteBool(&loc_2 + 1, *(this + 48), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 8) == 0 )
  {
LABEL_5:
    if ( (v6 & 0x10) == 0 )
      goto LABEL_6;
LABEL_13:
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 3, *(this + 13), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_7;
  }
LABEL_12:
  google::protobuf::internal::WireFormatLite::WriteUInt64(&loc_2 + 2, *(this + 5), output, v3);
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


// CGameInfo_CDotaGameInfo_CPlayerInfo::SerializeWithCachedSizesToArray  (line 1676, @0x0000000001b3fcc0, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteStringToArray, WriteTagToArray, WriteUInt64NoTagToArray, WriteUInt64ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CGameInfo_CDotaGameInfo::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::SerializeWithCachedSizesToArray(
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  google::protobuf::io::CodedOutputStream *v7; // rdi
  google::protobuf::uint8 v8; // dl
  google::protobuf::io::CodedOutputStream *v9; // rdi
  unsigned __int8 *v10; // rdx
  google::protobuf::io::CodedOutputStream *v11; // rdi
  google::protobuf::uint8 *v12; // rsi
  __int64 v13; // rdx

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
    v8 = *(this + 48);
    *result = 24;
    result += 2;
    *(result - 1) = v8;
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v9 = *(this + 5);
    *result = 32;
    result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v9, (result + 1), v4);
    LODWORD(v4) = *(this + 4);
  }
  v10 = (v4 & 0x10);
  if ( v10 != 0 )
  {
    v11 = *(this + 13);
    v12 = result + 1;
    *result = 40;
    if ( v11 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v11, v12, v10);
    }
    else if ( v11 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v11, v12, v10);
    }
    else
    {
      result[1] = v11;
      result += 2;
    }
  }
  v13 = *(this + 1);
  if ( v13 != 0 && *(v13 + 8) != *v13 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v13);
  return result;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::ByteSize  (line 1724, @0x0000000001b3f600, libserver.so)  // inlines: Int32Size, StringSize, UInt64Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
// callers: CGameInfo_CDotaGameInfo::ByteSize
int __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::ByteSize(const CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  unsigned __int64 v1; // rsi
  int v3; // ebx
  int v4; // edx
  __int64 v5; // rax
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // eax
  _QWORD *v9; // rbx
  google::protobuf::io::CodedOutputStream *v10; // rdi
  int v11; // eax
  int v12; // ecx
  _QWORD *v13; // r13
  google::protobuf::io::CodedOutputStream *v14; // rdi
  int v15; // eax
  int v16; // ecx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_8;
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
    {
LABEL_4:
      if ( (v4 & 4) != 0 )
        v3 += 2;
      if ( (v4 & 8) == 0 )
        goto LABEL_7;
      goto LABEL_16;
    }
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_4;
  }
  v13 = *(this + 4);
  v14 = *(*v13 - 24LL);
  v15 = 1;
  v16 = v14;
  if ( v14 > 0x7F )
  {
    v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
    v16 = *(*v13 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v15 + v16 + 1;
  if ( (v4 & 4) != 0 )
    v3 += 2;
  if ( (v4 & 8) == 0 )
  {
LABEL_7:
    if ( (v4 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_12;
  }
LABEL_16:
  v3 += google::protobuf::io::CodedOutputStream::VarintSize64(*(this + 5), v1) + 1;
  if ( (*(this + 4) & 0x10) != 0 )
  {
LABEL_12:
    v7 = *(this + 13);
    v8 = 11;
    if ( v7 >= 0 )
    {
      LOBYTE(v8) = 2;
      if ( v7 > 0x7F )
        v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1) + 1;
    }
    v3 += v8;
  }
LABEL_8:
  v5 = *(this + 1);
  if ( v5 != 0 && *(v5 + 8) != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v5);
  *(this + 5) = v3;
  return v3;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom  (line 1773, @0x0000000001b44530, libserver.so)  // inlines: dynamic_cast_if_available<const CGameInfo_CDotaGameInfo_CPlayerInfo*, const google::protobuf::Message*>
// calls: __dynamic_cast, CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CGameInfo_CDotaGameInfo_CPlayerInfo
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CGameInfo_CDotaGameInfo_CPlayerInfo *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      1774);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CGameInfo_CDotaGameInfo_CPlayerInfo,
               0)) != 0 )
  {
    CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom  (line 1785, @0x0000000001b44380, libserver.so)  // inlines: set_game_team, set_has_game_team, set_has_hero_name, set_has_is_fake_client, set_has_player_name, set_has_steamid, set_hero_name, set_is_fake_client, set_player_name, set_steamid
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo, CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom, CGameInfo_CDotaGameInfo_CPlayerInfo::CopyFrom, CGameInfo_CDotaGameInfo::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const from)
{
  int v4; // eax
  char v5; // al
  __int64 v6; // rax
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      1786);
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
      {
LABEL_6:
        if ( (v4 & 4) == 0 )
        {
LABEL_8:
          if ( (v4 & 8) != 0 )
          {
            v6 = *(from + 5);
            *(this + 4) |= 8u;
            *(this + 5) = v6;
            v4 = *(from + 4);
          }
          if ( (v4 & 0x10) != 0 )
          {
            v7 = *(from + 13);
            *(this + 4) |= 0x10u;
            *(this + 13) = v7;
          }
          goto LABEL_12;
        }
LABEL_7:
        v5 = *(from + 48);
        *(this + 4) |= 4u;
        *(this + 48) = v5;
        v4 = *(from + 4);
        goto LABEL_8;
      }
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v8 = *(from + 4);
    v9 = *(this + 4);
    *(this + 4) |= 2u;
    std::string::assign(v9, v8);
    v4 = *(from + 4);
    if ( (v4 & 4) == 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
LABEL_12:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::CopyFrom  (line 1807, @0x0000000001b3bd90, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::CopyFrom(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::CopyFrom  (line 1813, @0x0000000001b44610, libserver.so)
// calls: CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::CopyFrom(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom(this, from);
  }
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::IsInitialized  (line 1819, @0x0000000001b3bdd0, libserver.so)
bool __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::IsInitialized(
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  return 1;
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::Swap  (line 1824, @0x0000000001b44650, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::Swap(
        CGameInfo_CDotaGameInfo_CPlayerInfo *const this,
        CGameInfo_CDotaGameInfo_CPlayerInfo *other)
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
    LOBYTE(v3) = *(this + 48);
    *(this + 48) = *(other + 48);
    *(other + 48) = v3;
    v4 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
    LODWORD(v4) = *(this + 13);
    *(this + 13) = *(other + 13);
    *(other + 13) = v4;
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


// CGameInfo_CDotaGameInfo_CPlayerInfo::GetMetadata  (line 1837, @0x0000000001b40990, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_descriptor_, `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_reflection_
google::protobuf::Metadata __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::GetMetadata(
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_descriptor_;
  result.reflection = `anonymous namespace'::CGameInfo_CDotaGameInfo_CPlayerInfo_reflection_;
  return result;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent  (line 1854, @0x0000000001b446d0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CGameInfo_CDotaGameInfo_CHeroSelectEvent::New, CGameInfo_CDotaGameInfo::MergePartialFromCodedStream, CGameInfo_CDotaGameInfo::MergeFrom, protobuf_AddDesc_demo_2eproto, CDOTAHLTVDirector::FinishRecording
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  *this = off_3F7B190;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::InitAsDefaultInstance  (line 1860, @0x0000000001b44fc0, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::InitAsDefaultInstance(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  ;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent  (line 1863, @0x0000000001b45180, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const from)
{
  *this = off_3F7B190;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
  CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom(this, from);
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::SharedCtor  (line 1870, @0x0000000001b44fd0, libserver.so)  // inlines: memset
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::SharedCtor(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  *(this + 5) = 0;
  *(this + 24) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 4) = 0;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::~CGameInfo_CDotaGameInfo_CHeroSelectEvent  (line 1878, @0x0000000001b3c560, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::~CGameInfo_CDotaGameInfo_CHeroSelectEvent(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7B190;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::~CGameInfo_CDotaGameInfo_CHeroSelectEvent  (line 1878, @0x0000000001b3c590, libserver.so)  // inlines: ~CGameInfo_CDotaGameInfo_CHeroSelectEvent
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::~CGameInfo_CDotaGameInfo_CHeroSelectEvent(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7B190;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::SharedDtor  (line 1883, @0x0000000001b45000, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::SharedDtor(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  ;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::SetCachedSize  (line 1888, @0x0000000001b3bde0, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::SetCachedSize(
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
        int size)
{
  *(this + 5) = size;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::descriptor  (line 1893, @0x0000000001b45010, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_descriptor_
const google::protobuf::Descriptor *__cdecl CGameInfo_CDotaGameInfo_CHeroSelectEvent::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_descriptor_;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance  (line 1898, @0x0000000001b4e010, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_
const CGameInfo_CDotaGameInfo_CHeroSelectEvent *__cdecl CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance()
{
  const CGameInfo_CDotaGameInfo_CHeroSelectEvent *result; // rax

  result = CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_;
  if ( CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CGameInfo_CDotaGameInfo_CHeroSelectEvent::default_instance_;
  }
  return result;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::New  (line 1905, @0x0000000001b44730, libserver.so)
// calls: operator new, CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent, operator delete, _Unwind_Resume
CGameInfo_CDotaGameInfo_CHeroSelectEvent *__fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::New(
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  CGameInfo_CDotaGameInfo_CHeroSelectEvent *v1; // rbx

  v1 = operator new(0x28u);
  CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent(v1);
  return v1;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::Clear  (line 1909, @0x0000000001b3c790, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::Clear(CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  char *v2; // rdi

  *(this + 3) = 0;
  v2 = this + 8;
  *(v2 + 6) = 0;
  *(v2 + 2) = 0;
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergePartialFromCodedStream  (line 1929, @0x0000000001b41fe0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, set_has_hero_id, set_has_is_pick, set_has_team
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *)
// callers: CGameInfo_CDotaGameInfo::MergePartialFromCodedStream
bool __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergePartialFromCodedStream(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
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

  v3 = &v21;
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
          if ( google::protobuf::internal::WireFormat::SkipField(input, v11, v7, v3) == 0 )
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
        goto parse_team;
      }
      if ( v12 != 3 )
        break;
      if ( v11 != 24 )
        goto handle_unusual;
      v18 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_hero_id:
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
parse_team:
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
        goto parse_hero_id;
      }
    }
  }
handle_unusual:
  if ( v11 != 0 )
    goto LABEL_9;
  return 1;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::SerializeWithCachedSizes  (line 2005, @0x0000000001b3d6b0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *)
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::SerializeWithCachedSizes(
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
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


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::SerializeWithCachedSizesToArray  (line 2030, @0x0000000001b3ea90, libserver.so)  // inlines: WriteBoolNoTagToArray, WriteBoolToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CGameInfo_CDotaGameInfo::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::SerializeWithCachedSizesToArray(
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
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


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::ByteSize  (line 2056, @0x0000000001b3d520, libserver.so)  // inlines: UInt32Size, VarintSize32, empty, has_is_pick
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CGameInfo_CDotaGameInfo::ByteSize
int __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::ByteSize(
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
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


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom  (line 2091, @0x0000000001b45210, libserver.so)  // inlines: dynamic_cast_if_available<const CGameInfo_CDotaGameInfo_CHeroSelectEvent*, const google::protobuf::Message*>
// calls: __dynamic_cast, CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CGameInfo_CDotaGameInfo_CHeroSelectEvent
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CGameInfo_CDotaGameInfo_CHeroSelectEvent *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      2092);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CGameInfo_CDotaGameInfo_CHeroSelectEvent,
               0)) != 0 )
  {
    CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom  (line 2103, @0x0000000001b450a0, libserver.so)  // inlines: set_has_hero_id, set_has_is_pick, set_has_team, set_hero_id, set_is_pick, set_team
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent, CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom, CGameInfo_CDotaGameInfo_CHeroSelectEvent::CopyFrom, CGameInfo_CDotaGameInfo::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      2104);
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


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::CopyFrom  (line 2119, @0x0000000001b3bdf0, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::CopyFrom(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::CopyFrom  (line 2125, @0x0000000001b452f0, libserver.so)
// calls: CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::CopyFrom(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom(this, from);
  }
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::IsInitialized  (line 2131, @0x0000000001b3be30, libserver.so)
bool __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::IsInitialized(
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  return 1;
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::Swap  (line 2136, @0x0000000001b45330, libserver.so)  // inlines: Swap, swap<bool>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::Swap(
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this,
        CGameInfo_CDotaGameInfo_CHeroSelectEvent *other)
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


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::GetMetadata  (line 2147, @0x0000000001b40a30, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_descriptor_, `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_reflection_
google::protobuf::Metadata __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::GetMetadata(
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_descriptor_;
  result.reflection = `anonymous namespace'::CGameInfo_CDotaGameInfo_CHeroSelectEvent_reflection_;
  return result;
}


// CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo  (line 2172, @0x0000000001b454b0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CGameInfo_CDotaGameInfo::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CGameInfo_CDotaGameInfo::New, CGameInfo::MergePartialFromCodedStream, CGameInfo::MergeFrom, protobuf_AddDesc_demo_2eproto, CGameInfo::mutable_dota, CDOTAHLTVDirector::FinishRecording
void __fastcall CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(CGameInfo_CDotaGameInfo *const this)
{
  *this = off_3F7B250;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 8) = 0;
  *(this + 18) = 0;
  *(this + 19) = 0;
  *(this + 20) = 0;
  CGameInfo_CDotaGameInfo::SharedCtor(this);
}


// CGameInfo_CDotaGameInfo::InitAsDefaultInstance  (line 2178, @0x0000000001b45390, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo::InitAsDefaultInstance(CGameInfo_CDotaGameInfo *const this)
{
  ;
}


// CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo  (line 2181, @0x0000000001b45d40, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CGameInfo_CDotaGameInfo::SharedCtor, CGameInfo_CDotaGameInfo::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(
        CGameInfo_CDotaGameInfo *const this,
        const CGameInfo_CDotaGameInfo *const from)
{
  *this = off_3F7B250;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 8) = 0;
  *(this + 18) = 0;
  *(this + 19) = 0;
  *(this + 20) = 0;
  CGameInfo_CDotaGameInfo::SharedCtor(this);
  CGameInfo_CDotaGameInfo::MergeFrom(this, from);
}


// CGameInfo_CDotaGameInfo::SharedCtor  (line 2188, @0x0000000001b453a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo
void __fastcall CGameInfo_CDotaGameInfo::SharedCtor(CGameInfo_CDotaGameInfo *const this)
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
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  v3 = google::protobuf::internal::empty_string_;
  *(this + 22) = 0;
  *(this + 23) = 0;
  *(this + 26) = 0;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  v5 = google::protobuf::internal::empty_string_;
  *(this + 12) = v4;
  v6 = operator new(8u);
  std::string::string(v6, v5);
  *(this + 14) = v6;
  *(this + 27) = 0;
  *(this + 4) = 0;
}


// CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo  (line 2203, @0x0000000001b45830, libserver.so)  // inlines: ~RepeatedPtrField
// calls: CGameInfo_CDotaGameInfo::SharedDtor, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo
void __fastcall CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo(CGameInfo_CDotaGameInfo *const this)
{
  *this = off_3F7B250;
  CGameInfo_CDotaGameInfo::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>(
    (this + 64),
    (this + 76));
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>(
    (this + 40),
    (this + 52));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo  (line 2203, @0x0000000001b45880, libserver.so)
// calls: CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo, operator delete
void __fastcall CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo(CGameInfo_CDotaGameInfo *const this)
{
  CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo(this);
  operator delete(this);
}


// CGameInfo_CDotaGameInfo::SharedDtor  (line 2208, @0x0000000001b45770, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo
void __fastcall CGameInfo_CDotaGameInfo::SharedDtor(CGameInfo_CDotaGameInfo *const this)
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

  v2 = *(this + 12);
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
  v5 = *(this + 14);
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


// CGameInfo_CDotaGameInfo::SetCachedSize  (line 2215, @0x0000000001b3be40, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo::SetCachedSize(const CGameInfo_CDotaGameInfo *const this, int size)
{
  *(this + 5) = size;
}


// CGameInfo_CDotaGameInfo::descriptor  (line 2220, @0x0000000001b458a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_
const google::protobuf::Descriptor *__cdecl CGameInfo_CDotaGameInfo::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_;
}


// CGameInfo_CDotaGameInfo::default_instance  (line 2225, @0x0000000001b4e040, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CGameInfo_CDotaGameInfo::default_instance_
const CGameInfo_CDotaGameInfo *__cdecl CGameInfo_CDotaGameInfo::default_instance()
{
  const CGameInfo_CDotaGameInfo *result; // rax

  result = CGameInfo_CDotaGameInfo::default_instance_;
  if ( CGameInfo_CDotaGameInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CGameInfo_CDotaGameInfo::default_instance_;
  }
  return result;
}


// CGameInfo_CDotaGameInfo::New  (line 2232, @0x0000000001b45560, libserver.so)
// calls: operator new, CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo, operator delete, _Unwind_Resume
CGameInfo_CDotaGameInfo *__fastcall CGameInfo_CDotaGameInfo::New(const CGameInfo_CDotaGameInfo *const this)
{
  CGameInfo_CDotaGameInfo *v1; // rbx

  v1 = operator new(0x78u);
  CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(v1);
  return v1;
}


// CGameInfo_CDotaGameInfo::Clear  (line 2236, @0x0000000001b3cd90, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, Clear<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
// callers: CGameInfo::Clear
void __fastcall CGameInfo_CDotaGameInfo::Clear(CGameInfo_CDotaGameInfo *const this)
{
  int v2; // eax
  __int64 v3; // r13
  int v4; // r12d
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rdi
  bool v10; // zf

  v2 = *(this + 4);
  if ( (v2 & 0xD7) != 0 )
  {
    *(this + 3) = 0;
    *(this + 4) = 0;
    *(this + 11) = 0;
    *(this + 26) = 0;
  }
  if ( (v2 & 0x700) != 0 )
  {
    if ( (v2 & 0x100) != 0 )
    {
      std::string::_M_mutate(*(this + 12), 0, *(**(this + 12) - 24LL), 0);
      if ( (*(this + 4) & 0x200) == 0 )
        goto LABEL_6;
    }
    else if ( (v2 & 0x200) == 0 )
    {
LABEL_6:
      *(this + 27) = 0;
      goto LABEL_7;
    }
    std::string::_M_mutate(*(this + 14), 0, *(**(this + 14) - 24LL), 0);
    goto LABEL_6;
  }
LABEL_7:
  v3 = 0;
  v4 = 0;
  while ( v4 < *(this + 12) )
  {
    ++v4;
    v5 = *(*(this + 5) + v3);
    v3 += 8;
    (*(*v5 + 32LL))(v5);
  }
  v6 = *(this + 18);
  v7 = 0;
  v8 = 0;
  *(this + 12) = 0;
  if ( v6 > 0 )
  {
    do
    {
      ++v8;
      v9 = *(*(this + 8) + v7);
      v7 += 8;
      (*(*v9 + 32LL))(v9);
    }
    while ( v8 < *(this + 18) );
  }
  v10 = *(this + 1) == 0;
  *(this + 18) = 0;
  *(this + 4) = 0;
  if ( !v10 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CGameInfo_CDotaGameInfo::MergePartialFromCodedStream  (line 2271, @0x0000000001b44770, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CGameInfo_CDotaGameInfo_CHeroSelectEvent>, ReadMessageNoVirtual<CGameInfo_CDotaGameInfo_CPlayerInfo>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)4u>, ReadPrimitive<unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)13u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, add_picks_bans, add_player_info, mutable_dire_team_tag, mutable_radiant_team_tag, set_has_dire_team_id, set_has_dire_team_tag, set_has_end_time, set_has_game_mode, set_has_game_winner, set_has_leagueid, set_has_match_id, set_has_radiant_team_id, set_has_radiant_team_tag
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), operator new, CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent, google::protobuf::io::CodedInputStream::PushLimit(int), CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo, CGameInfo_CDotaGameInfo_CPlayerInfo::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int) (15 total)
// callers: CGameInfo::MergePartialFromCodedStream
// globals: jpt_1B447E8
bool __fastcall CGameInfo_CDotaGameInfo::MergePartialFromCodedStream(
        CGameInfo_CDotaGameInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  const google::protobuf::uint8 *buffer; // rax
  unsigned __int64 current_limit; // rcx
  std::string *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  const google::protobuf::uint8 *v9; // rax
  int v10; // eax
  const google::protobuf::uint8 *v11; // rax
  int v12; // eax
  const google::protobuf::uint8 *v13; // rax
  int v14; // eax
  int v15; // esi
  __int64 v16; // rax
  CGameInfo_CDotaGameInfo_CHeroSelectEvent *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  const google::protobuf::uint8 *v20; // rax
  int v21; // eax
  bool v22; // cc
  int v23; // eax
  __int64 v24; // rdx
  const google::protobuf::uint8 *v25; // rax
  int v26; // eax
  const google::protobuf::uint8 *v27; // rax
  unsigned int v28; // edx
  const google::protobuf::uint8 *v29; // rax
  const google::protobuf::uint8 *v30; // rax
  __int64 v31; // rax
  int v32; // esi
  __int64 v33; // rax
  CGameInfo_CDotaGameInfo_CPlayerInfo *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  const google::protobuf::uint8 *v37; // rax
  int v38; // eax
  int recursion_depth; // eax
  __int64 v40; // rdx
  unsigned int v41; // edx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  unsigned int *v44; // [rsp+8h] [rbp-58h]
  unsigned int *v45; // [rsp+10h] [rbp-50h]
  int v46; // [rsp+1Ch] [rbp-44h]
  int v47; // [rsp+1Ch] [rbp-44h]
  unsigned int v48[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v45 = (this + 108);
  buffer = input->buffer_;
  current_limit = this + 104;
  buffer_end = input->buffer_end_;
  v44 = (this + 104);
  while ( 1 )
  {
LABEL_2:
    while ( buffer < buffer_end )
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
          v30 = input->buffer_;
          if ( v30 >= input->buffer_end_ || ((v31 = *v30) & 0x80u) != 0LL )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, this + 3) == 0 )
              return 0;
          }
          else
          {
            *(this + 3) = v31;
            ++input->buffer_;
          }
          *(this + 4) |= 1u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer < buffer_end && *buffer == 16 )
          {
            v27 = buffer + 1;
            input->buffer_ = v27;
            goto parse_game_mode;
          }
          continue;
        case 2u:
          if ( v8 != 16 )
            goto handle_unusual;
          v27 = input->buffer_;
          buffer_end = input->buffer_end_;
parse_game_mode:
          if ( v27 >= buffer_end || ((v28 = *v27) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v48);
            if ( !result )
              return result;
            v28 = v48[0];
          }
          else
          {
            input->buffer_ = v27 + 1;
          }
          *(this + 4) |= 2u;
          *(this + 8) = v28;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 24 )
            continue;
          v29 = buffer + 1;
          input->buffer_ = v29;
parse_game_winner:
          if ( buffer_end <= v29 || ((v41 = *v29) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v48);
            if ( !result )
              return result;
            v41 = v48[0];
          }
          else
          {
            input->buffer_ = v29 + 1;
          }
          *(this + 4) |= 4u;
          *(this + 9) = v41;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 34 )
            continue;
          input->buffer_ = buffer + 1;
LABEL_85:
          v32 = *(this + 13);
          v33 = *(this + 12);
          if ( v33 >= v32 )
          {
LABEL_86:
            if ( v32 == *(this + 14) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve((this + 40), v32 + 1);
            v34 = operator new(0x38u);
            CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo(v34);
            v35 = *(this + 12);
            v36 = *(this + 5);
            ++*(this + 13);
            *(this + 12) = v35 + 1;
            *(v36 + 8 * v35) = v34;
            goto LABEL_89;
          }
          while ( 1 )
          {
            v40 = *(this + 5);
            *(this + 12) = v33 + 1;
            v34 = *(v40 + 8 * v33);
LABEL_89:
            v37 = input->buffer_;
            if ( v37 >= input->buffer_end_ || *v37 < 0 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v48) == 0 )
                return 0;
            }
            else
            {
              v48[0] = *v37;
              input->buffer_ = v37 + 1;
            }
            v38 = input->recursion_depth_ + 1;
            v22 = input->recursion_limit_ < v38;
            input->recursion_depth_ = v38;
            if ( v22 )
              return 0;
            v47 = google::protobuf::io::CodedInputStream::PushLimit(input, v48[0]);
            if ( !CGameInfo_CDotaGameInfo_CPlayerInfo::MergePartialFromCodedStream(v34, input)
              || !input->legitimate_message_end_ )
            {
              return 0;
            }
            google::protobuf::io::CodedInputStream::PopLimit(input, v47);
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
            input->buffer_ = buffer + 1;
            v33 = *(this + 12);
            v32 = *(this + 13);
            if ( v33 >= v32 )
              goto LABEL_86;
          }
          if ( current_limit != 40 )
            continue;
          v25 = buffer + 1;
          input->buffer_ = v25;
parse_leagueid:
          if ( v25 >= buffer_end || ((v26 = *v25) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 22) == 0 )
              return 0;
          }
          else
          {
            *(this + 22) = v26;
            ++input->buffer_;
          }
          *(this + 4) |= 0x10u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 50 )
            continue;
          input->buffer_ = buffer + 1;
LABEL_45:
          v15 = *(this + 19);
          v16 = *(this + 18);
          if ( v16 >= v15 )
          {
LABEL_46:
            if ( v15 == *(this + 20) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve((this + 64), v15 + 1);
            v17 = operator new(0x28u);
            CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent(v17);
            v18 = *(this + 18);
            v19 = *(this + 8);
            ++*(this + 19);
            *(this + 18) = v18 + 1;
            *(v19 + 8 * v18) = v17;
            goto LABEL_49;
          }
          while ( 1 )
          {
            v24 = *(this + 8);
            *(this + 18) = v16 + 1;
            v17 = *(v24 + 8 * v16);
LABEL_49:
            v20 = input->buffer_;
            if ( v20 >= input->buffer_end_ || *v20 < 0 )
            {
              if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v48) == 0 )
                return 0;
            }
            else
            {
              v48[0] = *v20;
              input->buffer_ = v20 + 1;
            }
            v21 = input->recursion_depth_ + 1;
            v22 = input->recursion_limit_ < v21;
            input->recursion_depth_ = v21;
            if ( v22 )
              return 0;
            v46 = google::protobuf::io::CodedInputStream::PushLimit(input, v48[0]);
            if ( !CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergePartialFromCodedStream(v17, input)
              || !input->legitimate_message_end_ )
            {
              return 0;
            }
            google::protobuf::io::CodedInputStream::PopLimit(input, v46);
            v23 = input->recursion_depth_;
            if ( v23 > 0 )
              input->recursion_depth_ = v23 - 1;
            buffer = input->buffer_;
            buffer_end = input->buffer_end_;
            if ( buffer >= buffer_end )
              goto LABEL_2;
            current_limit = *buffer;
            if ( current_limit != 50 )
              break;
            input->buffer_ = buffer + 1;
            v16 = *(this + 18);
            v15 = *(this + 19);
            if ( v16 >= v15 )
              goto LABEL_46;
          }
          if ( current_limit != 56 )
            continue;
          v13 = buffer + 1;
          input->buffer_ = v13;
parse_radiant_team_id:
          if ( v13 >= buffer_end || ((v14 = *v13) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, this + 23) == 0 )
              return 0;
          }
          else
          {
            *(this + 23) = v14;
            ++input->buffer_;
          }
          *(this + 4) |= 0x40u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 64 )
            continue;
          v11 = buffer + 1;
          input->buffer_ = v11;
parse_dire_team_id:
          if ( buffer_end <= v11 || ((v12 = *v11) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v44) == 0 )
              return 0;
          }
          else
          {
            *(this + 26) = v12;
            ++input->buffer_;
          }
          *(this + 4) |= 0x80u;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 74 )
            continue;
          input->buffer_ = buffer + 1;
parse_radiant_team_tag:
          *(this + 4) |= 0x100u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 12), buffer_end) == 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 82 )
            continue;
          input->buffer_ = buffer + 1;
parse_dire_team_tag:
          *(this + 4) |= 0x200u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 14), buffer_end) == 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
          if ( buffer >= buffer_end || *buffer != 88 )
            continue;
          v9 = buffer + 1;
          input->buffer_ = v9;
parse_end_time:
          if ( v9 >= buffer_end || ((v10 = *v9) & 0x80u) != 0 )
          {
            if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v45) == 0 )
              return 0;
          }
          else
          {
            *(this + 27) = v10;
            ++input->buffer_;
          }
          *(this + 4) |= 0x400u;
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
          v29 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_game_winner;
        case 4u:
          if ( v8 == 34 )
            goto LABEL_85;
          goto handle_unusual;
        case 5u:
          if ( v8 != 40 )
            goto handle_unusual;
          v25 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_leagueid;
        case 6u:
          if ( v8 == 50 )
            goto LABEL_45;
          goto handle_unusual;
        case 7u:
          if ( v8 != 56 )
            goto handle_unusual;
          v13 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_radiant_team_id;
        case 8u:
          if ( v8 != 64 )
            goto handle_unusual;
          v11 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_dire_team_id;
        case 9u:
          if ( v8 == 74 )
            goto parse_radiant_team_tag;
          goto handle_unusual;
        case 0xAu:
          if ( v8 == 82 )
            goto parse_dire_team_tag;
          goto handle_unusual;
        case 0xBu:
          if ( v8 != 88 )
            goto handle_unusual;
          v9 = input->buffer_;
          buffer_end = input->buffer_end_;
          goto parse_end_time;
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


// CGameInfo_CDotaGameInfo::SerializeWithCachedSizes  (line 2469, @0x0000000001b3d860, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, empty, picks_bans, player_info
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt64(int,ulong,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteUInt32(int,uint,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CGameInfo_CDotaGameInfo::SerializeWithCachedSizes(
        const CGameInfo_CDotaGameInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  __int64 i; // r12
  __int64 j; // r12
  int v9; // eax
  _QWORD *v10; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 2) == 0 )
      goto LABEL_3;
LABEL_23:
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 8), output, v3);
    if ( (*(this + 4) & 4) == 0 )
      goto LABEL_4;
    goto LABEL_24;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt64(&loc_0 + 1, *(this + 3), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 2) != 0 )
    goto LABEL_23;
LABEL_3:
  if ( (v6 & 4) != 0 )
LABEL_24:
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(this + 9), output, v3);
LABEL_4:
  for ( i = 0; *(this + 12) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 2, *(*(this + 5) + 8 * i), output, v3);
  if ( (*(this + 16) & 0x10) != 0 )
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_2 + 3, *(this + 22), output, v3);
  for ( j = 0; j < *(this + 18); ++j )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_6, *(*(this + 8) + 8 * j), output, v3);
  v9 = *(this + 4);
  if ( (v9 & 0x40) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&loc_6 + 1, *(this + 23), output, v3);
    v9 = *(this + 4);
  }
  if ( (v9 & 0x80u) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_8, *(this + 26), output, v3);
    v9 = *(this + 4);
  }
  if ( (v9 & 0x100) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_9, *(this + 12), output, v3);
    v9 = *(this + 4);
  }
  if ( (v9 & 0x200) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&stru_A, *(this + 14), output, v3);
    v9 = *(this + 4);
  }
  if ( (v9 & 0x400) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteUInt32(&stru_B, *(this + 27), output, v3);
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


// CGameInfo_CDotaGameInfo::SerializeWithCachedSizesToArray  (line 2546, @0x0000000001b412d0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, GetCachedSize, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CGameInfo_CDotaGameInfo_CHeroSelectEvent>, WriteMessageNoVirtualToArray<CGameInfo_CDotaGameInfo_CPlayerInfo>, WriteStringToArray, WriteTagToArray, WriteUInt32NoTagToArray, WriteUInt32ToArray, WriteUInt64NoTagToArray, WriteUInt64ToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, picks_bans, player_info
// calls: google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *), CGameInfo_CDotaGameInfo_CPlayerInfo::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), CGameInfo_CDotaGameInfo_CHeroSelectEvent::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CGameInfo::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CGameInfo_CDotaGameInfo::SerializeWithCachedSizesToArray(
        const CGameInfo_CDotaGameInfo *const this,
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
  __int64 v12; // r13
  int v13; // r12d
  google::protobuf::uint8 *v14; // rsi
  unsigned __int8 *v15; // rdx
  unsigned int *v16; // r14
  google::protobuf::io::CodedOutputStream *v17; // rdi
  google::protobuf::io::CodedOutputStream *v18; // rdi
  __int64 v19; // r13
  int v20; // r12d
  google::protobuf::uint8 *v21; // rsi
  unsigned __int8 *v22; // rdx
  unsigned int *v23; // r14
  google::protobuf::io::CodedOutputStream *v24; // rdi
  unsigned __int8 *v25; // rdx
  google::protobuf::io::CodedOutputStream *v26; // rdi
  google::protobuf::io::CodedOutputStream *v27; // rdi
  google::protobuf::io::CodedOutputStream *v28; // rdi
  google::protobuf::io::CodedOutputStream *v29; // rdi
  google::protobuf::io::CodedOutputStream *v30; // rdi
  __int64 v31; // rdx

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
    v10 = *(this + 9);
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
  if ( *(this + 12) > 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v15 = *(this + 5);
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
      result = CGameInfo_CDotaGameInfo_CPlayerInfo::SerializeWithCachedSizesToArray(v16, v14);
    }
    while ( v13 < *(this + 12) );
  }
  if ( (*(this + 16) & 0x10) != 0 )
  {
    v18 = *(this + 22);
    *result = 40;
    if ( v18 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v18, result + 1, v9);
    }
    else
    {
      result[1] = v18;
      result += 2;
    }
  }
  if ( *(this + 18) > 0 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      v22 = *(this + 8);
      v23 = *&v22[v19];
      *result = 50;
      v24 = v23[5];
      if ( v24 <= 0x7F )
      {
        result[1] = v24;
        v21 = result + 2;
      }
      else
      {
        v21 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v24, result + 1, v22);
      }
      ++v20;
      v19 += 8;
      result = CGameInfo_CDotaGameInfo_CHeroSelectEvent::SerializeWithCachedSizesToArray(v23, v21);
    }
    while ( v20 < *(this + 18) );
  }
  v25 = *(this + 4);
  if ( (v25 & 0x40) != 0 )
  {
    v26 = *(this + 23);
    *result = 56;
    if ( v26 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v26, result + 1, v25);
    }
    else
    {
      result[1] = v26;
      result += 2;
    }
    v25 = *(this + 4);
  }
  if ( v25 < 0 )
  {
    v27 = *(this + 26);
    *result = 64;
    if ( v27 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v27, result + 1, v25);
    }
    else
    {
      result[1] = v27;
      result += 2;
    }
    v25 = *(this + 4);
  }
  if ( (BYTE1(v25) & 1) != 0 )
  {
    v28 = *(this + 12);
    *result = 74;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v28, (result + 1), v25);
    v25 = *(this + 4);
  }
  if ( (BYTE1(v25) & 2) != 0 )
  {
    v29 = *(this + 14);
    *result = 82;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v29, (result + 1), v25);
    v25 = *(this + 4);
  }
  BYTE1(v25) &= 4u;
  if ( BYTE1(v25) != 0 )
  {
    v30 = *(this + 27);
    *result = 88;
    if ( v30 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v30, result + 1, v25);
    }
    else
    {
      result[1] = v30;
      result += 2;
    }
  }
  v31 = *(this + 1);
  if ( v31 != 0 && *(v31 + 8) != *v31 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v31);
  return result;
}


// CGameInfo_CDotaGameInfo::ByteSize  (line 2628, @0x0000000001b41730, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CGameInfo_CDotaGameInfo_CHeroSelectEvent>, MessageSizeNoVirtual<CGameInfo_CDotaGameInfo_CPlayerInfo>, StringSize, UInt32Size, UInt64Size, VarintSize32, VarintSize32SignExtended, empty, picks_bans, player_info, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), CGameInfo_CDotaGameInfo_CPlayerInfo::ByteSize, CGameInfo_CDotaGameInfo_CHeroSelectEvent::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
// callers: CGameInfo::ByteSize
int __fastcall CGameInfo_CDotaGameInfo::ByteSize(const CGameInfo_CDotaGameInfo *const this)
{
  unsigned __int64 v1; // rsi
  int v2; // r15d
  int v4; // edx
  google::protobuf::io::CodedOutputStream *v5; // rdi
  int v6; // eax
  int v7; // eax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  int v10; // eax
  google::protobuf::io::CodedOutputStream *v11; // rdi
  int v12; // eax
  google::protobuf::io::CodedOutputStream *v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // r15d
  __int64 v17; // r14
  int v18; // r13d
  unsigned int v19; // esi
  unsigned int v20; // r12d
  int v21; // eax
  int v22; // eax
  int v23; // r15d
  __int64 v24; // r14
  int v25; // r13d
  unsigned int v26; // esi
  unsigned int v27; // r12d
  int v28; // eax
  __int64 v29; // rax
  google::protobuf::io::CodedOutputStream *v31; // rdi
  int v32; // eax
  google::protobuf::io::CodedOutputStream *v33; // rdi
  int v34; // eax
  int v35; // eax
  _QWORD *v36; // r12
  google::protobuf::io::CodedOutputStream *v37; // rdi
  int v38; // eax
  int v39; // ecx
  _QWORD *v40; // r12
  google::protobuf::io::CodedOutputStream *v41; // rdi
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // eax

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_22;
  if ( (v4 & 1) != 0 )
  {
    v35 = google::protobuf::io::CodedOutputStream::VarintSize64(*(this + 3), v1);
    v4 = *(this + 4);
    v2 = v35 + 1;
    if ( (v4 & 2) != 0 )
    {
LABEL_4:
      v5 = *(this + 8);
      v6 = 11;
      if ( v5 >= 0 )
      {
        LOBYTE(v6) = 2;
        if ( v5 > 0x7F )
        {
          v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
          v4 = *(this + 4);
          v6 = v7 + 1;
        }
      }
      v2 += v6;
    }
  }
  else if ( (v4 & 2) != 0 )
  {
    goto LABEL_4;
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 9);
    v9 = 11;
    if ( v8 >= 0 )
    {
      LOBYTE(v9) = 2;
      if ( v8 > 0x7F )
      {
        v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
        v4 = *(this + 4);
        v9 = v10 + 1;
      }
    }
    v2 += v9;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v11 = *(this + 22);
    v12 = 2;
    if ( v11 > 0x7F )
    {
      v46 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v11, v1);
      v4 = *(this + 4);
      v12 = v46 + 1;
    }
    v2 += v12;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v13 = *(this + 23);
    v14 = 2;
    if ( v13 > 0x7F )
    {
      v45 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v13, v1);
      v4 = *(this + 4);
      v14 = v45 + 1;
    }
    v2 += v14;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v33 = *(this + 26);
    v34 = 2;
    if ( v33 > 0x7F )
    {
      v44 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v33, v1);
      v4 = *(this + 4);
      v34 = v44 + 1;
    }
    v2 += v34;
  }
LABEL_22:
  if ( BYTE1(v4) == 0 )
    goto LABEL_26;
  if ( (v4 & 0x100) != 0 )
  {
    v36 = *(this + 12);
    v37 = *(*v36 - 24LL);
    v38 = 1;
    v39 = v37;
    if ( v37 > 0x7F )
    {
      v38 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v37, v1);
      v39 = *(*v36 - 24LL);
      v4 = *(this + 4);
    }
    v2 += v38 + v39 + 1;
    if ( (v4 & 0x200) == 0 )
    {
LABEL_25:
      if ( (v4 & 0x400) == 0 )
        goto LABEL_26;
      goto LABEL_40;
    }
  }
  else if ( (v4 & 0x200) == 0 )
  {
    goto LABEL_25;
  }
  v40 = *(this + 14);
  v41 = *(*v40 - 24LL);
  v42 = 1;
  v43 = v41;
  if ( v41 > 0x7F )
  {
    v42 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v41, v1);
    v43 = *(*v40 - 24LL);
    v4 = *(this + 4);
  }
  v2 += v42 + v43 + 1;
  if ( (v4 & 0x400) != 0 )
  {
LABEL_40:
    v31 = *(this + 27);
    v32 = 2;
    if ( v31 > 0x7F )
      v32 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v31, v1) + 1;
    v2 += v32;
  }
LABEL_26:
  v15 = *(this + 12);
  v16 = v15 + v2;
  if ( v15 > 0 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      v20 = CGameInfo_CDotaGameInfo_CPlayerInfo::ByteSize(*(*(this + 5) + v17));
      v21 = 1;
      if ( v20 > 0x7F )
        v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, v19);
      ++v18;
      v17 += 8;
      v16 += v21 + v20;
    }
    while ( v18 < *(this + 12) );
  }
  v22 = *(this + 18);
  v23 = v22 + v16;
  if ( v22 > 0 )
  {
    v24 = 0;
    v25 = 0;
    do
    {
      v27 = CGameInfo_CDotaGameInfo_CHeroSelectEvent::ByteSize(*(*(this + 8) + v24));
      v28 = 1;
      if ( v27 > 0x7F )
        v28 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v27, v26);
      ++v25;
      v24 += 8;
      v23 += v28 + v27;
    }
    while ( v25 < *(this + 18) );
  }
  v29 = *(this + 1);
  if ( v29 != 0 && *(v29 + 8) != *v29 )
    v23 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v29);
  *(this + 5) = v23;
  return v23;
}


// CGameInfo_CDotaGameInfo::MergeFrom  (line 2725, @0x0000000001b45e00, libserver.so)  // inlines: dynamic_cast_if_available<const CGameInfo_CDotaGameInfo*, const google::protobuf::Message*>
// calls: __dynamic_cast, CGameInfo_CDotaGameInfo::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CGameInfo_CDotaGameInfo
void __fastcall CGameInfo_CDotaGameInfo::MergeFrom(
        CGameInfo_CDotaGameInfo *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CGameInfo_CDotaGameInfo *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      2726);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CGameInfo_CDotaGameInfo, 0)) != 0 )
  {
    CGameInfo_CDotaGameInfo::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CGameInfo_CDotaGameInfo::MergeFrom  (line 2737, @0x0000000001b45930, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>, MergeFrom<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>, New, set_dire_team_id, set_dire_team_tag, set_end_time, set_game_mode, set_game_winner, set_has_dire_team_id, set_has_dire_team_tag, set_has_end_time, set_has_game_mode, set_has_game_winner, set_has_leagueid, set_has_match_id, set_has_radiant_team_id, set_has_radiant_team_tag, set_leagueid, set_match_id, set_radiant_team_id, set_radiant_team_tag
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo, CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom, CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent, CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage() (14 total)
// callers: CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo, CGameInfo_CDotaGameInfo::MergeFrom, CGameInfo_CDotaGameInfo::CopyFrom, CGameInfo::MergeFrom
// strings: "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): ", "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CGameInfo_CDotaGameInfo::MergeFrom(
        CGameInfo_CDotaGameInfo *const this,
        const CGameInfo_CDotaGameInfo *const from)
{
  __int64 v4; // r14
  int v5; // r13d
  CGameInfo_CDotaGameInfo_CPlayerInfo *v6; // r15
  __int64 v7; // rax
  CGameInfo_CDotaGameInfo_CPlayerInfo *v8; // rdi
  __int64 v9; // rdx
  const CGameInfo_CDotaGameInfo_CPlayerInfo *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // r13d
  CGameInfo_CDotaGameInfo_CHeroSelectEvent *v16; // r15
  __int64 v17; // rax
  CGameInfo_CDotaGameInfo_CHeroSelectEvent *v18; // rdi
  __int64 v19; // rdx
  const CGameInfo_CDotaGameInfo_CHeroSelectEvent *v20; // rsi
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  const std::string *v32; // rsi
  std::string *v33; // rdi
  const std::string *v34; // rsi
  std::string *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v39; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v40; // [rsp+8h] [rbp-68h]
  char v41; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v42; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v42,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      2738);
    v37 = google::protobuf::internal::LogMessage::operator<<(&v42, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v41, v37);
    google::protobuf::internal::LogMessage::~LogMessage(&v42);
  }
  v39 = (this + 40);
  if ( this + 40 == from + 40 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v42,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v38 = google::protobuf::internal::LogMessage::operator<<(&v42, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v41, v38);
    google::protobuf::internal::LogMessage::~LogMessage(&v42);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v39, *(from + 12) + *(this + 12));
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
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v39, v12 + 1);
        v6 = operator new(0x38u);
        CGameInfo_CDotaGameInfo_CPlayerInfo::CGameInfo_CDotaGameInfo_CPlayerInfo(v6);
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
      CGameInfo_CDotaGameInfo_CPlayerInfo::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 12) );
  }
  v40 = (this + 64);
  if ( this + 64 == from + 64 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v42,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v36 = google::protobuf::internal::LogMessage::operator<<(&v42, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v41, v36);
    google::protobuf::internal::LogMessage::~LogMessage(&v42);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v40, *(from + 18) + *(this + 18));
  if ( *(from + 18) > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v21 = *(this + 18);
      v22 = *(this + 19);
      if ( v21 >= v22 )
      {
        if ( v22 == *(this + 20) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v40, v22 + 1);
        v16 = operator new(0x28u);
        CGameInfo_CDotaGameInfo_CHeroSelectEvent::CGameInfo_CDotaGameInfo_CHeroSelectEvent(v16);
        v17 = *(this + 18);
        v18 = v16;
        v19 = *(this + 8);
        ++*(this + 19);
        *(this + 18) = v17 + 1;
        *(v19 + 8 * v17) = v16;
      }
      else
      {
        v23 = *(this + 8);
        *(this + 18) = v21 + 1;
        v18 = *(v23 + 8 * v21);
      }
      ++v15;
      v20 = *(*(from + 8) + v14);
      v14 += 8;
      CGameInfo_CDotaGameInfo_CHeroSelectEvent::MergeFrom(v18, v20);
    }
    while ( v15 < *(from + 18) );
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
      v26 = *(from + 8);
      *(this + 4) |= 2u;
      *(this + 8) = v26;
      v24 = *(from + 4);
    }
    if ( (v24 & 4) != 0 )
    {
      v27 = *(from + 9);
      *(this + 4) |= 4u;
      *(this + 9) = v27;
      v24 = *(from + 4);
    }
    if ( (v24 & 0x10) != 0 )
    {
      v28 = *(from + 22);
      *(this + 4) |= 0x10u;
      *(this + 22) = v28;
      v24 = *(from + 4);
    }
    if ( (v24 & 0x40) != 0 )
    {
      v29 = *(from + 23);
      *(this + 4) |= 0x40u;
      *(this + 23) = v29;
      v24 = *(from + 4);
    }
    if ( (v24 & 0x80u) != 0 )
    {
      v31 = *(from + 26);
      *(this + 4) |= 0x80u;
      *(this + 26) = v31;
      v24 = *(from + 4);
    }
  }
  if ( BYTE1(v24) == 0 )
    goto LABEL_41;
  if ( (v24 & 0x100) == 0 )
  {
    if ( (v24 & 0x200) == 0 )
      goto LABEL_39;
LABEL_42:
    v32 = *(from + 14);
    v33 = *(this + 14);
    *(this + 4) |= 0x200u;
    std::string::assign(v33, v32);
    if ( (*(from + 4) & 0x400) == 0 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v34 = *(from + 12);
  v35 = *(this + 12);
  *(this + 4) |= 0x100u;
  std::string::assign(v35, v34);
  v24 = *(from + 4);
  if ( (v24 & 0x200) != 0 )
    goto LABEL_42;
LABEL_39:
  if ( (v24 & 0x400) != 0 )
  {
LABEL_40:
    v30 = *(from + 27);
    *(this + 4) |= 0x400u;
    *(this + 27) = v30;
  }
LABEL_41:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CGameInfo_CDotaGameInfo::CopyFrom  (line 2775, @0x0000000001b3be50, libserver.so)
void __fastcall CGameInfo_CDotaGameInfo::CopyFrom(
        CGameInfo_CDotaGameInfo *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CGameInfo_CDotaGameInfo::CopyFrom  (line 2781, @0x0000000001b45ee0, libserver.so)
// calls: CGameInfo_CDotaGameInfo::MergeFrom
void __fastcall CGameInfo_CDotaGameInfo::CopyFrom(
        CGameInfo_CDotaGameInfo *const this,
        const CGameInfo_CDotaGameInfo *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CGameInfo_CDotaGameInfo::MergeFrom(this, from);
  }
}


// CGameInfo_CDotaGameInfo::IsInitialized  (line 2787, @0x0000000001b3be90, libserver.so)
bool __fastcall CGameInfo_CDotaGameInfo::IsInitialized(const CGameInfo_CDotaGameInfo *const this)
{
  return 1;
}


// CGameInfo_CDotaGameInfo::Swap  (line 2792, @0x0000000001b45f20, libserver.so)  // inlines: Swap, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CGameInfo_CDotaGameInfo::Swap(CGameInfo_CDotaGameInfo *const this, CGameInfo_CDotaGameInfo *other)
{
  __int64 v4; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

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
    v7 = *(this + 22);
    *(this + 22) = *(other + 22);
    *(other + 22) = v7;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap((this + 64), (other + 64));
    v8 = *(this + 23);
    *(this + 23) = *(other + 23);
    *(other + 23) = v8;
    v9 = *(this + 26);
    *(this + 26) = *(other + 26);
    *(other + 26) = v9;
    v10 = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v10;
    v11 = *(this + 14);
    *(this + 14) = *(other + 14);
    *(other + 14) = v11;
    LODWORD(v11) = *(this + 27);
    *(this + 27) = *(other + 27);
    *(other + 27) = v11;
    LODWORD(v11) = *(this + 4);
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


// CGameInfo_CDotaGameInfo::GetMetadata  (line 2811, @0x0000000001b40710, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_, `anonymous namespace'::CGameInfo_CDotaGameInfo_reflection_
google::protobuf::Metadata __fastcall CGameInfo_CDotaGameInfo::GetMetadata(const CGameInfo_CDotaGameInfo *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CGameInfo_CDotaGameInfo_descriptor_;
  result.reflection = `anonymous namespace'::CGameInfo_CDotaGameInfo_reflection_;
  return result;
}


// CGameInfo::CGameInfo  (line 2826, @0x0000000001b46020, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CGameInfo::New, CDemoFileInfo::MergePartialFromCodedStream, CDemoFileInfo::MergeFrom, protobuf_AddDesc_demo_2eproto, CDOTAHLTVDirector::FinishRecording
void __fastcall CGameInfo::CGameInfo(CGameInfo *const this)
{
  *this = off_3F7B310;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
}


// CGameInfo::InitAsDefaultInstance  (line 2832, @0x0000000001b4e070, libserver.so)  // inlines: default_instance
// calls: protobuf_AddDesc_demo_2eproto
// callers: protobuf_AddDesc_demo_2eproto
// globals: CGameInfo_CDotaGameInfo::default_instance_
void __fastcall CGameInfo::InitAsDefaultInstance(CGameInfo *const this)
{
  if ( CGameInfo_CDotaGameInfo::default_instance_ != 0 )
  {
    *(this + 3) = CGameInfo_CDotaGameInfo::default_instance_;
  }
  else
  {
    protobuf_AddDesc_demo_2eproto();
    *(this + 3) = CGameInfo_CDotaGameInfo::default_instance_;
  }
}


// CGameInfo::CGameInfo  (line 2836, @0x0000000001b46620, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CGameInfo::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CGameInfo::CGameInfo(CGameInfo *const this, const CGameInfo *const from)
{
  *this = off_3F7B310;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  CGameInfo::MergeFrom(this, from);
}


// CGameInfo::SharedCtor  (line 2843, @0x0000000001b46420, libserver.so)  // inlines: memset
void __fastcall CGameInfo::SharedCtor(CGameInfo *const this)
{
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
}


// CGameInfo::~CGameInfo  (line 2849, @0x0000000001b3c5d0, libserver.so)  // inlines: SharedDtor
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CGameInfo::~CGameInfo, CDOTAHLTVDirector::FinishRecording
// globals: CGameInfo::default_instance_
void __fastcall CGameInfo::~CGameInfo(CGameInfo *const this)
{
  __int64 v2; // rdi

  *this = off_3F7B310;
  if ( this != CGameInfo::default_instance_ )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
  }
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CGameInfo::~CGameInfo  (line 2849, @0x0000000001b3c620, libserver.so)
// calls: CGameInfo::~CGameInfo, operator delete
void __fastcall CGameInfo::~CGameInfo(CGameInfo *const this)
{
  CGameInfo::~CGameInfo(this);
  operator delete(this);
}


// CGameInfo::SharedDtor  (line 2854, @0x0000000001b46440, libserver.so)
// globals: CGameInfo::default_instance_
void __fastcall CGameInfo::SharedDtor(CGameInfo *const this)
{
  __int64 v1; // rdi

  if ( this != CGameInfo::default_instance_ )
  {
    v1 = *(this + 3);
    if ( v1 != 0 )
      (*(*v1 + 8LL))(v1);
  }
}


// CGameInfo::SetCachedSize  (line 2860, @0x0000000001b3bea0, libserver.so)
void __fastcall CGameInfo::SetCachedSize(const CGameInfo *const this, int size)
{
  *(this + 5) = size;
}


// CGameInfo::descriptor  (line 2865, @0x0000000001b46470, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CGameInfo_descriptor_
const google::protobuf::Descriptor *__cdecl CGameInfo::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CGameInfo_descriptor_;
}


// CGameInfo::default_instance  (line 2870, @0x0000000001b4e0b0, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CGameInfo::default_instance_
const CGameInfo *__cdecl CGameInfo::default_instance()
{
  const CGameInfo *result; // rax

  result = CGameInfo::default_instance_;
  if ( CGameInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CGameInfo::default_instance_;
  }
  return result;
}


// CGameInfo::New  (line 2877, @0x0000000001b46070, libserver.so)
// calls: operator new, CGameInfo::CGameInfo, operator delete, _Unwind_Resume
CGameInfo *__fastcall CGameInfo::New(const CGameInfo *const this)
{
  CGameInfo *v1; // rbx

  v1 = operator new(0x20u);
  CGameInfo::CGameInfo(v1);
  return v1;
}


// CGameInfo::Clear  (line 2881, @0x0000000001b3cee0, libserver.so)  // inlines: Clear, memset
// calls: CGameInfo_CDotaGameInfo::Clear, google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CDemoFileInfo::Clear
void __fastcall CGameInfo::Clear(CGameInfo *const this)
{
  CGameInfo_CDotaGameInfo *v2; // rdi
  bool v3; // zf

  if ( (*(this + 16) & 1) != 0 )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      CGameInfo_CDotaGameInfo::Clear(v2);
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CGameInfo::MergePartialFromCodedStream  (line 2889, @0x0000000001b455a0, libserver.so)  // inlines: Advance, DecrementRecursionDepth, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CGameInfo_CDotaGameInfo>, ReadTagWithCutoff, ReadVarint32, mutable_dota, set_has_dota
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::PushLimit(int), CGameInfo_CDotaGameInfo::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo, operator delete, _Unwind_Resume
// callers: CDemoFileInfo::MergePartialFromCodedStream
bool __fastcall CGameInfo::MergePartialFromCodedStream(
        CGameInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  CGameInfo_CDotaGameInfo *v10; // r15
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
    if ( v7 >> 3 != 4 || v7 != 34 )
      break;
    v10 = *(this + 3);
    *(this + 4) |= 1u;
    if ( v10 == 0 )
    {
      v10 = operator new(0x78u);
      CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(v10);
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
    if ( !CGameInfo_CDotaGameInfo::MergePartialFromCodedStream(v10, input) || !input->legitimate_message_end_ )
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


// CGameInfo::SerializeWithCachedSizes  (line 2933, @0x0000000001b3d750, libserver.so)  // inlines: dota, empty
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
// globals: CGameInfo::default_instance_
void __fastcall CGameInfo::SerializeWithCachedSizes(
        const CGameInfo *const this,
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
      containing_type = CGameInfo::default_instance_->containing_type_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 2, containing_type, output, v3);
  }
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CGameInfo::SerializeWithCachedSizesToArray  (line 2949, @0x0000000001b41560, libserver.so)  // inlines: GetCachedSize, WriteMessageNoVirtualToArray<CGameInfo_CDotaGameInfo>, WriteTagToArray, WriteVarint32ToArray, dota, empty
// calls: CGameInfo_CDotaGameInfo::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// callers: CDemoFileInfo::SerializeWithCachedSizesToArray
// globals: CGameInfo::default_instance_
google::protobuf::uint8 *__fastcall CGameInfo::SerializeWithCachedSizesToArray(
        const CGameInfo *const this,
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
      containing_type = CGameInfo::default_instance_->containing_type_;
    *target = 34;
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
    target = CGameInfo_CDotaGameInfo::SerializeWithCachedSizesToArray(containing_type, v6);
  }
  v7 = *(this + 1);
  if ( v7 == 0 || *(v7 + 8) == *v7 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v7);
}


// CGameInfo::ByteSize  (line 2967, @0x0000000001b41a00, libserver.so)  // inlines: LengthDelimitedSize, MessageSizeNoVirtual<CGameInfo_CDotaGameInfo>, VarintSize32, dota, empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), CGameInfo_CDotaGameInfo::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDemoFileInfo::ByteSize
// globals: CGameInfo::default_instance_
int __fastcall CGameInfo::ByteSize(const CGameInfo *const this)
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
      containing_type = CGameInfo::default_instance_->containing_type_;
    v8 = CGameInfo_CDotaGameInfo::ByteSize(containing_type);
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


// CGameInfo::MergeFrom  (line 2990, @0x0000000001b466a0, libserver.so)  // inlines: dynamic_cast_if_available<const CGameInfo*, const google::protobuf::Message*>
// calls: __dynamic_cast, CGameInfo::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CGameInfo
void __fastcall CGameInfo::MergeFrom(CGameInfo *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CGameInfo *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      2991);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CGameInfo, 0)) != 0 )
  {
    CGameInfo::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CGameInfo::MergeFrom  (line 3002, @0x0000000001b46500, libserver.so)  // inlines: dota, mutable_dota, set_has_dota
// calls: CGameInfo_CDotaGameInfo::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo, _Unwind_Resume, operator delete
// callers: CGameInfo::CGameInfo, CGameInfo::MergeFrom, CGameInfo::CopyFrom, CDemoFileInfo::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CGameInfo::default_instance_
void __fastcall CGameInfo::MergeFrom(CGameInfo *const this, const CGameInfo *const from)
{
  int v4; // eax
  const google::protobuf::Descriptor *containing_type; // r13
  CGameInfo_CDotaGameInfo *v6; // rdi
  __int64 v7; // rax
  CGameInfo_CDotaGameInfo *v8; // r14
  char v9; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v10; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      3003);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  v4 = *(from + 4);
  if ( v4 != 0 && (v4 & 1) != 0 )
  {
    containing_type = *(from + 3);
    if ( containing_type == 0 )
      containing_type = CGameInfo::default_instance_->containing_type_;
    v6 = *(this + 3);
    *(this + 4) |= 1u;
    if ( v6 == 0 )
    {
      v8 = operator new(0x78u);
      CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(v8);
      *(this + 3) = v8;
      v6 = v8;
    }
    CGameInfo_CDotaGameInfo::MergeFrom(v6, containing_type);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CGameInfo::CopyFrom  (line 3012, @0x0000000001b3beb0, libserver.so)
void __fastcall CGameInfo::CopyFrom(CGameInfo *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CGameInfo::CopyFrom  (line 3018, @0x0000000001b46780, libserver.so)
// calls: CGameInfo::MergeFrom
void __fastcall CGameInfo::CopyFrom(CGameInfo *const this, const CGameInfo *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CGameInfo::MergeFrom(this, from);
  }
}


// CGameInfo::IsInitialized  (line 3024, @0x0000000001b3bef0, libserver.so)
bool __fastcall CGameInfo::IsInitialized(const CGameInfo *const this)
{
  return 1;
}


// CGameInfo::Swap  (line 3029, @0x0000000001b467c0, libserver.so)  // inlines: Swap, swap<CGameInfo_CDotaGameInfo*>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CGameInfo::Swap(CGameInfo *const this, CGameInfo *other)
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


// CGameInfo::GetMetadata  (line 3038, @0x0000000001b407b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CGameInfo_descriptor_, `anonymous namespace'::CGameInfo_reflection_
google::protobuf::Metadata __fastcall CGameInfo::GetMetadata(const CGameInfo *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CGameInfo_descriptor_;
  result.reflection = `anonymous namespace'::CGameInfo_reflection_;
  return result;
}


// CDemoFileInfo::CDemoFileInfo  (line 3056, @0x0000000001b46850, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoFileInfo::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDemoFileInfo::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoFileInfo::CDemoFileInfo(CDemoFileInfo *const this)
{
  *this = off_3F7B3D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoFileInfo::SharedCtor(this);
}


// CDemoFileInfo::InitAsDefaultInstance  (line 3062, @0x0000000001b4e0e0, libserver.so)  // inlines: default_instance
// calls: protobuf_AddDesc_demo_2eproto
// callers: protobuf_AddDesc_demo_2eproto
// globals: CGameInfo::default_instance_
void __fastcall CDemoFileInfo::InitAsDefaultInstance(CDemoFileInfo *const this)
{
  if ( CGameInfo::default_instance_ != 0 )
  {
    *(this + 4) = CGameInfo::default_instance_;
  }
  else
  {
    protobuf_AddDesc_demo_2eproto();
    *(this + 4) = CGameInfo::default_instance_;
  }
}


// CDemoFileInfo::CDemoFileInfo  (line 3066, @0x0000000001b46b00, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoFileInfo::SharedCtor, CDemoFileInfo::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoFileInfo::CDemoFileInfo(CDemoFileInfo *const this, const CDemoFileInfo *const from)
{
  *this = off_3F7B3D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoFileInfo::SharedCtor(this);
  CDemoFileInfo::MergeFrom(this, from);
}


// CDemoFileInfo::SharedCtor  (line 3073, @0x0000000001b46810, libserver.so)  // inlines: memset
// callers: CDemoFileInfo::CDemoFileInfo
void __fastcall CDemoFileInfo::SharedCtor(CDemoFileInfo *const this)
{
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 10) = 0;
  *(this + 4) = 0;
  *(this + 4) = 0;
}


// CDemoFileInfo::~CDemoFileInfo  (line 3082, @0x0000000001b3c640, libserver.so)  // inlines: SharedDtor
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoFileInfo::~CDemoFileInfo
// globals: CDemoFileInfo::default_instance_
void __fastcall CDemoFileInfo::~CDemoFileInfo(CDemoFileInfo *const this)
{
  __int64 v2; // rdi

  *this = off_3F7B3D0;
  if ( this != CDemoFileInfo::default_instance_ )
  {
    v2 = *(this + 4);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
  }
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoFileInfo::~CDemoFileInfo  (line 3082, @0x0000000001b3c690, libserver.so)
// calls: CDemoFileInfo::~CDemoFileInfo, operator delete
void __fastcall CDemoFileInfo::~CDemoFileInfo(CDemoFileInfo *const this)
{
  CDemoFileInfo::~CDemoFileInfo(this);
  operator delete(this);
}


// CDemoFileInfo::SharedDtor  (line 3087, @0x0000000001b468d0, libserver.so)
// globals: CDemoFileInfo::default_instance_
void __fastcall CDemoFileInfo::SharedDtor(CDemoFileInfo *const this)
{
  __int64 v1; // rdi

  if ( this != CDemoFileInfo::default_instance_ )
  {
    v1 = *(this + 4);
    if ( v1 != 0 )
      (*(*v1 + 8LL))(v1);
  }
}


// CDemoFileInfo::SetCachedSize  (line 3093, @0x0000000001b3bf00, libserver.so)
void __fastcall CDemoFileInfo::SetCachedSize(const CDemoFileInfo *const this, int size)
{
  *(this + 5) = size;
}


// CDemoFileInfo::descriptor  (line 3098, @0x0000000001b46900, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoFileInfo_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoFileInfo::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoFileInfo_descriptor_;
}


// CDemoFileInfo::default_instance  (line 3103, @0x0000000001b4e120, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoFileInfo::default_instance_
const CDemoFileInfo *__cdecl CDemoFileInfo::default_instance()
{
  const CDemoFileInfo *result; // rax

  result = CDemoFileInfo::default_instance_;
  if ( CDemoFileInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoFileInfo::default_instance_;
  }
  return result;
}


// CDemoFileInfo::New  (line 3110, @0x0000000001b46890, libserver.so)
// calls: operator new, CDemoFileInfo::CDemoFileInfo, operator delete, _Unwind_Resume
CDemoFileInfo *__fastcall CDemoFileInfo::New(const CDemoFileInfo *const this)
{
  CDemoFileInfo *v1; // rbx

  v1 = operator new(0x30u);
  CDemoFileInfo::CDemoFileInfo(v1);
  return v1;
}


// CDemoFileInfo::Clear  (line 3114, @0x0000000001b3cf30, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), CGameInfo::Clear
void __fastcall CDemoFileInfo::Clear(CDemoFileInfo *const this)
{
  int v2; // eax
  bool v3; // zf
  CGameInfo *v4; // rdi

  v2 = *(this + 4);
  if ( (v2 & 0xF) != 0 )
  {
    *(this + 3) = 0;
    *(this + 10) = 0;
    if ( (v2 & 8) != 0 )
    {
      v4 = *(this + 4);
      if ( v4 != 0 )
        CGameInfo::Clear(v4);
    }
  }
  v3 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v3 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoFileInfo::MergePartialFromCodedStream  (line 3140, @0x0000000001b460b0, libserver.so)  // inlines: Advance, BufferSize, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadLittleEndian32, ReadMessageNoVirtual<CGameInfo>, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, memcpy, mutable_game_info, set_has_game_info, set_has_playback_frames, set_has_playback_ticks, set_has_playback_time
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CGameInfo::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), operator new, CGameInfo::CGameInfo, google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *), operator delete, _Unwind_Resume
bool __fastcall CDemoFileInfo::MergePartialFromCodedStream(
        CDemoFileInfo *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  unsigned int v8; // eax
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  const google::protobuf::uint8 *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // eax
  const google::protobuf::uint8 *v14; // rdx
  unsigned int v15; // eax
  const google::protobuf::uint8 *v16; // rdx
  unsigned int v17; // eax
  CGameInfo *v18; // r15
  const google::protobuf::uint8 *v19; // rax
  int v20; // eax
  bool v21; // cc
  int recursion_depth; // edx
  bool legitimate_message_end; // [rsp+8h] [rbp-48h]
  int v24; // [rsp+Ch] [rbp-44h]
  unsigned int v25[13]; // [rsp+1Ch] [rbp-34h] BYREF

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
      v8 = v7 >> 3;
      if ( v7 >> 3 == 2 )
      {
        if ( v7 != 16 )
          goto handle_unusual;
        v14 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_playback_ticks;
      }
      if ( v7 >> 3 <= 2 )
        break;
      if ( v8 == 3 )
      {
        if ( v7 != 24 )
          goto handle_unusual;
        v16 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_playback_frames;
      }
      if ( v8 != 4 || v7 != 34 )
        goto handle_unusual;
parse_game_info:
      v18 = *(this + 4);
      *(this + 4) |= 8u;
      if ( v18 == 0 )
      {
        v18 = operator new(0x20u);
        CGameInfo::CGameInfo(v18);
        *(this + 4) = v18;
      }
      v19 = input->buffer_;
      if ( v19 >= input->buffer_end_ || *v19 < 0 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v25) == 0 )
          return 0;
      }
      else
      {
        v25[0] = *v19;
        input->buffer_ = v19 + 1;
      }
      v20 = input->recursion_depth_ + 1;
      v21 = input->recursion_limit_ < v20;
      input->recursion_depth_ = v20;
      if ( v21 )
        return 0;
      v24 = google::protobuf::io::CodedInputStream::PushLimit(input, v25[0]);
      if ( !CGameInfo::MergePartialFromCodedStream(v18, input) || !input->legitimate_message_end_ )
        return 0;
      legitimate_message_end = input->legitimate_message_end_;
      google::protobuf::io::CodedInputStream::PopLimit(input, v24);
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
    if ( v8 != 1 || v7 != 13 )
      break;
    v11 = input->buffer_;
    if ( LODWORD(input->buffer_end_) - v11 <= 3 )
    {
      result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v25);
      if ( !result )
        return result;
      v13 = v25[0];
    }
    else
    {
      v12 = *v11;
      input->buffer_ = v11 + 4;
      v13 = v12;
    }
    *(this + 4) |= 1u;
    *(this + 6) = v13;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 16 )
    {
      v14 = buffer + 1;
      input->buffer_ = v14;
parse_playback_ticks:
      if ( v14 >= buffer_end || ((v15 = *v14) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v25);
        if ( !result )
          return result;
        v15 = v25[0];
      }
      else
      {
        input->buffer_ = v14 + 1;
      }
      *(this + 4) |= 2u;
      *(this + 7) = v15;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 24 )
      {
        v16 = buffer + 1;
        input->buffer_ = v16;
parse_playback_frames:
        if ( buffer_end <= v16 || ((v17 = *v16) & 0x80u) != 0 )
        {
          result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v25);
          if ( !result )
            return result;
          v17 = v25[0];
        }
        else
        {
          input->buffer_ = v16 + 1;
        }
        *(this + 4) |= 4u;
        *(this + 10) = v17;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end && *buffer == 34 )
        {
          input->buffer_ = buffer + 1;
          goto parse_game_info;
        }
      }
    }
  }
handle_unusual:
  if ( v7 != 0 )
    goto LABEL_11;
  return 1;
}


// CDemoFileInfo::SerializeWithCachedSizes  (line 3229, @0x0000000001b3dc80, libserver.so)  // inlines: empty, game_info
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *)
// globals: CDemoFileInfo::default_instance_
void __fastcall CDemoFileInfo::SerializeWithCachedSizes(
        const CDemoFileInfo *const this,
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
    google::protobuf::internal::WireFormatLite::WriteFloat(&loc_0 + 1, output, *(this + 6), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 7), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 4) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(this + 10), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 8) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
      options = CDemoFileInfo::default_instance_->options_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 2, options, output, v3);
  }
  v8 = *(this + 1);
  if ( v8 != 0 && v8[1] != *v8 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDemoFileInfo::SerializeWithCachedSizesToArray  (line 3260, @0x0000000001b415f0, libserver.so)  // inlines: GetCachedSize, WriteFloatNoTagToArray, WriteFloatToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian32ToArray, WriteMessageNoVirtualToArray<CGameInfo>, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, game_info, memcpy
// calls: CGameInfo::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// globals: CDemoFileInfo::default_instance_
google::protobuf::uint8 *__fastcall CDemoFileInfo::SerializeWithCachedSizesToArray(
        const CDemoFileInfo *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v4; // rdx
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  google::protobuf::uint8 *v7; // rsi
  google::protobuf::io::CodedOutputStream *v8; // rdi
  google::protobuf::uint8 *v9; // rsi
  unsigned __int8 *v10; // rdx
  unsigned int *options; // r12
  google::protobuf::io::CodedOutputStream *v12; // rdi
  google::protobuf::uint8 *v13; // rsi
  __int64 v14; // rdx

  result = target;
  v4 = *(this + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *(this + 6);
    *target = 13;
    result = target + 5;
    *(target + 1) = v5;
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    v6 = *(this + 7);
    v7 = result + 1;
    *result = 16;
    if ( v6 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v6, v7, v4);
    }
    else if ( v6 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v6, v7, v4);
    }
    else
    {
      result[1] = v6;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 10);
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
    LODWORD(v4) = *(this + 4);
  }
  v10 = (v4 & 8);
  if ( v10 != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
    {
      v10 = CDemoFileInfo::default_instance_;
      options = CDemoFileInfo::default_instance_->options_;
    }
    *result = 34;
    v12 = options[5];
    if ( v12 > 0x7F )
    {
      v13 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v12, result + 1, v10);
    }
    else
    {
      result[1] = v12;
      v13 = result + 2;
    }
    result = CGameInfo::SerializeWithCachedSizesToArray(options, v13);
  }
  v14 = *(this + 1);
  if ( v14 != 0 && *(v14 + 8) != *v14 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v14);
  return result;
}


// CDemoFileInfo::ByteSize  (line 3293, @0x0000000001b41a90, libserver.so)  // inlines: Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CGameInfo>, VarintSize32, VarintSize32SignExtended, empty, game_info, has_playback_time
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), CGameInfo::ByteSize
// globals: CDemoFileInfo::default_instance_
int __fastcall CDemoFileInfo::ByteSize(const CDemoFileInfo *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  int v6; // edx
  google::protobuf::io::CodedOutputStream *v7; // rdi
  int v8; // edx
  _QWORD *v9; // rax
  const CGameInfo *options; // rdi
  unsigned int v12; // r13d
  int v13; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = -(*(this + 4) & 1) & 5;
    if ( (v4 & 2) != 0 )
    {
      v5 = *(this + 7);
      v6 = 11;
      if ( v5 >= 0 )
      {
        LOBYTE(v6) = 2;
        if ( v5 > 0x7F )
        {
          v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1) + 1;
          v4 = *(this + 4);
        }
      }
      v3 += v6;
    }
    if ( (v4 & 4) != 0 )
    {
      v7 = *(this + 10);
      v8 = 11;
      if ( v7 >= 0 )
      {
        LOBYTE(v8) = 2;
        if ( v7 > 0x7F )
        {
          v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, v1) + 1;
          v4 = *(this + 4);
        }
      }
      v3 += v8;
    }
    if ( (v4 & 8) != 0 )
    {
      options = *(this + 4);
      if ( options == 0 )
        options = CDemoFileInfo::default_instance_->options_;
      v12 = CGameInfo::ByteSize(options);
      v13 = 1;
      if ( v12 > 0x7F )
        v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, v1);
      v3 += v12 + v13 + 1;
    }
  }
  v9 = *(this + 1);
  if ( v9 != 0 && v9[1] != *v9 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDemoFileInfo::MergeFrom  (line 3335, @0x0000000001b46b70, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoFileInfo*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoFileInfo::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoFileInfo
void __fastcall CDemoFileInfo::MergeFrom(CDemoFileInfo *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoFileInfo *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      3336);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoFileInfo, 0)) != 0 )
  {
    CDemoFileInfo::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoFileInfo::MergeFrom  (line 3347, @0x0000000001b46990, libserver.so)  // inlines: game_info, mutable_game_info, set_has_game_info, set_has_playback_frames, set_has_playback_ticks, set_has_playback_time, set_playback_frames, set_playback_ticks, set_playback_time
// calls: CGameInfo::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CGameInfo::CGameInfo, _Unwind_Resume, operator delete
// callers: CDemoFileInfo::CDemoFileInfo, CDemoFileInfo::MergeFrom, CDemoFileInfo::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CDemoFileInfo::default_instance_
void __fastcall CDemoFileInfo::MergeFrom(CDemoFileInfo *const this, const CDemoFileInfo *const from)
{
  int v4; // eax
  int v5; // xmm0_4
  int v6; // eax
  int v7; // eax
  const CGameInfo *options; // r13
  CGameInfo *v9; // rdi
  __int64 v10; // rax
  CGameInfo *v11; // r14
  char v12; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v13; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v13,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      3348);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v13, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v12, v10);
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
      v7 = *(from + 10);
      *(this + 4) |= 4u;
      *(this + 10) = v7;
      v4 = *(from + 4);
    }
    if ( (v4 & 8) != 0 )
    {
      options = *(from + 4);
      if ( options == 0 )
        options = CDemoFileInfo::default_instance_->options_;
      v9 = *(this + 4);
      *(this + 4) |= 8u;
      if ( v9 == 0 )
      {
        v11 = operator new(0x20u);
        CGameInfo::CGameInfo(v11);
        *(this + 4) = v11;
        v9 = v11;
      }
      CGameInfo::MergeFrom(v9, options);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoFileInfo::CopyFrom  (line 3366, @0x0000000001b3bf10, libserver.so)
void __fastcall CDemoFileInfo::CopyFrom(CDemoFileInfo *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoFileInfo::CopyFrom  (line 3372, @0x0000000001b46c50, libserver.so)
// calls: CDemoFileInfo::MergeFrom
void __fastcall CDemoFileInfo::CopyFrom(CDemoFileInfo *const this, const CDemoFileInfo *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoFileInfo::MergeFrom(this, from);
  }
}


// CDemoFileInfo::IsInitialized  (line 3378, @0x0000000001b3bf50, libserver.so)
bool __fastcall CDemoFileInfo::IsInitialized(const CDemoFileInfo *const this)
{
  return 1;
}


// CDemoFileInfo::Swap  (line 3383, @0x0000000001b46c90, libserver.so)  // inlines: Swap, swap<CGameInfo*>, swap<float>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoFileInfo::Swap(CDemoFileInfo *const this, CDemoFileInfo *other)
{
  int v2; // xmm1_4
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( other != this )
  {
    v2 = *(this + 6);
    *(this + 6) = *(other + 6);
    *(other + 6) = v2;
    v3 = *(this + 7);
    *(this + 7) = *(other + 7);
    *(other + 7) = v3;
    v4 = *(this + 10);
    *(this + 10) = *(other + 10);
    *(other + 10) = v4;
    v5 = *(this + 4);
    *(this + 4) = *(other + 4);
    *(other + 4) = v5;
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


// CDemoFileInfo::GetMetadata  (line 3395, @0x0000000001b40850, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoFileInfo_descriptor_, `anonymous namespace'::CDemoFileInfo_reflection_
google::protobuf::Metadata __fastcall CDemoFileInfo::GetMetadata(const CDemoFileInfo *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoFileInfo_descriptor_;
  result.reflection = `anonymous namespace'::CDemoFileInfo_reflection_;
  return result;
}


// CDemoPacket::CDemoPacket  (line 3412, @0x0000000001b46de0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoPacket::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoPacket::New, CDemoFullPacket::MergePartialFromCodedStream, CDemoFullPacket::MergeFrom, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoPacket::CDemoPacket(CDemoPacket *const this)
{
  *this = off_3F7B490;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoPacket::SharedCtor(this);
}


// CDemoPacket::InitAsDefaultInstance  (line 3418, @0x0000000001b46d00, libserver.so)
void __fastcall CDemoPacket::InitAsDefaultInstance(CDemoPacket *const this)
{
  ;
}


// CDemoPacket::CDemoPacket  (line 3421, @0x0000000001b470d0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoPacket::SharedCtor, CDemoPacket::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoPacket::CDemoPacket(CDemoPacket *const this, const CDemoPacket *const from)
{
  *this = off_3F7B490;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoPacket::SharedCtor(this);
  CDemoPacket::MergeFrom(this, from);
}


// CDemoPacket::SharedCtor  (line 3428, @0x0000000001b46d10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoPacket::CDemoPacket
void __fastcall CDemoPacket::SharedCtor(CDemoPacket *const this)
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


// CDemoPacket::~CDemoPacket  (line 3437, @0x0000000001b46ef0, libserver.so)
// calls: CDemoPacket::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoPacket::~CDemoPacket
void __fastcall CDemoPacket::~CDemoPacket(CDemoPacket *const this)
{
  *this = off_3F7B490;
  CDemoPacket::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoPacket::~CDemoPacket  (line 3437, @0x0000000001b46f30, libserver.so)
// calls: CDemoPacket::~CDemoPacket, operator delete
void __fastcall CDemoPacket::~CDemoPacket(CDemoPacket *const this)
{
  CDemoPacket::~CDemoPacket(this);
  operator delete(this);
}


// CDemoPacket::SharedDtor  (line 3442, @0x0000000001b46e80, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoPacket::~CDemoPacket
void __fastcall CDemoPacket::SharedDtor(CDemoPacket *const this)
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


// CDemoPacket::SetCachedSize  (line 3448, @0x0000000001b3bf60, libserver.so)
void __fastcall CDemoPacket::SetCachedSize(const CDemoPacket *const this, int size)
{
  *(this + 5) = size;
}


// CDemoPacket::descriptor  (line 3453, @0x0000000001b46f50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoPacket_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoPacket::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoPacket_descriptor_;
}


// CDemoPacket::default_instance  (line 3458, @0x0000000001b4e150, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoPacket::default_instance_
const CDemoPacket *__cdecl CDemoPacket::default_instance()
{
  const CDemoPacket *result; // rax

  result = CDemoPacket::default_instance_;
  if ( CDemoPacket::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoPacket::default_instance_;
  }
  return result;
}


// CDemoPacket::New  (line 3465, @0x0000000001b46e40, libserver.so)
// calls: operator new, CDemoPacket::CDemoPacket, operator delete, _Unwind_Resume
CDemoPacket *__fastcall CDemoPacket::New(const CDemoPacket *const this)
{
  CDemoPacket *v1; // rbx

  v1 = operator new(0x28u);
  CDemoPacket::CDemoPacket(v1);
  return v1;
}


// CDemoPacket::Clear  (line 3469, @0x0000000001b3ca00, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
// callers: CDemoFullPacket::Clear
void __fastcall CDemoPacket::Clear(CDemoPacket *const this)
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


// CDemoPacket::MergePartialFromCodedStream  (line 3494, @0x0000000001b42a60, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_data, set_has_data, set_has_sequence_in, set_has_sequence_out_ack
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDemoFullPacket::MergePartialFromCodedStream
bool __fastcall CDemoPacket::MergePartialFromCodedStream(
        CDemoPacket *const this,
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
  unsigned int v15; // eax
  unsigned int v16[9]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
      if ( v9 == 2 )
      {
        if ( v8 != 16 )
          goto handle_unusual;
        v14 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_sequence_out_ack;
      }
      if ( v9 != 3 )
        break;
      if ( v8 != 26 )
        goto handle_unusual;
parse_data:
      *(this + 4) |= 4u;
      result = google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 4), v9);
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
parse_sequence_out_ack:
      if ( v14 >= buffer_end || ((v15 = *v14) & 0x80u) != 0 )
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
      if ( buffer < buffer_end && *buffer == 26 )
      {
        v9 = (buffer + 1);
        input->buffer_ = v9;
        goto parse_data;
      }
    }
  }
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CDemoPacket::SerializeWithCachedSizes  (line 3568, @0x0000000001b3dd50, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoPacket::SerializeWithCachedSizes(
        const CDemoPacket *const this,
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


// CDemoPacket::SerializeWithCachedSizesToArray  (line 3594, @0x0000000001b3f740, libserver.so)  // inlines: WriteBytesToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDemoFullPacket::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDemoPacket::SerializeWithCachedSizesToArray(
        const CDemoPacket *const this,
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
    v10 = *(this + 4);
    *result = 26;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v10, (result + 1), v9);
  }
  v11 = *(this + 1);
  if ( v11 != 0 && *(v11 + 8) != *v11 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v11);
  return result;
}


// CDemoPacket::ByteSize  (line 3622, @0x0000000001b3ebe0, libserver.so)  // inlines: BytesSize, Int32Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDemoFullPacket::ByteSize
int __fastcall CDemoPacket::ByteSize(const CDemoPacket *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  google::protobuf::io::CodedOutputStream *v6; // rdi
  int v7; // eax
  google::protobuf::io::CodedOutputStream *v8; // rdi
  int v9; // eax
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v13; // r13
  google::protobuf::io::CodedOutputStream *v14; // rdi
  int v15; // eax
  int v16; // edx

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_12;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
  {
LABEL_6:
    if ( (v5 & 2) != 0 )
      goto LABEL_7;
    goto LABEL_11;
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
  {
LABEL_7:
    v8 = *(this + 7);
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
LABEL_11:
  if ( (v5 & 4) != 0 )
  {
    v13 = *(this + 4);
    v14 = *(*v13 - 24LL);
    v15 = 1;
    v16 = v14;
    if ( v14 > 0x7F )
    {
      v15 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
      v16 = *(*v13 - 24LL);
    }
    v3 += v15 + v16 + 1;
  }
LABEL_12:
  v11 = *(this + 1);
  if ( v11 != 0 && v11[1] != *v11 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, v1);
  *(this + 5) = v3;
  return v3;
}


// CDemoPacket::MergeFrom  (line 3659, @0x0000000001b47140, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoPacket*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoPacket::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoPacket
void __fastcall CDemoPacket::MergeFrom(CDemoPacket *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoPacket *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      3660);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoPacket, 0)) != 0 )
  {
    CDemoPacket::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoPacket::MergeFrom  (line 3671, @0x0000000001b46fe0, libserver.so)  // inlines: set_data, set_has_data, set_has_sequence_in, set_has_sequence_out_ack, set_sequence_in, set_sequence_out_ack
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoPacket::CDemoPacket, CDemoPacket::MergeFrom, CDemoPacket::CopyFrom, CDemoFullPacket::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoPacket::MergeFrom(CDemoPacket *const this, const CDemoPacket *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      3672);
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


// CDemoPacket::CopyFrom  (line 3687, @0x0000000001b3bf70, libserver.so)
void __fastcall CDemoPacket::CopyFrom(CDemoPacket *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoPacket::CopyFrom  (line 3693, @0x0000000001b47220, libserver.so)
// calls: CDemoPacket::MergeFrom
void __fastcall CDemoPacket::CopyFrom(CDemoPacket *const this, const CDemoPacket *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoPacket::MergeFrom(this, from);
  }
}


// CDemoPacket::IsInitialized  (line 3699, @0x0000000001b3bfb0, libserver.so)
bool __fastcall CDemoPacket::IsInitialized(const CDemoPacket *const this)
{
  return 1;
}


// CDemoPacket::Swap  (line 3704, @0x0000000001b47260, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoPacket::Swap(CDemoPacket *const this, CDemoPacket *other)
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


// CDemoPacket::GetMetadata  (line 3715, @0x0000000001b408f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoPacket_descriptor_, `anonymous namespace'::CDemoPacket_reflection_
google::protobuf::Metadata __fastcall CDemoPacket::GetMetadata(const CDemoPacket *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoPacket_descriptor_;
  result.reflection = `anonymous namespace'::CDemoPacket_reflection_;
  return result;
}


// CDemoFullPacket::CDemoFullPacket  (line 3731, @0x0000000001b472c0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDemoFullPacket::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoFullPacket::CDemoFullPacket(CDemoFullPacket *const this)
{
  *this = off_3F7B550;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 4) = 0;
}


// CDemoFullPacket::InitAsDefaultInstance  (line 3737, @0x0000000001b4e3c0, libserver.so)  // inlines: default_instance
// calls: protobuf_AddDesc_demo_2eproto
// callers: protobuf_AddDesc_demo_2eproto
// globals: CDemoStringTables::default_instance_, CDemoPacket::default_instance_
void __fastcall CDemoFullPacket::InitAsDefaultInstance(CDemoFullPacket *const this)
{
  google::protobuf::Descriptor *v1; // rax
  CDemoFullPacket *thisb; // [rsp+8h] [rbp-8h]
  CDemoFullPacket *thisa; // [rsp+8h] [rbp-8h]

  v1 = CDemoStringTables::default_instance_;
  if ( CDemoStringTables::default_instance_ == 0 )
  {
    thisa = this;
    protobuf_AddDesc_demo_2eproto();
    v1 = CDemoStringTables::default_instance_;
    this = thisa;
  }
  *(this + 3) = v1;
  if ( CDemoPacket::default_instance_ != 0 )
  {
    *(this + 4) = CDemoPacket::default_instance_;
  }
  else
  {
    thisb = this;
    protobuf_AddDesc_demo_2eproto();
    *(thisb + 4) = CDemoPacket::default_instance_;
  }
}


// CDemoFullPacket::CDemoFullPacket  (line 3742, @0x0000000001b4c0b0, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoFullPacket::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoFullPacket::CDemoFullPacket(CDemoFullPacket *const this, const CDemoFullPacket *const from)
{
  *this = off_3F7B550;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 4) = 0;
  CDemoFullPacket::MergeFrom(this, from);
}


// CDemoFullPacket::SharedCtor  (line 3749, @0x0000000001b47360, libserver.so)  // inlines: memset
void __fastcall CDemoFullPacket::SharedCtor(CDemoFullPacket *const this)
{
  *(this + 5) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 4) = 0;
}


// CDemoFullPacket::~CDemoFullPacket  (line 3756, @0x0000000001b473e0, libserver.so)
// calls: CDemoFullPacket::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoFullPacket::~CDemoFullPacket
void __fastcall CDemoFullPacket::~CDemoFullPacket(CDemoFullPacket *const this)
{
  *this = off_3F7B550;
  CDemoFullPacket::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoFullPacket::~CDemoFullPacket  (line 3756, @0x0000000001b47420, libserver.so)
// calls: CDemoFullPacket::~CDemoFullPacket, operator delete
void __fastcall CDemoFullPacket::~CDemoFullPacket(CDemoFullPacket *const this)
{
  CDemoFullPacket::~CDemoFullPacket(this);
  operator delete(this);
}


// CDemoFullPacket::SharedDtor  (line 3761, @0x0000000001b47390, libserver.so)
// callers: CDemoFullPacket::~CDemoFullPacket
// globals: CDemoFullPacket::default_instance_
void __fastcall CDemoFullPacket::SharedDtor(CDemoFullPacket *const this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  if ( this != CDemoFullPacket::default_instance_ )
  {
    v2 = *(this + 3);
    if ( v2 != 0 )
      (*(*v2 + 8LL))(v2);
    v3 = *(this + 4);
    if ( v3 != 0 )
      (*(*v3 + 8LL))(v3);
  }
}


// CDemoFullPacket::SetCachedSize  (line 3768, @0x0000000001b3bfc0, libserver.so)
void __fastcall CDemoFullPacket::SetCachedSize(const CDemoFullPacket *const this, int size)
{
  *(this + 5) = size;
}


// CDemoFullPacket::descriptor  (line 3773, @0x0000000001b47440, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoFullPacket_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoFullPacket::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoFullPacket_descriptor_;
}


// CDemoFullPacket::default_instance  (line 3778, @0x0000000001b4e180, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoFullPacket::default_instance_
const CDemoFullPacket *__cdecl CDemoFullPacket::default_instance()
{
  const CDemoFullPacket *result; // rax

  result = CDemoFullPacket::default_instance_;
  if ( CDemoFullPacket::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoFullPacket::default_instance_;
  }
  return result;
}


// CDemoFullPacket::New  (line 3785, @0x0000000001b47320, libserver.so)
// calls: operator new, CDemoFullPacket::CDemoFullPacket, operator delete, _Unwind_Resume
CDemoFullPacket *__fastcall CDemoFullPacket::New(const CDemoFullPacket *const this)
{
  CDemoFullPacket *v1; // rbx

  v1 = operator new(0x28u);
  CDemoFullPacket::CDemoFullPacket(v1);
  return v1;
}


// CDemoFullPacket::Clear  (line 3789, @0x0000000001b3d090, libserver.so)  // inlines: Clear, memset
// calls: CDemoStringTables::Clear, google::protobuf::UnknownFieldSet::ClearFallback(void), CDemoPacket::Clear
void __fastcall CDemoFullPacket::Clear(CDemoFullPacket *const this)
{
  int v2; // eax
  CDemoStringTables *v3; // rdi
  bool v4; // zf
  CDemoPacket *v5; // rdi

  v2 = *(this + 4);
  if ( (v2 & 3) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v3 = *(this + 3);
      if ( v3 != 0 )
      {
        CDemoStringTables::Clear(v3);
        v2 = *(this + 4);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      v5 = *(this + 4);
      if ( v5 != 0 )
        CDemoPacket::Clear(v5);
    }
  }
  v4 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v4 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoFullPacket::MergePartialFromCodedStream  (line 3802, @0x0000000001b4b970, libserver.so)  // inlines: Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadMessageNoVirtual<CDemoPacket>, ReadMessageNoVirtual<CDemoStringTables>, ReadTagWithCutoff, ReadVarint32, mutable_packet, mutable_string_table, set_has_packet, set_has_string_table
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CDemoStringTables::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), CDemoPacket::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), operator new, CDemoPacket::CDemoPacket, CDemoStringTables::CDemoStringTables, operator delete, _Unwind_Resume
bool __fastcall CDemoFullPacket::MergePartialFromCodedStream(
        CDemoFullPacket *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v3; // r12d
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *buffer_end; // rcx
  google::protobuf::io::CodedInputStream *v7; // rsi
  bool result; // al
  google::protobuf::uint32 TagFallback; // eax
  CDemoStringTables *v10; // r15
  const google::protobuf::uint8 *v11; // rax
  int v12; // eax
  bool v13; // cc
  int recursion_depth; // eax
  CDemoPacket *v15; // r15
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
      v10 = operator new(0x30u);
      CDemoStringTables::CDemoStringTables(v10);
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
    if ( !CDemoStringTables::MergePartialFromCodedStream(v10, input) || !input->legitimate_message_end_ )
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
parse_packet:
      v15 = *(this + 4);
      *(this + 4) |= 2u;
      if ( v15 == 0 )
      {
        v15 = operator new(0x28u);
        CDemoPacket::CDemoPacket(v15);
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
      if ( !CDemoPacket::MergePartialFromCodedStream(v15, input) || !input->legitimate_message_end_ )
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
    goto parse_packet;
handle_unusual:
  if ( v7 != 0 )
    goto LABEL_9;
  return 1;
}


// CDemoFullPacket::SerializeWithCachedSizes  (line 3859, @0x0000000001b3d7c0, libserver.so)  // inlines: empty, packet, string_table
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
// globals: CDemoFullPacket::default_instance_
void __fastcall CDemoFullPacket::SerializeWithCachedSizes(
        const CDemoFullPacket *const this,
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
      containing_type = CDemoFullPacket::default_instance_->containing_type_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_0 + 1, containing_type, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
      options = CDemoFullPacket::default_instance_->options_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, options, output, v3);
  }
  v9 = *(this + 1);
  if ( v9 != 0 && v9[1] != *v9 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDemoFullPacket::SerializeWithCachedSizesToArray  (line 3881, @0x0000000001b40f10, libserver.so)  // inlines: GetCachedSize, WriteMessageNoVirtualToArray<CDemoPacket>, WriteMessageNoVirtualToArray<CDemoStringTables>, WriteTagToArray, WriteVarint32ToArray, empty, packet, string_table
// calls: CDemoStringTables::SerializeWithCachedSizesToArray, CDemoPacket::SerializeWithCachedSizesToArray, google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *)
// globals: CDemoFullPacket::default_instance_
google::protobuf::uint8 *__fastcall CDemoFullPacket::SerializeWithCachedSizesToArray(
        const CDemoFullPacket *const this,
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
      containing_type = CDemoFullPacket::default_instance_->containing_type_;
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
    target = CDemoStringTables::SerializeWithCachedSizesToArray(containing_type, v7);
    v4 = *(this + 4);
  }
  if ( (v4 & 2) != 0 )
  {
    options = *(this + 4);
    if ( options == 0 )
      options = CDemoFullPacket::default_instance_->options_;
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
    target = CDemoPacket::SerializeWithCachedSizesToArray(options, v10);
  }
  v11 = *(this + 1);
  if ( v11 == 0 || *(v11 + 8) == *v11 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v11);
}


// CDemoFullPacket::ByteSize  (line 3906, @0x0000000001b411e0, libserver.so)  // inlines: LengthDelimitedSize, MessageSizeNoVirtual<CDemoPacket>, MessageSizeNoVirtual<CDemoStringTables>, VarintSize32, empty, packet, string_table
// calls: CDemoStringTables::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), CDemoPacket::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// globals: CDemoFullPacket::default_instance_
int __fastcall CDemoFullPacket::ByteSize(const CDemoFullPacket *const this)
{
  const google::protobuf::UnknownFieldSet *v1; // rsi
  int v3; // ebx
  int v4; // eax
  const google::protobuf::Descriptor *containing_type; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD *v8; // rax
  const CDemoPacket *options; // rdi
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
        containing_type = CDemoFullPacket::default_instance_->containing_type_;
      v6 = CDemoStringTables::ByteSize(containing_type);
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
        options = CDemoFullPacket::default_instance_->options_;
      v11 = CDemoPacket::ByteSize(options);
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


// CDemoFullPacket::MergeFrom  (line 3936, @0x0000000001b4c130, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoFullPacket*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoFullPacket::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoFullPacket
void __fastcall CDemoFullPacket::MergeFrom(CDemoFullPacket *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoFullPacket *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      3937);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoFullPacket, 0)) != 0 )
  {
    CDemoFullPacket::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoFullPacket::MergeFrom  (line 3948, @0x0000000001b4bf30, libserver.so)  // inlines: mutable_packet, mutable_string_table, packet, set_has_packet, set_has_string_table, string_table
// calls: CDemoStringTables::MergeFrom, CDemoPacket::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CDemoPacket::CDemoPacket, CDemoStringTables::CDemoStringTables, _Unwind_Resume, operator delete
// callers: CDemoFullPacket::CDemoFullPacket, CDemoFullPacket::MergeFrom, CDemoFullPacket::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CDemoFullPacket::default_instance_
void __fastcall CDemoFullPacket::MergeFrom(CDemoFullPacket *const this, const CDemoFullPacket *const from)
{
  int v4; // eax
  const google::protobuf::Descriptor *containing_type; // r13
  CDemoStringTables *v6; // rdi
  const CDemoPacket *options; // r13
  CDemoPacket *v8; // rdi
  __int64 v9; // rax
  CDemoPacket *v10; // r14
  CDemoStringTables *v11; // r14
  char v12; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v13; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v13,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      3949);
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
        containing_type = CDemoFullPacket::default_instance_->containing_type_;
      v6 = *(this + 3);
      *(this + 4) |= 1u;
      if ( v6 == 0 )
      {
        v11 = operator new(0x30u);
        CDemoStringTables::CDemoStringTables(v11);
        *(this + 3) = v11;
        v6 = v11;
      }
      CDemoStringTables::MergeFrom(v6, containing_type);
      v4 = *(from + 4);
    }
    if ( (v4 & 2) != 0 )
    {
      options = *(from + 4);
      if ( options == 0 )
        options = CDemoFullPacket::default_instance_->options_;
      v8 = *(this + 4);
      *(this + 4) |= 2u;
      if ( v8 == 0 )
      {
        v10 = operator new(0x28u);
        CDemoPacket::CDemoPacket(v10);
        *(this + 4) = v10;
        v8 = v10;
      }
      CDemoPacket::MergeFrom(v8, options);
    }
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoFullPacket::CopyFrom  (line 3961, @0x0000000001b3bfd0, libserver.so)
void __fastcall CDemoFullPacket::CopyFrom(CDemoFullPacket *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoFullPacket::CopyFrom  (line 3967, @0x0000000001b4c210, libserver.so)
// calls: CDemoFullPacket::MergeFrom
void __fastcall CDemoFullPacket::CopyFrom(CDemoFullPacket *const this, const CDemoFullPacket *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoFullPacket::MergeFrom(this, from);
  }
}


// CDemoFullPacket::IsInitialized  (line 3973, @0x0000000001b3c010, libserver.so)
bool __fastcall CDemoFullPacket::IsInitialized(const CDemoFullPacket *const this)
{
  return 1;
}


// CDemoFullPacket::Swap  (line 3978, @0x0000000001b474d0, libserver.so)  // inlines: Swap, swap<CDemoPacket*>, swap<CDemoStringTables*>, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoFullPacket::Swap(CDemoFullPacket *const this, CDemoFullPacket *other)
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


// CDemoFullPacket::GetMetadata  (line 3988, @0x0000000001b3fdb0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoFullPacket_descriptor_, `anonymous namespace'::CDemoFullPacket_reflection_
google::protobuf::Metadata __fastcall CDemoFullPacket::GetMetadata(const CDemoFullPacket *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoFullPacket_descriptor_;
  result.reflection = `anonymous namespace'::CDemoFullPacket_reflection_;
  return result;
}


// CDemoSaveGame::CDemoSaveGame  (line 4006, @0x0000000001b47610, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoSaveGame::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoSaveGame::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoSaveGame::CDemoSaveGame(CDemoSaveGame *const this)
{
  *this = off_3F7B610;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoSaveGame::SharedCtor(this);
}


// CDemoSaveGame::InitAsDefaultInstance  (line 4012, @0x0000000001b47530, libserver.so)
void __fastcall CDemoSaveGame::InitAsDefaultInstance(CDemoSaveGame *const this)
{
  ;
}


// CDemoSaveGame::CDemoSaveGame  (line 4015, @0x0000000001b47920, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoSaveGame::SharedCtor, CDemoSaveGame::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoSaveGame::CDemoSaveGame(CDemoSaveGame *const this, const CDemoSaveGame *const from)
{
  *this = off_3F7B610;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoSaveGame::SharedCtor(this);
  CDemoSaveGame::MergeFrom(this, from);
}


// CDemoSaveGame::SharedCtor  (line 4022, @0x0000000001b47540, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoSaveGame::CDemoSaveGame
void __fastcall CDemoSaveGame::SharedCtor(CDemoSaveGame *const this)
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
  *(this + 5) = 0;
  *(this + 12) = 0;
  *(this + 4) = 0;
}


// CDemoSaveGame::~CDemoSaveGame  (line 4032, @0x0000000001b47720, libserver.so)
// calls: CDemoSaveGame::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoSaveGame::~CDemoSaveGame
void __fastcall CDemoSaveGame::~CDemoSaveGame(CDemoSaveGame *const this)
{
  *this = off_3F7B610;
  CDemoSaveGame::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoSaveGame::~CDemoSaveGame  (line 4032, @0x0000000001b47760, libserver.so)
// calls: CDemoSaveGame::~CDemoSaveGame, operator delete
void __fastcall CDemoSaveGame::~CDemoSaveGame(CDemoSaveGame *const this)
{
  CDemoSaveGame::~CDemoSaveGame(this);
  operator delete(this);
}


// CDemoSaveGame::SharedDtor  (line 4037, @0x0000000001b476b0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoSaveGame::~CDemoSaveGame
void __fastcall CDemoSaveGame::SharedDtor(CDemoSaveGame *const this)
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


// CDemoSaveGame::SetCachedSize  (line 4043, @0x0000000001b3c020, libserver.so)
void __fastcall CDemoSaveGame::SetCachedSize(const CDemoSaveGame *const this, int size)
{
  *(this + 5) = size;
}


// CDemoSaveGame::descriptor  (line 4048, @0x0000000001b47780, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoSaveGame_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoSaveGame::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoSaveGame_descriptor_;
}


// CDemoSaveGame::default_instance  (line 4053, @0x0000000001b4e1b0, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoSaveGame::default_instance_
const CDemoSaveGame *__cdecl CDemoSaveGame::default_instance()
{
  const CDemoSaveGame *result; // rax

  result = CDemoSaveGame::default_instance_;
  if ( CDemoSaveGame::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoSaveGame::default_instance_;
  }
  return result;
}


// CDemoSaveGame::New  (line 4060, @0x0000000001b47670, libserver.so)
// calls: operator new, CDemoSaveGame::CDemoSaveGame, operator delete, _Unwind_Resume
CDemoSaveGame *__fastcall CDemoSaveGame::New(const CDemoSaveGame *const this)
{
  CDemoSaveGame *v1; // rbx

  v1 = operator new(0x38u);
  CDemoSaveGame::CDemoSaveGame(v1);
  return v1;
}


// CDemoSaveGame::Clear  (line 4064, @0x0000000001b3ca60, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoSaveGame::Clear(CDemoSaveGame *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 0xF) != 0 )
  {
    v2 = (*(this + 16) & 1) == 0;
    *(this + 4) = 0;
    *(this + 5) = 0;
    *(this + 12) = 0;
    if ( !v2 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  }
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoSaveGame::MergePartialFromCodedStream  (line 4089, @0x0000000001b42250, libserver.so)  // inlines: Advance, BufferSize, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadLittleEndian64, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadPrimitive<long unsigned int, (google::protobuf::internal::WireFormatLite::FieldType)6u>, ReadTagWithCutoff, ReadVarint32, memcpy, mutable_data, set_has_data, set_has_signature, set_has_steam_id, set_has_version
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
bool __fastcall CDemoSaveGame::MergePartialFromCodedStream(
        CDemoSaveGame *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v3; // rcx
  unsigned __int64 *v4; // r14
  unsigned __int64 *v5; // r13
  unsigned int v7; // ebx
  const google::protobuf::uint8 *buffer; // rdx
  const google::protobuf::uint8 *buffer_end; // rax
  google::protobuf::uint8 v10; // al
  google::protobuf::io::CodedInputStream *v11; // rsi
  std::string *v12; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v15; // rdx
  const google::protobuf::uint8 *v16; // rdx
  const google::protobuf::uint8 *v17; // rdx
  int fields; // eax
  google::protobuf::UnknownFieldSet v19; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = &v19;
  v4 = (this + 32);
  v5 = (this + 40);
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
        if ( v11 != 17 )
          goto handle_unusual;
        v15 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_steam_id;
      }
      if ( v11 >> 3 <= 2 )
        break;
      if ( v12 == 3 )
      {
        if ( v11 != 25 )
          goto handle_unusual;
        v16 = input->buffer_;
        buffer_end = input->buffer_end_;
        goto parse_signature;
      }
      if ( v12 != 4 || v11 != 32 )
        goto handle_unusual;
      v17 = input->buffer_;
      buffer_end = input->buffer_end_;
parse_version:
      if ( v17 >= buffer_end || ((fields = *v17) & 0x80u) != 0 )
      {
        result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, &v19);
        if ( !result )
          return result;
        fields = v19.fields_;
      }
      else
      {
        input->buffer_ = v17 + 1;
      }
      *(this + 4) |= 8u;
      *(this + 12) = fields;
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
    if ( google::protobuf::internal::WireFormatLite::ReadBytes(input, *(this + 3), v12) == 0 )
      return 0;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 17 )
    {
      v15 = buffer + 1;
      input->buffer_ = v15;
parse_steam_id:
      if ( buffer_end - v15 <= 7 )
      {
        if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, v4) == 0 )
          return 0;
      }
      else
      {
        *v4 = *v15;
        input->buffer_ += 8;
      }
      *(this + 4) |= 2u;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 25 )
      {
        v16 = buffer + 1;
        input->buffer_ = v16;
parse_signature:
        if ( buffer_end - v16 <= 7 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(input, v5) == 0 )
            return 0;
        }
        else
        {
          *v5 = *v16;
          input->buffer_ += 8;
        }
        *(this + 4) |= 4u;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer < buffer_end && *buffer == 32 )
        {
          v17 = buffer + 1;
          input->buffer_ = v17;
          goto parse_version;
        }
      }
    }
  }
handle_unusual:
  if ( v11 != 0 )
    goto LABEL_11;
  return 1;
}


// CDemoSaveGame::SerializeWithCachedSizes  (line 4178, @0x0000000001b3dfd0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFixed64(int,ulong,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoSaveGame::SerializeWithCachedSizes(
        const CDemoSaveGame *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
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
  google::protobuf::internal::WireFormatLite::WriteFixed64(&loc_2, *(this + 4), output, v3);
  v6 = *(this + 4);
  if ( (v6 & 4) == 0 )
  {
LABEL_4:
    if ( (v6 & 8) == 0 )
      goto LABEL_5;
LABEL_11:
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 2, *(this + 12), output, v3);
    v7 = *(this + 1);
    if ( v7 == 0 )
      return;
    goto LABEL_6;
  }
LABEL_10:
  google::protobuf::internal::WireFormatLite::WriteFixed64(&loc_2 + 1, *(this + 5), output, v3);
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


// CDemoSaveGame::SerializeWithCachedSizesToArray  (line 4209, @0x0000000001b3f990, libserver.so)  // inlines: WriteBytesToArray, WriteFixed64NoTagToArray, WriteFixed64ToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian64ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, memcpy
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CDemoSaveGame::SerializeWithCachedSizesToArray(
        const CDemoSaveGame *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  int v4; // eax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  google::protobuf::io::CodedOutputStream *v9; // rdi
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
    v7 = *(this + 4);
    *target = 17;
    target += 9;
    *(target - 1) = v7;
    v4 = *(this + 4);
  }
  if ( (v4 & 4) != 0 )
  {
    v8 = *(this + 5);
    *target = 25;
    target += 9;
    *(target - 1) = v8;
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v9 = *(this + 12);
    *target = 32;
    if ( v9 < 0 )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v9, (target + 1), v2);
    }
    else if ( v9 > 0x7F )
    {
      target = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v9, target + 1, v2);
    }
    else
    {
      target[1] = v9;
      target += 2;
    }
  }
  v10 = *(this + 1);
  if ( v10 == 0 || *(v10 + 8) == *v10 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, *v10);
}


// CDemoSaveGame::ByteSize  (line 4242, @0x0000000001b3efb0, libserver.so)  // inlines: BytesSize, Int32Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CDemoSaveGame::ByteSize(const CDemoSaveGame *const this)
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

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
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
    }
    if ( (v4 & 2) != 0 )
      v3 += 9;
    if ( (v4 & 4) != 0 )
      v3 += 9;
    if ( (v4 & 8) != 0 )
    {
      v7 = *(this + 12);
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
  if ( v5 != 0 && *(v5 + 8) != *v5 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v5);
  *(this + 5) = v3;
  return v3;
}


// CDemoSaveGame::MergeFrom  (line 4282, @0x0000000001b47990, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoSaveGame*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoSaveGame::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoSaveGame
void __fastcall CDemoSaveGame::MergeFrom(CDemoSaveGame *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoSaveGame *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      4283);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoSaveGame, 0)) != 0 )
  {
    CDemoSaveGame::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoSaveGame::MergeFrom  (line 4294, @0x0000000001b47810, libserver.so)  // inlines: set_data, set_has_data, set_has_signature, set_has_steam_id, set_has_version, set_signature, set_steam_id, set_version
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoSaveGame::CDemoSaveGame, CDemoSaveGame::MergeFrom, CDemoSaveGame::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoSaveGame::MergeFrom(CDemoSaveGame *const this, const CDemoSaveGame *const from)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      4295);
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
        v6 = *(from + 5);
        *(this + 4) |= 4u;
        *(this + 5) = v6;
        v4 = *(from + 4);
      }
      if ( (v4 & 8) != 0 )
      {
        v7 = *(from + 12);
        *(this + 4) |= 8u;
        *(this + 12) = v7;
      }
      goto LABEL_11;
    }
    v5 = *(from + 4);
    *(this + 4) |= 2u;
    *(this + 4) = v5;
    v4 = *(from + 4);
    goto LABEL_7;
  }
LABEL_11:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoSaveGame::CopyFrom  (line 4313, @0x0000000001b3c030, libserver.so)
void __fastcall CDemoSaveGame::CopyFrom(CDemoSaveGame *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoSaveGame::CopyFrom  (line 4319, @0x0000000001b47a70, libserver.so)
// calls: CDemoSaveGame::MergeFrom
void __fastcall CDemoSaveGame::CopyFrom(CDemoSaveGame *const this, const CDemoSaveGame *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoSaveGame::MergeFrom(this, from);
  }
}


// CDemoSaveGame::IsInitialized  (line 4325, @0x0000000001b3c070, libserver.so)
bool __fastcall CDemoSaveGame::IsInitialized(const CDemoSaveGame *const this)
{
  return 1;
}


// CDemoSaveGame::Swap  (line 4330, @0x0000000001b47ab0, libserver.so)  // inlines: Swap, swap<int>, swap<long unsigned int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoSaveGame::Swap(CDemoSaveGame *const this, CDemoSaveGame *other)
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
    v4 = *(this + 5);
    *(this + 5) = *(other + 5);
    *(other + 5) = v4;
    LODWORD(v4) = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v4;
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


// CDemoSaveGame::GetMetadata  (line 4342, @0x0000000001b3fe50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoSaveGame_descriptor_, `anonymous namespace'::CDemoSaveGame_reflection_
google::protobuf::Metadata __fastcall CDemoSaveGame::GetMetadata(const CDemoSaveGame *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoSaveGame_descriptor_;
  result.reflection = `anonymous namespace'::CDemoSaveGame_reflection_;
  return result;
}


// CDemoSyncTick::CDemoSyncTick  (line 4356, @0x0000000001b47b20, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDemoSyncTick::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoSyncTick::CDemoSyncTick(CDemoSyncTick *const this)
{
  *this = off_3F7B6D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDemoSyncTick::InitAsDefaultInstance  (line 4362, @0x0000000001b47bb0, libserver.so)
void __fastcall CDemoSyncTick::InitAsDefaultInstance(CDemoSyncTick *const this)
{
  ;
}


// CDemoSyncTick::CDemoSyncTick  (line 4365, @0x0000000001b47d20, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoSyncTick::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoSyncTick::CDemoSyncTick(CDemoSyncTick *const this, const CDemoSyncTick *const from)
{
  *this = off_3F7B6D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
  CDemoSyncTick::MergeFrom(this, from);
}


// CDemoSyncTick::SharedCtor  (line 4372, @0x0000000001b47bc0, libserver.so)  // inlines: memset
void __fastcall CDemoSyncTick::SharedCtor(CDemoSyncTick *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDemoSyncTick::~CDemoSyncTick  (line 4377, @0x0000000001b3c6b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDemoSyncTick::~CDemoSyncTick(CDemoSyncTick *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7B6D0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDemoSyncTick::~CDemoSyncTick  (line 4377, @0x0000000001b3c6e0, libserver.so)  // inlines: ~CDemoSyncTick
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDemoSyncTick::~CDemoSyncTick(CDemoSyncTick *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7B6D0;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDemoSyncTick::SharedDtor  (line 4382, @0x0000000001b47be0, libserver.so)
void __fastcall CDemoSyncTick::SharedDtor(CDemoSyncTick *const this)
{
  ;
}


// CDemoSyncTick::SetCachedSize  (line 4387, @0x0000000001b3c080, libserver.so)
void __fastcall CDemoSyncTick::SetCachedSize(const CDemoSyncTick *const this, int size)
{
  *(this + 5) = size;
}


// CDemoSyncTick::descriptor  (line 4392, @0x0000000001b47bf0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoSyncTick_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoSyncTick::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoSyncTick_descriptor_;
}


// CDemoSyncTick::default_instance  (line 4397, @0x0000000001b4e1e0, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoSyncTick::default_instance_
const CDemoSyncTick *__cdecl CDemoSyncTick::default_instance()
{
  const CDemoSyncTick *result; // rax

  result = CDemoSyncTick::default_instance_;
  if ( CDemoSyncTick::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoSyncTick::default_instance_;
  }
  return result;
}


// CDemoSyncTick::New  (line 4404, @0x0000000001b47b70, libserver.so)
// calls: operator new, CDemoSyncTick::CDemoSyncTick, operator delete, _Unwind_Resume
CDemoSyncTick *__fastcall CDemoSyncTick::New(const CDemoSyncTick *const this)
{
  CDemoSyncTick *v1; // rbx

  v1 = operator new(0x18u);
  CDemoSyncTick::CDemoSyncTick(v1);
  return v1;
}


// CDemoSyncTick::Clear  (line 4408, @0x0000000001b3c7d0, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDemoSyncTick::Clear(CDemoSyncTick *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  *(this + 4) = 0;
  v2 = (this + 8);
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDemoSyncTick::MergePartialFromCodedStream  (line 4413, @0x0000000001b3e910, libserver.so)  // inlines: Advance, GetTagWireType, ReadTagWithCutoff
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void)
bool __fastcall CDemoSyncTick::MergePartialFromCodedStream(
        CDemoSyncTick *const this,
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


// CDemoSyncTick::SerializeWithCachedSizes  (line 4440, @0x0000000001b3d2c0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoSyncTick::SerializeWithCachedSizes(
        const CDemoSyncTick *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  __int64 v2; // rax

  v2 = *(this + 1);
  if ( v2 != 0 && *(v2 + 8) != *v2 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v2);
}


// CDemoSyncTick::SerializeWithCachedSizesToArray  (line 4450, @0x0000000001b3d420, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDemoSyncTick::SerializeWithCachedSizesToArray(
        const CDemoSyncTick *const this,
        google::protobuf::uint8 *target)
{
  __int64 v2; // rdx

  v2 = *(this + 1);
  if ( v2 == 0 || *(v2 + 8) == *v2 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, v2);
}


// CDemoSyncTick::ByteSize  (line 4461, @0x0000000001b3d480, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDemoSyncTick::ByteSize(const CDemoSyncTick *const this)
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


// CDemoSyncTick::MergeFrom  (line 4475, @0x0000000001b47d90, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoSyncTick*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoSyncTick::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoSyncTick
void __fastcall CDemoSyncTick::MergeFrom(CDemoSyncTick *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoSyncTick *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      4476);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoSyncTick, 0)) != 0 )
  {
    CDemoSyncTick::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoSyncTick::MergeFrom  (line 4487, @0x0000000001b47c80, libserver.so)
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoSyncTick::CDemoSyncTick, CDemoSyncTick::MergeFrom, CDemoSyncTick::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoSyncTick::MergeFrom(CDemoSyncTick *const this, const CDemoSyncTick *const from)
{
  __int64 v4; // rax
  char v5; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v6; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      4488);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoSyncTick::CopyFrom  (line 4492, @0x0000000001b3c090, libserver.so)
void __fastcall CDemoSyncTick::CopyFrom(CDemoSyncTick *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoSyncTick::CopyFrom  (line 4498, @0x0000000001b47e70, libserver.so)
// calls: CDemoSyncTick::MergeFrom
void __fastcall CDemoSyncTick::CopyFrom(CDemoSyncTick *const this, const CDemoSyncTick *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoSyncTick::MergeFrom(this, from);
  }
}


// CDemoSyncTick::IsInitialized  (line 4504, @0x0000000001b3c0d0, libserver.so)
bool __fastcall CDemoSyncTick::IsInitialized(const CDemoSyncTick *const this)
{
  return 1;
}


// CDemoSyncTick::Swap  (line 4509, @0x0000000001b47eb0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>
void __fastcall CDemoSyncTick::Swap(CDemoSyncTick *const this, CDemoSyncTick *other)
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


// CDemoSyncTick::GetMetadata  (line 4516, @0x0000000001b3fef0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoSyncTick_descriptor_, `anonymous namespace'::CDemoSyncTick_reflection_
google::protobuf::Metadata __fastcall CDemoSyncTick::GetMetadata(const CDemoSyncTick *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoSyncTick_descriptor_;
  result.reflection = `anonymous namespace'::CDemoSyncTick_reflection_;
  return result;
}


// CDemoConsoleCmd::CDemoConsoleCmd  (line 4531, @0x0000000001b47fb0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoConsoleCmd::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoConsoleCmd::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoConsoleCmd::CDemoConsoleCmd(CDemoConsoleCmd *const this)
{
  *this = off_3F7B790;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoConsoleCmd::SharedCtor(this);
}


// CDemoConsoleCmd::InitAsDefaultInstance  (line 4537, @0x0000000001b47ee0, libserver.so)
void __fastcall CDemoConsoleCmd::InitAsDefaultInstance(CDemoConsoleCmd *const this)
{
  ;
}


// CDemoConsoleCmd::CDemoConsoleCmd  (line 4540, @0x0000000001b48280, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoConsoleCmd::SharedCtor, CDemoConsoleCmd::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoConsoleCmd::CDemoConsoleCmd(CDemoConsoleCmd *const this, const CDemoConsoleCmd *const from)
{
  *this = off_3F7B790;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoConsoleCmd::SharedCtor(this);
  CDemoConsoleCmd::MergeFrom(this, from);
}


// CDemoConsoleCmd::SharedCtor  (line 4547, @0x0000000001b47ef0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoConsoleCmd::CDemoConsoleCmd
void __fastcall CDemoConsoleCmd::SharedCtor(CDemoConsoleCmd *const this)
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


// CDemoConsoleCmd::~CDemoConsoleCmd  (line 4554, @0x0000000001b480c0, libserver.so)
// calls: CDemoConsoleCmd::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoConsoleCmd::~CDemoConsoleCmd
void __fastcall CDemoConsoleCmd::~CDemoConsoleCmd(CDemoConsoleCmd *const this)
{
  *this = off_3F7B790;
  CDemoConsoleCmd::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoConsoleCmd::~CDemoConsoleCmd  (line 4554, @0x0000000001b48100, libserver.so)
// calls: CDemoConsoleCmd::~CDemoConsoleCmd, operator delete
void __fastcall CDemoConsoleCmd::~CDemoConsoleCmd(CDemoConsoleCmd *const this)
{
  CDemoConsoleCmd::~CDemoConsoleCmd(this);
  operator delete(this);
}


// CDemoConsoleCmd::SharedDtor  (line 4559, @0x0000000001b48050, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoConsoleCmd::~CDemoConsoleCmd
void __fastcall CDemoConsoleCmd::SharedDtor(CDemoConsoleCmd *const this)
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


// CDemoConsoleCmd::SetCachedSize  (line 4565, @0x0000000001b3c0e0, libserver.so)
void __fastcall CDemoConsoleCmd::SetCachedSize(const CDemoConsoleCmd *const this, int size)
{
  *(this + 5) = size;
}


// CDemoConsoleCmd::descriptor  (line 4570, @0x0000000001b48120, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoConsoleCmd_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoConsoleCmd::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoConsoleCmd_descriptor_;
}


// CDemoConsoleCmd::default_instance  (line 4575, @0x0000000001b4e210, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoConsoleCmd::default_instance_
const CDemoConsoleCmd *__cdecl CDemoConsoleCmd::default_instance()
{
  const CDemoConsoleCmd *result; // rax

  result = CDemoConsoleCmd::default_instance_;
  if ( CDemoConsoleCmd::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoConsoleCmd::default_instance_;
  }
  return result;
}


// CDemoConsoleCmd::New  (line 4582, @0x0000000001b48010, libserver.so)
// calls: operator new, CDemoConsoleCmd::CDemoConsoleCmd, operator delete, _Unwind_Resume
CDemoConsoleCmd *__fastcall CDemoConsoleCmd::New(const CDemoConsoleCmd *const this)
{
  CDemoConsoleCmd *v1; // rbx

  v1 = operator new(0x20u);
  CDemoConsoleCmd::CDemoConsoleCmd(v1);
  return v1;
}


// CDemoConsoleCmd::Clear  (line 4586, @0x0000000001b3cad0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoConsoleCmd::Clear(CDemoConsoleCmd *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 1) != 0 )
    std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoConsoleCmd::MergePartialFromCodedStream  (line 4594, @0x0000000001b432a0, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, mutable_cmdstring, set_has_cmdstring
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
bool __fastcall CDemoConsoleCmd::MergePartialFromCodedStream(
        CDemoConsoleCmd *const this,
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


// CDemoConsoleCmd::SerializeWithCachedSizes  (line 4642, @0x0000000001b3d2f0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoConsoleCmd::SerializeWithCachedSizes(
        const CDemoConsoleCmd *const this,
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


// CDemoConsoleCmd::SerializeWithCachedSizesToArray  (line 4662, @0x0000000001b3e850, libserver.so)  // inlines: WriteStringToArray, WriteTagToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDemoConsoleCmd::SerializeWithCachedSizesToArray(
        const CDemoConsoleCmd *const this,
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


// CDemoConsoleCmd::ByteSize  (line 4684, @0x0000000001b3f1f0, libserver.so)  // inlines: StringSize, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CDemoConsoleCmd::ByteSize(const CDemoConsoleCmd *const this)
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


// CDemoConsoleCmd::MergeFrom  (line 4707, @0x0000000001b482f0, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoConsoleCmd*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoConsoleCmd::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoConsoleCmd
void __fastcall CDemoConsoleCmd::MergeFrom(CDemoConsoleCmd *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoConsoleCmd *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      4708);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoConsoleCmd, 0)) != 0 )
  {
    CDemoConsoleCmd::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoConsoleCmd::MergeFrom  (line 4719, @0x0000000001b481b0, libserver.so)  // inlines: set_cmdstring, set_has_cmdstring
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoConsoleCmd::CDemoConsoleCmd, CDemoConsoleCmd::MergeFrom, CDemoConsoleCmd::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoConsoleCmd::MergeFrom(CDemoConsoleCmd *const this, const CDemoConsoleCmd *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      4720);
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


// CDemoConsoleCmd::CopyFrom  (line 4729, @0x0000000001b3c0f0, libserver.so)
void __fastcall CDemoConsoleCmd::CopyFrom(CDemoConsoleCmd *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoConsoleCmd::CopyFrom  (line 4735, @0x0000000001b483d0, libserver.so)
// calls: CDemoConsoleCmd::MergeFrom
void __fastcall CDemoConsoleCmd::CopyFrom(CDemoConsoleCmd *const this, const CDemoConsoleCmd *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoConsoleCmd::MergeFrom(this, from);
  }
}


// CDemoConsoleCmd::IsInitialized  (line 4741, @0x0000000001b3c130, libserver.so)
bool __fastcall CDemoConsoleCmd::IsInitialized(const CDemoConsoleCmd *const this)
{
  return 1;
}


// CDemoConsoleCmd::Swap  (line 4746, @0x0000000001b48410, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoConsoleCmd::Swap(CDemoConsoleCmd *const this, CDemoConsoleCmd *other)
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


// CDemoConsoleCmd::GetMetadata  (line 4755, @0x0000000001b3ff90, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoConsoleCmd_descriptor_, `anonymous namespace'::CDemoConsoleCmd_reflection_
google::protobuf::Metadata __fastcall CDemoConsoleCmd::GetMetadata(const CDemoConsoleCmd *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoConsoleCmd_descriptor_;
  result.reflection = `anonymous namespace'::CDemoConsoleCmd_reflection_;
  return result;
}


// CDemoSendTables::CDemoSendTables  (line 4770, @0x0000000001b48530, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoSendTables::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoSendTables::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoSendTables::CDemoSendTables(CDemoSendTables *const this)
{
  *this = off_3F7B850;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoSendTables::SharedCtor(this);
}


// CDemoSendTables::InitAsDefaultInstance  (line 4776, @0x0000000001b48460, libserver.so)
void __fastcall CDemoSendTables::InitAsDefaultInstance(CDemoSendTables *const this)
{
  ;
}


// CDemoSendTables::CDemoSendTables  (line 4779, @0x0000000001b48800, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoSendTables::SharedCtor, CDemoSendTables::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoSendTables::CDemoSendTables(CDemoSendTables *const this, const CDemoSendTables *const from)
{
  *this = off_3F7B850;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoSendTables::SharedCtor(this);
  CDemoSendTables::MergeFrom(this, from);
}


// CDemoSendTables::SharedCtor  (line 4786, @0x0000000001b48470, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoSendTables::CDemoSendTables
void __fastcall CDemoSendTables::SharedCtor(CDemoSendTables *const this)
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


// CDemoSendTables::~CDemoSendTables  (line 4793, @0x0000000001b48640, libserver.so)
// calls: CDemoSendTables::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoSendTables::~CDemoSendTables
void __fastcall CDemoSendTables::~CDemoSendTables(CDemoSendTables *const this)
{
  *this = off_3F7B850;
  CDemoSendTables::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoSendTables::~CDemoSendTables  (line 4793, @0x0000000001b48680, libserver.so)
// calls: CDemoSendTables::~CDemoSendTables, operator delete
void __fastcall CDemoSendTables::~CDemoSendTables(CDemoSendTables *const this)
{
  CDemoSendTables::~CDemoSendTables(this);
  operator delete(this);
}


// CDemoSendTables::SharedDtor  (line 4798, @0x0000000001b485d0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoSendTables::~CDemoSendTables
void __fastcall CDemoSendTables::SharedDtor(CDemoSendTables *const this)
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


// CDemoSendTables::SetCachedSize  (line 4804, @0x0000000001b3c140, libserver.so)
void __fastcall CDemoSendTables::SetCachedSize(const CDemoSendTables *const this, int size)
{
  *(this + 5) = size;
}


// CDemoSendTables::descriptor  (line 4809, @0x0000000001b486a0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoSendTables_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoSendTables::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoSendTables_descriptor_;
}


// CDemoSendTables::default_instance  (line 4814, @0x0000000001b4e240, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoSendTables::default_instance_
const CDemoSendTables *__cdecl CDemoSendTables::default_instance()
{
  const CDemoSendTables *result; // rax

  result = CDemoSendTables::default_instance_;
  if ( CDemoSendTables::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoSendTables::default_instance_;
  }
  return result;
}


// CDemoSendTables::New  (line 4821, @0x0000000001b48590, libserver.so)
// calls: operator new, CDemoSendTables::CDemoSendTables, operator delete, _Unwind_Resume
CDemoSendTables *__fastcall CDemoSendTables::New(const CDemoSendTables *const this)
{
  CDemoSendTables *v1; // rbx

  v1 = operator new(0x20u);
  CDemoSendTables::CDemoSendTables(v1);
  return v1;
}


// CDemoSendTables::Clear  (line 4825, @0x0000000001b3cb30, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoSendTables::Clear(CDemoSendTables *const this)
{
  bool v2; // zf

  if ( (*(this + 16) & 1) != 0 )
    std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoSendTables::MergePartialFromCodedStream  (line 4833, @0x0000000001b43190, libserver.so)  // inlines: Advance, ExpectAtEnd, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, mutable_data, set_has_data
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
bool __fastcall CDemoSendTables::MergePartialFromCodedStream(
        CDemoSendTables *const this,
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
  if ( v8 != 0 )
    goto LABEL_8;
  return 1;
}


// CDemoSendTables::SerializeWithCachedSizes  (line 4877, @0x0000000001b3ddf0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoSendTables::SerializeWithCachedSizes(
        const CDemoSendTables *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  _QWORD *v6; // rax

  if ( (*(this + 16) & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
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


// CDemoSendTables::SerializeWithCachedSizesToArray  (line 4893, @0x0000000001b3e8b0, libserver.so)  // inlines: WriteBytesToArray, WriteTagToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDemoSendTables::SerializeWithCachedSizesToArray(
        const CDemoSendTables *const this,
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


// CDemoSendTables::ByteSize  (line 4911, @0x0000000001b3edc0, libserver.so)  // inlines: BytesSize, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
int __fastcall CDemoSendTables::ByteSize(const CDemoSendTables *const this)
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


// CDemoSendTables::MergeFrom  (line 4934, @0x0000000001b48870, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoSendTables*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoSendTables::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoSendTables
void __fastcall CDemoSendTables::MergeFrom(CDemoSendTables *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoSendTables *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      4935);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoSendTables, 0)) != 0 )
  {
    CDemoSendTables::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoSendTables::MergeFrom  (line 4946, @0x0000000001b48730, libserver.so)  // inlines: set_data, set_has_data
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoSendTables::CDemoSendTables, CDemoSendTables::MergeFrom, CDemoSendTables::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoSendTables::MergeFrom(CDemoSendTables *const this, const CDemoSendTables *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      4947);
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


// CDemoSendTables::CopyFrom  (line 4956, @0x0000000001b3c150, libserver.so)
void __fastcall CDemoSendTables::CopyFrom(CDemoSendTables *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoSendTables::CopyFrom  (line 4962, @0x0000000001b48950, libserver.so)
// calls: CDemoSendTables::MergeFrom
void __fastcall CDemoSendTables::CopyFrom(CDemoSendTables *const this, const CDemoSendTables *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoSendTables::MergeFrom(this, from);
  }
}


// CDemoSendTables::IsInitialized  (line 4968, @0x0000000001b3c190, libserver.so)
bool __fastcall CDemoSendTables::IsInitialized(const CDemoSendTables *const this)
{
  return 1;
}


// CDemoSendTables::Swap  (line 4973, @0x0000000001b48990, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoSendTables::Swap(CDemoSendTables *const this, CDemoSendTables *other)
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


// CDemoSendTables::GetMetadata  (line 4982, @0x0000000001b40030, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoSendTables_descriptor_, `anonymous namespace'::CDemoSendTables_reflection_
google::protobuf::Metadata __fastcall CDemoSendTables::GetMetadata(const CDemoSendTables *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoSendTables_descriptor_;
  result.reflection = `anonymous namespace'::CDemoSendTables_reflection_;
  return result;
}


// CDemoClassInfo_class_t::CDemoClassInfo_class_t  (line 4999, @0x0000000001b48ae0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoClassInfo_class_t::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoClassInfo_class_t::New, CDemoClassInfo::MergePartialFromCodedStream, CDemoClassInfo::MergeFrom, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoClassInfo_class_t::CDemoClassInfo_class_t(CDemoClassInfo_class_t *const this)
{
  *this = off_3F7B910;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoClassInfo_class_t::SharedCtor(this);
}


// CDemoClassInfo_class_t::InitAsDefaultInstance  (line 5005, @0x0000000001b489e0, libserver.so)
void __fastcall CDemoClassInfo_class_t::InitAsDefaultInstance(CDemoClassInfo_class_t *const this)
{
  ;
}


// CDemoClassInfo_class_t::CDemoClassInfo_class_t  (line 5008, @0x0000000001b49080, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoClassInfo_class_t::SharedCtor, CDemoClassInfo_class_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoClassInfo_class_t::CDemoClassInfo_class_t(
        CDemoClassInfo_class_t *const this,
        const CDemoClassInfo_class_t *const from)
{
  *this = off_3F7B910;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoClassInfo_class_t::SharedCtor(this);
  CDemoClassInfo_class_t::MergeFrom(this, from);
}


// CDemoClassInfo_class_t::SharedCtor  (line 5015, @0x0000000001b489f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoClassInfo_class_t::CDemoClassInfo_class_t
void __fastcall CDemoClassInfo_class_t::SharedCtor(CDemoClassInfo_class_t *const this)
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


// CDemoClassInfo_class_t::~CDemoClassInfo_class_t  (line 5024, @0x0000000001b48e90, libserver.so)
// calls: CDemoClassInfo_class_t::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoClassInfo_class_t::~CDemoClassInfo_class_t
void __fastcall CDemoClassInfo_class_t::~CDemoClassInfo_class_t(CDemoClassInfo_class_t *const this)
{
  *this = off_3F7B910;
  CDemoClassInfo_class_t::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoClassInfo_class_t::~CDemoClassInfo_class_t  (line 5024, @0x0000000001b48ed0, libserver.so)
// calls: CDemoClassInfo_class_t::~CDemoClassInfo_class_t, operator delete
void __fastcall CDemoClassInfo_class_t::~CDemoClassInfo_class_t(CDemoClassInfo_class_t *const this)
{
  CDemoClassInfo_class_t::~CDemoClassInfo_class_t(this);
  operator delete(this);
}


// CDemoClassInfo_class_t::SharedDtor  (line 5029, @0x0000000001b48dd0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoClassInfo_class_t::~CDemoClassInfo_class_t
void __fastcall CDemoClassInfo_class_t::SharedDtor(CDemoClassInfo_class_t *const this)
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


// CDemoClassInfo_class_t::SetCachedSize  (line 5036, @0x0000000001b3c1a0, libserver.so)
void __fastcall CDemoClassInfo_class_t::SetCachedSize(const CDemoClassInfo_class_t *const this, int size)
{
  *(this + 5) = size;
}


// CDemoClassInfo_class_t::descriptor  (line 5041, @0x0000000001b48ef0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoClassInfo_class_t_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoClassInfo_class_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoClassInfo_class_t_descriptor_;
}


// CDemoClassInfo_class_t::default_instance  (line 5046, @0x0000000001b4e270, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoClassInfo_class_t::default_instance_
const CDemoClassInfo_class_t *__cdecl CDemoClassInfo_class_t::default_instance()
{
  const CDemoClassInfo_class_t *result; // rax

  result = CDemoClassInfo_class_t::default_instance_;
  if ( CDemoClassInfo_class_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoClassInfo_class_t::default_instance_;
  }
  return result;
}


// CDemoClassInfo_class_t::New  (line 5053, @0x0000000001b48b40, libserver.so)
// calls: operator new, CDemoClassInfo_class_t::CDemoClassInfo_class_t, operator delete, _Unwind_Resume
CDemoClassInfo_class_t *__fastcall CDemoClassInfo_class_t::New(const CDemoClassInfo_class_t *const this)
{
  CDemoClassInfo_class_t *v1; // rbx

  v1 = operator new(0x30u);
  CDemoClassInfo_class_t::CDemoClassInfo_class_t(v1);
  return v1;
}


// CDemoClassInfo_class_t::Clear  (line 5057, @0x0000000001b3cb90, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoClassInfo_class_t::Clear(CDemoClassInfo_class_t *const this)
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


// CDemoClassInfo_class_t::MergePartialFromCodedStream  (line 5071, @0x0000000001b42850, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_network_name, mutable_table_name, set_has_class_id, set_has_network_name, set_has_table_name
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
// callers: CDemoClassInfo::MergePartialFromCodedStream
bool __fastcall CDemoClassInfo_class_t::MergePartialFromCodedStream(
        CDemoClassInfo_class_t *const this,
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
  unsigned int v14[9]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = this + 8;
  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  while ( 1 )
  {
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
      if ( v9 == 2 )
      {
        if ( v8 != 18 )
          goto handle_unusual;
        goto parse_network_name;
      }
      if ( v9 != 3 )
        break;
      if ( v8 != 26 )
        goto handle_unusual;
parse_table_name:
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
    *(this + 10) = v13;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      v9 = (buffer + 1);
      input->buffer_ = v9;
parse_network_name:
      *(this + 4) |= 2u;
      if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), v9) == 0 )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer < buffer_end && *buffer == 26 )
      {
        v9 = (buffer + 1);
        input->buffer_ = v9;
        goto parse_table_name;
      }
    }
  }
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CDemoClassInfo_class_t::SerializeWithCachedSizes  (line 5151, @0x0000000001b3d350, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoClassInfo_class_t::SerializeWithCachedSizes(
        const CDemoClassInfo_class_t *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  _QWORD *v7; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_0 + 1, *(this + 10), output, v3);
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


// CDemoClassInfo_class_t::SerializeWithCachedSizesToArray  (line 5186, @0x0000000001b3f830, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDemoClassInfo::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDemoClassInfo_class_t::SerializeWithCachedSizesToArray(
        const CDemoClassInfo_class_t *const this,
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


// CDemoClassInfo_class_t::ByteSize  (line 5224, @0x0000000001b3f320, libserver.so)  // inlines: Int32Size, StringSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDemoClassInfo::ByteSize
int __fastcall CDemoClassInfo_class_t::ByteSize(const CDemoClassInfo_class_t *const this)
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
    goto LABEL_8;
  LOBYTE(v5) = *(this + 4);
  if ( (v4 & 1) == 0 )
  {
LABEL_6:
    if ( (v5 & 2) == 0 )
      goto LABEL_7;
    goto LABEL_15;
  }
  v6 = *(this + 10);
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
    if ( (v5 & 4) == 0 )
      goto LABEL_8;
    goto LABEL_12;
  }
LABEL_15:
  v14 = *(this + 3);
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
  if ( (v5 & 4) != 0 )
  {
LABEL_12:
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
LABEL_8:
  v8 = *(this + 1);
  if ( v8 != 0 && *(v8 + 8) != *v8 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v8);
  *(this + 5) = v3;
  return v3;
}


// CDemoClassInfo_class_t::MergeFrom  (line 5261, @0x0000000001b490f0, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoClassInfo_class_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoClassInfo_class_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoClassInfo_class_t
void __fastcall CDemoClassInfo_class_t::MergeFrom(
        CDemoClassInfo_class_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoClassInfo_class_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      5262);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoClassInfo_class_t, 0)) != 0 )
  {
    CDemoClassInfo_class_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoClassInfo_class_t::MergeFrom  (line 5273, @0x0000000001b48f80, libserver.so)  // inlines: set_class_id, set_has_class_id, set_has_network_name, set_has_table_name, set_network_name, set_table_name
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoClassInfo_class_t::CDemoClassInfo_class_t, CDemoClassInfo_class_t::MergeFrom, CDemoClassInfo_class_t::CopyFrom, CDemoClassInfo::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoClassInfo_class_t::MergeFrom(
        CDemoClassInfo_class_t *const this,
        const CDemoClassInfo_class_t *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      5274);
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


// CDemoClassInfo_class_t::CopyFrom  (line 5289, @0x0000000001b3c1b0, libserver.so)
void __fastcall CDemoClassInfo_class_t::CopyFrom(
        CDemoClassInfo_class_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoClassInfo_class_t::CopyFrom  (line 5295, @0x0000000001b491d0, libserver.so)
// calls: CDemoClassInfo_class_t::MergeFrom
void __fastcall CDemoClassInfo_class_t::CopyFrom(
        CDemoClassInfo_class_t *const this,
        const CDemoClassInfo_class_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoClassInfo_class_t::MergeFrom(this, from);
  }
}


// CDemoClassInfo_class_t::IsInitialized  (line 5301, @0x0000000001b3c1f0, libserver.so)
bool __fastcall CDemoClassInfo_class_t::IsInitialized(const CDemoClassInfo_class_t *const this)
{
  return 1;
}


// CDemoClassInfo_class_t::Swap  (line 5306, @0x0000000001b49210, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoClassInfo_class_t::Swap(CDemoClassInfo_class_t *const this, CDemoClassInfo_class_t *other)
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


// CDemoClassInfo_class_t::GetMetadata  (line 5317, @0x0000000001b400d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoClassInfo_class_t_descriptor_, `anonymous namespace'::CDemoClassInfo_class_t_reflection_
google::protobuf::Metadata __fastcall CDemoClassInfo_class_t::GetMetadata(const CDemoClassInfo_class_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoClassInfo_class_t_descriptor_;
  result.reflection = `anonymous namespace'::CDemoClassInfo_class_t_reflection_;
  return result;
}


// CDemoClassInfo::CDemoClassInfo  (line 5332, @0x0000000001b49270, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDemoClassInfo::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoClassInfo::CDemoClassInfo(CDemoClassInfo *const this)
{
  *this = off_3F7B9D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDemoClassInfo::InitAsDefaultInstance  (line 5338, @0x0000000001b49310, libserver.so)
void __fastcall CDemoClassInfo::InitAsDefaultInstance(CDemoClassInfo *const this)
{
  ;
}


// CDemoClassInfo::CDemoClassInfo  (line 5341, @0x0000000001b495b0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoClassInfo::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoClassInfo::CDemoClassInfo(CDemoClassInfo *const this, const CDemoClassInfo *const from)
{
  *this = off_3F7B9D0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
  CDemoClassInfo::MergeFrom(this, from);
}


// CDemoClassInfo::SharedCtor  (line 5348, @0x0000000001b49320, libserver.so)  // inlines: memset
void __fastcall CDemoClassInfo::SharedCtor(CDemoClassInfo *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDemoClassInfo::~CDemoClassInfo  (line 5353, @0x0000000001b3e510, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoClassInfo::~CDemoClassInfo
void __fastcall CDemoClassInfo::~CDemoClassInfo(CDemoClassInfo *const this)
{
  *this = off_3F7B9D0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoClassInfo::~CDemoClassInfo  (line 5353, @0x0000000001b3e550, libserver.so)
// calls: CDemoClassInfo::~CDemoClassInfo, operator delete
void __fastcall CDemoClassInfo::~CDemoClassInfo(CDemoClassInfo *const this)
{
  CDemoClassInfo::~CDemoClassInfo(this);
  operator delete(this);
}


// CDemoClassInfo::SharedDtor  (line 5358, @0x0000000001b49340, libserver.so)
void __fastcall CDemoClassInfo::SharedDtor(CDemoClassInfo *const this)
{
  ;
}


// CDemoClassInfo::SetCachedSize  (line 5363, @0x0000000001b3c200, libserver.so)
void __fastcall CDemoClassInfo::SetCachedSize(const CDemoClassInfo *const this, int size)
{
  *(this + 5) = size;
}


// CDemoClassInfo::descriptor  (line 5368, @0x0000000001b49350, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoClassInfo_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoClassInfo::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoClassInfo_descriptor_;
}


// CDemoClassInfo::default_instance  (line 5373, @0x0000000001b4e2a0, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoClassInfo::default_instance_
const CDemoClassInfo *__cdecl CDemoClassInfo::default_instance()
{
  const CDemoClassInfo *result; // rax

  result = CDemoClassInfo::default_instance_;
  if ( CDemoClassInfo::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoClassInfo::default_instance_;
  }
  return result;
}


// CDemoClassInfo::New  (line 5380, @0x0000000001b492d0, libserver.so)
// calls: operator new, CDemoClassInfo::CDemoClassInfo, operator delete, _Unwind_Resume
CDemoClassInfo *__fastcall CDemoClassInfo::New(const CDemoClassInfo *const this)
{
  CDemoClassInfo *v1; // rbx

  v1 = operator new(0x30u);
  CDemoClassInfo::CDemoClassInfo(v1);
  return v1;
}


// CDemoClassInfo::Clear  (line 5384, @0x0000000001b3cf90, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDemoClassInfo::Clear(CDemoClassInfo *const this)
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


// CDemoClassInfo::MergePartialFromCodedStream  (line 5390, @0x0000000001b48b80, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CDemoClassInfo_class_t>, ReadTagWithCutoff, ReadVarint32, add_classes
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CDemoClassInfo_class_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CDemoClassInfo_class_t::CDemoClassInfo_class_t, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
bool __fastcall CDemoClassInfo::MergePartialFromCodedStream(
        CDemoClassInfo *const this,
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
  CDemoClassInfo_class_t *v13; // r13
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
        v13 = operator new(0x30u);
        CDemoClassInfo_class_t::CDemoClassInfo_class_t(v13);
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
      if ( !CDemoClassInfo_class_t::MergePartialFromCodedStream(v13, input) || !input->legitimate_message_end_ )
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


// CDemoClassInfo::SerializeWithCachedSizes  (line 5436, @0x0000000001b3da80, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, classes, empty
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoClassInfo::SerializeWithCachedSizes(
        const CDemoClassInfo *const this,
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


// CDemoClassInfo::SerializeWithCachedSizesToArray  (line 5452, @0x0000000001b3f8f0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CDemoClassInfo_class_t>, WriteTagToArray, WriteVarint32ToArray, classes, empty
// calls: CDemoClassInfo_class_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDemoClassInfo::SerializeWithCachedSizesToArray(
        const CDemoClassInfo *const this,
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
      result = CDemoClassInfo_class_t::SerializeWithCachedSizesToArray(v8, v6);
    }
    while ( v5 < *(this + 8) );
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v10);
  return result;
}


// CDemoClassInfo::ByteSize  (line 5470, @0x0000000001b3f430, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDemoClassInfo_class_t>, VarintSize32, classes, empty
// calls: CDemoClassInfo_class_t::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDemoClassInfo::ByteSize(const CDemoClassInfo *const this)
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
      v6 = CDemoClassInfo_class_t::ByteSize(*(*(this + 3) + v4));
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


// CDemoClassInfo::MergeFrom  (line 5492, @0x0000000001b49650, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoClassInfo*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoClassInfo::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoClassInfo
void __fastcall CDemoClassInfo::MergeFrom(CDemoClassInfo *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoClassInfo *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      5493);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoClassInfo, 0)) != 0 )
  {
    CDemoClassInfo::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoClassInfo::MergeFrom  (line 5504, @0x0000000001b493e0, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>, New
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDemoClassInfo_class_t::CDemoClassInfo_class_t, CDemoClassInfo_class_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CDemoClassInfo::CDemoClassInfo, CDemoClassInfo::MergeFrom, CDemoClassInfo::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CDemoClassInfo::MergeFrom(CDemoClassInfo *const this, const CDemoClassInfo *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CDemoClassInfo_class_t *v6; // r15
  __int64 v7; // rax
  CDemoClassInfo_class_t *v8; // rdi
  __int64 v9; // rdx
  const CDemoClassInfo_class_t *v10; // rsi
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      5505);
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
        v6 = operator new(0x30u);
        CDemoClassInfo_class_t::CDemoClassInfo_class_t(v6);
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
      CDemoClassInfo_class_t::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoClassInfo::CopyFrom  (line 5510, @0x0000000001b3c210, libserver.so)
void __fastcall CDemoClassInfo::CopyFrom(CDemoClassInfo *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoClassInfo::CopyFrom  (line 5516, @0x0000000001b49730, libserver.so)
// calls: CDemoClassInfo::MergeFrom
void __fastcall CDemoClassInfo::CopyFrom(CDemoClassInfo *const this, const CDemoClassInfo *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoClassInfo::MergeFrom(this, from);
  }
}


// CDemoClassInfo::IsInitialized  (line 5522, @0x0000000001b3c250, libserver.so)
bool __fastcall CDemoClassInfo::IsInitialized(const CDemoClassInfo *const this)
{
  return 1;
}


// CDemoClassInfo::Swap  (line 5527, @0x0000000001b49770, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDemoClassInfo::Swap(CDemoClassInfo *const this, CDemoClassInfo *other)
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


// CDemoClassInfo::GetMetadata  (line 5536, @0x0000000001b40170, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoClassInfo_descriptor_, `anonymous namespace'::CDemoClassInfo_reflection_
google::protobuf::Metadata __fastcall CDemoClassInfo::GetMetadata(const CDemoClassInfo *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoClassInfo_descriptor_;
  result.reflection = `anonymous namespace'::CDemoClassInfo_reflection_;
  return result;
}


// CDemoCustomData::CDemoCustomData  (line 5552, @0x0000000001b498a0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoCustomData::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoCustomData::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoCustomData::CDemoCustomData(CDemoCustomData *const this)
{
  *this = off_3F7BA90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoCustomData::SharedCtor(this);
}


// CDemoCustomData::InitAsDefaultInstance  (line 5558, @0x0000000001b497d0, libserver.so)
void __fastcall CDemoCustomData::InitAsDefaultInstance(CDemoCustomData *const this)
{
  ;
}


// CDemoCustomData::CDemoCustomData  (line 5561, @0x0000000001b49b80, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoCustomData::SharedCtor, CDemoCustomData::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoCustomData::CDemoCustomData(CDemoCustomData *const this, const CDemoCustomData *const from)
{
  *this = off_3F7BA90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoCustomData::SharedCtor(this);
  CDemoCustomData::MergeFrom(this, from);
}


// CDemoCustomData::SharedCtor  (line 5568, @0x0000000001b497e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoCustomData::CDemoCustomData
void __fastcall CDemoCustomData::SharedCtor(CDemoCustomData *const this)
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


// CDemoCustomData::~CDemoCustomData  (line 5576, @0x0000000001b499b0, libserver.so)
// calls: CDemoCustomData::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoCustomData::~CDemoCustomData
void __fastcall CDemoCustomData::~CDemoCustomData(CDemoCustomData *const this)
{
  *this = off_3F7BA90;
  CDemoCustomData::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoCustomData::~CDemoCustomData  (line 5576, @0x0000000001b499f0, libserver.so)
// calls: CDemoCustomData::~CDemoCustomData, operator delete
void __fastcall CDemoCustomData::~CDemoCustomData(CDemoCustomData *const this)
{
  CDemoCustomData::~CDemoCustomData(this);
  operator delete(this);
}


// CDemoCustomData::SharedDtor  (line 5581, @0x0000000001b49940, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoCustomData::~CDemoCustomData
void __fastcall CDemoCustomData::SharedDtor(CDemoCustomData *const this)
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


// CDemoCustomData::SetCachedSize  (line 5587, @0x0000000001b3c260, libserver.so)
void __fastcall CDemoCustomData::SetCachedSize(const CDemoCustomData *const this, int size)
{
  *(this + 5) = size;
}


// CDemoCustomData::descriptor  (line 5592, @0x0000000001b49a10, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoCustomData_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoCustomData::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoCustomData_descriptor_;
}


// CDemoCustomData::default_instance  (line 5597, @0x0000000001b4e2d0, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoCustomData::default_instance_
const CDemoCustomData *__cdecl CDemoCustomData::default_instance()
{
  const CDemoCustomData *result; // rax

  result = CDemoCustomData::default_instance_;
  if ( CDemoCustomData::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoCustomData::default_instance_;
  }
  return result;
}


// CDemoCustomData::New  (line 5604, @0x0000000001b49900, libserver.so)
// calls: operator new, CDemoCustomData::CDemoCustomData, operator delete, _Unwind_Resume
CDemoCustomData *__fastcall CDemoCustomData::New(const CDemoCustomData *const this)
{
  CDemoCustomData *v1; // rbx

  v1 = operator new(0x28u);
  CDemoCustomData::CDemoCustomData(v1);
  return v1;
}


// CDemoCustomData::Clear  (line 5608, @0x0000000001b3cc20, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoCustomData::Clear(CDemoCustomData *const this)
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


// CDemoCustomData::MergePartialFromCodedStream  (line 5619, @0x0000000001b41e60, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_data, set_has_callback_index, set_has_data
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CDemoCustomData::MergePartialFromCodedStream(
        CDemoCustomData *const this,
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
parse_data:
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
    goto parse_data;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CDemoCustomData::SerializeWithCachedSizes  (line 5678, @0x0000000001b3de50, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoCustomData::SerializeWithCachedSizes(
        const CDemoCustomData *const this,
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


// CDemoCustomData::SerializeWithCachedSizesToArray  (line 5699, @0x0000000001b3f4c0, libserver.so)  // inlines: WriteBytesToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CDemoCustomData::SerializeWithCachedSizesToArray(
        const CDemoCustomData *const this,
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


// CDemoCustomData::ByteSize  (line 5722, @0x0000000001b3ee30, libserver.so)  // inlines: BytesSize, Int32Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDemoCustomData::ByteSize(const CDemoCustomData *const this)
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


// CDemoCustomData::MergeFrom  (line 5752, @0x0000000001b49bf0, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoCustomData*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoCustomData::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoCustomData
void __fastcall CDemoCustomData::MergeFrom(CDemoCustomData *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoCustomData *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      5753);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoCustomData, 0)) != 0 )
  {
    CDemoCustomData::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoCustomData::MergeFrom  (line 5764, @0x0000000001b49aa0, libserver.so)  // inlines: set_callback_index, set_data, set_has_callback_index, set_has_data
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoCustomData::CDemoCustomData, CDemoCustomData::MergeFrom, CDemoCustomData::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoCustomData::MergeFrom(CDemoCustomData *const this, const CDemoCustomData *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      5765);
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


// CDemoCustomData::CopyFrom  (line 5777, @0x0000000001b3c270, libserver.so)
void __fastcall CDemoCustomData::CopyFrom(CDemoCustomData *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoCustomData::CopyFrom  (line 5783, @0x0000000001b49cd0, libserver.so)
// calls: CDemoCustomData::MergeFrom
void __fastcall CDemoCustomData::CopyFrom(CDemoCustomData *const this, const CDemoCustomData *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoCustomData::MergeFrom(this, from);
  }
}


// CDemoCustomData::IsInitialized  (line 5789, @0x0000000001b3c2b0, libserver.so)
bool __fastcall CDemoCustomData::IsInitialized(const CDemoCustomData *const this)
{
  return 1;
}


// CDemoCustomData::Swap  (line 5794, @0x0000000001b49d10, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoCustomData::Swap(CDemoCustomData *const this, CDemoCustomData *other)
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


// CDemoCustomData::GetMetadata  (line 5804, @0x0000000001b40210, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoCustomData_descriptor_, `anonymous namespace'::CDemoCustomData_reflection_
google::protobuf::Metadata __fastcall CDemoCustomData::GetMetadata(const CDemoCustomData *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoCustomData_descriptor_;
  result.reflection = `anonymous namespace'::CDemoCustomData_reflection_;
  return result;
}


// CDemoCustomDataCallbacks::CDemoCustomDataCallbacks  (line 5819, @0x0000000001b49df0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoCustomDataCallbacks::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoCustomDataCallbacks::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoCustomDataCallbacks::CDemoCustomDataCallbacks(CDemoCustomDataCallbacks *const this)
{
  *this = off_3F7BB50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  CDemoCustomDataCallbacks::SharedCtor(this);
}


// CDemoCustomDataCallbacks::InitAsDefaultInstance  (line 5825, @0x0000000001b49d60, libserver.so)
void __fastcall CDemoCustomDataCallbacks::InitAsDefaultInstance(CDemoCustomDataCallbacks *const this)
{
  ;
}


// CDemoCustomDataCallbacks::CDemoCustomDataCallbacks  (line 5828, @0x0000000001b4a100, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoCustomDataCallbacks::SharedCtor, CDemoCustomDataCallbacks::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoCustomDataCallbacks::CDemoCustomDataCallbacks(
        CDemoCustomDataCallbacks *const this,
        const CDemoCustomDataCallbacks *const from)
{
  *this = off_3F7BB50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  CDemoCustomDataCallbacks::SharedCtor(this);
  CDemoCustomDataCallbacks::MergeFrom(this, from);
}


// CDemoCustomDataCallbacks::SharedCtor  (line 5835, @0x0000000001b49d70, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDemoCustomDataCallbacks::CDemoCustomDataCallbacks
void __fastcall CDemoCustomDataCallbacks::SharedCtor(CDemoCustomDataCallbacks *const this)
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


// CDemoCustomDataCallbacks::~CDemoCustomDataCallbacks  (line 5841, @0x0000000001b3e200, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoCustomDataCallbacks::~CDemoCustomDataCallbacks
void __fastcall CDemoCustomDataCallbacks::~CDemoCustomDataCallbacks(CDemoCustomDataCallbacks *const this)
{
  *this = off_3F7BB50;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoCustomDataCallbacks::~CDemoCustomDataCallbacks  (line 5841, @0x0000000001b3e240, libserver.so)
// calls: CDemoCustomDataCallbacks::~CDemoCustomDataCallbacks, operator delete
void __fastcall CDemoCustomDataCallbacks::~CDemoCustomDataCallbacks(CDemoCustomDataCallbacks *const this)
{
  CDemoCustomDataCallbacks::~CDemoCustomDataCallbacks(this);
  operator delete(this);
}


// CDemoCustomDataCallbacks::SharedDtor  (line 5846, @0x0000000001b49ec0, libserver.so)
void __fastcall CDemoCustomDataCallbacks::SharedDtor(CDemoCustomDataCallbacks *const this)
{
  ;
}


// CDemoCustomDataCallbacks::SetCachedSize  (line 5851, @0x0000000001b3c2c0, libserver.so)
void __fastcall CDemoCustomDataCallbacks::SetCachedSize(const CDemoCustomDataCallbacks *const this, int size)
{
  *(this + 5) = size;
}


// CDemoCustomDataCallbacks::descriptor  (line 5856, @0x0000000001b49ed0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoCustomDataCallbacks_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoCustomDataCallbacks::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoCustomDataCallbacks_descriptor_;
}


// CDemoCustomDataCallbacks::default_instance  (line 5861, @0x0000000001b4e300, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoCustomDataCallbacks::default_instance_
const CDemoCustomDataCallbacks *__cdecl CDemoCustomDataCallbacks::default_instance()
{
  const CDemoCustomDataCallbacks *result; // rax

  result = CDemoCustomDataCallbacks::default_instance_;
  if ( CDemoCustomDataCallbacks::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoCustomDataCallbacks::default_instance_;
  }
  return result;
}


// CDemoCustomDataCallbacks::New  (line 5868, @0x0000000001b49e80, libserver.so)
// calls: operator new, CDemoCustomDataCallbacks::CDemoCustomDataCallbacks, operator delete, _Unwind_Resume
CDemoCustomDataCallbacks *__fastcall CDemoCustomDataCallbacks::New(const CDemoCustomDataCallbacks *const this)
{
  CDemoCustomDataCallbacks *v1; // rbx

  v1 = operator new(0x30u);
  CDemoCustomDataCallbacks::CDemoCustomDataCallbacks(v1);
  return v1;
}


// CDemoCustomDataCallbacks::Clear  (line 5872, @0x0000000001b3e320, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDemoCustomDataCallbacks::Clear(CDemoCustomDataCallbacks *const this)
{
  bool v2; // zf

  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    this + 1,
    (this + 32));
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoCustomDataCallbacks::MergePartialFromCodedStream  (line 5878, @0x0000000001b3f070, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, add_save_id
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::StringTypeHandlerBase::New(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
bool __fastcall CDemoCustomDataCallbacks::MergePartialFromCodedStream(
        CDemoCustomDataCallbacks *const this,
        google::protobuf::io::CodedInputStream *input)
{
  CDemoCustomDataCallbacks *v2; // r14
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


// CDemoCustomDataCallbacks::SerializeWithCachedSizes  (line 5929, @0x0000000001b3e090, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, empty, save_id
// calls: google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoCustomDataCallbacks::SerializeWithCachedSizes(
        const CDemoCustomDataCallbacks *const this,
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


// CDemoCustomDataCallbacks::SerializeWithCachedSizesToArray  (line 5949, @0x0000000001b3e6b0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, WriteStringToArray, WriteTagToArray, empty, save_id
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDemoCustomDataCallbacks::SerializeWithCachedSizesToArray(
        const CDemoCustomDataCallbacks *const this,
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


// CDemoCustomDataCallbacks::ByteSize  (line 5970, @0x0000000001b3eb40, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, StringSize, VarintSize32, empty, save_id, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDemoCustomDataCallbacks::ByteSize(const CDemoCustomDataCallbacks *const this)
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


// CDemoCustomDataCallbacks::MergeFrom  (line 5991, @0x0000000001b4a1a0, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoCustomDataCallbacks*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoCustomDataCallbacks::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoCustomDataCallbacks
void __fastcall CDemoCustomDataCallbacks::MergeFrom(
        CDemoCustomDataCallbacks *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoCustomDataCallbacks *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      5992);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoCustomDataCallbacks, 0)) != 0 )
  {
    CDemoCustomDataCallbacks::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoCustomDataCallbacks::MergeFrom  (line 6003, @0x0000000001b49f60, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, operator=
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::internal::StringTypeHandlerBase::New(void), std::string::assign(std::string const&), google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoCustomDataCallbacks::CDemoCustomDataCallbacks, CDemoCustomDataCallbacks::MergeFrom, CDemoCustomDataCallbacks::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CDemoCustomDataCallbacks::MergeFrom(
        CDemoCustomDataCallbacks *const this,
        const CDemoCustomDataCallbacks *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      6004);
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
  v4 = *(from + 8);
  if ( v4 > 0 )
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


// CDemoCustomDataCallbacks::CopyFrom  (line 6009, @0x0000000001b3c2d0, libserver.so)
void __fastcall CDemoCustomDataCallbacks::CopyFrom(
        CDemoCustomDataCallbacks *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoCustomDataCallbacks::CopyFrom  (line 6015, @0x0000000001b4a280, libserver.so)
// calls: CDemoCustomDataCallbacks::MergeFrom
void __fastcall CDemoCustomDataCallbacks::CopyFrom(
        CDemoCustomDataCallbacks *const this,
        const CDemoCustomDataCallbacks *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoCustomDataCallbacks::MergeFrom(this, from);
  }
}


// CDemoCustomDataCallbacks::IsInitialized  (line 6021, @0x0000000001b3c310, libserver.so)
bool __fastcall CDemoCustomDataCallbacks::IsInitialized(const CDemoCustomDataCallbacks *const this)
{
  return 1;
}


// CDemoCustomDataCallbacks::Swap  (line 6026, @0x0000000001b4a2c0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDemoCustomDataCallbacks::Swap(CDemoCustomDataCallbacks *const this, CDemoCustomDataCallbacks *other)
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


// CDemoCustomDataCallbacks::GetMetadata  (line 6035, @0x0000000001b40490, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoCustomDataCallbacks_descriptor_, `anonymous namespace'::CDemoCustomDataCallbacks_reflection_
google::protobuf::Metadata __fastcall CDemoCustomDataCallbacks::GetMetadata(const CDemoCustomDataCallbacks *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoCustomDataCallbacks_descriptor_;
  result.reflection = `anonymous namespace'::CDemoCustomDataCallbacks_reflection_;
  return result;
}


// CDemoStringTables_items_t::CDemoStringTables_items_t  (line 6051, @0x0000000001b4a410, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoStringTables_items_t::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoStringTables_items_t::New, CDemoStringTables_table_t::MergePartialFromCodedStream, CDemoStringTables_table_t::MergeFrom, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoStringTables_items_t::CDemoStringTables_items_t(CDemoStringTables_items_t *const this)
{
  *this = off_3F7BC10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoStringTables_items_t::SharedCtor(this);
}


// CDemoStringTables_items_t::InitAsDefaultInstance  (line 6057, @0x0000000001b4a320, libserver.so)
void __fastcall CDemoStringTables_items_t::InitAsDefaultInstance(CDemoStringTables_items_t *const this)
{
  ;
}


// CDemoStringTables_items_t::CDemoStringTables_items_t  (line 6060, @0x0000000001b4ac00, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoStringTables_items_t::SharedCtor, CDemoStringTables_items_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoStringTables_items_t::CDemoStringTables_items_t(
        CDemoStringTables_items_t *const this,
        const CDemoStringTables_items_t *const from)
{
  *this = off_3F7BC10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoStringTables_items_t::SharedCtor(this);
  CDemoStringTables_items_t::MergeFrom(this, from);
}


// CDemoStringTables_items_t::SharedCtor  (line 6067, @0x0000000001b4a330, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoStringTables_items_t::CDemoStringTables_items_t
void __fastcall CDemoStringTables_items_t::SharedCtor(CDemoStringTables_items_t *const this)
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


// CDemoStringTables_items_t::~CDemoStringTables_items_t  (line 6075, @0x0000000001b4aa20, libserver.so)
// calls: CDemoStringTables_items_t::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoStringTables_items_t::~CDemoStringTables_items_t
void __fastcall CDemoStringTables_items_t::~CDemoStringTables_items_t(CDemoStringTables_items_t *const this)
{
  *this = off_3F7BC10;
  CDemoStringTables_items_t::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoStringTables_items_t::~CDemoStringTables_items_t  (line 6075, @0x0000000001b4aa60, libserver.so)
// calls: CDemoStringTables_items_t::~CDemoStringTables_items_t, operator delete
void __fastcall CDemoStringTables_items_t::~CDemoStringTables_items_t(CDemoStringTables_items_t *const this)
{
  CDemoStringTables_items_t::~CDemoStringTables_items_t(this);
  operator delete(this);
}


// CDemoStringTables_items_t::SharedDtor  (line 6080, @0x0000000001b4a960, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoStringTables_items_t::~CDemoStringTables_items_t
void __fastcall CDemoStringTables_items_t::SharedDtor(CDemoStringTables_items_t *const this)
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


// CDemoStringTables_items_t::SetCachedSize  (line 6087, @0x0000000001b3c320, libserver.so)
void __fastcall CDemoStringTables_items_t::SetCachedSize(const CDemoStringTables_items_t *const this, int size)
{
  *(this + 5) = size;
}


// CDemoStringTables_items_t::descriptor  (line 6092, @0x0000000001b4aa80, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoStringTables_items_t_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoStringTables_items_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoStringTables_items_t_descriptor_;
}


// CDemoStringTables_items_t::default_instance  (line 6097, @0x0000000001b4e330, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoStringTables_items_t::default_instance_
const CDemoStringTables_items_t *__cdecl CDemoStringTables_items_t::default_instance()
{
  const CDemoStringTables_items_t *result; // rax

  result = CDemoStringTables_items_t::default_instance_;
  if ( CDemoStringTables_items_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoStringTables_items_t::default_instance_;
  }
  return result;
}


// CDemoStringTables_items_t::New  (line 6104, @0x0000000001b4a470, libserver.so)
// calls: operator new, CDemoStringTables_items_t::CDemoStringTables_items_t, operator delete, _Unwind_Resume
CDemoStringTables_items_t *__fastcall CDemoStringTables_items_t::New(const CDemoStringTables_items_t *const this)
{
  CDemoStringTables_items_t *v1; // rbx

  v1 = operator new(0x28u);
  CDemoStringTables_items_t::CDemoStringTables_items_t(v1);
  return v1;
}


// CDemoStringTables_items_t::Clear  (line 6108, @0x0000000001b3cc90, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoStringTables_items_t::Clear(CDemoStringTables_items_t *const this)
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


// CDemoStringTables_items_t::MergePartialFromCodedStream  (line 6121, @0x0000000001b41b90, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, mutable_data, mutable_str, set_has_data, set_has_str
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
// callers: CDemoStringTables_table_t::MergePartialFromCodedStream
bool __fastcall CDemoStringTables_items_t::MergePartialFromCodedStream(
        CDemoStringTables_items_t *const this,
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


// CDemoStringTables_items_t::SerializeWithCachedSizes  (line 6182, @0x0000000001b3ded0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoStringTables_items_t::SerializeWithCachedSizes(
        const CDemoStringTables_items_t *const this,
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


// CDemoStringTables_items_t::SerializeWithCachedSizesToArray  (line 6208, @0x0000000001b3e7d0, libserver.so)  // inlines: WriteBytesToArray, WriteStringToArray, WriteTagToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDemoStringTables_table_t::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDemoStringTables_items_t::SerializeWithCachedSizesToArray(
        const CDemoStringTables_items_t *const this,
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


// CDemoStringTables_items_t::ByteSize  (line 6237, @0x0000000001b3f260, libserver.so)  // inlines: BytesSize, StringSize, VarintSize32, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDemoStringTables_table_t::ByteSize
int __fastcall CDemoStringTables_items_t::ByteSize(const CDemoStringTables_items_t *const this)
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


// CDemoStringTables_items_t::MergeFrom  (line 6267, @0x0000000001b4ac70, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoStringTables_items_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoStringTables_items_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoStringTables_items_t
void __fastcall CDemoStringTables_items_t::MergeFrom(
        CDemoStringTables_items_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoStringTables_items_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      6268);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoStringTables_items_t, 0)) != 0 )
  {
    CDemoStringTables_items_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoStringTables_items_t::MergeFrom  (line 6279, @0x0000000001b4ab10, libserver.so)  // inlines: set_data, set_has_data, set_has_str, set_str
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoStringTables_items_t::CDemoStringTables_items_t, CDemoStringTables_items_t::MergeFrom, CDemoStringTables_items_t::CopyFrom, CDemoStringTables_table_t::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoStringTables_items_t::MergeFrom(
        CDemoStringTables_items_t *const this,
        const CDemoStringTables_items_t *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      6280);
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


// CDemoStringTables_items_t::CopyFrom  (line 6292, @0x0000000001b3c330, libserver.so)
void __fastcall CDemoStringTables_items_t::CopyFrom(
        CDemoStringTables_items_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoStringTables_items_t::CopyFrom  (line 6298, @0x0000000001b4ad50, libserver.so)
// calls: CDemoStringTables_items_t::MergeFrom
void __fastcall CDemoStringTables_items_t::CopyFrom(
        CDemoStringTables_items_t *const this,
        const CDemoStringTables_items_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoStringTables_items_t::MergeFrom(this, from);
  }
}


// CDemoStringTables_items_t::IsInitialized  (line 6304, @0x0000000001b3c370, libserver.so)
bool __fastcall CDemoStringTables_items_t::IsInitialized(const CDemoStringTables_items_t *const this)
{
  return 1;
}


// CDemoStringTables_items_t::Swap  (line 6309, @0x0000000001b4ad90, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoStringTables_items_t::Swap(
        CDemoStringTables_items_t *const this,
        CDemoStringTables_items_t *other)
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


// CDemoStringTables_items_t::GetMetadata  (line 6319, @0x0000000001b40530, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoStringTables_items_t_descriptor_, `anonymous namespace'::CDemoStringTables_items_t_reflection_
google::protobuf::Metadata __fastcall CDemoStringTables_items_t::GetMetadata(
        const CDemoStringTables_items_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoStringTables_items_t_descriptor_;
  result.reflection = `anonymous namespace'::CDemoStringTables_items_t_reflection_;
  return result;
}


// CDemoStringTables_table_t::CDemoStringTables_table_t  (line 6337, @0x0000000001b4aec0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoStringTables_table_t::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoStringTables_table_t::New, CDemoStringTables::MergePartialFromCodedStream, CDemoStringTables::MergeFrom, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoStringTables_table_t::CDemoStringTables_table_t(CDemoStringTables_table_t *const this)
{
  *this = off_3F7BCD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 7) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  CDemoStringTables_table_t::SharedCtor(this);
}


// CDemoStringTables_table_t::InitAsDefaultInstance  (line 6343, @0x0000000001b4adf0, libserver.so)
void __fastcall CDemoStringTables_table_t::InitAsDefaultInstance(CDemoStringTables_table_t *const this)
{
  ;
}


// CDemoStringTables_table_t::CDemoStringTables_table_t  (line 6346, @0x0000000001b4b6a0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoStringTables_table_t::SharedCtor, CDemoStringTables_table_t::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoStringTables_table_t::CDemoStringTables_table_t(
        CDemoStringTables_table_t *const this,
        const CDemoStringTables_table_t *const from)
{
  *this = off_3F7BCD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 4) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 7) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  CDemoStringTables_table_t::SharedCtor(this);
  CDemoStringTables_table_t::MergeFrom(this, from);
}


// CDemoStringTables_table_t::SharedCtor  (line 6353, @0x0000000001b4ae00, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoStringTables_table_t::CDemoStringTables_table_t
void __fastcall CDemoStringTables_table_t::SharedCtor(CDemoStringTables_table_t *const this)
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
  *(this + 20) = 0;
  *(this + 4) = 0;
}


// CDemoStringTables_table_t::~CDemoStringTables_table_t  (line 6361, @0x0000000001b4b270, libserver.so)  // inlines: ~RepeatedPtrField
// calls: CDemoStringTables_table_t::SharedDtor, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoStringTables_table_t::~CDemoStringTables_table_t
void __fastcall CDemoStringTables_table_t::~CDemoStringTables_table_t(CDemoStringTables_table_t *const this)
{
  *this = off_3F7BCD0;
  CDemoStringTables_table_t::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>(
    (this + 56),
    (this + 68));
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>(
    (this + 32),
    (this + 44));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoStringTables_table_t::~CDemoStringTables_table_t  (line 6361, @0x0000000001b4b2c0, libserver.so)
// calls: CDemoStringTables_table_t::~CDemoStringTables_table_t, operator delete
void __fastcall CDemoStringTables_table_t::~CDemoStringTables_table_t(CDemoStringTables_table_t *const this)
{
  CDemoStringTables_table_t::~CDemoStringTables_table_t(this);
  operator delete(this);
}


// CDemoStringTables_table_t::SharedDtor  (line 6366, @0x0000000001b4b200, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoStringTables_table_t::~CDemoStringTables_table_t
void __fastcall CDemoStringTables_table_t::SharedDtor(CDemoStringTables_table_t *const this)
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


// CDemoStringTables_table_t::SetCachedSize  (line 6372, @0x0000000001b3c380, libserver.so)
void __fastcall CDemoStringTables_table_t::SetCachedSize(const CDemoStringTables_table_t *const this, int size)
{
  *(this + 5) = size;
}


// CDemoStringTables_table_t::descriptor  (line 6377, @0x0000000001b4b2e0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoStringTables_table_t_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoStringTables_table_t::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoStringTables_table_t_descriptor_;
}


// CDemoStringTables_table_t::default_instance  (line 6382, @0x0000000001b4e360, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoStringTables_table_t::default_instance_
const CDemoStringTables_table_t *__cdecl CDemoStringTables_table_t::default_instance()
{
  const CDemoStringTables_table_t *result; // rax

  result = CDemoStringTables_table_t::default_instance_;
  if ( CDemoStringTables_table_t::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoStringTables_table_t::default_instance_;
  }
  return result;
}


// CDemoStringTables_table_t::New  (line 6389, @0x0000000001b4af70, libserver.so)
// calls: operator new, CDemoStringTables_table_t::CDemoStringTables_table_t, operator delete, _Unwind_Resume
CDemoStringTables_table_t *__fastcall CDemoStringTables_table_t::New(const CDemoStringTables_table_t *const this)
{
  CDemoStringTables_table_t *v1; // rbx

  v1 = operator new(0x58u);
  CDemoStringTables_table_t::CDemoStringTables_table_t(v1);
  return v1;
}


// CDemoStringTables_table_t::Clear  (line 6393, @0x0000000001b3ecd0, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoStringTables_table_t::Clear(CDemoStringTables_table_t *const this)
{
  int v2; // eax
  __int64 v3; // r13
  int v4; // r12d
  __int64 v5; // rdi
  int v6; // r10d
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rdi
  bool v10; // zf

  v2 = *(this + 4);
  if ( (v2 & 9) != 0 )
  {
    if ( (v2 & 1) != 0 )
      std::string::_M_mutate(*(this + 3), 0, *(**(this + 3) - 24LL), 0);
    *(this + 20) = 0;
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
  v6 = *(this + 16);
  v7 = 0;
  v8 = 0;
  *(this + 10) = 0;
  if ( v6 > 0 )
  {
    do
    {
      ++v8;
      v9 = *(*(this + 7) + v7);
      v7 += 8;
      (*(*v9 + 32LL))(v9);
    }
    while ( v8 < *(this + 16) );
  }
  v10 = *(this + 1) == 0;
  *(this + 16) = 0;
  *(this + 4) = 0;
  if ( !v10 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoStringTables_table_t::MergePartialFromCodedStream  (line 6406, @0x0000000001b4a4b0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CDemoStringTables_items_t>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, add_items, add_items_clientside, mutable_table_name, set_has_table_flags, set_has_table_name
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), operator new, CDemoStringTables_items_t::CDemoStringTables_items_t, google::protobuf::io::CodedInputStream::PushLimit(int), CDemoStringTables_items_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDemoStringTables::MergePartialFromCodedStream
bool __fastcall CDemoStringTables_table_t::MergePartialFromCodedStream(
        CDemoStringTables_table_t *const this,
        google::protobuf::io::CodedInputStream *input)
{
  unsigned int v2; // r13d
  google::protobuf::UnknownFieldSet *v5; // rcx
  const google::protobuf::uint8 *buffer; // rax
  std::string *buffer_end; // rdx
  google::protobuf::io::CodedInputStream *v8; // rsi
  unsigned int v9; // eax
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  __int64 v12; // rax
  int v13; // esi
  CDemoStringTables_items_t *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  const google::protobuf::uint8 *v17; // rax
  int v18; // eax
  bool v19; // cc
  int recursion_depth; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // esi
  CDemoStringTables_items_t *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  const google::protobuf::uint8 *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  const google::protobuf::uint8 *v31; // rax
  unsigned int v32; // edx
  google::protobuf::internal::RepeatedPtrFieldBase *v33; // [rsp+8h] [rbp-58h]
  google::protobuf::internal::RepeatedPtrFieldBase *v34; // [rsp+10h] [rbp-50h]
  int v35; // [rsp+1Ch] [rbp-44h]
  int v36; // [rsp+1Ch] [rbp-44h]
  unsigned int v37[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v2 = this + 8;
  v5 = (this + 32);
  v34 = (this + 56);
  buffer = input->buffer_;
  v33 = (this + 32);
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
        buffer_end = input->buffer_end_;
        if ( buffer_end > buffer )
          goto LABEL_3;
      }
    }
    else
    {
      input->last_tag_ = v8;
      input->buffer_ = buffer + 1;
    }
    v9 = v8 >> 3;
    if ( v8 >> 3 == 2 )
    {
      if ( v8 != 18 )
        goto handle_unusual;
      v12 = *(this + 10);
      v13 = *(this + 11);
      if ( v12 < v13 )
        goto LABEL_42;
      goto LABEL_28;
    }
    if ( v8 >> 3 > 2 )
      break;
    if ( v9 != 1 || v8 != 10 )
      goto handle_unusual;
    *(this + 4) |= 1u;
    if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 3), buffer_end) == 0 )
      return 0;
    buffer = input->buffer_;
    buffer_end = input->buffer_end_;
    if ( buffer < buffer_end && *buffer == 18 )
    {
      while ( 1 )
      {
        input->buffer_ = buffer + 1;
        v12 = *(this + 10);
        v13 = *(this + 11);
        if ( v12 < v13 )
        {
LABEL_42:
          v21 = *(this + 4);
          *(this + 10) = v12 + 1;
          v14 = *(v21 + 8 * v12);
          goto LABEL_31;
        }
LABEL_28:
        if ( v13 == *(this + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v33, v13 + 1);
        v14 = operator new(0x28u);
        CDemoStringTables_items_t::CDemoStringTables_items_t(v14);
        v15 = *(this + 10);
        v16 = *(this + 4);
        ++*(this + 11);
        *(this + 10) = v15 + 1;
        *(v16 + 8 * v15) = v14;
LABEL_31:
        v17 = input->buffer_;
        if ( v17 >= input->buffer_end_ || *v17 < 0 )
        {
          if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v37) == 0 )
            return 0;
        }
        else
        {
          v37[0] = *v17;
          input->buffer_ = v17 + 1;
        }
        v18 = input->recursion_depth_ + 1;
        v19 = input->recursion_limit_ < v18;
        input->recursion_depth_ = v18;
        if ( v19 )
          return 0;
        v35 = google::protobuf::io::CodedInputStream::PushLimit(input, v37[0]);
        if ( !CDemoStringTables_items_t::MergePartialFromCodedStream(v14, input) || !input->legitimate_message_end_ )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(input, v35);
        recursion_depth = input->recursion_depth_;
        if ( recursion_depth > 0 )
          input->recursion_depth_ = recursion_depth - 1;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
        if ( buffer >= buffer_end )
          break;
        v5 = *buffer;
        if ( v5 != 18 )
        {
          if ( v5 == 26 )
          {
            do
            {
              input->buffer_ = buffer + 1;
              v22 = *(this + 16);
              v23 = *(this + 17);
              if ( v22 >= v23 )
                goto LABEL_47;
LABEL_61:
              v30 = *(this + 7);
              *(this + 16) = v22 + 1;
              v24 = *(v30 + 8 * v22);
LABEL_50:
              v27 = input->buffer_;
              if ( v27 >= input->buffer_end_ || *v27 < 0 )
              {
                if ( google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v37) == 0 )
                  return 0;
              }
              else
              {
                v37[0] = *v27;
                input->buffer_ = v27 + 1;
              }
              v28 = input->recursion_depth_ + 1;
              v19 = input->recursion_limit_ < v28;
              input->recursion_depth_ = v28;
              if ( v19 )
                return 0;
              v36 = google::protobuf::io::CodedInputStream::PushLimit(input, v37[0]);
              if ( !CDemoStringTables_items_t::MergePartialFromCodedStream(v24, input)
                || !input->legitimate_message_end_ )
              {
                return 0;
              }
              google::protobuf::io::CodedInputStream::PopLimit(input, v36);
              v29 = input->recursion_depth_;
              if ( v29 > 0 )
                input->recursion_depth_ = v29 - 1;
              buffer = input->buffer_;
              buffer_end = input->buffer_end_;
              if ( buffer >= buffer_end )
                goto LABEL_2;
              v5 = *buffer;
            }
            while ( v5 == 26 );
            if ( v5 == 32 )
            {
              v31 = buffer + 1;
              input->buffer_ = v31;
parse_table_flags:
              if ( buffer_end <= v31 || ((v32 = *v31) & 0x80u) != 0 )
              {
                result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v37);
                if ( !result )
                  return result;
                v32 = v37[0];
              }
              else
              {
                input->buffer_ = v31 + 1;
              }
              *(this + 4) |= 8u;
              *(this + 20) = v32;
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
          goto LABEL_2;
        }
      }
    }
  }
  if ( v9 != 3 )
  {
    if ( v9 != 4 || v8 != 32 )
      goto handle_unusual;
    v31 = input->buffer_;
    buffer_end = input->buffer_end_;
    goto parse_table_flags;
  }
  if ( v8 == 26 )
  {
    v22 = *(this + 16);
    v23 = *(this + 17);
    if ( v22 < v23 )
      goto LABEL_61;
LABEL_47:
    if ( v23 == *(this + 18) )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v34, v23 + 1);
    v24 = operator new(0x28u);
    CDemoStringTables_items_t::CDemoStringTables_items_t(v24);
    v25 = *(this + 16);
    v26 = *(this + 7);
    ++*(this + 17);
    *(this + 16) = v25 + 1;
    *(v26 + 8 * v25) = v24;
    goto LABEL_50;
  }
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_11;
  return 1;
}


// CDemoStringTables_table_t::SerializeWithCachedSizes  (line 6497, @0x0000000001b3db00, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, empty, items, items_clientside
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoStringTables_table_t::SerializeWithCachedSizes(
        const CDemoStringTables_table_t *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // r12
  __int64 j; // r12
  _QWORD *v8; // rax

  if ( (*(this + 16) & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(&loc_0 + 1, *(this + 3), output, v3);
  for ( i = 0; *(this + 10) > i; ++i )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2, *(*(this + 4) + 8 * i), output, v3);
  for ( j = 0; *(this + 16) > j; ++j )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&loc_2 + 1, *(*(this + 7) + 8 * j), output, v3);
  if ( (*(this + 16) & 8) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 2, *(this + 20), output, v3);
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


// CDemoStringTables_table_t::SerializeWithCachedSizesToArray  (line 6534, @0x0000000001b40d10, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, GetCachedSize, WriteInt32NoTagToArray, WriteInt32ToArray, WriteMessageNoVirtualToArray<CDemoStringTables_items_t>, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, items, items_clientside
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), CDemoStringTables_items_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDemoStringTables::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDemoStringTables_table_t::SerializeWithCachedSizesToArray(
        const CDemoStringTables_table_t *const this,
        google::protobuf::uint8 *target)
{
  unsigned __int8 *v2; // rdx
  google::protobuf::uint8 *result; // rax
  google::protobuf::io::CodedOutputStream *v5; // rdi
  const std::string *v6; // rsi
  __int64 v7; // r13
  int v8; // r12d
  google::protobuf::uint8 *v9; // rsi
  unsigned __int8 *v10; // rdx
  unsigned int *v11; // r14
  google::protobuf::io::CodedOutputStream *v12; // rdi
  __int64 v13; // r13
  int v14; // r12d
  google::protobuf::uint8 *v15; // rsi
  unsigned __int8 *v16; // rdx
  unsigned int *v17; // r14
  google::protobuf::io::CodedOutputStream *v18; // rdi
  google::protobuf::io::CodedOutputStream *v19; // rdi
  google::protobuf::uint8 *v20; // rsi
  __int64 v21; // rdx

  result = target;
  if ( (*(this + 16) & 1) != 0 )
  {
    v5 = *(this + 3);
    v6 = (target + 1);
    HIBYTE(v6[-1]._M_dataplus._M_p) = 10;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v5, v6, v2);
  }
  if ( *(this + 10) > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v10 = *(this + 4);
      v11 = *&v10[v7];
      *result = 18;
      v12 = v11[5];
      if ( v12 <= 0x7F )
      {
        result[1] = v12;
        v9 = result + 2;
      }
      else
      {
        v9 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v12, result + 1, v10);
      }
      ++v8;
      v7 += 8;
      result = CDemoStringTables_items_t::SerializeWithCachedSizesToArray(v11, v9);
    }
    while ( v8 < *(this + 10) );
  }
  if ( *(this + 16) > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      v16 = *(this + 7);
      v17 = *&v16[v13];
      *result = 26;
      v18 = v17[5];
      if ( v18 <= 0x7F )
      {
        result[1] = v18;
        v15 = result + 2;
      }
      else
      {
        v15 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v18, result + 1, v16);
      }
      ++v14;
      v13 += 8;
      result = CDemoStringTables_items_t::SerializeWithCachedSizesToArray(v17, v15);
    }
    while ( v14 < *(this + 16) );
  }
  if ( (*(this + 16) & 8) != 0 )
  {
    v19 = *(this + 20);
    v20 = result + 1;
    *result = 32;
    if ( v19 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v19, v20, v2);
    }
    else if ( v19 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v19, v20, v2);
    }
    else
    {
      result[1] = v19;
      result += 2;
    }
  }
  v21 = *(this + 1);
  if ( v21 != 0 && *(v21 + 8) != *v21 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v21);
  return result;
}


// CDemoStringTables_table_t::ByteSize  (line 6575, @0x0000000001b40ff0, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CDemoStringTables_items_t>, StringSize, VarintSize32, VarintSize32SignExtended, empty, items, items_clientside, size
// calls: CDemoStringTables_items_t::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDemoStringTables::ByteSize
int __fastcall CDemoStringTables_table_t::ByteSize(const CDemoStringTables_table_t *const this)
{
  unsigned int v1; // esi
  int v2; // r15d
  int v4; // eax
  int v5; // eax
  int v6; // r15d
  __int64 v7; // r14
  int v8; // r13d
  unsigned int v9; // esi
  unsigned int v10; // r12d
  int v11; // eax
  int v12; // eax
  int v13; // r15d
  __int64 v14; // r14
  int v15; // r13d
  unsigned int v16; // esi
  unsigned int v17; // r12d
  int v18; // eax
  __int64 v19; // rax
  google::protobuf::io::CodedOutputStream *v21; // rdi
  int v22; // eax
  _QWORD *v23; // r12
  int v24; // ecx
  google::protobuf::io::CodedOutputStream *v25; // rdi
  int v26; // edx

  v2 = 0;
  v4 = *(this + 4);
  if ( v4 == 0 )
    goto LABEL_4;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 8) == 0 )
      goto LABEL_4;
    goto LABEL_18;
  }
  v23 = *(this + 3);
  v24 = 1;
  v25 = *(*v23 - 24LL);
  v26 = v25;
  if ( v25 > 0x7F )
  {
    v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v25, v1);
    v26 = *(*v23 - 24LL);
    v4 = *(this + 4);
  }
  v2 = v24 + v26 + 1;
  if ( (v4 & 8) != 0 )
  {
LABEL_18:
    v21 = *(this + 20);
    v22 = 11;
    if ( v21 >= 0 )
    {
      LOBYTE(v22) = 2;
      if ( v21 > 0x7F )
        v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v21, v1) + 1;
    }
    v2 += v22;
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
      v10 = CDemoStringTables_items_t::ByteSize(*(*(this + 4) + v7));
      v11 = 1;
      if ( v10 > 0x7F )
        v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v9);
      ++v8;
      v7 += 8;
      v6 += v11 + v10;
    }
    while ( v8 < *(this + 10) );
  }
  v12 = *(this + 16);
  v13 = v12 + v6;
  if ( v12 > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      v17 = CDemoStringTables_items_t::ByteSize(*(*(this + 7) + v14));
      v18 = 1;
      if ( v17 > 0x7F )
        v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v17, v16);
      ++v15;
      v14 += 8;
      v13 += v18 + v17;
    }
    while ( v15 < *(this + 16) );
  }
  v19 = *(this + 1);
  if ( v19 != 0 && *(v19 + 8) != *v19 )
    v13 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v19);
  *(this + 5) = v13;
  return v13;
}


// CDemoStringTables_table_t::MergeFrom  (line 6621, @0x0000000001b4b760, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoStringTables_table_t*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoStringTables_table_t::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoStringTables_table_t
void __fastcall CDemoStringTables_table_t::MergeFrom(
        CDemoStringTables_table_t *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoStringTables_table_t *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      6622);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoStringTables_table_t, 0)) != 0 )
  {
    CDemoStringTables_table_t::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoStringTables_table_t::MergeFrom  (line 6633, @0x0000000001b4b370, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>, New, set_has_table_flags, set_has_table_name, set_table_flags, set_table_name
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDemoStringTables_items_t::CDemoStringTables_items_t, CDemoStringTables_items_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CDemoStringTables_table_t::CDemoStringTables_table_t, CDemoStringTables_table_t::MergeFrom, CDemoStringTables_table_t::CopyFrom, CDemoStringTables::MergeFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CDemoStringTables_table_t::MergeFrom(
        CDemoStringTables_table_t *const this,
        const CDemoStringTables_table_t *const from)
{
  __int64 v4; // r14
  int v5; // r13d
  CDemoStringTables_items_t *v6; // r15
  __int64 v7; // rax
  CDemoStringTables_items_t *v8; // rdi
  __int64 v9; // rdx
  const CDemoStringTables_items_t *v10; // rsi
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // r13d
  CDemoStringTables_items_t *v16; // r15
  __int64 v17; // rax
  CDemoStringTables_items_t *v18; // rdi
  __int64 v19; // rdx
  const CDemoStringTables_items_t *v20; // rsi
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  const std::string *v26; // rsi
  std::string *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v31; // [rsp+8h] [rbp-68h]
  google::protobuf::internal::RepeatedPtrFieldBase *v32; // [rsp+8h] [rbp-68h]
  char v33; // [rsp+1Fh] [rbp-51h] BYREF
  google::protobuf::internal::LogMessage v34; // [rsp+20h] [rbp-50h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v34,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      6634);
    v28 = google::protobuf::internal::LogMessage::operator<<(&v34, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v33, v28);
    google::protobuf::internal::LogMessage::~LogMessage(&v34);
  }
  v31 = (this + 32);
  if ( this + 32 == from + 32 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v34,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v29 = google::protobuf::internal::LogMessage::operator<<(&v34, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v33, v29);
    google::protobuf::internal::LogMessage::~LogMessage(&v34);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v31, *(from + 10) + *(this + 10));
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
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v31, v12 + 1);
        v6 = operator new(0x28u);
        CDemoStringTables_items_t::CDemoStringTables_items_t(v6);
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
      CDemoStringTables_items_t::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 10) );
  }
  v32 = (this + 56);
  if ( this + 56 == from + 56 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v34,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h",
      927);
    v30 = google::protobuf::internal::LogMessage::operator<<(&v34, "CHECK failed: (&other) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v33, v30);
    google::protobuf::internal::LogMessage::~LogMessage(&v34);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v32, *(from + 16) + *(this + 16));
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
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v32, v22 + 1);
        v16 = operator new(0x28u);
        CDemoStringTables_items_t::CDemoStringTables_items_t(v16);
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
      CDemoStringTables_items_t::MergeFrom(v18, v20);
    }
    while ( v15 < *(from + 16) );
  }
  v24 = *(from + 4);
  if ( v24 != 0 )
  {
    if ( (v24 & 1) != 0 )
    {
      v26 = *(from + 3);
      v27 = *(this + 3);
      *(this + 4) |= 1u;
      std::string::assign(v27, v26);
      if ( (*(from + 4) & 8) == 0 )
        goto LABEL_27;
      goto LABEL_26;
    }
    if ( (v24 & 8) != 0 )
    {
LABEL_26:
      v25 = *(from + 20);
      *(this + 4) |= 8u;
      *(this + 20) = v25;
    }
  }
LABEL_27:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoStringTables_table_t::CopyFrom  (line 6648, @0x0000000001b3c390, libserver.so)
void __fastcall CDemoStringTables_table_t::CopyFrom(
        CDemoStringTables_table_t *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoStringTables_table_t::CopyFrom  (line 6654, @0x0000000001b4b840, libserver.so)
// calls: CDemoStringTables_table_t::MergeFrom
void __fastcall CDemoStringTables_table_t::CopyFrom(
        CDemoStringTables_table_t *const this,
        const CDemoStringTables_table_t *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoStringTables_table_t::MergeFrom(this, from);
  }
}


// CDemoStringTables_table_t::IsInitialized  (line 6660, @0x0000000001b3c3d0, libserver.so)
bool __fastcall CDemoStringTables_table_t::IsInitialized(const CDemoStringTables_table_t *const this)
{
  return 1;
}


// CDemoStringTables_table_t::Swap  (line 6665, @0x0000000001b4b880, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDemoStringTables_table_t::Swap(
        CDemoStringTables_table_t *const this,
        CDemoStringTables_table_t *other)
{
  __int64 v4; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v5; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax

  if ( other != this )
  {
    v4 = *(this + 3);
    v5 = (other + 32);
    v6 = (this + 32);
    *&v6[-1].total_size_ = *&v5[-1].total_size_;
    *&v5[-1].total_size_ = v4;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(v6, v5);
    google::protobuf::internal::RepeatedPtrFieldBase::Swap((this + 56), (other + 56));
    v7 = *(this + 20);
    *(this + 20) = *(other + 20);
    *(other + 20) = v7;
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


// CDemoStringTables_table_t::GetMetadata  (line 6677, @0x0000000001b405d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoStringTables_table_t_descriptor_, `anonymous namespace'::CDemoStringTables_table_t_reflection_
google::protobuf::Metadata __fastcall CDemoStringTables_table_t::GetMetadata(
        const CDemoStringTables_table_t *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoStringTables_table_t_descriptor_;
  result.reflection = `anonymous namespace'::CDemoStringTables_table_t_reflection_;
  return result;
}


// CDemoStringTables::CDemoStringTables  (line 6692, @0x0000000001b4b910, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDemoFullPacket::MergePartialFromCodedStream, CDemoStringTables::New, CDemoFullPacket::MergeFrom, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoStringTables::CDemoStringTables(CDemoStringTables *const this)
{
  *this = off_3F7BD90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDemoStringTables::InitAsDefaultInstance  (line 6698, @0x0000000001b4bc90, libserver.so)
void __fastcall CDemoStringTables::InitAsDefaultInstance(CDemoStringTables *const this)
{
  ;
}


// CDemoStringTables::CDemoStringTables  (line 6701, @0x0000000001b4c250, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, SharedCtor, memset, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoStringTables::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoStringTables::CDemoStringTables(
        CDemoStringTables *const this,
        const CDemoStringTables *const from)
{
  *this = off_3F7BD90;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 5) = 0;
  *(this + 4) = 0;
  CDemoStringTables::MergeFrom(this, from);
}


// CDemoStringTables::SharedCtor  (line 6708, @0x0000000001b4bca0, libserver.so)  // inlines: memset
void __fastcall CDemoStringTables::SharedCtor(CDemoStringTables *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDemoStringTables::~CDemoStringTables  (line 6713, @0x0000000001b3e650, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoStringTables::~CDemoStringTables
void __fastcall CDemoStringTables::~CDemoStringTables(CDemoStringTables *const this)
{
  *this = off_3F7BD90;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoStringTables::~CDemoStringTables  (line 6713, @0x0000000001b3e690, libserver.so)
// calls: CDemoStringTables::~CDemoStringTables, operator delete
void __fastcall CDemoStringTables::~CDemoStringTables(CDemoStringTables *const this)
{
  CDemoStringTables::~CDemoStringTables(this);
  operator delete(this);
}


// CDemoStringTables::SharedDtor  (line 6718, @0x0000000001b4bcc0, libserver.so)
void __fastcall CDemoStringTables::SharedDtor(CDemoStringTables *const this)
{
  ;
}


// CDemoStringTables::SetCachedSize  (line 6723, @0x0000000001b3c3e0, libserver.so)
void __fastcall CDemoStringTables::SetCachedSize(const CDemoStringTables *const this, int size)
{
  *(this + 5) = size;
}


// CDemoStringTables::descriptor  (line 6728, @0x0000000001b4bcd0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoStringTables_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoStringTables::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoStringTables_descriptor_;
}


// CDemoStringTables::default_instance  (line 6733, @0x0000000001b4e390, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoStringTables::default_instance_
const CDemoStringTables *__cdecl CDemoStringTables::default_instance()
{
  const CDemoStringTables *result; // rax

  result = CDemoStringTables::default_instance_;
  if ( CDemoStringTables::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoStringTables::default_instance_;
  }
  return result;
}


// CDemoStringTables::New  (line 6740, @0x0000000001b4bc50, libserver.so)
// calls: operator new, CDemoStringTables::CDemoStringTables, operator delete, _Unwind_Resume
CDemoStringTables *__fastcall CDemoStringTables::New(const CDemoStringTables *const this)
{
  CDemoStringTables *v1; // rbx

  v1 = operator new(0x30u);
  CDemoStringTables::CDemoStringTables(v1);
  return v1;
}


// CDemoStringTables::Clear  (line 6744, @0x0000000001b3d010, libserver.so)  // inlines: Clear, Clear<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
// callers: CDemoFullPacket::Clear
void __fastcall CDemoStringTables::Clear(CDemoStringTables *const this)
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


// CDemoStringTables::MergePartialFromCodedStream  (line 6750, @0x0000000001b4afb0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, Advance, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, New, ReadMessageNoVirtual<CDemoStringTables_table_t>, ReadTagWithCutoff, ReadVarint32, add_tables
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::io::CodedInputStream::PushLimit(int), CDemoStringTables_table_t::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), operator new, CDemoStringTables_table_t::CDemoStringTables_table_t, google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDemoFullPacket::MergePartialFromCodedStream
bool __fastcall CDemoStringTables::MergePartialFromCodedStream(
        CDemoStringTables *const this,
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
  CDemoStringTables_table_t *v13; // r13
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
        v13 = operator new(0x58u);
        CDemoStringTables_table_t::CDemoStringTables_table_t(v13);
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
      if ( !CDemoStringTables_table_t::MergePartialFromCodedStream(v13, input) || !input->legitimate_message_end_ )
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


// CDemoStringTables::SerializeWithCachedSizes  (line 6796, @0x0000000001b3dc00, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, empty, tables
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoStringTables::SerializeWithCachedSizes(
        const CDemoStringTables *const this,
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


// CDemoStringTables::SerializeWithCachedSizesToArray  (line 6812, @0x0000000001b40e60, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, GetCachedSize, WriteMessageNoVirtualToArray<CDemoStringTables_table_t>, WriteTagToArray, WriteVarint32ToArray, empty, tables
// calls: CDemoStringTables_table_t::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
// callers: CDemoFullPacket::SerializeWithCachedSizesToArray
google::protobuf::uint8 *__fastcall CDemoStringTables::SerializeWithCachedSizesToArray(
        const CDemoStringTables *const this,
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
      result = CDemoStringTables_table_t::SerializeWithCachedSizesToArray(v8, v6);
    }
    while ( v5 < *(this + 8) );
  }
  v10 = *(this + 1);
  if ( v10 != 0 && *(v10 + 8) != *v10 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v10);
  return result;
}


// CDemoStringTables::ByteSize  (line 6830, @0x0000000001b41150, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, LengthDelimitedSize, MessageSizeNoVirtual<CDemoStringTables_table_t>, VarintSize32, empty, tables
// calls: CDemoStringTables_table_t::ByteSize, google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
// callers: CDemoFullPacket::ByteSize
int __fastcall CDemoStringTables::ByteSize(const CDemoStringTables *const this)
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
      v6 = CDemoStringTables_table_t::ByteSize(*(*(this + 3) + v4));
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


// CDemoStringTables::MergeFrom  (line 6852, @0x0000000001b4c2f0, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoStringTables*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoStringTables::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoStringTables
void __fastcall CDemoStringTables::MergeFrom(
        CDemoStringTables *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoStringTables *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      6853);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoStringTables, 0)) != 0 )
  {
    CDemoStringTables::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoStringTables::MergeFrom  (line 6864, @0x0000000001b4bd60, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>, New
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator new, CDemoStringTables_table_t::CDemoStringTables_table_t, CDemoStringTables_table_t::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume, operator delete
// callers: CDemoFullPacket::MergeFrom, CDemoStringTables::CDemoStringTables, CDemoStringTables::MergeFrom, CDemoStringTables::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CDemoStringTables::MergeFrom(CDemoStringTables *const this, const CDemoStringTables *const from)
{
  __int64 v4; // r13
  int v5; // r12d
  CDemoStringTables_table_t *v6; // r15
  __int64 v7; // rax
  CDemoStringTables_table_t *v8; // rdi
  __int64 v9; // rdx
  const CDemoStringTables_table_t *v10; // rsi
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      6865);
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
        v6 = operator new(0x58u);
        CDemoStringTables_table_t::CDemoStringTables_table_t(v6);
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
      CDemoStringTables_table_t::MergeFrom(v8, v10);
    }
    while ( v5 < *(from + 8) );
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoStringTables::CopyFrom  (line 6870, @0x0000000001b3c3f0, libserver.so)
void __fastcall CDemoStringTables::CopyFrom(CDemoStringTables *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoStringTables::CopyFrom  (line 6876, @0x0000000001b4c3d0, libserver.so)
// calls: CDemoStringTables::MergeFrom
void __fastcall CDemoStringTables::CopyFrom(CDemoStringTables *const this, const CDemoStringTables *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoStringTables::MergeFrom(this, from);
  }
}


// CDemoStringTables::IsInitialized  (line 6882, @0x0000000001b3c430, libserver.so)
bool __fastcall CDemoStringTables::IsInitialized(const CDemoStringTables *const this)
{
  return 1;
}


// CDemoStringTables::Swap  (line 6887, @0x0000000001b4c410, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDemoStringTables::Swap(CDemoStringTables *const this, CDemoStringTables *other)
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


// CDemoStringTables::GetMetadata  (line 6896, @0x0000000001b40670, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoStringTables_descriptor_, `anonymous namespace'::CDemoStringTables_reflection_
google::protobuf::Metadata __fastcall CDemoStringTables::GetMetadata(const CDemoStringTables *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoStringTables_descriptor_;
  result.reflection = `anonymous namespace'::CDemoStringTables_reflection_;
  return result;
}


// CDemoStop::CDemoStop  (line 6910, @0x0000000001b4c470, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), google::protobuf::Message::~Message, _Unwind_Resume
// callers: CDemoStop::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoStop::CDemoStop(CDemoStop *const this)
{
  *this = off_3F7BE50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDemoStop::InitAsDefaultInstance  (line 6916, @0x0000000001b4c500, libserver.so)
void __fastcall CDemoStop::InitAsDefaultInstance(CDemoStop *const this)
{
  ;
}


// CDemoStop::CDemoStop  (line 6919, @0x0000000001b4c670, libserver.so)  // inlines: SharedCtor, memset
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoStop::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoStop::CDemoStop(CDemoStop *const this, const CDemoStop *const from)
{
  *this = off_3F7BE50;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 5) = 0;
  *(this + 4) = 0;
  CDemoStop::MergeFrom(this, from);
}


// CDemoStop::SharedCtor  (line 6926, @0x0000000001b4c510, libserver.so)  // inlines: memset
void __fastcall CDemoStop::SharedCtor(CDemoStop *const this)
{
  *(this + 5) = 0;
  *(this + 4) = 0;
}


// CDemoStop::~CDemoStop  (line 6931, @0x0000000001b3c720, libserver.so)
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
void __fastcall CDemoStop::~CDemoStop(CDemoStop *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7BE50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
}


// CDemoStop::~CDemoStop  (line 6931, @0x0000000001b3c750, libserver.so)  // inlines: ~CDemoStop
// calls: google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message, operator delete
void __fastcall CDemoStop::~CDemoStop(CDemoStop *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  v2 = (this + 8);
  v2[-1].fields_ = off_3F7BE50;
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(v2);
  google::protobuf::Message::~Message(this);
  operator delete(this);
}


// CDemoStop::SharedDtor  (line 6936, @0x0000000001b4c530, libserver.so)
void __fastcall CDemoStop::SharedDtor(CDemoStop *const this)
{
  ;
}


// CDemoStop::SetCachedSize  (line 6941, @0x0000000001b3c440, libserver.so)
void __fastcall CDemoStop::SetCachedSize(const CDemoStop *const this, int size)
{
  *(this + 5) = size;
}


// CDemoStop::descriptor  (line 6946, @0x0000000001b4c540, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoStop_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoStop::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoStop_descriptor_;
}


// CDemoStop::default_instance  (line 6951, @0x0000000001b4e430, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoStop::default_instance_
const CDemoStop *__cdecl CDemoStop::default_instance()
{
  const CDemoStop *result; // rax

  result = CDemoStop::default_instance_;
  if ( CDemoStop::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoStop::default_instance_;
  }
  return result;
}


// CDemoStop::New  (line 6958, @0x0000000001b4c4c0, libserver.so)
// calls: operator new, CDemoStop::CDemoStop, operator delete, _Unwind_Resume
CDemoStop *__fastcall CDemoStop::New(const CDemoStop *const this)
{
  CDemoStop *v1; // rbx

  v1 = operator new(0x18u);
  CDemoStop::CDemoStop(v1);
  return v1;
}


// CDemoStop::Clear  (line 6962, @0x0000000001b3c800, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDemoStop::Clear(CDemoStop *const this)
{
  google::protobuf::UnknownFieldSet *v2; // rdi

  *(this + 4) = 0;
  v2 = (this + 8);
  if ( *(this + 1) != 0 )
    google::protobuf::UnknownFieldSet::ClearFallback(v2);
}


// CDemoStop::MergePartialFromCodedStream  (line 6967, @0x0000000001b3e980, libserver.so)  // inlines: Advance, GetTagWireType, ReadTagWithCutoff
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void)
bool __fastcall CDemoStop::MergePartialFromCodedStream(
        CDemoStop *const this,
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


// CDemoStop::SerializeWithCachedSizes  (line 6994, @0x0000000001b3d3f0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoStop::SerializeWithCachedSizes(
        const CDemoStop *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  __int64 v2; // rax

  v2 = *(this + 1);
  if ( v2 != 0 && *(v2 + 8) != *v2 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, *v2);
}


// CDemoStop::SerializeWithCachedSizesToArray  (line 7004, @0x0000000001b3d450, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDemoStop::SerializeWithCachedSizesToArray(
        const CDemoStop *const this,
        google::protobuf::uint8 *target)
{
  __int64 v2; // rdx

  v2 = *(this + 1);
  if ( v2 == 0 || *(v2 + 8) == *v2 )
    return target;
  else
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, target, v2);
}


// CDemoStop::ByteSize  (line 7015, @0x0000000001b3d4d0, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDemoStop::ByteSize(const CDemoStop *const this)
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


// CDemoStop::MergeFrom  (line 7029, @0x0000000001b4c6e0, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoStop*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoStop::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoStop
void __fastcall CDemoStop::MergeFrom(CDemoStop *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoStop *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      7030);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoStop, 0)) != 0 )
  {
    CDemoStop::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoStop::MergeFrom  (line 7041, @0x0000000001b4c5d0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoStop::CDemoStop, CDemoStop::MergeFrom, CDemoStop::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoStop::MergeFrom(CDemoStop *const this, const CDemoStop *const from)
{
  __int64 v4; // rax
  char v5; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v6; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v6,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      7042);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v6, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v5, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v6);
  }
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDemoStop::CopyFrom  (line 7046, @0x0000000001b3c450, libserver.so)
void __fastcall CDemoStop::CopyFrom(CDemoStop *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoStop::CopyFrom  (line 7052, @0x0000000001b4c7c0, libserver.so)
// calls: CDemoStop::MergeFrom
void __fastcall CDemoStop::CopyFrom(CDemoStop *const this, const CDemoStop *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoStop::MergeFrom(this, from);
  }
}


// CDemoStop::IsInitialized  (line 7058, @0x0000000001b3c490, libserver.so)
bool __fastcall CDemoStop::IsInitialized(const CDemoStop *const this)
{
  return 1;
}


// CDemoStop::Swap  (line 7063, @0x0000000001b4c800, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>
void __fastcall CDemoStop::Swap(CDemoStop *const this, CDemoStop *other)
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


// CDemoStop::GetMetadata  (line 7070, @0x0000000001b40350, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoStop_descriptor_, `anonymous namespace'::CDemoStop_reflection_
google::protobuf::Metadata __fastcall CDemoStop::GetMetadata(const CDemoStop *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoStop_descriptor_;
  result.reflection = `anonymous namespace'::CDemoStop_reflection_;
  return result;
}


// CDemoUserCmd::CDemoUserCmd  (line 7086, @0x0000000001b4c900, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoUserCmd::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoUserCmd::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoUserCmd::CDemoUserCmd(CDemoUserCmd *const this)
{
  *this = off_3F7BF10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoUserCmd::SharedCtor(this);
}


// CDemoUserCmd::InitAsDefaultInstance  (line 7092, @0x0000000001b4c830, libserver.so)
void __fastcall CDemoUserCmd::InitAsDefaultInstance(CDemoUserCmd *const this)
{
  ;
}


// CDemoUserCmd::CDemoUserCmd  (line 7095, @0x0000000001b4cbe0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoUserCmd::SharedCtor, CDemoUserCmd::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoUserCmd::CDemoUserCmd(CDemoUserCmd *const this, const CDemoUserCmd *const from)
{
  *this = off_3F7BF10;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDemoUserCmd::SharedCtor(this);
  CDemoUserCmd::MergeFrom(this, from);
}


// CDemoUserCmd::SharedCtor  (line 7102, @0x0000000001b4c840, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDemoUserCmd::CDemoUserCmd
void __fastcall CDemoUserCmd::SharedCtor(CDemoUserCmd *const this)
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


// CDemoUserCmd::~CDemoUserCmd  (line 7110, @0x0000000001b4ca10, libserver.so)
// calls: CDemoUserCmd::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoUserCmd::~CDemoUserCmd
void __fastcall CDemoUserCmd::~CDemoUserCmd(CDemoUserCmd *const this)
{
  *this = off_3F7BF10;
  CDemoUserCmd::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoUserCmd::~CDemoUserCmd  (line 7110, @0x0000000001b4ca50, libserver.so)
// calls: CDemoUserCmd::~CDemoUserCmd, operator delete
void __fastcall CDemoUserCmd::~CDemoUserCmd(CDemoUserCmd *const this)
{
  CDemoUserCmd::~CDemoUserCmd(this);
  operator delete(this);
}


// CDemoUserCmd::SharedDtor  (line 7115, @0x0000000001b4c9a0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDemoUserCmd::~CDemoUserCmd
void __fastcall CDemoUserCmd::SharedDtor(CDemoUserCmd *const this)
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


// CDemoUserCmd::SetCachedSize  (line 7121, @0x0000000001b3c4a0, libserver.so)
void __fastcall CDemoUserCmd::SetCachedSize(const CDemoUserCmd *const this, int size)
{
  *(this + 5) = size;
}


// CDemoUserCmd::descriptor  (line 7126, @0x0000000001b4ca70, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoUserCmd_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoUserCmd::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoUserCmd_descriptor_;
}


// CDemoUserCmd::default_instance  (line 7131, @0x0000000001b4e460, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoUserCmd::default_instance_
const CDemoUserCmd *__cdecl CDemoUserCmd::default_instance()
{
  const CDemoUserCmd *result; // rax

  result = CDemoUserCmd::default_instance_;
  if ( CDemoUserCmd::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoUserCmd::default_instance_;
  }
  return result;
}


// CDemoUserCmd::New  (line 7138, @0x0000000001b4c960, libserver.so)
// calls: operator new, CDemoUserCmd::CDemoUserCmd, operator delete, _Unwind_Resume
CDemoUserCmd *__fastcall CDemoUserCmd::New(const CDemoUserCmd *const this)
{
  CDemoUserCmd *v1; // rbx

  v1 = operator new(0x28u);
  CDemoUserCmd::CDemoUserCmd(v1);
  return v1;
}


// CDemoUserCmd::Clear  (line 7142, @0x0000000001b3cd20, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDemoUserCmd::Clear(CDemoUserCmd *const this)
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


// CDemoUserCmd::MergePartialFromCodedStream  (line 7153, @0x0000000001b41ce0, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_data, set_has_cmd_number, set_has_data
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CDemoUserCmd::MergePartialFromCodedStream(
        CDemoUserCmd *const this,
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
parse_data:
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
    goto parse_data;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CDemoUserCmd::SerializeWithCachedSizes  (line 7212, @0x0000000001b3df50, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoUserCmd::SerializeWithCachedSizes(
        const CDemoUserCmd *const this,
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


// CDemoUserCmd::SerializeWithCachedSizesToArray  (line 7233, @0x0000000001b3f560, libserver.so)  // inlines: WriteBytesToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
google::protobuf::uint8 *__fastcall CDemoUserCmd::SerializeWithCachedSizesToArray(
        const CDemoUserCmd *const this,
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


// CDemoUserCmd::ByteSize  (line 7256, @0x0000000001b3eef0, libserver.so)  // inlines: BytesSize, Int32Size, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDemoUserCmd::ByteSize(const CDemoUserCmd *const this)
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


// CDemoUserCmd::MergeFrom  (line 7286, @0x0000000001b4cc50, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoUserCmd*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoUserCmd::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoUserCmd
void __fastcall CDemoUserCmd::MergeFrom(CDemoUserCmd *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoUserCmd *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      7287);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoUserCmd, 0)) != 0 )
  {
    CDemoUserCmd::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoUserCmd::MergeFrom  (line 7298, @0x0000000001b4cb00, libserver.so)  // inlines: set_cmd_number, set_data, set_has_cmd_number, set_has_data
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoUserCmd::CDemoUserCmd, CDemoUserCmd::MergeFrom, CDemoUserCmd::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDemoUserCmd::MergeFrom(CDemoUserCmd *const this, const CDemoUserCmd *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      7299);
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


// CDemoUserCmd::CopyFrom  (line 7311, @0x0000000001b3c4b0, libserver.so)
void __fastcall CDemoUserCmd::CopyFrom(CDemoUserCmd *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoUserCmd::CopyFrom  (line 7317, @0x0000000001b4cd30, libserver.so)
// calls: CDemoUserCmd::MergeFrom
void __fastcall CDemoUserCmd::CopyFrom(CDemoUserCmd *const this, const CDemoUserCmd *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoUserCmd::MergeFrom(this, from);
  }
}


// CDemoUserCmd::IsInitialized  (line 7323, @0x0000000001b3c4f0, libserver.so)
bool __fastcall CDemoUserCmd::IsInitialized(const CDemoUserCmd *const this)
{
  return 1;
}


// CDemoUserCmd::Swap  (line 7328, @0x0000000001b4cd70, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDemoUserCmd::Swap(CDemoUserCmd *const this, CDemoUserCmd *other)
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


// CDemoUserCmd::GetMetadata  (line 7338, @0x0000000001b403f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoUserCmd_descriptor_, `anonymous namespace'::CDemoUserCmd_reflection_
google::protobuf::Metadata __fastcall CDemoUserCmd::GetMetadata(const CDemoUserCmd *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoUserCmd_descriptor_;
  result.reflection = `anonymous namespace'::CDemoUserCmd_reflection_;
  return result;
}


// CDemoSpawnGroups::CDemoSpawnGroups  (line 7353, @0x0000000001b4ce50, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoSpawnGroups::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDemoSpawnGroups::New, protobuf_AddDesc_demo_2eproto
void __fastcall CDemoSpawnGroups::CDemoSpawnGroups(CDemoSpawnGroups *const this)
{
  *this = off_3F7BFD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  CDemoSpawnGroups::SharedCtor(this);
}


// CDemoSpawnGroups::InitAsDefaultInstance  (line 7359, @0x0000000001b4cdc0, libserver.so)
void __fastcall CDemoSpawnGroups::InitAsDefaultInstance(CDemoSpawnGroups *const this)
{
  ;
}


// CDemoSpawnGroups::CDemoSpawnGroups  (line 7362, @0x0000000001b4ebe0, libserver.so)  // inlines: RepeatedPtrField, RepeatedPtrFieldBase, ~RepeatedPtrField
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDemoSpawnGroups::SharedCtor, CDemoSpawnGroups::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDemoSpawnGroups::CDemoSpawnGroups(CDemoSpawnGroups *const this, const CDemoSpawnGroups *const from)
{
  *this = off_3F7BFD0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  *(this + 3) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  CDemoSpawnGroups::SharedCtor(this);
  CDemoSpawnGroups::MergeFrom(this, from);
}


// CDemoSpawnGroups::SharedCtor  (line 7369, @0x0000000001b4cdd0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDemoSpawnGroups::CDemoSpawnGroups
void __fastcall CDemoSpawnGroups::SharedCtor(CDemoSpawnGroups *const this)
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


// CDemoSpawnGroups::~CDemoSpawnGroups  (line 7375, @0x0000000001b3e260, libserver.so)  // inlines: ~RepeatedPtrField
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDemoSpawnGroups::~CDemoSpawnGroups
void __fastcall CDemoSpawnGroups::~CDemoSpawnGroups(CDemoSpawnGroups *const this)
{
  *this = off_3F7BFD0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    this + 1,
    (this + 36));
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDemoSpawnGroups::~CDemoSpawnGroups  (line 7375, @0x0000000001b3e2a0, libserver.so)
// calls: CDemoSpawnGroups::~CDemoSpawnGroups, operator delete
void __fastcall CDemoSpawnGroups::~CDemoSpawnGroups(CDemoSpawnGroups *const this)
{
  CDemoSpawnGroups::~CDemoSpawnGroups(this);
  operator delete(this);
}


// CDemoSpawnGroups::SharedDtor  (line 7380, @0x0000000001b4e970, libserver.so)
void __fastcall CDemoSpawnGroups::SharedDtor(CDemoSpawnGroups *const this)
{
  ;
}


// CDemoSpawnGroups::SetCachedSize  (line 7385, @0x0000000001b3c500, libserver.so)
void __fastcall CDemoSpawnGroups::SetCachedSize(const CDemoSpawnGroups *const this, int size)
{
  *(this + 5) = size;
}


// CDemoSpawnGroups::descriptor  (line 7390, @0x0000000001b4e980, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoSpawnGroups_descriptor_
const google::protobuf::Descriptor *__cdecl CDemoSpawnGroups::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDemoSpawnGroups_descriptor_;
}


// CDemoSpawnGroups::default_instance  (line 7395, @0x0000000001b4ea10, libserver.so)
// calls: protobuf_AddDesc_demo_2eproto
// globals: CDemoSpawnGroups::default_instance_
const CDemoSpawnGroups *__cdecl CDemoSpawnGroups::default_instance()
{
  const CDemoSpawnGroups *result; // rax

  result = CDemoSpawnGroups::default_instance_;
  if ( CDemoSpawnGroups::default_instance_ == 0 )
  {
    protobuf_AddDesc_demo_2eproto();
    return CDemoSpawnGroups::default_instance_;
  }
  return result;
}


// CDemoSpawnGroups::New  (line 7402, @0x0000000001b4cee0, libserver.so)
// calls: operator new, CDemoSpawnGroups::CDemoSpawnGroups, operator delete, _Unwind_Resume
CDemoSpawnGroups *__fastcall CDemoSpawnGroups::New(const CDemoSpawnGroups *const this)
{
  CDemoSpawnGroups *v1; // rbx

  v1 = operator new(0x30u);
  CDemoSpawnGroups::CDemoSpawnGroups(v1);
  return v1;
}


// CDemoSpawnGroups::Clear  (line 7406, @0x0000000001b3e370, libserver.so)  // inlines: Clear, memset
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, google::protobuf::UnknownFieldSet::ClearFallback(void)
void __fastcall CDemoSpawnGroups::Clear(CDemoSpawnGroups *const this)
{
  bool v2; // zf

  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    this + 1,
    (this + 32));
  v2 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v2 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDemoSpawnGroups::MergePartialFromCodedStream  (line 7412, @0x0000000001b433b0, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadTagWithCutoff, add_msgs
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::StringTypeHandlerBase::New(void), google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
bool __fastcall CDemoSpawnGroups::MergePartialFromCodedStream(
        CDemoSpawnGroups *const this,
        google::protobuf::io::CodedInputStream *input)
{
  CDemoSpawnGroups *v2; // r14
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
    if ( v8 >> 3 != 3 || v8 != 26 )
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
        result = google::protobuf::internal::WireFormatLite::ReadBytes(input, v12, v13);
        if ( !result )
          return 0;
      }
      else
      {
        v17 = *(v2 + 3);
        *(v2 + 8) = v15 + 1;
        result = google::protobuf::internal::WireFormatLite::ReadBytes(input, v17[v15]._M_dataplus._M_p, v17);
        if ( !result )
          return 0;
      }
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      if ( buffer >= buffer_end || *buffer != 26 )
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


// CDemoSpawnGroups::SerializeWithCachedSizes  (line 7458, @0x0000000001b3e110, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, empty, msgs
// calls: google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDemoSpawnGroups::SerializeWithCachedSizes(
        const CDemoSpawnGroups *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  __int64 i; // rbx
  _QWORD *v7; // rax

  for ( i = 0; i < *(this + 8); ++i )
    google::protobuf::internal::WireFormatLite::WriteBytes(&loc_2 + 1, *(*(this + 3) + 8 * i), output, v3);
  v7 = *(this + 1);
  if ( v7 != 0 && v7[1] != *v7 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDemoSpawnGroups::SerializeWithCachedSizesToArray  (line 7474, @0x0000000001b3e740, libserver.so)  // inlines: Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, WriteBytesToArray, WriteTagToArray, empty, msgs
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *)
google::protobuf::uint8 *__fastcall CDemoSpawnGroups::SerializeWithCachedSizesToArray(
        const CDemoSpawnGroups *const this,
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
      *result = 26;
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


// CDemoSpawnGroups::ByteSize  (line 7491, @0x0000000001b3e9f0, libserver.so)  // inlines: BytesSize, Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, VarintSize32, empty, msgs, size
// calls: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint), google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&)
int __fastcall CDemoSpawnGroups::ByteSize(const CDemoSpawnGroups *const this)
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


// CDemoSpawnGroups::MergeFrom  (line 7512, @0x0000000001b4ec80, libserver.so)  // inlines: dynamic_cast_if_available<const CDemoSpawnGroups*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDemoSpawnGroups::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDemoSpawnGroups
void __fastcall CDemoSpawnGroups::MergeFrom(CDemoSpawnGroups *const this, const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDemoSpawnGroups *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      7513);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDemoSpawnGroups, 0)) != 0 )
  {
    CDemoSpawnGroups::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDemoSpawnGroups::MergeFrom  (line 7524, @0x0000000001b4ea40, libserver.so)  // inlines: Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, Merge, MergeFrom, MergeFrom<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, operator=
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), google::protobuf::internal::StringTypeHandlerBase::New(void), std::string::assign(std::string const&), google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDemoSpawnGroups::CDemoSpawnGroups, CDemoSpawnGroups::MergeFrom, CDemoSpawnGroups::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/demo.pb.cc", "CHECK failed: (&from) != (this): ", "../../thirdparty/protobuf-2.6.1/src/google/protobuf/repeated_field.h", "CHECK failed: (&other) != (this): "
void __fastcall CDemoSpawnGroups::MergeFrom(CDemoSpawnGroups *const this, const CDemoSpawnGroups *const from)
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
      "generated_protodota/linuxsteamrt64/demo.pb.cc",
      7525);
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


// CDemoSpawnGroups::CopyFrom  (line 7530, @0x0000000001b3c510, libserver.so)
void __fastcall CDemoSpawnGroups::CopyFrom(CDemoSpawnGroups *const this, const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDemoSpawnGroups::CopyFrom  (line 7536, @0x0000000001b4ed60, libserver.so)
// calls: CDemoSpawnGroups::MergeFrom
void __fastcall CDemoSpawnGroups::CopyFrom(CDemoSpawnGroups *const this, const CDemoSpawnGroups *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDemoSpawnGroups::MergeFrom(this, from);
  }
}


// CDemoSpawnGroups::IsInitialized  (line 7542, @0x0000000001b3c550, libserver.so)
bool __fastcall CDemoSpawnGroups::IsInitialized(const CDemoSpawnGroups *const this)
{
  return 1;
}


// CDemoSpawnGroups::Swap  (line 7547, @0x0000000001b4eda0, libserver.so)  // inlines: Swap, swap<int>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
// calls: google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
void __fastcall CDemoSpawnGroups::Swap(CDemoSpawnGroups *const this, CDemoSpawnGroups *other)
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


// CDemoSpawnGroups::GetMetadata  (line 7556, @0x0000000001b402b0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_demo_2eproto(void), `anonymous namespace'::CDemoSpawnGroups_descriptor_, `anonymous namespace'::CDemoSpawnGroups_reflection_
google::protobuf::Metadata __fastcall CDemoSpawnGroups::GetMetadata(const CDemoSpawnGroups *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_demo_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDemoSpawnGroups_descriptor_;
  result.reflection = `anonymous namespace'::CDemoSpawnGroups_reflection_;
  return result;
}


