// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_aegis.h:34
class CDOTA_Item_Aegis : public CDOTA_Item {
public:

private:

	int m_iKillerTeam;  // +0x3e8
	float m_fEquipTime;  // +0x3ec
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
	CDOTA_Item_Aegis(CDOTA_Item_Aegis &);
	CDOTA_Item_Aegis(CDOTA_Item_Aegis &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Item_Aegis();
	virtual void Think();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnEquip();
	virtual void OnDestroyed(CBaseEntity *);
	virtual bool CanUnitPickUp(CDOTA_BaseNPC *);
	void SetKillerTeam(int);
	float GetReclaimTime();
	float GetEquipTime();
	virtual ~CDOTA_Item_Aegis();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[117] Think
	// vtable[280] GetIntrinsicModifierName
	// vtable[333] OnEquip
	// vtable[342] OnDestroyed
	// vtable[362] CanUnitPickUp
	// sizeof = 1008
};
