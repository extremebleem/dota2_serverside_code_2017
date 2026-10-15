// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_team.h:16
class CDOTATeam : public CTeam, public CGameEventListener {
	class NetworkVar_m_iHeroKills {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iTowerKills {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iBarracksKills {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_unTournamentTeamID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_ulTeamLogo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_ulTeamBaseLogo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_ulTeamBannerLogo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bTeamComplete {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bTeamIsHomeTeam {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_CustomHealthbarColor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_szTag {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

public:

private:

	int m_event_lobby_updated;  // +0x430
	int m_nKillStreak;  // +0x434
	int m_iRecentKillCount;  // +0x438

	typedef CDOTATeam ThisClass;

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
	CDOTATeam(CDOTATeam &);
	CDOTATeam(CDOTATeam &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTATeam();
	virtual int ShouldTransmitToPlayer(const CGameCheckTransmitInfo *, CBaseEntity *);
	int GetPlayerTeamSlot(int);
	bool IsTeamFull();
	void IncrementHeroKills();
	void IncrementTowerKills();
	void IncrementBarracksKills();
	int GetHeroKills();
	int GetBarracksKills();
	int GetTowerKills();
	void IncrementKillStreak();
	int GetKillStreak();
	void ResetKillStreak();
	virtual void FireGameEvent(IGameEvent *);
	void UpdateTeamNameFromLobby();
	uint32 GetTeamID();
	const char * GetTeamTag();
	void SetCustomHealthbarColor(int, int, int);
	void ClearCustomHealthbarColor();
	virtual ~CDOTATeam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[210] ShouldTransmitToPlayer
	// vtable[227] FireGameEvent
	// sizeof = 1112
};
