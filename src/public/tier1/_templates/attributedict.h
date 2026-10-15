// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/attributedict.h:57
class CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> {
private:

	void SetOwningObject(CEntityIdentity *);
	void SetParent(CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken> *);
	int GetIntValue(CUtlStringToken, int, bool *);
	float GetFloatValue(CUtlStringToken, float, bool *);
	void SetIntValue(CUtlStringToken, int);
	void SetFloatValue(CUtlStringToken, float);
	void DeleteAttr(CUtlStringToken);
	bool HasAttribute(CUtlStringToken);
	CUtlObjectAttributeTable();
	void Purge();
	void ExtractDataAsVector(CUtlVector<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTSOpenH);
	void InsertExtractedData(uint32, uint32);
	void Delete(CUtlStringToken);
	void Optimize();

	// sizeof = 56
};
