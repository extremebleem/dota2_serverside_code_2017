
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// google::protobuf::Message::CheckTypeAndMergeFrom  (line 0, @0x000000000303fe5a, libserver.so)
// calls: google::protobuf::internal::down_cast<google::protobuf::Message const*,google::protobuf::MessageLite const>(google::protobuf::MessageLite const *)
__int64 __fastcall google::protobuf::Message::CheckTypeAndMergeFrom(
        google::protobuf::Message *this,
        const google::protobuf::MessageLite *a2)
{
  __int64 (__fastcall *v2)(google::protobuf::Message *, __int64); // rbx
  __int64 v3; // rax

  v2 = *(*this + 112LL);
  v3 = google::protobuf::internal::down_cast<google::protobuf::Message const*,google::protobuf::MessageLite const>(a2);
  return v2(this, v3);
}


// google::protobuf::Message::GetTypeName  (line 0, @0x000000000303ffea, libserver.so)
// calls: google::protobuf::Message::GetDescriptor(void), google::protobuf::Descriptor::full_name(void), std::string::string(std::string const&)
std::string *__fastcall google::protobuf::Message::GetTypeName(std::string *this, google::protobuf::Message *a2)
{
  google::protobuf::Descriptor *Descriptor; // rax
  const std::string *v3; // rax

  Descriptor = google::protobuf::Message::GetDescriptor(a2);
  v3 = google::protobuf::Descriptor::full_name(Descriptor);
  std::string::string(this, v3);
  return this;
}


// google::protobuf::Message::InitializationErrorString  (line 0, @0x00000000030400f2, libserver.so)
// calls: std::vector<std::string,std::allocator<std::string>>::vector(void), google::protobuf::Message::FindInitializationErrors(std::vector<std::string,std::allocator<std::string>> *), google::protobuf::Join<std::vector<std::string,std::allocator<std::string>>>(std::vector<std::string,std::allocator<std::string>> const&,char const*), std::vector<std::string,std::allocator<std::string>>::~vector(), _Unwind_Resume
// strings: ", "
google::protobuf::Message *__fastcall google::protobuf::Message::InitializationErrorString(
        google::protobuf::Message *this,
        __int64 a2)
{
  _BYTE v5[48]; // [rsp+10h] [rbp-30h] BYREF

  std::vector<std::string>::vector(v5);
  google::protobuf::Message::FindInitializationErrors(a2, v5);
  google::protobuf::Join<std::vector<std::string>>(this, v5, ", ");
  std::vector<std::string>::~vector(v5);
  return this;
}


// google::protobuf::Message::DiscardUnknownFields  (line 0, @0x00000000030402e8, libserver.so)
// calls: google::protobuf::internal::ReflectionOps::DiscardUnknownFields(google::protobuf::Message *)
__int64 __fastcall google::protobuf::Message::DiscardUnknownFields(
        google::protobuf::internal::ReflectionOps *this,
        google::protobuf::Message *a2)
{
  return google::protobuf::internal::ReflectionOps::DiscardUnknownFields(this, a2);
}


// google::protobuf::Message::SpaceUsed  (line 0, @0x00000000030406c4, libserver.so)
__int64 __fastcall google::protobuf::Message::SpaceUsed(google::protobuf::Message *this)
{
  __int64 v1; // rax

  v1 = (*(*this + 144LL))(this);
  return (*(*v1 + 32LL))(v1, this);
}


// CMsgVector::GetCachedSize  (line 168, @0x0000000001a8ce60, libserver.so)
int __fastcall CMsgVector::GetCachedSize(const CMsgVector *const this)
{
  return *(this + 5);
}


// CMsgVector2D::GetCachedSize  (line 267, @0x0000000001a8ce70, libserver.so)
int __fastcall CMsgVector2D::GetCachedSize(const CMsgVector2D *const this)
{
  return *(this + 5);
}


// CMsgQAngle::GetCachedSize  (line 356, @0x0000000001a8ce80, libserver.so)
int __fastcall CMsgQAngle::GetCachedSize(const CMsgQAngle *const this)
{
  return *(this + 5);
}


// CMsgPlayerInfo::GetCachedSize  (line 455, @0x0000000001a8ce90, libserver.so)
int __fastcall CMsgPlayerInfo::GetCachedSize(const CMsgPlayerInfo *const this)
{
  return *(this + 5);
}


// CMsg_CVars_CVar::GetCachedSize  (line 589, @0x0000000001a8cea0, libserver.so)
int __fastcall CMsg_CVars_CVar::GetCachedSize(const CMsg_CVars_CVar *const this)
{
  return *(this + 5);
}


// CMsg_CVars::GetCachedSize  (line 688, @0x0000000001a8ceb0, libserver.so)
int __fastcall CMsg_CVars::GetCachedSize(const CMsg_CVars *const this)
{
  return *(this + 5);
}


// CNETMsg_NOP::GetCachedSize  (line 772, @0x0000000001a8cec0, libserver.so)
int __fastcall CNETMsg_NOP::GetCachedSize(const CNETMsg_NOP *const this)
{
  return *(this + 5);
}


// CNETMsg_SplitScreenUser::GetCachedSize  (line 841, @0x0000000001a8ced0, libserver.so)
int __fastcall CNETMsg_SplitScreenUser::GetCachedSize(const CNETMsg_SplitScreenUser *const this)
{
  return *(this + 5);
}


