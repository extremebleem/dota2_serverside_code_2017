// Reconstructed from DWARF by pahole; not original source.

// src/game/public/schemasystem/propertyeditormetadata.h:133
struct PropertyClassAsStringFuncs_t {
	typedef void (*GetterFn_t)(IPropertyEditDomain *, const void *, CUtlString *);

	GetterFn_t m_pGetAsString;  // +0x0
	typedef void (*SetterFn_t)(IPropertyEditDomain *, void *, const char *);

	SetterFn_t m_pSetAsString;  // +0x8
	PropertyClassAsStringFuncs_t();
	PropertyClassAsStringFuncs_t(GetterFn_t, SetterFn_t);
	bool operator==(const PropertyClassAsStringFuncs_t &);

	// sizeof = 16
};
