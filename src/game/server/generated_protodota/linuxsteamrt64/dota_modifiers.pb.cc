// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc:178
struct StaticDescriptorInitializer_dota_5fmodifiers_2eproto {
	StaticDescriptorInitializer_dota_5fmodifiers_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_dota_5fmodifiers_2eproto  (line 39, @0x0000000001d67900, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: protobuf_AddDesc_dota_5fmodifiers_2eproto, std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), google::protobuf::MessageFactory::generated_factory(void), operator new, google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(google::protobuf::Descriptor const*,google::protobuf::Message const*,int cons, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&) (15 total)
// strings: "dota_modifiers.proto", "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc", "CHECK failed: file != NULL: "
// globals: `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_, CDOTAModifierBuffTableEntry::default_instance_, protobuf_AssignDesc_dota_5fmodifiers_2eproto(void)::CDOTAModifierBuffTableEntry_offsets_, `anonymous namespace'::CDOTAModifierBuffTableEntry_reflection_, `anonymous namespace'::CDOTALuaModifierEntry_descriptor_, CDOTALuaModifierEntry::default_instance_, protobuf_AssignDesc_dota_5fmodifiers_2eproto(void)::CDOTALuaModifierEntry_offsets_, `anonymous namespace'::CDOTALuaModifierEntry_reflection_ (9 total)
void __cdecl protobuf_AssignDesc_dota_5fmodifiers_2eproto()
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
  const google::protobuf::EnumDescriptor *v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  char v18; // [rsp+3Eh] [rbp-42h] BYREF
  char v19; // [rsp+3Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v20; // [rsp+40h] [rbp-40h] BYREF

  protobuf_AddDesc_dota_5fmodifiers_2eproto();
  std::string::string(&v20, "dota_modifiers.proto", &v18);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v20);
  v3 = *&v20.level_ - 24LL;
  if ( (*&v20.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v16 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v17 = *(*&v20.level_ - 8LL);
      *(*&v20.level_ - 8LL) = v17 - 1;
      v16 = v17;
    }
    if ( v16 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v19);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v20,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc",
      44);
    v15 = google::protobuf::internal::LogMessage::operator<<(&v20, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v19, v15);
    google::protobuf::internal::LogMessage::~LogMessage(&v20);
  }
  `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_ = *(FileByName + 80);
  v4 = google::protobuf::DescriptorPool::generated_pool(v3);
  v6 = google::protobuf::MessageFactory::generated_factory(v5);
  v7 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v7,
    `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_,
    CDOTAModifierBuffTableEntry::default_instance_,
    protobuf_AssignDesc_dota_5fmodifiers_2eproto(void)::CDOTAModifierBuffTableEntry_offsets_,
    16,
    8,
    -1,
    v4,
    v6,
    184);
  v8 = *(FileByName + 80);
  `anonymous namespace'::CDOTAModifierBuffTableEntry_reflection_ = v7;
  `anonymous namespace'::CDOTALuaModifierEntry_descriptor_ = v8 + 1;
  v10 = google::protobuf::DescriptorPool::generated_pool(v9);
  v12 = google::protobuf::MessageFactory::generated_factory(v11);
  v13 = operator new(0x50u);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v13,
    `anonymous namespace'::CDOTALuaModifierEntry_descriptor_,
    CDOTALuaModifierEntry::default_instance_,
    protobuf_AssignDesc_dota_5fmodifiers_2eproto(void)::CDOTALuaModifierEntry_offsets_,
    16,
    8,
    -1,
    v10,
    v12,
    40);
  v14 = *(FileByName + 96);
  `anonymous namespace'::CDOTALuaModifierEntry_reflection_ = v13;
  `anonymous namespace'::DOTA_MODIFIER_ENTRY_TYPE_descriptor_ = v14;
}


// protobuf_RegisterTypes  (line 118, @0x0000000001d67830, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, default_instance, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(google::protobuf::Descriptor const*,google::protobuf::Message const*), protobuf_AddDesc_dota_5fmodifiers_2eproto, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmodifiers_2eproto(void), CDOTAModifierBuffTableEntry::default_instance_, `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_, CDOTALuaModifierEntry::default_instance_, `anonymous namespace'::CDOTALuaModifierEntry_descriptor_
void __fastcall `anonymous namespace'::protobuf_RegisterTypes(const std::string *const a1)
{
  google::protobuf::Closure *v1; // rdx
  const google::protobuf::Descriptor *v2; // rsi
  const google::protobuf::Message *v3; // rdx
  const google::protobuf::Descriptor *v4; // rsi
  __int64 v5[2]; // [rsp+0h] [rbp-30h] BYREF
  char v6; // [rsp+10h] [rbp-20h]

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    v6 = 0;
    v5[0] = off_47BFB70;
    v5[1] = protobuf_AssignDesc_dota_5fmodifiers_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v5, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v5);
  }
  v2 = CDOTAModifierBuffTableEntry::default_instance_;
  if ( CDOTAModifierBuffTableEntry::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmodifiers_2eproto();
    v2 = CDOTAModifierBuffTableEntry::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_,
    v2,
    v1);
  v4 = CDOTALuaModifierEntry::default_instance_;
  if ( CDOTALuaModifierEntry::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmodifiers_2eproto();
    v4 = CDOTALuaModifierEntry::default_instance_;
  }
  google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    `anonymous namespace'::CDOTALuaModifierEntry_descriptor_,
    v4,
    v3);
}


// protobuf_ShutdownFile_dota_5fmodifiers_2eproto  (line 128, @0x0000000001d65810, libserver.so)
// globals: CDOTAModifierBuffTableEntry::default_instance_, `anonymous namespace'::CDOTAModifierBuffTableEntry_reflection_, CDOTALuaModifierEntry::default_instance_, `anonymous namespace'::CDOTALuaModifierEntry_reflection_
void __cdecl protobuf_ShutdownFile_dota_5fmodifiers_2eproto()
{
  if ( CDOTAModifierBuffTableEntry::default_instance_ != 0 )
    (CDOTAModifierBuffTableEntry::default_instance_->name_[1]._M_dataplus._M_p)(CDOTAModifierBuffTableEntry::default_instance_);
  if ( `anonymous namespace'::CDOTAModifierBuffTableEntry_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTAModifierBuffTableEntry_reflection_ + 8LL))(`anonymous namespace'::CDOTAModifierBuffTableEntry_reflection_);
  if ( CDOTALuaModifierEntry::default_instance_ != 0 )
    (CDOTALuaModifierEntry::default_instance_->name_[1]._M_dataplus._M_p)(CDOTALuaModifierEntry::default_instance_);
  if ( `anonymous namespace'::CDOTALuaModifierEntry_reflection_ != 0 )
    (*(*`anonymous namespace'::CDOTALuaModifierEntry_reflection_ + 8LL))(`anonymous namespace'::CDOTALuaModifierEntry_reflection_);
}


// protobuf_AddDesc_dota_5fmodifiers_2eproto  (line 135, @0x0000000001d67710, libserver.so)  // inlines: InitAsDefaultInstance
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), protobuf_AddDesc_networkbasetypes_2eproto, google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), operator new, CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry, CDOTALuaModifierEntry::CDOTALuaModifierEntry, CMsgVector::default_instance, google::protobuf::internal::OnShutdown(void (*)(void)), operator delete, _Unwind_Resume
// callers: CDOTAModifierBuffTableEntry::default_instance, protobuf_RegisterTypes, protobuf_AssignDesc_dota_5fmodifiers_2eproto, CDOTALuaModifierEntry::default_instance, _GLOBAL__sub_I_dota_modifiers.pb.cc
// strings: "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc", "dota_modifiers.proto"
// globals: protobuf_AddDesc_dota_5fmodifiers_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), CDOTAModifierBuffTableEntry::default_instance_, CDOTALuaModifierEntry::default_instance_, protobuf_ShutdownFile_dota_5fmodifiers_2eproto(void)
void __cdecl protobuf_AddDesc_dota_5fmodifiers_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  CDOTAModifierBuffTableEntry *v3; // rbx
  CDOTALuaModifierEntry *v4; // rbx
  google::protobuf::Descriptor *v5; // rbx
  void (*v6)(void); // rsi

  if ( !protobuf_AddDesc_dota_5fmodifiers_2eproto(void)::already_here )
  {
    protobuf_AddDesc_dota_5fmodifiers_2eproto(void)::already_here = 1;
    google::protobuf::internal::VerifyVersion(
      (&stru_1E9BE8.r_info + 1),
      2006000,
      "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc",
      v0);
    protobuf_AddDesc_networkbasetypes_2eproto();
    google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_32B2840, &stru_10.m_pEntityIdChunks[53] + 1, v1);
    google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "dota_modifiers.proto",
      `anonymous namespace'::protobuf_RegisterTypes,
      v2);
    v3 = operator new(0xB8u);
    CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry(v3);
    CDOTAModifierBuffTableEntry::default_instance_ = v3;
    v4 = operator new(0x28u);
    CDOTALuaModifierEntry::CDOTALuaModifierEntry(v4);
    CDOTALuaModifierEntry::default_instance_ = v4;
    v5 = CDOTAModifierBuffTableEntry::default_instance_;
    v5->nested_types_ = CMsgVector::default_instance();
    *&v5->enum_type_count_ = CMsgVector::default_instance();
    google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_dota_5fmodifiers_2eproto, v6);
  }
}


// DOTA_MODIFIER_ENTRY_TYPE_descriptor  (line 183, @0x0000000001d66400, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmodifiers_2eproto(void), `anonymous namespace'::DOTA_MODIFIER_ENTRY_TYPE_descriptor_
const google::protobuf::EnumDescriptor *__cdecl DOTA_MODIFIER_ENTRY_TYPE_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmodifiers_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::DOTA_MODIFIER_ENTRY_TYPE_descriptor_;
}


// DOTA_MODIFIER_ENTRY_TYPE_IsValid  (line 187, @0x0000000001d66490, libserver.so)
bool __fastcall DOTA_MODIFIER_ENTRY_TYPE_IsValid(int value)
{
  return (value - 1) <= 1;
}


// CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry  (line 235, @0x0000000001d66750, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAModifierBuffTableEntry::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: CDOTAModifierBuffTableEntry::New, protobuf_AddDesc_dota_5fmodifiers_2eproto, CDOTA_Buff::SendBuffCreationToClients, CDOTA_Buff::SendBuffRemovalToClients, CDOTA_Buff::SendBuffRefreshToClients, sv_dota_dump_modifier_stringtable
void __fastcall CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry(CDOTAModifierBuffTableEntry *const this)
{
  *this = off_3F9BA30;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAModifierBuffTableEntry::SharedCtor(this);
}


// CDOTAModifierBuffTableEntry::InitAsDefaultInstance  (line 241, @0x0000000001d664a0, libserver.so)
// calls: CMsgVector::default_instance
void __fastcall CDOTAModifierBuffTableEntry::InitAsDefaultInstance(CDOTAModifierBuffTableEntry *const this)
{
  *(this + 10) = CMsgVector::default_instance();
  *(this + 11) = CMsgVector::default_instance();
}


// CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry  (line 246, @0x0000000001d671b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTAModifierBuffTableEntry::SharedCtor, CDOTAModifierBuffTableEntry::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry(
        CDOTAModifierBuffTableEntry *const this,
        const CDOTAModifierBuffTableEntry *const from)
{
  *this = off_3F9BA30;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTAModifierBuffTableEntry::SharedCtor(this);
  CDOTAModifierBuffTableEntry::MergeFrom(this, from);
}


// CDOTAModifierBuffTableEntry::SharedCtor  (line 253, @0x0000000001d664d0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry
void __fastcall CDOTAModifierBuffTableEntry::SharedCtor(CDOTAModifierBuffTableEntry *const this)
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
  *(this + 6) = 1;
  *(this + 7) = 0;
  *(this + 8) = 0;
  v3 = google::protobuf::internal::empty_string_;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = -1082130432;
  *(this + 15) = 0;
  *(this + 16) = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  *(this + 132) = 0;
  *(this + 19) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  v4 = operator new(8u);
  std::string::string(v4, v3);
  v5 = google::protobuf::internal::empty_string_;
  *(this + 12) = v4;
  v6 = operator new(8u);
  std::string::string(v6, v5);
  v7 = google::protobuf::internal::empty_string_;
  *(this + 13) = v6;
  v8 = operator new(8u);
  std::string::string(v8, v7);
  v9 = google::protobuf::internal::empty_string_;
  *(this + 14) = v8;
  v10 = operator new(8u);
  std::string::string(v10, v9);
  v11 = google::protobuf::internal::empty_string_;
  *(this + 15) = v10;
  *(this + 32) = 0;
  *(this + 133) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  *(this + 36) = 0;
  *(this + 37) = 0;
  *(this + 44) = 0;
  v12 = operator new(8u);
  std::string::string(v12, v11);
  v13 = google::protobuf::internal::empty_string_;
  *(this + 19) = v12;
  *(this + 134) = 0;
  v14 = operator new(8u);
  std::string::string(v14, v13);
  *(this + 20) = v14;
  v15 = google::protobuf::internal::empty_string_;
  v16 = operator new(8u);
  std::string::string(v16, v15);
  *(this + 21) = v16;
  *(this + 4) = 0;
}


// CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry  (line 291, @0x0000000001d66af0, libserver.so)
// calls: CDOTAModifierBuffTableEntry::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry, CDOTA_Buff::SendBuffCreationToClients, CDOTA_Buff::SendBuffRemovalToClients, CDOTA_Buff::SendBuffRefreshToClients, sv_dota_dump_modifier_stringtable
void __fastcall CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry(CDOTAModifierBuffTableEntry *const this)
{
  *this = off_3F9BA30;
  CDOTAModifierBuffTableEntry::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry  (line 291, @0x0000000001d66b30, libserver.so)
// calls: CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry, operator delete
void __fastcall CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry(CDOTAModifierBuffTableEntry *const this)
{
  CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry(this);
  operator delete(this);
}


// CDOTAModifierBuffTableEntry::SharedDtor  (line 296, @0x0000000001d667f0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry
// globals: CDOTAModifierBuffTableEntry::default_instance_
void __fastcall CDOTAModifierBuffTableEntry::SharedDtor(CDOTAModifierBuffTableEntry *const this)
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

  v2 = *(this + 12);
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
  v5 = *(this + 13);
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
  v8 = *(this + 14);
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
  v11 = *(this + 15);
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
  v14 = *(this + 19);
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
  v17 = *(this + 20);
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
  v20 = *(this + 21);
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
  if ( this != CDOTAModifierBuffTableEntry::default_instance_ )
  {
    v23 = *(this + 10);
    if ( v23 != 0 )
      (*(*v23 + 8LL))(v23);
    v24 = *(this + 11);
    if ( v24 != 0 )
      (*(*v24 + 8LL))(v24);
  }
}


// CDOTAModifierBuffTableEntry::SetCachedSize  (line 310, @0x0000000001d65870, libserver.so)
void __fastcall CDOTAModifierBuffTableEntry::SetCachedSize(const CDOTAModifierBuffTableEntry *const this, int size)
{
  *(this + 5) = size;
}


// CDOTAModifierBuffTableEntry::descriptor  (line 315, @0x0000000001d66b50, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmodifiers_2eproto(void), `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTAModifierBuffTableEntry::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmodifiers_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_;
}


// CDOTAModifierBuffTableEntry::default_instance  (line 320, @0x0000000001d67800, libserver.so)
// calls: protobuf_AddDesc_dota_5fmodifiers_2eproto
// callers: CDOTA_Buff::MakeEntry
// globals: CDOTAModifierBuffTableEntry::default_instance_
const CDOTAModifierBuffTableEntry *__cdecl CDOTAModifierBuffTableEntry::default_instance()
{
  const CDOTAModifierBuffTableEntry *result; // rax

  result = CDOTAModifierBuffTableEntry::default_instance_;
  if ( CDOTAModifierBuffTableEntry::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmodifiers_2eproto();
    return CDOTAModifierBuffTableEntry::default_instance_;
  }
  return result;
}


// CDOTAModifierBuffTableEntry::New  (line 327, @0x0000000001d667b0, libserver.so)
// calls: operator new, CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry, operator delete, _Unwind_Resume
CDOTAModifierBuffTableEntry *__fastcall CDOTAModifierBuffTableEntry::New(const CDOTAModifierBuffTableEntry *const this)
{
  CDOTAModifierBuffTableEntry *v1; // rbx

  v1 = operator new(0xB8u);
  CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry(v1);
  return v1;
}


// CDOTAModifierBuffTableEntry::Clear  (line 331, @0x0000000001d67fc0, libserver.so)  // inlines: Clear, clear, memset, size
// calls: CMsgVector::Clear, google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDOTAModifierBuffTableEntry::Clear(CDOTAModifierBuffTableEntry *const this)
{
  int v2; // eax
  CMsgVector *v3; // rdi
  bool v4; // zf
  CMsgVector *v5; // rdi
  int v6; // eax

  v2 = *(this + 4);
  if ( v2 != 0 )
  {
    *(this + 28) = 0;
    v2 = *(this + 4);
    *(this + 36) = 0;
    *(this + 44) = 0;
    *(this + 13) = 0;
    *(this + 6) = 1;
  }
  if ( BYTE1(v2) != 0 )
  {
    v2 = *(this + 4);
    *(this + 60) = 0;
    *(this + 68) = 0;
    *(this + 19) = 0;
    *(this + 14) = -1082130432;
    *(this + 132) = 0;
    if ( (v2 & 0x8000) != 0 )
    {
      v5 = *(this + 10);
      if ( v5 != 0 )
      {
        CMsgVector::Clear(v5);
        v2 = *(this + 4);
      }
    }
  }
  if ( (v2 & 0xFF0000) != 0 )
  {
    if ( (v2 & 0x10000) != 0 )
    {
      v3 = *(this + 11);
      if ( v3 != 0 )
      {
        CMsgVector::Clear(v3);
        v2 = *(this + 4);
      }
    }
    if ( (v2 & 0x20000) != 0 )
    {
      std::string::_M_mutate(*(this + 12), 0, *(**(this + 12) - 24LL), 0);
      v2 = *(this + 4);
      if ( (v2 & 0x40000) == 0 )
      {
LABEL_10:
        if ( (v2 & 0x80000) == 0 )
          goto LABEL_11;
        goto LABEL_28;
      }
    }
    else if ( (v2 & 0x40000) == 0 )
    {
      goto LABEL_10;
    }
    std::string::_M_mutate(*(this + 13), 0, *(**(this + 13) - 24LL), 0);
    v2 = *(this + 4);
    if ( (v2 & 0x80000) == 0 )
    {
LABEL_11:
      if ( (v2 & 0x100000) == 0 )
      {
LABEL_12:
        *(this + 32) = 0;
        *(this + 133) = 0;
        *(this + 34) = 0;
        goto LABEL_13;
      }
LABEL_29:
      std::string::_M_mutate(*(this + 15), 0, *(**(this + 15) - 24LL), 0);
      v2 = *(this + 4);
      goto LABEL_12;
    }
LABEL_28:
    std::string::_M_mutate(*(this + 14), 0, *(**(this + 14) - 24LL), 0);
    v2 = *(this + 4);
    if ( (v2 & 0x100000) == 0 )
      goto LABEL_12;
    goto LABEL_29;
  }
LABEL_13:
  if ( (v2 & 0xFF000000) != 0 )
  {
    *(this + 140) = 0;
    v6 = *(this + 4);
    *(this + 37) = 0;
    *(this + 44) = 0;
    if ( (v6 & 0x10000000) != 0 )
    {
      std::string::_M_mutate(*(this + 19), 0, *(**(this + 19) - 24LL), 0);
      v6 = *(this + 4);
    }
    *(this + 134) = 0;
    if ( (v6 & 0x40000000) != 0 )
    {
      std::string::_M_mutate(*(this + 20), 0, *(**(this + 20) - 24LL), 0);
      v6 = *(this + 4);
    }
    if ( v6 < 0 )
      std::string::_M_mutate(*(this + 21), 0, *(**(this + 21) - 24LL), 0);
  }
  v4 = *(this + 1) == 0;
  *(this + 4) = 0;
  if ( !v4 )
    google::protobuf::UnknownFieldSet::ClearFallback(this + 1);
}


// CDOTAModifierBuffTableEntry::MergePartialFromCodedStream  (line 396, @0x0000000001d68240, libserver.so)  // inlines: Advance, BufferSize, DOTA_MODIFIER_ENTRY_TYPE_IsValid, DecrementRecursionDepth, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, IncrementRecursionDepth, ReadLittleEndian32, ReadMessageNoVirtual<CMsgVector>, ReadPrimitive<bool, (google::protobuf::internal::WireFormatLite::FieldType)8u>, ReadPrimitive<float, (google::protobuf::internal::WireFormatLite::FieldType)2u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)14u>, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, ReadVarint64, memcpy, mutable_hero_loop_appear, mutable_hero_loop_disappear, mutable_illusion_label, mutable_lua_name, mutable_player_ids, mutable_portal_loop_appear, mutable_portal_loop_disappear, mutable_v_end, mutable_v_start, set_entry_type, set_has_ability, set_has_ability_level, set_has_active, set_has_activity, set_has_armor, set_has_aura, set_has_caster, set_has_channel_time, set_has_creation_time, set_has_damage, set_has_dd_ability_index, set_has_dd_modifier_index, set_has_duration, set_has_entry_type, set_has_fade_time, set_has_hero_loop_appear, set_has_hero_loop_disappear, set_has_illusion_label, set_has_index, set_has_lua_name, set_has_modifier_class, set_has_movement_speed, set_has_parent, set_has_player_ids, set_has_portal_loop_appear, set_has_portal_loop_disappear, set_has_range, set_has_serial_num, set_has_stack_count, set_has_subtle, set_has_v_end, set_has_v_start
// calls: google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), operator new, CMsgVector::CMsgVector, google::protobuf::io::CodedInputStream::PushLimit(int), CMsgVector::MergePartialFromCodedStream, google::protobuf::io::CodedInputStream::PopLimit(int), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::UnknownFieldSet::AddVarint(int,ulong), google::protobuf::io::CodedInputStream::ReadVarint64Fallback(ulong *), google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *) (14 total)
// globals: jpt_1D68299
bool __fastcall CDOTAModifierBuffTableEntry::MergePartialFromCodedStream(
        CDOTAModifierBuffTableEntry *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::UnknownFieldSet *v3; // r13
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::UnknownFieldSet *i; // rcx
  unsigned __int64 v7; // rsi
  google::protobuf::uint8 *v8; // rdx
  google::protobuf::uint32 TagFallback; // eax
  bool result; // al
  const google::protobuf::uint8 *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // eax
  CMsgVector *v14; // rcx
  const google::protobuf::uint8 *v15; // rax
  int v16; // eax
  bool v17; // cc
  int recursion_depth; // eax
  CMsgVector *v19; // rcx
  const google::protobuf::uint8 *v20; // rax
  char v21; // al
  const google::protobuf::uint8 *v22; // rdx
  __int64 v23; // rax
  const google::protobuf::uint8 *v24; // rdx
  const google::protobuf::uint8 *v25; // rdx
  unsigned int v26; // eax
  const google::protobuf::uint8 *v27; // rdx
  unsigned int v28; // eax
  const google::protobuf::uint8 *v29; // rdx
  const google::protobuf::uint8 *v30; // rdx
  unsigned int v31; // eax
  const google::protobuf::uint8 *v32; // rdx
  unsigned int v33; // eax
  const google::protobuf::uint8 *v34; // rdx
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rax
  const google::protobuf::uint8 *v38; // rdx
  unsigned int v39; // eax
  const google::protobuf::uint8 *v40; // rax
  const google::protobuf::uint8 *v41; // rdx
  unsigned int v42; // eax
  const google::protobuf::uint8 *v43; // rdx
  unsigned int v44; // eax
  const google::protobuf::uint8 *v45; // rdx
  unsigned int v46; // eax
  const google::protobuf::uint8 *v47; // rdx
  unsigned int v48; // eax
  const google::protobuf::uint8 *v49; // rdx
  unsigned int v50; // eax
  const google::protobuf::uint8 *v51; // rax
  google::protobuf::uint8 v52; // dl
  signed int v53; // eax
  const google::protobuf::uint8 *v54; // rdx
  unsigned int v55; // eax
  const google::protobuf::uint8 *v56; // rdx
  const google::protobuf::uint8 *v57; // rdx
  unsigned int v58; // eax
  const google::protobuf::uint8 *v59; // rax
  unsigned int v60; // edx
  unsigned int v61; // eax
  unsigned int v62; // edx
  unsigned int v63; // eax
  const google::protobuf::uint8 *v64; // rax
  unsigned int v65; // edx
  unsigned int v66; // eax
  const google::protobuf::uint8 *v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rax
  int v70; // eax
  int v71; // eax
  char Varint32Fallback; // al
  int v73; // [rsp+4h] [rbp-4Ch]
  int v74; // [rsp+4h] [rbp-4Ch]
  CMsgVector *v75; // [rsp+8h] [rbp-48h]
  CMsgVector *v76; // [rsp+8h] [rbp-48h]
  CMsgVector *v77; // [rsp+8h] [rbp-48h]
  CMsgVector *v78; // [rsp+8h] [rbp-48h]
  CMsgVector *v79; // [rsp+8h] [rbp-48h]
  CMsgVector *v80; // [rsp+8h] [rbp-48h]
  unsigned int v81[2]; // [rsp+18h] [rbp-38h] BYREF

  v3 = (this + 8);
  buffer = input->buffer_;
  for ( i = input->buffer_end_; ; i = input->buffer_end_ )
  {
    while ( 1 )
    {
      if ( i <= buffer )
        goto LABEL_6;
      v7 = *buffer;
      if ( v7 <= 0 )
        break;
      v8 = (buffer + 1);
      input->last_tag_ = v7;
      input->buffer_ = v8;
LABEL_5:
      switch ( v7 >> 3 )
      {
        case 1u:
          if ( v7 != 8 )
            goto handle_unusual;
          v51 = input->buffer_;
          if ( v51 >= input->buffer_end_ || (v52 = *v51, *v51 < 0) )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v53 = v81[0];
          }
          else
          {
            input->buffer_ = v51 + 1;
            v53 = v52;
          }
          if ( (v53 - 1) <= 1 )
          {
            *(this + 4) |= 1u;
            *(this + 6) = v53;
          }
          else
          {
            google::protobuf::UnknownFieldSet::AddVarint(v3, 1, v53);
          }
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 16 )
            continue;
          v49 = buffer + 1;
          input->buffer_ = v49;
parse_parent:
          if ( i <= v49 || ((v50 = *v49) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v50 = v81[0];
          }
          else
          {
            input->buffer_ = v49 + 1;
          }
          *(this + 4) |= 2u;
          *(this + 7) = v50;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 24 )
            continue;
          v47 = buffer + 1;
          input->buffer_ = v47;
parse_index:
          if ( v47 >= i || ((v48 = *v47) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v48 = v81[0];
          }
          else
          {
            input->buffer_ = v47 + 1;
          }
          *(this + 4) |= 4u;
          *(this + 8) = v48;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 32 )
            continue;
          v45 = buffer + 1;
          input->buffer_ = v45;
parse_serial_num:
          if ( i <= v45 || ((v46 = *v45) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v46 = v81[0];
          }
          else
          {
            input->buffer_ = v45 + 1;
          }
          *(this + 4) |= 8u;
          *(this + 9) = v46;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 40 )
            continue;
          v43 = buffer + 1;
          input->buffer_ = v43;
parse_modifier_class:
          if ( v43 >= i || ((v44 = *v43) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v44 = v81[0];
          }
          else
          {
            input->buffer_ = v43 + 1;
          }
          *(this + 4) |= 0x10u;
          *(this + 10) = v44;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 48 )
            continue;
          v41 = buffer + 1;
          input->buffer_ = v41;
parse_ability_level:
          if ( i <= v41 || ((v42 = *v41) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v42 = v81[0];
          }
          else
          {
            input->buffer_ = v41 + 1;
          }
          *(this + 4) |= 0x20u;
          *(this + 11) = v42;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 56 )
            continue;
          v38 = buffer + 1;
          input->buffer_ = v38;
parse_stack_count:
          if ( v38 >= i || ((v39 = *v38) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v39 = v81[0];
          }
          else
          {
            input->buffer_ = v38 + 1;
          }
          *(this + 4) |= 0x40u;
          *(this + 12) = v39;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 69 )
            continue;
          v40 = buffer + 1;
          input->buffer_ = buffer + 1;
parse_creation_time:
          if ( i - v40 <= 3 )
          {
            result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v81);
            if ( !result )
              return result;
            v63 = v81[0];
          }
          else
          {
            v62 = *v40;
            input->buffer_ = v40 + 4;
            v63 = v62;
          }
          *(this + 4) |= 0x80u;
          *(this + 13) = v63;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 77 )
            continue;
          v59 = buffer + 1;
          input->buffer_ = buffer + 1;
