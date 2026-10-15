// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_interface.h:229
class CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int> : public IEconItemAttributeIterator {
public:

private:

	const CEconItemAttributeDefinition * m_pAttrDef;  // +0x8
	long long unsigned int * m_outpValue;  // +0x10
	bool m_bFound;  // +0x18
	CAttributeIterator_GetTypedAttributeValue(CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int> &);
	CAttributeIterator_GetTypedAttributeValue(const CAttributeIterator_GetTypedAttributeValue<long long unsigned int, long long unsigned int> &);
	CAttributeIterator_GetTypedAttributeValue(const CEconItemAttributeDefinition *, long long unsigned int *);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, attrib_value_t);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, float);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, uint64);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_String &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);
	bool WasFound();
	bool OnIterateAttributeValueTyped(const CEconItemAttributeDefinition *, const long long unsigned int &);
	void CopyAttributeValueToOutput(const long long unsigned int *, long long unsigned int *);
	virtual ~CAttributeIterator_GetTypedAttributeValue();
	bool OnIterateAttributeValueTyped<unsigned int>(const CEconItemAttributeDefinition *, const unsigned int &);
	bool OnIterateAttributeValueTyped<float>(const CEconItemAttributeDefinition *, const float &);
	bool OnIterateAttributeValueTyped<CAttribute_String>(const CEconItemAttributeDefinition *, const CAttribute_String &);
	bool OnIterateAttributeValueTyped<CAttribute_ItemDynamicRecipeComponent>(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	bool OnIterateAttributeValueTyped<CAttribute_Socket>(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	bool OnIterateAttributeValueTyped<CAttribute_HeroStatue>(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);

	// vtable[2] OnIterateAttributeValue
	// vtable[3] OnIterateAttributeValue
	// vtable[4] OnIterateAttributeValue
	// vtable[5] OnIterateAttributeValue
	// vtable[6] OnIterateAttributeValue
	// vtable[7] OnIterateAttributeValue
	// vtable[8] OnIterateAttributeValue
	// sizeof = 32
};

// src/game/shared/econ/econ_item_interface.h:229
class CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int> : public IEconItemAttributeIterator {
public:

private:

	const CEconItemAttributeDefinition * m_pAttrDef;  // +0x8
	unsigned int * m_outpValue;  // +0x10
	bool m_bFound;  // +0x18
	CAttributeIterator_GetTypedAttributeValue(CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int> &);
	CAttributeIterator_GetTypedAttributeValue(const CAttributeIterator_GetTypedAttributeValue<unsigned int, unsigned int> &);
	CAttributeIterator_GetTypedAttributeValue(const CEconItemAttributeDefinition *, unsigned int *);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, attrib_value_t);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, float);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, uint64);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_String &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);
	bool WasFound();
	bool OnIterateAttributeValueTyped(const CEconItemAttributeDefinition *, const unsigned int &);
	void CopyAttributeValueToOutput(const unsigned int *, unsigned int *);
	virtual ~CAttributeIterator_GetTypedAttributeValue();
	bool OnIterateAttributeValueTyped<float>(const CEconItemAttributeDefinition *, const float &);
	bool OnIterateAttributeValueTyped<long long unsigned int>(const CEconItemAttributeDefinition *, const long long unsigned int &);
	bool OnIterateAttributeValueTyped<CAttribute_String>(const CEconItemAttributeDefinition *, const CAttribute_String &);
	bool OnIterateAttributeValueTyped<CAttribute_ItemDynamicRecipeComponent>(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	bool OnIterateAttributeValueTyped<CAttribute_Socket>(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	bool OnIterateAttributeValueTyped<CAttribute_HeroStatue>(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);

	// vtable[2] OnIterateAttributeValue
	// vtable[3] OnIterateAttributeValue
	// vtable[4] OnIterateAttributeValue
	// vtable[5] OnIterateAttributeValue
	// vtable[6] OnIterateAttributeValue
	// vtable[7] OnIterateAttributeValue
	// vtable[8] OnIterateAttributeValue
	// sizeof = 32
};

// src/game/shared/econ/econ_item_interface.h:229
class CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue> : public IEconItemAttributeIterator {
public:

private:

	const CEconItemAttributeDefinition * m_pAttrDef;  // +0x8
	bool m_bFound;  // +0x18
	CAttributeIterator_GetTypedAttributeValue(CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue> &);
	CAttributeIterator_GetTypedAttributeValue(const CAttributeIterator_GetTypedAttributeValue<CAttribute_HeroStatue, CAttribute_HeroStatue> &);
	CAttributeIterator_GetTypedAttributeValue(const CEconItemAttributeDefinition *, CAttribute_HeroStatue *);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, attrib_value_t);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, float);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, uint64);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_String &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);
	bool WasFound();
	bool OnIterateAttributeValueTyped(const CEconItemAttributeDefinition *, const CAttribute_HeroStatue &);
	void CopyAttributeValueToOutput(const CAttribute_HeroStatue *, CAttribute_HeroStatue *);
	virtual ~CAttributeIterator_GetTypedAttributeValue();
	bool OnIterateAttributeValueTyped<unsigned int>(const CEconItemAttributeDefinition *, const unsigned int &);
	bool OnIterateAttributeValueTyped<float>(const CEconItemAttributeDefinition *, const float &);
	bool OnIterateAttributeValueTyped<long long unsigned int>(const CEconItemAttributeDefinition *, const long long unsigned int &);
	bool OnIterateAttributeValueTyped<CAttribute_String>(const CEconItemAttributeDefinition *, const CAttribute_String &);
	bool OnIterateAttributeValueTyped<CAttribute_ItemDynamicRecipeComponent>(const CEconItemAttributeDefinition *, const CAttribute_ItemDynamicRecipeComponent &);
	bool OnIterateAttributeValueTyped<CAttribute_Socket>(const CEconItemAttributeDefinition *, const CAttribute_Socket &);

	// vtable[2] OnIterateAttributeValue
	// vtable[3] OnIterateAttributeValue
	// vtable[4] OnIterateAttributeValue
	// vtable[5] OnIterateAttributeValue
	// vtable[6] OnIterateAttributeValue
	// vtable[7] OnIterateAttributeValue
	// vtable[8] OnIterateAttributeValue
	// sizeof = 32
};

// CAttributeIterator_GetTypedAttributeValue: 6 more instantiations (full list in INDEX.tsv)
//   CAttributeIterator_GetTypedAttributeValue<unsigned int, float>
//   CAttributeIterator_GetTypedAttributeValue<CAttribute_String, CAttribute_String>
//   CAttributeIterator_GetTypedAttributeValue<CAttribute_Socket, CAttribute_Socket>
//   CAttributeIterator_GetTypedAttributeValue<CAttribute_String, char const*>
//   CAttributeIterator_GetTypedAttributeValue<CAttribute_ItemDynamicRecipeComponent, CAttribute_ItemDynamicRecipeComponent>
//   CAttributeIterator_GetTypedAttributeValue<float, float>
