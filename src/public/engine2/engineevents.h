// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/engineevents.h:45
struct EngineLoopState_t {
private:

	PlatWindow_t m_hWnd;  // +0x0
	SwapChainHandle_t m_hSwapChain;  // +0x8
	InputContextHandle_t m_hInputContext;  // +0x10
	int m_nPlatWindowWidth;  // +0x18
	int m_nPlatWindowHeight;  // +0x1c
	int m_nRenderWidth;  // +0x20
	int m_nRenderHeight;  // +0x24

	// sizeof = 40
};

// src/public/engine2/engineevents.h:65
struct EventModInitialized_t {
private:

	// sizeof = 1
};

// src/public/engine2/engineevents.h:71
struct EventFrameBoundary_t {
private:

	float m_flFrameTime;  // +0x0

	// sizeof = 4
};

// src/public/engine2/engineevents.h:79
struct EventProfileStorageAvailable_t {
private:

	int m_nSplitScreenSlot;  // +0x0

	// sizeof = 4
};

// src/public/engine2/engineevents.h:86
struct EventSplitScreenStateChanged_t {
private:

	// sizeof = 1
};

// src/public/engine2/engineevents.h:91
struct EventSetTime_t {
private:

	int32 m_nClientOutputFrames;  // +0x28

	float64 m_flRealTime;  // +0x30
	float64 m_flRenderTime;  // +0x38
	float64 m_flRenderFrameTime;  // +0x40
	float64 m_flRenderFrameTimeUnbounded;  // +0x48
	float64 m_flRenderFrameTimeUnscaled;  // +0x50
	float64 m_flTickRemainder;  // +0x58

	EventSetTime_t();
	EventSetTime_t(const EngineLoopState_t &, int32, float64, float64, float64, float64, float64, float64);

	// sizeof = 96
};

// src/public/engine2/engineevents.h:127
struct EventClientPollInput_t {
private:

	float m_flRealTime;  // +0x28

	EventClientPollInput_t();
	EventClientPollInput_t(const EngineLoopState_t &, float);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:140
struct EventClientProcessInput_t {
private:

	float m_flRealTime;  // +0x28
	float m_flFrameTime;  // +0x2c

	EventClientProcessInput_t();
	EventClientProcessInput_t(const EngineLoopState_t &, float, float);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:154
struct EventClientProcessGameInput_t {
private:

	float m_flRealTime;  // +0x28
	float m_flFrameTime;  // +0x2c

	EventClientProcessGameInput_t();
	EventClientProcessGameInput_t(const EngineLoopState_t &, float, float);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:169
struct EventClientPreOutput_t {
private:

	float64 m_flRenderTime;  // +0x28
	float64 m_flRenderFrameTime;  // +0x30
	float64 m_flRenderFrameTimeUnbounded;  // +0x38

	EventClientPreOutput_t();
	EventClientPreOutput_t(const EngineLoopState_t &, float64, float64, float64);

	// sizeof = 64
};

// src/public/engine2/engineevents.h:191
struct EventClientSceneSystemThreadStateChange_t {
private:

	bool m_bThreadsActive;  // +0x0

	EventClientSceneSystemThreadStateChange_t();
	EventClientSceneSystemThreadStateChange_t(bool);

	// sizeof = 1
};

// src/public/engine2/engineevents.h:204
struct EventClientOutput_t {
private:

	float m_flRenderTime;  // +0x28
	float m_flRealTime;  // +0x2c

	EventClientOutput_t();
	EventClientOutput_t(const EngineLoopState_t &, float, float);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:219
struct EventClientPostOutput_t {
private:

	float64 m_flRenderTime;  // +0x28
	float m_flRenderFrameTime;  // +0x30
	float m_flRenderFrameTimeUnbounded;  // +0x34

	EventClientPostOutput_t();
	EventClientPostOutput_t(const EngineLoopState_t &, float64, float, float);

	// sizeof = 56
};

// src/public/engine2/engineevents.h:237
struct EventClientFrameSimulate_t {
private:

	float m_flRealTime;  // +0x28
	float m_flFrameTime;  // +0x2c

	EventClientFrameSimulate_t();
	EventClientFrameSimulate_t(const EngineLoopState_t &, float, float);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:252
struct EventSimpleLoopFrameUpdate_t {
private:

	float m_flRealTime;  // +0x28
	float m_flFrameTime;  // +0x2c

	EventSimpleLoopFrameUpdate_t();
	EventSimpleLoopFrameUpdate_t(const EngineLoopState_t &, float, float);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:265
struct EventSimulate_t {
private:

	bool m_bFirstTick;  // +0x28
	bool m_bLastTick;  // +0x29

	EventSimulate_t();
	EventSimulate_t(const EngineLoopState_t &, bool, bool);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:281
struct EventAdvanceTick_t : public EventSimulate_t {
public:

private:

