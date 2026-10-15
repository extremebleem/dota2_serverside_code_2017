// Reconstructed from DWARF by pahole; not original source.

// src/game/server/team.h:17
class CTeam : public CBaseEntity {
	class NetworkVar_m_aPlayers {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_iScore {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iRoundsWon {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_szTeamname {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

public:

private:

	int m_iDeaths;  // +0x3c4
	int m_iLastSpawn;  // +0x3c8
	typedef CTeam ThisClass;

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
	CTeam(CTeam &);
	CTeam(CTeam &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CTeam();
	virtual void UpdateOnRemove();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Think();
	virtual int UpdateTransmitState();
	virtual void Init(const char *, int);
	virtual const char * GetName();
	virtual void UpdateClientData(CBasePlayer *);
	virtual int ShouldTransmitToPlayer(const CGameCheckTransmitInfo *, CBaseEntity *);
	virtual void InitializeSpawnpoints();
	virtual void AddSpawnpoint(CTeamSpawnPoint *);
	virtual void RemoveSpawnpoint(CTeamSpawnPoint *);
	virtual CBaseEntity * SpawnPlayer(CBasePlayer *);
	virtual void InitializePlayers();
	virtual void AddPlayer(CBasePlayer *);
	virtual void RemovePlayer(CBasePlayer *);
	virtual int GetNumPlayers();
	virtual CBasePlayer * GetPlayer(int);
	virtual void AddScore(int);
	virtual void SetScore(int);
	virtual int GetScore();
	virtual void ResetScores();
	virtual int GetRoundsWon();
	virtual void SetRoundsWon(int);
	virtual void IncrementRoundsWon();
	void AwardAchievement(int);
	virtual ~CTeam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[11] UpdateOnRemove
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[117] Think
	// vtable[64] UpdateTransmitState
	// vtable[207] Init
	// vtable[208] GetName
	// vtable[209] UpdateClientData
	// vtable[210] ShouldTransmitToPlayer
	// vtable[211] InitializeSpawnpoints
	// vtable[212] AddSpawnpoint
	// vtable[213] RemoveSpawnpoint
	// vtable[214] SpawnPlayer
	// vtable[215] InitializePlayers
	// vtable[216] AddPlayer
	// vtable[217] RemovePlayer
	// vtable[218] GetNumPlayers
	// vtable[219] GetPlayer
	// vtable[220] AddScore
	// vtable[221] SetScore
	// vtable[222] GetScore
	// vtable[223] ResetScores
	// vtable[224] GetRoundsWon
	// vtable[225] SetRoundsWon
	// vtable[226] IncrementRoundsWon
	// sizeof = 976
};
