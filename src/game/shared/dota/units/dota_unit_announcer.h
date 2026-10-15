// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_announcer.h:25
class CAnnouncerDescriptor {
	int ()() * * _vptr.CAnnouncerDescriptor;  // +0x0
private:

	bool m_bUseDefaultAnnouncer;  // +0x10

	bool m_bItemOwnedByLocalPlayer;  // +0x20
	~CAnnouncerDescriptor();
	CAnnouncerDescriptor(CAnnouncerDescriptor &);
	CAnnouncerDescriptor(const CAnnouncerDescriptor &);

	CAnnouncerDescriptor();
	CAnnouncerDescriptor & operator=(const CAnnouncerDescriptor &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 40
};

// src/game/shared/dota/units/dota_unit_announcer.h:46
class CDOTA_Unit_Announcer : public CDOTA_BaseNPC {
public:

private:

	int m_iAudienceTeam;  // +0x1198
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
	CDOTA_Unit_Announcer(CDOTA_Unit_Announcer &);
	CDOTA_Unit_Announcer(CDOTA_Unit_Announcer &);
	CDOTA_Unit_Announcer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool ShouldDraw();
	virtual bool IsPartOfFOWSystem();
	float GetLastTimeSaidAnything();
	virtual bool IsKillingSpreeAnnouncer();
	virtual bool IsAnnouncer();
	virtual ~CDOTA_Unit_Announcer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[78] ShouldDraw
	// vtable[212] IsPartOfFOWSystem
	// vtable[490] IsKillingSpreeAnnouncer
	// vtable[401] IsAnnouncer
	// sizeof = 4512
};
