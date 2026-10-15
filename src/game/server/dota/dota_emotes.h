// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_emotes.h:34
class CEmoteMap {
private:

	static const char s_DefaultDelimiter = 32;
	class IFunction : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
	public:

		IFunction(const IFunction &);
		IFunction();
		virtual void Do(CDOTAPlayer *, const CCommand &, bool);
		virtual ~IFunction();

		// vtable[3] Do
		// sizeof = 16
	};
	CEmoteMap();
	bool AddFunction(const char *, IFunction *);
	bool RemoveFunction(const char *);
	bool ParseAndRunChat(CDOTAPlayer *, int, const char *);
	CEmoteMap & operator=(const CEmoteMap &);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 48
};

// src/game/server/dota/dota_emotes.h:77
class CEmotePlayConcept : public IFunction {
public:

	const const char * m_pszName;  // +0x10
	const int m_nConcept;  // +0x18
	CEmotePlayConcept(CEmotePlayConcept &);
	CEmotePlayConcept(const CEmotePlayConcept &);
	CEmotePlayConcept(const char *, int);
	virtual void Do(CDOTAPlayer *, const CCommand &, bool);
	virtual ~CEmotePlayConcept();

	// vtable[3] Do
	// sizeof = 32
};
