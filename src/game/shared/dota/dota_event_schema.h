// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_event_schema.h:9
class CDOTAEventSchema {
private:

	CUtlMap<EEvent, CDOTAEventDefinition*, short unsigned int, bool (*)(const EEvent&, const EEvent&)> m_mapEventDefinitions;  // +0x8
	CUtlMap<unsigned int, EEvent, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_mapLeagueIDToEvent;  // +0x30
	CDOTAEventSchema & Get();
	void Initialize();
	bool Initialize(CUtlString &);
	bool IsInitialized();
	const CDOTAEventDefinition * GetEventDefinition(EEvent);
	uint32 GetLeagueIDForEvent(EEvent);
	EEvent GetEventForLeagueID(uint32);
	CDOTAEventSchema();
	~CDOTAEventSchema();

	// sizeof = 88
};
