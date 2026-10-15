// Reconstructed from DWARF by pahole; not original source.

// src/game/server/basepropdoor.h:40
class CBasePropDoor : public CDynamicProp, public CGameEventListener {
	enum DoorExtent_t {
		DOOR_EXTENT_OPEN = 0x1,
		DOOR_EXTENT_CLOSED = 0x2,
	};

	enum ActionType {
		ACTION_OPEN = 0x1,
		ACTION_CLOSE = 0x2,
	};

	class NetworkVar_m_eDoorState {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bLocked {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_isRescueDoor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hMaster {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

protected:

	float m_flAutoReturnDelay;  // +0x6e4
	int m_nHardwareType;  // +0x700
private:

	EHANDLE m_hBlocker;  // +0x74c
	bool m_bFirstBlocked;  // +0x750
protected:

	bool m_bForceClosed;  // +0x751

	EHANDLE m_hActivator;  // +0x760

private:

	bool m_disabledByCheckpoint;  // +0x795

	string_t m_SoundMoving;  // +0x7c8
	string_t m_SoundOpen;  // +0x7d0
	string_t m_SoundClose;  // +0x7d8
	string_t m_SoundLock;  // +0x7e0
	string_t m_SoundUnlock;  // +0x7e8
	string_t m_SoundPound;  // +0x7f0
	int m_numCloseAttempts;  // +0x7f8

	static datamap_t m_DataMap;

	string_t m_SlaveName;  // +0x800

	COutputEvent m_OnBlockedClosing;  // +0x810
	COutputEvent m_OnBlockedOpening;  // +0x828
	COutputEvent m_OnUnblockedClosing;  // +0x840
	COutputEvent m_OnUnblockedOpening;  // +0x858
	COutputEvent m_OnFullyClosed;  // +0x870
	COutputEvent m_OnFullyOpen;  // +0x888
	COutputEvent m_OnClose;  // +0x8a0
	COutputEvent m_OnOpen;  // +0x8b8
	COutputEvent m_OnLockedUse;  // +0x8d0
	typedef CDynamicProp BaseClass;
	typedef CBasePropDoor ThisClass;

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
	CBasePropDoor(CBasePropDoor &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CBasePropDoor();
	virtual ~CBasePropDoor();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int ObjectCaps();
	bool IsDisabledByRescue();
	void RescueDisable(bool);
	virtual void FireGameEvent(IGameEvent *);
	bool PlayerOpen(CBaseEntity *, CBaseEntity *);
	bool PlayerClose(CBaseEntity *, CBaseEntity *);
	bool IsDisabledByCheckpoint();
	void CheckpointDisable(bool);
	virtual bool IsCheckpointDoor();
	virtual bool IsCheckpointExitDoor();
	virtual bool IsAbleToCloseAreaPortals();
	void OnInfectedAttack();
	virtual bool IsUsableByTeam(int);
	virtual void OnCheckpointDoorUnlocked(CBaseEntity *);
	virtual void HandleAnimEvent(animevent_t *);
	bool IsDoorOpen();
	bool IsDoorAjar();
	bool IsDoorOpening();
	bool IsDoorClosed();
	bool IsDoorClosing();
	bool IsDoorBlocked();
	bool IsPlayerOpening();
	bool IsOpener(CBaseEntity *);
	bool IsHingeOnLeft();
	virtual bool IsDoorLocked();
	virtual bool DoorCanClose(bool);
	virtual bool DoorCanOpen();
	virtual float GetOpenInterval();
	virtual void ComputeDoorExtent(Extent *, unsigned int);
	void DoorCloseMoveDone();
	void DoorOpenMoveDone();

protected:

	void DoorClose();
	CBasePropDoor * GetMaster();
	bool HasSlaves();
	void SetDoorState(DoorState_t);
	DoorState_t GetDoorState();
	void CalcDoorSounds(HModel, const CEntityKeyValues *, IEntityResourceManifest *);
	CBaseEntity * GetActivator();
	virtual void OnDoorOpened();
	virtual void OnDoorClosed();
	virtual void OnLockedUse(CBaseEntity *, CBaseEntity *);
	virtual void OnUnlockedUse(CBaseEntity *, CBaseEntity *);

private:

	virtual void BeginOpening(CBaseEntity *);
	virtual void BeginClosing();
	virtual void DoorStop();
	virtual void DoorResume();
	virtual void DoorTeleportToSpawnPosition();

protected:

	void UpdateAreaPortals(bool);
	void DisableAreaPortalThink();
	virtual void Lock(bool);
	virtual void Unlock(bool);
	virtual void EmitDoorSound(const char *, bool);
	void PlayLatchSounds(bool);
	virtual bool TryOpenClose(CBaseEntity *, CBaseEntity *, int);
	virtual void OnStartOpeningFromClosed(CBaseEntity *, bool);

private:

	bool DoorActivate();
	void DoorOpen(CBaseEntity *);
	void OpenIfUnlocked(CBaseEntity *, CBaseEntity *);
	void DoorAutoCloseThink();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void OnUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	bool WillAutoReturn();
	virtual void StartBlocked(CBaseEntity *);
	void OnStartBlocked(CBaseEntity *);
	void MasterStartBlocked(CBaseEntity *);
	virtual void Blocked(CBaseEntity *);
	virtual void EndBlocked();
	void OnEndBlocked();
	void InputClose(inputdata_t &);
	void InputLock(inputdata_t &);
	void InputOpen(inputdata_t &);
	void InputOpenAwayFrom(inputdata_t &);
	void InputOpenAwayFromActivator(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputUnlock(inputdata_t &);
	void InputPlayerOpen(inputdata_t &);
	void InputPlayerClose(inputdata_t &);
	void PrecacheDoorSounds(ResourceHandle_t, const CEntityPrecacheContext *);
	void SetDoorBlocker(CBaseEntity *);
	void SetMaster(CBasePropDoor *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[19] ObjectCaps
	// vtable[296] FireGameEvent
	// vtable[297] IsCheckpointDoor
	// vtable[298] IsCheckpointExitDoor
	// vtable[299] IsAbleToCloseAreaPortals
	// vtable[300] IsUsableByTeam
	// vtable[301] OnCheckpointDoorUnlocked
	// vtable[229] HandleAnimEvent
	// vtable[302] IsDoorLocked
	// vtable[303] DoorCanClose
	// vtable[304] DoorCanOpen
	// vtable[305] GetOpenInterval
	// vtable[306] ComputeDoorExtent
	// vtable[307] OnDoorOpened
	// vtable[308] OnDoorClosed
	// vtable[309] OnLockedUse
	// vtable[310] OnUnlockedUse
	// vtable[311] BeginOpening
	// vtable[312] BeginClosing
	// vtable[313] DoorStop
	// vtable[314] DoorResume
	// vtable[315] DoorTeleportToSpawnPosition
	// vtable[316] Lock
	// vtable[317] Unlock
	// vtable[318] EmitDoorSound
	// vtable[319] TryOpenClose
	// vtable[320] OnStartOpeningFromClosed
	// vtable[108] Use
	// vtable[114] StartBlocked
	// vtable[115] Blocked
	// vtable[116] EndBlocked
	// vtable[34] GetDataDescMap
	// sizeof = 2280
};
