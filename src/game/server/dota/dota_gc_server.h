// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_gc_server.h:30
class CDOTAGCServerSystem : public CGCClientSystem, public ISharedObjectListener, public IServerGCLobby, public CGameEventListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct SCachedLatencyStats {
		uint32 ip;  // +0x0
		int fullUpdateCount;  // +0x4

		SCachedLatencyStats();

		// sizeof = 504
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_event_player_full_update;  // +0x64c
	int m_event_player_connect_full;  // +0x650
	int m_event_player_disconnect;  // +0x654
	typedef map<unsigned int, CDOTAGCServerSystem::SCachedLatencyStats, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CDOTAGCServerSystem::SCachedLatencyStats> > > cachedLatencyStatsByAcctIDMap_t;

	cachedLatencyStatsByAcctIDMap_t m_cachedLatencyStatsByAcctIDMap;  // +0x658
	RTime32 m_unGameStartTime;  // +0x6a0

	double m_flLastSendConnectedPlayersTime;  // +0x6a8
	double m_flLastCheckConnectedPlayersTime;  // +0x6b0
	bool m_bLastSendConnectedPlayersFirstBloodHappened;  // +0x6bc

	double m_flUpdateLiveScoreboardCheckTime;  // +0x6c0
	double m_flUpdateSpectatorCountCheckTime;  // +0x6c8
	uint32 m_nLastSentSpectatorCount;  // +0x6d0
	float m_flNextCheckPoorNetworkConditionsTime;  // +0x6d4
	bool m_bPoorNetworkConditionsDetected;  // +0x6d8

	uint64 m_usecLastSendBusyInstallingCustomGame;  // +0x718
	float m_flUpdateGCTime;  // +0x720
	uint32 m_unLastBuildingState;  // +0x728
	int m_nLastRadiantKills;  // +0x72c
	int m_nLastDireKills;  // +0x730

	MatchID_t m_unLastMatchID;  // +0x738
	uint32 m_unLastLeagueID;  // +0x740
	int32 m_nLastReplaySalt;  // +0x744
	uint32 m_unLastMetadataPrivateKey;  // +0x748

	int m_nParentRelayCount;  // +0x770
	float m_fNextFantasyStatUpdateTime;  // +0x774
	float m_fNextRealtimeStatsUpdateTime;  // +0x778
	float m_fNextRealtimeStatsKeyframe;  // +0x77c
	bool m_bRealtimeUpdatingCurrent;  // +0x780
	bool m_bRealtimeUpdatingDelayed;  // +0x781

	float m_unLastGCCheckTime;  // +0x788
	int m_nPendingWelcomes;  // +0x78c
	MatchID_t m_unCurrentMatchID;  // +0x790
	bool m_bIsLeagueGame;  // +0x798

	float m_bLANServerNotifyTime;  // +0x79c
	bool m_bActivatedServerAvailable;  // +0x7a0

