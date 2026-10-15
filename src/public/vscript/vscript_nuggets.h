// Reconstructed from DWARF by pahole; not original source.

// src/public/vscript/vscript_nuggets.h:41
class CBaseNugget_Private {
	int ()() * * _vptr.CBaseNugget_Private;  // +0x0
	const CSchemaType * m_pNuggetType;  // +0x10
private:

	UtlHandle_t m_Handle;  // +0x18
	CBaseNugget_Private(const CBaseNugget_Private &);
	CBaseNugget_Private();
	virtual ~CBaseNugget_Private();
	virtual bool Validate();
	CBaseNugget_Private & operator=(const CBaseNugget_Private &);

	// vtable[2] Validate
	// sizeof = 32
};

// src/public/vscript/vscript_nuggets.h:70
class CBaseNugget : public CBaseNugget_Private {
public:

private:

	CBaseNugget & operator=(CBaseNugget &);
	CBaseNugget & operator=(const CBaseNugget &);
	CBaseNugget(CBaseNugget &);
	CBaseNugget(const CBaseNugget &);
	CBaseNugget();

	virtual ~CBaseNugget();

	// vtable[3] Schema_DynamicBinding
	// sizeof = 32
};

// src/public/vscript/vscript_nuggets.h:81
class CBaseNuggetRef {
protected:

	CNuggetTable * m_pTable;  // +0x0
	UtlHandle_t m_Handle;  // +0x8

	CBaseNuggetRef();
	const CBaseNuggetRef & operator=(const CBaseNuggetRef &);
	ScriptVariant_t operator ScriptVariant_t();
	bool operator==(const CBaseNuggetRef &);
	bool operator==(const ScriptVariant_t &);
	bool IsValid();
	CBaseNugget * Clear();
	CNuggetTable * InitTablePtr();
	CBaseNugget * Get(UtlHandle_t);
	CBaseNugget * Set(CBaseNugget *);

	// sizeof = 24
};
