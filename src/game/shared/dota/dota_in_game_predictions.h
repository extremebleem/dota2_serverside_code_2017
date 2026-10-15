// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_in_game_predictions.h:36
class CDOTAInGamePredictionGameSystem : public CAutoGameSystem, public CGameEventListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct ActivePredictionDesc_t {
		const CMsgDOTASeasonPredictions_InGamePrediction * m_pPrediction;  // +0x0
		int m_nRequiredPlayerID;  // +0x8
		int m_nRequiredHeroID;  // +0xc

		// sizeof = 16
	};

	enum PerPlayerPredictionState_t {
		STATE_IN_PROGRESS = 0,
		STATE_SUCCEEDED = 0x1,
		STATE_FAILED = 0x2,
	};

	struct PerPlayerPredictionInfo_t {
		int m_nPlayerID;  // +0x0
		int m_nValue;  // +0x4
		int m_nHeroID;  // +0xc
		int m_nQueryID;  // +0x10
		PerPlayerPredictionInfo_t();

		// sizeof = 20
	};

	struct PredictionInfo_t {
		const CMsgDOTASeasonPredictions_InGamePrediction * m_pPrediction;  // +0x0
		int m_nPerPlayerPredictionCount;  // +0x8
		int m_nLastSuccessfulPredictionIndex;  // +0xc
		PredictionInfo_t();
		~PredictionInfo_t();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	bool m_bIsActive;  // +0x20
	bool m_bRetryStartVoting;  // +0x21
	bool m_bIsVotingOpen;  // +0x22

	uint m_nLeagueID;  // +0x24
	uint32 m_nInGamePredictionCountPerGame;  // +0x28
	uint32 m_nInGamePredictionVotingPeriod;  // +0x2c
	int m_nEvent_game_rules_state_change;  // +0x30

	static CUtlVector<challenge_template_t, CUtlMemory<challenge_template_t, int> > sm_vecTemplates;
	typedef CAutoGameSystem BaseClass;
	CDOTAInGamePredictionGameSystem(CDOTAInGamePredictionGameSystem &);
	CDOTAInGamePredictionGameSystem(const CDOTAInGamePredictionGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAInGamePredictionGameSystem *);
	CDOTAInGamePredictionGameSystem();
	void DebugInGamePrediction(int, const CMsgDOTASeasonPredictions_InGamePrediction *);
	bool StaticInit();
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void FireGameEvent(IGameEvent *);

private:

	bool SelectInGamePredictions(const CMsgDOTASeasonPredictions_InGamePrediction *);
	void BuildActivePredictions(const CUtlVector<int, CUtlMemory<int, int> > &, const CUtlVector<int, CUtlMemory<int, int> > &, const CMsgDOTASeasonPredictions_InGamePrediction *, CUtlVector<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t, CUtlMemory<CDOTAInGamePredictionGameSystem::ActivePre);
	void StartInGamePredictionAnalysis();
	bool SetupChallengeInstance(const CMsgDOTASeasonPredictions_InGamePrediction *, PerPlayerPredictionInfo_t *);
	void RecursiveReplaceTemplateVariable(KeyValues *, const challenge_template_t *, const CMsgDOTASeasonPredictions_InGamePrediction *, const PerPlayerPredictionInfo_t *);
	/* tag__fprintf: const_type tag not supported! */;
	void ValidatePrediction(const CDOTACompendiumDefinition *, const CMsgDOTASeasonPredictions_InGamePrediction *);
	void OnQueryProgressChanged(int, int, int);
	void OnQueryFailed(int, int);
	void OnQuerySucceeded(int, int);
	PerPlayerPredictionInfo_t * FindPredictionInfoForQueryID(int, int, int *);
	void RecomputeQueryValue(int);
	void ClearQueries(int);
	int ComputeValueForPrediction(const CMsgDOTASeasonPredictions_InGamePrediction *, int, int, const PerPlayerPredictionInfo_t * *);
	void PostPredictionResults(int, const int *);
	void FinalizeInGamePredictions();
	const challenge_template_t * FindCombatAnalyzerTemplateByName(const char *);
	virtual ~CDOTAInGamePredictionGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[40] FireGameEvent
	// sizeof = 80
};
