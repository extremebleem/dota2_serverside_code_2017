
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RegisterGameToolEventMessage<ToolEvent_SFMRecordingStateChanged_t>  (line 23, @0x0000000001f78180, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>, FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>, RegisterGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_SFMRecordingStateChanged,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<ToolEvent_SFMRecordingStateChanged_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_SFMRecordingStateChanged,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMRecordingStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMRecordingStateChanged_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<ToolEvent_SFMToolActiveStateChanged_t>  (line 23, @0x00000000020faa10, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_SFMToolActiveStateChanged_t>, FindOrCreateNetMessage<ToolEvent_SFMToolActiveStateChanged_t>, RegisterGameToolEvent<ToolEvent_SFMToolActiveStateChanged_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMToolActiveStateChanged_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMToolActiveStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_SFMToolActiveStateChanged,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<ToolEvent_SFMToolActiveStateChanged_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMToolActiveStateChanged_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMToolActiveStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMToolActiveStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMToolActiveStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_SFMToolActiveStateChanged,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_SFMToolActiveStateChanged_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_SFMToolActiveStateChanged_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<ToolEvent_GetEntityInfoResult_t>  (line 23, @0x00000000020fb960, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>, RegisterGameToolEvent<ToolEvent_GetEntityInfoResult_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_GetEntityInfoResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<ToolEvent_GetEntityInfoResult_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_GetEntityInfoResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 72, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfoResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfoResult_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<ToolTraceRayResult_t>  (line 23, @0x00000000020fba00, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolTraceRayResult_t>, FindOrCreateNetMessage<ToolTraceRayResult_t>, RegisterGameToolEvent<ToolTraceRayResult_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolTraceRayResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolTraceRayResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<ToolTraceRayResult_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolTraceRayResult_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolTraceRayResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 56, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<ToolTraceRayResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolTraceRayResult_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<ToolEvent_GetEntityInputsResult_t>  (line 23, @0x00000000020fbaa0, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>, RegisterGameToolEvent<ToolEvent_GetEntityInputsResult_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_GetEntityInputsResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<ToolEvent_GetEntityInputsResult_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_GetEntityInputsResult,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 48, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputsResult_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputsResult_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<ToolEvent_GetEntityInputs_t>  (line 23, @0x00000000020fc0c0, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>, RegisterGameToolEvent<ToolEvent_GetEntityInputs_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_GetEntityInputs,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<ToolEvent_GetEntityInputs_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_GetEntityInputs,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInputs_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInputs_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<SpawnEntityToolEvent_t>  (line 23, @0x00000000020fc160, libserver.so)  // inlines: FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>, FindOrCreateNetMessage<SpawnEntityToolEvent_t>, RegisterGameToolEvent<SpawnEntityToolEvent_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,SpawnEntityToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<SpawnEntityToolEvent_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,SpawnEntityToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 40, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<SpawnEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<SpawnEntityToolEvent_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<ToolEvent_GetEntityInfo_t>  (line 23, @0x00000000020fc200, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>, FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>, RegisterGameToolEvent<ToolEvent_GetEntityInfo_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_GetEntityInfo,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<ToolEvent_GetEntityInfo_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_GetEntityInfo,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_GetEntityInfo_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_GetEntityInfo_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<TraceRayServerToolEvent_t>  (line 23, @0x00000000020fc2a0, libserver.so)  // inlines: FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>, FindOrCreateNetMessage<TraceRayServerToolEvent_t>, RegisterGameToolEvent<TraceRayServerToolEvent_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,TraceRayServerToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<TraceRayServerToolEvent_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,TraceRayServerToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 40, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<TraceRayServerToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<TraceRayServerToolEvent_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<DestroyEntityToolEvent_t>  (line 23, @0x00000000020fc340, libserver.so)  // inlines: FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>, FindOrCreateNetMessage<DestroyEntityToolEvent_t>, RegisterGameToolEvent<DestroyEntityToolEvent_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,DestroyEntityToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<DestroyEntityToolEvent_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,DestroyEntityToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 32, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<DestroyEntityToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyEntityToolEvent_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<ToolEvent_FireEntityInput_t>  (line 23, @0x00000000020fc3e0, libserver.so)  // inlines: FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>, FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>, RegisterGameToolEvent<ToolEvent_FireEntityInput_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,ToolEvent_FireEntityInput,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<ToolEvent_FireEntityInput_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,ToolEvent_FireEntityInput,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 48, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<ToolEvent_FireEntityInput_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<ToolEvent_FireEntityInput_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<DestroyAllEntitiesToolEvent_t>  (line 23, @0x00000000020fc480, libserver.so)  // inlines: FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>, FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>, RegisterGameToolEvent<DestroyAllEntitiesToolEvent_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,DestroyAllEntitiesToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<DestroyAllEntitiesToolEvent_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,DestroyAllEntitiesToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 24, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<DestroyAllEntitiesToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<DestroyAllEntitiesToolEvent_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// RegisterGameToolEventMessage<RestartMapToolEvent_t>  (line 23, @0x00000000020fc520, libserver.so)  // inlines: FindOrCreateGameToolEvent<RestartMapToolEvent_t>, FindOrCreateNetMessage<RestartMapToolEvent_t>, RegisterGameToolEvent<RestartMapToolEvent_t>
// globals: IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent, INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle, CNetMessagePB<-1,RestartMapToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding
bool __cdecl RegisterGameToolEventMessage<RestartMapToolEvent_t>()
{
  IToolGameSimulationDispatcher *v0; // rbx
  __int64 v2; // rsi

  v0 = g_pToolGameSimulationDispatcher;
  if ( g_pToolGameSimulationDispatcher != 0 )
  {
    if ( IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent == 0 )
    {
      v2 = INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      if ( INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle == 0 )
      {
        INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle = (*(*g_pNetworkMessages + 24LL))(g_pNetworkMessages, 0xFFFFFFFFLL, &CNetMessagePB<-1,RestartMapToolEvent,(SignonGroup_t)11,(NetChannelBufType_t)1,false>::s_ProtobufBinding, 24, 0, 1, 1);
        v2 = INetworkMessages::FindOrCreateNetMessage<RestartMapToolEvent_t>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
      }
      IToolGameSimulationBase::FindOrCreateGameToolEvent<RestartMapToolEvent_t>(bool)::s_hEvent = v2;
    }
    (*(*v0 + 88LL))(v0);
  }
  return 1;
}


// UnregisterGameToolEventMessage<ToolEvent_SFMRecordingStateChanged_t>  (line 32, @0x0000000001f72470, libserver.so)
void __cdecl UnregisterGameToolEventMessage<ToolEvent_SFMRecordingStateChanged_t>()
{
  ;
}


// UnregisterGameToolEventMessage<ToolEvent_GetEntityInfo_t>  (line 32, @0x00000000020f1cf0, libserver.so)
void __cdecl UnregisterGameToolEventMessage<ToolEvent_GetEntityInfo_t>()
{
  ;
}


// UnregisterGameToolEventMessage<ToolEvent_GetEntityInfoResult_t>  (line 32, @0x00000000020f1d00, libserver.so)
void __cdecl UnregisterGameToolEventMessage<ToolEvent_GetEntityInfoResult_t>()
{
  ;
}


// UnregisterGameToolEventMessage<ToolEvent_GetEntityInputs_t>  (line 32, @0x00000000020f1d10, libserver.so)
void __cdecl UnregisterGameToolEventMessage<ToolEvent_GetEntityInputs_t>()
{
  ;
}


// UnregisterGameToolEventMessage<ToolEvent_GetEntityInputsResult_t>  (line 32, @0x00000000020f1d20, libserver.so)
void __cdecl UnregisterGameToolEventMessage<ToolEvent_GetEntityInputsResult_t>()
{
  ;
}


// UnregisterGameToolEventMessage<ToolEvent_FireEntityInput_t>  (line 32, @0x00000000020f1d30, libserver.so)
void __cdecl UnregisterGameToolEventMessage<ToolEvent_FireEntityInput_t>()
{
  ;
}


// UnregisterGameToolEventMessage<ToolEvent_SFMToolActiveStateChanged_t>  (line 32, @0x00000000020f1d40, libserver.so)
void __cdecl UnregisterGameToolEventMessage<ToolEvent_SFMToolActiveStateChanged_t>()
{
  ;
}


// UnregisterGameToolEventMessage<SpawnEntityToolEvent_t>  (line 32, @0x00000000020f1d50, libserver.so)
void __cdecl UnregisterGameToolEventMessage<SpawnEntityToolEvent_t>()
{
  ;
}


// UnregisterGameToolEventMessage<DestroyEntityToolEvent_t>  (line 32, @0x00000000020f1d60, libserver.so)
void __cdecl UnregisterGameToolEventMessage<DestroyEntityToolEvent_t>()
{
  ;
}


// UnregisterGameToolEventMessage<RestartMapToolEvent_t>  (line 32, @0x00000000020f1d70, libserver.so)
void __cdecl UnregisterGameToolEventMessage<RestartMapToolEvent_t>()
{
  ;
}


// UnregisterGameToolEventMessage<DestroyAllEntitiesToolEvent_t>  (line 32, @0x00000000020f1d80, libserver.so)
void __cdecl UnregisterGameToolEventMessage<DestroyAllEntitiesToolEvent_t>()
{
  ;
}


// UnregisterGameToolEventMessage<TraceRayServerToolEvent_t>  (line 32, @0x00000000020f1d90, libserver.so)
void __cdecl UnregisterGameToolEventMessage<TraceRayServerToolEvent_t>()
{
  ;
}


// UnregisterGameToolEventMessage<ToolTraceRayResult_t>  (line 32, @0x00000000020f1da0, libserver.so)
void __cdecl UnregisterGameToolEventMessage<ToolTraceRayResult_t>()
{
  ;
}


