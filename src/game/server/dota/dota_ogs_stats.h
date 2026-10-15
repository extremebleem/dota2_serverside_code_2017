// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_ogs_stats.h:30
class CDOTA_OGS {
private:

	static uint16 m_iEventCount;
	static uint16 m_iSnapshotIndex;
	CDOTA_OGS();
	bool IsMatchLobby();
	bool ShouldLog();
	bool ShouldLog(int);
	void LogItemEvent(DOTA_OGS_ItemEvent, DOTAAbilityData_t *, CDOTA_BaseNPC *);
	void LogHeroSelection(int, bool, bool);
	void LogHeroResults(int);
	void LogHeroLevelUp(int, int);
	void LogHeroDeath(CDOTAPlayer *, const CTakeDamageInfo &, int, bool);
	void LogBuildingDeath(CDOTA_BaseNPC_Building *, const CTakeDamageInfo &);
	void LogCMHeroDraft(const char *, bool, int, int);
	void LogMatchSnapshot();
	void Steam_OnGSClientKick(GSClientKick_t *);
	void Steam_OnGSClientDeny(GSClientDeny_t *);

	// sizeof = 80
};

// src/game/server/dota/dota_ogs_stats.h:62
class CDOTASteamWorksGameStatsServer : public CSteamWorksGameStatsServer {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class CDOTATutorialStats {
		int m_nAttacks;  // +0x0
		int m_nTimesHitOneHealth;  // +0x4
		int m_nTimeToLevelSix;  // +0x8
		int m_nSpellsCast;  // +0xc
		CDOTATutorialStats();
		void Clear();

		// sizeof = 16
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	bool m_bAddedTutorialStats;  // +0x41c
	typedef CSteamWorksGameStatsServer BaseClass;
	CDOTASteamWorksGameStatsServer(CDOTASteamWorksGameStatsServer &);
	CDOTASteamWorksGameStatsServer(const CDOTASteamWorksGameStatsServer &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTASteamWorksGameStatsServer *);
	CDOTASteamWorksGameStatsServer();
	virtual void Reset();
	virtual void EndSession();
	void ClearTutorialStats();
	void LogTutorialStats();
	void OnTutorialPlayerAttacked();
	void OnTutorialPlayerCastSpell();
	void OnTutorialPlayerHitOneHealth();
	void OnTutorialPlayerReachedLevelSix();
	virtual ~CDOTASteamWorksGameStatsServer();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[47] Reset
	// vtable[40] EndSession
	// sizeof = 1056
};
