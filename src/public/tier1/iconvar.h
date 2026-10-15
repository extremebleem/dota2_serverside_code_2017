// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/iconvar.h:109
class IConVar {
	int ()() * * _vptr.IConVar;  // +0x0
	IConVar(IConVar &);
	IConVar(const IConVar &);
	~IConVar();
	IConVar();
	virtual void SetValue(const char *);
	virtual void SetValue(float);
	virtual void SetValue(int);
	virtual void SetValue(Color);
	virtual const char * GetName();
	virtual const char * GetBaseName();
	virtual bool IsFlagSet(int64);
	virtual CSplitScreenSlot GetSplitScreenPlayerSlot();
	virtual void AddFlags(int64);

	// vtable[0] SetValue
	// vtable[1] SetValue
	// vtable[2] SetValue
	// vtable[3] SetValue
	// vtable[4] GetName
	// vtable[5] GetBaseName
	// vtable[6] IsFlagSet
	// vtable[7] GetSplitScreenPlayerSlot
	// vtable[8] AddFlags
	// sizeof = 8
};
