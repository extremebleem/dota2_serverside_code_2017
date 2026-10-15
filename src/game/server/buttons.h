// Reconstructed from DWARF by pahole; not original source.

// src/game/server/buttons.h:12
class CBaseButton : public CBaseToggle {
	enum BUTTON_CODE {
		BUTTON_NOTHING = 0,
		BUTTON_ACTIVATE = 0x1,
		BUTTON_RETURN = 0x2,
		BUTTON_PRESS = 0x3,
	};

	class NetworkVar_m_glowEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_usable {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_szDisplayText {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	bool m_bMoveDirIsLocal;  // +0x50c
	bool m_fStayPushed;  // +0x50d
	bool m_fRotating;  // +0x50e

	uint8 m_bLockedSound;  // +0x550
	uint8 m_bLockedSentence;  // +0x551
	uint8 m_bUnlockedSound;  // +0x552
	uint8 m_bUnlockedSentence;  // +0x553
	bool m_bLocked;  // +0x554

	int m_sounds;  // +0x558
	float m_flUseLockedTime;  // +0x55c
	bool m_bSolidBsp;  // +0x560

	string_t m_sNoise;  // +0x568
	COutputEvent m_OnDamaged;  // +0x570
	COutputEvent m_OnPressed;  // +0x588
	COutputEvent m_OnUseLocked;  // +0x5a0
	COutputEvent m_OnIn;  // +0x5b8
	COutputEvent m_OnOut;  // +0x5d0
	int m_nState;  // +0x5e8

	string_t m_sGlowEntity;  // +0x5f0

	typedef CBaseToggle BaseClass;
	typedef CBaseButton ThisClass;

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
	CBaseButton(CBaseButton &);
	CBaseButton(CBaseButton &);
	CBaseButton();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool CreateVPhysics();
	void RotSpawn();
	virtual int DrawDebugTextOverlays(uint64, int);

protected:

	void ButtonActivate();
	void SparkSoundCache();
	void ButtonTouch(CBaseEntity *);
	void ButtonSpark();
	void TriggerAndWait();
	void ButtonReturn();
	void ButtonBackHome();
	void ButtonUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	bool OnUseLocked(CBaseEntity *);
	virtual void Lock();
	virtual void Unlock();
	void InputLock(inputdata_t &);
	void InputUnlock(inputdata_t &);
	void InputPress(inputdata_t &);
	void InputPressIn(inputdata_t &);
	void InputPressOut(inputdata_t &);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual bool RejectDamage(const CTakeDamageInfo &);
	virtual void ReactToDamage(const CTakeDamageInfo &);
	BUTTON_CODE ButtonResponseToTouch();
	void Press(CBaseEntity *, BUTTON_CODE);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual int ObjectCaps();
	virtual ~CBaseButton();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[49] CreateVPhysics
	// vtable[79] DrawDebugTextOverlays
	// vtable[214] Lock
	// vtable[215] Unlock
	// vtable[90] OnTakeDamage
	// vtable[31] RejectDamage
	// vtable[33] ReactToDamage
	// vtable[34] GetDataDescMap
	// vtable[19] ObjectCaps
	// sizeof = 1544
};

// src/game/server/buttons.h:112
class CRotButton : public CBaseButton {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseButton BaseClass;

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
	CRotButton(CRotButton &);
	CRotButton(CRotButton &);
	CRotButton();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CRotButton();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 1544
};

// src/game/server/buttons.h:122
class CMomentaryRotButton : public CRotButton {
public:

private:

	static datamap_t m_DataMap;

	bool m_bDisabled;  // +0x608

	COutputFloat m_Position;  // +0x610
	COutputEvent m_OnUnpressed;  // +0x630
	COutputEvent m_OnFullyOpen;  // +0x648
	COutputEvent m_OnFullyClosed;  // +0x660
	COutputEvent m_OnReachedPosition;  // +0x678
	int m_lastUsed;  // +0x690
	float m_IdealYaw;  // +0x6ac
	string_t m_sNoise;  // +0x6b0
	bool m_bUpdateTarget;  // +0x6b8

	int m_direction;  // +0x6bc
	float m_returnSpeed;  // +0x6c0
	float m_flStartPosition;  // +0x6c4
	typedef CRotButton BaseClass;

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
	CMomentaryRotButton(CMomentaryRotButton &);
	CMomentaryRotButton(CMomentaryRotButton &);
	CMomentaryRotButton();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual int ObjectCaps();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void UseMoveDone();
	void ReturnMoveDone();
	void OutputMovementComplete();
	void SetPositionMoveDone();
	void UpdateSelf(float, bool);
	void PlaySound();
	void UpdateTarget(float, CBaseEntity *);
	virtual int DrawDebugTextOverlays(uint64, int);
	CMomentaryRotButton * Instance(CBaseEntity *);
	float GetPos(const QAngle &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Lock();
	virtual void Unlock();
	void InputSetPosition(inputdata_t &);
	void InputSetPositionImmediately(inputdata_t &);
	void InputDisableUpdateTarget(inputdata_t &);
	void InputEnableUpdateTarget(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual void Enable();
	virtual void Disable();
	void UpdateThink();
	virtual ~CMomentaryRotButton();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[19] ObjectCaps
	// vtable[108] Use
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// vtable[214] Lock
	// vtable[215] Unlock
	// vtable[216] Enable
	// vtable[217] Disable
	// sizeof = 1736
};

// src/game/server/buttons.h:198
class CButtonTimed : public CBaseButton {
	class NetworkVar_m_sUseString {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_sUseSubString {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	int m_nUseTime;  // +0x618
	bool m_bAutoDisable;  // +0x61c
	bool m_bInUse;  // +0x61d

	float m_flUseStartTime;  // +0x620
	float m_flLastUseTime;  // +0x624
	COutputEvent m_OnUnpressed;  // +0x628
	COutputEvent m_OnTimeUp;  // +0x640
	typedef CBaseButton BaseClass;

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
	CButtonTimed(CButtonTimed &);
	CButtonTimed(CButtonTimed &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CButtonTimed();
	void UseTimed(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void UseThink();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int ObjectCaps();
	virtual void StopUse();
	virtual void OnUseFinished();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual void Enable();
	virtual void Disable();
	virtual ~CButtonTimed();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[19] ObjectCaps
	// vtable[216] StopUse
	// vtable[217] OnUseFinished
	// vtable[218] Enable
	// vtable[219] Disable
	// sizeof = 1624
};
