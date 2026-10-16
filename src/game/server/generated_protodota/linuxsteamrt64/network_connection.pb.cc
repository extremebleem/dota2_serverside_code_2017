// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/network_connection.pb.cc:224
struct StaticDescriptorInitializer_network_5fconnection_2eproto {
	StaticDescriptorInitializer_network_5fconnection_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_network_5fconnection_2eproto  (line 33, @0x0000000001a750a0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, protobuf_AddDesc_network_5fconnection_2eproto, ~basic_string
// calls: std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), protobuf_AddDesc_network_5fconnection_2eproto, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&), _Unwind_Resume, std::string::_Rep::_M_dispose(std::allocator<char> const&)
// strings: "network_connection.proto", "generated_protodota/linuxsteamrt64/network_connection.pb.cc", "CHECK failed: file != NULL: "
// globals: protobuf_AddDesc_network_5fconnection_2eproto(void)::already_here, `anonymous namespace'::ENetworkDisconnectionReason_descriptor_
void __cdecl protobuf_AssignDesc_network_5fconnection_2eproto()
{
  google::protobuf::DescriptorPool *v0; // rdi
  google::protobuf::DescriptorPool *v1; // rax
  __int64 FileByName; // r12
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  int v6; // edx
  char v7; // [rsp+1Eh] [rbp-32h] BYREF
  char v8; // [rsp+1Fh] [rbp-31h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-30h] BYREF

  if ( !protobuf_AddDesc_network_5fconnection_2eproto(void)::already_here )
    protobuf_AddDesc_network_5fconnection_2eproto();
  std::string::string(&v9, "network_connection.proto", &v7);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v9);
  v3 = *&v9.level_ - 24LL;
  if ( (*&v9.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v5 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v6 = *(*&v9.level_ - 8LL);
      *(*&v9.level_ - 8LL) = v6 - 1;
      v5 = v6;
    }
    if ( v5 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v8);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/network_connection.pb.cc",
      38);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
  }
  `anonymous namespace'::ENetworkDisconnectionReason_descriptor_ = *(FileByName + 96);
}


// protobuf_RegisterTypes  (line 50, @0x0000000001a75030, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_network_5fconnection_2eproto(void)
void __fastcall `anonymous namespace'::protobuf_RegisterTypes(const std::string *const a1)
{
  google::protobuf::Closure *v1; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_network_5fconnection_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
}


// protobuf_ShutdownFile_network_5fconnection_2eproto  (line 56, @0x0000000001a74fa0, libserver.so)
void __cdecl protobuf_ShutdownFile_network_5fconnection_2eproto()
{
  ;
}


// protobuf_AddDesc_network_5fconnection_2eproto  (line 59, @0x0000000001a74fb0, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto(void), google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), google::protobuf::EnumValueOptions::default_instance(void), google::protobuf::internal::ExtensionSet::RegisterExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool), google::protobuf::internal::OnShutdown(void (*)(void))
// callers: protobuf_AssignDesc_network_5fconnection_2eproto, protobuf_AddDesc_network_5fconnection_2eproto, _GLOBAL__sub_I_network_connection.pb.cc
// strings: "generated_protodota/linuxsteamrt64/network_connection.pb.cc", "network_connection.proto"
// globals: protobuf_AddDesc_network_5fconnection_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), protobuf_ShutdownFile_network_5fconnection_2eproto(void)
void __cdecl protobuf_AddDesc_network_5fconnection_2eproto()
{
  const char *v0; // rcx
  google::protobuf *v1; // rdi
  int v2; // edx
  void (*v3)(const std::string *); // rdx
  google::protobuf::EnumValueOptions *v4; // rdi
  google::protobuf::internal::ExtensionSet *v5; // rax
  bool v6; // r9
  void (*v7)(void); // rsi

  protobuf_AddDesc_network_5fconnection_2eproto(void)::already_here = 1;
  google::protobuf::internal::VerifyVersion(
    (&stru_1E9BE8.r_info + 1),
    2006000,
    "generated_protodota/linuxsteamrt64/network_connection.pb.cc",
    v0);
  google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto(v1);
  google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_3272EF8, &stru_1718.st_name + 2, v2);
  google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "network_connection.proto",
    `anonymous namespace'::protobuf_RegisterTypes,
    v3);
  v5 = google::protobuf::EnumValueOptions::default_instance(v4);
  google::protobuf::internal::ExtensionSet::RegisterExtension(v5, (&stru_C540.r_offset + 4), 9, 0, 0, v6);
  google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_network_5fconnection_2eproto, v7);
}


// protobuf_AddDesc_network_5fconnection_2eproto  (line 59, @0x0000000001a751d0, libserver.so)
// calls: protobuf_AddDesc_network_5fconnection_2eproto
// callers: protobuf_AddDesc_networkbasetypes_2eproto, protobuf_AddDesc_dota_5fgcmessages_5fserver_2eproto
// globals: protobuf_AddDesc_network_5fconnection_2eproto(void)::already_here
void __cdecl protobuf_AddDesc_network_5fconnection_2eproto()
{
  if ( !protobuf_AddDesc_network_5fconnection_2eproto(void)::already_here )
    protobuf_AddDesc_network_5fconnection_2eproto();
}


// ENetworkDisconnectionReason_descriptor  (line 229, @0x0000000001a751f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// callers: CDOTA_PlayerResource::SetConnectionState, CDOTAGCServerSystem::CheckPoorNetworkConditions
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_network_5fconnection_2eproto(void), `anonymous namespace'::ENetworkDisconnectionReason_descriptor_
const google::protobuf::EnumDescriptor *__cdecl ENetworkDisconnectionReason_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_network_5fconnection_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::ENetworkDisconnectionReason_descriptor_;
}


// ENetworkDisconnectionReason_IsValid  (line 233, @0x0000000001a75280, libserver.so)
// callers: CNETMsg_Disconnect::MergePartialFromCodedStream, CMsgPoorNetworkConditions_Player::MergePartialFromCodedStream, CMsgLeaverDetected::MergePartialFromCodedStream, CMsgConnectedPlayers_Player::MergePartialFromCodedStream
bool __fastcall ENetworkDisconnectionReason_IsValid(int value)
{
  return value <= 0x49;
}


