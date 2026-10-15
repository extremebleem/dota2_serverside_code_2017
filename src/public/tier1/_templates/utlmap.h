// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlmap.h:42
class CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> : public base_utlmap_t {
	class CKeyLess {
		LessFunc_t m_LessFunc;  // +0x0
		CKeyLess(LessFunc_t);
		bool operator!();
		bool operator()(const Node_t &, const Node_t &);

		// sizeof = 8
	};
	typedef bool (*LessFunc_t)(const char * const &, const char * const &);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	struct Node_t {
		KeyType_t key;  // +0x0
		ElemType_t elem;  // +0x8
		Node_t();
		Node_t(const Node_t &);

		// sizeof = 144
	};

public:

	typedef CUtlRBTree<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> > CTree;

protected:

	CTree m_Tree;  // +0x0
	typedef const char * KeyType_t;
	typedef CAttachment ElemType_t;
	typedef int IndexType_t;

	class KeyIteratorProxy {
		// sizeof = 0
	};
	CUtlMap(int, int, LessFunc_t);
	CUtlMap(LessFunc_t);
	CUtlMap(CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> &);
	void EnsureCapacity(int);
	void CopyFrom(const CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> &);
	ElemType_t & Element(IndexType_t);
	const ElemType_t & Element(IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	ElemType_t & operator[](IndexType_t);
	const ElemType_t & operator[](IndexType_t);
	KeyType_t & Key(IndexType_t);
	const KeyType_t & Key(IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	IndexType_t GetElements(IndexType_t, ElemType_t *);
	IndexType_t GetKeys(IndexType_t, KeyType_t *);
	KeyIteratorProxy Keys();
	unsigned int Count();
	IndexType_t MaxElement();
	bool IsValidIndex(IndexType_t);
	bool IsValid();
	IndexType_t InvalidIndex();
	void SetLessFunc(LessFunc_t);
	IndexType_t Insert(const KeyType_t &, const ElemType_t &);
	IndexType_t Insert(const KeyType_t &);
	IndexType_t InsertWithDupes(const KeyType_t &, const ElemType_t &);
	IndexType_t InsertWithDupes(const KeyType_t &);
	bool HasElement(const KeyType_t &);
	IndexType_t Find(const KeyType_t &);
	IndexType_t FindFirst(const KeyType_t &);
	const ElemType_t & FindElement(const KeyType_t &, const ElemType_t &);
	IndexType_t FindClosest(const KeyType_t &, CompareOperands_t);
	const ElemType_t & FindElement(const KeyType_t &);
	bool HasKey(const KeyType_t &);
	IndexType_t InsertIfNotFound(const KeyType_t &, const ElemType_t &);
	IndexType_t Find(const KeyType_t &, FindCondition_t);
	void RemoveAt(IndexType_t);
	bool Remove(const KeyType_t &);
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	IndexType_t FirstInorder();
	IndexType_t NextInorder(IndexType_t);
	IndexType_t PrevInorder(IndexType_t);
	IndexType_t LastInorder();
	IndexType_t PrevInorderSameKey(IndexType_t);
	IndexType_t NextInorderSameKey(IndexType_t);
	void Reinsert(const KeyType_t &, IndexType_t);
	IndexType_t InsertOrReplace(const KeyType_t &, const ElemType_t &);
	void Swap(CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> &);
	CTree * AccessTree();
	size_t AllocSize();

private:

	CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> & operator=(const CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> &);

	// sizeof = 48
};

// src/public/tier1/utlmap.h:42
class CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)> : public base_utlmap_t {
	class CKeyLess {
		LessFunc_t m_LessFunc;  // +0x0
		CKeyLess(LessFunc_t);
		bool operator!();
		bool operator()(const Node_t &, const Node_t &);

		// sizeof = 8
	};
	typedef bool (*LessFunc_t)(const char * const &, const char * const &);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	struct Node_t {
		KeyType_t key;  // +0x0
		ElemType_t elem;  // +0x8
		Node_t();
		Node_t(const Node_t &);

		// sizeof = 56
	};

public:

	typedef CUtlRBTree<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> > CTree;

protected:

	CTree m_Tree;  // +0x0
	typedef const char * KeyType_t;
	typedef CHitBoxSet ElemType_t;
	typedef int IndexType_t;