parse_duration:
          if ( i - v59 <= 3 )
          {
            result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v81);
            if ( !result )
              return result;
            v61 = v81[0];
          }
          else
          {
            v60 = *v59;
            input->buffer_ = v59 + 4;
            v61 = v60;
          }
          *(this + 4) |= 0x100u;
          *(this + 14) = v61;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 80 )
            continue;
          v57 = buffer + 1;
          input->buffer_ = v57;
parse_caster:
          if ( i <= v57 || ((v58 = *v57) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v58 = v81[0];
          }
          else
          {
            input->buffer_ = v57 + 1;
          }
          *(this + 4) |= 0x200u;
          *(this + 15) = v58;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 88 )
            continue;
          v54 = buffer + 1;
          input->buffer_ = v54;
parse_ability:
          if ( i <= v54 || ((v55 = *v54) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v55 = v81[0];
          }
          else
          {
            input->buffer_ = v54 + 1;
          }
          *(this + 4) |= 0x400u;
          *(this + 16) = v55;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 96 )
            continue;
          v56 = buffer + 1;
          input->buffer_ = v56;
parse_armor:
          if ( i <= v56 || ((v68 = *v56) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v68 = v81[0];
          }
          else
          {
            input->buffer_ = v56 + 1;
          }
          *(this + 4) |= 0x800u;
          *(this + 17) = v68;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 109 )
            continue;
          v64 = buffer + 1;
          input->buffer_ = buffer + 1;
parse_fade_time:
          if ( i - v64 <= 3 )
          {
            result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v81);
            if ( !result )
              return result;
            v66 = v81[0];
          }
          else
          {
            v65 = *v64;
            input->buffer_ = v64 + 4;
            v66 = v65;
          }
          *(this + 4) |= 0x1000u;
          *(this + 18) = v66;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 112 )
            continue;
          v67 = buffer + 1;
          input->buffer_ = v67;
parse_subtle:
          if ( i <= v67 || ((v69 = *v67) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v81);
            if ( !result )
              return result;
            v69 = *v81;
          }
          else
          {
            input->buffer_ = v67 + 1;
          }
          *(this + 132) = v69 != 0;
          *(this + 4) |= 0x2000u;
          buffer = input->buffer_;
          i = input->buffer_end_;
          if ( buffer >= i || *buffer != 125 )
            continue;
          v11 = buffer + 1;
          input->buffer_ = buffer + 1;
parse_channel_time:
          if ( i - v11 <= 3 )
          {
            result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(input, v81);
            if ( !result )
              return result;
            v13 = v81[0];
          }
          else
          {
            v12 = *v11;
            input->buffer_ = v11 + 4;
            v13 = v12;
          }
          *(this + 4) |= 0x4000u;
          *(this + 19) = v13;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x82 || buffer[1] != 1 )
            continue;
          input->buffer_ = buffer + 2;
parse_v_start:
          v14 = *(this + 10);
          *(this + 4) |= 0x8000u;
          if ( v14 == 0 )
          {
            v75 = operator new(0x28u);
            CMsgVector::CMsgVector(v75);
            *(this + 10) = v75;
            v14 = v75;
          }
          v15 = input->buffer_;
          if ( v15 >= input->buffer_end_ || *v15 < 0 )
          {
            v80 = v14;
            Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            v14 = v80;
            if ( Varint32Fallback == 0 )
              return 0;
          }
          else
          {
            v81[0] = *v15;
            input->buffer_ = v15 + 1;
          }
          v16 = input->recursion_depth_ + 1;
          v17 = input->recursion_limit_ < v16;
          input->recursion_depth_ = v16;
          if ( v17 )
            return 0;
          v76 = v14;
          v73 = google::protobuf::io::CodedInputStream::PushLimit(input, v81[0]);
          if ( !CMsgVector::MergePartialFromCodedStream(v76, input) || !input->legitimate_message_end_ )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(input, v73);
          recursion_depth = input->recursion_depth_;
          if ( recursion_depth > 0 )
            input->recursion_depth_ = recursion_depth - 1;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x8A || buffer[1] != 1 )
            continue;
          input->buffer_ = buffer + 2;
parse_v_end:
          v19 = *(this + 11);
          *(this + 4) |= 0x10000u;
          if ( v19 == 0 )
          {
            v77 = operator new(0x28u);
            CMsgVector::CMsgVector(v77);
            *(this + 11) = v77;
            v19 = v77;
          }
          v20 = input->buffer_;
          if ( v20 < input->buffer_end_ && *v20 >= 0 )
          {
            v81[0] = *v20;
            input->buffer_ = v20 + 1;
          }
          else
          {
            v78 = v19;
            v21 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            v19 = v78;
            if ( v21 == 0 )
              return 0;
          }
          v70 = input->recursion_depth_ + 1;
          v17 = input->recursion_limit_ < v70;
          input->recursion_depth_ = v70;
          if ( v17 )
            return 0;
          v79 = v19;
          v74 = google::protobuf::io::CodedInputStream::PushLimit(input, v81[0]);
          if ( !CMsgVector::MergePartialFromCodedStream(v79, input) || !input->legitimate_message_end_ )
            return 0;
          google::protobuf::io::CodedInputStream::PopLimit(input, v74);
          v71 = input->recursion_depth_;
          if ( v71 > 0 )
            input->recursion_depth_ = v71 - 1;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x92 || buffer[1] != 1 )
            continue;
          v8 = (buffer + 2);
          input->buffer_ = v8;
parse_portal_loop_appear:
          *(this + 4) |= 0x20000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 12), v8) == 0 )
            return 0;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x9A || buffer[1] != 1 )
            continue;
          v8 = (buffer + 2);
          input->buffer_ = v8;
parse_portal_loop_disappear:
          *(this + 4) |= 0x40000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 13), v8) == 0 )
            return 0;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xA2 || buffer[1] != 1 )
            continue;
          v8 = (buffer + 2);
          input->buffer_ = v8;
parse_hero_loop_appear:
          *(this + 4) |= 0x80000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 14), v8) == 0 )
            return 0;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xAA || buffer[1] != 1 )
            continue;
          v8 = (buffer + 2);
          input->buffer_ = v8;
parse_hero_loop_disappear:
          *(this + 4) |= 0x100000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 15), v8) == 0 )
            return 0;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xB0 || buffer[1] != 1 )
            continue;
          v25 = buffer + 2;
          input->buffer_ = v25;
parse_movement_speed:
          if ( v25 >= i || ((v26 = *v25) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v26 = v81[0];
          }
          else
          {
            input->buffer_ = v25 + 1;
          }
          *(this + 4) |= 0x200000u;
          *(this + 32) = v26;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xB8 || buffer[1] != 1 )
            continue;
          v22 = buffer + 2;
          input->buffer_ = v22;
parse_aura:
          if ( i <= v22 || ((v23 = *v22) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v81);
            if ( !result )
              return result;
            v23 = *v81;
          }
          else
          {
            input->buffer_ = v22 + 1;
          }
          *(this + 133) = v23 != 0;
          *(this + 4) |= 0x400000u;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xC0 || buffer[1] != 1 )
            continue;
          v24 = buffer + 2;
          input->buffer_ = v24;
parse_activity:
          if ( i <= v24 || ((v35 = *v24) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v35 = v81[0];
          }
          else
          {
            input->buffer_ = v24 + 1;
          }
          *(this + 4) |= 0x800000u;
          *(this + 34) = v35;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xC8 || buffer[1] != 1 )
            continue;
          v32 = buffer + 2;
          input->buffer_ = v32;
parse_damage:
          if ( v32 >= i || ((v33 = *v32) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v33 = v81[0];
          }
          else
          {
            input->buffer_ = v32 + 1;
          }
          *(this + 4) |= 0x1000000u;
          *(this + 35) = v33;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xD0 || buffer[1] != 1 )
            continue;
          v34 = buffer + 2;
          input->buffer_ = v34;
parse_range:
          if ( i <= v34 || ((v36 = *v34) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v36 = v81[0];
          }
          else
          {
            input->buffer_ = v34 + 1;
          }
          *(this + 4) |= 0x2000000u;
          *(this + 36) = v36;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xD8 || buffer[1] != 1 )
            continue;
          v27 = buffer + 2;
          input->buffer_ = v27;
parse_dd_modifier_index:
          if ( v27 >= i || ((v28 = *v27) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v28 = v81[0];
          }
          else
          {
            input->buffer_ = v27 + 1;
          }
          *(this + 4) |= 0x4000000u;
          *(this + 37) = v28;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xE0 || buffer[1] != 1 )
            continue;
          v29 = buffer + 2;
          input->buffer_ = v29;
parse_dd_ability_index:
          if ( v29 >= i || ((v31 = *v29) & 0x80u) != 0 )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v81);
            if ( !result )
              return result;
            v31 = v81[0];
          }
          else
          {
            input->buffer_ = v29 + 1;
          }
          *(this + 4) |= 0x8000000u;
          *(this + 44) = v31;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xEA || buffer[1] != 1 )
            continue;
          v8 = (buffer + 2);
          input->buffer_ = v8;
parse_illusion_label:
          *(this + 4) |= 0x10000000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 19), v8) == 0 )
            return 0;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xF0 || buffer[1] != 1 )
            continue;
          v30 = buffer + 2;
          input->buffer_ = v30;
parse_active:
          if ( i <= v30 || ((v37 = *v30) & 0x80u) != 0LL )
          {
            result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input, v81);
            if ( !result )
              return result;
            v37 = *v81;
          }
          else
          {
            input->buffer_ = v30 + 1;
          }
          *(this + 134) = v37 != 0;
          *(this + 4) |= 0x20000000u;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0xFA || buffer[1] != 1 )
            continue;
          v8 = (buffer + 2);
          input->buffer_ = v8;
