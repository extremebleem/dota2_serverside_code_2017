// Reconstructed from DWARF by pahole; not original source.

// src/game/public/choreoobjects/iscenetokenprocessor.h:14
class ISceneTokenProcessor {
	int ()() * * _vptr.ISceneTokenProcessor;  // +0x0
	ISceneTokenProcessor(ISceneTokenProcessor &);
	ISceneTokenProcessor(const ISceneTokenProcessor &);
	ISceneTokenProcessor();
	virtual const char * CurrentToken();
	virtual bool GetToken(bool);
	virtual bool TokenAvailable();
	virtual void Error(const char *, ...);

	// vtable[0] CurrentToken
	// vtable[1] GetToken
	// vtable[2] TokenAvailable
	// vtable[3] Error
	// sizeof = 8
};
