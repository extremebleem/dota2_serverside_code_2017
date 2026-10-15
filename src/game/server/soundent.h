// Reconstructed from DWARF by pahole; not original source.

// src/game/server/soundent.h:107
class CSound {
private:

	static datamap_t m_DataMap;

	EHANDLE m_hOwner;  // +0x0
	EHANDLE m_hTarget;  // +0x4
	int m_iVolume;  // +0x8
	float m_flOcclusionScale;  // +0xc
	int m_iType;  // +0x10
	int m_iNextAudible;  // +0x14
	float m_flExpireTime;  // +0x18
	short int m_iNext;  // +0x1c
	bool m_bNoExpirationTime;  // +0x1e

	int m_ownerChannelIndex;  // +0x20
	bool m_bHasOwner;  // +0x30
	CSound();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	bool DoesSoundExpire();
	void SetDuration(float);
	float SoundExpirationTime();
	void SetSoundOrigin(const Vector &);
	const Vector & GetSoundOrigin();
	const Vector & GetSoundReactOrigin();
	bool FIsSound();
	bool FIsScent();
	bool IsSoundType(int);
	int SoundType();
	int SoundContext();
	int SoundTypeNoContext();
	int Volume();
	float OccludedVolume();
	int NextSound();
	void Reset();
	int SoundChannel();
	bool ValidateOwner();
	void Clear();
	CSound & operator=(const CSound &);

	// sizeof = 52
};

// src/game/server/soundent.h:216
class CSoundEnt : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_iFreeSound;  // +0x308
	int m_iActiveSound;  // +0x30c
	int m_cLastActiveSounds;  // +0x310
	typedef CPointEntity BaseClass;

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
	CSoundEnt(CSoundEnt &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	bool InitSoundEnt();
	void ShutdownSoundEnt();
	CSoundEnt();
	virtual ~CSoundEnt();
	virtual void OnRestore();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	void Initialize();
	virtual int ObjectCaps();
	int InsertSound(int, const Vector &, int, float, CBaseEntity *, int, CBaseEntity *);
	void UpdateSound(int, const Vector &, int, float);
	int ActiveList();
	CSound * SoundPointerForIndex(CPlayerSlot);
	CSound * GetLoudestSoundOfType(int, const Vector &);
	CPlayerSlot ClientSoundIndex(CBaseEntity *);
	void FreeSound(int);
	bool IsEmpty();
	int ISoundsInList(int);
	int IAllocSound();
	int FindSound(CBaseEntity *, int);
	int FindOrAllocateSound(CBaseEntity *, int);
	void FreeSound(int, int);
	int FreeList();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[18] OnRestore
	// vtable[8] Spawn
	// vtable[117] Think
	// vtable[19] ObjectCaps
	// sizeof = 7448
};