	const CDOTALobby * m_pCachedDotaLobby;  // +0x820
	string m_saveGameKey;  // +0x830
	uint32 m_unRealtimeGameStatsIndex;  // +0x868
	uint32 m_unRealtimeGameStatsCount;  // +0x86c
	typedef CGCClientSystem BaseClass;
	CDOTAGCServerSystem(CDOTAGCServerSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAGCServerSystem *);
	CDOTAGCServerSystem();
	virtual ~CDOTAGCServerSystem();
	virtual void FireGameEvent(IGameEvent *);
	virtual bool Init();
	virtual void PostInit();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void Shutdown();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void FrameBoundary(const EventGameFrameBoundary_t &);
	uint16 FindItemID(CDOTA_Item *);
	void MatchSignOut();
	void SendConnectionStats();
	const char * GetMatchStartTimeString();
	void GameRules_State_Enter(DOTA_GameState);
	void SetHibernation(bool);
	virtual void SOCreated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOUpdated(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SODestroyed(SOID_t, const CSharedObject *, ESOCacheEvent);
	virtual void SOCacheSubscribed(SOID_t, ESOCacheEvent);
	virtual void SOCacheUnsubscribed(SOID_t, ESOCacheEvent);
	void SOChanged(SOID_t, const CSharedObject *, SOChangeType_t);
	void UseLobbyFromClient(uint64);
	void DumpLobby();
	virtual bool HasLobby();
	virtual bool SteamIDAllowedToConnect(const CSteamID &);
	virtual void UpdateServerDetails();
	virtual bool ShouldHibernate();
	virtual bool SteamIDAllowedToP2PConnect(const CSteamID &);
	virtual bool LobbyAllowsCheats();
	const CDOTALobby * GetLobby();
	bool IsUsingClientLobby();
	PlayerGroupID_t GetPartyIDForLobbyMember(const CSteamID &);
	int GetTeamForLobbyMember(const CSteamID &);
	bool IsLobbyMemberBroadcaster(const CSteamID &);
	int GetLobbyMemberBroadcastChannel(const CSteamID &);
	int GetLobbyMemberBroadcastChannelSlot(const CSteamID &);
	bool IsLobbyMemberCameraman(const CSteamID &);
	EDOTA_Uploading_Match_Stats UploadingMatchStats();
	void OnStatsSubmitted(CProtoBufMsg<CMsgGameMatchSignoutResponse> *, CProtoBufMsg<CMsgGameMatchSignOut> *);
	MatchID_t GetLastMatchID();
	uint32 GetLastLeagueID();
	int32 GetLastReplaySalt();
	uint32 GetLastMetadataPrivateKey();
	void OnFailedToSubmitStats();
	void UpdateGCServerInfo(bool);
	bool CheckUpdateConnectedPlayers();
	bool GetPoorNetworkConditionsDetected(bool);
	const CMsgPoorNetworkConditions * GetPoorNetworkConditionsMsg();
	void SendLoadFailure(const CUtlVector<CSteamID, CUtlMemory<CSteamID, int> > &, const CUtlVector<CSteamID, CUtlMemory<CSteamID, int> > &);
	void SetRelayedGameServerSteamID(const CSteamID &);
	void SetParentRelayCount(int);
	void ReceivedWelcome(const string &);
	void UpdateLiveFantasyStats();
	bool IsValidFantasyGame();
	void PopulateFantasyStats(CMsgDOTAFantasyPlayerStats *, int, const CDOTALobby *, bool);
	void UpdateRealtimeGameState();
	bool IsUpdatingRealtimeGameStats();
	void SaveEventPointsForSignOut(const CMsgDOTAAwardEventPoints &);
	void ClearTimedRewards();
	void SaveTimedRewardForMetadata(const CLobbyTimedRewardDetails &);
	const string & GetSaveGameKey();
	uint32 GetBuildVersionForGCMessage();
	void AddRelaySteamID(CSteamID);
	bool IsCompetitiveGame();
	void SerializeLastMatchMetadataToString(string *, uint32);
	void DevSendMatchMetadataToClients();
	virtual void PreInitGC();
	virtual void PostInitGC();
	int FillMatchDetailsForTeam(float, CMsgGameMatchSignOut &, int);
	void ActivateServerFromLobby();
	void FinishActivateServerFromLobby();
	const CDOTALobby * GetLobbyToActivate();
	void SendScoreboardUpdate(const CDOTALobby *);
	void SetRealtimeStatsCurrent(bool);
	void SetRealtimeStatsDelayed(bool);
	void ConvertRealtimeStatsToTerse(const CMsgDOTARealtimeGameStats &, CMsgDOTARealtimeGameStatsTerse *);
	bool OnCustomGameInstallStatus(const CMsgCustomGameInstallStatus &);
	void GenerateBuildingState(uint32 *);

private:

	void SetSessionNeed();
	void SetUploadingMatchStats(EDOTA_Uploading_Match_Stats);
	void CheckPoorNetworkConditions(bool);
	void UpdateCrashSentinel();
	void EnsureLastMatchMetadata();
	void WriteMatchMetadataTeam(int, CDOTAMatchMetadata_Team &);
	void WriteMatchMetadataTeamPlayer(int, CDOTAMatchMetadata_Team_Player &);
	void WriteMatchPrivateMetadata(CDOTAMatchPrivateMetadata &);
	void WriteMatchPrivateMetadataTeam(int, CDOTAMatchPrivateMetadata_Team &);
	void WriteMatchPrivateMetadataTeamPlayer(int, CDOTAMatchPrivateMetadata_Team_Player &);
	void SendMatchMetadataToClients();
	void SendMatchDetailsToClients(MatchID_t);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[43] FireGameEvent
	// vtable[0] Init
	// vtable[1] PostInit
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[2] Shutdown
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[29] FrameBoundary
	// vtable[44] SOCreated
	// vtable[45] SOUpdated
	// vtable[46] SODestroyed
	// vtable[47] SOCacheSubscribed
	// vtable[48] SOCacheUnsubscribed
	// vtable[49] HasLobby
	// vtable[50] SteamIDAllowedToConnect
	// vtable[51] UpdateServerDetails
	// vtable[52] ShouldHibernate
	// vtable[53] SteamIDAllowedToP2PConnect
	// vtable[54] LobbyAllowsCheats
	// vtable[41] PreInitGC
	// vtable[42] PostInitGC
	// sizeof = 2216
};

// src/game/server/dota/dota_gc_server.h:288
class CGCJobUploadSaveGame : public CGCClientJob {
public:

private:

	bool m_bNoLobby;  // +0x144
	CGCJobUploadSaveGame(CGCClient *, KeyValues *, bool);
	virtual bool BYieldingRunJob(void *);
	virtual ~CGCJobUploadSaveGame();

	// vtable[2] BYieldingRunJob
	// sizeof = 328
};

// src/game/server/dota/dota_gc_server.h:307
class CGCJobLoadSaveGame : public CGCClientJob {
public:

private:

	uint32 m_saveID;  // +0x13c
	CGCJobLoadSaveGame(CGCClient *, uint32);
	virtual bool BYieldingRunJob(void *);
	virtual ~CGCJobLoadSaveGame();

	// vtable[2] BYieldingRunJob
	// sizeof = 320
};