	int m_nCurrentTick;  // +0x2c
	int m_nTotalTicksThisFrame;  // +0x30
	int m_nTotalTicks;  // +0x34

	EventAdvanceTick_t();
	EventAdvanceTick_t(const EngineLoopState_t &, bool, bool, int, int, int);

	// sizeof = 56
};

// src/public/engine2/engineevents.h:298
struct EventPostAdvanceTick_t : public EventSimulate_t {
public:

private:

	int m_nCurrentTick;  // +0x2c
	int m_nTotalTicksThisFrame;  // +0x30
	int m_nTotalTicks;  // +0x34

	EventPostAdvanceTick_t();
	EventPostAdvanceTick_t(const EngineLoopState_t &, bool, bool, int, int, int);

	// sizeof = 56
};

// src/public/engine2/engineevents.h:316
struct EventServerAdvanceTick_t : public EventAdvanceTick_t {
public:

private:

	EventServerAdvanceTick_t();
	EventServerAdvanceTick_t(const EngineLoopState_t &, bool, bool, int, int, int);

	// sizeof = 56
};

// src/public/engine2/engineevents.h:329
struct EventServerPostAdvanceTick_t : public EventPostAdvanceTick_t {
public:

private:

	EventServerPostAdvanceTick_t();
	EventServerPostAdvanceTick_t(const EngineLoopState_t &, bool, bool, int, int, int);

	// sizeof = 56
};

// src/public/engine2/engineevents.h:342
struct EventClientAdvanceTick_t : public EventAdvanceTick_t {
public:

private:

	EventClientAdvanceTick_t();
	EventClientAdvanceTick_t(const EngineLoopState_t &, bool, bool, int, int, int);

	// sizeof = 56
};

// src/public/engine2/engineevents.h:355
struct EventClientPostAdvanceTick_t : public EventPostAdvanceTick_t {
public:

private:

	EventClientPostAdvanceTick_t();
	EventClientPostAdvanceTick_t(const EngineLoopState_t &, bool, bool, int, int, int);

	// sizeof = 56
};

// src/public/engine2/engineevents.h:368
struct EventClientSendInput_t {
private:

	EventClientSendInput_t();

	// sizeof = 1
};

// src/public/engine2/engineevents.h:376
struct EventClientPollNetworking_t {
private:

	int m_nTickCount;  // +0x0

	EventClientPollNetworking_t();
	EventClientPollNetworking_t(int);

	// sizeof = 4
};

// src/public/engine2/engineevents.h:387
struct EventClientProcessNetworking_t {
private:

	EventClientProcessNetworking_t();

	// sizeof = 1
};

// src/public/engine2/engineevents.h:395
struct EventClientPreSimulate_t : public EventSimulate_t {
public:

private:

	EventClientPreSimulate_t();
	EventClientPreSimulate_t(const EngineLoopState_t &, bool, bool);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:406
struct EventClientSimulate_t : public EventSimulate_t {
public:

private:

	EventClientSimulate_t();
	EventClientSimulate_t(const EngineLoopState_t &, bool, bool);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:417
struct EventServerPollNetworking_t : public EventSimulate_t {
public:

private:

	EventServerPollNetworking_t();
	EventServerPollNetworking_t(const EngineLoopState_t &, bool, bool);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:428
struct EventServerProcessNetworking_t : public EventSimulate_t {
public:

private:

	EventServerProcessNetworking_t();
	EventServerProcessNetworking_t(const EngineLoopState_t &, bool, bool);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:440
struct EventServerSimulate_t : public EventSimulate_t {
public:

private:

	EventServerSimulate_t();
	EventServerSimulate_t(const EngineLoopState_t &, bool, bool);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:451
struct EventServerPostSimulate_t : public EventSimulate_t {
public:

private:

	EventServerPostSimulate_t();
	EventServerPostSimulate_t(const EngineLoopState_t &, bool, bool);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:462
struct EventClientPostSimulate_t : public EventSimulate_t {
public:

private:

	EventClientPostSimulate_t();
	EventClientPostSimulate_t(const EngineLoopState_t &, bool, bool);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:472
struct EventClientPauseSimulate_t : public EventSimulate_t {
public:

private:

	EventClientPauseSimulate_t();
	EventClientPauseSimulate_t(const EngineLoopState_t &);

	// sizeof = 48
};

// src/public/engine2/engineevents.h:483
struct EventPostDataUpdate_t {
private:

	int m_nCount;  // +0x0

	// sizeof = 16
};

// src/public/engine2/engineevents.h:495
struct EventPreDataUpdate_t {
private:

	int m_nEntityIndex;  // +0x0

	// sizeof = 8
};

// src/public/engine2/engineevents.h:506
struct EventAppShutdown_t {
private:

	int m_nDummy0;  // +0x0

	EventAppShutdown_t();

	// sizeof = 4
};