parse_player_ids:
          *(this + 4) |= 0x40000000u;
          if ( google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 20), v8) == 0 )
            return 0;
          i = input->buffer_end_;
          buffer = input->buffer_;
          if ( LODWORD(input->buffer_end_) - buffer <= 1 || *buffer != 0x82 || buffer[1] != 2 )
            continue;
          v8 = (buffer + 2);
          input->buffer_ = v8;
parse_lua_name:
          *(this + 4) |= 0x80000000;
          result = google::protobuf::internal::WireFormatLite::ReadString(input, *(this + 21), v8);
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
        case 2u:
          if ( v7 != 16 )
            goto handle_unusual;
          v49 = input->buffer_;
          i = input->buffer_end_;
          goto parse_parent;
        case 3u:
          if ( v7 != 24 )
            goto handle_unusual;
          v47 = input->buffer_;
          i = input->buffer_end_;
          goto parse_index;
        case 4u:
          if ( v7 != 32 )
            goto handle_unusual;
          v45 = input->buffer_;
          i = input->buffer_end_;
          goto parse_serial_num;
        case 5u:
          if ( v7 != 40 )
            goto handle_unusual;
          v43 = input->buffer_;
          i = input->buffer_end_;
          goto parse_modifier_class;
        case 6u:
          if ( v7 != 48 )
            goto handle_unusual;
          v41 = input->buffer_;
          i = input->buffer_end_;
          goto parse_ability_level;
        case 7u:
          if ( v7 != 56 )
            goto handle_unusual;
          v38 = input->buffer_;
          i = input->buffer_end_;
          goto parse_stack_count;
        case 8u:
          if ( v7 != 69 )
            goto handle_unusual;
          v40 = input->buffer_;
          i = input->buffer_end_;
          goto parse_creation_time;
        case 9u:
          if ( v7 != 77 )
            goto handle_unusual;
          v59 = input->buffer_;
          i = input->buffer_end_;
          goto parse_duration;
        case 0xAu:
          if ( v7 != 80 )
            goto handle_unusual;
          v57 = input->buffer_;
          i = input->buffer_end_;
          goto parse_caster;
        case 0xBu:
          if ( v7 != 88 )
            goto handle_unusual;
          v54 = input->buffer_;
          i = input->buffer_end_;
          goto parse_ability;
        case 0xCu:
          if ( v7 != 96 )
            goto handle_unusual;
          v56 = input->buffer_;
          i = input->buffer_end_;
          goto parse_armor;
        case 0xDu:
          if ( v7 != 109 )
            goto handle_unusual;
          v64 = input->buffer_;
          i = input->buffer_end_;
          goto parse_fade_time;
        case 0xEu:
          if ( v7 != 112 )
            goto handle_unusual;
          v67 = input->buffer_;
          i = input->buffer_end_;
          goto parse_subtle;
        case 0xFu:
          if ( v7 != 125 )
            goto handle_unusual;
          v11 = input->buffer_;
          i = input->buffer_end_;
          goto parse_channel_time;
        case 0x10u:
          if ( v7 != 130 )
            goto handle_unusual;
          goto parse_v_start;
        case 0x11u:
          if ( v7 != 138 )
            goto handle_unusual;
          goto parse_v_end;
        case 0x12u:
          if ( v7 != 146 )
            goto handle_unusual;
          goto parse_portal_loop_appear;
        case 0x13u:
          if ( v7 != 154 )
            goto handle_unusual;
          goto parse_portal_loop_disappear;
        case 0x14u:
          if ( v7 != 162 )
            goto handle_unusual;
          goto parse_hero_loop_appear;
        case 0x15u:
          if ( v7 != 170 )
            goto handle_unusual;
          goto parse_hero_loop_disappear;
        case 0x16u:
          if ( v7 != 176 )
            goto handle_unusual;
          v25 = input->buffer_;
          i = input->buffer_end_;
          goto parse_movement_speed;
        case 0x17u:
          if ( v7 != 184 )
            goto handle_unusual;
          v22 = input->buffer_;
          i = input->buffer_end_;
          goto parse_aura;
        case 0x18u:
          if ( v7 != 192 )
            goto handle_unusual;
          v24 = input->buffer_;
          i = input->buffer_end_;
          goto parse_activity;
        case 0x19u:
          if ( v7 != 200 )
            goto handle_unusual;
          v32 = input->buffer_;
          i = input->buffer_end_;
          goto parse_damage;
        case 0x1Au:
          if ( v7 != 208 )
            goto handle_unusual;
          v34 = input->buffer_;
          i = input->buffer_end_;
          goto parse_range;
        case 0x1Bu:
          if ( v7 != 216 )
            goto handle_unusual;
          v27 = input->buffer_;
          i = input->buffer_end_;
          goto parse_dd_modifier_index;
        case 0x1Cu:
          if ( v7 != 224 )
            goto handle_unusual;
          v29 = input->buffer_;
          i = input->buffer_end_;
          goto parse_dd_ability_index;
        case 0x1Du:
          if ( v7 != 234 )
            goto handle_unusual;
          goto parse_illusion_label;
        case 0x1Eu:
          if ( v7 != 240 )
            goto handle_unusual;
          v30 = input->buffer_;
          i = input->buffer_end_;
          goto parse_active;
        case 0x1Fu:
          if ( v7 != 250 )
            goto handle_unusual;
          goto parse_player_ids;
        case 0x20u:
          if ( v7 != 258 )
            goto handle_unusual;
          goto parse_lua_name;
        default:
          goto handle_unusual;
      }
    }
    if ( i > (buffer + 1) && (*buffer & ~buffer[1]) > 0x7Fu )
    {
      i = (buffer[1] << 7);
      v8 = (buffer + 2);
      v7 = (v7 + i - 128);
      input->buffer_ = v8;
      input->last_tag_ = v7;
      goto LABEL_5;
    }
LABEL_6:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input);
    v7 = TagFallback;
    input->last_tag_ = TagFallback;
    if ( TagFallback - 1 <= 0x3FFE )
      goto LABEL_5;
handle_unusual:
    if ( v7 == 0 || (v7 & 7) == 4 )
      break;
    if ( google::protobuf::internal::WireFormat::SkipField(input, v7, v3, i) == 0 )
      return 0;
    buffer = input->buffer_;
  }
  return 1;
}


