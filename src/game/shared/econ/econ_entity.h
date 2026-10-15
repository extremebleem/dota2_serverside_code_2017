// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_entity.h:32
class CEconEntity : public CBaseFlex, public IHasAttributes {
	struct AttachedParticleInfo_t {
	private:

		int m_nAttachedParticleIndex;  // +0x0
		bool m_bShouldDestroyImmediately;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	static datamap_t m_DataMap;

	class NetworkVar_m_AttributeManager : public CAttributeContainer {
	public:

		NetworkVar_m_AttributeManager(NetworkVar_m_AttributeManager &);
		NetworkVar_m_AttributeManager(const NetworkVar_m_AttributeManager &);
		NetworkVar_m_AttributeManager();
		void CopyFrom(const CAttributeContainer &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
		virtual ~NetworkVar_m_AttributeManager();

		// vtable[2] NetworkStateChanged
		// vtable[4] NetworkStateChangedLog
		// vtable[3] NetworkStateChanged
		// sizeof = 320
	};

protected:

	EHANDLE m_hOldProvidee;  // +0x698
	int m_iOldOwnerClass;  // +0x69c
	typedef CBaseFlex BaseClass;
	typedef CEconEntity ThisClass;

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
	typedef ThisClass ThisClass_m_AttributeManager;
	CEconEntity(CEconEntity &);
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
	CEconEntity();
	virtual ~CEconEntity();
	void InitializeAttributes();
	void DebugDescribe();
	Activity TranslateViewmodelHandActivity(Activity);
	virtual void UpdateOnRemove();
	virtual void OnNewModel(HModel, HModel);
	virtual void AddedToEntityDatabase();
	bool HasCustomParticleSystems();
	virtual void GiveTo(CBaseEntity *);
	void OnOwnerClassChange();
	void UpdateModelToClass();
	virtual int CalculateVisibleClassFor(CBaseCombatCharacter *);
	void ShowAmbientParticles();
	void HideAmbientParticles();
	virtual CAttributeManager * GetAttributeManager();
	virtual CAttributeContainer * GetAttributeContainer();
	const CAttributeContainer * GetAttributeContainer();
	virtual CBaseEntity * GetAttributeOwner();
	virtual CAttributeList * GetAttributeList();
	virtual void ReapplyProvision();
	virtual bool UpdateBodygroups(CBaseCombatCharacter *, int);
	CEconItemView * GetItem();
	const char * GetItemName();
	virtual Activity TranslateViewmodelHandActivityInternal(Activity);

private:

	void CreateSingleParticleSystem(AttachedParticlesOnItem_t &);

protected:

	int GetOffset_m_AttributeManager();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[11] UpdateOnRemove
	// vtable[39] OnNewModel
	// vtable[7] AddedToEntityDatabase
	// vtable[262] GiveTo
	// vtable[263] CalculateVisibleClassFor
	// vtable[264] GetAttributeManager
	// vtable[265] GetAttributeContainer
	// vtable[266] GetAttributeOwner
	// vtable[267] GetAttributeList
	// vtable[268] ReapplyProvision
	// vtable[269] UpdateBodygroups
	// vtable[270] TranslateViewmodelHandActivityInternal
	// sizeof = 1696
};

// src/game/shared/econ/econ_entity.h:196
class CBaseAttributableItem : public CEconEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CEconEntity BaseClass;

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
	CBaseAttributableItem(CBaseAttributableItem &);
	CBaseAttributableItem(CBaseAttributableItem &);
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
	CBaseAttributableItem();
	virtual ~CBaseAttributableItem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// sizeof = 1696
};
