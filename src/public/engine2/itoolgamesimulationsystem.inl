
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t>::RedispatchGameToolEvent  (line 252, @0x00000000020f8bf0, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>, PostReturnValue<ToolEvent_GetEntityInfoResult_t>, operator()
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_GetEntityInfoResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
void __fastcall CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t,ToolEvent_GetEntityInfoResult_t>::RedispatchGameToolEvent(
        CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t,ToolEvent_GetEntityInfoResult_t> *const this,
        const ToolEvent_GetEntityInfo_t *const msg)
{
  char *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  IToolGameSimulationDispatcher *v7; // r12

  (*(*this + 32LL))(this);
  v4 = *(this + 10);
  v5 = (*(this + 11) + *(this + 9));
  if ( (v4 & 1) != 0 )
    v4 = *&v4[*v5 - 1];
  if ( (v4)(v5, msg, this) == 1 )
  {
    v6 = IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>(bool)::s_hEvent;
    v7 = g_pToolGameSimulationDispatcher;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>(bool)::s_hEvent == 0 )
    {
      v6 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_GetEntityInfoResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 72, 0, 0, 1);
        v6 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>(bool)::s_hEvent = v6;
    }
    (*(*v7 + 112LL))(v7, v6, this);
  }
}


// CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t>::RedispatchGameToolEvent  (line 252, @0x00000000020f8cc0, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>, PostReturnValue<ToolEvent_GetEntityInputsResult_t>, operator()
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_GetEntityInputsResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
void __fastcall CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t,ToolEvent_GetEntityInputsResult_t>::RedispatchGameToolEvent(
        CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t,ToolEvent_GetEntityInputsResult_t> *const this,
        const ToolEvent_GetEntityInputs_t *const msg)
{
  char *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  IToolGameSimulationDispatcher *v7; // r12

  (*(*this + 32LL))(this);
  v4 = *(this + 7);
  v5 = (*(this + 8) + *(this + 6));
  if ( (v4 & 1) != 0 )
    v4 = *&v4[*v5 - 1];
  if ( (v4)(v5, msg, this) == 1 )
  {
    v6 = IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>(bool)::s_hEvent;
    v7 = g_pToolGameSimulationDispatcher;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>(bool)::s_hEvent == 0 )
    {
      v6 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_GetEntityInputsResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 48, 0, 0, 1);
        v6 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>(bool)::s_hEvent = v6;
    }
    (*(*v7 + 112LL))(v7, v6, this);
  }
}


// CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>::RedispatchGameToolEvent  (line 252, @0x00000000020f8d90, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolTraceRayResult_t>, FindOrCreateNetMessage<ToolTraceRayResult_t>, PostReturnValue<ToolTraceRayResult_t>, operator()
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolTraceRayResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolTraceRayResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
void __fastcall CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t,ToolTraceRayResult_t>::RedispatchGameToolEvent(
        CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t,ToolTraceRayResult_t> *const this,
        const TraceRayServerToolEvent_t *const msg)
{
  char *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  IToolGameSimulationDispatcher *v7; // r12

  (*(*this + 32LL))(this);
  v4 = *(this + 8);
  v5 = (*(this + 9) + *(this + 7));
  if ( (v4 & 1) != 0 )
    v4 = *&v4[*v5 - 1];
  if ( (v4)(v5, msg, this) == 1 )
  {
    v6 = IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolTraceRayResult_t>(bool)::s_hEvent;
    v7 = g_pToolGameSimulationDispatcher;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolTraceRayResult_t>(bool)::s_hEvent == 0 )
    {
      v6 = INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolTraceRayResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 56, 0, 0, 1);
        v6 = INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolTraceRayResult_t>(bool)::s_hEvent = v6;
    }
    (*(*v7 + 112LL))(v7, v6, this);
  }
}


// CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t>::RedispatchGameToolEvent  (line 252, @0x00000000020f8e60, libserver.so)  // inlines: FindOrCreateGameToolEvent<SpawnEntityToolEventResult_t>, FindOrCreateNetMessage<SpawnEntityToolEventResult_t>, PostReturnValue<SpawnEntityToolEventResult_t>, operator()
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEventResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEventResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,SpawnEntityToolEventResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
void __fastcall CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t,SpawnEntityToolEventResult_t>::RedispatchGameToolEvent(
        CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t,SpawnEntityToolEventResult_t> *const this,
        const SpawnEntityToolEvent_t *const msg)
{
  char *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  IToolGameSimulationDispatcher *v7; // r12

  (*(*this + 32LL))(this);
  v4 = *(this + 5);
  v5 = (*(this + 6) + *(this + 4));
  if ( (v4 & 1) != 0 )
    v4 = *&v4[*v5 - 1];
  if ( (v4)(v5, msg, this) == 1 )
  {
    v6 = IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEventResult_t>(bool)::s_hEvent;
    v7 = g_pToolGameSimulationDispatcher;
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEventResult_t>(bool)::s_hEvent == 0 )
    {
      v6 = INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEventResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEventResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEventResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,SpawnEntityToolEventResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 0, 1);
        v6 = INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEventResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEventResult_t>(bool)::s_hEvent = v6;
    }
    (*(*v7 + 112LL))(v7, v6, this);
  }
}


