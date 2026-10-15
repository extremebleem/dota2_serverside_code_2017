// Reconstructed from DWARF by pahole; not original source.

// src/game/server/server_eventqueue.h:20
class CServerEventQueue {
	void AddEvent(const char *, const char *, variant_t, float, CBaseEntity *, CBaseEntity *, int);
	void AddEvent(CBaseEntity *, const char *, float, CBaseEntity *, CBaseEntity *, int);
	void AddEvent(CBaseEntity *, const char *, variant_t, float, CBaseEntity *, CBaseEntity *, int);
	CServerEventQueue();
	~CServerEventQueue();
	void Init();
	void Clear();

	// sizeof = 1
};
