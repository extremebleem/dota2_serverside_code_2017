// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entity_components/game/damage/health.h:46
class CHealthComponent : public CEntityComponent {
public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_referenced_but_impl_is_contained;
	int m_iMax;  // +0x4
	int m_iHealth;  // +0x8
	float m_flDamageAccumulator;  // +0xc

	static OnEventKilledDelegate_t gm_OnEventKilled;
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CHealthComponent();
	void SetOnEventKilledDelegate(OnEventKilledDelegate_t);
	LifeState_t GetLifeState();
	LifeState_t SetLifeState(LifeState_t);
	bool IsAlive();
	void Revive();
	int GetMaxHealth();
	int GetHealth();
	void SetMaxHealth(int);
	void SetHealth(int);
	int TakeHealth(CEntityInstance *, float, unsigned int);
	int TakeDamage(CEntityInstance *, const CTakeDamageInfo &);

	// sizeof = 16
};
