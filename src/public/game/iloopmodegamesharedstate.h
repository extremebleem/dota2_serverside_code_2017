// Reconstructed from DWARF by pahole; not original source.

// src/public/game/iloopmodegamesharedstate.h:20
class ILoopModeGameSharedState {
	int ()() * * _vptr.ILoopModeGameSharedState;  // +0x0
	~ILoopModeGameSharedState();
	ILoopModeGameSharedState(ILoopModeGameSharedState &);
	ILoopModeGameSharedState(const ILoopModeGameSharedState &);
	ILoopModeGameSharedState();
	virtual ISource2WorldSession * GetWorldSession();
	virtual ClientServerMode_t GetClientServerMode();
	virtual bool ReceivedServerInfo(const GameSessionConfiguration_t &, ILoopModePrerequisiteRegistry *);
	virtual bool IsInHeadlessMode();
	virtual void SetFadeColor(Vector4D);
	virtual bool IsBackgroundMap();
	virtual bool IsLevelTransition();

	// vtable[0] GetWorldSession
	// vtable[1] GetClientServerMode
	// vtable[2] ReceivedServerInfo
	// vtable[3] IsInHeadlessMode
	// vtable[4] SetFadeColor
	// vtable[5] IsBackgroundMap
	// vtable[6] IsLevelTransition
	// sizeof = 8
};
