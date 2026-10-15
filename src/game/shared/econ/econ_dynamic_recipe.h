// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_dynamic_recipe.h:24
class CRecipeComponentMatchingIterator : public CEconItemSpecificAttributeIterator {
public:

private:

	const IEconItemInterface * m_pSourceItem;  // +0x8
	const IEconItemInterface * m_pTargetItem;  // +0x10
	bool m_bIgnoreCompleted;  // +0x18

	int m_nInputsTotal;  // +0x50
	int m_nInputsFulfilled;  // +0x54
	int m_nOutputsTotal;  // +0x58
	CRecipeComponentMatchingIterator(CRecipeComponentMatchingIterator &);
	CRecipeComponentMatchingIterator(const CRecipeComponentMatchingIterator &);
	CRecipeComponentMatchingIterator(const IEconItemInterface *, const IEconItemInterface *);
	void SetSourceItem(const IEconItemInterface *);
	void SetTargetItem(const IEconItemInterface *);
	void SetIgnoreCompleted(bool);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	const CUtlVector<const CEconItemAttributeDefinition*, CUtlMemory<const CEconItemAttributeDefinition*, int> > & GetMatchingComponentInputs();
	const CUtlVector<const CEconItemAttributeDefinition*, CUtlMemory<const CEconItemAttributeDefinition*, int> > & GetMatchingComponentOutputs();
	int GetTotalInputs();
	int GetInputsFulfilled();
	int GetTotalOutputs();
	virtual ~CRecipeComponentMatchingIterator();

	// vtable[6] OnIterateAttributeValue
	// sizeof = 96
};
