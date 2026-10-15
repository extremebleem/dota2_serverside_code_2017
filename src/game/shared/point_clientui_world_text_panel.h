// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_clientui_world_text_panel.h:72
class CPointClientUIWorldTextPanel : public CPointClientUIWorldPanel {
	class NetworkVar_m_messageText {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	typedef CPointClientUIWorldPanel BaseClass;
	typedef CPointClientUIWorldTextPanel ThisClass;

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
	CPointClientUIWorldTextPanel(CPointClientUIWorldTextPanel &);
	CPointClientUIWorldTextPanel(CPointClientUIWorldTextPanel &);
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
	CPointClientUIWorldTextPanel();
	void InputSetMessage(inputdata_t &);
	void InputSetIntMessage(inputdata_t &);
	void SetMessage(const char *);
	virtual ~CPointClientUIWorldTextPanel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// sizeof = 2008
};