// CDOTAModifierBuffTableEntry::SerializeWithCachedSizes  (line 922, @0x0000000001d659c0, libserver.so)  // inlines: empty, v_end, v_start
// calls: google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(int,google::protobuf::MessageLite const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteFloat(int,float,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteBool(int,bool,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteEnum(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
// globals: CDOTAModifierBuffTableEntry::default_instance_
void __fastcall CDOTAModifierBuffTableEntry::SerializeWithCachedSizes(
        const CDOTAModifierBuffTableEntry *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::io::CodedOutputStream *v2; // rdx
  google::protobuf::io::CodedOutputStream *v3; // rcx
  int v6; // eax
  google::protobuf::Descriptor *nested_types; // rsi
  __int64 v8; // rsi
  _QWORD *v9; // rax

  v6 = *(this + 4);
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteEnum(&loc_0 + 1, *(this + 6), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 2) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2, *(this + 7), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 4) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 1, *(this + 8), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 8) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 2, *(this + 9), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x10) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_2 + 3, *(this + 10), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x20) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_6, *(this + 11), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x40) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&loc_6 + 1, *(this + 12), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x80u) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&stru_8, output, *(this + 13), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x100) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&stru_9, output, *(this + 14), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x200) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&stru_A, *(this + 15), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x400) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&stru_B, *(this + 16), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x800) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(&stru_C, *(this + 17), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x1000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&stru_D, output, *(this + 18), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x2000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(&stru_E, *(this + 132), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x4000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteFloat(&stru_F, output, *(this + 19), v2);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x8000) != 0 )
  {
    nested_types = *(this + 10);
    if ( nested_types == 0 )
      nested_types = CDOTAModifierBuffTableEntry::default_instance_->nested_types_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(&stru_10, nested_types, output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x10000) != 0 )
  {
    v8 = *(this + 11);
    if ( v8 == 0 )
      v8 = *&CDOTAModifierBuffTableEntry::default_instance_->enum_type_count_;
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 1,
      v8,
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x20000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 2,
      *(this + 12),
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x40000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 3,
      *(this + 13),
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x80000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 4,
      *(this + 14),
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x100000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 5,
      *(this + 15),
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x200000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 6,
      *(this + 32),
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x400000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(
      &stru_10.CThreadLockableObject<CThreadNullMutex> + 7,
      *(this + 133),
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x800000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(stru_10.m_pIdentityChunks, *(this + 34), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x1000000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(stru_10.m_pIdentityChunks + 1, *(this + 35), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x2000000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(stru_10.m_pIdentityChunks + 2, *(this + 36), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x4000000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(stru_10.m_pIdentityChunks + 3, *(this + 37), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x8000000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteInt32(stru_10.m_pIdentityChunks + 4, *(this + 44), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x10000000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      stru_10.m_pIdentityChunks + 5,
      *(this + 19),
      output,
      v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x20000000) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(stru_10.m_pIdentityChunks + 6, *(this + 134), output, v3);
    v6 = *(this + 4);
  }
  if ( (v6 & 0x40000000) == 0 )
  {
    if ( v6 >= 0 )
      goto LABEL_67;
LABEL_71:
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      &stru_10.m_pIdentityChunks[1],
      *(this + 21),
      output,
      v3);
    v9 = *(this + 1);
    if ( v9 == 0 )
      return;
    goto LABEL_68;
  }
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
    stru_10.m_pIdentityChunks + 7,
    *(this + 20),
    output,
    v3);
  if ( *(this + 4) < 0 )
    goto LABEL_71;
LABEL_67:
  v9 = *(this + 1);
  if ( v9 == 0 )
    return;
LABEL_68:
  if ( v9[1] != *v9 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(this + 8, output, v2);
}


// CDOTAModifierBuffTableEntry::SerializeWithCachedSizesToArray  (line 1130, @0x0000000001d694a0, libserver.so)  // inlines: GetCachedSize, WriteBoolNoTagToArray, WriteBoolToArray, WriteEnumNoTagToArray, WriteEnumToArray, WriteFloatNoTagToArray, WriteFloatToArray, WriteInt32NoTagToArray, WriteInt32ToArray, WriteLittleEndian32ToArray, WriteMessageNoVirtualToArray<CMsgVector>, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty, memcpy, v_end, v_start
// calls: CMsgVector::SerializeWithCachedSizesToArray, google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: CDOTA_Buff::SendBuffCreationToClients, CDOTA_Buff::SendBuffRemovalToClients, CDOTA_Buff::SendBuffRefreshToClients
// globals: CDOTAModifierBuffTableEntry::default_instance_
google::protobuf::uint8 *__fastcall CDOTAModifierBuffTableEntry::SerializeWithCachedSizesToArray(
        const CDOTAModifierBuffTableEntry *const this,
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
  google::protobuf::io::CodedOutputStream *v11; // rdi
  google::protobuf::uint8 *v12; // rsi
  google::protobuf::io::CodedOutputStream *v13; // rdi
  google::protobuf::uint8 *v14; // rsi
  google::protobuf::io::CodedOutputStream *v15; // rdi
  google::protobuf::uint8 *v16; // rsi
  google::protobuf::io::CodedOutputStream *v17; // rdi
  google::protobuf::uint8 *v18; // rsi
  int v19; // edx
  int v20; // edx
  google::protobuf::io::CodedOutputStream *v21; // rdi
  google::protobuf::uint8 *v22; // rsi
  google::protobuf::io::CodedOutputStream *v23; // rdi
  google::protobuf::uint8 *v24; // rsi
  google::protobuf::io::CodedOutputStream *v25; // rdi
  google::protobuf::uint8 *v26; // rsi
  int v27; // edx
  google::protobuf::uint8 v28; // dl
  int v29; // edx
  unsigned int *nested_types; // r12
  google::protobuf::io::CodedOutputStream *v31; // rdi
  google::protobuf::uint8 *v32; // rsi
  unsigned int *v33; // r12
  google::protobuf::io::CodedOutputStream *v34; // rdi
  google::protobuf::uint8 *v35; // rsi
  google::protobuf::io::CodedOutputStream *v36; // rdi
  google::protobuf::io::CodedOutputStream *v37; // rdi
  google::protobuf::io::CodedOutputStream *v38; // rdi
  google::protobuf::io::CodedOutputStream *v39; // rdi
  google::protobuf::io::CodedOutputStream *v40; // rdi
  google::protobuf::uint8 *v41; // rsi
  google::protobuf::uint8 v42; // dl
  google::protobuf::io::CodedOutputStream *v43; // rdi
  google::protobuf::uint8 *v44; // rsi
  google::protobuf::io::CodedOutputStream *v45; // rdi
  google::protobuf::uint8 *v46; // rsi
  google::protobuf::io::CodedOutputStream *v47; // rdi
  google::protobuf::uint8 *v48; // rsi
  google::protobuf::io::CodedOutputStream *v49; // rdi
  google::protobuf::uint8 *v50; // rsi
  google::protobuf::io::CodedOutputStream *v51; // rdi
  google::protobuf::uint8 *v52; // rsi
  google::protobuf::io::CodedOutputStream *v53; // rdi
  google::protobuf::uint8 v54; // dl
  google::protobuf::io::CodedOutputStream *v55; // rdi
  __int64 v56; // rdx
  google::protobuf::io::CodedOutputStream *v57; // rdi

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
    v4 = *(this + 4);
  }
  if ( (v4 & 8) != 0 )
  {
    v11 = *(this + 9);
    v12 = result + 1;
    *result = 32;
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
  if ( (v4 & 0x10) != 0 )
  {
    v13 = *(this + 10);
    v14 = result + 1;
    *result = 40;
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
  if ( (v4 & 0x20) != 0 )
  {
    v15 = *(this + 11);
    v16 = result + 1;
    *result = 48;
    if ( v15 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v15, v16, v4);
    }
    else if ( v15 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v15, v16, v4);
    }
    else
    {
      result[1] = v15;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x40) != 0 )
  {
    v17 = *(this + 12);
    v18 = result + 1;
    *result = 56;
    if ( v17 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v17, v18, v4);
    }
    else if ( v17 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v17, v18, v4);
    }
    else
    {
      result[1] = v17;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( v4 < 0 )
  {
    v19 = *(this + 13);
    *result = 69;
    result += 5;
    *(result - 1) = v19;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 1) != 0 )
  {
    v20 = *(this + 14);
    *result = 77;
    result += 5;
    *(result - 1) = v20;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 2) != 0 )
  {
    v21 = *(this + 15);
    v22 = result + 1;
    *result = 80;
    if ( v21 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v21, v22, v4);
    }
    else if ( v21 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v21, v22, v4);
    }
    else
    {
      result[1] = v21;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 4) != 0 )
  {
    v23 = *(this + 16);
    v24 = result + 1;
    *result = 88;
    if ( v23 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v23, v24, v4);
    }
    else if ( v23 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v23, v24, v4);
    }
    else
    {
      result[1] = v23;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 8) != 0 )
  {
    v25 = *(this + 17);
    v26 = result + 1;
    *result = 96;
    if ( v25 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v25, v26, v4);
    }
    else if ( v25 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v25, v26, v4);
    }
    else
    {
      result[1] = v25;
      result += 2;
    }
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x10) != 0 )
  {
    v27 = *(this + 18);
    *result = 109;
    result += 5;
    *(result - 1) = v27;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x20) != 0 )
  {
    v28 = *(this + 132);
    *result = 112;
    result += 2;
    *(result - 1) = v28;
    v4 = *(this + 4);
  }
  if ( (BYTE1(v4) & 0x40) != 0 )
  {
    v29 = *(this + 19);
    *result = 125;
    result += 5;
    *(result - 1) = v29;
    v4 = *(this + 4);
  }
  if ( SBYTE1(v4) < 0 )
  {
    nested_types = *(this + 10);
    if ( nested_types == 0 )
    {
      v4 = CDOTAModifierBuffTableEntry::default_instance_;
      nested_types = CDOTAModifierBuffTableEntry::default_instance_->nested_types_;
    }
    *result = -126;
    result[1] = 1;
    v31 = nested_types[5];
    if ( v31 > 0x7F )
    {
      v32 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v31, result + 2, v4);
    }
    else
    {
      result[2] = v31;
      v32 = result + 3;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(nested_types, v32);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10000) != 0 )
  {
    v33 = *(this + 11);
    if ( v33 == 0 )
    {
      v4 = CDOTAModifierBuffTableEntry::default_instance_;
      v33 = *&CDOTAModifierBuffTableEntry::default_instance_->enum_type_count_;
    }
    *result = -118;
    result[1] = 1;
    v34 = v33[5];
    if ( v34 > 0x7F )
    {
      v35 = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v34, result + 2, v4);
    }
    else
    {
      result[2] = v34;
      v35 = result + 3;
    }
    result = CMsgVector::SerializeWithCachedSizesToArray(v33, v35);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20000) != 0 )
  {
    v36 = *(this + 12);
    *result = -110;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v36, (result + 2), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x40000) != 0 )
  {
    v37 = *(this + 13);
    *result = -102;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v37, (result + 2), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x80000) != 0 )
  {
    v38 = *(this + 14);
    *result = -94;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v38, (result + 2), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x100000) != 0 )
  {
    v39 = *(this + 15);
    *result = -86;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v39, (result + 2), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x200000) != 0 )
  {
    v40 = *(this + 32);
    v41 = result + 2;
    *result = -80;
    result[1] = 1;
    if ( v40 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v40, v41, v4);
    }
    else if ( v40 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v40, v41, v4);
    }
    else
    {
      result[2] = v40;
      result += 3;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x400000) != 0 )
  {
    v42 = *(this + 133);
    *result = -72;
    result += 3;
    *(result - 2) = 1;
    *(result - 1) = v42;
    v4 = *(this + 4);
  }
  if ( (v4 & 0x800000) != 0 )
  {
    v43 = *(this + 34);
    v44 = result + 2;
    *result = -64;
    result[1] = 1;
    if ( v43 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v43, v44, v4);
    }
    else if ( v43 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v43, v44, v4);
    }
    else
    {
      result[2] = v43;
      result += 3;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x1000000) != 0 )
  {
    v45 = *(this + 35);
    v46 = result + 2;
    *result = -56;
    result[1] = 1;
    if ( v45 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v45, v46, v4);
    }
    else if ( v45 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v45, v46, v4);
    }
    else
    {
      result[2] = v45;
      result += 3;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x2000000) != 0 )
  {
    v47 = *(this + 36);
    v48 = result + 2;
    *result = -48;
    result[1] = 1;
    if ( v47 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v47, v48, v4);
    }
    else if ( v47 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v47, v48, v4);
    }
    else
    {
      result[2] = v47;
      result += 3;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x4000000) != 0 )
  {
    v49 = *(this + 37);
    v50 = result + 2;
    *result = -40;
    result[1] = 1;
    if ( v49 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v49, v50, v4);
    }
    else if ( v49 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v49, v50, v4);
    }
    else
    {
      result[2] = v49;
      result += 3;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x8000000) != 0 )
  {
    v51 = *(this + 44);
    v52 = result + 2;
    *result = -32;
    result[1] = 1;
    if ( v51 < 0 )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(v51, v52, v4);
    }
    else if ( v51 > 0x7F )
    {
      result = google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(v51, v52, v4);
    }
    else
    {
      result[2] = v51;
      result += 3;
    }
    v4 = *(this + 4);
  }
  if ( (v4 & 0x10000000) != 0 )
  {
    v53 = *(this + 19);
    *result = -22;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v53, (result + 2), v4);
    v4 = *(this + 4);
  }
  if ( (v4 & 0x20000000) != 0 )
  {
    v54 = *(this + 134);
    *result = -16;
    result += 3;
    *(result - 2) = 1;
    *(result - 1) = v54;
    v4 = *(this + 4);
  }
  if ( (v4 & 0x40000000) != 0 )
  {
    v55 = *(this + 20);
    *result = -6;
    result[1] = 1;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v55, (result + 2), v4);
    v4 = *(this + 4);
  }
  if ( v4 < 0 )
  {
    v57 = *(this + 21);
    *result = -126;
    result[1] = 2;
    result = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v57, (result + 2), v4);
  }
  v56 = *(this + 1);
  if ( v56 != 0 && *(v56 + 8) != *v56 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(this + 8, result, v56);
  return result;
}


// CDOTAModifierBuffTableEntry::ByteSize  (line 1348, @0x0000000001d69c40, libserver.so)  // inlines: EnumSize, Int32Size, LengthDelimitedSize, MessageSizeNoVirtual<CMsgVector>, StringSize, VarintSize32, VarintSize32SignExtended, empty, size, v_end, v_start
// calls: CMsgVector::ByteSize, google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: CDOTA_Buff::SendBuffCreationToClients, CDOTA_Buff::SendBuffRemovalToClients, CDOTA_Buff::SendBuffRefreshToClients
// globals: CDOTAModifierBuffTableEntry::default_instance_
int __fastcall CDOTAModifierBuffTableEntry::ByteSize(const CDOTAModifierBuffTableEntry *const this)
{
  unsigned int v1; // esi
  int v3; // ebx
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
  google::protobuf::Descriptor *nested_types; // rdi
  unsigned int v23; // r13d
  int v24; // eax
  const CMsgVector *v25; // rdi
  unsigned int v26; // r13d
  int v27; // eax
  google::protobuf::io::CodedOutputStream *v28; // rdi
  int v29; // eax
  google::protobuf::io::CodedOutputStream *v30; // rdi
  int v31; // eax
  google::protobuf::io::CodedOutputStream *v32; // rdi
  int v33; // eax
  google::protobuf::io::CodedOutputStream *v34; // rdi
  int v35; // eax
  google::protobuf::io::CodedOutputStream *v36; // rdi
  int v37; // eax
  __int64 v38; // rax
  google::protobuf::io::CodedOutputStream *v40; // rdi
  int v41; // eax
  google::protobuf::io::CodedOutputStream *v42; // rdi
  int v43; // eax
  _QWORD *v44; // r13
  google::protobuf::io::CodedOutputStream *v45; // rdi
  int v46; // eax
  int v47; // ecx
  _QWORD *v48; // r13
  google::protobuf::io::CodedOutputStream *v49; // rdi
  int v50; // eax
  int v51; // ecx
  _QWORD *v52; // r13
  google::protobuf::io::CodedOutputStream *v53; // rdi
  int v54; // eax
  int v55; // ecx
  _QWORD *v56; // r13
  google::protobuf::io::CodedOutputStream *v57; // rdi
  int v58; // eax
  int v59; // ecx
  _QWORD *v60; // r13
  google::protobuf::io::CodedOutputStream *v61; // rdi
  int v62; // eax
  int v63; // ecx
  _QWORD *v64; // r13
  google::protobuf::io::CodedOutputStream *v65; // rdi
  int v66; // eax
  int v67; // ecx
  _QWORD *v68; // r13
  google::protobuf::io::CodedOutputStream *v69; // rdi
  int v70; // eax
  int v71; // edx
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
  int v85; // eax
  int v86; // eax
  int v87; // eax

  v3 = 0;
  v4 = *(this + 4);
  if ( v4 != 0 )
  {
    v3 = 0;
    if ( (v4 & 1) != 0 )
    {
      v5 = *(this + 6);
      v3 = 11;
      if ( v5 >= 0 )
      {
        v3 = 2;
        if ( v5 > 0x7F )
        {
          v78 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, v1);
          v4 = *(this + 4);
          v3 = v78 + 1;
        }
      }
    }
    if ( (v4 & 2) != 0 )
    {
      v6 = *(this + 7);
      v7 = 11;
      if ( v6 >= 0 && (LOBYTE(v7) = 2, v6 > 0x7F) )
      {
        v87 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, v1);
        v4 = *(this + 4);
        v3 += v87 + 1;
      }
      else
      {
        v3 += v7;
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v8 = *(this + 8);
      v9 = 11;
      if ( v8 >= 0 && (LOBYTE(v9) = 2, v8 > 0x7F) )
      {
        v83 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, v1);
        v4 = *(this + 4);
        v3 += v83 + 1;
      }
      else
      {
        v3 += v9;
      }
    }
    if ( (v4 & 8) != 0 )
    {
      v10 = *(this + 9);
      v11 = 11;
      if ( v10 >= 0 && (LOBYTE(v11) = 2, v10 > 0x7F) )
      {
        v86 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, v1);
        v4 = *(this + 4);
        v3 += v86 + 1;
      }
      else
      {
        v3 += v11;
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v12 = *(this + 10);
      v13 = 11;
      if ( v12 >= 0 && (LOBYTE(v13) = 2, v12 > 0x7F) )
      {
        v76 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v12, v1);
        v4 = *(this + 4);
        v3 += v76 + 1;
      }
      else
      {
        v3 += v13;
      }
    }
    if ( (v4 & 0x20) != 0 )
    {
      v14 = *(this + 11);
      v15 = 11;
      if ( v14 >= 0 && (LOBYTE(v15) = 2, v14 > 0x7F) )
      {
        v82 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, v1);
        v4 = *(this + 4);
        v3 += v82 + 1;
      }
      else
      {
        v3 += v15;
      }
    }
    if ( (v4 & 0x40) != 0 )
    {
      v42 = *(this + 12);
      v43 = 11;
      if ( v42 >= 0 && (LOBYTE(v43) = 2, v42 > 0x7F) )
      {
        v80 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v42, v1);
        v4 = *(this + 4);
        v3 += v80 + 1;
      }
      else
      {
        v3 += v43;
      }
    }
    if ( (v4 & 0x80u) != 0 )
      v3 += 5;
  }
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
      v3 += 5;
    if ( (v4 & 0x200) != 0 )
    {
      v16 = *(this + 15);
      v17 = 11;
      if ( v16 >= 0 && (LOBYTE(v17) = 2, v16 > 0x7F) )
      {
        v81 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v16, v1);
        v4 = *(this + 4);
        v3 += v81 + 1;
      }
      else
      {
        v3 += v17;
      }
    }
    if ( (v4 & 0x400) != 0 )
    {
      v18 = *(this + 16);
      v19 = 11;
      if ( v18 >= 0 && (LOBYTE(v19) = 2, v18 > 0x7F) )
      {
        v77 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v18, v1);
        v4 = *(this + 4);
        v3 += v77 + 1;
      }
      else
      {
        v3 += v19;
      }
    }
    if ( (v4 & 0x800) != 0 )
    {
      v20 = *(this + 17);
      v21 = 11;
      if ( v20 >= 0 && (LOBYTE(v21) = 2, v20 > 0x7F) )
      {
        v79 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, v1);
        v4 = *(this + 4);
        v3 += v79 + 1;
      }
      else
      {
        v3 += v21;
      }
    }
    if ( (v4 & 0x1000) != 0 )
      v3 += 5;
    if ( (v4 & 0x2000) != 0 )
      v3 += 2;
    if ( (v4 & 0x4000) != 0 )
      v3 += 5;
    if ( (v4 & 0x8000) != 0 )
    {
      nested_types = *(this + 10);
      if ( nested_types == 0 )
        nested_types = CDOTAModifierBuffTableEntry::default_instance_->nested_types_;
      v23 = CMsgVector::ByteSize(nested_types);
      v24 = 1;
      if ( v23 > 0x7F )
        v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v23, v1);
      v4 = *(this + 4);
      v3 += v23 + v24 + 2;
    }
  }
  if ( (v4 & 0xFF0000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v25 = *(this + 11);
      if ( v25 == 0 )
        v25 = *&CDOTAModifierBuffTableEntry::default_instance_->enum_type_count_;
      v26 = CMsgVector::ByteSize(v25);
      v27 = 1;
      if ( v26 > 0x7F )
        v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v26, v1);
      v4 = *(this + 4);
      v3 += v26 + v27 + 2;
    }
    if ( (v4 & 0x20000) != 0 )
    {
      v44 = *(this + 12);
      v45 = *(*v44 - 24LL);
      v46 = 1;
      v47 = v45;
      if ( v45 > 0x7F )
      {
        v46 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v45, v1);
        v47 = *(*v44 - 24LL);
        v4 = *(this + 4);
      }
      v3 += v46 + v47 + 2;
      if ( (v4 & 0x40000) == 0 )
      {
LABEL_65:
        if ( (v4 & 0x80000) == 0 )
          goto LABEL_66;
        goto LABEL_117;
      }
    }
    else if ( (v4 & 0x40000) == 0 )
    {
      goto LABEL_65;
    }
    v52 = *(this + 13);
    v53 = *(*v52 - 24LL);
    v54 = 1;
    v55 = v53;
    if ( v53 > 0x7F )
    {
      v54 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v53, v1);
      v55 = *(*v52 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v54 + v55 + 2;
    if ( (v4 & 0x80000) == 0 )
    {
LABEL_66:
      if ( (v4 & 0x100000) == 0 )
        goto LABEL_67;
      goto LABEL_110;
    }
LABEL_117:
    v56 = *(this + 14);
    v57 = *(*v56 - 24LL);
    v58 = 1;
    v59 = v57;
    if ( v57 > 0x7F )
    {
      v58 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v57, v1);
      v59 = *(*v56 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v58 + v59 + 2;
    if ( (v4 & 0x100000) == 0 )
    {
LABEL_67:
      if ( (v4 & 0x200000) == 0 )
      {
LABEL_71:
        if ( (v4 & 0x400000) != 0 )
          v3 += 3;
        if ( (v4 & 0x800000) != 0 )
        {
          v40 = *(this + 34);
          v41 = 12;
          if ( v40 >= 0 && (LOBYTE(v41) = 3, v40 > 0x7F) )
          {
            v75 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v40, v1);
            v4 = *(this + 4);
            v3 += v75 + 2;
          }
          else
          {
            v3 += v41;
          }
        }
        goto LABEL_74;
      }
LABEL_68:
      v28 = *(this + 32);
      v29 = 12;
      if ( v28 >= 0 && (LOBYTE(v29) = 3, v28 > 0x7F) )
      {
        v72 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v28, v1);
        v4 = *(this + 4);
        v3 += v72 + 2;
      }
      else
      {
        v3 += v29;
      }
      goto LABEL_71;
    }
