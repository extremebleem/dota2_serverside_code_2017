// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_instructor_hint.h:12
class CEnvInstructorHint : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszName;  // +0x308
	string_t m_iszReplace_Key;  // +0x310
	string_t m_iszHintTargetEntity;  // +0x318
	int m_iTimeout;  // +0x320
	int m_iDisplayLimit;  // +0x324
	string_t m_iszIcon_Onscreen;  // +0x328
	string_t m_iszIcon_Offscreen;  // +0x330
	string_t m_iszCaption;  // +0x338
	string_t m_iszActivatorCaption;  // +0x340
	float m_fIconOffset;  // +0x34c
	float m_fRange;  // +0x350
	uint8 m_iPulseOption;  // +0x354
	uint8 m_iAlphaOption;  // +0x355
	uint8 m_iShakeOption;  // +0x356
	bool m_bStatic;  // +0x357
	bool m_bNoOffscreen;  // +0x358
	bool m_bForceCaption;  // +0x359

	int m_iInstanceType;  // +0x35c
	bool m_bSuppressRest;  // +0x360

	string_t m_iszBinding;  // +0x368
	bool m_bAllowNoDrawTarget;  // +0x370
	bool m_bAutoStart;  // +0x371
	bool m_bLocalPlayerOnly;  // +0x372
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
	CEnvInstructorHint(CEnvInstructorHint &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CEnvInstructorHint();
	virtual ~CEnvInstructorHint();
	virtual void Spawn(const CEntityKeyValues *);
	bool EnvInstructorHintVisibilityMonitorCallback(CBaseEntity *, CBasePlayer *);
	void InputShowHint(inputdata_t &);
	void InputEndHint(inputdata_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 888
};
