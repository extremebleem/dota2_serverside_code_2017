// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_schema.h:2530
class CSchemaFieldHandle<CEconItemAttributeDefinition> {
private:

	const char * m_szName;  // +0x0
	const CEconItemAttributeDefinition * m_pRef;  // +0x8
	uint32 m_unSchemaGeneration;  // +0x10
	bool m_bDestructName;  // +0x14
	CSchemaFieldHandle();
	CSchemaFieldHandle(const char *);
	CSchemaFieldHandle(CEconItemAttributeDefinition *);
	CSchemaFieldHandle(const CSchemaFieldHandle<CEconItemAttributeDefinition> &);
	~CSchemaFieldHandle();
	const CEconItemAttributeDefinition * Get();
	void Set(const CEconItemAttributeDefinition *);
	const CEconItemAttributeDefinition * operator const CEconItemAttributeDefinition*();
	const CEconItemAttributeDefinition * operator const CEconItemAttributeDefinition*();
	bool operator!();
	bool operator==(CEconItemAttributeDefinition *);
	bool operator!=(CEconItemAttributeDefinition *);
	const CSchemaFieldHandle<CEconItemAttributeDefinition> & operator=(const CEconItemAttributeDefinition *);
	const CSchemaFieldHandle<CEconItemAttributeDefinition> & operator=(const CSchemaFieldHandle<CEconItemAttributeDefinition> &);
	const CEconItemAttributeDefinition * operator->();
	const char * GetName();
	bool IsRefNULL();
	const CEconItemAttributeDefinition * GetTypedRef();
	void Clear();

	// sizeof = 24
};

// src/game/shared/econ/econ_item_schema.h:2530
class CSchemaFieldHandle<CEconColorDefinition> {
private:

	const char * m_szName;  // +0x0
	const CEconColorDefinition * m_pRef;  // +0x8
	uint32 m_unSchemaGeneration;  // +0x10
	bool m_bDestructName;  // +0x14
	CSchemaFieldHandle();
	CSchemaFieldHandle(const char *);
	CSchemaFieldHandle(CEconColorDefinition *);
	CSchemaFieldHandle(const CSchemaFieldHandle<CEconColorDefinition> &);
	~CSchemaFieldHandle();
	const CEconColorDefinition * Get();
	void Set(const CEconColorDefinition *);
	const CEconColorDefinition * operator const CEconColorDefinition*();
	const CEconColorDefinition * operator const CEconColorDefinition*();
	bool operator!();
	bool operator==(CEconColorDefinition *);
	bool operator!=(CEconColorDefinition *);
	const CSchemaFieldHandle<CEconColorDefinition> & operator=(const CEconColorDefinition *);
	const CSchemaFieldHandle<CEconColorDefinition> & operator=(const CSchemaFieldHandle<CEconColorDefinition> &);
	const CEconColorDefinition * operator->();
	const char * GetName();
	bool IsRefNULL();
	const CEconColorDefinition * GetTypedRef();
	void Clear();

	// sizeof = 24
};

// src/game/shared/econ/econ_item_schema.h:2530
class CSchemaFieldHandle<IEconItemSetDefinition> {
private:

	const char * m_szName;  // +0x0
	const IEconItemSetDefinition * m_pRef;  // +0x8
	uint32 m_unSchemaGeneration;  // +0x10
	bool m_bDestructName;  // +0x14
	CSchemaFieldHandle();
	CSchemaFieldHandle(const char *);
	CSchemaFieldHandle(IEconItemSetDefinition *);
	CSchemaFieldHandle(const CSchemaFieldHandle<IEconItemSetDefinition> &);
	~CSchemaFieldHandle();
	const IEconItemSetDefinition * Get();
	void Set(const IEconItemSetDefinition *);
	const IEconItemSetDefinition * operator const IEconItemSetDefinition*();
	const IEconItemSetDefinition * operator const IEconItemSetDefinition*();
	bool operator!();
	bool operator==(IEconItemSetDefinition *);
	bool operator!=(IEconItemSetDefinition *);
	const CSchemaFieldHandle<IEconItemSetDefinition> & operator=(const IEconItemSetDefinition *);
	const CSchemaFieldHandle<IEconItemSetDefinition> & operator=(const CSchemaFieldHandle<IEconItemSetDefinition> &);
	const IEconItemSetDefinition * operator->();
	const char * GetName();
	bool IsRefNULL();
	const IEconItemSetDefinition * GetTypedRef();
	void Clear();

	// sizeof = 24
};
