// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameeventlistener.h:18
class CGameEventListener : public IGameEventListener2 {
public:

private:

	bool m_bRegisteredForEvents;  // +0x8
	CGameEventListener(const CGameEventListener &);
	CGameEventListener();
	virtual ~CGameEventListener();
	int ListenForGameEvent(const char *);
	void StopListeningForAllEvents();
	virtual void FireGameEvent(IGameEvent *);

	// vtable[2] FireGameEvent
	// sizeof = 16
};
