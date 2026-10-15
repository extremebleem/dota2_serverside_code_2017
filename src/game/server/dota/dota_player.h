// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_player.h:34
class CDOTAPlayer : public CBaseMultiplayerPlayer, public IInventoryUpdateListener {
	class NetworkVar_m_vecStartingPosition {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iCursor {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iSpectatorClickBehavior {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAspectRatio {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hSpectatorQueryUnit {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iStatsPanel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iShopPanel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iShopViewMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iStatsDropdownCategory {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iStatsDropdownSort {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_szShopString {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_bInShowCaseMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flCameraZoomAmount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iHighPriorityScore {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_quickBuyItems {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_quickBuyIsPurchasable {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_bUsingAssistedCameraOperator {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUsingCameraMan {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nPlayerAssistFlags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iMusicStatus {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMusicOperatorVals {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iMusicOperatorVals {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hKillCamUnit {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAssignedHero {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iPlayerID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nServerOrderSequenceNumber {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nCachedCoachedTeam {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iTotalEarnedGold {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iTotalEarnedXP {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	int m_iMinimapMove;  // +0x11d4

	float m_flHighPriorityScoreTimeStamp;  // +0x1280

	int m_iCrosshairEntity;  // +0x12d0
	bool m_bTeleportRequiresHalt;  // +0x12e8

	float m_flLastOrderTime;  // +0x12fc
	float m_flLastKnownActiveTime;  // +0x1300
	float m_flLastReconnectTime;  // +0x1304

	bool m_bWantsRandomHero;  // +0x1330
	bool m_bFullyJoinedServer;  // +0x1331

