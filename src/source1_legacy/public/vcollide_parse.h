// Reconstructed from DWARF by pahole; not original source.

// src/source1_legacy/public/vcollide_parse.h:16
struct solid_t {
	char surfaceprop[512];  // +0x0
	int index;  // +0x20c
	uint64 contents;  // +0x210

	solid_t();

	// sizeof = 600
};

// src/source1_legacy/public/vcollide_parse.h:25
struct fluid_t {
	int index;  // +0x0
	char surfaceprop[512];  // +0x4

	fluid_t();
	fluid_t(const fluid_t &);

	// sizeof = 584
};

// src/source1_legacy/public/vcollide_parse.h:43
class IVPhysicsKeyHandler {
	int ()() * * _vptr.IVPhysicsKeyHandler;  // +0x0
	IVPhysicsKeyHandler(IVPhysicsKeyHandler &);
	IVPhysicsKeyHandler(const IVPhysicsKeyHandler &);
	IVPhysicsKeyHandler();
	virtual void ParseKeyValue(void *, const char *, const char *);
	virtual void SetDefaults(void *);

	// vtable[0] ParseKeyValue
	// vtable[1] SetDefaults
	// sizeof = 8
};

// src/source1_legacy/public/vcollide_parse.h:51
class IVPhysicsKeyParser {
	int ()() * * _vptr.IVPhysicsKeyParser;  // +0x0
	IVPhysicsKeyParser();
	virtual ~IVPhysicsKeyParser();
	virtual const char * GetCurrentBlockName();
	virtual bool Finished();
	virtual void ParseSolid(solid_t *, IVPhysicsKeyHandler *);
	virtual void ParseFluid(fluid_t *, IVPhysicsKeyHandler *);
	virtual void ParseRagdollConstraint(constraint_ragdollparams_t *, IVPhysicsKeyHandler *);
	virtual void ParseSurfaceTable(int *, IVPhysicsKeyHandler *);
	virtual void ParseCustom(void *, IVPhysicsKeyHandler *);
	virtual void ParseVehicle(vehicleparams_t *, IVPhysicsKeyHandler *);
	virtual void SkipBlock();

	// vtable[2] GetCurrentBlockName
	// vtable[3] Finished
	// vtable[4] ParseSolid
	// vtable[5] ParseFluid
	// vtable[6] ParseRagdollConstraint
	// vtable[7] ParseSurfaceTable
	// vtable[8] ParseCustom
	// vtable[9] ParseVehicle
	// vtable[10] SkipBlock
	// sizeof = 8
};