LABEL_110:
    v48 = *(this + 15);
    v49 = *(*v48 - 24LL);
    v50 = 1;
    v51 = v49;
    if ( v49 > 0x7F )
    {
      v50 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v49, v1);
      v51 = *(*v48 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v50 + v51 + 2;
    if ( (v4 & 0x200000) == 0 )
      goto LABEL_71;
    goto LABEL_68;
  }
LABEL_74:
  if ( (v4 & 0xFF000000) == 0 )
    goto LABEL_96;
  if ( (v4 & 0x1000000) != 0 )
  {
    v30 = *(this + 35);
    v31 = 12;
    if ( v30 >= 0 && (LOBYTE(v31) = 3, v30 > 0x7F) )
    {
      v73 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v30, v1);
      v4 = *(this + 4);
      v3 += v73 + 2;
    }
    else
    {
      v3 += v31;
    }
  }
  if ( (v4 & 0x2000000) != 0 )
  {
    v32 = *(this + 36);
    v33 = 12;
    if ( v32 >= 0 && (LOBYTE(v33) = 3, v32 > 0x7F) )
    {
      v74 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v32, v1);
      v4 = *(this + 4);
      v3 += v74 + 2;
    }
    else
    {
      v3 += v33;
    }
  }
  if ( (v4 & 0x4000000) != 0 )
  {
    v34 = *(this + 37);
    v35 = 12;
    if ( v34 >= 0 && (LOBYTE(v35) = 3, v34 > 0x7F) )
    {
      v85 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v34, v1);
      v4 = *(this + 4);
      v3 += v85 + 2;
    }
    else
    {
      v3 += v35;
    }
  }
  if ( (v4 & 0x8000000) != 0 )
  {
    v36 = *(this + 44);
    v37 = 12;
    if ( v36 >= 0 && (LOBYTE(v37) = 3, v36 > 0x7F) )
    {
      v84 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v36, v1);
      v4 = *(this + 4);
      v3 += v84 + 2;
    }
    else
    {
      v3 += v37;
    }
  }
  if ( (v4 & 0x10000000) != 0 )
  {
    v60 = *(this + 19);
    v61 = *(*v60 - 24LL);
    v62 = 1;
    v63 = v61;
    if ( v61 > 0x7F )
    {
      v62 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v61, v1);
      v63 = *(*v60 - 24LL);
      v4 = *(this + 4);
    }
    v3 += v62 + v63 + 2;
  }
  if ( (v4 & 0x20000000) != 0 )
    v3 += 3;
  if ( (v4 & 0x40000000) == 0 )
  {
    if ( v4 >= 0 )
      goto LABEL_96;
    goto LABEL_127;
  }
  v64 = *(this + 20);
  v65 = *(*v64 - 24LL);
  v66 = 1;
  v67 = v65;
  if ( v65 > 0x7F )
  {
    v66 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v65, v1);
    v67 = *(*v64 - 24LL);
    v4 = *(this + 4);
  }
  v3 += v66 + v67 + 2;
  if ( v4 < 0 )
  {
LABEL_127:
    v68 = *(this + 21);
    v69 = *(*v68 - 24LL);
    v70 = 1;
    v71 = v69;
    if ( v69 > 0x7F )
    {
      v70 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v69, v1);
      v71 = *(*v68 - 24LL);
    }
    v3 += v70 + v71 + 2;
  }
LABEL_96:
  v38 = *(this + 1);
  if ( v38 != 0 && *(v38 + 8) != *v38 )
    v3 += google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(this + 8, *v38);
  *(this + 5) = v3;
  return v3;
}


// CDOTAModifierBuffTableEntry::MergeFrom  (line 1579, @0x0000000001d67220, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTAModifierBuffTableEntry*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTAModifierBuffTableEntry::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTAModifierBuffTableEntry
void __fastcall CDOTAModifierBuffTableEntry::MergeFrom(
        CDOTAModifierBuffTableEntry *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTAModifierBuffTableEntry *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc",
      1580);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(
               from,
               &`typeinfo for'google::protobuf::Message,
               &`typeinfo for'CDOTAModifierBuffTableEntry,
               0)) != 0 )
  {
    CDOTAModifierBuffTableEntry::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTAModifierBuffTableEntry::MergeFrom  (line 1591, @0x0000000001d66be0, libserver.so)  // inlines: mutable_v_end, mutable_v_start, set_ability, set_ability_level, set_active, set_activity, set_armor, set_aura, set_caster, set_channel_time, set_creation_time, set_damage, set_dd_ability_index, set_dd_modifier_index, set_duration, set_entry_type, set_fade_time, set_has_ability, set_has_ability_level, set_has_active, set_has_activity, set_has_armor, set_has_aura, set_has_caster, set_has_channel_time, set_has_creation_time, set_has_damage, set_has_dd_ability_index, set_has_dd_modifier_index, set_has_duration, set_has_entry_type, set_has_fade_time, set_has_hero_loop_appear, set_has_hero_loop_disappear, set_has_illusion_label, set_has_index, set_has_lua_name, set_has_modifier_class, set_has_movement_speed, set_has_parent, set_has_player_ids, set_has_portal_loop_appear, set_has_portal_loop_disappear, set_has_range, set_has_serial_num, set_has_stack_count, set_has_subtle, set_has_v_end, set_has_v_start, set_hero_loop_appear, set_hero_loop_disappear, set_illusion_label, set_index, set_lua_name, set_modifier_class, set_movement_speed, set_parent, set_player_ids, set_portal_loop_appear, set_portal_loop_disappear, set_range, set_serial_num, set_stack_count, set_subtle, v_end, v_start
// calls: CMsgVector::MergeFrom, google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), operator new, CMsgVector::CMsgVector, _Unwind_Resume, operator delete
// callers: CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry, CDOTAModifierBuffTableEntry::MergeFrom, CDOTAModifierBuffTableEntry::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc", "CHECK failed: (&from) != (this): "
// globals: CDOTAModifierBuffTableEntry::default_instance_
void __fastcall CDOTAModifierBuffTableEntry::MergeFrom(
        CDOTAModifierBuffTableEntry *const this,
        const CDOTAModifierBuffTableEntry *const from)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // xmm0_4
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // xmm0_4
  char v17; // al
  int v18; // xmm0_4
  google::protobuf::Descriptor *nested_types; // r13
  CMsgVector *v20; // rdi
  const CMsgVector *v21; // r13
  CMsgVector *v22; // rdi
  int v23; // eax
  char v24; // al
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char v29; // al
  int v30; // eax
  int v31; // xmm0_4
  const std::string *v32; // rsi
  std::string *v33; // rdi
  const std::string *v34; // rsi
  std::string *v35; // rdi
  const std::string *v36; // rsi
  std::string *v37; // rdi
  const std::string *v38; // rsi
  std::string *v39; // rdi
  const std::string *v40; // rsi
  std::string *v41; // rdi
  const std::string *v42; // rsi
  std::string *v43; // rdi
  const std::string *v44; // rsi
  std::string *v45; // rdi
  __int64 v46; // rax
  CMsgVector *v47; // r14
  CMsgVector *v48; // r14
  char v49; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v50; // [rsp+20h] [rbp-40h] BYREF

  if ( from == this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v50,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc",
      1592);
    v46 = google::protobuf::internal::LogMessage::operator<<(&v50, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v49, v46);
    google::protobuf::internal::LogMessage::~LogMessage(&v50);
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
      v4 = *(from + 4);
    }
    if ( (v4 & 0x40) != 0 )
    {
      v11 = *(from + 12);
      *(this + 4) |= 0x40u;
      *(this + 12) = v11;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v31 = *(from + 13);
      *(this + 4) |= 0x80u;
      *(this + 13) = v31;
      v4 = *(from + 4);
    }
  }
  if ( BYTE1(v4) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      v12 = *(from + 14);
      *(this + 4) |= 0x100u;
      *(this + 14) = v12;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x200) != 0 )
    {
      v13 = *(from + 15);
      *(this + 4) |= 0x200u;
      *(this + 15) = v13;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x400) != 0 )
    {
      v14 = *(from + 16);
      *(this + 4) |= 0x400u;
      *(this + 16) = v14;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x800) != 0 )
    {
      v15 = *(from + 17);
      *(this + 4) |= 0x800u;
      *(this + 17) = v15;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x1000) != 0 )
    {
      v16 = *(from + 18);
      *(this + 4) |= 0x1000u;
      *(this + 18) = v16;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x2000) != 0 )
    {
      v17 = *(from + 132);
      *(this + 4) |= 0x2000u;
      *(this + 132) = v17;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x4000) != 0 )
    {
      v18 = *(from + 19);
      *(this + 4) |= 0x4000u;
      *(this + 19) = v18;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x8000) != 0 )
    {
      nested_types = *(from + 10);
      if ( nested_types == 0 )
        nested_types = CDOTAModifierBuffTableEntry::default_instance_->nested_types_;
      v20 = *(this + 10);
      *(this + 4) |= 0x8000u;
      if ( v20 == 0 )
      {
        v47 = operator new(0x28u);
        CMsgVector::CMsgVector(v47);
        *(this + 10) = v47;
        v20 = v47;
      }
      CMsgVector::MergeFrom(v20, nested_types);
      v4 = *(from + 4);
    }
  }
  if ( (v4 & 0xFF0000) != 0 )
  {
    if ( (v4 & 0x10000) != 0 )
    {
      v21 = *(from + 11);
      if ( v21 == 0 )
        v21 = *&CDOTAModifierBuffTableEntry::default_instance_->enum_type_count_;
      v22 = *(this + 11);
      *(this + 4) |= 0x10000u;
      if ( v22 == 0 )
      {
        v48 = operator new(0x28u);
        CMsgVector::CMsgVector(v48);
        *(this + 11) = v48;
        v22 = v48;
      }
      CMsgVector::MergeFrom(v22, v21);
      v4 = *(from + 4);
    }
    if ( (v4 & 0x20000) != 0 )
    {
      v42 = *(from + 12);
      v43 = *(this + 12);
      *(this + 4) |= 0x20000u;
      std::string::assign(v43, v42);
      v4 = *(from + 4);
      if ( (v4 & 0x40000) == 0 )
      {
LABEL_50:
        if ( (v4 & 0x80000) == 0 )
          goto LABEL_51;
        goto LABEL_80;
      }
    }
    else if ( (v4 & 0x40000) == 0 )
    {
      goto LABEL_50;
    }
    v38 = *(from + 13);
    v39 = *(this + 13);
    *(this + 4) |= 0x40000u;
    std::string::assign(v39, v38);
    v4 = *(from + 4);
    if ( (v4 & 0x80000) == 0 )
    {
LABEL_51:
      if ( (v4 & 0x100000) == 0 )
        goto LABEL_52;
      goto LABEL_77;
    }
LABEL_80:
    v40 = *(from + 14);
    v41 = *(this + 14);
    *(this + 4) |= 0x80000u;
    std::string::assign(v41, v40);
    v4 = *(from + 4);
    if ( (v4 & 0x100000) == 0 )
    {
LABEL_52:
      if ( (v4 & 0x200000) == 0 )
      {
LABEL_54:
        if ( (v4 & 0x400000) != 0 )
        {
          v24 = *(from + 133);
          *(this + 4) |= 0x400000u;
          *(this + 133) = v24;
          v4 = *(from + 4);
        }
        if ( (v4 & 0x800000) != 0 )
        {
          v30 = *(from + 34);
          *(this + 4) |= 0x800000u;
          *(this + 34) = v30;
          v4 = *(from + 4);
        }
        goto LABEL_58;
      }
LABEL_53:
      v23 = *(from + 32);
      *(this + 4) |= 0x200000u;
      *(this + 32) = v23;
      v4 = *(from + 4);
      goto LABEL_54;
    }
LABEL_77:
    v36 = *(from + 15);
    v37 = *(this + 15);
    *(this + 4) |= 0x100000u;
    std::string::assign(v37, v36);
    v4 = *(from + 4);
    if ( (v4 & 0x200000) == 0 )
      goto LABEL_54;
    goto LABEL_53;
  }
