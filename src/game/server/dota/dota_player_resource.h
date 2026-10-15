// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_player_resource.h:30
struct TimedKillEvent_t {
private:

	int m_nKillTime;  // +0x0
	float m_flKillValue;  // +0x4
	int m_nPlayerID;  // +0x8

	// sizeof = 12
};

// src/game/server/dota/dota_player_resource.h:39
struct TimedBalanceRecord_t {
private:

	int m_nNetWorthDelta;  // +0x0
	int m_nExperienceDelta;  // +0x4
	float m_flBalanceMetric;  // +0x8
	int m_nBonusGoldRadiant;  // +0xc
	int m_nBonusGoldDire;  // +0x10

	// sizeof = 20
};

// src/game/server/dota/dota_player_resource.h:50
struct DamageShareEvent_t {
private:

	float m_flOriginalDamage;  // +0x0
	float m_flTakenDamage;  // +0x4
	int m_nPlayerID;  // +0x8

	// sizeof = 12
};

// src/game/server/dota/dota_player_resource.h:59
struct sPendingTreeRemoval {
private:

	int nTeam;  // +0x0
	int nIndex;  // +0x4
	float fTimestamp;  // +0x8

	// sizeof = 12
};

// src/game/server/dota/dota_player_resource.h:68
struct PurchasedItem_t {
private:

	int nItemID;  // +0x0
	float flPurchaseTime;  // +0x4

	// sizeof = 8
};

// src/game/server/dota/dota_player_resource.h:75
class CDOTA_PlayerResource : public CBaseEntity {
	class NetworkVar_m_vecPlayerTeamData {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CDOTA_PlayerResource ThisClass;

	class NetworkVar_m_vecPlayerData {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_vecBrodcasterData {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_nEventIDAssociatedWithEventData {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

protected:

	bool m_bLeaverAlreadyDetected;  // +0x444c

	bool m_bScaledKillsCalculated;  // +0x4870

	float m_flGameBalance;  // +0x48d8
	int m_nAverageNetworthDelta;  // +0x48dc
	int m_nAverageExperienceDelta;  // +0x48e0
	int m_nMaxLosingTeamNetworthLead;  // +0x48e4
	float m_flAvailableLaneGold[14];  // +0x4b58

	int m_playerAbilityUpgradeOrder[24][25];  // +0x69f4
	int m_playerAbilityUpgradeTimes[24][25];  // +0x7354
	int m_playerAbilityUpgradeCount[24];  // +0x7cb4

	CUtlArray<CUtlMap<int, int, short unsigned int, bool (*)(int const&, int const&)>, 24ul> m_PotentialAbusableAbilityUsage;  // +0x7f18

