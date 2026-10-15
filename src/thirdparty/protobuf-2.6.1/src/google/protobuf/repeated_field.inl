
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// google::protobuf::RepeatedField<int>::Add  (line 684, @0x00000000029afb70, libserver.so)  // inlines: CopyArray, MoveArray, Reserve, memcpy, operator()
// calls: operator new [], memcpy, operator delete []
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
void __fastcall google::protobuf::RepeatedField<int>::Add(
        google::protobuf::RepeatedField<int> *const this,
        const int *const value)
{
  __int64 current_size; // rdx
  int *v5; // rax
  int v6; // eax
  int v7; // edx
  int *elements; // r13

  current_size = this->current_size_;
  if ( current_size == this->total_size_ )
  {
    v6 = current_size + 1;
    v7 = 2 * current_size;
    elements = this->elements_;
    if ( v6 >= v7 )
      v7 = v6;
    if ( v7 < 4 )
      v7 = 4;
    this->total_size_ = v7;
    v5 = operator new[](4LL * v7);
    current_size = this->current_size_;
    this->elements_ = v5;
    if ( elements != 0 )
    {
      memcpy(v5, elements, 4 * current_size);
      operator delete[](elements);
      v5 = this->elements_;
      current_size = this->current_size_;
    }
  }
  else
  {
    v5 = this->elements_;
  }
  this->current_size_ = current_size + 1;
  v5[current_size] = *value;
}


// google::protobuf::RepeatedField<unsigned int>::Add  (line 684, @0x00000000029afc10, libserver.so)  // inlines: CopyArray, MoveArray, Reserve, memcpy, operator()
// calls: operator new [], memcpy, operator delete []
// callers: CDOTAGCServerSystem::FillMatchDetailsForTeam, CDOTAGCServerSystem::MatchSignOut
void __fastcall google::protobuf::RepeatedField<unsigned int>::Add(
        google::protobuf::RepeatedField<unsigned int> *const this,
        const unsigned int *const value)
{
  __int64 current_size; // rdx
  unsigned int *v5; // rax
  int v6; // eax
  int v7; // edx
  unsigned int *elements; // r13

  current_size = this->current_size_;
  if ( current_size == this->total_size_ )
  {
    v6 = current_size + 1;
    v7 = 2 * current_size;
    elements = this->elements_;
    if ( v6 >= v7 )
      v7 = v6;
    if ( v7 < 4 )
      v7 = 4;
    this->total_size_ = v7;
    v5 = operator new[](4LL * v7);
    current_size = this->current_size_;
    this->elements_ = v5;
    if ( elements != 0 )
    {
      memcpy(v5, elements, 4 * current_size);
      operator delete[](elements);
      v5 = this->elements_;
      current_size = this->current_size_;
    }
  }
  else
  {
    v5 = this->elements_;
  }
  this->current_size_ = current_size + 1;
  v5[current_size] = *value;
}


// google::protobuf::RepeatedField<int>::Reserve  (line 806, @0x0000000001ac98b0, libserver.so)  // inlines: CopyArray, MoveArray, memcpy, operator()
// calls: operator new [], memcpy, operator delete []
// callers: ProtoFlattenedSerializer_t::MergeFrom, ProtoFlattenedSerializer_t::MergePartialFromCodedStream, CMsgDOTARealtimeGameStatsTerse_GraphData::MergeFrom, CMsgDOTARealtimeGameStats_GraphData_LocationStats::MergeFrom, CMsgDOTARealtimeGameStats_GraphData::MergeFrom, CMsgDOTARealtimeGameStatsTerse_GraphData::MergePartialFromCodedStream, CMsgDOTARealtimeGameStats_GraphData_LocationStats::MergePartialFromCodedStream, CMsgDOTARealtimeGameStats_GraphData::MergePartialFromCodedStream, CSODOTAParty::MergeFrom, CSODOTALobby::MergeFrom, CSODOTAParty::MergePartialFromCodedStream, CSODOTALobby::MergePartialFromCodedStream (26 total)
void __fastcall google::protobuf::RepeatedField<int>::Reserve(
        google::protobuf::RepeatedField<int> *const this,
        int new_size)
{
  int total_size; // eax
  int v4; // eax
  int *elements; // r12
  int *v6; // rax

  total_size = this->total_size_;
  if ( total_size < new_size )
  {
    v4 = 2 * total_size;
    elements = this->elements_;
    if ( v4 < 4 )
      v4 = 4;
    if ( v4 < new_size )
      v4 = new_size;
    this->total_size_ = v4;
    v6 = operator new[](4LL * v4);
    this->elements_ = v6;
    if ( elements != 0 )
    {
      memcpy(v6, elements, 4LL * this->current_size_);
      operator delete[](elements);
    }
  }
}


// google::protobuf::RepeatedField<unsigned int>::Reserve  (line 806, @0x0000000001ac9920, libserver.so)  // inlines: CopyArray, MoveArray, memcpy, operator()
// calls: operator new [], memcpy, operator delete []
// callers: CCLCMsg_ListenEvents::MergeFrom, CCLCMsg_ListenEvents::MergePartialFromCodedStream, CUserMessageVoiceMask::MergeFrom, CUserMessageVoiceMask::MergePartialFromCodedStream, CMsgSource1LegacyListenEvents::MergeFrom, CMsgSource1LegacyListenEvents::MergePartialFromCodedStream, CMsgDOTASeasonPredictions_Prediction::MergeFrom, CMsgDOTARealtimeGameStats_AbilityList::MergeFrom, CMsgLeagueAdminList::MergeFrom, CMsgDOTAHasItemDefsQuery::MergeFrom, CMatchAdditionalUnitInventory::MergeFrom, CCompendiumTimestampedData::MergeFrom (116 total)
void __fastcall google::protobuf::RepeatedField<unsigned int>::Reserve(
        google::protobuf::RepeatedField<unsigned int> *const this,
        int new_size)
{
  int total_size; // eax
  int v4; // eax
  unsigned int *elements; // r12
  unsigned int *v6; // rax

  total_size = this->total_size_;
  if ( total_size < new_size )
  {
    v4 = 2 * total_size;
    elements = this->elements_;
    if ( v4 < 4 )
      v4 = 4;
    if ( v4 < new_size )
      v4 = new_size;
    this->total_size_ = v4;
    v6 = operator new[](4LL * v4);
    this->elements_ = v6;
    if ( elements != 0 )
    {
      memcpy(v6, elements, 4LL * this->current_size_);
      operator delete[](elements);
    }
  }
}


// google::protobuf::RepeatedField<long unsigned int>::Reserve  (line 806, @0x0000000001bd1020, libserver.so)  // inlines: CopyArray, MoveArray, memcpy, operator()
// calls: operator new [], memcpy, operator delete []
// callers: CMsgGCTopCustomGamesList::MergeFrom, CMsgGCGetPlayerCardItemInfo::MergeFrom, CMsgGCGetPlayerCardItemInfo::MergePartialFromCodedStream, CMsgGCTopCustomGamesList::MergePartialFromCodedStream, CSODOTAParty::MergeFrom, CSODOTALobby::MergeFrom, CSODOTAParty::MergePartialFromCodedStream, CSODOTALobby::MergePartialFromCodedStream, CMsgGameServerUploadSaveGame::MergePartialFromCodedStream, CMsgServerToGCVictoryPredictions_Record::MergeFrom, CMsgGameServerUploadSaveGame::MergeFrom, CMsgDOTAPlayerFailedToConnect::MergeFrom (56 total)
void __fastcall google::protobuf::RepeatedField<unsigned long>::Reserve(
        google::protobuf::RepeatedField<long unsigned int> *const this,
        int new_size)
{
  int total_size; // eax
  int v4; // eax
  unsigned __int64 *elements; // r12
  unsigned __int64 *v6; // rax

  total_size = this->total_size_;
  if ( total_size < new_size )
  {
    v4 = 2 * total_size;
    elements = this->elements_;
    if ( v4 < 4 )
      v4 = 4;
    if ( v4 < new_size )
      v4 = new_size;
    this->total_size_ = v4;
    v6 = operator new[](8LL * v4);
    this->elements_ = v6;
    if ( elements != 0 )
    {
      memcpy(v6, elements, 8LL * this->current_size_);
      operator delete[](elements);
    }
  }
}


