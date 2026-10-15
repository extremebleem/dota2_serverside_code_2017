// Reconstructed from DWARF by pahole; not original source.

// src/public/appframework/tier3app.h:28
class CTier3Application : public CTier2Application {
public:

	CTier3Application(CTier3Application &);
	CTier3Application(const CTier3Application &);
	CTier3Application(CAppSystemDict *);
	virtual ~CTier3Application();

	// sizeof = 24
};

// src/public/appframework/tier3app.h:41
class CTier3AppSystemDict : public CTier2AppSystemDict {
public:

	CTier3AppSystemDict(bool, void *, void *, int, bool);
	virtual ~CTier3AppSystemDict();

protected:

	virtual IApplication * CreateApplication();

	// vtable[5] CreateApplication
	// sizeof = 1688
};
