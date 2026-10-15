// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/base_clientui_ent.h:24
class CClientUIDialogManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CAutoGameSystem BaseClass;
	CClientUIDialogManager(const CClientUIDialogManager &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CClientUIDialogManager *);
	CClientUIDialogManager();
	virtual ~CClientUIDialogManager();

private:

	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	bool ReceiveClientMsg_ClientUIEvent(const CClientMsg_ClientUIEvent_t &);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// sizeof = 24
};

// src/game/shared/base_clientui_ent.h:44
class CBaseClientUIEntity : public CBaseModelEntity {
	class NetworkVar_m_bEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_DialogXMLName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_PanelClassName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	COutputEvent m_CustomOutput0;  // +0x498
	COutputEvent m_CustomOutput1;  // +0x4b0
	COutputEvent m_CustomOutput2;  // +0x4c8
	COutputEvent m_CustomOutput3;  // +0x4e0
	COutputEvent m_CustomOutput4;  // +0x4f8
	COutputEvent m_CustomOutput5;  // +0x510
	COutputEvent m_CustomOutput6;  // +0x528
	COutputEvent m_CustomOutput7;  // +0x540
	COutputEvent m_CustomOutput8;  // +0x558
	COutputEvent m_CustomOutput9;  // +0x570
	typedef CBaseModelEntity BaseClass;
	typedef CBaseClientUIEntity ThisClass;

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
	CBaseClientUIEntity(CBaseClientUIEntity &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CBaseClientUIEntity();
	virtual ~CBaseClientUIEntity();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void OnClientFireOutput(CBaseEntity *, const char *, const char *);
	virtual void OnClientDialogFinished(CBaseEntity *);
	virtual void OnInputEnable(inputdata_t &);
	virtual void OnInputDisable(inputdata_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[214] OnClientDialogFinished
	// vtable[215] OnInputEnable
	// vtable[216] OnInputDisable
	// sizeof = 1416
};
