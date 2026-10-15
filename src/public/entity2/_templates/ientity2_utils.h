// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/ientity2_utils.h:21
class CEntComponentPtr<CDamageComponent> : public CSmartPtr<CDamageComponent, CNullRefCountAccessor> {
public:

	CEntComponentPtr(const CEntityIdentity *);
	CEntComponentPtr(const CEntityInstance *);
	CEntComponentPtr(const CEntityHandle &);
	CDamageComponent * operator CDamageComponent*();
	const CDamageComponent * operator const CDamageComponent*();
	~CEntComponentPtr();

	// sizeof = 8
};

// src/public/entity2/ientity2_utils.h:21
class CEntComponentPtr<CHealthComponent> : public CSmartPtr<CHealthComponent, CNullRefCountAccessor> {
public:

	CEntComponentPtr(const CEntityIdentity *);
	CEntComponentPtr(const CEntityInstance *);
	CEntComponentPtr(const CEntityHandle &);
	CHealthComponent * operator CHealthComponent*();
	const CHealthComponent * operator const CHealthComponent*();
	~CEntComponentPtr();

	// sizeof = 8
};