	class KeyIteratorProxy {
		// sizeof = 0
	};
	CUtlMap(int, int, LessFunc_t);
	CUtlMap(LessFunc_t);
	CUtlMap(CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)> &);
	void EnsureCapacity(int);
	void CopyFrom(const CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)> &);
	ElemType_t & Element(IndexType_t);
	const ElemType_t & Element(IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	ElemType_t & operator[](IndexType_t);
	const ElemType_t & operator[](IndexType_t);
	KeyType_t & Key(IndexType_t);
	const KeyType_t & Key(IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	IndexType_t GetElements(IndexType_t, ElemType_t *);
	IndexType_t GetKeys(IndexType_t, KeyType_t *);
	KeyIteratorProxy Keys();
	unsigned int Count();
	IndexType_t MaxElement();
	bool IsValidIndex(IndexType_t);
	bool IsValid();
	IndexType_t InvalidIndex();
	void SetLessFunc(LessFunc_t);
	IndexType_t Insert(const KeyType_t &, const ElemType_t &);
	IndexType_t Insert(const KeyType_t &);
	IndexType_t InsertWithDupes(const KeyType_t &, const ElemType_t &);
	IndexType_t InsertWithDupes(const KeyType_t &);
	bool HasElement(const KeyType_t &);
	IndexType_t Find(const KeyType_t &);
	IndexType_t FindFirst(const KeyType_t &);
	const ElemType_t & FindElement(const KeyType_t &, const ElemType_t &);
	IndexType_t FindClosest(const KeyType_t &, CompareOperands_t);
	const ElemType_t & FindElement(const KeyType_t &);
	bool HasKey(const KeyType_t &);
	IndexType_t InsertIfNotFound(const KeyType_t &, const ElemType_t &);
	IndexType_t Find(const KeyType_t &, FindCondition_t);
	void RemoveAt(IndexType_t);
	bool Remove(const KeyType_t &);
	void RemoveAll();
	void Purge();
	void PurgeAndDeleteElements();
	IndexType_t FirstInorder();
	IndexType_t NextInorder(IndexType_t);
	IndexType_t PrevInorder(IndexType_t);
	IndexType_t LastInorder();
	IndexType_t PrevInorderSameKey(IndexType_t);
	IndexType_t NextInorderSameKey(IndexType_t);
	void Reinsert(const KeyType_t &, IndexType_t);
	IndexType_t InsertOrReplace(const KeyType_t &, const ElemType_t &);
	void Swap(CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)> &);
	CTree * AccessTree();
	size_t AllocSize();

private:

	CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)> & operator=(const CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)> &);

	// sizeof = 48
};

// src/public/tier1/utlmap.h:42
class CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)> : public base_utlmap_t {
	class CKeyLess {
		LessFunc_t m_LessFunc;  // +0x0
		CKeyLess(LessFunc_t);
		bool operator!();
		bool operator()(const Node_t &, const Node_t &);

		// sizeof = 8
	};
	typedef bool (*LessFunc_t)(const ISchemaBinding * const &, const ISchemaBinding * const &);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	struct Node_t {
		// sizeof = 0
	};

public:

	typedef CUtlRBTree<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::Node_t, unsigned int, CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const ISchemaBinding* const&, const ISchemaBinding* const&)>::Node_t, unsigned int>, unsigned int> > CTree;

