// Reconstructed from DWARF by pahole; not original source.

// src/game/server/doors.h:70
class CBaseDoor : public CBaseToggle, public CGameEventListener {
	class NetworkVar_m_bIsUsable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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

public:

private:

	static datamap_t m_DataMap;

	bool m_bMoveDirIsLocal;  // +0x518

	uint8 m_bLockedSentence;  // +0x560
	uint8 m_bUnlockedSentence;  // +0x561
	bool m_bForceClosed;  // +0x562
	bool m_bDoorGroup;  // +0x563
	bool m_bLocked;  // +0x564
	bool m_bIgnoreDebris;  // +0x565

	float m_flBlockDamage;  // +0x56c
	string_t m_NoiseMoving;  // +0x570
	string_t m_NoiseArrived;  // +0x578
	string_t m_NoiseMovingClosed;  // +0x580
	string_t m_NoiseArrivedClosed;  // +0x588
	string_t m_ChainTarget;  // +0x590
	COutputEvent m_OnBlockedClosing;  // +0x598
	COutputEvent m_OnBlockedOpening;  // +0x5b0
	COutputEvent m_OnUnblockedClosing;  // +0x5c8
	COutputEvent m_OnUnblockedOpening;  // +0x5e0
	COutputEvent m_OnFullyClosed;  // +0x5f8
	COutputEvent m_OnFullyOpen;  // +0x610
	COutputEvent m_OnClose;  // +0x628
	COutputEvent m_OnOpen;  // +0x640
	COutputEvent m_OnLockedUse;  // +0x658
	bool m_bLoopMoveSound;  // +0x670
	bool m_isChaining;  // +0x671

	typedef CBaseToggle BaseClass;
	typedef CBaseDoor ThisClass;
	CBaseDoor(CBaseDoor &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CBaseDoor();
	virtual ~CBaseDoor();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool CreateVPhysics();
	virtual void UpdateOnRemove();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual void FireGameEvent(IGameEvent *);
	virtual void StartBlocked(CBaseEntity *);
	virtual void Blocked(CBaseEntity *);
	virtual void EndBlocked();
	virtual void Activate(ActivateType_t);
	virtual int ObjectCaps();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputSetToggleState(inputdata_t &);
	virtual void SetToggleState(int);
	virtual bool IsRotatingDoor();
	virtual bool ShouldSavePhysics();
	void DoorTouch(CBaseEntity *);
	int DoorActivate();
	void DoorGoUp();
	void DoorGoDown();
	void DoorHitTop();
	void DoorHitBottom();
	void UpdateAreaPortals(bool);
	void Unlock();
	void Lock();
	int GetDoorMovementGroup(CBaseDoor * *, int);
	void InputClose(inputdata_t &);
	void InputLock(inputdata_t &);
	void InputOpen(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputUnlock(inputdata_t &);
	void InputSetSpeed(inputdata_t &);
	void StartMovingSound();
	virtual void StopMovingSound();
	void MovingSoundThink();
	bool ShouldLoopMoveSound();
	void ChainUse();
	void ChainTouch(CBaseEntity *);
	void SetChaining(bool);
	void CloseAreaPortalsThink();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[49] CreateVPhysics
	// vtable[11] UpdateOnRemove
	// vtable[108] Use
	// vtable[214] FireGameEvent
	// vtable[114] StartBlocked
	// vtable[115] Blocked
	// vtable[116] EndBlocked
	// vtable[10] Activate
	// vtable[19] ObjectCaps
	// vtable[34] GetDataDescMap
	// vtable[215] SetToggleState
	// vtable[216] IsRotatingDoor
	// vtable[48] ShouldSavePhysics
	// vtable[217] StopMovingSound
	// sizeof = 1704
};
