// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlcommon.h:24
struct CTypeSelect<1, short int, int> {
	typedef short int type;

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:24
struct CTypeSelect<1, short unsigned int, undefined_t> {
	typedef short unsigned int type;

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:24
struct CTypeSelect<1, undefined_t, unsigned int> {
	typedef undefined_t type;

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:50
class CUtlKeyValuePair<CUtlStringToken, float> {
	float m_value;  // +0x4
	typedef float ValueReturn_t;
	CUtlKeyValuePair();
	float & GetValue();
	const float & GetValue();

	// sizeof = 8
};

// src/public/tier1/utlcommon.h:50
class CUtlKeyValuePair<CSkeletonInstance*, IPhysicsJoint*> {
	typedef IPhysicsJoint * ValueReturn_t;
	CUtlKeyValuePair();
	IPhysicsJoint * & GetValue();
	IPhysicsJoint * const & GetValue();
	void CUtlKeyValuePair<CSkeletonInstance*, IPhysicsJoint*>(CSkeletonInstance * const &, IPhysicsJoint * const &);

	// sizeof = 16
};

// src/public/tier1/utlcommon.h:50
class CUtlKeyValuePair<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t> {
	unsigned int m_key;  // +0x0

	typedef EntityDebugInfo_t ValueReturn_t;
	CUtlKeyValuePair();
	EntityDebugInfo_t & GetValue();
	const EntityDebugInfo_t & GetValue();
	void CUtlKeyValuePair<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>(const unsigned int &, const EntityDebugInfo_t &);

	// sizeof = 16
};

// src/public/tier1/utlcommon.h:151
struct DefaultEqualFunctor<CUtlStringToken> {
	bool operator()(Arg_t, Arg_t);
	bool operator()(Alt_t, Arg_t);
	bool operator()(Arg_t, Alt_t);

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:151
struct DefaultEqualFunctor<short unsigned int> {
	bool operator()(Arg_t, Arg_t);
	bool operator()(Alt_t, Arg_t);
	bool operator()(Arg_t, Alt_t);

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:151
struct DefaultEqualFunctor<unsigned int> {
	bool operator()(Arg_t, Arg_t);
	bool operator()(Alt_t, Arg_t);
	bool operator()(Arg_t, Alt_t);

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:163
struct DefaultHashFunctor<short unsigned int> : public Mix32HashFunctor {
public:

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:164
struct DefaultHashFunctor<int> : public Mix32HashFunctor {
public:

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:165
struct DefaultHashFunctor<unsigned int> : public Mix32HashFunctor {
public:

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:205
struct HasClassAltArgumentType<CBaseEntity*> {
	enum {
		value = 0,
	};

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:233
struct ArgumentTypeInfoImpl<float, undefined_t> {
	typedef float Arg_t;

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:233
struct ArgumentTypeInfoImpl<const undefined_t&, undefined_t> {
	typedef const undefined_t & Arg_t;

	// sizeof = 1
};

// src/public/tier1/utlcommon.h:233
struct ArgumentTypeInfoImpl<const CUtlStringToken&, undefined_t> {
	typedef const CUtlStringToken & Arg_t;
	typedef undefined_t Alt_t;

	// sizeof = 1
};

// CTypeSelect: 4 more instantiations (full list in INDEX.tsv)
//   CTypeSelect<1, short unsigned int, unsigned int>
//   CTypeSelect<0, short int, int>
//   CTypeSelect<0, short unsigned int, undefined_t>
//   CTypeSelect<0, undefined_t, unsigned int>

// CUtlKeyValuePair: 22 more instantiations (full list in INDEX.tsv)
//   CUtlKeyValuePair<unsigned int, WorldInfo_t*>
//   CUtlKeyValuePair<unsigned int, CNavNodesForArea>
//   CUtlKeyValuePair<int, INavObstacle*>
//   CUtlKeyValuePair<int, CNavSearchElement>
//   CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>
//   CUtlKeyValuePair<CUtlStringToken, long long int>
//   CUtlKeyValuePair<CBaseEntity*, int>
//   CUtlKeyValuePair<short unsigned int, int>
//   CUtlKeyValuePair<int, short unsigned int>
//   CUtlKeyValuePair<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>
//   CUtlKeyValuePair<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>
//   CUtlKeyValuePair<int, CDOTAPseudoRandom>
//   CUtlKeyValuePair<int, CDOTAHeroSlots>
//   CUtlKeyValuePair<int, CHeroBaseItems>
//   CUtlKeyValuePair<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>
//   CUtlKeyValuePair<unsigned int, bool>
//   CUtlKeyValuePair<unsigned int, CNavObstacle*>
//   CUtlKeyValuePair<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>
//   CUtlKeyValuePair<short unsigned int, empty_t>
//   CUtlKeyValuePair<unsigned int, empty_t>
//   CUtlKeyValuePair<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>
//   CUtlKeyValuePair<int, empty_t>

// DefaultEqualFunctor: 3 more instantiations (full list in INDEX.tsv)
//   DefaultEqualFunctor<int>
//   DefaultEqualFunctor<CBaseEntity*>
//   DefaultEqualFunctor<char const*>

// DefaultHashFunctor: 2 more instantiations (full list in INDEX.tsv)
//   DefaultHashFunctor<char const*>
//   DefaultHashFunctor<CBaseEntity*>

// ArgumentTypeInfoImpl: 25 more instantiations (full list in INDEX.tsv)
//   ArgumentTypeInfoImpl<short unsigned int, undefined_t>
//   ArgumentTypeInfoImpl<const empty_t&, undefined_t>
//   ArgumentTypeInfoImpl<unsigned int, undefined_t>
//   ArgumentTypeInfoImpl<CSkeletonInstance*, undefined_t>
//   ArgumentTypeInfoImpl<IPhysicsJoint*, undefined_t>
//   ArgumentTypeInfoImpl<const CEntityDebugGameSystem::EntityDebugInfo_t&, undefined_t>
//   ArgumentTypeInfoImpl<WorldInfo_t*, undefined_t>
//   ArgumentTypeInfoImpl<int, undefined_t>
//   ArgumentTypeInfoImpl<const CNavNodesForArea&, undefined_t>
//   ArgumentTypeInfoImpl<INavObstacle*, undefined_t>
//   ArgumentTypeInfoImpl<const CNavSearchElement&, undefined_t>
//   ArgumentTypeInfoImpl<char const*, undefined_t>
//   ArgumentTypeInfoImpl<CMarkupManager::MarkupGroup_t*, undefined_t>
//   ArgumentTypeInfoImpl<const CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex&, undefined_t
//   ArgumentTypeInfoImpl<long long int, undefined_t>
//   ArgumentTypeInfoImpl<CBaseEntity*, undefined_t>
//   ArgumentTypeInfoImpl<CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, undefined_t>
//   ArgumentTypeInfoImpl<const CDOTAFogOfWarSystem::SpawnGroupFowSize_t&, undefined_t>
//   ArgumentTypeInfoImpl<const CDOTAPseudoRandom&, undefined_t>
//   ArgumentTypeInfoImpl<const CDOTAHeroSlots&, undefined_t>
//   ArgumentTypeInfoImpl<const CHeroBaseItems&, undefined_t>
//   ArgumentTypeInfoImpl<CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, undefined_t>
//   ArgumentTypeInfoImpl<bool, undefined_t>
//   ArgumentTypeInfoImpl<CNavObstacle*, undefined_t>
//   ArgumentTypeInfoImpl<CNavObstacleMgr::CNavObstacleSplitNode*, undefined_t>
