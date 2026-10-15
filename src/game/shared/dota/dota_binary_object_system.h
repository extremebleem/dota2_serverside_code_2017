// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_binary_object_system.h:24
class CDOTA_BinaryObject : public CBaseEntity {
public:

private:

	bool m_bActive;  // +0x308

	int m_nBinaryID;  // +0x30c
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
	CDOTA_BinaryObject(CDOTA_BinaryObject &);
	CDOTA_BinaryObject(CDOTA_BinaryObject &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_BinaryObject();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	bool IsActive();
	virtual void SetActive(bool, int);
	void SetBinaryID(uint);
	uint GetBinaryID();
	virtual ~CDOTA_BinaryObject();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[207] SetActive
	// sizeof = 784
};

// src/game/shared/dota/dota_binary_object_system.h:46
class CDOTA_BinaryObjectSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct SDOTA_PendingActivate {
		EHANDLE hEntity;  // +0x0
		float fTime;  // +0x4
		SDOTA_PendingActivate();
		SDOTA_PendingActivate(const SDOTA_PendingActivate &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nNextID;  // +0x48
	typedef CAutoGameSystem BaseClass;
	typedef SDOTA_PendingActivate TDOTA_PendingActivate;
	CDOTA_BinaryObjectSystem(CDOTA_BinaryObjectSystem &);
	CDOTA_BinaryObjectSystem(const CDOTA_BinaryObjectSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_BinaryObjectSystem *);
	virtual bool Init();
	virtual void GameInit(const EventGameInit_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	CDOTA_BinaryObjectSystem();
	int AllocateEntryInList(int);
	int RegisterServerObject(CDOTA_BinaryObject *);
	void RemoveServerObject(CDOTA_BinaryObject *);
	void ActivateIn(CDOTA_BinaryObject *, float);
	void ClearPendingActivateList();
	int GetNumBinaryObjects();
	CDOTA_BinaryObject * GetBinaryObject(int);
	virtual ~CDOTA_BinaryObjectSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[3] GameInit
	// vtable[15] PostSpawnGroupLoad
	// vtable[16] PreSpawnGroupUnload
	// vtable[24] FrameUpdatePreEntityThink
	// sizeof = 80
};
