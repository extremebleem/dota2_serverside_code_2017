// Reconstructed from DWARF by pahole; not original source.

// src/game/server/iservervehicle.h:140
class CSchemaTypeOf<IDrivableVehicle> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/game/server/iservervehicle.h:141
struct SchemaInfoFor_N<IDrivableVehicle> {
	const CSchemaClassInfo * Get(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/game/server/iservervehicle.h:141
struct CallRegisterFunctionForClass_t<IDrivableVehicle> {
	void Call(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};
