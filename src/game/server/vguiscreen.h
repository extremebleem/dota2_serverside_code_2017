// Reconstructed from DWARF by pahole; not original source.

// src/game/server/vguiscreen.h:17
class CVGuiScreen : public CBaseModelEntity {
	class NetworkVar_m_flWidth {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flHeight {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nAttachmentIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nPanelName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fScreenFlags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nOverlayMaterial {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hPlayerOwner {
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

	string_t m_strOverlayMaterial;  // +0x480

	typedef CBaseModelEntity BaseClass;
	typedef CVGuiScreen ThisClass;
	CVGuiScreen(CVGuiScreen &);
	CVGuiScreen(CVGuiScreen &);
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
	CVGuiScreen();

protected:

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void OnRestore();
	const char * GetPanelName();
	void SetActualSize(float, float);
	bool IsActive();
	void SetActive(bool);
	bool IsVisibleOnlyToTeammates();
	void MakeVisibleOnlyToTeammates(bool);
	bool IsVisibleToTeam(int);
	void SetOverlayMaterial(const char *);
	void SetAttachedToViewModel(bool);
	bool IsAttachedToViewModel();
	void SetTransparency(bool);
	virtual int UpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	void SetPlayerOwner(CBasePlayer *, bool);

private:

	void SetAttachmentIndex(int);
	void SetPanelName(const char *);
	void InputSetActive(inputdata_t &);
	void InputSetInactive(inputdata_t &);
	virtual ~CVGuiScreen();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[18] OnRestore
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// sizeof = 1200
};
