// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/convar_serverbounded.h:24
class ConVar_ServerBounded : public ConVar {
public:

	ConVar_ServerBounded(const char *, const char *, int, const char *);
	ConVar_ServerBounded(const char *, const char *, int, const char *, FnChangeCallback_t);
	ConVar_ServerBounded(const char *, const char *, int, const char *, bool, float, bool, float);
	virtual float GetFloatVirtualized();
	virtual int GetIntVirtualized();
	virtual bool GetBoolVirtualized();
	float GetBaseFloatValue();
	virtual bool IsBoundedVar();

private:

	float GetFloat();
	int GetInt();
	Color GetColor();
	bool GetBool();
	const char * GetString();
	virtual ~ConVar_ServerBounded();

	// vtable[20] GetFloatVirtualized
	// vtable[21] GetIntVirtualized
	// vtable[22] GetBoolVirtualized
	// vtable[3] IsBoundedVar
	// sizeof = 136
};
