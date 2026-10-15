// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_clientui_dialog.h:21
class CPointClientUIDialog : public CBaseClientUIEntity {
	class NetworkVar_m_hActivator {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	bool m_bStartEnabled;  // +0x58c
	typedef CPointClientUIDialog ThisClass;

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
	CPointClientUIDialog(CPointClientUIDialog &);
	CPointClientUIDialog(CPointClientUIDialog &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CPointClientUIDialog();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual int ObjectCaps();
	virtual void Spawn(const CEntityKeyValues *);
	void DialogUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual void OnClientDialogFinished(CBaseEntity *);

protected:

	virtual void OnInputEnable(inputdata_t &);
	virtual void OnInputDisable(inputdata_t &);
	virtual ~CPointClientUIDialog();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[19] ObjectCaps
	// vtable[8] Spawn
	// vtable[214] OnClientDialogFinished
	// vtable[215] OnInputEnable
	// vtable[216] OnInputDisable
	// sizeof = 1424
};
