// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_halloffame.h:9
class CDOTA_BaseNPC_HallofFame : public CDOTA_BaseNPC_Building, public CGameEventListener {
public:

private:

	int m_event_dota_player_team_changed;  // +0x1264
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
	CDOTA_BaseNPC_HallofFame(CDOTA_BaseNPC_HallofFame &);
	CDOTA_BaseNPC_HallofFame(CDOTA_BaseNPC_HallofFame &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_BaseNPC_HallofFame();
	virtual bool IsControllableByAnyPlayer();
	virtual bool IsControllableByPlayer(int);
	virtual int UpdateTransmitState();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UnitThink();
	virtual bool OnSaveState(KeyValues *);
	virtual void FireGameEvent(IGameEvent *);
	void FindPlayersWithGlowEnabled(CUtlVector<int, CUtlMemory<int, int> > &);
	bool ShouldGlowBeEnabled();
	void SetGlowEnabled(bool);
	void SetGlowEnabled(const CUtlVector<int, CUtlMemory<int, int> > &);
	virtual ~CDOTA_BaseNPC_HallofFame();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] IsControllableByAnyPlayer
	// vtable[491] IsControllableByPlayer
	// vtable[64] UpdateTransmitState
	// vtable[8] Spawn
	// vtable[385] UnitThink
	// vtable[466] OnSaveState
	// vtable[492] FireGameEvent
	// sizeof = 4736
};