protected:

	CTree m_Tree;  // +0x0
	typedef const ISchemaBinding * KeyType_t;
	typedef CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t> ElemType_t;
	typedef unsigned int IndexType_t;

	class KeyIteratorProxy {
		// sizeof = 0
	};
	CUtlMap(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, int, int, LessFunc_t);
	CUtlMap(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, LessFunc_t);
	CUtlMap(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con);
	void EnsureCapacity(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, int);
	void CopyFrom(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();
	ElemType_t & Element(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, IndexType_t);
	const ElemType_t & Element(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	ElemType_t & operator[](CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, IndexType_t);
	const ElemType_t & operator[](const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t);
	KeyType_t & Key(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, IndexType_t);
	const KeyType_t & Key(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t);
	/* tag__fprintf: const_type tag not supported! */;
	IndexType_t GetElements(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t, ElemType_t *);
	IndexType_t GetKeys(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t, KeyType_t *);
	KeyIteratorProxy Keys(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();
	unsigned int Count(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();
	IndexType_t MaxElement(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();
	bool IsValidIndex(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t);
	bool IsValid(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();
	IndexType_t InvalidIndex();
	void SetLessFunc(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, LessFunc_t);
	IndexType_t Insert(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const KeyType_t &, const ElemType_t &);
	IndexType_t Insert(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const KeyType_t &);
	IndexType_t InsertWithDupes(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const KeyType_t &, const ElemType_t &);
	IndexType_t InsertWithDupes(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const KeyType_t &);
	bool HasElement(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (const KeyType_t &);
	IndexType_t Find(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (const KeyType_t &);
	IndexType_t FindFirst(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (const KeyType_t &);
	const ElemType_t & FindElement(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (const KeyType_t &, const ElemType_t &);
	IndexType_t FindClosest(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (const KeyType_t &, CompareOperands_t);
	const ElemType_t & FindElement(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (const KeyType_t &);
	bool HasKey(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (const KeyType_t &);
	IndexType_t InsertIfNotFound(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const KeyType_t &, const ElemType_t &);
	IndexType_t Find(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (const KeyType_t &, FindCondition_t);
	void RemoveAt(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, IndexType_t);
	bool Remove(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const KeyType_t &);
	void RemoveAll(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con);
	void Purge(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con);
	void PurgeAndDeleteElements(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con);
	IndexType_t FirstInorder(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();
	IndexType_t NextInorder(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t);
	IndexType_t PrevInorder(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t);
	IndexType_t LastInorder(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();
	IndexType_t PrevInorderSameKey(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t);
	IndexType_t NextInorderSameKey(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (IndexType_t);
	void Reinsert(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const KeyType_t &, IndexType_t);
	IndexType_t InsertOrReplace(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const KeyType_t &, const ElemType_t &);
	void Swap(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con);
	CTree * AccessTree(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con);
	size_t AllocSize(const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();

private:

	CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con operator=(CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(con, const CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool ();

	// sizeof = 48
};

// CUtlMap: 168 more instantiations (full list in INDEX.tsv)
//   CUtlMap<unsigned int, kill_eater_score_type_t, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<int, CEconItemRarityDefinition, int, bool (*)(int const&, int const&)>
//   CUtlMap<int, CEconItemQualityDefinition, int, bool (*)(int const&, int const&)>
//   CUtlMap<int, autograph_t, int, bool (*)(int const&, int const&)>
//   CUtlMap<int, CEconItemAttributeDefinition, int, bool (*)(int const&, int const&)>
//   CUtlMap<int, AssetModifier_t, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<unsigned int, ItemPartner_t, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int, bool (*)(const CEconSchemaSymbol&, const CEconSchemaSymbol&)>
//   CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<unsigned int, AchievementAward_t*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<int, attachedparticlesystem_t, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<int, const random_attrib_t*, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<CEconSchemaSymbol, KeyValues*, int, bool (*)(const CEconSchemaSymbol&, const CEconSchemaSymbol&)>
//   CUtlMap<int, CEconSoundMaterialDefinition, int, bool (*)(int const&, int const&)>
//   CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<item_definition_index_t, item_definition_index_t, short unsigned int, bool (*)(const item_definition_index_t&, c
//   CUtlMap<char const*, CUtlVector<CItemLevelingDefinition, CUtlMemory<CItemLevelingDefinition, int> >*, int, bool (*)(char
//   CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<item_definition_index_t, KeyValues*, short unsigned int, bool (*)(const item_definition_index_t&, const item_def
//   CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int, bool (*)(void* const&, void* const&)>
//   CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>, int, bool (*)(char const* const&, char const* c
//   CUtlMap<int, int, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >*, short unsig
//   CUtlMap<unsigned int, unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<int, CBaseAchievement*, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<int, CPlayerAchievementState*, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int, bool (*)(const flexsettinghdr_t* const&, const 
//   CUtlMap<unsigned int, CTonemapController2*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)>, short unsigned int, bool (*)(unsigned int co
//   CUtlMap<unsigned int, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(unsigned in
//   CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t, short unsigned int, bool (*)(const CUtlStringToken&, 
//   CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t, short unsigned int, bool (*)(unsigned int const&, unsign
//   CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t, short unsigned int, bool (*)(const CUtlStringToken&, const 
//   CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t, CUtlMemory<CEntityDebugGameSystem::DebugScrolli
//   CUtlMap<CUtlSymbol, HSCRIPT__*, short unsigned int, bool (*)(const CUtlSymbol&, const CUtlSymbol&)>
//   CUtlMap<unsigned int, CMapSpawnGroup*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<IPhysAggregateInstance*, int, short unsigned int, bool (*)(IPhysAggregateInstance* const&, IPhysAggregateInstanc
//   CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t, CUtlMemory<CVScriptGameEventListener::GameEventFunc_
//   CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<CUtlSymbol, CSaveDirectory::file_t, short unsigned int, bool (*)(const CUtlSymbol&, const CUtlSymbol&)>
//   CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(co
//   CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char const* const&, char const* cons
//   CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<int, Entity2Networkable_t, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int, bool (*)(const flexsettinghdr_t* const&, const 
//   CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*, CUtlMemory<const CAssetModifier*
//   CUtlMap<unsigned int, CEconSchemaSymbol, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<CEntityIndex, float, short unsigned int, bool (*)(const CEntityIndex&, const CEntityIndex&)>
//   CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*, short unsigned int, bool (*)(CBaseEntity* const&
//   CUtlMap<unsigned int, CTonemapController2*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(co
//   CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*, short unsigned int, bool (*)(const CHandle<CBaseE
//   CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<unsigned int, float, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*, short unsigned int, bool (*)(unsigned int const&, unsigned i
//   CUtlMap<CUtlSymbol, AsyncCaption_t*, short unsigned int, bool (*)(const CUtlSymbol&, const CUtlSymbol&)>
//   CUtlMap<CUtlString, AsyncCaption_t, short unsigned int, bool (*)(const CUtlString&, const CUtlString&)>
//   CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHand
//   CUtlMap<int, float, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<int, float, int, CDefLess<int> >
//   CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>, int, bool (*)(char const* const&, char const* c
//   CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)>
//   CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&
//   CUtlMap<unsigned int, KeyValues*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<KillCountAdjustmentKey_t, KillCountAdjustmentValue_t, short unsigned int, bool (*)(const KillCountAdjustmentKey_
//   CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)>
//   CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)>
//   CUtlMap<itemid_t, CEconItem*, short unsigned int, bool (*)(const itemid_t&, const itemid_t&)>
//   CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >
//   CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >
//   CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >
//   CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >
//   CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>
//   CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >
//   CUtlMap<EEvent, CDOTAEventDefinition*, short unsigned int, bool (*)(const EEvent&, const EEvent&)>
//   CUtlMap<unsigned int, EEvent, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<DOTAAbilityData_t*, bool, short unsigned int, bool (*)(DOTAAbilityData_t* const&, DOTAAbilityData_t* const&)>
//   CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >
//   CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >
//   CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >
//   CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >
//   CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>
//   CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >
//   CUtlMap<EEvent, CDOTAEventDefinition*, short unsigned int, bool (*)(const EEvent&, const EEvent&)>
//   CUtlMap<unsigned int, EEvent, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >
//   CUtlMap<unsigned int, CSeriesScores*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<CUtlSymbolLarge, CTimeline*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)>
//   CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*, short unsigned int, bool (*)(const CSteamID&, const CSteamID&)>
//   CUtlMap<int, CDotaStatManager::CBotPlayerStatState*, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<int, CTimeline*, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<int, CDOTA_World_Map_Location*, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<float, int, int, CDefLess<float> >
//   CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*, short unsigned int, bool (*)(const CHandle<CBaseEntity>&, const CHand
//   CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >*, short unsig
//   CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)>
//   CUtlMap<KillCountAdjustmentKey_t, KillCountAdjustmentValue_t, short unsigned int, bool (*)(const KillCountAdjustmentKey_
//   CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*, CUtlMemory<const CAssetModifier*
//   CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*, CUtlMemory<const CAssetModifier*
//   CUtlMap<unsigned int, CEconSchemaSymbol, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<int, CHeroLoadout, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<int, CFreeHeroLoadout, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<int, CHeroBaseItems, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<int, CDOTAHeroSlots, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<short unsigned int, const CEconItemDefinition*, short unsigned int, bool (*)(short unsigned int const&, short un
//   CUtlMap<int, CEconItemAttributeDefinition, int, bool (*)(int const&, int const&)>
//   CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*, short unsigned int, bool (*)(unsigned int const&, unsigned
//   CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<CUtlStringToken, CUtlString, int, bool (*)(const CUtlStringToken&, const CUtlStringToken&)>
//   CUtlMap<char const*, CEntityClass*, short unsigned int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CEntityComponentHelper*, short unsigned int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> >*, short unsigned int, bool (*)(const
//   CUtlMap<unsigned int, char const*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<unsigned int, void (CResponseFileParser::*)(), short unsigned int, bool (*)(unsigned int const&, unsigned int co
//   CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&), short unsigned int, bool (*)(unsigned int const&, unsigned i
//   CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, ResponseParams*), short unsigned in
//   CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponseParams&), short unsigned int, b
//   CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*, short unsigned int, bool (*)(char const* const&, char con
//   CUtlMap<unsigned int, char const*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<unsigned int, char const*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<RetargetKey_t, int, short unsigned int, bool (*)(const RetargetKey_t&, const RetargetKey_t&)>
//   CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (*)(const CMeshEdgeSplitter
//   CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*, short unsigned int, bool (*)(const GCSDK::SOID_t&, const GCSD
//   CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*, short unsigned int, bool (*)(const GCSDK::SOID_t&, const GCSDK::S
//   CUtlMap<unsigned int, long long unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)>
//   CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*, short unsigned int, bool (*)(const GCSDK::SOID_t&, const GCS
//   CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int, bool (*)(void* const&, void* const&)>
//   CUtlMap<int, GCSDK::CSOIDNameInfo, short unsigned int, bool (*)(int const&, int const&)>
//   CUtlMap<float, CFoW_1DZ::CIRCLEINFO*, short unsigned int, bool (*)(float const&, float const&)>
//   CUtlMap<float, CFoW_1DZ::CIRCLEINFO*, short unsigned int, bool (*)(float const&, float const&)>
