// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/utlintrusivelist.h:849
class CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> {
private:

	CUtlIntrusiveListIterator(CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void operator++(CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	bool operator!=(const CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, const CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> &);
	OverflowChunk_t & operator*(const CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:849
class CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> {
private:

	const OverflowChunk_t * m_pNode;  // +0x0
	CUtlIntrusiveListIterator(CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, const OverflowChunk_t *);
	void operator++(CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	bool operator!=(const CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, const CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> &);
	const OverflowChunk_t & operator*(const CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:849
class CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> {
private:

	CUtlIntrusiveListIterator(CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void operator++(CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	bool operator!=(const CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, const CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> &);
	OverflowChunk_t & operator*(const CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:927
class CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> {
	bool IsEmpty(const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	bool IsNonEmpty(const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	OverflowChunk_t * Head(const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	CUtlIntrusiveList(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	void RemoveAll(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	void AddToHead(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void AddToHeadTS(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	OverflowChunk_t * RemoveHeadTS(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	void AddToTail(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void RemoveNode(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void DeleteNode(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void KillList(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	OverflowChunk_t * PrevNode(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	OverflowChunk_t * NthNode(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, int);
	void Purge(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	int Count(const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	void MoveTo(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> &);
	OverflowChunk_t * FindNamedNodeCaseSensitive(const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, const char *);
	OverflowChunk_t * RemoveHead(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	OverflowChunk_t * RandomNode(const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	OverflowChunk_t * Next(const OverflowChunk_t *);
	OverflowChunk_t * InvalidIndex();
	OverflowChunk_t & operator[](CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	const OverflowChunk_t & operator[](CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *, const OverflowChunk_t *);
	CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> begin(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> end(CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> begin(const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> end(const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 4>::OverflowChunk_t> *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:927
class CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> {
	bool IsEmpty(const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	bool IsNonEmpty(const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	OverflowChunk_t * Head(const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	CUtlIntrusiveList(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	void RemoveAll(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	void AddToHead(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void AddToHeadTS(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	OverflowChunk_t * RemoveHeadTS(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	void AddToTail(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void RemoveNode(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void DeleteNode(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	void KillList(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	OverflowChunk_t * PrevNode(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	OverflowChunk_t * NthNode(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, int);
	void Purge(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	int Count(const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	void MoveTo(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> &);
	OverflowChunk_t * FindNamedNodeCaseSensitive(const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, const char *);
	OverflowChunk_t * RemoveHead(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	OverflowChunk_t * RandomNode(const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	OverflowChunk_t * Next(const OverflowChunk_t *);
	OverflowChunk_t * InvalidIndex();
	OverflowChunk_t & operator[](CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, OverflowChunk_t *);
	const OverflowChunk_t & operator[](CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *, const OverflowChunk_t *);
	CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> begin(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> end(CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> begin(const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> end(const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 4>::OverflowChunk_t> *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:927
class CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> {
	bool IsEmpty(const CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	bool IsNonEmpty(const CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	OverflowChunk_t * Head(const CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	CUtlIntrusiveList(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	void RemoveAll(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	void AddToHead(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, OverflowChunk_t *);
	void AddToHeadTS(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, OverflowChunk_t *);
	OverflowChunk_t * RemoveHeadTS(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	void AddToTail(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, OverflowChunk_t *);
	void RemoveNode(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, OverflowChunk_t *);
	void DeleteNode(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, OverflowChunk_t *);
	void KillList(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	OverflowChunk_t * PrevNode(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, OverflowChunk_t *);
	OverflowChunk_t * NthNode(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, int);
	void Purge(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	int Count(const CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	void MoveTo(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> &);
	OverflowChunk_t * FindNamedNodeCaseSensitive(const CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, const char *);
	OverflowChunk_t * RemoveHead(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	OverflowChunk_t * RandomNode(const CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	OverflowChunk_t * Next(const OverflowChunk_t *);
	OverflowChunk_t * InvalidIndex();
	OverflowChunk_t & operator[](CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, OverflowChunk_t *);
	const OverflowChunk_t & operator[](CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *, const OverflowChunk_t *);
	CUtlIntrusiveListIterator<CUtlAttributeList<int, 8>::OverflowChunk_t> begin(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<CUtlAttributeList<int, 8>::OverflowChunk_t> end(CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<const CUtlAttributeList<int, 8>::OverflowChunk_t> begin(const CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);
	CUtlIntrusiveListIterator<const CUtlAttributeList<int, 8>::OverflowChunk_t> end(const CUtlIntrusiveList<CUtlAttributeList<int, 8>::OverflowChunk_t> *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:1180
class CUtlIntrusiveDList<CUtlReference<IParticleCollection> > : public CUtlIntrusiveList<CUtlReference<IParticleCollection> > {
public:

	CUtlIntrusiveDList(CUtlIntrusiveDList<CUtlReference<IParticleCollection> > *);
	void AddToHead(CUtlIntrusiveDList<CUtlReference<IParticleCollection> > *, CUtlReference<IParticleCollection> *);
	void AddToTail(CUtlIntrusiveDList<CUtlReference<IParticleCollection> > *, CUtlReference<IParticleCollection> *);
	void RemoveNode(CUtlIntrusiveDList<CUtlReference<IParticleCollection> > *, CUtlReference<IParticleCollection> *);
	CUtlReference<IParticleCollection> * RemoveHead(CUtlIntrusiveDList<CUtlReference<IParticleCollection> > *);
	CUtlReference<IParticleCollection> * PrevNode(CUtlIntrusiveDList<CUtlReference<IParticleCollection> > *, CUtlReference<IParticleCollection> *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:1180
class CUtlIntrusiveDList<CUtlReference<CDOTA_AttackRecord> > : public CUtlIntrusiveList<CUtlReference<CDOTA_AttackRecord> > {
public:

	CUtlIntrusiveDList(CUtlIntrusiveDList<CUtlReference<CDOTA_AttackRecord> > *);
	void AddToHead(CUtlIntrusiveDList<CUtlReference<CDOTA_AttackRecord> > *, CUtlReference<CDOTA_AttackRecord> *);
	void AddToTail(CUtlIntrusiveDList<CUtlReference<CDOTA_AttackRecord> > *, CUtlReference<CDOTA_AttackRecord> *);
	void RemoveNode(CUtlIntrusiveDList<CUtlReference<CDOTA_AttackRecord> > *, CUtlReference<CDOTA_AttackRecord> *);
	CUtlReference<CDOTA_AttackRecord> * RemoveHead(CUtlIntrusiveDList<CUtlReference<CDOTA_AttackRecord> > *);
	CUtlReference<CDOTA_AttackRecord> * PrevNode(CUtlIntrusiveDList<CUtlReference<CDOTA_AttackRecord> > *, CUtlReference<CDOTA_AttackRecord> *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:1180
class CUtlIntrusiveDList<CDecalInfo> : public CUtlIntrusiveList<CDecalInfo> {
public:

	CUtlIntrusiveDList();
	void AddToHead(CDecalInfo *);
	void AddToTail(CDecalInfo *);
	void RemoveNode(CDecalInfo *);
	CDecalInfo * RemoveHead();
	CDecalInfo * PrevNode(CDecalInfo *);

	// sizeof = 8
};

// src/public/tier1/utlintrusivelist.h:1226
class CUtlIntrusiveDListWithTailPtr<CDecalInfo, CThreadNullMutex> : public CUtlIntrusiveDList<CDecalInfo> {
public:

	void LockForWrite();
	void UnlockWrite();
	void LockForRead();
	void UnlockRead();
	CUtlIntrusiveDListWithTailPtr();
	CDecalInfo * Tail();
	void AddToHead(CDecalInfo *);
	void AddToTail(CDecalInfo *);
	void RemoveNode(CDecalInfo *);
	void Purge();
	void Kill();
	CDecalInfo * RemoveHead();
	CDecalInfo * PrevNode(CDecalInfo *);

	// sizeof = 24
};

// src/public/tier1/utlintrusivelist.h:1226
class CUtlIntrusiveDListWithTailPtr<QueryCacheEntry_t, CThreadNullMutex> : public CUtlIntrusiveDList<QueryCacheEntry_t> {
public:

	void LockForWrite();
	void UnlockWrite();
	void LockForRead();
	void UnlockRead();
	CUtlIntrusiveDListWithTailPtr();
	QueryCacheEntry_t * Tail();
	void AddToHead(QueryCacheEntry_t *);
	void AddToTail(QueryCacheEntry_t *);
	void RemoveNode(QueryCacheEntry_t *);
	void Purge();
	void Kill();
	QueryCacheEntry_t * RemoveHead();
	QueryCacheEntry_t * PrevNode(QueryCacheEntry_t *);

	// sizeof = 24
};

// CUtlIntrusiveListIterator: 23 more instantiations (full list in INDEX.tsv)
//   CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 4>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<int, 8>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<int, 8>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorag
//   CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrFor
//   CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 4>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 4>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<float>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<float>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<int>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<Color>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<Color>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<Vector>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<Vector>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<CUtlAttributeList<CUtlSymbolLarge>::OverflowChunk_t>
//   CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlSymbolLarge>::OverflowChunk_t>

// CUtlIntrusiveList: 20 more instantiations (full list in INDEX.tsv)
//   CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t>::Ov
//   CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>
//   CUtlIntrusiveList<CUtlAttributeList<void*, 4>::OverflowChunk_t>
//   CUtlIntrusiveList<CUtlAttributeList<CUtlString, 4>::OverflowChunk_t>
//   CUtlIntrusiveList<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::HashTable_t>
//   CUtlIntrusiveList<MorphCompositeDesc_t>
//   CUtlIntrusiveList<CMorphCompositeSet>
//   CUtlIntrusiveList<CUtlAttributeList<ISceneLayer::RenderTargetAttribute_t>::OverflowChunk_t>
//   CUtlIntrusiveList<CUtlReference<IParticleCollection> >
//   CUtlIntrusiveList<CUtlReference<CDOTA_AttackRecord> >
//   CUtlIntrusiveList<CDecalInfo>
//   CUtlIntrusiveList<CUtlAttributeList<float>::OverflowChunk_t>
//   CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>
//   CUtlIntrusiveList<CUtlAttributeList<Color>::OverflowChunk_t>
//   CUtlIntrusiveList<CUtlAttributeList<Vector>::OverflowChunk_t>
//   CUtlIntrusiveList<CUtlAttributeList<CUtlSymbolLarge>::OverflowChunk_t>
//   CUtlIntrusiveList<QueryCacheEntry_t>
//   CUtlIntrusiveList<CUtlReference<CDOTA_Buff> >
//   CUtlIntrusiveList<CUtlReference<CDOTA_Bot> >
//   CUtlIntrusiveList<CUtlReference<CDOTA_TeamCommander> >

// CUtlIntrusiveDList: 4 more instantiations (full list in INDEX.tsv)
//   CUtlIntrusiveDList<QueryCacheEntry_t>
//   CUtlIntrusiveDList<CUtlReference<CDOTA_Buff> >
//   CUtlIntrusiveDList<CUtlReference<CDOTA_Bot> >
//   CUtlIntrusiveDList<CUtlReference<CDOTA_TeamCommander> >
