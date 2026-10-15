// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/decals.h:15
class IDecalEmitterSystem {
	int ()() * * _vptr.IDecalEmitterSystem;  // +0x0
	IDecalEmitterSystem(IDecalEmitterSystem &);
	IDecalEmitterSystem(const IDecalEmitterSystem &);
	~IDecalEmitterSystem();
	IDecalEmitterSystem & operator=(IDecalEmitterSystem &);
	IDecalEmitterSystem & operator=(const IDecalEmitterSystem &);
	IDecalEmitterSystem();
	virtual int GetDecalIndexForName(const char *);
	virtual const char * TranslateDecalForGameMaterial(const char *, unsigned char);
	virtual void RebuildMappings();

	// vtable[0] GetDecalIndexForName
	// vtable[1] TranslateDecalForGameMaterial
	// vtable[2] RebuildMappings
	// sizeof = 8
};
