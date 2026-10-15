// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_challenges.h:32
class CDOTAChallengeSystem : public CAutoGameSystem, public CGameEventListener, public ICombatAnalyzerQueryUpdateNotify {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	bool m_bPlayerSelectedChallenge[24];  // +0x48

	int m_event_dota_hero_swap;  // +0x1b8
	int m_event_dota_hero_undoselection;  // +0x1bc
	typedef CAutoGameSystem BaseClass;
	CDOTAChallengeSystem(CDOTAChallengeSystem &);
	CDOTAChallengeSystem(const CDOTAChallengeSystem &);
	CDOTAChallengeSystem();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAChallengeSystem *);
	virtual bool Init();
	virtual void PostInit();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	int GetPriority();
	void LoadTemplates();
	const challenge_template_t * GetChallengeTemplateByType(int);
	const challenge_template_t * FindChallengeTemplateByName(const char *);
	virtual void FireGameEvent(IGameEvent *);
	bool RecursiveReplaceTemplateVariable(KeyValues *, const challenge_template_t *, CDOTAPlayerChallenge *, int);
	void SetChallengeDynamicVarForTemplateIndex(KeyValues *, const char *, int, const challenge_template_t *, CDOTAPlayerChallenge *, int);
	bool ClientMsg_ChallengeSelect(CEntityIndex, const CDOTAClientMsg_ChallengeSelect_t &);
	bool ClientMsg_ChallengeReroll(CEntityIndex, const CDOTAClientMsg_ChallengeReroll_t &);
	void HandleQuestSelectForPlayer(CDOTAPlayer *, uint32, uint32);
	void ClearChallengeForPlayer(CDOTAPlayer *);
	int InternalSetPlayerChallenge(CDOTAPlayer *, CDOTAPlayerChallenge *, bool);
	int AttemptToGenerateChallengeQueryForPlayer(CDOTAPlayer *, CDOTAPlayerChallenge *, bool);
	bool CanSelectChallenges(CDOTAPlayer *);
	int GenerateCombatAnalyzerQuery(CDOTAPlayer *, CIngameEvent_Base *, const challenge_template_t *, CDOTAPlayerChallenge *, bool);
	int GenerateBasicQuery(CDOTAPlayer *, CIngameEvent_Base *, const challenge_template_t *, CDOTAPlayerChallenge *, bool);
	int GenerateMultiQuery(CDOTAPlayer *, CIngameEvent_Base *, const challenge_template_t *, CDOTAPlayerChallenge *, bool);
	int GenerateRankedQuery(CDOTAPlayer *, CIngameEvent_Base *, const challenge_template_t *, CDOTAPlayerChallenge *, bool);
	int GenerateRankedMultiQuery(CDOTAPlayer *, CIngameEvent_Base *, const challenge_template_t *, CDOTAPlayerChallenge *, bool);
	void AddResultToSignout(const CDOTALobby *, CProtoBufMsg<CMsgGameMatchSignOut> *);
	void AddRerollToSignoutList(CMsgServerToGCRerollPlayerChallenge *);
	void DebugTestChallenge(CDOTAPlayer *, int, int, int);
	void DebugTestQuest(CDOTAPlayer *, int, int);
	void LoadInstances();
	void LoadQuests();
	challenge_instance_t * GetQuestChallengeInstanceByIDs(int, int);
	CDOTAPlayerChallenge * GetDebugChallenge();
	virtual void OnQueryProgressChanged(int, int);
	virtual void OnQueryFailed(int);
	virtual void OnQuerySucceeded(int);
	virtual ~CDOTAChallengeSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[40] FireGameEvent
	// vtable[41] OnQueryProgressChanged
	// vtable[42] OnQueryFailed
	// vtable[43] OnQuerySucceeded
	// sizeof = 504
};
