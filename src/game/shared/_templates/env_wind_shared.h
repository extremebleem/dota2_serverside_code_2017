// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_wind_shared.h:28
class CTimedEventQueue<CEnvWindShared::WindAveEvent_t, short unsigned int> {
private:

	float m_flQueueHeadTime;  // +0x0
	float m_flMaxTime;  // +0x4

	CTimedEventQueue(float);
	short unsigned int PushEvent(float, const WindAveEvent_t &);
	short unsigned int GetEventIndex(float);
	float GetEventTime(short unsigned int);
	const WindAveEvent_t & GetEventData(short unsigned int);

	// sizeof = 48
};

// src/game/shared/env_wind_shared.h:28
class CTimedEventQueue<CEnvWindShared::WindVariationEvent_t, short unsigned int> {
private:

	float m_flQueueHeadTime;  // +0x0
	float m_flMaxTime;  // +0x4

	CTimedEventQueue(float);
	short unsigned int PushEvent(float, const WindVariationEvent_t &);
	short unsigned int GetEventIndex(float);
	float GetEventTime(short unsigned int);
	const WindVariationEvent_t & GetEventData(short unsigned int);

	// sizeof = 48
};

// src/game/shared/env_wind_shared.h:57
class CSchemaTypeOf<CTimedEventQueue<CEnvWindShared::WindAveEvent_t, short unsigned int> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/game/shared/env_wind_shared.h:57
class CSchemaTypeOf<CTimedEventQueue<CEnvWindShared::WindVariationEvent_t, short unsigned int> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};
