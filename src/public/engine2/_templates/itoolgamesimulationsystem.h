// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/itoolgamesimulationsystem.h:244
class CRedispatchEventWithReturnValue<SpawnEntityToolEvent_t, SpawnEntityToolEventResult_t> {
private:

	CUtlDelegate<GameToolEventHandlerResult_t(const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*)> m_delegate;  // +0x20
	CRedispatchEventWithReturnValue(CUtlDelegate<GameToolEventHandlerResult_t(const SpawnEntityToolEvent_t&, SpawnEntityToolEventResult_t*)>);
	void RedispatchGameToolEvent(const SpawnEntityToolEvent_t &);
	~CRedispatchEventWithReturnValue();

	// sizeof = 56
};

// src/public/engine2/itoolgamesimulationsystem.h:244
class CRedispatchEventWithReturnValue<ToolEvent_GetEntityInfo_t, ToolEvent_GetEntityInfoResult_t> {
private:

	CUtlDelegate<GameToolEventHandlerResult_t(const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*)> m_delegate;  // +0x48
	CRedispatchEventWithReturnValue(CUtlDelegate<GameToolEventHandlerResult_t(const ToolEvent_GetEntityInfo_t&, ToolEvent_GetEntityInfoResult_t*)>);
	void RedispatchGameToolEvent(const ToolEvent_GetEntityInfo_t &);
	~CRedispatchEventWithReturnValue();

	// sizeof = 96
};

// src/public/engine2/itoolgamesimulationsystem.h:244
class CRedispatchEventWithReturnValue<ToolEvent_GetEntityInputs_t, ToolEvent_GetEntityInputsResult_t> {
private:

	CUtlDelegate<GameToolEventHandlerResult_t(const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*)> m_delegate;  // +0x30
	CRedispatchEventWithReturnValue(CUtlDelegate<GameToolEventHandlerResult_t(const ToolEvent_GetEntityInputs_t&, ToolEvent_GetEntityInputsResult_t*)>);
	void RedispatchGameToolEvent(const ToolEvent_GetEntityInputs_t &);
	~CRedispatchEventWithReturnValue();

	// sizeof = 72
};

// CRedispatchEventWithReturnValue: 1 more instantiations (full list in INDEX.tsv)
//   CRedispatchEventWithReturnValue<TraceRayServerToolEvent_t, ToolTraceRayResult_t>
