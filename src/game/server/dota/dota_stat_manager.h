// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_stat_manager.h:24
class CDotaStatManager : public CAutoGameSystem, public CGameEventListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class CPlayerStatState : public CBasePlayerStatState {
	public:

	private:

		bool m_bIsStatRequestPending;  // +0xc0
		bool m_bIsStatSubmissionPending;  // +0xc1

		CPlayerStatState(const CPlayerStatState &);
		CPlayerStatState(const CSteamID &);
		virtual ~CPlayerStatState();
		bool RequestUserSteamStats();
		bool SubmitUserSteamStats();
		bool IsStatRequestPending();
		bool IsStatSubmissionPending();
		bool StoreAvgRateStat(float, float, const char *);
		virtual void DumpStats();
		void Steam_OnGSStatsReceived(GSStatsReceived_t *, bool);
		void Steam_OnGSStatsStored(GSStatsStored_t *, bool);
		void Steam_OnGSStatsUnloaded(GSStatsUnloaded_t *);
		bool FetchUserSteamStat<int>(int &, const char *);
		bool StoreUserSteamStat<int>(int, const char *);
		bool FetchUserSteamStat<float>(float &, const char *);
		bool StoreUserSteamStat<float>(float, const char *);

		// vtable[0] DumpStats
		// sizeof = 208
	};

	class CBotPlayerStatState : public CBasePlayerStatState {
	public:

	private:

		int m_nPlayerID;  // +0x30
		~CBotPlayerStatState();
		CBotPlayerStatState(CBotPlayerStatState &);
		CBotPlayerStatState(const CBotPlayerStatState &);
		CBotPlayerStatState(int);
		virtual void DumpStats();

		// vtable[0] DumpStats
		// sizeof = 56
	};

	class CBasePlayerStatState {
		int ()() * * _vptr.CBasePlayerStatState;  // +0x0
		typedef CUtlMap<CUtlSymbolLarge, CTimeline*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)> TimelineStatMap_t;

	protected:

		TimelineStatMap_t m_TimelineMap;  // +0x8
		CBasePlayerStatState(CBasePlayerStatState &);
		CBasePlayerStatState(const CBasePlayerStatState &);
		~CBasePlayerStatState();
		CBasePlayerStatState();
		CTimeline * GetStatTimeline(const char *);
		bool GetTimelineStatByInterp(float &, float, const char *);
		bool GetTimelineStatByGameTime(float &, float, const char *);
		bool GetTimelineStatPerMinute(float &, float, const char *);
		virtual void DumpStats();

		// vtable[0] DumpStats
		// sizeof = 48
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*, short unsigned int, bool (*)(const CSteamID&, const CSteamID&)> PlayerStatMap_t;

private:

	PlayerStatMap_t m_StatStateMap;  // +0x20
	typedef CUtlMap<int, CDotaStatManager::CBotPlayerStatState*, short unsigned int, bool (*)(int const&, int const&)> BotStatMap_t;

	BotStatMap_t m_BotStatStateMap;  // +0x48
	typedef CUtlMap<int, CTimeline*, short unsigned int, bool (*)(int const&, int const&)> PlayerNetWorth_t;

	PlayerNetWorth_t m_PlayerNetWorthTimeline;  // +0xa0
	typedef CAutoGameSystem BaseClass;
	CDotaStatManager(const CDotaStatManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDotaStatManager *);
	CDotaStatManager();
	virtual ~CDotaStatManager();
	virtual bool Init();
	virtual void FireGameEvent(IGameEvent *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	bool IncrementTimelineStat(CDOTAPlayer *, float, const char *);
	bool GetTimelineStatByInterp(CDOTAPlayer *, float &, float, const char *);
	bool GetTimelineStatByGameTime(CDOTAPlayer *, float &, float, const char *);
	bool GetTimelineElapsedTime(CDOTAPlayer *, float &, const char *);
	bool GetTimelineStatPerMinute(CDOTAPlayer *, float &, float, const char *);
	CTimeline * GetStatTimeline(int, const char *);
	CTimeline * GetTotalEarnedGoldTimeline(int);
	CTimeline * GetTotalNetWorthTimeline(int);
	CTimeline * GetTotalEarnedXPTimeline(int);
	CTimeline * GetPlayerNetWorthTimeline(int);
	void DumpStatDetails();

private:

	int GetStatIndexForPlayer(CBaseMultiplayerPlayer *);
	int GetStatIndexForSteamID(const CSteamID &);
	CBasePlayerStatState * GetStatState(int);
	void AggregateAllPlayerStats();
	void ClearAllPlayerStats();
	bool GetPlayerMatchStat<int>(CBaseMultiplayerPlayer *, int &, const char *);
	bool GetPlayerMatchStat<float>(CBaseMultiplayerPlayer *, float &, const char *);
	bool SetPlayerMatchStat<int>(CBaseMultiplayerPlayer *, int, const char *);
	bool SetPlayerMatchStat<float>(CBaseMultiplayerPlayer *, float, const char *);
	bool IncrementPlayerStat<float>(CBaseMultiplayerPlayer *, float, const char *);
	bool IncrementPlayerStat<int>(CBaseMultiplayerPlayer *, int, const char *);
	bool FetchUserSteamStat<int>(const CSteamID &, int &, const char *);
	bool GetPlayerLifetimeStat<int>(CBaseMultiplayerPlayer *, int &, const char *);
	bool FetchUserSteamStat<float>(const CSteamID &, float &, const char *);
	bool GetPlayerLifetimeStat<float>(CBaseMultiplayerPlayer *, float &, const char *);
	bool StoreUserSteamStat<float>(const CSteamID &, float, const char *);
	bool SetPlayerLifetimeStat<float>(CBaseMultiplayerPlayer *, float, const char *);
	bool StoreUserSteamStat<int>(const CSteamID &, int, const char *);
	bool SetPlayerLifetimeStat<int>(CBaseMultiplayerPlayer *, int, const char *);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[40] FireGameEvent
	// vtable[3] GameInit
	// vtable[16] PreSpawnGroupUnload
	// sizeof = 200
};
