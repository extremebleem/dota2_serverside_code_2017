// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlmemory.h:57
class CUtlMemory<char*, int> {
	enum {
		EXTERNAL_BUFFER_MARKER = 0x40000000,
		EXTERNAL_BUFFER_GROWABLE_MARKER = 0x80000000,
		EXTERNAL_CONST_BUFFER_MARKER = 0xc0000000,
		GROWSIZE_VALUE_MASK = 0x3fffffff,
		GROWSIZE_FLAGS_MASK = 0xc0000000,
	};
	static const int INVALID_INDEX;
protected:

	char * * m_pMemory;  // +0x0
	int m_nAllocationCount;  // +0x8
	uint32 m_nGrowSize;  // +0xc
	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemory(int, int);
	CUtlMemory(char * *, int, bool, uint32);
	CUtlMemory(char * const *, int);
	~CUtlMemory();
	CUtlMemory(CUtlMemory<char*, int> &);
	void Init(int, int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	char * & operator[](int);
	char * const & operator[](int);
	char * & Element(int);
	char * const & Element(int);
	bool IsIdxValid(int);
	int InvalidIndex();
	char * * Base();
	char * const * Base();
	void SetExternalBuffer(char * *, int, bool, uint32);
	void SetExternalBuffer(char * const *, int);
	void SetExternalBuffer(const CUtlMemory<char*, int> &);
	void AssumeMemory(char * *, int);
	char * * Detach();
	void * DetachMemory();
	void Swap(CUtlMemory<char*, int> &);
	void ConvertToGrowableMemory(int);
	void ConvertToExternalMemory(char * *, int, int, bool, uint32);
	int NumAllocated();
	size_t AllocSize();
	size_t NonfixedAllocSize();
	int Count();
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Purge(int);
	bool IsExternallyAllocated();
	bool IsGrowable();
	bool IsReadOnly();
	void SetGrowSize(int);
	bool IsUsingGrowableMemory();
	void VerifyAllocation();
	void ValidateGrowSize();

private:

	CUtlMemory(CUtlMemory<char*, int> &);
	CUtlMemory<char*, int> & operator=(CUtlMemory<char*, int> &);

	// sizeof = 16
};

// src/public/tier1/utlmemory.h:57
class CUtlMemory<unsigned char, int> {
	static const int INVALID_INDEX;
protected:

	unsigned char * m_pMemory;  // +0x0
	int m_nAllocationCount;  // +0x8
	uint32 m_nGrowSize;  // +0xc
	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemory(int, int);
	CUtlMemory(unsigned char *, int, bool, uint32);
	CUtlMemory(const unsigned char *, int);
	~CUtlMemory();
	CUtlMemory(CUtlMemory<unsigned char, int> &);
	void Init(int, int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	unsigned char & operator[](int);
	const unsigned char & operator[](int);
	unsigned char & Element(int);
	const unsigned char & Element(int);
	bool IsIdxValid(int);
	int InvalidIndex();
	unsigned char * Base();
	const unsigned char * Base();
	void SetExternalBuffer(unsigned char *, int, bool, uint32);
	void SetExternalBuffer(const unsigned char *, int);
	void SetExternalBuffer(const CUtlMemory<unsigned char, int> &);
	void AssumeMemory(unsigned char *, int);
	unsigned char * Detach();
	void * DetachMemory();
	void Swap(CUtlMemory<unsigned char, int> &);
	void ConvertToGrowableMemory(int);
	void ConvertToExternalMemory(unsigned char *, int, int, bool, uint32);
	int NumAllocated();
	size_t AllocSize();
	size_t NonfixedAllocSize();
	int Count();
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Purge(int);
	bool IsExternallyAllocated();
	bool IsGrowable();
	bool IsReadOnly();
	void SetGrowSize(int);
	bool IsUsingGrowableMemory();
	void VerifyAllocation();
	void ValidateGrowSize();

private:

	CUtlMemory(CUtlMemory<unsigned char, int> &);
	CUtlMemory<unsigned char, int> & operator=(CUtlMemory<unsigned char, int> &);

	// sizeof = 16
};

// src/public/tier1/utlmemory.h:57
class CUtlMemory<JSONParserMessageField_t, int> {
	enum {
		EXTERNAL_BUFFER_MARKER = 0x40000000,
		EXTERNAL_BUFFER_GROWABLE_MARKER = 0x80000000,
		EXTERNAL_CONST_BUFFER_MARKER = 0xc0000000,
		GROWSIZE_VALUE_MASK = 0x3fffffff,
		GROWSIZE_FLAGS_MASK = 0xc0000000,
	};
	static const int INVALID_INDEX;
protected:

	int m_nAllocationCount;  // +0x8
	uint32 m_nGrowSize;  // +0xc
	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemory(int, int);
	CUtlMemory(JSONParserMessageField_t *, int, bool, uint32);
	CUtlMemory(const JSONParserMessageField_t *, int);
	~CUtlMemory();
	CUtlMemory(CUtlMemory<JSONParserMessageField_t, int> &);
	void Init(int, int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	JSONParserMessageField_t & operator[](int);
	const JSONParserMessageField_t & operator[](int);
	JSONParserMessageField_t & Element(int);
	const JSONParserMessageField_t & Element(int);
	bool IsIdxValid(int);
	int InvalidIndex();
	JSONParserMessageField_t * Base();
	const JSONParserMessageField_t * Base();
	void SetExternalBuffer(JSONParserMessageField_t *, int, bool, uint32);
	void SetExternalBuffer(const JSONParserMessageField_t *, int);
	void SetExternalBuffer(const CUtlMemory<JSONParserMessageField_t, int> &);
	void AssumeMemory(JSONParserMessageField_t *, int);
	JSONParserMessageField_t * Detach();
	void * DetachMemory();
	void Swap(CUtlMemory<JSONParserMessageField_t, int> &);
	void ConvertToGrowableMemory(int);
	void ConvertToExternalMemory(JSONParserMessageField_t *, int, int, bool, uint32);
	int NumAllocated();
	size_t AllocSize();
	size_t NonfixedAllocSize();
	int Count();
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Purge(int);
	bool IsExternallyAllocated();
	bool IsGrowable();
	bool IsReadOnly();
	void SetGrowSize(int);
	bool IsUsingGrowableMemory();
	void VerifyAllocation();
	void ValidateGrowSize();

private:

	CUtlMemory(CUtlMemory<JSONParserMessageField_t, int> &);
	CUtlMemory<JSONParserMessageField_t, int> & operator=(CUtlMemory<JSONParserMessageField_t, int> &);

	// sizeof = 16
};

// src/public/tier1/utlmemory.h:232
class CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int> : public CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int> {
public:

	CUtlMemoryFixedGrowable_Base(ClassToTraverse_t *, int, int, int);
	void Purge_FixedGrowable(ClassToTraverse_t *, int, int);

	// sizeof = 16
};

// src/public/tier1/utlmemory.h:232
class CUtlMemoryFixedGrowable_Base<const CSchemaClassInfo*, int> : public CUtlMemory<const CSchemaClassInfo*, int> {
public:

	CUtlMemoryFixedGrowable_Base(const CSchemaClassInfo * *, int, int, int);
	void Purge_FixedGrowable(const CSchemaClassInfo * *, int, int);

	// sizeof = 16
};

// src/public/tier1/utlmemory.h:232
class CUtlMemoryFixedGrowable_Base<CSceneObjectData, int> : public CUtlMemory<CSceneObjectData, int> {
public:

	CUtlMemoryFixedGrowable_Base(CSceneObjectData *, int, int, int);
	void Purge_FixedGrowable(CSceneObjectData *, int, int);

	// sizeof = 16
};

// src/public/tier1/utlmemory.h:264
class CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8ul, int> : public CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int> {
public:

private:

	CUtlMemoryFixedGrowable(int, int);
	void Purge(int);

	// sizeof = 144
};

// src/public/tier1/utlmemory.h:264
class CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 32ul, int> : public CUtlMemoryFixedGrowable_Base<const CSchemaClassInfo*, int> {
public:

private:

	CUtlMemoryFixedGrowable(int, int);
	void Purge(int);

	// sizeof = 272
};

// src/public/tier1/utlmemory.h:264
class CUtlMemoryFixedGrowable<CSceneObjectData, 1ul, int> : public CUtlMemoryFixedGrowable_Base<CSceneObjectData, int> {
public:

private:

	CUtlMemoryFixedGrowable(int, int);
	void Purge(int);

	// sizeof = 88
};

// src/public/tier1/utlmemory.h:293
class CUtlMemoryFixed<CFieldPathHuffmanEncoder::HuffCode, 40ul> {
	static const int INVALID_INDEX;
private:

	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemoryFixed(int, int);
	CUtlMemoryFixed(HuffCode *, int);
	~CUtlMemoryFixed();
	bool IsIdxValid(int);
	int InvalidIndex();
	HuffCode * Base();
	const HuffCode * Base();
	HuffCode & operator[](int);
	const HuffCode & operator[](int);
	HuffCode & Element(int);
	const HuffCode & Element(int);
	void SetExternalBuffer(HuffCode *, int);
	int NumAllocated();
	int Count();
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Purge(int);
	bool IsExternallyAllocated();
	size_t NonfixedAllocSize();
	void SetGrowSize(int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	bool IsUsingGrowableMemory();

	// sizeof = 1600
};

// src/public/tier1/utlmemory.h:293
class CUtlMemoryFixed<CRenderBufferBinding, 4ul> {
	static const int INVALID_INDEX;
private:

	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemoryFixed(int, int);
	CUtlMemoryFixed(CRenderBufferBinding *, int);
	~CUtlMemoryFixed();
	bool IsIdxValid(int);
	int InvalidIndex();
	CRenderBufferBinding * Base();
	const CRenderBufferBinding * Base();
	CRenderBufferBinding & operator[](int);
	const CRenderBufferBinding & operator[](int);
	CRenderBufferBinding & Element(int);
	const CRenderBufferBinding & Element(int);
	void SetExternalBuffer(CRenderBufferBinding *, int);
	int NumAllocated();
	int Count();
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Purge(int);
	bool IsExternallyAllocated();
	size_t NonfixedAllocSize();
	void SetGrowSize(int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	bool IsUsingGrowableMemory();

	// sizeof = 64
};

// src/public/tier1/utlmemory.h:293
class CUtlMemoryFixed<ConstantBufferHandle_t__*, 4ul> {
	static const int INVALID_INDEX;
private:

	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemoryFixed(int, int);
	CUtlMemoryFixed(ConstantBufferHandle_t__ * *, int);
	~CUtlMemoryFixed();
	bool IsIdxValid(int);
	int InvalidIndex();
	ConstantBufferHandle_t__ * * Base();
	ConstantBufferHandle_t__ * const * Base();
	ConstantBufferHandle_t__ * & operator[](int);
	ConstantBufferHandle_t__ * const & operator[](int);
	ConstantBufferHandle_t__ * & Element(int);
	ConstantBufferHandle_t__ * const & Element(int);
	void SetExternalBuffer(ConstantBufferHandle_t__ * *, int);
	int NumAllocated();
	int Count();
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Purge(int);
	bool IsExternallyAllocated();
	size_t NonfixedAllocSize();
	void SetGrowSize(int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	bool IsUsingGrowableMemory();

	// sizeof = 32
};

// src/public/tier1/utlmemory.h:378
class CUtlMemoryConservative<const VPhysXBodyPart_t*> {
private:

	const VPhysXBodyPart_t * * m_pMemory;  // +0x0
	size_t m_nCurAllocSize;  // +0x8
	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemoryConservative(int, int);
	CUtlMemoryConservative(const VPhysXBodyPart_t * *, int);
	~CUtlMemoryConservative();
	bool IsIdxValid(int);
	int InvalidIndex();
	const VPhysXBodyPart_t * * Base();
	const VPhysXBodyPart_t * const * Base();
	const VPhysXBodyPart_t * & operator[](int);
	const VPhysXBodyPart_t * const & operator[](int);
	const VPhysXBodyPart_t * & Element(int);
	const VPhysXBodyPart_t * const & Element(int);
	void SetExternalBuffer(const VPhysXBodyPart_t * *, int);
	void RememberAllocSize(size_t);
	size_t AllocSize();
	int NumAllocated();
	int Count();
	void ReAlloc(size_t);
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Swap(CUtlMemoryConservative<const VPhysXBodyPart_t*> &);
	void Purge(int);
	bool IsExternallyAllocated();
	void SetGrowSize(int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	bool IsUsingGrowableMemory();

	// sizeof = 16
};

// src/public/tier1/utlmemory.h:378
class CUtlMemoryConservative<CGameSceneNode*> {
private:

	size_t m_nCurAllocSize;  // +0x8
	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemoryConservative(int, int);
	CUtlMemoryConservative(CGameSceneNode * *, int);
	~CUtlMemoryConservative();
	bool IsIdxValid(int);
	int InvalidIndex();
	CGameSceneNode * * Base();
	CGameSceneNode * const * Base();
	CGameSceneNode * & operator[](int);
	CGameSceneNode * const & operator[](int);
	CGameSceneNode * & Element(int);
	CGameSceneNode * const & Element(int);
	void SetExternalBuffer(CGameSceneNode * *, int);
	void RememberAllocSize(size_t);
	size_t AllocSize();
	int NumAllocated();
	int Count();
	void ReAlloc(size_t);
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Swap(CUtlMemoryConservative<CGameSceneNode*> &);
	void Purge(int);
	bool IsExternallyAllocated();
	void SetGrowSize(int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	bool IsUsingGrowableMemory();

	// sizeof = 16
};

// src/public/tier1/utlmemory.h:378
class CUtlMemoryConservative<short int> {
private:

	short int * m_pMemory;  // +0x0
	size_t m_nCurAllocSize;  // +0x8
	class Iterator_t {
		// sizeof = 0
	};
	CUtlMemoryConservative(int, int);
	CUtlMemoryConservative(short int *, int);
	~CUtlMemoryConservative();
	bool IsIdxValid(int);
	int InvalidIndex();
	short int * Base();
	const short int * Base();
	short int & operator[](int);
	const short int & operator[](int);
	short int & Element(int);
	const short int & Element(int);
	void SetExternalBuffer(short int *, int);
	void RememberAllocSize(size_t);
	size_t AllocSize();
	int NumAllocated();
	int Count();
	void ReAlloc(size_t);
	void Grow(int);
	void EnsureCapacity(int);
	void Purge();
	void Swap(CUtlMemoryConservative<short int> &);
	void Purge(int);
	bool IsExternallyAllocated();
	void SetGrowSize(int);
	Iterator_t First();
	Iterator_t Next(const Iterator_t &);
	/* tag__fprintf: const_type tag not supported! */;
	int GetIndex(const Iterator_t &);
	bool IsIdxAfter(int, const Iterator_t &);
	bool IsValidIterator(const Iterator_t &);
	Iterator_t InvalidIterator();
	bool IsUsingGrowableMemory();

