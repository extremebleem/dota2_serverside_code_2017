// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entity_components/game/damage/damage.h:34
class IDamageHandler {
	int ()() * * _vptr.IDamageHandler;  // +0x0
private:

	IDamageHandler(IDamageHandler &);
	IDamageHandler(const IDamageHandler &);
	IDamageHandler();

	virtual bool RejectDamage(CBaseEntity *, const CTakeDamageInfo &);
	virtual void ModifyDamage(CBaseEntity *, CTakeDamageInfo &);
	virtual void ReactToDamage(CBaseEntity *, const CTakeDamageInfo &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] RejectDamage
	// vtable[2] ModifyDamage
	// vtable[3] ReactToDamage
	// sizeof = 8
};

// src/game/shared/entity_components/game/damage/damage.h:44
struct sDamageHandlerInfo {
	int priority;  // +0x8
	sDamageHandlerInfo(IDamageHandler *, int);
	sDamageHandlerInfo();
	~sDamageHandlerInfo();

	// sizeof = 16
};

// src/game/shared/entity_components/game/damage/damage.h:54
class DamageHandlerPriorityLess {
	bool Less(const sDamageHandlerInfo &, const sDamageHandlerInfo &, void *);

	// sizeof = 1
};

// src/game/shared/entity_components/game/damage/damage.h:77
class CDamageComponent : public CEntityComponent {
public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_referenced_but_impl_is_contained;
	DamageHandlerArray m_DamageHandlers;  // +0x0
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CDamageComponent();
	~CDamageComponent();
	void ClearHandlers();
	int TakeDamage(CEntityInstance *, CTakeDamageInfo &);
	void RegisterDamageHandler(IDamageHandler *, int);
	void RemoveDamageHandler(IDamageHandler *);
	bool HasDamageHandlers();
	CDamageComponent & operator=(const CDamageComponent &);

	// sizeof = 40
};