	int m_iSwapPreferencePlayerID;  // +0x1334
	uint32 m_nCoachListenMask;  // +0x1338
	float m_flLastChatWheelTime[2];  // +0x1340
	typedef CDOTAPlayer ThisClass;

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
	CDOTAPlayer(CDOTAPlayer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	NetworkUserGroupProxyInfo_t * GetExcluderLocalPlayerExclusive();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();

	CDOTAPlayer();
	virtual ~CDOTAPlayer();
	CDOTAPlayer * CreatePlayer(const char *, CEntityIndex);
	CDOTAPlayer * Instance(int);
	CDOTAPlayer * GetPlayerByPlayerID(int);
	virtual void PreThink();
	virtual void PhysicsSimulate();
	virtual void Connect();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void InitialSpawn();
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual bool ClientCommand(const CCommand &);
	virtual void NoClipStateChanged();
	virtual void PrepareForFullUpdate();
	virtual bool ShouldPredict();
	virtual void BuildTransmitInfo(CGameCheckTransmitInfo &, CCheckTransmitInfo *);
	virtual bool IsPlayer();
	virtual void CreateViewModel(int);
	virtual void CheatImpulseCommands(int);
	void CheatHeroRefresh();
	CDOTAPlayer * GetPlayerBySteamID(const CSteamID &);
	void UpdatePlayerIDFromSteamID();
	virtual int GetPlayerID();
	void SetPlayerID(int);
	const Vector & GetCrosshairTracePos();
	void SetCrosshairTracePos(const Vector &);
	const int GetCrosshairEntity();
	void SetCrosshairEntity(int);
	void SetAssignedHero(CBaseEntity *);
	CDOTA_BaseNPC_Hero * GetAssignedHero();
	HSCRIPT Script_GetAssignedHero();
	virtual CBaseEntity * FindPickerEntity();
	virtual CBaseEntity * EntSelectSpawnPoint();
	virtual void UpdatePlayerSound();
	void HandleTeamSelection(const CCommandContext &, const CCommand &);
	void HandleHeroSelection(const CCommandContext &, const CCommand &);
	void HandlePossibleHeroSelection(const CCommandContext &, const CCommand &);
	void HandleSuggestHeroSelection(const CCommandContext &, const CCommand &);
	void HandleSuggestHeroPick(const CCommandContext &, const CCommand &);
	void HandleSuggestHeroRole(const CCommandContext &, const CCommand &);
	void HandleSelectStartingPosition(const CCommandContext &, const CCommand &);
	void HandleAbilityDraftSelection(const CCommandContext &, const CCommand &);
	void UndoHeroSelection();
	void HandleHeroSelection(const char *);
	bool IsAFK();
	bool IsFountainIdle(bool);
	float GetIdleTime();
	void SetLastOrderTime(float, bool);
	void OnReconnect();
	void AddExecuteOrders(const CDOTAClientMsg_ExecuteOrders &);
	void ExecuteOrders();
	virtual void RumbleEffect(unsigned char, unsigned char, unsigned char);
	virtual void CheckTrainUpdate();
	void CreateSpectatorClicks(CUnitOrders &);
	virtual void ChangeTeam(int);
	void SetWantsSpecificHero(const char *);
	void SetWantsRandomHero();
	bool WantsRandomHero();
	void Script_MakeRandomHeroSelection();
	bool HasSelectedHero();
	bool HasFullyJoinedServer();
	void SetFullyJoinedServer(bool);
	bool HasReconnected();
	CDOTAClientMsg_UnitsAutoAttackMode_EMode GetUnitsAutoAttackMode(AutoattackUnitType_t);
	void SetUnitsAutoAttackMode(AutoattackUnitType_t, CDOTAClientMsg_UnitsAutoAttackMode_EMode);
	void ToggleAutoattack(const CDOTAClientMsg_ToggleAutoattack_t &);
	bool DoTeleportsRequireHalt();
	void SetTeleportsRequireHalt(bool);
	void AddPlayerAssistFlags(int);
	void RemovePlayerAssistFlags(int);
	int GetPlayerAssistFlags();
	void SetPlayerAssistFlags(int);
	bool HasPlayerAssistFlag(PlayerAssistFlags_t);
	HSCRIPT Script_ReplaceHeroWith(const char *, int, int);
	void SetMusicStatus(int, float);
	virtual void InventoryUpdated(CPlayerInventory *);
	int TranslateMusic(int);
	virtual bool CanSpeak();
	void SetKillCamUnit(CBaseEntity *);
	void Script_SetKillCamUnit(HSCRIPT);
	void SetShopViewMode(ShopItemViewMode_t);
	void SetSwapPreferencePlayerID(int);
	int GetSwapPreferencePlayerID();
	int GetShopPanel();
	void SendHeroMissingMessage(int);
	void SendHeroReturnMessage(int);
	void SendChatWheelMessage(const CDOTAClientMsg_ChatWheel &);
	bool IsChatWheelRateLimited();
	void NoteChatWheelTime();
	void UpdateQuickBuy(const CDOTAClientMsg_UpdateQuickBuy &);
	uint32 GetCoachListenMask();
	bool IsACoach();
	int GetCoachedTeamNum();
	void CheckForSpawningFreeCourier();
	NetworkUserGroupProxyInfo_t * GetExcluderDOTACommentatorTable();
	NetworkUserGroupProxyInfo_t * GetExcluderDOTATeamMatesAndCommentatorTable();
	void AnnounceHeroSelection(const char *, int);
	NetworkUserGroupProxyInfo_t * GetExcluderDOTACompendiumData();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[28] HackToMakeAVTable
	// vtable[383] PreThink
	// vtable[119] PhysicsSimulate
	// vtable[5] Connect
	// vtable[8] Spawn
	// vtable[376] InitialSpawn
	// vtable[92] Event_Killed
	// vtable[431] ClientCommand
	// vtable[397] NoClipStateChanged
	// vtable[535] PrepareForFullUpdate
	// vtable[558] ShouldPredict
	// vtable[372] BuildTransmitInfo
	// vtable[140] IsPlayer
	// vtable[370] CreateViewModel
	// vtable[430] CheatImpulseCommands
	// vtable[393] GetPlayerID
	// vtable[531] FindPickerEntity
	// vtable[456] EntSelectSpawnPoint
	// vtable[417] UpdatePlayerSound
	// vtable[408] RumbleEffect
	// vtable[467] CheckTrainUpdate
	// vtable[70] ChangeTeam
	// vtable[559] InventoryUpdated
	// vtable[495] CanSpeak
	// vtable[4] GetScriptDesc
	// sizeof = 4944
};