LABEL_58:
  if ( (v4 & 0xFF000000) != 0 )
  {
    if ( (v4 & 0x1000000) != 0 )
    {
      v25 = *(from + 35);
      *(this + 4) |= 0x1000000u;
      *(this + 35) = v25;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x2000000) != 0 )
    {
      v26 = *(from + 36);
      *(this + 4) |= 0x2000000u;
      *(this + 36) = v26;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x4000000) != 0 )
    {
      v27 = *(from + 37);
      *(this + 4) |= 0x4000000u;
      *(this + 37) = v27;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x8000000) != 0 )
    {
      v28 = *(from + 44);
      *(this + 4) |= 0x8000000u;
      *(this + 44) = v28;
      v4 = *(from + 4);
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      v32 = *(from + 19);
      v33 = *(this + 19);
      *(this + 4) |= 0x10000000u;
      std::string::assign(v33, v32);
      v4 = *(from + 4);
      if ( (v4 & 0x20000000) == 0 )
      {
LABEL_70:
        if ( (v4 & 0x40000000) != 0 )
        {
          v34 = *(from + 20);
          v35 = *(this + 20);
          *(this + 4) |= 0x40000000u;
          std::string::assign(v35, v34);
          if ( *(from + 4) >= 0 )
            goto LABEL_72;
        }
        else if ( v4 >= 0 )
        {
          goto LABEL_72;
        }
        v44 = *(from + 21);
        v45 = *(this + 21);
        *(this + 4) |= 0x80000000;
        std::string::assign(v45, v44);
        goto LABEL_72;
      }
    }
    else if ( (v4 & 0x20000000) == 0 )
    {
      goto LABEL_70;
    }
    v29 = *(from + 134);
    *(this + 4) |= 0x20000000u;
    *(this + 134) = v29;
    v4 = *(from + 4);
    goto LABEL_70;
  }
LABEL_72:
  google::protobuf::UnknownFieldSet::MergeFrom(this + 1, from + 1);
}


// CDOTAModifierBuffTableEntry::CopyFrom  (line 1700, @0x0000000001d65880, libserver.so)
void __fastcall CDOTAModifierBuffTableEntry::CopyFrom(
        CDOTAModifierBuffTableEntry *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTAModifierBuffTableEntry::CopyFrom  (line 1706, @0x0000000001d67300, libserver.so)
// calls: CDOTAModifierBuffTableEntry::MergeFrom
void __fastcall CDOTAModifierBuffTableEntry::CopyFrom(
        CDOTAModifierBuffTableEntry *const this,
        const CDOTAModifierBuffTableEntry *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTAModifierBuffTableEntry::MergeFrom(this, from);
  }
}


// CDOTAModifierBuffTableEntry::IsInitialized  (line 1712, @0x0000000001d658c0, libserver.so)
bool __fastcall CDOTAModifierBuffTableEntry::IsInitialized(const CDOTAModifierBuffTableEntry *const this)
{
  return (*(this + 4) & 0xF) == 15;
}


// CDOTAModifierBuffTableEntry::Swap  (line 1718, @0x0000000001d67340, libserver.so)  // inlines: Swap, swap<CMsgVector*>, swap<bool>, swap<float>, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTAModifierBuffTableEntry::Swap(
        CDOTAModifierBuffTableEntry *const this,
        CDOTAModifierBuffTableEntry *other)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // xmm1_4
  int v10; // xmm1_4
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // xmm0_4
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // xmm1_4
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax

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
    v8 = *(this + 12);
    *(this + 12) = *(other + 12);
    *(other + 12) = v8;
    v9 = *(this + 13);
    *(this + 13) = *(other + 13);
    *(other + 13) = v9;
    v10 = *(this + 14);
    *(this + 14) = *(other + 14);
    v11 = *(other + 15);
    *(other + 14) = v10;
    v12 = *(this + 15);
    *(this + 15) = v11;
    v13 = *(other + 16);
    *(other + 15) = v12;
    v14 = *(this + 16);
    *(this + 16) = v13;
    v15 = *(other + 17);
    *(other + 16) = v14;
    v16 = *(this + 17);
    *(this + 17) = v15;
    v17 = *(other + 18);
    *(other + 17) = v16;
    v18 = *(this + 18);
    *(this + 18) = v17;
    LOBYTE(v15) = *(other + 132);
    *(other + 18) = v18;
    LOBYTE(v16) = *(this + 132);
    *(this + 132) = v15;
    v19 = *(other + 19);
    *(other + 132) = v16;
    v20 = *(this + 19);
    *(this + 19) = v19;
    v21 = *(other + 10);
    *(other + 19) = v20;
    v22 = *(this + 10);
    *(this + 10) = v21;
    v23 = *(other + 11);
    *(other + 10) = v22;
    v24 = *(this + 11);
    *(this + 11) = v23;
    v25 = *(other + 12);
    *(other + 11) = v24;
    v26 = *(this + 12);
    *(this + 12) = v25;
    v27 = *(other + 13);
    *(other + 12) = v26;
    v28 = *(this + 13);
    *(this + 13) = v27;
    v29 = *(other + 14);
    *(other + 13) = v28;
    v30 = *(this + 14);
    *(this + 14) = v29;
    v31 = *(other + 15);
    *(other + 14) = v30;
    v32 = *(this + 15);
    *(this + 15) = v31;
    LODWORD(v31) = *(other + 32);
    *(other + 15) = v32;
    LODWORD(v32) = *(this + 32);
    *(this + 32) = v31;
    LOBYTE(v31) = *(other + 133);
    *(other + 32) = v32;
    LOBYTE(v32) = *(this + 133);
    *(this + 133) = v31;
    LODWORD(v31) = *(other + 34);
    *(other + 133) = v32;
    LODWORD(v32) = *(this + 34);
    *(this + 34) = v31;
    LODWORD(v31) = *(other + 35);
    *(other + 34) = v32;
    LODWORD(v32) = *(this + 35);
    *(this + 35) = v31;
    LODWORD(v31) = *(other + 36);
    *(other + 35) = v32;
    LODWORD(v32) = *(this + 36);
    *(this + 36) = v31;
    LODWORD(v31) = *(other + 37);
    *(other + 36) = v32;
    LODWORD(v32) = *(this + 37);
    *(this + 37) = v31;
    LODWORD(v31) = *(other + 44);
    *(other + 37) = v32;
    LODWORD(v32) = *(this + 44);
    *(this + 44) = v31;
    v33 = *(other + 19);
    *(other + 44) = v32;
    v34 = *(this + 19);
    *(this + 19) = v33;
    LOBYTE(v33) = *(other + 134);
    *(other + 19) = v34;
    LOBYTE(v34) = *(this + 134);
    *(this + 134) = v33;
    v35 = *(other + 20);
    *(other + 134) = v34;
    v36 = *(this + 20);
    *(this + 20) = v35;
    v37 = *(other + 21);
    *(other + 20) = v36;
    v38 = *(this + 21);
    *(this + 21) = v37;
    LODWORD(v37) = *(other + 4);
    *(other + 21) = v38;
    LODWORD(v38) = *(this + 4);
    *(this + 4) = v37;
    v39 = *(other + 1);
    *(other + 4) = v38;
    v40 = *(this + 1);
    *(this + 1) = v39;
    LODWORD(v39) = *(other + 5);
    *(other + 1) = v40;
    LODWORD(v40) = *(this + 5);
    *(this + 5) = v39;
    *(other + 5) = v40;
  }
}


