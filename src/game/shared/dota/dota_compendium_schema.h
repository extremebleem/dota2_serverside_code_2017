// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_compendium_schema.h:22
struct PredictionIdRange_t {
	uint32 m_nFirstID;  // +0x0
	uint32 m_nLastID;  // +0x4
	RTime32 m_startTime;  // +0x8
	RTime32 m_lockTime;  // +0xc

	// sizeof = 16
};

// src/game/shared/dota/dota_compendium_schema.h:30
class CDOTACompendiumDefinition {
private:

	uint32 m_nLeagueID;  // +0x0

	CDOTACompendiumDefinition(uint32);
	~CDOTACompendiumDefinition();
	const CMsgDOTASeasonPredictions * GetPredictions();
	int GetPredictionCount();
	const CMsgDOTASeasonPredictions_Prediction * GetPrediction(int);
	const CMsgDOTASeasonPredictions_Prediction * FindPredictionBySelectionIndex(uint32);
	const PredictionIdRange_t * FindPredictionIdRange(const char *);
	const PredictionIdRange_t * FindRangeForPrediction(uint32);
	int GetInGamePredictionCount();
	const CMsgDOTASeasonPredictions_InGamePrediction * GetInGamePrediction(int);
	const CMsgDOTASeasonPredictions_InGamePrediction * FindInGamePredictionByID(uint32);
	const CMsgDOTASeasonPredictions_InGamePrediction * FindInGamePredictionByName(const char *);
	uint32 GetLeagueID();
	uint32 GetInGamePredictionCountPerGame();
	uint32 GetInGamePredictionVotingPeriod();
	void LoadCompendiumDefinition(KeyValues *);

	// sizeof = 192
};

// src/game/shared/dota/dota_compendium_schema.h:69
class CDOTACompendiumSchema {
private:

	bool m_bIsInitialized;  // +0x58
	CDOTACompendiumSchema & Get();
	void Initialize();
	const CDOTACompendiumDefinition * GetCompendiumDefinition(uint32);
	CDOTACompendiumSchema();
	~CDOTACompendiumSchema();
	void LoadPredictionTemplates();
	void LoadCompendiumDefinitions();
	void LoadCompendiumDefinition(uint32, const char *);

	// sizeof = 96
};
