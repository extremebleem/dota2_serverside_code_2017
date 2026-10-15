// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/convar.h:57
class IConCommandBaseAccessor {
	int ()() * * _vptr.IConCommandBaseAccessor;  // +0x0
	IConCommandBaseAccessor(IConCommandBaseAccessor &);
	IConCommandBaseAccessor(const IConCommandBaseAccessor &);
	IConCommandBaseAccessor();
	virtual bool RegisterConCommandBase(ConCommandBase *);

	// vtable[0] RegisterConCommandBase
	// sizeof = 8
};

// src/public/tier1/convar.h:81
class ICommandCallback {
	int ()() * * _vptr.ICommandCallback;  // +0x0
	ICommandCallback(ICommandCallback &);
	ICommandCallback(const ICommandCallback &);
	~ICommandCallback();
	ICommandCallback();
	virtual void CommandCallback(const CCommandContext &, const CCommand &);

	// vtable[0] CommandCallback
	// sizeof = 8
};

// src/public/tier1/convar.h:87
class ICommandCompletionCallback {
	int ()() * * _vptr.ICommandCompletionCallback;  // +0x0
	ICommandCompletionCallback(ICommandCompletionCallback &);
	ICommandCompletionCallback(const ICommandCompletionCallback &);
	~ICommandCompletionCallback();
	ICommandCompletionCallback();
	virtual int CommandCompletionCallback(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);

	// vtable[0] CommandCompletionCallback
	// sizeof = 8
};

// src/public/tier1/convar.h:120
class ConCommandBase {
	int ()() * * _vptr.ConCommandBase;  // +0x0
private:

protected:

	bool m_bRegistered;  // +0x10

private:

	const char * m_pszName;  // +0x18
	const char * m_pszHelpString;  // +0x20
	int64 m_nFlags;  // +0x28
protected:

	static ConCommandBase * s_pConCommandBases;
	static IConCommandBaseAccessor * s_pAccessor;
	ConCommandBase(const ConCommandBase &);
	ConCommandBase();
	ConCommandBase(const char *, const char *, int64);
	virtual ~ConCommandBase();
	virtual bool IsCommand();
	virtual bool IsBoundedVar();
	virtual bool IsFlagSet(int64);
	virtual void AddFlags(int64);
	virtual void RemoveFlags(int64);
	virtual int64 GetFlags();
	virtual const char * GetName();
	virtual const char * GetHelpText();
	const ConCommandBase * GetNext();
	ConCommandBase * GetNext();
	virtual bool IsRegistered();
	virtual CVarDLLIdentifier_t GetDLLIdentifier();
	virtual void Create(const char *, const char *, int64);
	virtual void Init();
	void Shutdown();
	char * CopyString(const char *);

	// vtable[2] IsCommand
	// vtable[3] IsBoundedVar
	// vtable[4] IsFlagSet
	// vtable[5] AddFlags
	// vtable[6] RemoveFlags
	// vtable[7] GetFlags
	// vtable[8] GetName
	// vtable[9] GetHelpText
	// vtable[10] IsRegistered
	// vtable[11] GetDLLIdentifier
	// vtable[12] Create
	// vtable[13] Init
	// sizeof = 48
};

// src/public/tier1/convar.h:216
class CCommandContext {
	CCommandContext(CommandTarget_t);

	// sizeof = 4
};

// src/public/tier1/convar.h:228
class CCommand {
private:

	int m_nArgc;  // +0x0
	int m_nArgv0Size;  // +0x4
	char m_pArgSBuffer[512];  // +0x8
	char m_pArgvBuffer[512];  // +0x208
	const char * m_ppArgv[64];  // +0x408
	CCommand();
	CCommand(int, const char * *);
	CCommand(const CCommand &);
	CCommand & operator=(const CCommand &);
	bool Tokenize(const char *, characterset_t *);
	void Reset();
	int ArgC();
	const char * * ArgV();
	const char * ArgS();
	const char * GetCommandString();
	const char * operator[](int);
	const char * Arg(int);
	const char * FindArg(const char *);
	int FindArgInt(const char *, int);
	CCommand StripArg0();
	int MaxCommandLength();
	characterset_t * DefaultBreakSet();

	// sizeof = 1544
};

// src/public/tier1/convar.h:228
class CCommand {
	enum {
		COMMAND_MAX_ARGC = 0x40,
		COMMAND_MAX_LENGTH = 0x200,
	};

private:

	int m_nArgc;  // +0x0
	int m_nArgv0Size;  // +0x4
	char m_pArgSBuffer[512];  // +0x8
	char m_pArgvBuffer[512];  // +0x208
	const char * m_ppArgv[64];  // +0x408
	CCommand();
	CCommand(int, const char * *);
	CCommand(const CCommand &);
	CCommand & operator=(const CCommand &);
	bool Tokenize(const char *, characterset_t *);
	void Reset();
	int ArgC();
	const char * * ArgV();
	const char * ArgS();
	const char * GetCommandString();
	const char * operator[](int);
	const char * Arg(int);
	const char * FindArg(const char *);
	int FindArgInt(const char *, int);
	CCommand StripArg0();
	int MaxCommandLength();
	characterset_t * DefaultBreakSet();

	// sizeof = 1544
};

// src/public/tier1/convar.h:312
class ConCommand : public ConCommandBase {
	struct CallbackInfo_t {
		union {
			FnCommandCallback_t m_fnCommandCallback;  // +0x0
			FnCommandCallbackVoid_t m_fnVoidCommandCallback;  // +0x0
			FnCommandCallbackNoContext_t m_fnContextlessCommandCallback;  // +0x0
		};

		union {
			FnCommandCallback_t m_fnCommandCallback;  // +0x0
			FnCommandCallbackVoid_t m_fnVoidCommandCallback;  // +0x0
			FnCommandCallbackNoContext_t m_fnContextlessCommandCallback;  // +0x0
		};
		bool m_bUsingCommandCallbackInterface:1;  // +0x8:0
		bool m_bHasVoidCommandCallback:1;  // +0x8:1
		bool m_bHasContextlessCommandCallback:1;  // +0x8:2
		CallbackInfo_t();

		// sizeof = 16
	};

	union {
		FnCommandCompletionCallback m_fnCompletionCallback;  // +0x0
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	union {
		FnCommandCompletionCallback m_fnCompletionCallback;  // +0x30
	};
	bool m_bHasCompletionCallback:1;  // +0x38:0
	bool m_bCompletionUsingCommandCallbackInterface:1;  // +0x38:1

	ConCommand(const ConCommand &);
	ConCommand(const char *, FnCommandCallback_t, const char *, int64, FnCommandCompletionCallback);
	ConCommand(const char *, FnCommandCallbackNoContext_t, const char *, int64, FnCommandCompletionCallback);
	ConCommand(const char *, FnCommandCallbackVoid_t, const char *, int64, FnCommandCompletionCallback);
	ConCommand(const char *, ICommandCallback *, const char *, int64, ICommandCompletionCallback *);
	virtual ~ConCommand();
	virtual bool IsCommand();
	virtual int AutoCompleteSuggest(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual bool CanAutoComplete();
	virtual void Dispatch(const CCommandContext &, const CCommand &);
	CUtlVector<ConCommand::CallbackInfo_t, CUtlMemory<ConCommand::CallbackInfo_t, int> > & GetCallbacks();

protected:

	virtual void Create(const char *, const char *, int64);

	// vtable[2] IsCommand
	// vtable[14] AutoCompleteSuggest
	// vtable[15] CanAutoComplete
	// vtable[16] Dispatch
	// vtable[12] Create
	// sizeof = 96
};

// src/public/tier1/convar.h:399
class ConVar : public ConCommandBase, public IConVar {
	struct CVValue_t {
		char * m_pszString;  // +0x0
		int m_StringLength;  // +0x8
		float m_fValue;  // +0xc
		int m_nValue;  // +0x10

		// sizeof = 24
	};

public:

protected:

	const char * m_pszDefaultValue;  // +0x40

	bool m_bHasMin;  // +0x60

	float m_fMinVal;  // +0x64
	bool m_bHasMax;  // +0x68

	float m_fMaxVal;  // +0x6c
	CUtlVector<void (*)(IConVar*, char const*, float), CUtlMemory<void (*)(IConVar*, char const*, float), int> > m_fnChangeCallbacks;  // +0x70
	ConVar(const ConVar &);
	ConVar(const char *, const char *, int64);
	ConVar(const char *, const char *, int64, const char *);
	ConVar(const char *, const char *, int64, const char *, bool, float, bool, float);
	ConVar(const char *, const char *, int64, const char *, FnChangeCallback_t);
	ConVar(const char *, const char *, int64, const char *, bool, float, bool, float, FnChangeCallback_t);
	virtual ~ConVar();
	virtual bool IsFlagSet(int64);
	virtual const char * GetHelpText();
	virtual bool IsRegistered();
	virtual const char * GetName();
	virtual const char * GetBaseName();
	virtual CSplitScreenSlot GetSplitScreenPlayerSlot();
	virtual void AddFlags(int64);
	virtual int64 GetFlags();
	virtual bool IsCommand();
	void InstallChangeCallback(FnChangeCallback_t, bool);
	void RemoveChangeCallback(FnChangeCallback_t);
	int GetChangeCallbackCount();
	FnChangeCallback_t GetChangeCallback(int);
	float GetFloat();
	int GetInt();
	Color GetColor();
	bool GetBool();
	const char * GetString();
	virtual void SetValue(const char *);
	virtual void SetValue(float);
	virtual void SetValue(int);
	virtual void SetValue(Color);
	void Revert();
	bool HasMin();
	bool HasMax();
	bool GetMin(float &);
	bool GetMax(float &);
	float GetMinValue();
	float GetMaxValue();
	const char * GetDefault();
	CVValue_t & GetRawValue();
	const CVValue_t & GetRawValue();
	/* tag__fprintf: const_type tag not supported! */;
	virtual float GetFloatVirtualized();
	virtual int GetIntVirtualized();
	virtual bool GetBoolVirtualized();

private:

	bool InternalSetColorFromString(const char *);
	virtual void InternalSetValue(const char *);
	virtual void InternalSetFloatValue(float);
	virtual void InternalSetIntValue(int);
	virtual void InternalSetColorValue(Color);
	virtual bool ClampValue(float &);
	virtual void ChangeStringValue(const char *, float);
	virtual void Create(const char *, const char *, int64, const char *, bool, float, bool, float, FnChangeCallback_t);
	virtual void Init();

	// vtable[4] IsFlagSet
	// vtable[9] GetHelpText
	// vtable[10] IsRegistered
	// vtable[8] GetName
	// vtable[14] GetBaseName
	// vtable[15] GetSplitScreenPlayerSlot
	// vtable[5] AddFlags
	// vtable[7] GetFlags
	// vtable[2] IsCommand
	// vtable[16] SetValue
	// vtable[17] SetValue
	// vtable[18] SetValue
	// vtable[19] SetValue
	// vtable[20] GetFloatVirtualized
	// vtable[21] GetIntVirtualized
	// vtable[22] GetBoolVirtualized
	// vtable[23] InternalSetValue
	// vtable[24] InternalSetFloatValue
	// vtable[25] InternalSetIntValue
	// vtable[26] InternalSetColorValue
	// vtable[27] ClampValue
	// vtable[28] ChangeStringValue
	// vtable[29] Create
	// vtable[13] Init
	// sizeof = 136
};

// src/public/tier1/convar.h:622
class CSplitScreenAddedConVar : public ConVar {
public:

protected:

	const ConVar * m_pBaseVar;  // +0x88
	CSplitScreenAddedConVar(CSplitScreenSlot, const char *, const ConVar *);
	const ConVar * GetBaseVar();
	virtual const char * GetBaseName();
	void SetSplitScreenPlayerSlot(CSplitScreenSlot);
	virtual CSplitScreenSlot GetSplitScreenPlayerSlot();
	virtual ~CSplitScreenAddedConVar();

	// vtable[14] GetBaseName
	// vtable[15] GetSplitScreenPlayerSlot
	// sizeof = 152
};

// src/public/tier1/convar.h:689
class ConVarRef {
private:

	ConVarRef(const char *);
	ConVarRef(const char *, bool);
	ConVarRef(IConVar *);
	void Init(const char *, bool);
	bool IsValid();
	bool IsFlagSet(int64);
	IConVar * GetLinkedConVar();
	float GetFloat();
	int GetInt();
	Color GetColor();
	bool GetBool();
	const char * GetString();
	void SetValue(const char *);
	void SetValue(float);
	void SetValue(int);
	void SetValue(Color);
	void SetValue(bool);
	const char * GetName();
	const char * GetDefault();
	const char * GetBaseName();
	CSplitScreenSlot GetSplitScreenPlayerSlot();
	float GetFloatVirtualized();
	int GetIntVirtualized();
	bool GetBoolVirtualized();

	// sizeof = 16
};

// src/public/tier1/convar.h:841
class SplitScreenConVarRef {
	struct cv_t {
		// sizeof = 16
	};

private:

	SplitScreenConVarRef(const char *);
	SplitScreenConVarRef(const char *, bool);
	SplitScreenConVarRef(IConVar *);
	void Init(const char *, bool);
	bool IsValid();
	bool IsFlagSet(int64);
	float GetFloat(CSplitScreenSlot);
	int GetInt(CSplitScreenSlot);
	Color GetColor(CSplitScreenSlot);
	bool GetBool(CSplitScreenSlot);
	const char * GetString(CSplitScreenSlot);
	void SetValue(CSplitScreenSlot, const char *);
	void SetValue(CSplitScreenSlot, float);
	void SetValue(CSplitScreenSlot, int);
	void SetValue(CSplitScreenSlot, Color);
	void SetValue(CSplitScreenSlot, bool);
	const char * GetName(CSplitScreenSlot);
	const char * GetDefault();
	const char * GetBaseName();

	// sizeof = 64
};
