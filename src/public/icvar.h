// Reconstructed from DWARF by pahole; not original source.

// src/public/icvar.h:55
class IConsoleDisplayFunc {
	int ()() * * _vptr.IConsoleDisplayFunc;  // +0x0
	IConsoleDisplayFunc(IConsoleDisplayFunc &);
	IConsoleDisplayFunc(const IConsoleDisplayFunc &);
	~IConsoleDisplayFunc();
	IConsoleDisplayFunc();
	virtual void ColorPrint(const Color &, const char *);
	virtual void Print(const char *);
	virtual void DPrint(const char *);
	virtual void GetConsoleText(char *, size_t);

	// vtable[0] ColorPrint
	// vtable[1] Print
	// vtable[2] DPrint
	// vtable[3] GetConsoleText
	// sizeof = 8
};