// CNETMsg_Disconnect::GetCachedSize  (line 920, @0x0000000001a8cee0, libserver.so)
int __fastcall CNETMsg_Disconnect::GetCachedSize(const CNETMsg_Disconnect *const this)
{
  return *(this + 5);
}


// CNETMsg_Tick::GetCachedSize  (line 999, @0x0000000001a8cef0, libserver.so)
int __fastcall CNETMsg_Tick::GetCachedSize(const CNETMsg_Tick *const this)
{
  return *(this + 5);
}


// CNETMsg_StringCmd::GetCachedSize  (line 1128, @0x0000000001a8cf00, libserver.so)
int __fastcall CNETMsg_StringCmd::GetCachedSize(const CNETMsg_StringCmd *const this)
{
  return *(this + 5);
}


// CNETMsg_SetConVar::GetCachedSize  (line 1212, @0x0000000001a8cf10, libserver.so)
int __fastcall CNETMsg_SetConVar::GetCachedSize(const CNETMsg_SetConVar *const this)
{
  return *(this + 5);
}


// CNETMsg_SignonState::GetCachedSize  (line 1293, @0x0000000001a8cf20, libserver.so)
int __fastcall CNETMsg_SignonState::GetCachedSize(const CNETMsg_SignonState *const this)
{
  return *(this + 5);
}


// CSVCMsg_GameEvent_key_t::GetCachedSize  (line 1439, @0x0000000001a8cf30, libserver.so)
int __fastcall CSVCMsg_GameEvent_key_t::GetCachedSize(const CSVCMsg_GameEvent_key_t *const this)
{
  return *(this + 5);
}


// CSVCMsg_GameEvent::GetCachedSize  (line 1593, @0x0000000001a8cf40, libserver.so)
int __fastcall CSVCMsg_GameEvent::GetCachedSize(const CSVCMsg_GameEvent *const this)
{
  return *(this + 5);
}


// CSVCMsgList_GameEvents_event_t::GetCachedSize  (line 1702, @0x0000000001a8cf50, libserver.so)
int __fastcall CSVCMsgList_GameEvents_event_t::GetCachedSize(const CSVCMsgList_GameEvents_event_t *const this)
{
  return *(this + 5);
}


// CSVCMsgList_GameEvents::GetCachedSize  (line 1793, @0x0000000001a8cf60, libserver.so)
int __fastcall CSVCMsgList_GameEvents::GetCachedSize(const CSVCMsgList_GameEvents *const this)
{
  return *(this + 5);
}


// CSVCMsg_UserMessage::GetCachedSize  (line 1877, @0x0000000001a8cf70, libserver.so)
int __fastcall CSVCMsg_UserMessage::GetCachedSize(const CSVCMsg_UserMessage *const this)
{
  return *(this + 5);
}


// CSVCMsgList_UserMessages_usermsg_t::GetCachedSize  (line 1971, @0x0000000001a8cf80, libserver.so)
int __fastcall CSVCMsgList_UserMessages_usermsg_t::GetCachedSize(const CSVCMsgList_UserMessages_usermsg_t *const this)
{
  return *(this + 5);
}


// CSVCMsgList_UserMessages::GetCachedSize  (line 2062, @0x0000000001a8cf90, libserver.so)
int __fastcall CSVCMsgList_UserMessages::GetCachedSize(const CSVCMsgList_UserMessages *const this)
{
  return *(this + 5);
}


// CNETMsg_SpawnGroup_Load::GetCachedSize  (line 2146, @0x0000000001a8cfa0, libserver.so)
int __fastcall CNETMsg_SpawnGroup_Load::GetCachedSize(const CNETMsg_SpawnGroup_Load *const this)
{
  return *(this + 5);
}


// CNETMsg_SpawnGroup_ManifestUpdate::GetCachedSize  (line 2434, @0x0000000001a8cfb0, libserver.so)
int __fastcall CNETMsg_SpawnGroup_ManifestUpdate::GetCachedSize(const CNETMsg_SpawnGroup_ManifestUpdate *const this)
{
  return *(this + 5);
}


// CNETMsg_SpawnGroup_SetCreationTick::GetCachedSize  (line 2538, @0x0000000001a8cfc0, libserver.so)
int __fastcall CNETMsg_SpawnGroup_SetCreationTick::GetCachedSize(const CNETMsg_SpawnGroup_SetCreationTick *const this)
{
  return *(this + 5);
}


// CNETMsg_SpawnGroup_Unload::GetCachedSize  (line 2637, @0x0000000001a8cfd0, libserver.so)
int __fastcall CNETMsg_SpawnGroup_Unload::GetCachedSize(const CNETMsg_SpawnGroup_Unload *const this)
{
  return *(this + 5);
}


// CNETMsg_SpawnGroup_LoadCompleted::GetCachedSize  (line 2736, @0x0000000001a8cfe0, libserver.so)
int __fastcall CNETMsg_SpawnGroup_LoadCompleted::GetCachedSize(const CNETMsg_SpawnGroup_LoadCompleted *const this)
{
  return *(this + 5);
}


// CSVCMsg_GameSessionConfiguration::GetCachedSize  (line 2815, @0x0000000001a8cff0, libserver.so)
int __fastcall CSVCMsg_GameSessionConfiguration::GetCachedSize(const CSVCMsg_GameSessionConfiguration *const this)
{
  return *(this + 5);
}


