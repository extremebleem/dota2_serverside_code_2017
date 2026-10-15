// Reconstructed from DWARF by pahole; not original source.

// src/public/game/gametoolevents.h:15
struct ChangeMapToolEvent_t : public CNetMessagePB<-1, ChangeMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ChangeMapToolEvent_t(ChangeMapToolEvent_t &);
	ChangeMapToolEvent_t(const ChangeMapToolEvent_t &);
	ChangeMapToolEvent_t();
	virtual ~ChangeMapToolEvent_t();

	// sizeof = 32
};

// src/public/game/gametoolevents.h:16
struct TraceRayServerToolEvent_t : public CNetMessagePB<-1, TraceRayServerToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	TraceRayServerToolEvent_t(TraceRayServerToolEvent_t &);
	TraceRayServerToolEvent_t(const TraceRayServerToolEvent_t &);
	TraceRayServerToolEvent_t();
	virtual ~TraceRayServerToolEvent_t();

	// sizeof = 40
};

// src/public/game/gametoolevents.h:17
struct ToolTraceRayResult_t : public CNetMessagePB<-1, ToolTraceRayResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ToolTraceRayResult_t(ToolTraceRayResult_t &);
	ToolTraceRayResult_t(const ToolTraceRayResult_t &);
	ToolTraceRayResult_t();
	virtual ~ToolTraceRayResult_t();

	// sizeof = 56
};

// src/public/game/gametoolevents.h:18
struct SpawnEntityToolEvent_t : public CNetMessagePB<-1, SpawnEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	SpawnEntityToolEvent_t(SpawnEntityToolEvent_t &);
	SpawnEntityToolEvent_t(const SpawnEntityToolEvent_t &);
	SpawnEntityToolEvent_t();
	virtual ~SpawnEntityToolEvent_t();

	// sizeof = 40
};

// src/public/game/gametoolevents.h:19
struct SpawnEntityToolEventResult_t : public CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	SpawnEntityToolEventResult_t(SpawnEntityToolEventResult_t &);
	SpawnEntityToolEventResult_t(const SpawnEntityToolEventResult_t &);
	SpawnEntityToolEventResult_t();
	virtual ~SpawnEntityToolEventResult_t();

	// sizeof = 32
};

// src/public/game/gametoolevents.h:20
struct DestroyEntityToolEvent_t : public CNetMessagePB<-1, DestroyEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	DestroyEntityToolEvent_t(DestroyEntityToolEvent_t &);
	DestroyEntityToolEvent_t(const DestroyEntityToolEvent_t &);
	DestroyEntityToolEvent_t();
	virtual ~DestroyEntityToolEvent_t();

	// sizeof = 32
};

// src/public/game/gametoolevents.h:21
struct DestroyAllEntitiesToolEvent_t : public CNetMessagePB<-1, DestroyAllEntitiesToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	DestroyAllEntitiesToolEvent_t(DestroyAllEntitiesToolEvent_t &);
	DestroyAllEntitiesToolEvent_t(const DestroyAllEntitiesToolEvent_t &);
	DestroyAllEntitiesToolEvent_t();
	virtual ~DestroyAllEntitiesToolEvent_t();

	// sizeof = 24
};

// src/public/game/gametoolevents.h:22
struct RestartMapToolEvent_t : public CNetMessagePB<-1, RestartMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	RestartMapToolEvent_t(RestartMapToolEvent_t &);
	RestartMapToolEvent_t(const RestartMapToolEvent_t &);
	RestartMapToolEvent_t();
	virtual ~RestartMapToolEvent_t();

	// sizeof = 24
};

// src/public/game/gametoolevents.h:23
struct ToolEvent_GetEntityInfo_t : public CNetMessagePB<-1, ToolEvent_GetEntityInfo, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ToolEvent_GetEntityInfo_t(ToolEvent_GetEntityInfo_t &);
	ToolEvent_GetEntityInfo_t(const ToolEvent_GetEntityInfo_t &);
	ToolEvent_GetEntityInfo_t();
	virtual ~ToolEvent_GetEntityInfo_t();

	// sizeof = 32
};

// src/public/game/gametoolevents.h:24
struct ToolEvent_GetEntityInfoResult_t : public CNetMessagePB<-1, ToolEvent_GetEntityInfoResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ToolEvent_GetEntityInfoResult_t(ToolEvent_GetEntityInfoResult_t &);
	ToolEvent_GetEntityInfoResult_t(const ToolEvent_GetEntityInfoResult_t &);
	ToolEvent_GetEntityInfoResult_t();
	virtual ~ToolEvent_GetEntityInfoResult_t();

	// sizeof = 72
};

// src/public/game/gametoolevents.h:25
struct ToolEvent_GetEntityInputs_t : public CNetMessagePB<-1, ToolEvent_GetEntityInputs, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ToolEvent_GetEntityInputs_t(ToolEvent_GetEntityInputs_t &);
	ToolEvent_GetEntityInputs_t(const ToolEvent_GetEntityInputs_t &);
	ToolEvent_GetEntityInputs_t();
	virtual ~ToolEvent_GetEntityInputs_t();

	// sizeof = 32
};

// src/public/game/gametoolevents.h:26
struct ToolEvent_GetEntityInputsResult_t : public CNetMessagePB<-1, ToolEvent_GetEntityInputsResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ToolEvent_GetEntityInputsResult_t(ToolEvent_GetEntityInputsResult_t &);
	ToolEvent_GetEntityInputsResult_t(const ToolEvent_GetEntityInputsResult_t &);
	ToolEvent_GetEntityInputsResult_t();
	virtual ~ToolEvent_GetEntityInputsResult_t();

	// sizeof = 48
};

// src/public/game/gametoolevents.h:27
struct ToolEvent_FireEntityInput_t : public CNetMessagePB<-1, ToolEvent_FireEntityInput, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ToolEvent_FireEntityInput_t(ToolEvent_FireEntityInput_t &);
	ToolEvent_FireEntityInput_t(const ToolEvent_FireEntityInput_t &);
	ToolEvent_FireEntityInput_t();
	virtual ~ToolEvent_FireEntityInput_t();

	// sizeof = 48
};

// src/public/game/gametoolevents.h:28
struct ToolEvent_SFMRecordingStateChanged_t : public CNetMessagePB<-1, ToolEvent_SFMRecordingStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ToolEvent_SFMRecordingStateChanged_t(bool);
	virtual ~ToolEvent_SFMRecordingStateChanged_t();

	// sizeof = 32
};

// src/public/game/gametoolevents.h:32
struct ToolEvent_SFMToolActiveStateChanged_t : public CNetMessagePB<-1, ToolEvent_SFMToolActiveStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false> {
public:

	ToolEvent_SFMToolActiveStateChanged_t(bool);
	virtual ~ToolEvent_SFMToolActiveStateChanged_t();

	// sizeof = 32
};