	static CUtlArray<long long unsigned int, 64ul> s_unLobbySteamID;
	int m_iRequestedBotSlot;  // +0x8458
	float m_fNextCombatLogLocationUpdateTime;  // +0x845c
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	typedef CUtlVector<std::pair<item_definition_index_t, itemid_t>, CUtlMemory<std::pair<item_definition_index_t, itemid_t>, int> > TVictoryPredictionItems;
	typedef CHandle<CDOTA_Unit_Courier> CCourierHandle;
	CDOTA_PlayerResource(CDOTA_PlayerResource &);
	CDOTA_PlayerResource(CDOTA_PlayerResource &);
	CDOTA_PlayerResource();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	void Reset();
	virtual void UpdateOnRemove();
	virtual void ResourceThink();
	virtual void UpdatePlayerData();
	virtual int UpdateTransmitState();
	void SetWorldTreeState(int, bool, bool, bool, int);
	bool IsValidTeamPlayerID(int);
	bool IsValidTeamPlayer(int);
	int NumTeamPlayers();
	bool IsValidPlayerID(int);
	bool IsValidPlayer(int);
	int NumPlayers();
	int GetTeamPlayerCount();
	void InitPlayersWithLobby(const CDOTALobby *);
	void InitBroadcasterChannelsWithLobby(const CDOTALobby *);
	void DataTeamSpawn(CDOTA_DataNonSpectator *, int);
	Color GetPlayerColor(int);
	bool GetPlayerIDsForTeam(int, CUtlVector<int, CUtlMemory<int, int> > &);
	int GetPlayerIDForTeamSlot(int, int);
	void GetAllPlayerIDs(CUtlVector<int, CUtlMemory<int, int> > &);
	int GetPlayerCountForTeam(int);
	int GetPlayerCount();
	int GetLevel(int);
	void IncrementKills(int, int);
	void IncrementAssists(int, int);
	void IncrementDeaths(int, int);
	int GetKills(int);
	int GetAssists(int);
	int GetDeaths(int);
	float GetStuns(int);
	float GetHealing(int);
	int GetTowerKills(int);
	int GetRoshanKills(int);
	void RecalculateTeamfightParticipation(int);
	void AddStun(int, float);
	void RemoveStun(int, float);
	void AddHeal(int, float);
	void IncrementTowerKills(int);
	void IncrementRoshanKills(int);
	float GetScaledKills(int);
	float GetScaledAssists(int);
	float GetScaledDeaths(int);
	int GetDeathsForTeam(int);
	int GetTeamKills(int);
	int GetTeamTowerKills(int);
	float GetAvailableTeamLaneGold(int);
	void IncrementStreak(int);
	void ClearStreak(int);
	int GetStreak(int);
	int ModifyGold(int, int, bool, int);
	void SetGold(int, int, bool);
	void SpendGold(int, int, int);
	int GetGold(int);
	int GetNetWorth(int);
	void ComputeNetWorth(int);
	int GetNetWorthRank(int);
	int GetTeamNetWorth(int);
	int GetReliableGold(int);
	int GetUnreliableGold(int);
	void ResetTotalEarnedGold(int);
	int GetTotalEarnedGold(int);
	void IncrementSharedGold(int, int);
	int GetSharedGold(int);
	void IncrementHeroKillGold(int, int);
	int GetHeroKillGold(int);
	void IncrementCreepKillGold(int, int);
	int GetCreepKillGold(int);
	void IncrementIncomeGold(int, int);
	int GetIncomeGold(int);
	int GetTotalGoldSpent(int);
	void AddAvailableTeamGold(float, int);
	void AddGoldSpentOnSupport(int, int);
	int GetGoldSpentOnSupport(int);
	int GetGoldSpentOnConsumables(int);
	int GetGoldSpentOnItems(int);
	int GetGoldLostToDeath(int);
	int GetGoldSpentOnBuybacks(int);
	float GetGoldPerMin(int);
	float GetXPPerMin(int);
	float GetTeamFightParticipation(int);
	int GetAegisPickups(int);
	void AddAegisPickup(int);
	int GetRunePickups(int);
	void AddRunePickup(int);
	int GetNumConsumablesPurchased(int);
	int GetNumItemsPurchased(int);
	float GetTimeOfLastItemPurchase(int);
	float GetTimeOfLastConsumablePurchase(int);
	float GetTimeOfLastDeath(int);
	int GetRespawnSeconds(int);
	void IncrementTotalEarnedXP(int, int, int);
	int GetTotalEarnedXP(int);
	void AddClaimedFarm(int, float, bool);
	float GetClaimedFarm(int, bool);
	void AddScaledPlayerDamage(int, int, int, int, int);
	int GetScaledPlayerDamage(int);
	int GetRawPlayerDamage(int);
	void ClearTotalPlayerDamageMatrix(int);
	void ClearRawPlayerDamageMatrix(int);
	void ClearKillsMatrix(int);
	void ClearAssistsMatrix(int);
	CUtlArray<int, 24ul> * GetKillListForPlayer(int);
	int GetHighestKilledPlayerID(int);
	int GetHighestKilledPlayerKills(int);
	void AddScaledTowerDamage(int, int, int, int);
	int GetScaledTowerDamage(int);
	int GetRawTowerDamage(int);
	void AddScaledHealing(int, int, int, int);
	int GetScaledHealing(int);
	int GetRawHealing(int);
	void AddDamageTaken(int, const CTakeDamageInfo &);
	void ClearDamageTaken(int);
	int GetTowerDamageTaken(int, bool);
	int GetCreepDamageTaken(int, bool);
	int GetHeroDamageTaken(int, bool);
	void RollUpDamageShareEntries(int, int);
	int GetTotalDamageDoneToHero(int, int);
	int GetDamageDoneToHero(int, int);
	int GetKillsDoneToHero(int, int);
	int GetAssistsDoneToHero(int, int);
	int GetDamageAbsorbedFromSource(int, int);
	void AddManaSpent(float, CDOTA_BaseNPC *, CDOTABaseAbility *, CDOTA_BaseNPC *);
	int GetManaSpent(int, int);
	int GetTimeLastSeen(int);
	int GetTotalDisconnectedTime(int);
	void IncrementTotalDisconnectedTime(int, int);
	double GetTimeLastRecieved(int);
	void SetRank(int, int, bool);
	int GetRank(int, bool *);
	void PrintRanks();
	void AddSupportAbilityValue(int, int);
	int GetSupportAbilityValue(int);
	void SetCanRepick(int, bool);
	bool CanRepick(int);
	void SetHasRandomed(int);
	bool HasRandomed(int);
	void SetRandomedHeroID(int, int);
	int GetRandomedHeroID(int);
	void SetSelectedHeroID(int, const char *);
	void SetSelectedHero(int, const char *, CDOTA_BaseNPC *);
	const char * GetSelectedHeroName(int);
	int GetSelectedHeroID(int);
	void SetPossibleHeroSelection(int, const char *);
	bool SetSuggestedHeroSelection(int, int);
	void ClearSuggestedHeroSelection(int, int);
	void GetPlayerSuggestedHeroList(int, CUtlVector<int, CUtlMemory<int, int> > &);
	void GetSuggestedHeroList(int, CUtlVector<int, CUtlMemory<int, int> > &);
	bool IsHeroSelected(const char *);
	int WhoSelectedHero(const char *);
	EHANDLE GetPlayerSelectedHeroHandle(int);
	HSCRIPT Script_GetSelectedHeroEntity(int);
	bool HasSelectedHero(int);
	CDOTAPlayer * GetPlayer(int);
	void ClearPlayer(int);
	HSCRIPT Script_GetPlayer(int);
	int GetNthPlayerIDOnTeam(int, int);
	void IncrementLastHits(int);
	int GetLastHits(int);
	void IncrementObserverWardsPlaced(int);
	int GetObserverWardsPlaced(int);
	void IncrementSentryWardsPlaced(int);
	int GetSentryWardsPlaced(int);
	int GetTotalWardsPlaced(int);
	void AddToWardsPurchased(int, int);
	void IncrementWardsDestroyed(int);
	void AddHeroDamage(int, int);
	void SetFirstBloodClaimed(int);
	void SetFirstBloodGiven(int);
	bool GetFirstBloodClaimed(int);
	bool GetFirstBloodGiven(int);
	void IncrementTeleportsUsed(int);
	int GetTeleportsUsed(int);
	void IncrementLastHitStreak(int);
	void ClearLastHitStreak(int);
	int GetLastHitStreak(int);
	void IncrementLastHitMultikill(int);
	void ClearLastHitMultikill(int);
	int GetLastHitMultikill(int);
	void IncrementNearbyCreepDeaths(int);
	int GetNearbyCreepDeaths(int);
	void IncrementCreepsStacked(int, int);
	void IncrementCampsStacked(int);
	int GetCreepsStacked(int);
	int GetCampsStacked(int);
	void IncrementDenies(int);
	int GetDenies(int);
	void IncrementClaimedMisses(int);
	int GetClaimedMisses(int);
	void IncrementClaimedDenies(int);
	int GetClaimedDenies(int);
	void IncrementMisses(int);
	int GetMisses(int);
	void UpdateTeamSlot(int, int, int);
	int GetTeam(int);
	int GetTeamSlot(int);
	void SetCoachTeam(int, DOTATeam_t);
	DOTATeam_t GetCoachTeam(int);
	void SetBroadcaster(int, bool);
	bool IsBroadcaster(int);
	void OnHeroLevelUp(int, int);
	float GetHeroLevelUpTime(int, int);
	bool AreCoBroadcasters(int, int);
	void SetBroadcasterChannel(int, uint32, uint32, bool);
	uint32 GetBroadcasterChannel(int);
	uint32 GetBroadcasterChannelSlot(int);
	void SetBroadcasterChannelInfo(int, const char *, const char *, const char *);
	int FindOrCreatePlayerID(uint64, bool, bool);
	uint64 GetSteamIDIgnoringBot(int);
	uint64 GetSteamID(int);
	AccountID_t GetSteamAccountID(int);
	bool IsFakeClient(int);
	int GetPlayerIDBySteamID(uint64);
	int GetPlayerIDByAccountID(AccountID_t);
	void SetRequestedBotSlot(int);
	void OnFullyJoinedServer(int);
	bool HasFullyJoinedServer(int);
	bool HaveAllPlayersJoined();
	void SetLeaverStatus(int, DOTALeaverStatus_t);
	DOTALeaverStatus_t GetLeaverStatus(int);
	const CMsgLeaverState * GetLeaverState(int);
	void ResetLeaverStatus();
	void TrackPotentialAbilityAbuse(CDOTA_BaseNPC *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	int GetPotentialAbilityAbuse(CDOTA_BaseNPC *, int);
	void IncrementCouriersDeployed(int);
	int GetCouriersDeployed(int);
	void IncrementCouriersPotentiallyKilled(int);
	int GetCouriersPotentiallyKilled(int);
	void IncrementCommandsIssued(int);
	int GetCommandsIssued(int);
	CDOTA_Unit_Courier * GetCourier(int);
	void SetCourier(int, CDOTA_BaseNPC *);
	bool IsLeaverAlreadyDetected();
	void SetIdleInFountain(int, bool);
	bool GetIdleInFountain(int);
	void SetLoggedInElsewhere(int);
	bool GetLoggedInElsewhere(int);
	void MarkPlayerLoadedCompletely(int);
	bool GetPlayerLoadedCompletely(int);
	void SetPlayerQualifiesForPAContractReward(int, bool);
	bool GetPlayerQualifiesForPAContractReward(int);
	void WriteSaveGameInformation(KeyValues *);
	void LoadSaveGameInformation(KeyValues *);
	void SetConnectionState(int, DOTAConnectionState_t, int);
	DOTAConnectionState_t GetConnectionState(int);
	int GetDisconnectionReason(int);
	bool HasPlayerAbandoned(int);
	void SetTextChatBanned(int, bool);
	bool GetTextChatBanned(int);
	void SetVoiceChatBanned(int, bool);
	bool GetVoiceChatBanned(int);
	void SetLowPriority(int, bool);
	bool GetLowPriority(int);
	void SetLastBuybackTime(int, int);
	void SetPlayerName(int, const char *);
	const char * GetPlayerName(int);
	void RecordBalanceForTime(int);
	float GetGameBalance();
	int GetLosingTeamNetworthLead();
	int GetAverageNetworthDelta();
	int GetNetworthDeltaAtTime(int);
	int GetAverageExperienceDelta();
	int GetExperienceDeltaAtTime(int);
	void AddBonusGoldEarned(int, int);
	int GetBonusGoldEarned(int);
	int GetTeamBonusGoldEarnedAtTime(int, int);
	bool IsAFK(int);
	void ClearTimedRewards();
	void AddTimedReward(int, const CLobbyTimedRewardDetails *);
	int GetTimedEventDrop(int);
	void SetMetaExperience(int, uint16, uint16, uint16);
	void FakeMetaExperience();
	void SetEventPoints(int, bool, uint32, uint32, uint16, uint32, uint32, uint32);
	uint32 GetEventPremiumPoints(int);
	uint16 GetEventRanks(int);
	uint32 GetEventWagerTokensRemaining(int);
	uint32 GetEventWagerTokensMax(int);
	uint32 GetEventPointsForPlayerID(int);
	uint32 GetEventLevelForPlayerID(int);
	bool IsEventOwnedForPlayerID(int);
	uint32 GetEventIDForEventPoints();
	uint32 GetEventEffectsMaskForPlayerID(int);
	void SetBattleCupVictory(int, const CMsgBattleCupVictory &);
	bool IsBattleCupVictoryActive(int);
	int GetBattleCupVictoryWinStreak(int);
	time_t GetBattleCupVictoryWinDate(int);
	int GetBattleCupVictoryTeamID(int);
	int GetBattleCupVictoryTournamentID(int);
	int GetBattleCupVictorySkillLevel(int);
	int GetBattleCupVictoryDivision(int);
	bool BHasAnyPlayerWithBattlePass();
	int GetUnitShareMaskForPlayer(int, int);
	bool IsHeroSharedWithPlayerID(int, int);
	bool AreUnitsSharedWithPlayerID(int, int);
	bool IsDisableHelpSetForPlayerID(int, int);
	void SetUnitShareMaskForPlayer(int, int, int, bool);
	void OnCourierSpawned(CDOTA_Unit_Courier *);
	int GetNumCouriersForTeam(int);
	CDOTA_Unit_Courier * GetNthCourierForTeam(int, int);
	HSCRIPT Script_GetNthCourierForTeam(int, int);
	void SetBattlePointBonusActive(int, bool);
	void SetBattlePointRate(int, int);
	void SetBuybackCooldownTime(int, float);
	void SetBuybackGoldLimitTime(int, float);
	float GetBuybackGoldLimitTime(int);
	void ResetBuybackCostTime(int);
	int GetBuybackCost(int);
	void SetCustomBuybackCooldown(int, float);
	float GetCustomBuybackCooldown(int);
	void SetCustomBuybackCost(int, int);
	int GetCustomBuybackCost(int);
	void SetCustomTeamAssignment(int, int);
	int GetCustomTeamAssignment(int);
	bool HasCustomGameTicketForPlayerID(int);
	void RecordAbilityUpgrade(int, int, int);
	void GetAbilityUpgradesForPlayer(int, int &, const int * &, const int * &);
	HSCRIPT Script_ReplaceHeroWith(int, const char *, int, int);
	CDOTA_BaseNPC_Hero * ReplaceHeroWith(int, const char *, int, int, bool);
	void SetCameraTarget(int, EHANDLE);
	void Script_SetCameraTarget(int, HSCRIPT);
	EHANDLE GetCameraTarget(int);
	void Script_SetOverrideSelectionEntity(int, HSCRIPT);
	EHANDLE GetOverrideSelectionEntity(int);
	void RecordVictoryPrediction(int, item_definition_index_t, itemid_t);
	const TVictoryPredictionItems * GetVictoryPredictionItemID(int);
	/* tag__fprintf: const_type tag not supported! */;
	PartnerAccountType GetPartnerType(int);
	void IncrementFullUpdateCount(int);
	int GetFullUpdateCount(int);
	bool HasPredictedVictory(int);
	void CustomGame_AssignPlayerID(CDOTAPlayer *);
	void SetCustomPlayerColor(int, int, int, int);
	void SetStartingPosition(int, int);
	int GetStartingPosition(int);
	void SetEnemyStartingPosition(int, int, DOTA_STARTING_POSITION_TYPE);
	DOTA_STARTING_POSITION_TYPE GetEnemyStartingPosition(int, int);
	Vector2D GetDesiredWardPlacement(int, int);
	void SetDesiredWardPlacement(int, int, const Vector2D &);
	SpawnGroupHandle_t GetHeroSpawnGroup(int);
	void SetHeroSpawnGroup(int, SpawnGroupHandle_t);
	bool HasAnyPlayerData();
	CDOTA_UnitInventory * GetPlayerPreGameInventory(int);
	void OnHeroReplaced(CDOTA_BaseNPC_Hero *, CDOTA_BaseNPC_Hero *, int, int, int);
	void CalculateEndgameBalanceStats();
	void AddPendingTreeRemoval(int, int, float);
	void ClearPendingTreeRemoval(int);
	DataTeamPlayer_t * GetTeamDataForPlayer(int);
	const DataTeamPlayer_t * GetTeamDataForPlayer(int);
	void SetReliableGold(int, int);
	void SetUnreliableGold(int, int);
	void ClearLobbySteamIDs();
	void InitLobbySteamIDs(const CDOTALobby *);
	bool SeenSteamID(CSteamID);
	void FlushPlayerResourceRequests();
	void ApplyDelayedCustomTeamAssignment(CDOTAPlayer *);
	void AddPushingDamage(int, float);
	void AddStatsResultToSignout(const CDOTALobby *, CProtoBufMsg<CMsgGameMatchSignOut> *, int);
	void AddStatsResultToMetadata(CDOTAMatchMetadata_Team_Player *, int);

private:

	float ComputePlayerFightValue(int);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_PlayerResource();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[207] ResourceThink
	// vtable[208] UpdatePlayerData
	// vtable[64] UpdateTransmitState
	// vtable[4] GetScriptDesc
	// sizeof = 34488
};