	// sizeof = 16
};

// CUtlMemory: 1255 more instantiations (full list in INDEX.tsv)
//   CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int>
//   CUtlMemory<CUtlSymbolTable::StringPool_t*, int>
//   CUtlMemory<unsigned char, int>
//   CUtlMemory<CUtlString, int>
//   CUtlMemory<void*, int>
//   CUtlMemory<const CSchemaClassInfo*, int>
//   CUtlMemory<const CSchemaEnumInfo*, int>
//   CUtlMemory<char const**, int>
//   CUtlMemory<void (**)(void*), int>
//   CUtlMemory<bool (**)(void*, char const*), int>
//   CUtlMemory<void (**)(void*, CUtlString*), int>
//   CUtlMemory<SerializeInfo_t*, int>
//   CUtlMemory<DynamicSerializeInfo_t*, int>
//   CUtlMemory<void (**)(IPropertyEditDomain*, const PropEdSpecificAttr_t&, CUtlVector<CUtlString, CUtlMemory<CUtlString, in
//   CUtlMemory<int*, int>
//   CUtlMemory<PropertyClassAsStringFuncs_t*, int>
//   CUtlMemory<void (**)(void*, void*), int>
//   CUtlMemory<int, int>
//   CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>
//   CUtlMemory<NetworkOverride_t*, int>
//   CUtlMemory<NetworkUserGroupProxyInfo_t**, int>
//   CUtlMemory<NetworkVarDecl_t*, int>
//   CUtlMemory<float*, int>
//   CUtlMemory<void (**)(void*, void*, void*, CSendProxyRecipients*, int), int>
//   CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>
//   CUtlMemory<long long unsigned int*, int>
//   CUtlMemory<EntityIOConnectionDescFat_t, int>
//   CUtlMemory<ScriptFunctionBinding_t, int>
//   CUtlMemory<ComponentUnserializerPtrToClassInfo_t, int>
//   CUtlMemory<ComponentPostUnserializerInfo_t, int>
//   CUtlMemory<EntOutput_t, int>
//   CUtlMemory<ComponentKeyField_t*, int>
//   CUtlMemory<VsInputSignatureElement_t, int>
//   CUtlMemory<CEntityClass::ComponentOffsets_t, int>
//   CUtlMemory<CEntityClass::ComponentHelper_t, int>
//   CUtlMemory<CEntityClass::ClassInputInfo_t, int>
//   CUtlMemory<CEntityClass::ClassOutputInfo_t, int>
//   CUtlMemory<bool, int>
//   CUtlMemory<KeyValues3*, int>
//   CUtlMemory<const KeyValues3*, int>
//   CUtlMemory<RenderSkeletonBone_t, int>
//   CUtlMemory<CUtlStringToken, int>
//   CUtlMemory<CMaterialDrawDescriptor, int>
//   CUtlMemory<CHitBox, int>
//   CUtlMemory<CSceneObjectData, int>
//   CUtlMemory<CBaseConstraint*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Nod
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node
//   CUtlMemory<TraceDataForDraw_t, int>
//   CUtlMemory<CFlexOp, int>
//   CUtlMemory<float, int>
//   CUtlMemory<CMorphBundleData, int>
//   CUtlMemory<CMorphRectData, int>
//   CUtlMemory<MorphBundleType_t, int>
//   CUtlMemory<CMorphData, int>
//   CUtlMemory<CFlexDesc, int>
//   CUtlMemory<CFlexController, int>
//   CUtlMemory<CFlexRule, int>
//   CUtlMemory<FlexControllerMapping_t, int>
//   CUtlMemory<FlexDescMapping_t, int>
//   CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>
//   CUtlMemory<TintedCachedSlotInfo_t, int>
//   CUtlMemory<Vector, int>
//   CUtlMemory<ISceneView::WorldList_t, int>
//   CUtlMemory<CSceneObjectStateOverideEntry<const CSceneSystemStencilState*>, int>
//   CUtlMemory<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>
//   CUtlMemory<ChildSceneObjectReference_t, int>
//   CUtlMemory<CMeshDrawPrimitive_t, int>
//   CUtlMemory<CUtlVector<CCharRenderGeometry, CUtlMemory<CCharRenderGeometry, int> >, int>
//   CUtlMemory<CCharRenderGeometry, int>
//   CUtlMemory<CEntityIOOutput*, int>
//   CUtlMemory<const EntityIOOutputDesc_t*, int>
//   CUtlMemory<short unsigned int, int>
//   CUtlMemory<CUtlString, int>
//   CUtlMemory<unsigned int, int>
//   CUtlMemory<ValidationResult_t::ValidationResultEntry_t, int>
//   CUtlMemory<CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>
//   CUtlMemory<IPrerequisite*, int>
//   CUtlMemory<UtlLinkedListElem_t<IPrerequisite*, short unsigned int>, short unsigned int>
//   CUtlMemory<HResourceManifest__*, int>
//   CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int>
//   CUtlMemory<COverlapHit, int>
//   CUtlMemory<CGameTrace, int>
//   CUtlMemory<ParticleOperatorId_t*, int>
//   CUtlMemory<char const*, int>
//   CUtlMemory<CRnPlaneResult, int>
//   CUtlMemory<PropEdIndirectionType_t, int>
//   CUtlMemory<PropEdCustomCommand_t, int>
//   CUtlMemory<PropEdAttributeInfo_t, int>
//   CUtlMemory<PropEdSpecificElement_t, int>
//   CUtlMemory<CUtlSignaller_Base*, int>
//   CUtlMemory<RenderAttrGatherInfo_t, int>
//   CUtlMemory<RenderAttrUpdater_t*, int>
//   CUtlMemory<HGameResourceManifest__*, int>
//   CUtlMemory<CPhysAggregateData*, int>
//   CUtlMemory<RnIteration_t, int>
//   CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHa
//   CUtlMemory<CInterpolationTimeContext, int>
//   CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int>
//   CUtlMemory<const CEntityKeyValues*, int>
//   CUtlMemory<CEventRegister*, int>
//   CUtlMemory<MetaExposeToScript_t*, int>
//   CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>
//   CUtlMemory<attachedparticlecontrolpoint_t, int>
//   CUtlMemory<const CAssetModifier*, int>
//   CUtlMemory<item_definition_index_t, int>
//   CUtlMemory<lootlist_attrib_t*, int>
//   CUtlMemory<CEconLootListDefinition::loot_list_additional_drop_t, int>
//   CUtlMemory<random_attrib_t*, int>
//   CUtlMemory<autograph_t::level_t, int>
//   CUtlMemory<CEconItemDefinition*, int>
//   CUtlMemory<static_attrib_t, int>
//   CUtlMemory<CEconSchemaSymbol, int>
//   CUtlMemory<attr_type_t, int>
//   CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*>::Node_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CEconItemRarityDefinition, int>::Node_t, int>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CEconItemQualityDefinition, int>::Node_t, int>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, autograph_t, int>::Node_t, int>, int>
//   CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*>::Node_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CEconItemAttributeDefinition, int>::Node_t, int>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, AssetModifier_t>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, ItemPartner_t>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol, CEconItemSetDefinition*, int>::Node_t, int>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconLootListDefinition, int, bool (*)(char const* const&, char const* c
//   CUtlMemory<CTimedItemRewardDefinition, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, AchievementAward_t*, int, bool (*)(char const* const&, char const* const
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, AchievementAward_t*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, attachedparticlesystem_t>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CEconItemSchema::EquipRegion, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, const random_attrib_t*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEconSchemaSymbol, KeyValues*, int>::Node_t, int>, int>
//   CUtlMemory<CEconColorDefinition*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CEconSoundMaterialDefinition, int>::Node_t, int>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, kill_eater_score_type_t>::Node_t, short unsigned int>, short unsigned i
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t, item_definition_index_t, short unsigned int>::Node_t, short 
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUtlVector<CItemLevelingDefinition>*, int, bool (*)(char const* const&, 
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconSchemaSymbol, int, bool (*)(char const* const&, char const* const&)
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t, KeyValues*>::Node_t, short unsigned int>, short unsigned int
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEconItemSetDefinition*, int, bool (*)(char const* const&, char const* c
//   CUtlMemory<CItemLevelingDefinition, int>
//   CUtlMemory<CThreadSafeMemoryPool::BlockSet_t, int>
//   CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t, int>
//   CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int>
//   CUtlMemory<short int*, int>
//   CUtlMemory<GCSDK::MsgInfo_t, int>
//   CUtlMemory<CHandle<CBaseEntity>, int>
//   CUtlMemory<CAttributeManager::cached_attribute_float_t, int>
//   CUtlMemory<IClientMessageDelegateHook*, int>
//   CUtlMemory<CKnownEntity, int>
//   CUtlMemory<CDOTA_AttackRecord*, int>
//   CUtlMemory<sSharedCooldownInfo, int>
//   CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>
//   CUtlMemory<CDOTA_ModifierManager::BuffModifier_t, int>
//   CUtlMemory<modifierfunction, int>
//   CUtlMemory<CDOTA_ScriptedSpawner::scripted_moveto_t, int>
//   CUtlMemory<DataTeamPlayer_t, int>
//   CUtlMemory<IResponseSystem*, int>
//   CUtlMemory<CMultiplayRules::ResponseRules_t, int>
//   CUtlMemory<CUtlVector<VoiceCommandMenuItem_t, CUtlMemory<VoiceCommandMenuItem_t, int> >, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char 
//   CUtlMemory<PlayerResourcePlayerTeamData_t, int>
//   CUtlMemory<PlayerResourcePlayerData_t, int>
//   CUtlMemory<PlayerResourceBroadcasterData_t, int>
//   CUtlMemory<std::pair<item_definition_index_t, itemid_t>, int>
//   CUtlMemory<sPendingTreeRemoval, int>
//   CUtlMemory<PurchasedItem_t, int>
//   CUtlMemory<TimedBalanceRecord_t, int>
//   CUtlMemory<TimedKillEvent_t, int>
//   CUtlMemory<CHandle<CDOTA_Unit_Courier>, int>
//   CUtlMemory<DamageShareEvent_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, int>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int>
//   CUtlMemory<CDOTAMusicSystemElement, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned
//   CUtlMemory<CEconItemView*, int>
//   CUtlMemory<CInventoryManager::inventories_t, int>
//   CUtlMemory<CDOTA_CombatLogQueryProgress, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CDOTASubChallengeInfo, int>
//   CUtlMemory<KeyValues*, int>
//   CUtlMemory<CSteamID, int>
//   CUtlMemory<VoiceCommandMenuItem_t, int>
//   CUtlMemory<CEntityHandle, int>
//   CUtlMemory<CUtlSymbolLarge, int>
//   CUtlMemory<CHandle<CPointClientUIWorldPanel>, int>
//   CUtlMemory<prevent_interaction_t, int>
//   CUtlMemory<CHandle<CBaseVRHandAttachment>, int>
//   CUtlMemory<matrix3x4_t, int>
//   CUtlMemory<ScriptFunctionBinding_t, int>
//   CUtlMemory<ResourceManifestDesc_t*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CBaseAchievement*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CBaseAchievement*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CPlayerAchievementState*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CacheOptimizedKDNode_t, int>
//   CUtlMemory<LightDesc_t, int>
//   CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>
//   CUtlMemory<InstancedRayTracingEnvironmentReference_t*, int>
//   CUtlMemory<RayTracingEnvironment*, int>
//   CUtlMemory<CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >, int>
//   CUtlMemory<CUtlStringToken, int>
//   CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int>
//   CUtlMemory<const OffsetIgnore_t*, int>
//   CUtlMemory<COverlapHit, int>
//   CUtlMemory<CGameTrace, int>
//   CUtlMemory<matrix3x4a_t, int>
//   CUtlMemory<CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4>::InternalInfo_t*, int>
//   CUtlMemory<SceneObjectUpdaterHandle_t__*, int>
//   CUtlMemory<__vector(4) float, int>
//   CUtlMemory<datarun_t, int>
//   CUtlMemory<typedescription_t, int>
//   CUtlMemory<customfield_t, int>
//   CUtlMemory<const typedescription_t*, int>
//   CUtlMemory<SpawnGroupConnectionInfo_t, int>
//   CUtlMemory<IPVS*, int>
//   CUtlMemory<UtlRBTreeNode_t<FlattenedSerializerHandle_t__*, short unsigned int>, short unsigned int>
//   CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>
//   CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>
//   CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>
//   CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>
//   CUtlMemory<Vector, int>
//   CUtlMemory<char, int>
//   CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>
//   CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, int>
//   CUtlMemory<CNetworkFieldReallocRecord, int>
//   CUtlMemory<CNetworkFieldDeallocRecord, int>
//   CUtlMemory<CEntityIOOutput*, int>
//   CUtlMemory<CBaseEntity*, int>
//   CUtlMemory<thinkfunc_t, int>
//   CUtlMemory<LocalFlexController_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsig
//   CUtlMemory<CSceneEventInfo*, int>
//   CUtlMemory<CChoreoScene*, int>
//   CUtlMemory<UtlRBTreeNode_t<ImportedDesc_t, short unsigned int>, short unsigned int>
//   CUtlMemory<typedescription_t*, int>
//   CUtlMemory<CExpressionSample, int>
//   CUtlMemory<CBezierHandlesForSample, int>
//   CUtlMemory<UtlLinkedListElem_t<CBaseCubemap*, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CTonemapController2*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CHandle<CLightEntity>, int>
//   CUtlMemory<CEntityHandle, int>
//   CUtlMemory<CUtlPair<CUtlSymbol, CUtlSymbol>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CUtlDelegate<void(const EventSpawnGroupPrecache_t&)> >::Node_t, short u
//   CUtlMemory<ResourceManifestDesc_t*, int>
//   CUtlMemory<URLArgument_t, int>
//   CUtlMemory<AddedGameSystem_t, int>
//   CUtlMemory<IGameSystem*, int>
//   CUtlMemory<CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >, int>
//   CUtlMemory<IGameSystem::FactoryInfo_t, int>
//   CUtlMemory<sDamageHandlerInfo, int>
//   CUtlMemory<CHintMessage*, int>
//   CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CHandle<CInfoLadderDismount>, int>
//   CUtlMemory<CFuncLadder*, int>
//   CUtlMemory<CAnimationLayer, int>
//   CUtlMemory<void*, int>
//   CUtlMemory<short int, int>
//   CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int>
//   CUtlMemory<CModelSkeleton::BoneFlags_t, int>
//   CUtlMemory<Quaternion, int>
//   CUtlMemory<char const*, int>
//   CUtlMemory<CRender::ViewStack_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigne
//   CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::ConnectedSlot_t, int>
//   CUtlMemory<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int, CEventSignature_Void_0> >*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CRenderGameSystem::SecondarySceneWorld_t>::Node_t, short unsigned in
//   CUtlMemory<RenderAttrGatherInfo_t, int>
//   CUtlMemory<RenderAttrUpdater_t*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CPhysicsGameSystem::PhysicsSpawnGroups_t>::Node_t, short unsigned int>,
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CPhysicsGameSystem::PhysicsWorld_t>::Node_t, short unsigned int>, sh
//   CUtlMemory<CGameSceneNodeHandle, int>
//   CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int>
//   CUtlMemory<CSkeletonInstance*, int>
//   CUtlMemory<physicssound::impactsound_t, int>
//   CUtlMemory<physicssound::breaksound_t, int>
//   CUtlMemory<physicssound::friction_t, int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t>*>::Node_t, short uns
//   CUtlMemory<const CEntityKeyValues*, int>
//   CUtlMemory<CEntityIndex, int>
//   CUtlMemory<NavAttributeEnum, int>
//   CUtlMemory<CBasePlayer*, int>
//   CUtlMemory<CGameSceneNode*, int>
//   CUtlMemory<CBodyGameSystem::HierarchySetupWork_t, int>
//   CUtlMemory<CSkeletonAnimationController*, int>
//   CUtlMemory<EntityNotification_t, int>
//   CUtlMemory<CCustomGameEventManager::CCustomGameEventListener*, int>
//   CUtlMemory<CCustomGameEventManager::CCustomGameEventInfo*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, HSCRIPT__*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CDecalMaterialParams, int>
//   CUtlMemory<CUtlVector<NameToDecalMaterialParamsMapping_t, CUtlMemory<NameToDecalMaterialParamsMapping_t, int> >, int>
//   CUtlMemory<CUtlVector<SkeletonInstanceDecalList_t, CUtlMemory<SkeletonInstanceDecalList_t, int> >, int>
//   CUtlMemory<CDecalInfo*, int>
//   CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int>
//   CUtlMemory<entitytable_t, int>
//   CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int>
//   CUtlMemory<SaveRestoreTranslate_t, int>
//   CUtlMemory<const CDecalInfo*, int>
//   CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t, int>
//   CUtlMemory<CEntityIdentity*, int>
//   CUtlMemory<CEntityDebugGrab*, int>
//   CUtlMemory<entitynotify_t, int>
//   CUtlMemory<SpawnGroupConnectionInfo_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CMapSpawnGroup*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CSpawnGroupMgrGameSystem::UnloadRequestQueueItem_t, int>
//   CUtlMemory<CSosMessageQueue<SoundEventGuid_t>::Entry_t, int>
//   CUtlMemory<CSosMessageQueue<unsigned int>::Entry_t, int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int>
//   CUtlMemory<void (*)(), int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>
//   CUtlMemory<VPhysIntersectionNotification_t, int>
//   CUtlMemory<CGameEventTouchAdaptor, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<IPhysAggregateInstance*, int>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<Source1_Ray_t, int>
//   CUtlMemory<Ray_t, int>
//   CUtlMemory<IPhysicsBody*, int>
//   CUtlMemory<simthinkentry_t, int>
//   CUtlMemory<CInfoSpawnGroupLandmark*, int>
//   CUtlMemory<CInfoSpawnGroupLoadUnload*, int>
//   CUtlMemory<stepsimulationentry_t, int>
//   CUtlMemory<CEntityInstance*, int>
//   CUtlMemory<rr2::MatchInfo_t, int>
//   CUtlMemory<rr2::CResponseQuery::CFact, int>
//   CUtlMemory<CGameEventCallback*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CScriptConsoleCommand*, int, bool (*)(char const* const&, char const* co
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConVar*, int, bool (*)(char const* const&, char const* const&)>::Node_t,
//   CUtlMemory<UtlLinkedListElem_t<CScrollingScreenOverlay::TextLine_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CUtlVector<CVScriptGameEventListener::GameEventFunc_t>*>::Node_t, short unsigned
//   CUtlMemory<CVScriptGameEventListener::GameEventFunc_t, int>
//   CUtlMemory<CUtlSphereTree::Node, int>
//   CUtlMemory<BoneHashPairing_t, int>
//   CUtlMemory<NameToDecalMaterialParamsMapping_t, int>
//   CUtlMemory<SkeletonInstanceDecalList_t, int>
//   CUtlMemory<CUtlSignaller_Identified<CEventIDManager_DescriptorDriven<unsigned int> >::EventAndDelegate_t, int>
//   CUtlMemory<CUtlSignalQueue<CEventIDManager_DescriptorDriven<unsigned int> >::RefCountedSignallerPointer_t*, int>
//   CUtlMemory<CGameSaveRestoreInfo::CHashElement, int>
//   CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>
//   CUtlMemory<ResponseContext_t, int>
//   CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int>
//   CUtlMemory<Relationship_t, int>
//   CUtlMemory<CHandle<CBaseCombatWeapon>, int>
//   CUtlMemory<CHandle<CEconWearable>, int>
//   CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int>
//   CUtlMemory<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, int>
//   CUtlMemory<CHandle<CBasePropDoor>, int>
//   CUtlMemory<CAI_Link*, int>
//   CUtlMemory<CHandle<CAI_DynamicLink>, int>
//   CUtlMemory<CFish*, int>
//   CUtlMemory<CHandle<CFish>, int>
//   CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int>
//   CUtlMemory<CHandle<CBasePlayer>, int>
//   CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int>
//   CUtlMemory<magnetted_objects_t, int>
//   CUtlMemory<CTeamSpawnPoint*, int>
//   CUtlMemory<WeaponTextureData_t, int>
//   CUtlMemory<WeaponSoundData_t, int>
//   CUtlMemory<vehicle_gear_t, int>
//   CUtlMemory<vehicle_crashsound_t, int>
//   CUtlMemory<CPassengerSeatTransition, int>
//   CUtlMemory<CPassengerSeat, int>
//   CUtlMemory<CPassengerInfo, int>
//   CUtlMemory<CPassengerRole, int>
//   CUtlMemory<CBaseServerVehicle::entryanim_t, int>
//   CUtlMemory<CBaseServerVehicle::exitanim_t, int>
//   CUtlMemory<CNavAttributeLookup, int>
//   CUtlMemory<CNavArea*, int>
//   CUtlMemory<CNavLadder*, int>
//   CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int>
//   CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int>
//   CUtlMemory<CFuncNavConnectionBlocker*, int>
//   CUtlMemory<CNavDoorBlocker*, int>
//   CUtlMemory<KeyValues*, int>
//   CUtlMemory<SosEditItemInfo_t, int>
//   CUtlMemory<CUtlHandleTable<CBaseNugget_Private, 16>::EntryType_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int>
//   CUtlMemory<rr2::MatchInfo_t, int>
//   CUtlMemory<rr2::CResponseQuery::CFact, int>
//   CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int>
//   CUtlMemory<CPropData::propdata_breakablechunk_t, int>
//   CUtlMemory<breakmodel_t, int>
//   CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t, int>
//   CUtlMemory<char, int>
//   CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>
//   CUtlMemory<CAnimBoneDifference, int>
//   CUtlMemory<CAnimMorphDifference, int>
//   CUtlMemory<CAnimUserDifference, int>
//   CUtlMemory<CTransform, int>
//   CUtlMemory<CAnimFrameBlockAnim, int>
//   CUtlMemory<CAnimMovement, int>
//   CUtlMemory<CAnimAnimEvent, int>
//   CUtlMemory<CAnimActivity, int>
//   CUtlMemory<CAnimLocalHierarchy, int>
//   CUtlMemory<CAnimIKRule, int>
//   CUtlMemory<CAnimIKRuleStallFrame, int>
//   CUtlMemory<CModelSkeleton::BoneFlags_t, int>
//   CUtlMemory<CAnimationDecodeOp, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CInstancedResponseSystem*, int, bool (*)(char const* const&, char const*
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAnimDebugMgr::DebugSeqInfo_t, int, bool (*)(char const* const&, char co
//   CUtlMemory<HitBoxSetAndMesh_t, int>
//   CUtlMemory<TransitioningLaterMetaInfo_t, int>
//   CUtlMemory<CAnimIKTargetInfo, int>
//   CUtlMemory<CAnimIKLink, int>
//   CUtlMemory<CUtlVector<ikcontextikrule_t, CUtlMemory<ikcontextikrule_t, int> >, int>
//   CUtlMemory<ikcontextikrule_t, int>
//   CUtlMemory<ClientAnimating_t, int>
//   CUtlMemory<CBaseAnimating*, int>
//   CUtlMemory<CFoW_Viewer*, int>
//   CUtlMemory<VertexColor_t, int>
//   CUtlMemory<const CAttachment*, int>
//   CUtlMemory<CCompressedResourceManifest::CompressedResourceName_t, int>
//   CUtlMemory<entitytable_t, int>
//   CUtlMemory<CUtlVector<CGameSaveRestoreInfo::CHashElement, CUtlMemory<CGameSaveRestoreInfo::CHashElement, int> >, int>
//   CUtlMemory<globalentity_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, RestoreLookupTable_t*, int, bool (*)(char const* const&, char const* con
//   CUtlMemory<SPAWNGROUP_HEADER, int>
//   CUtlMemory<CCreateGameServerLoadInfo, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, CSaveDirectory::file_t>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<filelistelem_t, int>
//   CUtlMemory<CGameSaveRestoreInfo::CHashElement, int>
//   CUtlMemory<short unsigned int, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<const ISchemaBinding*, CCopyableUtlVector<CEventDispatcher_Base::EventListenerInfo_t>
//   CUtlMemory<CTransform, int>
//   CUtlMemory<CRnPlaneResult, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>
//   CUtlMemory<AnimationEventOccurrence_t, int>
//   CUtlMemory<VectorAligned, int>
//   CUtlMemory<RnIteration_t, int>
//   CUtlMemory<IInterpolatedVar*, int>
//   CUtlMemory<IWrappedInterpolatedVarAdapter*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CGameEntitySystem::SpawnGroupEntityFilterInfo_t, int, bool (*)(char cons
//   CUtlMemory<IEntityListener*, int>
//   CUtlMemory<CUtlSymbol, int>
//   CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Nod
//   CUtlMemory<CCopyableUtlVector<CUtlSymbolLarge>, int>
//   CUtlMemory<CGridStringPrinter::ColumnHeader_t, int>
//   CUtlMemory<CUtlVector<CEntityDataInstantiator<touchlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<touchlink_t>::
//   CUtlMemory<CUtlVector<CEntityDataInstantiator<groundlink_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<groundlink_t>
//   CUtlMemory<CUtlVector<CEntityDataInstantiator<StepSimulationData>::HashEntry, CUtlMemory<CEntityDataInstantiator<StepSim
//   CUtlMemory<CUtlVector<CEntityDataInstantiator<ModelScale>::HashEntry, CUtlMemory<CEntityDataInstantiator<ModelScale>::Ha
//   CUtlMemory<CUtlVector<CEntityDataInstantiator<CWatcherList>::HashEntry, CUtlMemory<CEntityDataInstantiator<CWatcherList>
//   CUtlMemory<CUtlVector<CEntityDataInstantiator<physicspushlist_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<physicsp
//   CUtlMemory<CUtlVector<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, CUtlMemory<CEntityDataInstantiator<vphysic
//   CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupCompletionDelegateInfo_t, int>
//   CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupEntitySpawnCompletionDelegateInfo_t, int>
//   CUtlMemory<CSpawnGroupCompletionCallbackGameSystem::SpawnGroupFinishListener_t, int>
//   CUtlMemory<EntitySpawnInfo_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, Entity2Networkable_t>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CEntityClass*, int>
//   CUtlMemory<ServerClass*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, bool, int, bool (*)(char const* const&, char const* const&)>::Node_t, in
//   CUtlMemory<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, short unsigned int>
//   CUtlMemory<CGameEventCallback*, int>
//   CUtlMemory<CGameEventDescriptor, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, GameEventRegister_t*, int, bool (*)(char const* const&, char const* cons
//   CUtlMemory<IPhysicsShape*, int>
//   CUtlMemory<PhysicsTrace_t, int>
//   CUtlMemory<CSweepResult, int>
//   CUtlMemory<CLinearSweepResult, int>
//   CUtlMemory<StringTableDef_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::N
//   CUtlMemory<ISaveRestoreBlockHandler*, int>
//   CUtlMemory<SaveRestoreBlockHeader_t, int>
//   CUtlMemory<UtlLinkedListElem_t<JiggleData, short unsigned int>, short unsigned int>
//   CUtlMemory<HitBoxAndMesh_t, int>
//   CUtlMemory<ComponentUnserializerClassInfo_t*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ServerClass*, int, bool (*)(char const* const&, char const* const&)>::No
//   CUtlMemory<CEntityDataInstantiator<touchlink_t>::HashEntry, int>
//   CUtlMemory<CEntityDataInstantiator<groundlink_t>::HashEntry, int>
//   CUtlMemory<CEntityDataInstantiator<StepSimulationData>::HashEntry, int>
//   CUtlMemory<CEntityDataInstantiator<ModelScale>::HashEntry, int>
//   CUtlMemory<CEntityDataInstantiator<CWatcherList>::HashEntry, int>
//   CUtlMemory<CEntityDataInstantiator<physicspushlist_t>::HashEntry, int>
//   CUtlMemory<CEntityDataInstantiator<vphysicsupdateai_t>::HashEntry, int>
//   CUtlMemory<FileWeaponInfo_t*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, FileWeaponInfo_t*, int, bool (*)(char const* const&, char const* const&)
//   CUtlMemory<const EntityIOOutputDesc_t*, int>
//   CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int>
//   CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int>
//   CUtlMemory<CHintMessageTimers::hintmessagetime_t*, int>
//   CUtlMemory<CHintSystem::onresethints_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ConceptHistory_t, int, bool (*)(char const* const&, char const* const&)>
//   CUtlMemory<CAI_Expresser*, int>
//   CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CCombatCharVisCache::VisCacheEntry_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlLinkedListElem_t<CBaseCombatWeapon*, short unsigned int>, short unsigned int>
//   CUtlMemory<TeleportListEntry_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlString, short unsigned int>, short unsigned int>
//   CUtlMemory<CNavOpenListElement, int>
//   CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>
//   CUtlMemory<CHandle<CVGuiScreen>, int>
//   CUtlMemory<CBasePlayer*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, float, int, bool (*)(char const* const&, char const* const&)>::Node_t, i
//   CUtlMemory<modifiedconvars_t, int>
//   CUtlMemory<PreSpawnListInfo_t, int>
//   CUtlMemory<visibility_target_t, int>
//   CUtlMemory<CDecalEmitterSystem::DecalListEntry, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char 
//   CUtlMemory<CEffectScriptElement, int>
//   CUtlMemory<CHandle<CEnvPlayerSurfaceTrigger>, int>
//   CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindAveEvent_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlLinkedListElem_t<CEnvWindShared::WindVariationEvent_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlLinkedListElem_t<CEnvWindShared*, short unsigned int>, short unsigned int>
//   CUtlMemory<CBaseIssue*, int>
//   CUtlMemory<CVoteController::CallerRecord, int>
//   CUtlMemory<CHandle<CEnvMicrophone>, int>
//   CUtlMemory<LegacyNavData_t::HidingSpotData_t, int>
//   CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t, int>
//   CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int>
//   CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int>
//   CUtlMemory<INextBot*, int>
//   CUtlMemory<EconAttachedParticleSystemInfo_t, int>
//   CUtlMemory<bool, int>
//   CUtlMemory<short int, int>
//   CUtlMemory<CUtlVector<BoneHashPairing_t, CUtlMemory<BoneHashPairing_t, int> >, int>
//   CUtlMemory<Quaternion, int>
//   CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>
//   CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>
//   CUtlMemory<long long unsigned int, int>
//   CUtlMemory<CAnimationGroupResource*, int>
//   CUtlMemory<const CFlexController*, int>
//   CUtlMemory<Vector2D, int>
//   CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int>
//   CUtlMemory<CEventRegister*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, sho
//   CUtlMemory<CEconStyleInfo*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CEconSchemaSymbol>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>, short unsigned int>
//   CUtlMemory<CShatterGlassShard*, int>
//   CUtlMemory<IndexRange_t, int>
//   CUtlMemory<BuilderModelBoneFlexDriverControl_t, int>
//   CUtlMemory<BuilderModelBoneFlexDriver_t, int>
//   CUtlMemory<BuilderModelExtPart_t, int>
//   CUtlMemory<CStrongHandle<InfoForResourceTypeAnimationGroupResourceData_t>, int>
//   CUtlMemory<CBuilderMaterialGroup, int>
//   CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>
//   CUtlMemory<ShatterSpoke_t, int>
//   CUtlMemory<ShatterEdgeSegment_t, int>
//   CUtlMemory<SCombatLogReference, int>
//   CUtlMemory<sFightInfo, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CUserMessageInstrumentation, int, bool (*)(char const* const&, char cons
//   CUtlMemory<const CEntityModelModifier*, int>
//   CUtlMemory<const CParticleCreateModifier*, int>
//   CUtlMemory<const CParticleModifier*, int>
//   CUtlMemory<EconItemInfo_t, int>
//   CUtlMemory<EconControlPointInfo_t, int>
//   CUtlMemory<UtlRBTreeNode_t<TeamSharePVS_t, short unsigned int>, short unsigned int>
//   CUtlMemory<BoneHashPairing_t, int>
//   CUtlMemory<const CHeroModelChangeModifier*, int>
//   CUtlMemory<const CAdditionalWearableModifier*, int>
//   CUtlMemory<const CParticleSnapshotModifier*, int>
//   CUtlMemory<CHintMessageTimers::hintmessagetime_t*, int>
//   CUtlMemory<CHintSystem::onresethints_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CEntityIndex, float>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CEntityTemporaryMover::MovedEntity_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, BasicGameStatsRecord_t, short unsigned int, bool (*)(char const* const&,
//   CUtlMemory<CGameWeaponManager*, int>
//   CUtlMemory<CMarkupVolumeTagged*, int>
//   CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>,
//   CUtlMemory<UtlLinkedListElem_t<CUtlKeyValuePair<char const*, CMarkupManager::MarkupGroup_t*>, short unsigned int>, short
//   CUtlMemory<MarkupSearchQuery_t, int>
//   CUtlMemory<CHandle<CMessageEntity>, int>
//   CUtlMemory<CMoveHelperServer::touchlist_t, int>
//   CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int>
//   CUtlMemory<CBasePlayer::TonemapCountedActivations_t, int>
//   CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int>
//   CUtlMemory<UtlLinkedListElem_t<CPlayerSimInfo, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlLinkedListElem_t<CPlayerCmdInfo, short unsigned int>, short unsigned int>
//   CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int>
//   CUtlMemory<CParticleSystemQuery*, int>
//   CUtlMemory<constraint_anchor_t, int>
//   CUtlMemory<vehiclescript_t, int>
//   CUtlMemory<CPhysicsPushedEntities::PhysicsPusherInfo_t, int>
//   CUtlMemory<CPhysicsPushedEntities::PhysicsPushedInfo_t, int>
//   CUtlMemory<CUtlMultiList<watcher_t, short unsigned int>::ListElem_t, int>
//   CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int>, short unsigned
//   CUtlMemory<CPhysSaveRestoreBlockHandler::QueuedItem_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CBaseEntity*, CPhysSaveRestoreBlockHandler::CEntityRestoreSet*>::Node_t, short unsign
//   CUtlMemory<CPointEntity*, int>
//   CUtlMemory<CFogVolume*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CLagCompensationManager::EntityLagData*>::Node_t, short unsigne
//   CUtlMemory<UtlRBTreeNode_t<CHandle<CBaseEntity>, short unsigned int>, short unsigned int>
//   CUtlMemory<const IPropVRTrackedObjectPhysicsOverride*, int>
//   CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, int>
//   CUtlMemory<CBaseCombatCharacter*, int>
//   CUtlMemory<const CBaseEntity*, int>
//   CUtlMemory<CBaseVRHandAttachment*, int>
//   CUtlMemory<CHandle<CSceneListManager>, int>
//   CUtlMemory<CHandle<CSceneEntity>, int>
//   CUtlMemory<CSceneManager::CRestoreSceneSound, int>
//   CUtlMemory<CHandle<CBaseFlex>, int>
//   CUtlMemory<UtlRBTreeNode_t<CSceneEntity::SpeakEventSound_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const flexsettinghdr_t*, int, bool (*)(char const* const&, char const* c
//   CUtlMemory<CSheetSimulator::Spring_t, int>
//   CUtlMemory<UtlRBTreeNode_t<AsyncCaption_t::BlockInfo_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CaptionLookup_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, float>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<AsyncCaption_t, int>
//   CUtlMemory<CSoundPatch*, int>
//   CUtlMemory<SoundCommand_t*, int>
//   CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSoundscapeSystem::SoundscapeInfo_t*>::Node_t, short unsigned int>, sho
//   CUtlMemory<CEnvSoundscape*, int>
//   CUtlMemory<clusterSoundscapeList_t, int>
//   CUtlMemory<bbox_t, int>
//   CUtlMemory<CTeam*, int>
//   CUtlMemory<CStressEntityReg*, int>
//   CUtlMemory<CHandle<CTriggerMultiple>, int>
//   CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int>
//   CUtlMemory<convartracker_modifiedconvars_t, int>
//   CUtlMemory<CGlobalConvarTrackerAndReverter*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbol, AsyncCaption_t*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, AsyncCaption_t>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CDOTA_ParticleElement*, int>
//   CUtlMemory<CDOTA_ParticleManager::PortraitParticleMapEntry_t, int>
//   CUtlMemory<CDOTA_BaseNPC*, int>
//   CUtlMemory<CDOTABaseAbility*, int>
//   CUtlMemory<CEconItemView*, int>
//   CUtlMemory<ICustomNetTableListener*, int>
//   CUtlMemory<DelayedAction_t, int>
//   CUtlMemory<GestureSlot_t, int>
//   CUtlMemory<sPathingInfo, int>
//   CUtlMemory<CDOTA_Bot::SortedUnit_t, int>
//   CUtlMemory<CDOTA_Bot::sQueuedAction, int>
//   CUtlMemory<CDOTA_BotAction*, int>
//   CUtlMemory<CDOTA_Bot::sQueuedOrder, int>
//   CUtlMemory<ESocketType, int>
//   CUtlMemory<CEconTool_StyleUnlock::StyleUnlock_t, int>
//   CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::Node_t, int>
//   CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int>
//   CUtlMemory<GCSDK::CJobMgr::JobSleeping_t, int>
//   CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, int>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, int>::Node_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::Node_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, int>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, int>::Node_t, int>
//   CUtlMemory<CUtlPair<long long unsigned int, char const*>, int>
//   CUtlMemory<challenge_variable_t, int>
//   CUtlMemory<challenge_var_set_t::var_value_t, int>
//   CUtlMemory<challenge_var_set_t, int>
//   CUtlMemory<challenge_quest_t::challenge_t::instance_t, int>
//   CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t, int>
//   CUtlMemory<challenge_quest_t::challenge_t::complete_action_t, int>
//   CUtlMemory<challenge_quest_t::challenge_t*, int>
//   CUtlMemory<CDOTA_Buff*, int>
//   CUtlMemory<WearableSpawnInfo_t, int>
//   CUtlMemory<CDOTA_BinaryObject*, int>
//   CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsign
//   CUtlMemory<const CActivityModifier*, int>
//   CUtlMemory<const CArcanaLevelModifier*, int>
//   CUtlMemory<const CParticleCombined*, int>
//   CUtlMemory<const CResponseCriteriaModifier*, int>
//   CUtlMemory<sSpiritInfo*, int>
//   CUtlMemory<ICLSearchFields*, int>
//   CUtlMemory<CUtlMap<int, event_storage_t, short unsigned int, bool (*)(int const&, int const&)>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, event_storage_t>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<comparison_test_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<AccumulatedEvent_t, int>
//   CUtlMemory<CombatLogQuery*, int>
//   CUtlMemory<challenge_template_t, int>
//   CUtlMemory<CMsgServerToGCRerollPlayerChallenge, int>
//   CUtlMemory<challenge_instance_t, int>
//   CUtlMemory<challenge_quest_t*, int>
//   CUtlMemory<const CDOTASubChallengeInfo*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ELanguage, int, bool (*)(char const* const&, char const* const&)>::Node_
//   CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>
//   CUtlMemory<SCombatLogGraphStats, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float, int, CDefLess<int> >::Node_t, int>, int>
//   CUtlMemory<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, int>
//   CUtlMemory<ICLSearchFields::DynamicValueLookup_t, int>
//   CUtlMemory<CKillCamAbilityDamage*, int>
//   CUtlMemory<CKillCamAttackerEntry*, int>
//   CUtlMemory<sCombatLogUsageCount, int>
//   CUtlMemory<PredictionIdRange_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTACompendiumDefinition*>::Node_t, int>
//   CUtlMemory<CreatureStateData_t, int>
//   CUtlMemory<CreatureAbilityData_t, int>
//   CUtlMemory<ItemDropData_t, int>
//   CUtlMemory<CPlayerGroup, int>
//   CUtlMemory<const CSkinChangeModifier*, int>
//   CUtlMemory<const CEntityScaleModifier*, int>
//   CUtlMemory<const CEntityHealthBarModifier*, int>
//   CUtlMemory<const CSoundModifier*, int>
//   CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int>
//   CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase*, int>
//   CUtlMemory<GCSDK::CSharedObject*, int>
//   CUtlMemory<CUnitOrders, int>
//   CUtlMemory<CDOTA_BaseNPC*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char 
//   CUtlMemory<CDOTAGameManager::LocalizedToScriptNameItem_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int>, short 
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int>
//   CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int>
//   CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int>
//   CUtlMemory<CUtlHashMapLarge<int, KeyValues*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<int, KeyValues*>::Node_t, int>
//   CUtlMemory<CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t>::Node_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>, int>
//   CUtlMemory<CDOTAGamerules::ARDMReconnectInfo_t, int>
//   CUtlMemory<CHeroesPerPlayer, int>
//   CUtlMemory<CDOTAGameStateInfo, int>
//   CUtlMemory<CDOTAHeroPickStateInfo, int>
//   CUtlMemory<CDOTA_ItemStockInfo, int>
//   CUtlMemory<CDOTA_AbilityDraftAbilityState, int>
//   CUtlMemory<ProjectionAbility_t, int>
//   CUtlMemory<HeroPickRecord_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<KillCountAdjustmentKey_t, KillCountAdjustmentValue_t>::Node_t, short unsigned int>, s
//   CUtlMemory<HeroDeathRecord_t, int>
//   CUtlMemory<VictoryPredictionRecord_t, int>
//   CUtlMemory<MapCategoryPosition_t, int>
//   CUtlMemory<CHandle<CDOTA_BaseNPC_Tower>, int>
//   CUtlMemory<CHandle<CDOTA_BaseNPC_Building>, int>
//   CUtlMemory<CDOTA_ReconnectInfo, int>
//   CUtlMemory<GameChatLogEntry_t, int>
//   CUtlMemory<CSteamID, int>
//   CUtlMemory<CHeroStatueLiked, int>
//   CUtlMemory<CHandle<CIngameEvent_Base>, int>
//   CUtlMemory<AABB_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DotaDictEntry_t*, short unsigned int>::Node_t, short unsigned int>, 
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CDotaDict*, short unsigned int>::Node_t, short unsigned int>, short 
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<itemid_t, CEconItem*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CUtlVector<DOTAEventMysteryVOLine_t, CUtlMemory<DOTAEventMysteryVOLine_t, int> >, int>
//   CUtlMemory<SDOTAEventRewardDefinition, int>
//   CUtlMemory<SDOTAEventScoreRewardsDefinition, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, const CMsgDOTASeasonRewards_Reward*, int, CDefLess<unsigned int> >::Nod
//   CUtlMemory<const CMsgDOTASeasonRewards_Reward*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<item_definition_index_t, bool, int, CDefLess<item_definition_index_t> >::Node_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, SDOTAEventGoalDefinition, int, CDefLess<short unsigned int> >::No
//   CUtlMemory<SDOTAEventMysteryCategory, int>
//   CUtlMemory<DOTAEventMysteryVOGroup_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_t, int
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const SDOTAEventActionDefinition*, int, CDefStringLess>::Node_t, int>, i
//   CUtlMemory<const SDOTAEventActionDefinition*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, const SDOTAEventActionDefinition*, int, CDefLess<unsigned int> >::Node_
//   CUtlMemory<DOTAEventMysteryVOLine_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, EEvent>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CGridNavSectorPortalConnection, int>
//   CUtlMemory<CGridNavSectorPortal, int>
//   CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int>
//   CUtlMemory<TempViewerInfo_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>
//   CUtlMemory<CDOTAHeatmapManager::Building_t, int>
//   CUtlMemory<CDOTAGamerules::State_Enter_HERO_SELECTION()::PlayerMMRData, int>
//   CUtlMemory<CUtlHashMapLarge<int, CUtlVector<CSteamID>*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<int, CUtlVector<CSteamID>*>::Node_t, int>
//   CUtlMemory<CInfoPlayerStartDota*, int>
//   CUtlMemory<CHeightCellGrid::HeightCell_t, int>
//   CUtlMemory<IntersectionRecord_t, int>
//   CUtlMemory<CGridNavOpenList::GridNavHeapEntry_t, int>
//   CUtlMemory<CDOTA_Tree*, int>
//   CUtlMemory<VertexColorPos_t, int>
//   CUtlMemory<CDOTA_Buff*, int>
//   CUtlMemory<CDOTAHeatmapManager::Building_t, int>
//   CUtlMemory<CDOTAInGamePredictionGameSystem::PredictionInfo_t, int>
//   CUtlMemory<InGamePredictionData_t, int>
//   CUtlMemory<const CMsgDOTASeasonPredictions_InGamePrediction*, int>
//   CUtlMemory<CDOTAInGamePredictionGameSystem::ActivePredictionDesc_t, int>
//   CUtlMemory<QAngle, int>
//   CUtlMemory<IModifierFactory*, int>
//   CUtlMemory<CDOTA_BuffParticle, int>
//   CUtlMemory<CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t>, int>
//   CUtlMemory<CDOTA_ModifierManager::BuffModifier_t, int>
//   CUtlMemory<CDOTA_ModifierManager*, int>
//   CUtlMemory<CDOTA_BaseNPC_Hero*, int>
//   CUtlMemory<DOTABuffStringIndexCache_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CBuffCountTracker, int, bool (*)(char const* const&, char const* const&)
//   CUtlMemory<const CDOTA_Buff*, int>
//   CUtlMemory<CVProfOGSMode::CVProfSample, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, unsigned int, int, bool (*)(char const* const&, char const* const&)>::No
//   CUtlMemory<CCompendiumDataFileTemplateHandler::templatekeytoremove_t, int>
//   CUtlMemory<challenge_quest_t::challenge_t::instance_t, int>
//   CUtlMemory<challenge_quest_t::challenge_t::prerequisite_t, int>
//   CUtlMemory<challenge_quest_t::challenge_t::complete_action_t, int>
//   CUtlMemory<challenge_quest_t::challenge_t*, int>
//   CUtlMemory<CPlayerCardBonusAttributePacked::PlayerCardBonus_t, int>
//   CUtlMemory<CDOTA_ParticleElement*, int>
//   CUtlMemory<CDOTA_ParticleManager::PortraitParticleMapEntry_t, int>
//   CUtlMemory<UtlLinkedListElem_t<CUnitOrders, short unsigned int>, short unsigned int>
//   CUtlMemory<CDOTA_TrackingProjectileInfo, int>
//   CUtlMemory<CDOTA_LinearProjectileInfo*, int>
//   CUtlMemory<const CParticleControlPointModifier*, int>
//   CUtlMemory<CShortPathProbe*, int>
//   CUtlMemory<CDOTAWearableItem*, int>
//   CUtlMemory<CDOTA_BaseNPC_Pet*, int>
//   CUtlMemory<CDOTA_TrackingProjectileInfo*, int>
//   CUtlMemory<target_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CSeriesScores*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<const CStrangeControlPointModifier*, int>
//   CUtlMemory<CDOTA_Response, int>
//   CUtlMemory<MatchEvent, int>
//   CUtlMemory<sPlayerSnapshot, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CTimeline*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CSteamID, CDotaStatManager::CPlayerStatState*>::Node_t, short unsigned int>, short un
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDotaStatManager::CBotPlayerStatState*>::Node_t, short unsigned int>, short unsi
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CTimeline*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<ReactiveTipDescription_t, int>
//   CUtlMemory<NPCSpeechData_t, int>
//   CUtlMemory<QuestLogEntry_t, int>
//   CUtlMemory<CDOTA_AutoBluePrint, int>
//   CUtlMemory<CDOTA_Item*, int>
//   CUtlMemory<CHandle<CDOTA_Item>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTA_World_Map_Location*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<sHealthTime, int>
//   CUtlMemory<CDOTA_Bot*, int>
//   CUtlMemory<sItemPickupInfo, int>
//   CUtlMemory<sBotHumanRequest, int>
//   CUtlMemory<sIncomingStun, int>
//   CUtlMemory<CDOTA_Commander::sBotDebugEntity, int>
//   CUtlMemory<sIllusionState, int>
//   CUtlMemory<sCreepHealthInfo, int>
//   CUtlMemory<AbilityDamageAndManaCost_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int>, int>
//   CUtlMemory<sGridLocation, int>
//   CUtlMemory<sDamageEvent, int>
//   CUtlMemory<CHandle<CDOTA_BaseNPC>, int>
//   CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int>
//   CUtlMemory<CUnitOrders, int>
//   CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int>
//   CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo, int>
//   CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, int>
//   CUtlMemory<sLoadoutItem, int>
//   CUtlMemory<sAcquireHistory, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsign
//   CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int>
//   CUtlMemory<CDOTAMusicSystemElement, int>
//   CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, i
//   CUtlMemory<const CBuffModifier*, int>
//   CUtlMemory<CDOTAPlayer*, int>
//   CUtlMemory<CActivityToSequenceMapping::HashValueType, int>
//   CUtlMemory<const CPetModifier*, int>
//   CUtlMemory<const CHexModelModifier*, int>
//   CUtlMemory<const CAbilityNameModifier*, int>
//   CUtlMemory<CMsgDOTARealtimeGameStats*, int>
//   CUtlMemory<PlayerDisconnectInfo, int>
//   CUtlMemory<(anonymous namespace)::HeroEvents, int>
//   CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, int>
//   CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources, int>
//   CUtlMemory<const CCourierModifier*, int>
//   CUtlMemory<const CCourierFlyingModifier*, int>
//   CUtlMemory<CDOTA_Modifier_Warlock_FatalBonds*, int>
//   CUtlMemory<sBounceInfo, int>
//   CUtlMemory<NianDamageTaken_t, int>
//   CUtlMemory<sGlaiveInfo, int>
//   CUtlMemory<CDOTA_Modifier_Spectre_SpectralDaggerPath::sShadowPathLocation, int>
//   CUtlMemory<RemnantData_t, int>
//   CUtlMemory<AttachedParticlesOnItem_t, int>
//   CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources, int>
//   CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, int>
//   CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent, int>
//   CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*, int>
//   CUtlMemory<sSpiritDef, int>
//   CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t, int>
//   CUtlMemory<const CCustomKillEffectModifier*, int>
//   CUtlMemory<CDOTA_TeleportTimer, int>
//   CUtlMemory<UtlRBTreeNode_t<void*, int>, int>
//   CUtlMemory<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, sho
//   CUtlMemory<const CEconLootListDefinition*, int>
//   CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t, int>
//   CUtlMemory<const CDOTAItemDefinition*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CEconSchemaSymbol>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* c
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* c
//   CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::Node_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t>::Node_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t>*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t>*>::Node_t, int>
//   CUtlMemory<CEconItem::attribute_t, int>
//   CUtlMemory<CEconItem::EquippedInstance_t, int>
//   CUtlMemory<itemid_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CHeroLoadout>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CFreeHeroLoadout>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int>
//   CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int>
//   CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int>
//   CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t, int>
//   CUtlMemory<econ_item_description_line_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CHeroBaseItems>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, CDOTAHeroSlots>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<rolled_item_defs_t, int>
//   CUtlMemory<DOTAEconItemInfo_t, int>
//   CUtlMemory<ContainedItemInfo_t, int>
//   CUtlMemory<const CEconItemAttributeDefinition*, int>
//   CUtlMemory<AssetModifierUIInfo_t, int>
//   CUtlMemory<const CSpeechModifier*, int>
//   CUtlMemory<UtlRBTreeNode_t<char const*, short unsigned int>, short unsigned int>
//   CUtlMemory<CEconItemSetDefinition::itemset_attrib_t, int>
//   CUtlMemory<lootlist_attrib_t*, int>
//   CUtlMemory<CEconLootListDefinition::loot_list_additional_drop_t, int>
//   CUtlMemory<random_attrib_t*, int>
//   CUtlMemory<CEconStyleInfo*, int>
//   CUtlMemory<static_attrib_t, int>
//   CUtlMemory<CEconSchemaSymbol, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<short unsigned int, const CEconItemDefinition*>::Node_t, short unsigned int>, short u
//   CUtlMemory<CItemLevelingDefinition, int>
//   CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t, int>
//   CUtlMemory<CEconItemAttribute, int>
//   CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CountChance_t, int>
//   CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::StringEncodedAttribute_t, int>
//   CUtlMemory<CEconTool_ItemDynamicRecipe::CBaseRecipeComponent*, int>
//   CUtlMemory<BonusLootInfo_t, int>
//   CUtlMemory<BundleSetupInfo_t, int>
//   CUtlMemory<EconItemStyleInfo_t, int>
//   CUtlMemory<AssetModifierEntry_t, int>
//   CUtlMemory<IEconItemTool*, int>
//   CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t, int>
//   CUtlMemory<CFogVolume*, int>
//   CUtlMemory<NavAttributeEnum, int>
//   CUtlMemory<CNavGeneratorBase::WalkableSeedSpot, int>
//   CUtlMemory<NavGenDataMarkup_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CNavGameSystem::CNavInfoForSpawnGroup*>::Node_t, short unsigned int>, s
//   CUtlMemory<CNavOpenListElement, int>
//   CUtlMemory<HexIndex_t, int>
//   CUtlMemory<CPathCostRecorder::AreaTransition_t, int>
//   CUtlMemory<const CNavArea*, int>
//   CUtlMemory<Extent, int>
//   CUtlMemory<CNavObstacleMgr::CNavObstacleSplitForest::SplitNodeRoot_t, int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int>
//   CUtlMemory<FloorInfo, int>
//   CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int>
//   CUtlMemory<CZombieBorder*, int>
//   CUtlMemory<CNavVtxEdgeLink, int>
//   CUtlMemory<CNavNode*, int>
//   CUtlMemory<CNavObstacle*, int>
//   CUtlMemory<CNavObstacleEdge*, int>
//   CUtlMemory<CNavEdge, int>
//   CUtlMemory<NavDirType, int>
//   CUtlMemory<CNavCrossMeshConnection, int>
//   CUtlMemory<CNavSplice::ExpansionConnection, int>
//   CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int>
//   CUtlMemory<NextBotManager::DebugFilter, int>
//   CUtlMemory<CNextbotLodManager::SourceInfo_t, int>
//   CUtlMemory<CNextbotLodManager::NextBotDistSqPair, int>
//   CUtlMemory<const INextBot::NextBotDebugLineType*, int>
//   CUtlMemory<INextBot::NextBotDebugLineType*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&
//   CUtlMemory<ConCommand::CallbackInfo_t, int>
//   CUtlMemory<void (*)(IConVar*, char const*, float), int>
//   CUtlMemory<KVJSONParserStackEntry_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTable::CStringPoolIndex, short unsigned int>, short unsigned int>
//   CUtlMemory<CUtlSymbolTable::StringPool_t*, int>
//   CUtlMemory<CCountedStringPool::hash_item_t, int>
//   CUtlMemory<HSequence, int>
//   CUtlMemory<CAppSystemDict::ModuleInfo_t, int>
//   CUtlMemory<CAppSystemDict::AppSystem_t, int>
//   CUtlMemory<void* (*)(char const*, int*), int>
//   CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>
//   CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>
//   CUtlMemory<CChoreoChannel*, int>
//   CUtlMemory<CChoreoEvent*, int>
//   CUtlMemory<UtlRBTreeNode_t<CChoreoEvent*, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, EventGroup, int, bool (*)(char const* const&, char const* const&)>::Node
//   CUtlMemory<UtlRBTreeNode_t<const CChoreoEvent*, short unsigned int>, short unsigned int>
//   CUtlMemory<CEventRelativeTag, int>
//   CUtlMemory<CFlexTimingTag, int>
//   CUtlMemory<CEventAbsoluteTag, int>
//   CUtlMemory<CFlexAnimationTrack*, int>
//   CUtlMemory<CBezierHandlesForSample, int>
//   CUtlMemory<CChoreoActor*, int>
//   CUtlMemory<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, int>
//   CUtlMemory<const EntComponentInfo_t*, int>
//   CUtlMemory<UnserializeComponentInfo_t, int>
//   CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int>
//   CUtlMemory<EntityIOConnectionDescFat_t, int>
//   CUtlMemory<FGDFieldInfo_t, int>
//   CUtlMemory<const CSchemaClassInfo*, int>
//   CUtlMemory<char const**, int>
//   CUtlMemory<int*, int>
//   CUtlMemory<ComponentKeyField_t*, int>
//   CUtlMemory<CTSQueue<CNetworkFieldChangedEventQueueChangeInfo_t, false>, int>
//   CUtlMemory<CNetworkFieldReallocRecord, int>
//   CUtlMemory<CNetworkFieldDeallocRecord, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityClass*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityComponentHelper*>::Node_t, short unsigned int>, short unsigned in
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, CUtlVector<CEntityHandle>*>::Node_t, short unsigned int>, short unsi
//   CUtlMemory<CEntitySystem::CreationInfo_t, int>
//   CUtlMemory<PostDataUpdateInfo_t, int>
//   CUtlMemory<EntityDeletion_t, int>
//   CUtlMemory<QueuedSetInPVSInfo_t, int>
//   CUtlMemory<CUtlDelegate<void(bool)>, int>
//   CUtlMemory<CUtlSymbolTableLargeBase<CThreadsafeTree<true>, true>::StringPool_t*, int>
//   CUtlMemory<CMemoryStack*, int>
//   CUtlMemory<CUtlAbstractDelegate, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlStringToken, CUtlString, int>::Node_t, int>, int>
//   CUtlMemory<EntityActivation_t, int>
//   CUtlMemory<SetInPVSInfo_t, int>
//   CUtlMemory<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t, int>
//   CUtlMemory<BuildFlattenedSerializerInfo_t, int>
//   CUtlMemory<ScriptEntityIOOutputDesc_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, char const*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, Rule*, short unsigned int, bool (*)(unsigned int const&, unsigned int c
//   CUtlMemory<CResponseFileParser::ScriptEntry, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)()>::Node_t, short unsigned int>, short un
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(Rule&)>::Node_t, short unsigned int>, sho
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(ParserResponse&, ResponseGroup&, Response
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, void (CResponseFileParser::*)(char const*, ResponseGroup&, ResponsePara
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, Criteria, short int, bool (*)(char const* const&, char const* const&)>::
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CResponseSystem::Enumeration, short int, bool (*)(char const* const&, ch
//   CUtlMemory<CResponseSystem::PendingCriterionRule, int>
//   CUtlMemory<UtlLinkedListElem_t<CRR_Concept, short unsigned int>, unsigned int>
//   CUtlMemory<CRR_Response, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int>, 
//   CUtlMemory<rr2::CRule, int>
//   CUtlMemory<CFieldPathHuffmanEncoder::INode*, int>
//   CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>
//   CUtlMemory<CKeyValues3Cluster*, int>
//   CUtlMemory<KeyValues3*, int>
//   CUtlMemory<CUtlTokenReference, int>
//   CUtlMemory<TokenWarning_t, int>
//   CUtlMemory<CLoadKV3FromDynData::LoadedObject_t, int>
//   CUtlMemory<CLoadKV3FromDynData::UnresolvedElementReference_t, int>
//   CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int>
//   CUtlMemory<matrix3x4_t, int>
//   CUtlMemory<CAnimEncodedFrames, int>
//   CUtlMemory<CAnimDesc, int>
//   CUtlMemory<CAnimDecoder, int>
//   CUtlMemory<CAnimFrameSegment, int>
//   CUtlMemory<CSeqAutoLayer, int>
//   CUtlMemory<CSeqIKLock, int>
//   CUtlMemory<CSeqCmdLayer, int>
//   CUtlMemory<CSeqPoseSetting, int>
//   CUtlMemory<CUtlStringExternalizable, int>
//   CUtlMemory<CSeqS1SeqDesc, int>
//   CUtlMemory<CSeqSynthAnimDesc, int>
//   CUtlMemory<CSeqCmdSeqDesc, int>
//   CUtlMemory<CSeqBoneMaskList, int>
//   CUtlMemory<CSeqPoseParamDesc, int>
//   CUtlMemory<CBoneFlexDriverControl, int>
//   CUtlMemory<CModelExtPart, int>
//   CUtlMemory<CModelMaterialGroup, int>
//   CUtlMemory<CBoneFlexDriver, int>
//   CUtlMemory<CModel::BodyPart_t, int>
//   CUtlMemory<CUtlVector<DefaultMaterialGroupIndex_t, CUtlMemory<DefaultMaterialGroupIndex_t, int> >, int>
//   CUtlMemory<AttachmentPairing_t, int>
//   CUtlMemory<CAnimBone, int>
//   CUtlMemory<CAnimUser, int>
//   CUtlMemory<CAnimIKChain, int>
//   CUtlMemory<CAnimDataChannelDesc, int>
//   CUtlMemory<CAnimRetargetElementData, int>
//   CUtlMemory<CAnimRetargetChainData, int>
//   CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>
//   CUtlMemory<RequestElementWeights_t, int>
//   CUtlMemory<ChannelElementWeights_t, int>
//   CUtlMemory<const CAnimationGroupResource*, int>
//   CUtlMemory<CAnimDecodeSwizzle, int>
//   CUtlMemory<ResourceId_t, int>
//   CUtlMemory<CAnimRetarget, int>
//   CUtlMemory<AnimInstanceMap_t, int>
//   CUtlMemory<CSeqGroupInstance, int>
//   CUtlMemory<ISequence*, int>
//   CUtlMemory<PoseParamDesc_t, int>
//   CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entr
//   CUtlMemory<SeqInstanceMap_t, int>
//   CUtlMemory<CAnimDataChannel, int>
//   CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_
//   CUtlMemory<ChannelElementMap_t, int>
//   CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, 
//   CUtlMemory<UserDataElementMap_t, int>
//   CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::En
//   CUtlMemory<ChannelWeightlist_t, int>
//   CUtlMemory<ElementRequestPattern_t, int>
//   CUtlMemory<AnimBounds_t, int>
//   CUtlMemory<CDisjointSetForest::Node_t, int>
//   CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, i
//   CUtlMemory<CWeakHandle<InfoForResourceTypeIMaterial2>, int>
//   CUtlMemory<CActivityToSequenceMapping::HashValueType, int>
//   CUtlMemory<DefaultMaterialGroupIndex_t, int>
//   CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>
//   CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>
//   CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>
//   CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>
//   CUtlMemory<CFlexOp, int>
//   CUtlMemory<CMorphBundleData, int>
//   CUtlMemory<CMorphRectData, int>
//   CUtlMemory<MorphBundleType_t, int>
//   CUtlMemory<CMorphData, int>
//   CUtlMemory<CFlexDesc, int>
//   CUtlMemory<CFlexController, int>
//   CUtlMemory<CFlexRule, int>
//   CUtlMemory<CConstraintSlave, int>
//   CUtlMemory<CConstraintTarget, int>
//   CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<RetargetKey_t, int>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CConstraintSlave, int>
//   CUtlMemory<CConstraintTarget, int>
//   CUtlMemory<RenderSkeletonBone_t, int>
//   CUtlMemory<CMaterialDrawDescriptor, int>
//   CUtlMemory<CHitBox, int>
//   CUtlMemory<CHitBoxSet, int>
//   CUtlMemory<CSceneObjectData, int>
//   CUtlMemory<CBaseConstraint*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)>::Nod
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)>::Node
//   CUtlMemory<TraceDataForDraw_t, int>
//   CUtlMemory<RenderInputLayoutField_t, int>
//   CUtlMemory<RuntimeBuffersInfo_t::BufferInfo_t, int>
//   CUtlMemory<TraceVertex_t, int>
//   CUtlMemory<CMorphConstraint::BoneParentPair_t, int>
//   CUtlMemory<CActivityModifierWeight, int>
//   CUtlMemory<EventList_t, int>
//   CUtlMemory<FlexControllerMapping_t, int>
//   CUtlMemory<FlexDescMapping_t, int>
//   CUtlMemory<const CFlexRule*, int>
//   CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*,
//   CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int>
//   CUtlMemory<CJointIndexData, int>
//   CUtlMemory<CPhysSurfaceProperties*, int>
//   CUtlMemory<RnHull_t*, int>
//   CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int>
//   CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int>
//   CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int>
//   CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int>
//   CUtlMemory<const CPhysAggregateData*, int>
//   CUtlMemory<CFeModelCombiner::Model_t, int>
//   CUtlMemory<CSmartPtr<CPhysAggregateData, CRefCountAccessor>, int>
//   CUtlMemory<SplitAggregateData(const CPhysAggregateData*, uint, CUtlVector<CSmartPtr<CPhysAggregateData> >*)::PartDesc_t,
//   CUtlMemory<RnCollisionAttr_t, int>
//   CUtlMemory<CExpressionCalculator::Token_t, int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>
//   CUtlMemory<CFeModelCombiner::CollectFitMatrices()::PerModel_t, int>
//   CUtlMemory<CMeshDisjointSetPartition::Part_t, int>
//   CUtlMemory<float const*, int>
//   CUtlMemory<CHullHalfEdge*, int>
//   CUtlMemory<CHullTri*, int>
//   CUtlMemory<VPlane, int>
//   CUtlMemory<CHeightCellGrid::HeightCell_t, int>
//   CUtlMemory<VsInputSignatureElement_t, int>
//   CUtlMemory<IndexRange_t, int>
//   CUtlMemory<CVertexKDNode, int>
//   CUtlMemory<GLViewLine_t, int>
//   CUtlMemory<GLViewPoly_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node
//   CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>
//   CUtlMemory<const CSchemaType*, int>
//   CUtlMemory<CMesh, int>
//   CUtlMemory<VertAndBone_t, int>
//   CUtlMemory<GLViewLine_t, int>
//   CUtlMemory<GLViewPoly_t, int>
//   CUtlMemory<CGeoViewVertex, int>
//   CUtlMemory<VecDouble3, int>
//   CUtlMemory<CNavGenPolyConn, int>
//   CUtlMemory<LegacyNavData_t::HidingSpotData_t, int>
//   CUtlMemory<LegacyNavData_t::EncounterSpotData_t::SpotOrder_t, int>
//   CUtlMemory<LegacyNavData_t::EncounterSpotData_t, int>
//   CUtlMemory<CNavLadder*, int>
//   CUtlMemory<OneWayLink_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CNavArea*, int, bool (*)(char const* const&, char const* const&)>::Node_
//   CUtlMemory<NavGenProperty_t, int>
//   CUtlMemory<NavGenLadder_t, int>
//   CUtlMemory<NavGenMarkup_t, int>
//   CUtlMemory<CUtlVector<CNavArea*, CUtlMemory<CNavArea*, int> >, int>
//   CUtlMemory<CNavGenPoly, int>
//   CUtlMemory<CUtlVector<CNavNode*, CUtlMemory<CNavNode*, int> >, int>
//   CUtlMemory<CNavAttributeLookup, int>
//   CUtlMemory<NavCellCoord_t, int>
//   CUtlMemory<NavGenProperty_t, int>
//   CUtlMemory<NavGenLadder_t, int>
//   CUtlMemory<NavGenMarkup_t, int>
//   CUtlMemory<VecDouble3, int>
//   CUtlMemory<NavGenAreaDebug_t, int>
//   CUtlMemory<NavGenRecastDebugStage_t::Vertex_t, int>
//   CUtlMemory<NavGenRecastDebugStage_t, int>
//   CUtlMemory<NavGenDebugStage_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClientSharedObjectCache*>::Node_t, short unsigned int>, shor
//   CUtlMemory<GCSDK::CGCClient::ServiceCacheVersion_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::SOVersion_t*>::Node_t, short unsigned int>, short un
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, long long unsigned int>::Node_t, short unsigned int>, short unsigned in
//   CUtlMemory<CMsgSOCacheSubscribed*, int>
//   CUtlMemory<GCSDK::CGCClient::PartialSOCache_t::Msg_t, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<GCSDK::SOID_t, GCSDK::CGCClient::PartialSOCache_t*>::Node_t, short unsigned int>, sho
//   CUtlMemory<GCSDK::ISharedObjectListener*, int>
//   CUtlMemory<UtlRBTreeNode_t<GCSDK::SOID_t, short unsigned int>, short unsigned int>
//   CUtlMemory<GCSDK::SOID_t, int>
//   CUtlMemory<GCSDK::CGCClientSharedObjectCache*, int>
//   CUtlMemory<GCSDK::CLock*, int>
//   CUtlMemory<GCSDK::IMsgNetPacket*, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*>::Node_t, int>
//   CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobYielding_t, int>, int>
//   CUtlMemory<GCSDK::CJobMgr::JobSleeping_t, int>
//   CUtlMemory<UtlLinkedListElem_t<GCSDK::CJobMgr::JobTimeout_t, int>, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, int>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long unsigned int, int>::Node_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<long long int, GCSDK::JobStatsBucket_t>::Node_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, int>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, int>::Node_t, int>
//   CUtlMemory<CUtlPair<long long unsigned int, char const*>, int>
//   CUtlMemory<GCSDK::WaitAnalysisNode_t*, int>
//   CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int>
//   CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*>::HashBucket_t, int>
//   CUtlMemory<CUtlHashMapLarge<unsigned int, const GCSDK::JobType_t*>::Node_t, int>
//   CUtlMemory<CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::Hash
//   CUtlMemory<CUtlHashMapLarge<char const*, const GCSDK::JobType_t*, CaseSensitiveStrEquals, MurmurHash3ConstCharPtr>::Node
//   CUtlMemory<short int*, int>
//   CUtlMemory<GCSDK::MsgInfo_t, int>
//   CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>
//   CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*, int>
//   CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int>
//   CUtlMemory<GCSDK::CProtoBufMsgMemoryPoolBase*, int>
//   CUtlMemory<google::protobuf::Message*, int>
//   CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t, int>
//   CUtlMemory<GCSDK::CSharedObject*, int>
//   CUtlMemory<GCSDK::CSharedObjectTypeCache*, int>
//   CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t, int>
//   CUtlMemory<CThreadSafeMultiMemoryPool::MemPoolRecord_t*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<void*, CThreadSafeMultiMemoryPool::RawAllocation_t, int>::Node_t, int>, int>
//   CUtlMemory<GCSDK::CWorkItem*, int>
//   CUtlMemory<GCSDK::CWorkThread*, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, GCSDK::CSOIDNameInfo>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<GCSDK::CGCReportPrinter::Column_t, int>
//   CUtlMemory<CCopyableUtlVector<GCSDK::CGCReportPrinter::Variant_t>*, int>
//   CUtlMemory<GCSDK::CGCReportPrinter::Variant_t, int>
//   CUtlMemory<GCSDK::CGCReportPrinter::PrintReport(GCSDK::CGCEmitGroup&, uint32, bool)::Summary_t, int>
//   CUtlMemory<CThreadSafeMemoryPool::BlockSet_t, int>
//   CUtlMemory<CFoW_Viewer*, int>
//   CUtlMemory<CFoW_1DZ::TILEINFO, int>
//   CUtlMemory<CFoW_1DZ::ROWINFO, int>
//   CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, CFoW_1DZ::CIRCLEINFO*>::Node_t, short unsigned int>, short unsigned int>
//   CUtlMemory<CFoW_1DZ::TILEINFO, int>
//   CUtlMemory<CFoW_1DZ::ROWINFO, int>
//   CUtlMemory<double, int>
//   CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int>
//   CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int>
//   CUtlMemory<CClassVisitInfo::FieldInfo_t, int>
//   CUtlMemory<const KeyValues3*, int>
//   CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int>
//   CUtlMemory<CClassVisitInfo::FieldInfo_t, int>

// CUtlMemoryFixedGrowable_Base: 82 more instantiations (full list in INDEX.tsv)
//   CUtlMemoryFixedGrowable_Base<ISceneView::WorldList_t, int>
//   CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<const CSceneSystemStencilState*>, int>
//   CUtlMemoryFixedGrowable_Base<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, int>
//   CUtlMemoryFixedGrowable_Base<ChildSceneObjectReference_t, int>
//   CUtlMemoryFixedGrowable_Base<CMeshDrawPrimitive_t, int>
//   CUtlMemoryFixedGrowable_Base<int, int>
//   CUtlMemoryFixedGrowable_Base<COverlapHit, int>
//   CUtlMemoryFixedGrowable_Base<CGameTrace, int>
//   CUtlMemoryFixedGrowable_Base<CRnPlaneResult, int>
//   CUtlMemoryFixedGrowable_Base<const OffsetIgnore_t*, int>
//   CUtlMemoryFixedGrowable_Base<CNetworkFieldReallocRecord, int>
//   CUtlMemoryFixedGrowable_Base<CNetworkFieldDeallocRecord, int>
//   CUtlMemoryFixedGrowable_Base<CSkeletonInstance*, int>
//   CUtlMemoryFixedGrowable_Base<CBodyGameSystem::HierarchySetupWork_t, int>
//   CUtlMemoryFixedGrowable_Base<CGameSceneNode*, int>
//   CUtlMemoryFixedGrowable_Base<EntityNotification_t, int>
//   CUtlMemoryFixedGrowable_Base<CEntityIdentity*, int>
//   CUtlMemoryFixedGrowable_Base<CEntityInstance*, int>
//   CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>
//   CUtlMemoryFixedGrowable_Base<HitBoxSetAndMesh_t, int>
//   CUtlMemoryFixedGrowable_Base<CBaseAnimating*, int>
//   CUtlMemoryFixedGrowable_Base<CEntityIndex, int>
//   CUtlMemoryFixedGrowable_Base<IPhysicsShape*, int>
//   CUtlMemoryFixedGrowable_Base<PhysicsTrace_t, int>
//   CUtlMemoryFixedGrowable_Base<CSweepResult, int>
//   CUtlMemoryFixedGrowable_Base<CLinearSweepResult, int>
//   CUtlMemoryFixedGrowable_Base<HitBoxAndMesh_t, int>
//   CUtlMemoryFixedGrowable_Base<IPhysicsBody*, int>
//   CUtlMemoryFixedGrowable_Base<CBaseEntity*, int>
//   CUtlMemoryFixedGrowable_Base<CPointEntity*, int>
//   CUtlMemoryFixedGrowable_Base<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, short unsigned int>
//   CUtlMemoryFixedGrowable_Base<CHandle<CBaseEntity>, int>
//   CUtlMemoryFixedGrowable_Base<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, int>
//   CUtlMemoryFixedGrowable_Base<GCSDK::CSharedObject*, int>
//   CUtlMemoryFixedGrowable_Base<CDOTAGamerules::State_Enter_HERO_SELECTION()::PlayerMMRData, int>
//   CUtlMemoryFixedGrowable_Base<IntersectionRecord_t, int>
//   CUtlMemoryFixedGrowable_Base<CGridNavOpenList::GridNavHeapEntry_t, int>
//   CUtlMemoryFixedGrowable_Base<CDOTA_Buff*, int>
//   CUtlMemoryFixedGrowable_Base<long long unsigned int, int>
//   CUtlMemoryFixedGrowable_Base<Vector2D, int>
//   CUtlMemoryFixedGrowable_Base<sHealthTime, int>
//   CUtlMemoryFixedGrowable_Base<char*, int>
//   CUtlMemoryFixedGrowable_Base<Vector, int>
//   CUtlMemoryFixedGrowable_Base<char const*, int>
//   CUtlMemoryFixedGrowable_Base<float, int>
//   CUtlMemoryFixedGrowable_Base<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, int>
//   CUtlMemoryFixedGrowable_Base<HexIndex_t, int>
//   CUtlMemoryFixedGrowable_Base<unsigned int, int>
//   CUtlMemoryFixedGrowable_Base<CNavObstacle*, int>
//   CUtlMemoryFixedGrowable_Base<CNavObstacleEdge*, int>
//   CUtlMemoryFixedGrowable_Base<CNavArea*, int>
//   CUtlMemoryFixedGrowable_Base<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, int>
//   CUtlMemoryFixedGrowable_Base<UnserializeComponentInfo_t, int>
//   CUtlMemoryFixedGrowable_Base<CUtlSymbolLarge, int>
//   CUtlMemoryFixedGrowable_Base<CEntityHandle, int>
//   CUtlMemoryFixedGrowable_Base<EntityActivation_t, int>
//   CUtlMemoryFixedGrowable_Base<EntitySpawnInfo_t, int>
//   CUtlMemoryFixedGrowable_Base<EntityDeletion_t, int>
//   CUtlMemoryFixedGrowable_Base<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t, int>
//   CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>
//   CUtlMemoryFixedGrowable_Base<CKeyValues3Cluster*, int>
//   CUtlMemoryFixedGrowable_Base<CUtlStringToken, int>
//   CUtlMemoryFixedGrowable_Base<KeyValues3*, int>
//   CUtlMemoryFixedGrowable_Base<unsigned char, int>
//   CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>
//   CUtlMemoryFixedGrowable_Base<matrix3x4_t, int>
//   CUtlMemoryFixedGrowable_Base<RenderInputLayoutField_t, int>
//   CUtlMemoryFixedGrowable_Base<RuntimeBuffersInfo_t::BufferInfo_t, int>
//   CUtlMemoryFixedGrowable_Base<CFeModelCombiner::Model_t, int>
//   CUtlMemoryFixedGrowable_Base<short unsigned int, int>
//   CUtlMemoryFixedGrowable_Base<RnCollisionAttr_t, int>
//   CUtlMemoryFixedGrowable_Base<CExpressionCalculator::Token_t, int>
//   CUtlMemoryFixedGrowable_Base<CFeModelCombiner::CollectFitMatrices()::PerModel_t, int>
//   CUtlMemoryFixedGrowable_Base<CHullHalfEdge*, int>
//   CUtlMemoryFixedGrowable_Base<CHullTri*, int>
//   CUtlMemoryFixedGrowable_Base<float const*, int>
//   CUtlMemoryFixedGrowable_Base<CNavGenPolyConn, int>
//   CUtlMemoryFixedGrowable_Base<OneWayLink_t, int>
//   CUtlMemoryFixedGrowable_Base<NavCellCoord_t, int>
//   CUtlMemoryFixedGrowable_Base<GCSDK::CGCClientSharedObjectCache*, int>
//   CUtlMemoryFixedGrowable_Base<GCSDK::CLock*, int>
//   CUtlMemoryFixedGrowable_Base<GCSDK::IMsgNetPacket*, int>

// CUtlMemoryFixedGrowable: 107 more instantiations (full list in INDEX.tsv)
//   CUtlMemoryFixedGrowable<ISceneView::WorldList_t, 16ul, int>
//   CUtlMemoryFixedGrowable<CSceneObjectStateOverideEntry<const CSceneSystemStencilState*>, 1ul, int>
//   CUtlMemoryFixedGrowable<CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> >, 1ul, int>
//   CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1ul, int>
//   CUtlMemoryFixedGrowable<CMeshDrawPrimitive_t, 16ul, int>
//   CUtlMemoryFixedGrowable<int, 4ul, int>
//   CUtlMemoryFixedGrowable<COverlapHit, 64ul, int>
//   CUtlMemoryFixedGrowable<CGameTrace, 64ul, int>
//   CUtlMemoryFixedGrowable<CRnPlaneResult, 32ul, int>
//   CUtlMemoryFixedGrowable<const OffsetIgnore_t*, 4ul, int>
//   CUtlMemoryFixedGrowable<int, 32ul, int>
//   CUtlMemoryFixedGrowable<CNetworkFieldReallocRecord, 4ul, int>
//   CUtlMemoryFixedGrowable<CNetworkFieldDeallocRecord, 4ul, int>
//   CUtlMemoryFixedGrowable<CSkeletonInstance*, 64ul, int>
//   CUtlMemoryFixedGrowable<CBodyGameSystem::HierarchySetupWork_t, 256ul, int>
//   CUtlMemoryFixedGrowable<CGameSceneNode*, 16ul, int>
//   CUtlMemoryFixedGrowable<CGameSceneNode*, 512ul, int>
//   CUtlMemoryFixedGrowable<EntityNotification_t, 256ul, int>
//   CUtlMemoryFixedGrowable<CEntityIdentity*, 1024ul, int>
//   CUtlMemoryFixedGrowable<CEntityInstance*, 128ul, int>
//   CUtlMemoryFixedGrowable<matrix3x4a_t, 2ul, int>
//   CUtlMemoryFixedGrowable<HitBoxSetAndMesh_t, 16ul, int>
//   CUtlMemoryFixedGrowable<CBaseAnimating*, 512ul, int>
//   CUtlMemoryFixedGrowable<CEntityIndex, 65ul, int>
//   CUtlMemoryFixedGrowable<IPhysicsShape*, 128ul, int>
//   CUtlMemoryFixedGrowable<PhysicsTrace_t, 128ul, int>
//   CUtlMemoryFixedGrowable<CSweepResult, 128ul, int>
//   CUtlMemoryFixedGrowable<CLinearSweepResult, 128ul, int>
//   CUtlMemoryFixedGrowable<int, 128ul, int>
//   CUtlMemoryFixedGrowable<CGameSceneNode*, 32ul, int>
//   CUtlMemoryFixedGrowable<HitBoxAndMesh_t, 32ul, int>
//   CUtlMemoryFixedGrowable<matrix3x4a_t, 32ul, int>
//   CUtlMemoryFixedGrowable<IPhysicsBody*, 16ul, int>
//   CUtlMemoryFixedGrowable<CBaseEntity*, 32ul, int>
//   CUtlMemoryFixedGrowable<CPointEntity*, 8ul, int>
//   CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CBaseEntity*, short unsigned int>, 128ul, short unsigned int>
//   CUtlMemoryFixedGrowable<int, 15ul, int>
//   CUtlMemoryFixedGrowable<CHandle<CBaseEntity>, 4ul, int>
//   CUtlMemoryFixedGrowable<CDOTA_RealtimeCombatAnalyzer::EventToEntry_t, 128ul, int>
//   CUtlMemoryFixedGrowable<GCSDK::CSharedObject*, 1ul, int>
//   CUtlMemoryFixedGrowable<CDOTAGamerules::State_Enter_HERO_SELECTION()::PlayerMMRData, 24ul, int>
//   CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int>
//   CUtlMemoryFixedGrowable<CGridNavOpenList::GridNavHeapEntry_t, 2048ul, int>
//   CUtlMemoryFixedGrowable<CDOTA_Buff*, 16ul, int>
//   CUtlMemoryFixedGrowable<long long unsigned int, 32ul, int>
//   CUtlMemoryFixedGrowable<Vector2D, 256ul, int>
//   CUtlMemoryFixedGrowable<Vector2D, 16ul, int>
//   CUtlMemoryFixedGrowable<CHandle<CBaseEntity>, 50ul, int>
//   CUtlMemoryFixedGrowable<sHealthTime, 64ul, int>
//   CUtlMemoryFixedGrowable<char*, 8ul, int>
//   CUtlMemoryFixedGrowable<Vector, 32ul, int>
//   CUtlMemoryFixedGrowable<CHandle<CBaseEntity>, 16ul, int>
//   CUtlMemoryFixedGrowable<char const*, 8ul, int>
//   CUtlMemoryFixedGrowable<int, 8ul, int>
//   CUtlMemoryFixedGrowable<float, 8ul, int>
//   CUtlMemoryFixedGrowable<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, 24ul, int>
//   CUtlMemoryFixedGrowable<CBaseEntity*, 128ul, int>
//   CUtlMemoryFixedGrowable<HexIndex_t, 1024ul, int>
//   CUtlMemoryFixedGrowable<unsigned int, 32ul, int>
//   CUtlMemoryFixedGrowable<Vector, 24ul, int>
//   CUtlMemoryFixedGrowable<CNavObstacle*, 16ul, int>
//   CUtlMemoryFixedGrowable<CNavObstacleEdge*, 64ul, int>
//   CUtlMemoryFixedGrowable<CNavArea*, 32ul, int>
//   CUtlMemoryFixedGrowable<CNavArea*, 16ul, int>
//   CUtlMemoryFixedGrowable<float, 512ul, int>
//   CUtlMemoryFixedGrowable<Vector, 16ul, int>
//   CUtlMemoryFixedGrowable<int, 45ul, int>
//   CUtlMemoryFixedGrowable<int, 16ul, int>
//   CUtlMemoryFixedGrowable<UtlRBTreeNode_t<CChoreoScene::ActiveList, int>, 256ul, int>
//   CUtlMemoryFixedGrowable<UnserializeComponentInfo_t, 64ul, int>
//   CUtlMemoryFixedGrowable<CUtlSymbolLarge, 128ul, int>
//   CUtlMemoryFixedGrowable<const CSchemaClassInfo*, 128ul, int>
//   CUtlMemoryFixedGrowable<CEntityHandle, 64ul, int>
//   CUtlMemoryFixedGrowable<EntityActivation_t, 50ul, int>
//   CUtlMemoryFixedGrowable<CEntityHandle, 50ul, int>
//   CUtlMemoryFixedGrowable<EntitySpawnInfo_t, 50ul, int>
//   CUtlMemoryFixedGrowable<EntityDeletion_t, 256ul, int>
//   CUtlMemoryFixedGrowable<SpewEntityListSummary(const CConcreteEntityList*)::ClassCount_t, 32ul, int>
//   CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4ul, int>
//   CUtlMemoryFixedGrowable<CKeyValues3Cluster*, 8ul, int>
//   CUtlMemoryFixedGrowable<CUtlStringToken, 8ul, int>
//   CUtlMemoryFixedGrowable<KeyValues3*, 8ul, int>
//   CUtlMemoryFixedGrowable<unsigned char, 8ul, int>
//   CUtlMemoryFixedGrowable<CUtlTokenReference, 8ul, int>
//   CUtlMemoryFixedGrowable<unsigned char, 1024ul, int>
//   CUtlMemoryFixedGrowable<CUtlStringToken, 256ul, int>
//   CUtlMemoryFixedGrowable<char const*, 256ul, int>
//   CUtlMemoryFixedGrowable<matrix3x4_t, 128ul, int>
//   CUtlMemoryFixedGrowable<RenderInputLayoutField_t, 4ul, int>
//   CUtlMemoryFixedGrowable<RuntimeBuffersInfo_t::BufferInfo_t, 1ul, int>
//   CUtlMemoryFixedGrowable<CFeModelCombiner::Model_t, 8ul, int>
//   CUtlMemoryFixedGrowable<short unsigned int, 16ul, int>
//   CUtlMemoryFixedGrowable<RnCollisionAttr_t, 32ul, int>
//   CUtlMemoryFixedGrowable<CExpressionCalculator::Token_t, 32ul, int>
//   CUtlMemoryFixedGrowable<CFeModelCombiner::CollectFitMatrices()::PerModel_t, 8ul, int>
//   CUtlMemoryFixedGrowable<CHullHalfEdge*, 256ul, int>
//   CUtlMemoryFixedGrowable<CHullTri*, 256ul, int>
//   CUtlMemoryFixedGrowable<float const*, 256ul, int>
//   CUtlMemoryFixedGrowable<CHullTri*, 64ul, int>
//   CUtlMemoryFixedGrowable<float const*, 64ul, int>
//   CUtlMemoryFixedGrowable<CNavGenPolyConn, 8ul, int>
//   CUtlMemoryFixedGrowable<CNavArea*, 64ul, int>
//   CUtlMemoryFixedGrowable<OneWayLink_t, 512ul, int>
//   CUtlMemoryFixedGrowable<NavCellCoord_t, 1024ul, int>
//   CUtlMemoryFixedGrowable<GCSDK::CGCClientSharedObjectCache*, 1ul, int>
//   CUtlMemoryFixedGrowable<GCSDK::CLock*, 2ul, int>
//   CUtlMemoryFixedGrowable<GCSDK::IMsgNetPacket*, 1ul, int>

// CUtlMemoryFixed: 14 more instantiations (full list in INDEX.tsv)
//   CUtlMemoryFixed<CUtlStringToken, 4ul>
//   CUtlMemoryFixed<CWeakHandle<InfoForResourceTypeCTextureBase>, 4ul>
//   CUtlMemoryFixed<CDOTA_PlayerChallengeInfo, 24ul>
//   CUtlMemoryFixed<unsigned int, 8ul>
//   CUtlMemoryFixed<CIKTarget, 12ul>
//   CUtlMemoryFixed<CSpeechBubbleInfo, 4ul>
//   CUtlMemoryFixed<float, 31ul>
//   CUtlMemoryFixed<float, 5ul>
//   CUtlMemoryFixed<CDOTA_BaseNPC_Hero::COtherHeroTalk::info_t, 10ul>
//   CUtlMemoryFixed<CNavObstacleEdge, 4ul>
//   CUtlMemoryFixed<CResponseDict<Rule*, short unsigned int>*, 2ul>
//   CUtlMemoryFixed<int, 32ul>
//   CUtlMemoryFixed<CNavArea*, 3ul>
//   CUtlMemoryFixed<float const*, 64ul>

// CUtlMemoryConservative: 3 more instantiations (full list in INDEX.tsv)
//   CUtlMemoryConservative<rr2::CriterionStatic>
//   CUtlMemoryConservative<rr2::CriterionLambda>
//   CUtlMemoryConservative<ResponseGroup>