// CDOTAModifierBuffTableEntry::GetMetadata  (line 1758, @0x0000000001d66070, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmodifiers_2eproto(void), `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_, `anonymous namespace'::CDOTAModifierBuffTableEntry_reflection_
google::protobuf::Metadata __fastcall CDOTAModifierBuffTableEntry::GetMetadata(
        const CDOTAModifierBuffTableEntry *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmodifiers_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTAModifierBuffTableEntry_descriptor_;
  result.reflection = `anonymous namespace'::CDOTAModifierBuffTableEntry_reflection_;
  return result;
}


// CDOTALuaModifierEntry::CDOTALuaModifierEntry  (line 1774, @0x0000000001d676b0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTALuaModifierEntry::SharedCtor, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
// callers: protobuf_AddDesc_dota_5fmodifiers_2eproto, CDOTALuaModifierEntry::New, LinkLuaModifier, CDOTA_Modifier_Lua::DoCreate
void __fastcall CDOTALuaModifierEntry::CDOTALuaModifierEntry(CDOTALuaModifierEntry *const this)
{
  *this = off_3F9BAF0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTALuaModifierEntry::SharedCtor(this);
}


// CDOTALuaModifierEntry::InitAsDefaultInstance  (line 1780, @0x0000000001d675e0, libserver.so)
void __fastcall CDOTALuaModifierEntry::InitAsDefaultInstance(CDOTALuaModifierEntry *const this)
{
  ;
}


// CDOTALuaModifierEntry::CDOTALuaModifierEntry  (line 1783, @0x0000000001d67de0, libserver.so)
// calls: google::protobuf::UnknownFieldSet::UnknownFieldSet(void), CDOTALuaModifierEntry::SharedCtor, CDOTALuaModifierEntry::MergeFrom, google::protobuf::Message::~Message, _Unwind_Resume, google::protobuf::UnknownFieldSet::~UnknownFieldSet()
void __fastcall CDOTALuaModifierEntry::CDOTALuaModifierEntry(
        CDOTALuaModifierEntry *const this,
        const CDOTALuaModifierEntry *const from)
{
  *this = off_3F9BAF0;
  google::protobuf::UnknownFieldSet::UnknownFieldSet(this + 1);
  CDOTALuaModifierEntry::SharedCtor(this);
  CDOTALuaModifierEntry::MergeFrom(this, from);
}


// CDOTALuaModifierEntry::SharedCtor  (line 1790, @0x0000000001d675f0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GetEmptyString, GetEmptyStringAlreadyInited, GoogleOnceInit, memset
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, operator new, std::string::string(std::string const&), _Unwind_Resume, operator delete
// callers: CDOTALuaModifierEntry::CDOTALuaModifierEntry
void __fastcall CDOTALuaModifierEntry::SharedCtor(CDOTALuaModifierEntry *const this)
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


// CDOTALuaModifierEntry::~CDOTALuaModifierEntry  (line 1798, @0x0000000001d67be0, libserver.so)
// calls: CDOTALuaModifierEntry::SharedDtor, google::protobuf::UnknownFieldSet::~UnknownFieldSet(), google::protobuf::Message::~Message
// callers: CDOTALuaModifierEntry::~CDOTALuaModifierEntry, LinkLuaModifier, CDOTA_Modifier_Lua::DoCreate
void __fastcall CDOTALuaModifierEntry::~CDOTALuaModifierEntry(CDOTALuaModifierEntry *const this)
{
  *this = off_3F9BAF0;
  CDOTALuaModifierEntry::SharedDtor(this);
  google::protobuf::UnknownFieldSet::~UnknownFieldSet(this + 1);
  google::protobuf::Message::~Message(this);
}


// CDOTALuaModifierEntry::~CDOTALuaModifierEntry  (line 1798, @0x0000000001d67c20, libserver.so)
// calls: CDOTALuaModifierEntry::~CDOTALuaModifierEntry, operator delete
void __fastcall CDOTALuaModifierEntry::~CDOTALuaModifierEntry(CDOTALuaModifierEntry *const this)
{
  CDOTALuaModifierEntry::~CDOTALuaModifierEntry(this);
  operator delete(this);
}


// CDOTALuaModifierEntry::SharedDtor  (line 1803, @0x0000000001d67b70, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: operator delete, std::string::_Rep::_M_destroy(std::allocator<char> const&)
// callers: CDOTALuaModifierEntry::~CDOTALuaModifierEntry
void __fastcall CDOTALuaModifierEntry::SharedDtor(CDOTALuaModifierEntry *const this)
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


// CDOTALuaModifierEntry::SetCachedSize  (line 1809, @0x0000000001d658e0, libserver.so)
void __fastcall CDOTALuaModifierEntry::SetCachedSize(const CDOTALuaModifierEntry *const this, int size)
{
  *(this + 5) = size;
}


// CDOTALuaModifierEntry::descriptor  (line 1814, @0x0000000001d67c40, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmodifiers_2eproto(void), `anonymous namespace'::CDOTALuaModifierEntry_descriptor_
const google::protobuf::Descriptor *__cdecl CDOTALuaModifierEntry::descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fmodifiers_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::CDOTALuaModifierEntry_descriptor_;
}


// CDOTALuaModifierEntry::default_instance  (line 1819, @0x0000000001d67cd0, libserver.so)
// calls: protobuf_AddDesc_dota_5fmodifiers_2eproto
// globals: CDOTALuaModifierEntry::default_instance_
const CDOTALuaModifierEntry *__cdecl CDOTALuaModifierEntry::default_instance()
{
  const CDOTALuaModifierEntry *result; // rax

  result = CDOTALuaModifierEntry::default_instance_;
  if ( CDOTALuaModifierEntry::default_instance_ == 0 )
  {
    protobuf_AddDesc_dota_5fmodifiers_2eproto();
    return CDOTALuaModifierEntry::default_instance_;
  }
  return result;
}


// CDOTALuaModifierEntry::New  (line 1826, @0x0000000001d67b30, libserver.so)
// calls: operator new, CDOTALuaModifierEntry::CDOTALuaModifierEntry, operator delete, _Unwind_Resume
CDOTALuaModifierEntry *__fastcall CDOTALuaModifierEntry::New(const CDOTALuaModifierEntry *const this)
{
  CDOTALuaModifierEntry *v1; // rbx

  v1 = operator new(0x28u);
  CDOTALuaModifierEntry::CDOTALuaModifierEntry(v1);
  return v1;
}


// CDOTALuaModifierEntry::Clear  (line 1830, @0x0000000001d65950, libserver.so)  // inlines: Clear, clear, memset, size
// calls: google::protobuf::UnknownFieldSet::ClearFallback(void), std::string::_M_mutate(ulong,ulong,ulong)
void __fastcall CDOTALuaModifierEntry::Clear(CDOTALuaModifierEntry *const this)
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


// CDOTALuaModifierEntry::MergePartialFromCodedStream  (line 1841, @0x0000000001d66280, libserver.so)  // inlines: Advance, ExpectAtEnd, ExpectTag, GetTagFieldNumber, GetTagWireType, ReadPrimitive<int, (google::protobuf::internal::WireFormatLite::FieldType)5u>, ReadTagWithCutoff, ReadVarint32, mutable_modifier_filename, set_has_modifier_filename, set_has_modifier_type
// calls: google::protobuf::internal::WireFormat::SkipField(google::protobuf::io::CodedInputStream *,uint,google::protobuf::UnknownFieldSet *), google::protobuf::io::CodedInputStream::ReadTagFallback(void), google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *), google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
bool __fastcall CDOTALuaModifierEntry::MergePartialFromCodedStream(
        CDOTALuaModifierEntry *const this,
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
parse_modifier_filename:
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
    goto parse_modifier_filename;
handle_unusual:
  if ( v8 != 0 )
    goto LABEL_9;
  return 1;
}


// CDOTALuaModifierEntry::SerializeWithCachedSizes  (line 1904, @0x0000000001d65f50, libserver.so)  // inlines: empty
// calls: google::protobuf::internal::WireFormat::SerializeUnknownFields(google::protobuf::UnknownFieldSet const&,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteInt32(int,int,google::protobuf::io::CodedOutputStream *), google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(int,std::string const&,google::protobuf::io::CodedOutputStream *)
void __fastcall CDOTALuaModifierEntry::SerializeWithCachedSizes(
        const CDOTALuaModifierEntry *const this,
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


// CDOTALuaModifierEntry::SerializeWithCachedSizesToArray  (line 1929, @0x0000000001d661e0, libserver.so)  // inlines: WriteInt32NoTagToArray, WriteInt32ToArray, WriteStringToArray, WriteTagToArray, WriteVarint32SignExtendedToArray, WriteVarint32ToArray, empty
// calls: google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(std::string const&,uchar *), google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(google::protobuf::UnknownFieldSet const&,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint32FallbackToArray(uint,uchar *), google::protobuf::io::CodedOutputStream::WriteVarint64ToArray(ulong,uchar *)
// callers: LinkLuaModifier
google::protobuf::uint8 *__fastcall CDOTALuaModifierEntry::SerializeWithCachedSizesToArray(
        const CDOTALuaModifierEntry *const this,
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


// CDOTALuaModifierEntry::ByteSize  (line 1956, @0x0000000001d66110, libserver.so)  // inlines: Int32Size, StringSize, VarintSize32, VarintSize32SignExtended, empty, size
// calls: google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(google::protobuf::UnknownFieldSet const&), google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
// callers: LinkLuaModifier
int __fastcall CDOTALuaModifierEntry::ByteSize(const CDOTALuaModifierEntry *const this)
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


// CDOTALuaModifierEntry::MergeFrom  (line 1986, @0x0000000001d67e50, libserver.so)  // inlines: dynamic_cast_if_available<const CDOTALuaModifierEntry*, const google::protobuf::Message*>
// calls: __dynamic_cast, CDOTALuaModifierEntry::MergeFrom, google::protobuf::internal::ReflectionOps::Merge(google::protobuf::Message const&,google::protobuf::Message*), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// strings: "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc", "CHECK failed: (&from) != (this): "
// globals: `typeinfo for'CDOTALuaModifierEntry
void __fastcall CDOTALuaModifierEntry::MergeFrom(
        CDOTALuaModifierEntry *const this,
        const google::protobuf::Message *const from)
{
  google::protobuf::Message *v2; // rdx
  const CDOTALuaModifierEntry *v5; // rsi
  __int64 v6; // rax
  char v7; // [rsp+1Fh] [rbp-41h] BYREF
  google::protobuf::internal::LogMessage v8; // [rsp+20h] [rbp-40h] BYREF

  if ( this == from )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v8,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc",
      1987);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
  }
  if ( from != 0
    && (v5 = __dynamic_cast(from, &`typeinfo for'google::protobuf::Message, &`typeinfo for'CDOTALuaModifierEntry, 0)) != 0 )
  {
    CDOTALuaModifierEntry::MergeFrom(this, v5);
  }
  else
  {
    google::protobuf::internal::ReflectionOps::Merge(from, this, v2);
  }
}


// CDOTALuaModifierEntry::MergeFrom  (line 1998, @0x0000000001d67d00, libserver.so)  // inlines: set_has_modifier_filename, set_has_modifier_type, set_modifier_filename, set_modifier_type
// calls: google::protobuf::UnknownFieldSet::MergeFrom(google::protobuf::UnknownFieldSet const&), std::string::assign(std::string const&), google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), _Unwind_Resume
// callers: CDOTALuaModifierEntry::CDOTALuaModifierEntry, CDOTALuaModifierEntry::MergeFrom, CDOTALuaModifierEntry::CopyFrom
// strings: "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc", "CHECK failed: (&from) != (this): "
void __fastcall CDOTALuaModifierEntry::MergeFrom(
        CDOTALuaModifierEntry *const this,
        const CDOTALuaModifierEntry *const from)
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
      "generated_protodota/linuxsteamrt64/dota_modifiers.pb.cc",
      1999);
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


// CDOTALuaModifierEntry::CopyFrom  (line 2011, @0x0000000001d658f0, libserver.so)
void __fastcall CDOTALuaModifierEntry::CopyFrom(
        CDOTALuaModifierEntry *const this,
        const google::protobuf::Message *const from)
{
  if ( this != from )
  {
    (*(*this + 32LL))(this);
    (*(*this + 112LL))(this, from);
  }
}


// CDOTALuaModifierEntry::CopyFrom  (line 2017, @0x0000000001d67f30, libserver.so)
// calls: CDOTALuaModifierEntry::MergeFrom
void __fastcall CDOTALuaModifierEntry::CopyFrom(
        CDOTALuaModifierEntry *const this,
        const CDOTALuaModifierEntry *const from)
{
  if ( from != this )
  {
    (*(*this + 32LL))(this);
    CDOTALuaModifierEntry::MergeFrom(this, from);
  }
}


// CDOTALuaModifierEntry::IsInitialized  (line 2023, @0x0000000001d65930, libserver.so)
bool __fastcall CDOTALuaModifierEntry::IsInitialized(const CDOTALuaModifierEntry *const this)
{
  return (*(this + 4) & 3) == 3;
}


// CDOTALuaModifierEntry::Swap  (line 2029, @0x0000000001d67f70, libserver.so)  // inlines: Swap, swap<int>, swap<std::basic_string<char>*>, swap<std::vector<google::protobuf::UnknownField>*>, swap<unsigned int>
void __fastcall CDOTALuaModifierEntry::Swap(CDOTALuaModifierEntry *const this, CDOTALuaModifierEntry *other)
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


// CDOTALuaModifierEntry::GetMetadata  (line 2039, @0x0000000001d65fd0, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fmodifiers_2eproto(void), `anonymous namespace'::CDOTALuaModifierEntry_descriptor_, `anonymous namespace'::CDOTALuaModifierEntry_reflection_
google::protobuf::Metadata __fastcall CDOTALuaModifierEntry::GetMetadata(const CDOTALuaModifierEntry *const this)
{
  google::protobuf::Closure *v1; // rdx
  google::protobuf::Metadata result; // rax
  __int64 v3[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v3[2]) = 0;
    v3[0] = off_47BFB70;
    v3[1] = protobuf_AssignDesc_dota_5fmodifiers_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v3, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v3);
  }
  result.descriptor = `anonymous namespace'::CDOTALuaModifierEntry_descriptor_;
  result.reflection = `anonymous namespace'::CDOTALuaModifierEntry_reflection_;
  return result;
}


