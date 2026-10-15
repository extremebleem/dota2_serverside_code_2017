// Reconstructed from DWARF by pahole; not original source.

// src/public/engineservices/loopmoderegistry.h:24
class CLoopModeFactory<CLoopModeGame> : public ILoopModeFactory {
public:

private:

	CLoopModeFactory(CLoopModeFactory<CLoopModeGame> &);
	CLoopModeFactory(const CLoopModeFactory<CLoopModeGame> &);
	CLoopModeFactory(LoopModeType_t);
	virtual bool Init(ILoopType *);
	virtual void Shutdown();
	virtual ILoopMode * CreateLoopMode();
	virtual void DestroyLoopMode(ILoopMode *);
	virtual LoopModeType_t GetLoopModeType();

	// vtable[0] Init
	// vtable[1] Shutdown
	// vtable[2] CreateLoopMode
	// vtable[3] DestroyLoopMode
	// vtable[4] GetLoopModeType
	// sizeof = 16
};
