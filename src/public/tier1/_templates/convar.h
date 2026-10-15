// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/convar.h:996
class CConCommandMemberAccessor<CEntityDebugGameSystem> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:

private:

	typedef struct {
		void (*__pfn)(CEntityDebugGameSystem *, const CCommandContext &, const CCommand &);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} FnMemberCommandCallback_t;

	FnMemberCommandCallback_t m_Func;  // +0x78
	typedef struct {
		void (*__pfn)(CEntityDebugGameSystem *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);  // +0x0
		long int __delta;  // +0x8

	} FnMemberCommandCompletionCallback_t;

	FnMemberCommandCompletionCallback_t m_CompletionFunc;  // +0x88
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CEntityDebugGameSystem> *, const CConCommandMemberAccessor<CEntityDebugGameSystem> &);
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CEntityDebugGameSystem> *, CEntityDebugGameSystem *, const char *, FnMemberCommandCallback_t, const char *, int64, FnMemberCommandCompletionCallback_t);
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CEntityDebugGameSystem> *, int);
	void SetOwner(CConCommandMemberAccessor<CEntityDebugGameSystem> *, CEntityDebugGameSystem *);
	virtual void CommandCallback(CConCommandMemberAccessor<CEntityDebugGameSystem> *, const CCommandContext &, const CCommand &);
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CEntityDebugGameSystem> *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);

// vtable[17] CommandCallback
// vtable[18] CommandCompletionCallback
};

// src/public/tier1/convar.h:996
class CConCommandMemberAccessor<CDecalGameSystem> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:

private:

	typedef struct {
		void (*__pfn)(CDecalGameSystem *, const CCommandContext &, const CCommand &);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} FnMemberCommandCallback_t;

	FnMemberCommandCallback_t m_Func;  // +0x78
	typedef struct {
		void (*__pfn)(CDecalGameSystem *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);  // +0x0
		long int __delta;  // +0x8

	} FnMemberCommandCompletionCallback_t;

	FnMemberCommandCompletionCallback_t m_CompletionFunc;  // +0x88
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CDecalGameSystem> *, const CConCommandMemberAccessor<CDecalGameSystem> &);
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CDecalGameSystem> *, CDecalGameSystem *, const char *, FnMemberCommandCallback_t, const char *, int64, FnMemberCommandCompletionCallback_t);
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CDecalGameSystem> *, int);
	void SetOwner(CConCommandMemberAccessor<CDecalGameSystem> *, CDecalGameSystem *);
	virtual void CommandCallback(CConCommandMemberAccessor<CDecalGameSystem> *, const CCommandContext &, const CCommand &);
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CDecalGameSystem> *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);

// vtable[17] CommandCallback
// vtable[18] CommandCompletionCallback
};

// src/public/tier1/convar.h:996
class CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> : public ConCommand, public ICommandCallback, public ICommandCompletionCallback {
public:

private:

	typedef struct {
		void (*__pfn)(CSpawnGroupMgrGameSystem *, const CCommandContext &, const CCommand &);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} FnMemberCommandCallback_t;

	FnMemberCommandCallback_t m_Func;  // +0x78
	typedef struct {
		void (*__pfn)(CSpawnGroupMgrGameSystem *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);  // +0x0
		long int __delta;  // +0x8

	} FnMemberCommandCompletionCallback_t;

	FnMemberCommandCompletionCallback_t m_CompletionFunc;  // +0x88
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *, const CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> &);
	void CConCommandMemberAccessor(CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *, CSpawnGroupMgrGameSystem *, const char *, FnMemberCommandCallback_t, const char *, int64, FnMemberCommandCompletionCallback_t);
	virtual void ~CConCommandMemberAccessor(CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *, int);
	void SetOwner(CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *, CSpawnGroupMgrGameSystem *);
	virtual void CommandCallback(CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *, const CCommandContext &, const CCommand &);
	virtual int CommandCompletionCallback(CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);

// vtable[17] CommandCallback
// vtable[18] CommandCompletionCallback
};

// CConCommandMemberAccessor: 2 more instantiations (full list in INDEX.tsv)
//   CConCommandMemberAccessor<CSoundOpGameSystem>
//   CConCommandMemberAccessor<CLoopModeGame>
