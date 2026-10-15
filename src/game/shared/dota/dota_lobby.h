// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_lobby.h:75
class CDOTALobby : public CProtoBufCachedSharedObject<CSODOTALobby, 2004>, public ILobby {
	struct FullMemberIndex_t {
	private:

		uint32 m_nIndex;  // +0x0
		FullMemberIndex_t();
		bool operator<(const FullMemberIndex_t &);
		bool operator==(const FullMemberIndex_t &);
		void operator++();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

	static const int k_nTypeID = 2004;
	CDOTALobby(const CDOTALobby &);
	CDOTALobby();
	virtual ~CDOTALobby();
	virtual void Dump();
	void DumpToTextBuffer(CUtlBuffer &);
	virtual PlayerGroupID_t GetGroupID();
	virtual int GetNumMembers();
	virtual CSteamID GetMember(int);
	virtual int GetMemberIndexBySteamID(const CSteamID &);
	virtual int GetMemberIndexByAccountID(AccountID_t);
	virtual int GetLeftMemberIndexByAccountID(AccountID_t);
	virtual const CDOTALobbyMember * GetMemberDetails(int);
	virtual const CDOTALobbyMember * FindMemberDetailsByTeamSlot(DOTA_GC_TEAM, uint32);
	bool BAssertValidMemberIndex(int);
	int GetNumLeftMembers();
	const CDOTALobbyMember * GetLeftMemberDetails(int);
	virtual CSharedObject * GetSharedObject();
	virtual const CSharedObject * GetSharedObject();
	FullMemberIndex_t GetFullNumMembers();
	const CDOTALobbyMember * GetFullMemberDetails(FullMemberIndex_t);
	const CDOTALobbyMember * FindFullMemberDetails(AccountID_t);
	State GetState();
	LobbyType GetLobbyType();
	CSteamID GetServerID();
	const char * GetConnect();
	bool AllowCheats();
	bool AllChat();
	bool FillWithBots();
	MatchID_t GetMatchID();
	uint32 GetSeriesID();
	uint32 GetLeagueSelectionPriorityTeam();
	SelectionPriorityType GetLeagueSelectionPriorityChoice();
	SelectionPriorityType GetLeagueNonSelectionPriorityChoice();
	MatchID_t GetPreviousSeriesMatch(int);
	MatchID_t GetPreviousMatchOverride();
	bool AllowSpectating();
	bool IntroMode();
	DOTA_GameMode GetGameMode();
	DOTABotDifficulty GetBotDifficulty(DOTATeam_t);
	uint64 GetBotScript(DOTATeam_t);
	DOTAGameVersion GetGameVersion();
	int GetPenaltyLevelRadiant();
	int GetPenaltyLevelDire();
	bool IsCompetitiveMatchWithAtLeastOneTeamID();
	bool IsIngameEventActive(EEvent);
	uint32 GetActiveIngameEventCount();
	EEvent GetActiveIngameEvent(uint32);
	bool BIgnoreFailureToLoad();
	int GetSeriesType();
	int GetRadiantSeriesWins();
	int GetDireSeriesWins();
	bool HasPasskey();
	const char * GetPasskey();
	int GetExtraMessagesCount();
	MsgType_t GetExtraMessagesType(int);
	int FindFirstExtraMessage(MsgType_t);
	DOTA_GC_TEAM GetMemberTeam(const CSteamID &);
	const CLobbyTeamDetails * GetMemberTeamDetails(const CSteamID &);
	uint32 GetMemberTeamID(const CSteamID &);
	uint32 GetMemberBroadcastChannel(const CSteamID &);
	uint32 GetMemberBroadcastChannelSlot(const CSteamID &);
	int GetBroadcastChannelCount();
	const CLobbyBroadcastChannelInfo * GetBroadcastChannelByIndex(int);
	DOTA_GameState GetGameState();
	bool GetFirstBloodHappened();
	bool GetMassDisconnect();
	uint32 GetServerRegion();
	EMatchOutcome GetMatchOutcome();
	bool GetDiscardMatchResults();
	uint32 GetGameStartTime();
	bool IsPermanentLeaver(AccountID_t);
	bool IsPermanentLeaver(const CDOTALobbyMember &);
	bool IsMemberConnected(int);
	bool IsMemberACoach(const CSteamID &);
	bool IsMemberACoach(int);
	bool IsMemberACoach(const CDOTALobbyMember *);
	DOTA_GC_TEAM GetMemberCoachTeam(const CSteamID &);
	bool AreCoachesAllowed();
	virtual void SpewDebug();
	virtual CSteamID GetLeader();
	virtual int GetNumSentInvites();
	virtual int GetNumRecvInvites();
	virtual void GetSentInviteID(int, uint64 &, bool &);
	virtual int GetSentInviteIndexBySteamID(CSteamID);
	virtual int GetSentInviteIndexByGroupID(PlayerGroupID_t);
	virtual int GetRecvInviteIndexByGroupID(PlayerGroupID_t);
	virtual bool AllowInvites();
	virtual bool BPlayerMembershipLocked();
	virtual bool BKickingAllowed();
	int GetTeamDetailsCount();
	const CLobbyTeamDetails * GetTeamDetails(DOTA_GC_TEAM);
	int GetTeamAverageRank(DOTA_GC_TEAM);
	int GetTimedRewardsDetailsSize();
	const CLobbyTimedRewardDetails & GetTimedRewardsDetails(int);
	uint32 GetTournamentID();
	uint32 GetTournamentGameID();
	uint32 GetWeekendTourneyDivisionID();
	uint32 GetWeekendTourneyBracketRound();
	uint32 GetWeekendTourneySkillLevel();
	int GetNumSpectators();
	uint32 GetMatchGroup();
	uint32 GetLeagueID();
	uint32 GetLeagueSeriesID();
	uint32 GetLeagueGameID();
	const char * GetGameName();
	PartnerAccountType GetPartnerType();
	DOTALobbyReadyState GetMemberReadyState(const CSteamID &);
	bool GetLowPriorityStatus();
	bool GetLeaverDetected();
	PlayerGroupID_t GetMemberPartyID(const CSteamID &);
	DOTA_CM_PICK GetCMPick();
	uint32 GetLoadGameID();
	uint32 GetLootGenerated();
	uint32 GetLootAwarded();
	bool BLeaversMatterForLobbyType(LobbyType);
	bool BLeaversMatterForThisLobbyType();
	bool BAllowReportsAndCommends();
	bool IsMatchmadeLobbyType();
	bool ContributesToBehaviorScore();
	bool ContributesToSocialFeedMatchEvents();
	bool ContributesToStrangeCounts();
	bool ShowMMROnScoreboardAtGameEnd();
	bool IsHostAutomaticallySelected();
	uint32 GetLeaverActions(LobbyType, DOTA_GameMode, bool, const CMsgLeaverState &);
	void GetCurrentLeaverState(CMsgLeaverState &);
	uint32 GetLeaverActionsForCurrentState();
	uint32 GetLeaverActionsForMember(CSteamID);
	uint32 CalculateLeaverActionsForMember(const CDOTALobbyMember *, const CMsgLeaverState &);
	bool BPlayersAllowedToLeave();
	uint32 GetTutorialLesson();
	LobbyDotaTVDelay GetTVDelayEnum();
	float GetTVDelay();
	LobbyDotaPauseSetting GetPauseSetting();
	const char * GetCustomGameMode();
	const char * GetCustomMapName();
	uint32 GetCustomDifficulty();
	uint64 GetCustomGameID();
	uint32 GetCustomMinPlayers();
	uint32 GetCustomMaxPlayers();
	uint32 GetCustomGameTimestamp();
	uint64 GetCustomGameCRC();
	bool IsJoinableCustomGame();
	bool CheckCustomGameVersion(uint32, uint64);
	bool BCustomGameUsesAccountRecords();
	bool IsLan();
	uint32 GetLANHostPingToServerRegion();
	DOTALobbyVisibility GetVisibility();
	const CLobbyBroadcastChannelInfo * FindBroadcastChannelInfo(uint32);
	bool HasBroadcastChannelInfo();
	uint32 GetNumBroadcastChannelInfos();
	bool ParseSaveGameInstance(KeyValues *, CDOTASaveGame_SaveInstance *);
	bool ParseSaveGame(KeyValues *, CDOTASaveGame *, bool);
	bool HasSaveGame();
	const CDOTASaveGame & GetSaveGame();
	float GetBonusForTypeForMember(const CDOTALobbyMember *, uint32, uint64 *);
	bool BLobbyTypeAllowOverrideVPK();
	bool HasPlayersPartyForfeitedMatch(const CSteamID &);
	bool BConnectViaSteamDatagram();
	int GetNumMVPVotesForPlayer(const CSteamID &);
	bool BHasAwardedLobbyMVP();
	bool BMVPVotingActive();
	bool BMemberCanSubmitMVPVote(const CSteamID &);
	bool BHasMemberSubmittedLobbyMVPVote(const CSteamID &);

protected:

	CDOTALobbyMember * GetWriteableFullMemberDetails(FullMemberIndex_t);
	CDOTALobbyMember * FindWriteableFullMemberDetails(AccountID_t);
	int32 FindChannelInfoByID(uint32);
	CSODOTALobby & Obj();
	const CSODOTALobby & Obj();

	// vtable[7] Dump
	// vtable[11] GetGroupID
	// vtable[12] GetNumMembers
	// vtable[13] GetMember
	// vtable[14] GetMemberIndexBySteamID
	// vtable[15] GetMemberIndexByAccountID
	// vtable[16] GetLeftMemberIndexByAccountID
	// vtable[17] GetMemberDetails
	// vtable[18] FindMemberDetailsByTeamSlot
	// vtable[19] GetSharedObject
	// vtable[20] GetSharedObject
	// vtable[21] SpewDebug
	// vtable[22] GetLeader
	// vtable[23] GetNumSentInvites
	// vtable[24] GetNumRecvInvites
	// vtable[25] GetSentInviteID
	// vtable[26] GetSentInviteIndexBySteamID
	// vtable[27] GetSentInviteIndexByGroupID
	// vtable[28] GetRecvInviteIndexByGroupID
	// vtable[29] AllowInvites
	// vtable[30] BPlayerMembershipLocked
	// vtable[31] BKickingAllowed
	// sizeof = 552
};
