// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/props_shared.h:100
struct SchemaInfoFor_N<IMultiplayerPhysics> {
	const CSchemaClassInfo * Get(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/game/shared/props_shared.h:100
struct CallRegisterFunctionForClass_t<IMultiplayerPhysics> {
	void Call(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/game/shared/props_shared.h:115
class CSchemaTypeOf<PerformanceMode_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};

// src/game/shared/props_shared.h:126
class CSchemaTypeOf<explosion_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};

// src/game/shared/props_shared.h:199
struct SchemaInfoFor_N<IBreakableWithPropData> {
	const CSchemaClassInfo * Get(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};

// src/game/shared/props_shared.h:199
struct CallRegisterFunctionForClass_t<IBreakableWithPropData> {
	void Call(ISchemaSystem *, const char *, const char *);

	// sizeof = 1
};
