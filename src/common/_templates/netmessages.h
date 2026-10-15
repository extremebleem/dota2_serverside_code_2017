// Reconstructed from DWARF by pahole; not original source.

// src/common/netmessages.h:55
class CBaseCmdKeyValues<CSVCMsg_CmdKeyValues> : public CSVCMsg_CmdKeyValues {
public:

protected:

	CBaseCmdKeyValues(KeyValues *);
	CBaseCmdKeyValues(const CBaseCmdKeyValues<CSVCMsg_CmdKeyValues> &);
	virtual ~CBaseCmdKeyValues();
	CBaseCmdKeyValues<CSVCMsg_CmdKeyValues> & operator=(const CBaseCmdKeyValues<CSVCMsg_CmdKeyValues> &);
	void SetKeyValues(KeyValues *);
	bool HasKeyValues();
	KeyValues * GetKeyValues();

	// sizeof = 40
};

// src/common/netmessages.h:55
class CBaseCmdKeyValues<CCLCMsg_CmdKeyValues> : public CCLCMsg_CmdKeyValues {
public:

protected:

	CBaseCmdKeyValues(KeyValues *);
	CBaseCmdKeyValues(const CBaseCmdKeyValues<CCLCMsg_CmdKeyValues> &);
	virtual ~CBaseCmdKeyValues();
	CBaseCmdKeyValues<CCLCMsg_CmdKeyValues> & operator=(const CBaseCmdKeyValues<CCLCMsg_CmdKeyValues> &);
	void SetKeyValues(KeyValues *);
	bool HasKeyValues();
	KeyValues * GetKeyValues();

	// sizeof = 40
};

// src/common/netmessages.h:55
class CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify> : public CDOTAUserMsg_CustomHudElement_Modify {
public:

protected:

	CBaseCmdKeyValues(KeyValues *);
	CBaseCmdKeyValues(const CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify> &);
	virtual ~CBaseCmdKeyValues();
	CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify> & operator=(const CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify> &);
	void SetKeyValues(KeyValues *);
	bool HasKeyValues();
	KeyValues * GetKeyValues();

	// sizeof = 56
};

// CBaseCmdKeyValues: 4 more instantiations (full list in INDEX.tsv)
//   CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>
//   CBaseCmdKeyValues<CUserMsg_CustomGameEvent>
//   CBaseCmdKeyValues<CClientMsg_CustomGameEvent>
//   CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration>