// google::protobuf::RepeatedField<float>::Reserve  (line 806, @0x0000000001d7ace0, libserver.so)  // inlines: CopyArray, MoveArray, memcpy, operator()
// calls: operator new [], memcpy, operator delete []
// callers: CDOTAMatchMetadata_Team_Player::MergeFrom, CDOTAMatchMetadata_Team::MergeFrom, CDOTAMatchMetadata_Team_Player::MergePartialFromCodedStream, CDOTAMatchMetadata_Team::MergePartialFromCodedStream
void __fastcall google::protobuf::RepeatedField<float>::Reserve(
        google::protobuf::RepeatedField<float> *const this,
        int new_size)
{
  int total_size; // eax
  int v4; // eax
  float *elements; // r12
  float *v6; // rax

  total_size = this->total_size_;
  if ( total_size < new_size )
  {
    v4 = 2 * total_size;
    elements = this->elements_;
    if ( v4 < 4 )
      v4 = 4;
    if ( v4 < new_size )
      v4 = new_size;
    this->total_size_ = v4;
    v6 = operator new[](4LL * v4);
    this->elements_ = v6;
    if ( elements != 0 )
    {
      memcpy(v6, elements, 4LL * this->current_size_);
      operator delete[](elements);
    }
  }
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>  (line 867, @0x0000000001a78a60 libserver.so, @0x0000000001a94f30 libserver.so, @0x0000000001ad0870 libserver.so, @0x0000000001b2e660 libserver.so, @0x0000000001b3e190 libserver.so, @0x0000000001b6d4f0 libserver.so (+6 more))
// calls: google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *), operator delete []
// callers: CNETMsg_SignonState::CNETMsg_SignonState, CNETMsg_SignonState::~CNETMsg_SignonState
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        std::string *a2)
{
  __int64 i; // rbx

  for ( i = 0; i < SLODWORD(a2->_M_dataplus._M_p); ++i )
    google::protobuf::internal::StringTypeHandlerBase::Delete(this->elements_[i], a2);
  if ( this->elements_ != 0 )
    operator delete[](this->elements_);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>  (line 867, @0x0000000001a78bb0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsg_CVars::~CMsg_CVars, CMsg_CVars::CMsg_CVars
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsg_CVars_CVar>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>  (line 867, @0x0000000001a78c80, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_GameEvent::CSVCMsg_GameEvent, CSVCMsg_GameEvent::~CSVCMsg_GameEvent
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEvent_key_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>  (line 867, @0x0000000001a78cf0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsgList_GameEvents::~CSVCMsgList_GameEvents, CSVCMsgList_GameEvents::CSVCMsgList_GameEvents
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_GameEvents_event_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>  (line 867, @0x0000000001a78dc0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsgList_UserMessages::~CSVCMsgList_UserMessages, CSVCMsgList_UserMessages::CSVCMsgList_UserMessages
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsgList_UserMessages_usermsg_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_ClassInfo_class_t>::TypeHandler>  (line 867, @0x0000000001a95160, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_ClassInfo::~CSVCMsg_ClassInfo, CSVCMsg_ClassInfo::CSVCMsg_ClassInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_ClassInfo_class_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_Sounds_sounddata_t>::TypeHandler>  (line 867, @0x0000000001a95230, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_Sounds::~CSVCMsg_Sounds, CSVCMsg_Sounds::CSVCMsg_Sounds
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_Sounds_sounddata_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_SendTable_sendprop_t>::TypeHandler>  (line 867, @0x0000000001a95300, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_SendTable::CSVCMsg_SendTable, CSVCMsg_SendTable::~CSVCMsg_SendTable
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_SendTable_sendprop_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEventList_key_t>::TypeHandler>  (line 867, @0x0000000001a95370, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_GameEventList_descriptor_t::CSVCMsg_GameEventList_descriptor_t, CSVCMsg_GameEventList_descriptor_t::~CSVCMsg_GameEventList_descriptor_t
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEventList_key_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEventList_descriptor_t>::TypeHandler>  (line 867, @0x0000000001a953e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_GameEventList::~CSVCMsg_GameEventList, CSVCMsg_GameEventList::CSVCMsg_GameEventList
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSVCMsg_GameEventList_descriptor_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerPeer>::TypeHandler>  (line 867, @0x0000000001a954b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_PeerList::~CSVCMsg_PeerList, CSVCMsg_PeerList::CSVCMsg_PeerList
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerPeer>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<ProtoFlattenedSerializer_t>::TypeHandler>  (line 867, @0x0000000001a95580, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_FlattenedSerializer::~CSVCMsg_FlattenedSerializer, CSVCMsg_FlattenedSerializer::CSVCMsg_FlattenedSerializer
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<ProtoFlattenedSerializer_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<ProtoFlattenedSerializerField_t>::TypeHandler>  (line 867, @0x0000000001a955f0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSVCMsg_FlattenedSerializer::~CSVCMsg_FlattenedSerializer, CSVCMsg_FlattenedSerializer::CSVCMsg_FlattenedSerializer
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<ProtoFlattenedSerializerField_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CBidirMsg_RelayPacket_SignedDestinationAddress_t>::TypeHandler>  (line 867, @0x0000000001a956e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CBidirMsg_RelayPacket::~CBidirMsg_RelayPacket, CBidirMsg_RelayPacket::CBidirMsg_RelayPacket
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CBidirMsg_RelayPacket_SignedDestinationAddress_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerNetworkStats_Port>::TypeHandler>  (line 867, @0x0000000001a95750, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerNetworkStats::~CMsgServerNetworkStats, CMsgServerNetworkStats::CMsgServerNetworkStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerNetworkStats_Port>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerNetworkStats_Player>::TypeHandler>  (line 867, @0x0000000001a957c0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerNetworkStats::~CMsgServerNetworkStats, CMsgServerNetworkStats::CMsgServerNetworkStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerNetworkStats_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CUserMessageVGUIMenu_Keys>::TypeHandler>  (line 867, @0x0000000001ad0aa0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CUserMessageVGUIMenu::CUserMessageVGUIMenu, CUserMessageVGUIMenu::~CUserMessageVGUIMenu
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CUserMessageVGUIMenu_Keys>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>  (line 867, @0x0000000001affb60, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t, CMsgSource1LegacyGameEventList_descriptor_t::~CMsgSource1LegacyGameEventList_descriptor_t
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>  (line 867, @0x0000000001affbd0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList, CMsgSource1LegacyGameEventList::CMsgSource1LegacyGameEventList
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>  (line 867, @0x0000000001affca0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent, CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>  (line 867, @0x0000000001b3e3c0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo, CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>  (line 867, @0x0000000001b3e430, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo, CGameInfo_CDotaGameInfo::~CGameInfo_CDotaGameInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>  (line 867, @0x0000000001b3e4a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDemoClassInfo::~CDemoClassInfo, CDemoClassInfo::CDemoClassInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoClassInfo_class_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>  (line 867, @0x0000000001b3e570, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDemoStringTables_table_t::CDemoStringTables_table_t, CDemoStringTables_table_t::~CDemoStringTables_table_t
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_items_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>  (line 867, @0x0000000001b3e5e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDemoStringTables::~CDemoStringTables, CDemoStringTables::CDemoStringTables
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDemoStringTables_table_t>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>  (line 867, @0x0000000001b56c70, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTASaveGame_SaveInstance::~CDOTASaveGame_SaveInstance, CDOTASaveGame_SaveInstance::CDOTASaveGame_SaveInstance
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>  (line 867, @0x0000000001b56d40, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTASaveGame::~CDOTASaveGame, CDOTASaveGame::CDOTASaveGame
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>  (line 867, @0x0000000001b56db0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTASaveGame::~CDOTASaveGame, CDOTASaveGame::CDOTASaveGame
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTASaveGame_SaveInstance>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgLobbyEventPoints_AccountPoints>::TypeHandler>  (line 867, @0x0000000001b6d7d0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgLobbyEventPoints::~CMsgLobbyEventPoints, CMsgLobbyEventPoints::CMsgLobbyEventPoints
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgLobbyEventPoints_AccountPoints>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgBattleCupVictory>::TypeHandler>  (line 867, @0x0000000001b6d8a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgLobbyBattleCupVictoryList::~CMsgLobbyBattleCupVictoryList, CMsgLobbyBattleCupVictoryList::CMsgLobbyBattleCupVictoryList
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgBattleCupVictory>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo>::TypeHandler>  (line 867, @0x0000000001b6d970, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCGetPlayerCardItemInfoResponse::~CMsgGCGetPlayerCardItemInfoResponse, CMsgGCGetPlayerCardItemInfoResponse::CMsgGCGetPlayerCardItemInfoResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CCompendiumTimestampedData>::TypeHandler>  (line 867, @0x0000000001b6da40, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CCompendiumGameTimeline::~CCompendiumGameTimeline, CCompendiumGameTimeline::CCompendiumGameTimeline
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CCompendiumTimestampedData>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CCompendiumGameTimeline>::TypeHandler>  (line 867, @0x0000000001b6db20, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CCompendiumGameList::~CCompendiumGameList, CCompendiumGameList::CCompendiumGameList
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CCompendiumGameTimeline>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAProfileCard_Slot>::TypeHandler>  (line 867, @0x0000000001b6dbf0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAProfileCard::~CMsgDOTAProfileCard, CMsgDOTAProfileCard::CMsgDOTAProfileCard
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAProfileCard_Slot>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PlayerDetails>::TypeHandler>  (line 867, @0x0000000001b6dce0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_TeamDetails::CMsgDOTARealtimeGameStats_TeamDetails, CMsgDOTARealtimeGameStats_TeamDetails::~CMsgDOTARealtimeGameStats_TeamDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PlayerDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityDetails>::TypeHandler>  (line 867, @0x0000000001b6dd50, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_PlayerDetails::CMsgDOTARealtimeGameStats_PlayerDetails, CMsgDOTARealtimeGameStats_PlayerDetails::~CMsgDOTARealtimeGameStats_PlayerDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails>::TypeHandler>  (line 867, @0x0000000001b6ddc0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_PlayerDetails::CMsgDOTARealtimeGameStats_PlayerDetails, CMsgDOTARealtimeGameStats_PlayerDetails::~CMsgDOTARealtimeGameStats_PlayerDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityList>::TypeHandler>  (line 867, @0x0000000001b6de30, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_PlayerDetails::CMsgDOTARealtimeGameStats_PlayerDetails, CMsgDOTARealtimeGameStats_PlayerDetails::~CMsgDOTARealtimeGameStats_PlayerDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityList>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_HeroToHeroStats>::TypeHandler>  (line 867, @0x0000000001b6dea0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_PlayerDetails::CMsgDOTARealtimeGameStats_PlayerDetails, CMsgDOTARealtimeGameStats_PlayerDetails::~CMsgDOTARealtimeGameStats_PlayerDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_HeroToHeroStats>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails>::TypeHandler>  (line 867, @0x0000000001b6df10, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_MatchDetails::~CMsgDOTARealtimeGameStats_MatchDetails, CMsgDOTARealtimeGameStats_MatchDetails::CMsgDOTARealtimeGameStats_MatchDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_KillDetails>::TypeHandler>  (line 867, @0x0000000001b6df80, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_MatchDetails::~CMsgDOTARealtimeGameStats_MatchDetails, CMsgDOTARealtimeGameStats_MatchDetails::CMsgDOTARealtimeGameStats_MatchDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_KillDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_BroadcasterDetails>::TypeHandler>  (line 867, @0x0000000001b6dff0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_MatchDetails::~CMsgDOTARealtimeGameStats_MatchDetails, CMsgDOTARealtimeGameStats_MatchDetails::CMsgDOTARealtimeGameStats_MatchDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_BroadcasterDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_LocationStats>::TypeHandler>  (line 867, @0x0000000001b6e0f0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats::~CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats, CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats::CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_LocationStats>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats>::TypeHandler>  (line 867, @0x0000000001b6e1c0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats_GraphData::~CMsgDOTARealtimeGameStats_GraphData, CMsgDOTARealtimeGameStats_GraphData::CMsgDOTARealtimeGameStats_GraphData
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_TeamDetails>::TypeHandler>  (line 867, @0x0000000001b6e2d0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats::~CMsgDOTARealtimeGameStats, CMsgDOTARealtimeGameStats::CMsgDOTARealtimeGameStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_TeamDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_BuildingDetails>::TypeHandler>  (line 867, @0x0000000001b6e340, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStats::~CMsgDOTARealtimeGameStats, CMsgDOTARealtimeGameStats::CMsgDOTARealtimeGameStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_BuildingDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_PlayerDetails>::TypeHandler>  (line 867, @0x0000000001b6e3b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStatsTerse_TeamDetails::CMsgDOTARealtimeGameStatsTerse_TeamDetails, CMsgDOTARealtimeGameStatsTerse_TeamDetails::~CMsgDOTARealtimeGameStatsTerse_TeamDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_PlayerDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_TeamDetails>::TypeHandler>  (line 867, @0x0000000001b6e420, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStatsTerse::~CMsgDOTARealtimeGameStatsTerse, CMsgDOTARealtimeGameStatsTerse::CMsgDOTARealtimeGameStatsTerse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_TeamDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_BuildingDetails>::TypeHandler>  (line 867, @0x0000000001b6e490, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARealtimeGameStatsTerse::~CMsgDOTARealtimeGameStatsTerse, CMsgDOTARealtimeGameStatsTerse::CMsgDOTARealtimeGameStatsTerse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_BuildingDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonRewards_Reward>::TypeHandler>  (line 867, @0x0000000001b6e500, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTASeasonRewards::~CMsgDOTASeasonRewards, CMsgDOTASeasonRewards::CMsgDOTASeasonRewards
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonRewards_Reward>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonAchievements_Achievement>::TypeHandler>  (line 867, @0x0000000001b6e5d0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTASeasonAchievements::~CMsgDOTASeasonAchievements, CMsgDOTASeasonAchievements::CMsgDOTASeasonAchievements
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonAchievements_Achievement>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Choice>::TypeHandler>  (line 867, @0x0000000001b6e6a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTASeasonPredictions_Prediction::CMsgDOTASeasonPredictions_Prediction, CMsgDOTASeasonPredictions_Prediction::~CMsgDOTASeasonPredictions_Prediction, CMsgDOTASeasonPredictions_InGamePrediction::CMsgDOTASeasonPredictions_InGamePrediction, CMsgDOTASeasonPredictions_InGamePrediction::~CMsgDOTASeasonPredictions_InGamePrediction
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Choice>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Answers>::TypeHandler>  (line 867, @0x0000000001b6e710, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTASeasonPredictions_Prediction::CMsgDOTASeasonPredictions_Prediction, CMsgDOTASeasonPredictions_Prediction::~CMsgDOTASeasonPredictions_Prediction
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Answers>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_QueryKeyValues>::TypeHandler>  (line 867, @0x0000000001b6e780, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTASeasonPredictions_InGamePrediction::CMsgDOTASeasonPredictions_InGamePrediction, CMsgDOTASeasonPredictions_InGamePrediction::~CMsgDOTASeasonPredictions_InGamePrediction
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_QueryKeyValues>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Prediction>::TypeHandler>  (line 867, @0x0000000001b6e7f0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTASeasonPredictions::~CMsgDOTASeasonPredictions, CMsgDOTASeasonPredictions::CMsgDOTASeasonPredictions
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_Prediction>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_InGamePrediction>::TypeHandler>  (line 867, @0x0000000001b6e860, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTASeasonPredictions::~CMsgDOTASeasonPredictions, CMsgDOTASeasonPredictions::CMsgDOTASeasonPredictions
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTASeasonPredictions_InGamePrediction>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchPlayerAbilityUpgrade>::TypeHandler>  (line 867, @0x0000000001b6e940, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAMatch_Player::CMsgDOTAMatch_Player, CMsgDOTAMatch_Player::~CMsgDOTAMatch_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchPlayerAbilityUpgrade>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchAdditionalUnitInventory>::TypeHandler>  (line 867, @0x0000000001b6e9b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAMatch_Player::CMsgDOTAMatch_Player, CMsgDOTAMatch_Player::~CMsgDOTAMatch_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchAdditionalUnitInventory>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchPlayerPermanentBuff>::TypeHandler>  (line 867, @0x0000000001b6ea20 libserver.so, @0x0000000001c05410 libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAMatch_Player::CMsgDOTAMatch_Player, CMsgDOTAMatch_Player::~CMsgDOTAMatch_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchPlayerPermanentBuff>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAMatch_BroadcasterInfo>::TypeHandler>  (line 867, @0x0000000001b6ea90, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAMatch_BroadcasterChannel::CMsgDOTAMatch_BroadcasterChannel, CMsgDOTAMatch_BroadcasterChannel::~CMsgDOTAMatch_BroadcasterChannel
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAMatch_BroadcasterInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAMatch_Player>::TypeHandler>  (line 867, @0x0000000001b6eb00, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAMatch::CMsgDOTAMatch, CMsgDOTAMatch::~CMsgDOTAMatch
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAMatch_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchHeroSelectEvent>::TypeHandler>  (line 867, @0x0000000001b6eb70, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAMatch::CMsgDOTAMatch, CMsgDOTAMatch::~CMsgDOTAMatch
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchHeroSelectEvent>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAMatch_BroadcasterChannel>::TypeHandler>  (line 867, @0x0000000001b6ebe0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAMatch::CMsgDOTAMatch, CMsgDOTAMatch::~CMsgDOTAMatch
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAMatch_BroadcasterChannel>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgPlayerCard_StatModifier>::TypeHandler>  (line 867, @0x0000000001b6ec50, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgPlayerCard::~CMsgPlayerCard, CMsgPlayerCard::CMsgPlayerCard
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgPlayerCard_StatModifier>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAFantasyPlayerStats>::TypeHandler>  (line 867, @0x0000000001b6ed20 libserver.so, @0x0000000001c05200 libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAFantasyPlayerMatchStats::~CMsgDOTAFantasyPlayerMatchStats, CMsgDOTAFantasyPlayerMatchStats::CMsgDOTAFantasyPlayerMatchStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAFantasyPlayerStats>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTABotDebugInfo_Bot_Mode>::TypeHandler>  (line 867, @0x0000000001b6edf0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTABotDebugInfo_Bot::~CMsgDOTABotDebugInfo_Bot, CMsgDOTABotDebugInfo_Bot::CMsgDOTABotDebugInfo_Bot
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTABotDebugInfo_Bot_Mode>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTABotDebugInfo_Bot>::TypeHandler>  (line 867, @0x0000000001b6eee0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTABotDebugInfo::~CMsgDOTABotDebugInfo, CMsgDOTABotDebugInfo::CMsgDOTABotDebugInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTABotDebugInfo_Bot>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTAPartyMember>::TypeHandler>  (line 867, @0x0000000001bd49a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTAParty::CSODOTAParty, CSODOTAParty::~CSODOTAParty
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTAPartyMember>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTAPartyInvite>::TypeHandler>  (line 867, @0x0000000001bd4a10, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTAParty::CSODOTAParty, CSODOTAParty::~CSODOTAParty
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTAPartyInvite>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTAPartyInvite_PartyMember>::TypeHandler>  (line 867, @0x0000000001bd4a80, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTAPartyInvite::CSODOTAPartyInvite, CSODOTAPartyInvite::~CSODOTAPartyInvite
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTAPartyInvite_PartyMember>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTALobbyInvite_LobbyMember>::TypeHandler>  (line 867, @0x0000000001bd4af0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTALobbyInvite::CSODOTALobbyInvite, CSODOTALobbyInvite::~CSODOTALobbyInvite
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTALobbyInvite_LobbyMember>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTALobbyMember_CDOTALobbyMemberXPBonus>::TypeHandler>  (line 867, @0x0000000001bd4b60, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTALobbyMember::CDOTALobbyMember, CDOTALobbyMember::~CDOTALobbyMember
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTALobbyMember_CDOTALobbyMemberXPBonus>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>  (line 867, @0x0000000001bd4bd0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTALobby::CSODOTALobby, CSODOTALobby::~CSODOTALobby
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTeamDetails>::TypeHandler>  (line 867, @0x0000000001bd4c40, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTALobby::CSODOTALobby, CSODOTALobby::~CSODOTALobby
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTeamDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>  (line 867, @0x0000000001bd4cb0 libserver.so, @0x0000000001d6ca20 libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTALobby::CSODOTALobby, CSODOTALobby::~CSODOTALobby
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyBroadcastChannelInfo>::TypeHandler>  (line 867, @0x0000000001bd4d20, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTALobby::CSODOTALobby, CSODOTALobby::~CSODOTALobby
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyBroadcastChannelInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTALobby_CExtraMsg>::TypeHandler>  (line 867, @0x0000000001bd4d90, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSODOTALobby::CSODOTALobby, CSODOTALobby::~CSODOTALobby
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSODOTALobby_CExtraMsg>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgPoorNetworkConditions_Player>::TypeHandler>  (line 867, @0x0000000001c05040, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgPoorNetworkConditions::~CMsgPoorNetworkConditions, CMsgPoorNetworkConditions::CMsgPoorNetworkConditions
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgPoorNetworkConditions_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgConnectedPlayers_Player>::TypeHandler>  (line 867, @0x0000000001c05110, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgConnectedPlayers::~CMsgConnectedPlayers, CMsgConnectedPlayers::CMsgConnectedPlayers
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgConnectedPlayers_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchPlayerAbilityUpgrade>::TypeHandler>  (line 867, @0x0000000001c05330, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignOut_CTeam_CPlayer::~CMsgGameMatchSignOut_CTeam_CPlayer, CMsgGameMatchSignOut_CTeam_CPlayer::CMsgGameMatchSignOut_CTeam_CPlayer
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchPlayerAbilityUpgrade>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchAdditionalUnitInventory>::TypeHandler>  (line 867, @0x0000000001c053a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignOut_CTeam_CPlayer::~CMsgGameMatchSignOut_CTeam_CPlayer, CMsgGameMatchSignOut_CTeam_CPlayer::CMsgGameMatchSignOut_CTeam_CPlayer
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchAdditionalUnitInventory>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CTeam_CPlayer>::TypeHandler>  (line 867, @0x0000000001c05540, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignOut_CTeam::~CMsgGameMatchSignOut_CTeam, CMsgGameMatchSignOut_CTeam::CMsgGameMatchSignOut_CTeam
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CTeam_CPlayer>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CTeam>::TypeHandler>  (line 867, @0x0000000001c05610, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignOut::CMsgGameMatchSignOut, CMsgGameMatchSignOut::~CMsgGameMatchSignOut
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CTeam>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchHeroSelectEvent>::TypeHandler>  (line 867, @0x0000000001c05680, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSignOutDraftInfo::~CMsgSignOutDraftInfo, CMsgGameMatchSignOut::CMsgGameMatchSignOut, CMsgGameMatchSignOut::~CMsgGameMatchSignOut, CMsgSignOutDraftInfo::CMsgSignOutDraftInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMatchHeroSelectEvent>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment>::TypeHandler>  (line 867, @0x0000000001c05750, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignOut::CMsgGameMatchSignOut, CMsgGameMatchSignOut::~CMsgGameMatchSignOut
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>  (line 867, @0x0000000001c057c0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignOut::CMsgGameMatchSignOut, CMsgGameMatchSignOut::~CMsgGameMatchSignOut
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CSocialFeedMatchEvent>::TypeHandler>  (line 867, @0x0000000001c05830, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignOut::CMsgGameMatchSignOut, CMsgGameMatchSignOut::~CMsgGameMatchSignOut
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CSocialFeedMatchEvent>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutCommunicationSummary_PlayerCommunication>::TypeHandler>  (line 867, @0x0000000001c058a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSignOutCommunicationSummary::~CMsgSignOutCommunicationSummary, CMsgSignOutCommunicationSummary::CMsgSignOutCommunicationSummary
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutCommunicationSummary_PlayerCommunication>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>  (line 867, @0x0000000001c05970, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgTimedRewardContainer::~CMsgTimedRewardContainer, CMsgGameMatchSignoutResponse::~CMsgGameMatchSignoutResponse, CMsgGameMatchSignoutResponse::CMsgGameMatchSignoutResponse, CMsgTimedRewardContainer::CMsgTimedRewardContainer
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CLobbyTimedRewardDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>  (line 867, @0x0000000001c05a40, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignoutResponse::~CMsgGameMatchSignoutResponse, CMsgGameMatchSignoutResponse::CMsgGameMatchSignoutResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTALobbyMember>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg>::TypeHandler>  (line 867, @0x0000000001c05ab0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignoutResponse::~CMsgGameMatchSignoutResponse, CMsgGameMatchSignoutResponse::CMsgGameMatchSignoutResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignoutResponse_PlayerMetadata>::TypeHandler>  (line 867, @0x0000000001c05b20, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGameMatchSignoutResponse::~CMsgGameMatchSignoutResponse, CMsgGameMatchSignoutResponse::CMsgGameMatchSignoutResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGameMatchSignoutResponse_PlayerMetadata>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility>::TypeHandler>  (line 867, @0x0000000001c05c30, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTALiveScoreboardUpdate_Team_Player::CMsgDOTALiveScoreboardUpdate_Team_Player, CMsgDOTALiveScoreboardUpdate_Team_Player::~CMsgDOTALiveScoreboardUpdate_Team_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player>::TypeHandler>  (line 867, @0x0000000001c05ca0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTALiveScoreboardUpdate_Team::~CMsgDOTALiveScoreboardUpdate_Team, CMsgDOTALiveScoreboardUpdate_Team::CMsgDOTALiveScoreboardUpdate_Team
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARequestBatchPlayerResourcesResponse_Result>::TypeHandler>  (line 867, @0x0000000001c05d90, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTARequestBatchPlayerResourcesResponse::~CMsgDOTARequestBatchPlayerResourcesResponse, CMsgDOTARequestBatchPlayerResourcesResponse::CMsgDOTARequestBatchPlayerResourcesResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTARequestBatchPlayerResourcesResponse_Result>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CProtoItemHeroStatue>::TypeHandler>  (line 867, @0x0000000001c05e60, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgTournamentItemEvent::CMsgTournamentItemEvent, CMsgTournamentItemEvent::~CMsgTournamentItemEvent
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CProtoItemHeroStatue>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints>::TypeHandler>  (line 867, @0x0000000001c05ed0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAAwardEventPoints::~CMsgDOTAAwardEventPoints, CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops>::TypeHandler>  (line 867, @0x0000000001c05fa0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCSignoutAwardAdditionalDrops::~CMsgServerToGCSignoutAwardAdditionalDrops, CMsgServerToGCSignoutAwardAdditionalDrops::CMsgServerToGCSignoutAwardAdditionalDrops
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAFrostivusTimeElapsed_User>::TypeHandler>  (line 867, @0x0000000001c06070, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDOTAFrostivusTimeElapsed::~CMsgDOTAFrostivusTimeElapsed, CMsgDOTAFrostivusTimeElapsed::CMsgDOTAFrostivusTimeElapsed
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAFrostivusTimeElapsed_User>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerGetEventPointsResponse_Points>::TypeHandler>  (line 867, @0x0000000001c06140, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerGetEventPointsResponse::~CMsgServerGetEventPointsResponse, CMsgServerGetEventPointsResponse::CMsgServerGetEventPointsResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerGetEventPointsResponse_Points>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerGrantSurveyPermission_Survey>::TypeHandler>  (line 867, @0x0000000001c06210, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerGrantSurveyPermission::~CMsgServerGrantSurveyPermission, CMsgServerGrantSurveyPermission::CMsgServerGrantSurveyPermission
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerGrantSurveyPermission_Survey>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCMatchConnectionStats_Player>::TypeHandler>  (line 867, @0x0000000001c062e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCMatchConnectionStats::~CMsgServerToGCMatchConnectionStats, CMsgServerToGCMatchConnectionStats::CMsgServerToGCMatchConnectionStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCMatchConnectionStats_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSerializedCombatLog_Dictionary_DictString>::TypeHandler>  (line 867, @0x0000000001c063b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSerializedCombatLog_Dictionary::~CSerializedCombatLog_Dictionary, CSerializedCombatLog_Dictionary::CSerializedCombatLog_Dictionary
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSerializedCombatLog_Dictionary_DictString>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTACombatLogEntry>::TypeHandler>  (line 867, @0x0000000001c06480, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSerializedCombatLog::~CSerializedCombatLog, CSerializedCombatLog::CSerializedCombatLog
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTACombatLogEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CAdditionalEquipSlot>::TypeHandler>  (line 867, @0x0000000001c06570, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips::~CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips, CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips::CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CAdditionalEquipSlot>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips>::TypeHandler>  (line 867, @0x0000000001c06640, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCGetAdditionalEquipsResponse::~CMsgServerToGCGetAdditionalEquipsResponse, CMsgServerToGCGetAdditionalEquipsResponse::CMsgServerToGCGetAdditionalEquipsResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAProfileCard>::TypeHandler>  (line 867, @0x0000000001c06710, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCGetProfileCardResponse::~CMsgServerToGCGetProfileCardResponse, CMsgServerToGCGetProfileCardResponse::CMsgServerToGCGetProfileCardResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDOTAProfileCard>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCVictoryPredictions_Record>::TypeHandler>  (line 867, @0x0000000001c067e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCVictoryPredictions::~CMsgServerToGCVictoryPredictions, CMsgServerToGCVictoryPredictions::CMsgServerToGCVictoryPredictions
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCVictoryPredictions_Record>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCKillSummaries_KillSummary>::TypeHandler>  (line 867, @0x0000000001c068b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCKillSummaries::~CMsgServerToGCKillSummaries, CMsgServerToGCKillSummaries::CMsgServerToGCKillSummaries
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCKillSummaries_KillSummary>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToServerPredictionResult_Prediction>::TypeHandler>  (line 867, @0x0000000001c06980, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCToServerPredictionResult::~CMsgGCToServerPredictionResult, CMsgGCToServerPredictionResult::CMsgGCToServerPredictionResult
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToServerPredictionResult_Prediction>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutUpdatePlayerChallenge_Challenge>::TypeHandler>  (line 867, @0x0000000001c06a50, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSignOutUpdatePlayerChallenge::~CMsgSignOutUpdatePlayerChallenge, CMsgSignOutUpdatePlayerChallenge::CMsgSignOutUpdatePlayerChallenge
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutUpdatePlayerChallenge_Challenge>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCHoldEventPoints_HoldRequest>::TypeHandler>  (line 867, @0x0000000001c06b30, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCHoldEventPoints::~CMsgServerToGCHoldEventPoints, CMsgServerToGCHoldEventPoints::CMsgServerToGCHoldEventPoints
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCHoldEventPoints_HoldRequest>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutWagerStats_Player>::TypeHandler>  (line 867, @0x0000000001c06c00, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSignOutWagerStats::~CMsgSignOutWagerStats, CMsgSignOutWagerStats::CMsgSignOutWagerStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutWagerStats_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutXPCoins_Player>::TypeHandler>  (line 867, @0x0000000001c06cd0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSignOutXPCoins::~CMsgSignOutXPCoins, CMsgSignOutXPCoins::CMsgSignOutXPCoins
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutXPCoins_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutCommunityGoalProgress_EventGoalIncrement>::TypeHandler>  (line 867, @0x0000000001c06da0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSignOutCommunityGoalProgress::~CMsgSignOutCommunityGoalProgress, CMsgSignOutCommunityGoalProgress::CMsgSignOutCommunityGoalProgress
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSignOutCommunityGoalProgress_EventGoalIncrement>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult>::TypeHandler>  (line 867, @0x0000000001c06e70, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgServerToGCCompendiumInGamePredictionResults::~CMsgServerToGCCompendiumInGamePredictionResults, CMsgServerToGCCompendiumInGamePredictionResults::CMsgServerToGCCompendiumInGamePredictionResults
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAClientMsg_UpdateQuickBuyItem>::TypeHandler>  (line 867, @0x0000000001c79760, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAClientMsg_UpdateQuickBuy::~CDOTAClientMsg_UpdateQuickBuy, CDOTAClientMsg_UpdateQuickBuy::CDOTAClientMsg_UpdateQuickBuy
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAClientMsg_UpdateQuickBuyItem>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CAdditionalEquipSlotClientMsg>::TypeHandler>  (line 867, @0x0000000001c79830, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAClientMsg_FreeInventory::~CDOTAClientMsg_FreeInventory, CDOTAClientMsg_FreeInventory::CDOTAClientMsg_FreeInventory
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CAdditionalEquipSlotClientMsg>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMsg_UnitOrder>::TypeHandler>  (line 867, @0x0000000001c79900, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAClientMsg_ExecuteOrders::~CDOTAClientMsg_ExecuteOrders, CDOTAClientMsg_ExecuteOrders::CDOTAClientMsg_ExecuteOrders
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMsg_UnitOrder>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability>::TypeHandler>  (line 867, @0x0000000001cc46d0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_MiniKillCamInfo_Attacker::CDOTAUserMsg_MiniKillCamInfo_Attacker, CDOTAUserMsg_MiniKillCamInfo_Attacker::~CDOTAUserMsg_MiniKillCamInfo_Attacker
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker>::TypeHandler>  (line 867, @0x0000000001cc4740, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_MiniKillCamInfo::~CDOTAUserMsg_MiniKillCamInfo, CDOTAUserMsg_MiniKillCamInfo::CDOTAUserMsg_MiniKillCamInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_PredictionResult_Prediction>::TypeHandler>  (line 867, @0x0000000001cc4810, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_PredictionResult::~CDOTAUserMsg_PredictionResult, CDOTAUserMsg_PredictionResult::CDOTAUserMsg_PredictionResult
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_PredictionResult_Prediction>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAResponseQuerySerialized_Fact>::TypeHandler>  (line 867, @0x0000000001cc48e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAResponseQuerySerialized::~CDOTAResponseQuerySerialized, CDOTAResponseQuerySerialized::CDOTAResponseQuerySerialized
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAResponseQuerySerialized_Fact>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_BoosterStatePlayer>::TypeHandler>  (line 867, @0x0000000001cc49b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_BoosterState::~CDOTAUserMsg_BoosterState, CDOTAUserMsg_BoosterState::CDOTAUserMsg_BoosterState
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_BoosterStatePlayer>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroPositionInfo_PositionPair>::TypeHandler>  (line 867, @0x0000000001cc4a80, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_StatsHeroPositionInfo::~CDOTAUserMsg_StatsHeroPositionInfo, CDOTAUserMsg_StatsHeroPositionInfo::CDOTAUserMsg_StatsHeroPositionInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroPositionInfo_PositionPair>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroMinuteDetails>::TypeHandler>  (line 867, @0x0000000001cc4b50, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_StatsTeamMinuteDetails::~CDOTAUserMsg_StatsTeamMinuteDetails, CDOTAUserMsg_StatsTeamMinuteDetails::CDOTAUserMsg_StatsTeamMinuteDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroMinuteDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance>::TypeHandler>  (line 867, @0x0000000001cc4bc0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_StatsTeamMinuteDetails::~CDOTAUserMsg_StatsTeamMinuteDetails, CDOTAUserMsg_StatsTeamMinuteDetails::CDOTAUserMsg_StatsTeamMinuteDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsPlayerKillShare>::TypeHandler>  (line 867, @0x0000000001cc4ca0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_StatsKillDetails::~CDOTAUserMsg_StatsKillDetails, CDOTAUserMsg_StatsKillDetails::CDOTAUserMsg_StatsKillDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsPlayerKillShare>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroLookup>::TypeHandler>  (line 867, @0x0000000001cc4d70, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_StatsMatchDetails::~CDOTAUserMsg_StatsMatchDetails, CDOTAUserMsg_StatsMatchDetails::CDOTAUserMsg_StatsMatchDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsHeroLookup>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails>::TypeHandler>  (line 867, @0x0000000001cc4de0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_StatsMatchDetails::~CDOTAUserMsg_StatsMatchDetails, CDOTAUserMsg_StatsMatchDetails::CDOTAUserMsg_StatsMatchDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsKillDetails>::TypeHandler>  (line 867, @0x0000000001cc4e50, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_StatsMatchDetails::~CDOTAUserMsg_StatsMatchDetails, CDOTAUserMsg_StatsMatchDetails::CDOTAUserMsg_StatsMatchDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsKillDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails>::TypeHandler>  (line 867, @0x0000000001cc4ec0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_StatsMatchDetails::~CDOTAUserMsg_StatsMatchDetails, CDOTAUserMsg_StatsMatchDetails::CDOTAUserMsg_StatsMatchDetails
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgHeroAbilityStat>::TypeHandler>  (line 867, @0x0000000001cc4fe0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgCombatAnalyzerPlayerStat::~CMsgCombatAnalyzerPlayerStat, CMsgCombatAnalyzerPlayerStat::CMsgCombatAnalyzerPlayerStat
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgHeroAbilityStat>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgCombatAnalyzerPlayerStat>::TypeHandler>  (line 867, @0x0000000001cc50b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgCombatAnalyzerStats::~CMsgCombatAnalyzerStats, CMsgCombatAnalyzerStats::CMsgCombatAnalyzerStats
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgCombatAnalyzerPlayerStat>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_CompendiumStatePlayer>::TypeHandler>  (line 867, @0x0000000001cc5180, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAUserMsg_CompendiumState::~CDOTAUserMsg_CompendiumState, CDOTAUserMsg_CompendiumState::CDOTAUserMsg_CompendiumState
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAUserMsg_CompendiumStatePlayer>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>  (line 867, @0x0000000001d62720, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTABroadcastMsg_LANLobbyReply::CDOTABroadcastMsg_LANLobbyReply, CDOTABroadcastMsg_LANLobbyReply::~CDOTABroadcastMsg_LANLobbyReply
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>  (line 867, @0x0000000001d6c590, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItem>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>  (line 867, @0x0000000001d6c600, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>  (line 867, @0x0000000001d6c670, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>  (line 867, @0x0000000001d6c6e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>  (line 867, @0x0000000001d6c750, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchMetadata_Team_Player::~CDOTAMatchMetadata_Team_Player, CDOTAMatchMetadata_Team_Player::CDOTAMatchMetadata_Team_Player
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>  (line 867, @0x0000000001d6c890, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchMetadata_Team::~CDOTAMatchMetadata_Team, CDOTAMatchMetadata_Team::CDOTAMatchMetadata_Team
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>  (line 867, @0x0000000001d6c9b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchMetadata::CDOTAMatchMetadata, CDOTAMatchMetadata::~CDOTAMatchMetadata
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchMetadata_Team>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>  (line 867, @0x0000000001d6ca90, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team, CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>  (line 867, @0x0000000001d6cb00, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchPrivateMetadata_Team::~CDOTAMatchPrivateMetadata_Team, CDOTAMatchPrivateMetadata_Team::CDOTAMatchPrivateMetadata_Team
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>  (line 867, @0x0000000001d6cbe0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CDOTAMatchPrivateMetadata::~CDOTAMatchPrivateMetadata, CDOTAMatchPrivateMetadata::CDOTAMatchPrivateMetadata
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CDOTAMatchPrivateMetadata_Team>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgHttpRequest_RequestHeader>::TypeHandler>  (line 867, @0x0000000001d86750, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgHttpRequest::CMsgHttpRequest, CMsgHttpRequest::~CMsgHttpRequest
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgHttpRequest_RequestHeader>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgHttpRequest_QueryParam>::TypeHandler>  (line 867, @0x0000000001d867c0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgHttpRequest::CMsgHttpRequest, CMsgHttpRequest::~CMsgHttpRequest
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgHttpRequest_QueryParam>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgHttpResponse_ResponseHeader>::TypeHandler>  (line 867, @0x0000000001d86830, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgHttpResponse::CMsgHttpResponse, CMsgHttpResponse::~CMsgHttpResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgHttpResponse_ResponseHeader>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgPackageLicense>::TypeHandler>  (line 867, @0x0000000001d868a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgAMGetLicensesResponse::~CMsgAMGetLicensesResponse, CMsgAMGetLicensesResponse::CMsgAMGetLicensesResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgPackageLicense>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAMGetUserGameStatsResponse_Stats>::TypeHandler>  (line 867, @0x0000000001d86970, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgAMGetUserGameStatsResponse::~CMsgAMGetUserGameStatsResponse, CMsgAMGetUserGameStatsResponse::CMsgAMGetUserGameStatsResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAMGetUserGameStatsResponse_Stats>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAMGetUserGameStatsResponse_Achievement_Blocks>::TypeHandler>  (line 867, @0x0000000001d869e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgAMGetUserGameStatsResponse::~CMsgAMGetUserGameStatsResponse, CMsgAMGetUserGameStatsResponse::CMsgAMGetUserGameStatsResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAMGetUserGameStatsResponse_Achievement_Blocks>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCMsgMemCachedGetResponse_ValueTag>::TypeHandler>  (line 867, @0x0000000001d86ac0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CGCMsgMemCachedGetResponse::~CGCMsgMemCachedGetResponse, CGCMsgMemCachedGetResponse::CGCMsgMemCachedGetResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCMsgMemCachedGetResponse_ValueTag>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCMsgMemCachedSet_KeyPair>::TypeHandler>  (line 867, @0x0000000001d86b90, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CGCMsgMemCachedSet::~CGCMsgMemCachedSet, CGCMsgMemCachedSet::CGCMsgMemCachedSet
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCMsgMemCachedSet_KeyPair>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CIPLocationInfo>::TypeHandler>  (line 867, @0x0000000001d86c60, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CGCMsgGetIPLocationResponse::~CGCMsgGetIPLocationResponse, CGCMsgGetIPLocationResponse::CGCMsgGetIPLocationResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CIPLocationInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CIPASNInfo>::TypeHandler>  (line 867, @0x0000000001d86d30, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CGCMsgGetIPASNResponse::~CGCMsgGetIPASNResponse, CGCMsgGetIPASNResponse::CGCMsgGetIPASNResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CIPASNInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAMSendEmail_PersonaNameReplacementToken>::TypeHandler>  (line 867, @0x0000000001d86e00, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgAMSendEmail::~CMsgAMSendEmail, CMsgAMSendEmail::CMsgAMSendEmail
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAMSendEmail_PersonaNameReplacementToken>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAMSendEmail_ReplacementToken>::TypeHandler>  (line 867, @0x0000000001d86e70, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgAMSendEmail::~CMsgAMSendEmail, CMsgAMSendEmail::CMsgAMSendEmail
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAMSendEmail_ReplacementToken>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCGetPersonaNames_Response_PersonaName>::TypeHandler>  (line 867, @0x0000000001d86f50, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCGetPersonaNames_Response::~CMsgGCGetPersonaNames_Response, CMsgGCGetPersonaNames_Response::CMsgGCGetPersonaNames_Response
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCGetPersonaNames_Response_PersonaName>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCMsgMasterSetDirectory_SubGC>::TypeHandler>  (line 867, @0x0000000001d87030, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCMsgMasterSetDirectory::~CMsgGCMsgMasterSetDirectory, CMsgGCMsgMasterSetDirectory::CMsgGCMsgMasterSetDirectory
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCMsgMasterSetDirectory_SubGC>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCMsgMasterSetWebAPIRouting_Entry>::TypeHandler>  (line 867, @0x0000000001d87100, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCMsgMasterSetWebAPIRouting::~CMsgGCMsgMasterSetWebAPIRouting, CMsgGCMsgMasterSetWebAPIRouting::CMsgGCMsgMasterSetWebAPIRouting
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCMsgMasterSetWebAPIRouting_Entry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCMsgMasterSetClientMsgRouting_Entry>::TypeHandler>  (line 867, @0x0000000001d871d0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCMsgMasterSetClientMsgRouting::~CMsgGCMsgMasterSetClientMsgRouting, CMsgGCMsgMasterSetClientMsgRouting::CMsgGCMsgMasterSetClientMsgRouting
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCMsgMasterSetClientMsgRouting_Entry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCMsgSetOptions_MessageRange>::TypeHandler>  (line 867, @0x0000000001d872a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCMsgSetOptions::~CMsgGCMsgSetOptions, CMsgGCMsgSetOptions::CMsgGCMsgSetOptions
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCMsgSetOptions_MessageRange>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCHUpdateSession_ExtraField>::TypeHandler>  (line 867, @0x0000000001d87380, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCHUpdateSession::~CMsgGCHUpdateSession, CMsgGCHUpdateSession::CMsgGCHUpdateSession
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCHUpdateSession_ExtraField>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDPPartnerMicroTxns_PartnerMicroTxn>::TypeHandler>  (line 867, @0x0000000001d87450, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgDPPartnerMicroTxns::CMsgDPPartnerMicroTxns, CMsgDPPartnerMicroTxns::~CMsgDPPartnerMicroTxns
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgDPPartnerMicroTxns_PartnerMicroTxn>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOMultipleObjects_SingleObject>::TypeHandler>  (line 867, @0x0000000001dcf290, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSOMultipleObjects::~CMsgSOMultipleObjects, CMsgSOMultipleObjects::CMsgSOMultipleObjects
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOMultipleObjects_SingleObject>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscribed_SubscribedType>::TypeHandler>  (line 867, @0x0000000001dcf390, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSOCacheSubscribed::~CMsgSOCacheSubscribed, CMsgSOCacheSubscribed::CMsgSOCacheSubscribed
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscribed_SubscribedType>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCToGCMsgMasterAck_Process>::TypeHandler>  (line 867, @0x0000000001dcf480, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CGCToGCMsgMasterAck::CGCToGCMsgMasterAck, CGCToGCMsgMasterAck::~CGCToGCMsgMasterAck
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCToGCMsgMasterAck_Process>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCToGCMsgMasterStartupComplete_GCInfo>::TypeHandler>  (line 867, @0x0000000001dcf4f0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CGCToGCMsgMasterStartupComplete::~CGCToGCMsgMasterStartupComplete, CGCToGCMsgMasterStartupComplete::CGCToGCMsgMasterStartupComplete
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCToGCMsgMasterStartupComplete_GCInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCUpdateSubGCSessionInfo_CMsgUpdate>::TypeHandler>  (line 867, @0x0000000001dcf5c0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCUpdateSubGCSessionInfo::~CMsgGCUpdateSubGCSessionInfo, CMsgGCUpdateSubGCSessionInfo::CMsgGCUpdateSubGCSessionInfo
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCUpdateSubGCSessionInfo_CMsgUpdate>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOCacheHaveVersion>::TypeHandler>  (line 867, @0x0000000001dcf690, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientHello::CMsgClientHello, CMsgClientHello::~CMsgClientHello
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOCacheHaveVersion>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscribed>::TypeHandler>  (line 867, @0x0000000001dcf700, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientWelcome::CMsgClientWelcome, CMsgClientWelcome::~CMsgClientWelcome
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscribed>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscriptionCheck>::TypeHandler>  (line 867, @0x0000000001dcf770, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientWelcome::CMsgClientWelcome, CMsgClientWelcome::~CMsgClientWelcome
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscriptionCheck>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions>::TypeHandler>  (line 867, @0x0000000001dcf7e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCToGCSOCacheSubscribe::~CMsgGCToGCSOCacheSubscribe, CMsgGCToGCSOCacheSubscribe::CMsgGCToGCSOCacheSubscribe
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCSOCacheSubscribe_CMsgHaveVersions>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription>::TypeHandler>  (line 867, @0x0000000001dcf8b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock::CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock, CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock::~CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock>::TypeHandler>  (line 867, @0x0000000001dcf920, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CWorkshop_PopulateItemDescriptions_Request::~CWorkshop_PopulateItemDescriptions_Request, CWorkshop_PopulateItemDescriptions_Request::CWorkshop_PopulateItemDescriptions_Request
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule>::TypeHandler>  (line 867, @0x0000000001dcf9f0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CWorkshop_SetItemPaymentRules_Request::~CWorkshop_SetItemPaymentRules_Request, CWorkshop_SetItemPaymentRules_Request::CWorkshop_SetItemPaymentRules_Request
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule>::TypeHandler>  (line 867, @0x0000000001dcfa60, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CWorkshop_SetItemPaymentRules_Request::~CWorkshop_SetItemPaymentRules_Request, CWorkshop_SetItemPaymentRules_Request::CWorkshop_SetItemPaymentRules_Request
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_Cache_Version>::TypeHandler>  (line 867, @0x0000000001dcfb40, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSerializedSOCache_Cache::~CMsgSerializedSOCache_Cache, CMsgSerializedSOCache_Cache::CMsgSerializedSOCache_Cache
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_Cache_Version>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_TypeCache>::TypeHandler>  (line 867, @0x0000000001dcfbb0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSerializedSOCache_Cache::~CMsgSerializedSOCache_Cache, CMsgSerializedSOCache_Cache::CMsgSerializedSOCache_Cache
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_TypeCache>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_Cache>::TypeHandler>  (line 867, @0x0000000001dcfc90, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSerializedSOCache::~CMsgSerializedSOCache, CMsgSerializedSOCache::CMsgSerializedSOCache
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSerializedSOCache_Cache>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCStorePurchaseInit_LineItem>::TypeHandler>  (line 867, @0x0000000001e03d60, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCStorePurchaseInit::CMsgGCStorePurchaseInit, CMsgGCStorePurchaseInit::~CMsgGCStorePurchaseInit
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCStorePurchaseInit_LineItem>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOItemCriteriaCondition>::TypeHandler>  (line 867, @0x0000000001e03dd0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSOItemCriteria::~CSOItemCriteria, CSOItemCriteria::CSOItemCriteria
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOItemCriteriaCondition>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOItemCriteria>::TypeHandler>  (line 867, @0x0000000001e03ea0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSOItemRecipe::CSOItemRecipe, CSOItemRecipe::~CSOItemRecipe
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOItemCriteria>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItemAttribute>::TypeHandler>  (line 867, @0x0000000001e03f10, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSOEconItem::~CSOEconItem, CSOEconItem::CSOEconItem
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItemAttribute>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItemEquipped>::TypeHandler>  (line 867, @0x0000000001e03f80, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CSOEconItem::~CSOEconItem, CSOEconItem::CSOEconItem
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CSOEconItemEquipped>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgConVarValue>::TypeHandler>  (line 867, @0x0000000001e04070, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgReplicateConVars::~CMsgReplicateConVars, CMsgReplicateConVars::CMsgReplicateConVars
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgConVarValue>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSetItemPositions_ItemPosition>::TypeHandler>  (line 867, @0x0000000001e04140, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgSetItemPositions::~CMsgSetItemPositions, CMsgSetItemPositions::CMsgSetItemPositions
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgSetItemPositions_ItemPosition>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCBannedWord>::TypeHandler>  (line 867, @0x0000000001e04210, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCBannedWordListResponse::~CMsgGCBannedWordListResponse, CMsgGCBannedWordListResponse::CMsgGCBannedWordListResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCBannedWord>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgRecipeComponent>::TypeHandler>  (line 867, @0x0000000001e042e0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgFulfillDynamicRecipeComponent::~CMsgFulfillDynamicRecipeComponent, CMsgFulfillDynamicRecipeComponent::CMsgFulfillDynamicRecipeComponent
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgRecipeComponent>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCClientMarketDataEntry>::TypeHandler>  (line 867, @0x0000000001e043b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCClientMarketData::~CMsgGCClientMarketData, CMsgGCClientMarketData::CMsgGCClientMarketData
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCClientMarketDataEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAddItemToSocketData>::TypeHandler>  (line 867, @0x0000000001e04480, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgAddItemToSocket::~CMsgAddItemToSocket, CMsgAddItemToSocket::CMsgAddItemToSocket
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAddItemToSocketData>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment>::TypeHandler>  (line 867, @0x0000000001e4c4d0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgEconPlayerStrangeCountAdjustment::~CMsgEconPlayerStrangeCountAdjustment, CMsgEconPlayerStrangeCountAdjustment::CMsgEconPlayerStrangeCountAdjustment
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment_CStrangeCountAdjustment>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCRequestStoreSalesDataResponse_Price>::TypeHandler>  (line 867, @0x0000000001e4c5a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCRequestStoreSalesDataResponse::~CMsgGCRequestStoreSalesDataResponse, CMsgGCRequestStoreSalesDataResponse::CMsgGCRequestStoreSalesDataResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCRequestStoreSalesDataResponse_Price>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgLookupMultipleAccountNamesResponse_Account>::TypeHandler>  (line 867, @0x0000000001e4c670, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgLookupMultipleAccountNamesResponse::~CMsgLookupMultipleAccountNamesResponse, CMsgLookupMultipleAccountNamesResponse::CMsgLookupMultipleAccountNamesResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgLookupMultipleAccountNamesResponse_Account>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute>::TypeHandler>  (line 867, @0x0000000001e4c740, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCToGCGrantAccountRolledItems_Item::~CMsgGCToGCGrantAccountRolledItems_Item, CMsgGCToGCGrantAccountRolledItems_Item::CMsgGCToGCGrantAccountRolledItems_Item
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item_DynamicAttribute>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry>::TypeHandler>  (line 867, @0x0000000001e4c7b0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCToGCGrantAccountRolledItems_Item::~CMsgGCToGCGrantAccountRolledItems_Item, CMsgGCToGCGrantAccountRolledItems_Item::CMsgGCToGCGrantAccountRolledItems_Item
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item_AdditionalAuditEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item>::TypeHandler>  (line 867, @0x0000000001e4c8a0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCToGCGrantAccountRolledItems::~CMsgGCToGCGrantAccountRolledItems, CMsgGCToGCGrantAccountRolledItems::CMsgGCToGCGrantAccountRolledItems
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCGrantAccountRolledItems_Item>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCStoreRechargeRedirect_LineItem>::TypeHandler>  (line 867, @0x0000000001e4c970, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCPartnerRechargeRedirectURLRequest::~CMsgGCPartnerRechargeRedirectURLRequest, CMsgGCPartnerRechargeRedirectURLRequest::CMsgGCPartnerRechargeRedirectURLRequest
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CGCStoreRechargeRedirect_LineItem>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCGetGiftPermissionsResponse_FriendPermission>::TypeHandler>  (line 867, @0x0000000001e4ca40, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientToGCGetGiftPermissionsResponse::~CMsgClientToGCGetGiftPermissionsResponse, CMsgClientToGCGetGiftPermissionsResponse::CMsgClientToGCGetGiftPermissionsResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCGetGiftPermissionsResponse_FriendPermission>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAdjustItemEquippedState>::TypeHandler>  (line 867, @0x0000000001e4cb10, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientToGCEquipItems::~CMsgClientToGCEquipItems, CMsgClientToGCEquipItems::CMsgClientToGCEquipItems
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgAdjustItemEquippedState>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCUnlockCrateResponse_Item>::TypeHandler>  (line 867, @0x0000000001e4cbe0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientToGCUnlockCrateResponse::~CMsgClientToGCUnlockCrateResponse, CMsgClientToGCUnlockCrateResponse::CMsgClientToGCUnlockCrateResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCUnlockCrateResponse_Item>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue>::TypeHandler>  (line 867, @0x0000000001e4ccb0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CWorkshop_GetItemDailyRevenue_Response::~CWorkshop_GetItemDailyRevenue_Response, CWorkshop_GetItemDailyRevenue_Response::CWorkshop_GetItemDailyRevenue_Response
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CWorkshop_GetItemDailyRevenue_Response_CountryDailyRevenue>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCCreateStaticRecipe_Item>::TypeHandler>  (line 867, @0x0000000001e4cd80, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientToGCCreateStaticRecipe::~CMsgClientToGCCreateStaticRecipe, CMsgClientToGCCreateStaticRecipe::CMsgClientToGCCreateStaticRecipe
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCCreateStaticRecipe_Item>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_OutputItem>::TypeHandler>  (line 867, @0x0000000001e4ce50, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientToGCCreateStaticRecipeResponse::~CMsgClientToGCCreateStaticRecipeResponse, CMsgClientToGCCreateStaticRecipeResponse::CMsgClientToGCCreateStaticRecipeResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_OutputItem>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_InputError>::TypeHandler>  (line 867, @0x0000000001e4cec0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientToGCCreateStaticRecipeResponse::~CMsgClientToGCCreateStaticRecipeResponse, CMsgClientToGCCreateStaticRecipeResponse::CMsgClientToGCCreateStaticRecipeResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_InputError>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  void **elements; // rdi
  __int64 v5; // r12
  int v6; // ebx
  void *v7; // rax

  elements = this->elements_;
  if ( SLODWORD(a2->elements_) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = elements[v5];
      if ( v7 != 0 )
      {
        (*(*v7 + 8LL))(elements[v5]);
        elements = this->elements_;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < SLODWORD(a2->elements_) );
  }
  if ( elements != 0 )
    operator delete[](elements);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput>::TypeHandler>  (line 867, @0x0000000001e4cf30, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgClientToGCCreateStaticRecipeResponse::~CMsgClientToGCCreateStaticRecipeResponse, CMsgClientToGCCreateStaticRecipeResponse::CMsgClientToGCCreateStaticRecipeResponse
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgClientToGCCreateStaticRecipeResponse_AdditionalOutput>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgProcessTransactionOrder_Item>::TypeHandler>  (line 867, @0x0000000001e4d020, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgProcessTransactionOrder::~CMsgProcessTransactionOrder, CMsgProcessTransactionOrder::CMsgProcessTransactionOrder
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgProcessTransactionOrder_Item>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCConsoleOutput_OutputLine>::TypeHandler>  (line 867, @0x0000000001e4d0f0, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgGCToGCConsoleOutput::CMsgGCToGCConsoleOutput, CMsgGCToGCConsoleOutput::~CMsgGCToGCConsoleOutput
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgGCToGCConsoleOutput_OutputLine>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgItemAges_MaxItemIDTimestamp>::TypeHandler>  (line 867, @0x0000000001e4d160, libserver.so)  // inlines: Delete
// calls: operator delete []
// callers: CMsgItemAges::~CMsgItemAges, CMsgItemAges::CMsgItemAges
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<CMsgItemAges_MaxItemIDTimestamp>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 v4; // r12
  int v5; // ebx
  void **i; // rdi
  void *v7; // rax

  v4 = 0;
  v5 = 0;
  for ( i = this->elements_; v5 < SLODWORD(a2->elements_); ++v4 )
  {
    v7 = i[v4];
    if ( v7 != 0 )
    {
      (*(*v7 + 8LL))(i[v4]);
      i = this->elements_;
    }
    ++v5;
  }
  if ( i != 0 )
    operator delete[](i);
}


// google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>  (line 900, @0x00000000025d4120, libserver.so)  // inlines: New
// calls: operator new, CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CIngameEvent_Base::AddResultToSignout, CIngameEvent_FM2015::AddResultToSignout, CDOTAGCServerSystem::MatchSignOut
google::protobuf::internal::GenericTypeHandler<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::Type *__fastcall google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  __int64 current_size; // rax
  int allocated_size; // esi
  CMsgGameMatchSignOut_CAdditionalSignoutMsg *v4; // r12
  __int64 v5; // rax
  void **v6; // rdx
  void **elements; // rdx

  current_size = this->current_size_;
  allocated_size = this->allocated_size_;
  if ( current_size < allocated_size )
  {
    elements = this->elements_;
    this->current_size_ = current_size + 1;
    return elements[current_size];
  }
  else
  {
    if ( allocated_size == this->total_size_ )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, allocated_size + 1);
    v4 = operator new(0x28u);
    CMsgGameMatchSignOut_CAdditionalSignoutMsg::CMsgGameMatchSignOut_CAdditionalSignoutMsg(v4);
    v5 = this->current_size_;
    v6 = this->elements_;
    ++this->allocated_size_;
    this->current_size_ = v5 + 1;
    v6[v5] = v4;
    return v4;
  }
}


// google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails>::TypeHandler>  (line 900, @0x00000000029b2630, libserver.so)  // inlines: New
// calls: operator new, CMsgDOTARealtimeGameStats_PickBanDetails::CMsgDOTARealtimeGameStats_PickBanDetails, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
google::protobuf::internal::GenericTypeHandler<CMsgDOTARealtimeGameStats_PickBanDetails>::Type *__fastcall google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  __int64 current_size; // rax
  int allocated_size; // esi
  CMsgDOTARealtimeGameStats_PickBanDetails *v4; // r12
  __int64 v5; // rax
  void **v6; // rdx
  void **elements; // rdx

  current_size = this->current_size_;
  allocated_size = this->allocated_size_;
  if ( current_size < allocated_size )
  {
    elements = this->elements_;
    this->current_size_ = current_size + 1;
    return elements[current_size];
  }
  else
  {
    if ( allocated_size == this->total_size_ )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, allocated_size + 1);
    v4 = operator new(0x20u);
    CMsgDOTARealtimeGameStats_PickBanDetails::CMsgDOTARealtimeGameStats_PickBanDetails(v4);
    v5 = this->current_size_;
    v6 = this->elements_;
    ++this->allocated_size_;
    this->current_size_ = v5 + 1;
    v6[v5] = v4;
    return v4;
  }
}


// google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgPoorNetworkConditions_Player>::TypeHandler>  (line 900, @0x00000000029b26c0, libserver.so)  // inlines: New
// calls: operator new, CMsgPoorNetworkConditions_Player::CMsgPoorNetworkConditions_Player, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CDOTAGCServerSystem::CheckPoorNetworkConditions
google::protobuf::internal::GenericTypeHandler<CMsgPoorNetworkConditions_Player>::Type *__fastcall google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<CMsgPoorNetworkConditions_Player>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  __int64 current_size; // rax
  int allocated_size; // esi
  CMsgPoorNetworkConditions_Player *v4; // r12
  __int64 v5; // rax
  void **v6; // rdx
  void **elements; // rdx

  current_size = this->current_size_;
  allocated_size = this->allocated_size_;
  if ( current_size < allocated_size )
  {
    elements = this->elements_;
    this->current_size_ = current_size + 1;
    return elements[current_size];
  }
  else
  {
    if ( allocated_size == this->total_size_ )
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, allocated_size + 1);
    v4 = operator new(0x28u);
    CMsgPoorNetworkConditions_Player::CMsgPoorNetworkConditions_Player(v4);
    v5 = this->current_size_;
    v6 = this->elements_;
    ++this->allocated_size_;
    this->current_size_ = v5 + 1;
    v6[v5] = v4;
    return v4;
  }
}


// google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>  (line 918, @0x0000000001ad09a0 libserver.so, @0x0000000001b3e2c0 libserver.so, @0x0000000001b6d560 libserver.so, @0x0000000001d86600 libserver.so, @0x0000000001dcf190 libserver.so, @0x0000000001e03c60 libserver.so (+1 more))  // inlines: Clear, clear, size
// calls: std::string::_M_mutate(ulong,ulong,ulong)
// callers: CUserMessageTextMsg::Clear, CUserMessageKeyHintText::Clear
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *const a2)
{
  __int64 i; // rbx

  for ( i = 0; SLODWORD(a2->elements_) > i; ++i )
    std::string::_M_mutate(this->elements_[i], 0, *(*this->elements_[i] - 24LL), 0);
  LODWORD(a2->elements_) = 0;
}


