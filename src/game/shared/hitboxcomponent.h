// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/hitboxcomponent.h:15
class CHitboxComponent : public CEntityComponent {
public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_referenced_but_impl_is_contained;
	uint m_nHitboxHandle;  // +0x0
	int m_nHitGroupPriorityCount;  // +0x4
	const int * m_pHitGroupPriorities;  // +0x8
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CHitboxComponent();
	~CHitboxComponent();
	bool Activate(CEntityInstance *);
	bool TestRay(CEntityInstance *, const Ray_t &, CGameTrace *);
	void UpdateHitboxes(const CCollisionProperty &);
	void SetHitGroupPriority(const int *, int);

	// sizeof = 16
};

// src/game/shared/hitboxcomponent.h:15
class CHitboxComponent : public CEntityComponent {
	enum {
		ENT_IS_CONTAINED = 0x1,
	};

public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_referenced_but_impl_is_contained;
	uint m_nHitboxHandle;  // +0x0
	int m_nHitGroupPriorityCount;  // +0x4
	const int * m_pHitGroupPriorities;  // +0x8
	typedef CHitboxComponent Storage_t;
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	CHitboxComponent();
	~CHitboxComponent();
	bool Activate(CEntityInstance *);
	bool TestRay(CEntityInstance *, const Ray_t &, CGameTrace *);
	void UpdateHitboxes(const CCollisionProperty &);
	void SetHitGroupPriority(const int *, int);

	// sizeof = 16
};

// src/game/shared/hitboxcomponent.h:37
class CHitboxSystem {
private:

	CUtlVector<__vector(4) float, CUtlMemory<__vector(4) float, int> > m_fl4Bounds;  // +0x0
	CHitboxSystem();
	uint AllocHitbox(uint);
	void FreeHitbox(uint);
	void UpdateHitbox(uint, const Vector &, const Vector &);
	bool TestHitboxes(const Ray_t &, CGameQueryAttributes *, CUtlStringToken, CGameTrace *);
	bool TestHitboxesMultiple(const Ray_t &, CGameQueryAttributes *, CUtlStringToken, CGameTraceList &);
	int OverlapHitboxes(const Ray_t &, CGameQueryAttributes *, COverlapList &, float);
	bool TestHitboxes(const Ray_t &, CTraceFilter *, CUtlStringToken, CGameTrace *);
	int OverlapHitboxes(const Ray_t &, CTraceFilter *, COverlapList &, float);
	void GetBounds(Vector *, Vector *, uint);
	void DebugDrawHitboxes();
	~CHitboxSystem();

	// sizeof = 72
};
