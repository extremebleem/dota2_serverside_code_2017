// Reconstructed from DWARF by pahole; not original source.

// src/gcsdk/steamextra/gamecoordinator/igcsqlquery.h:38
class IGCSQLQuery {
	int ()() * * _vptr.IGCSQLQuery;  // +0x0
	IGCSQLQuery();

protected:

	virtual ~IGCSQLQuery();
	virtual uint32 GetStatementCount();
	virtual const char * PchName();
	virtual const char * PchCommand(uint32);
	virtual uint32 CnParams(uint32);
	virtual EGCSQLType EParamType(uint32, uint32);
	virtual uint8 * PubParam(uint32, uint32);
	virtual uint32 CubParam(uint32, uint32);
	virtual void SetResults(IGCSQLResultSetList *);

	// vtable[2] GetStatementCount
	// vtable[3] PchName
	// vtable[4] PchCommand
	// vtable[5] CnParams
	// vtable[6] EParamType
	// vtable[7] PubParam
	// vtable[8] CubParam
	// vtable[9] SetResults
	// sizeof = 8
};
