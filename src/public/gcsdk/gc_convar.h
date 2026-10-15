// Reconstructed from DWARF by pahole; not original source.

// src/public/gcsdk/gc_convar.h:45
class GCBoolConVar : GCConVar {
	GCBoolConVar(const char *, bool, const char *);
	virtual const char * GetBaseName();
	bool GetBool();
	virtual ~GCBoolConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:53
class GCSyncBoolConVar : GCConVar {
	GCSyncBoolConVar(const char *, bool, const char *);
	virtual const char * GetBaseName();
	bool GetBool();
	virtual ~GCSyncBoolConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:64
class GCFloatConVar : GCConVar {
	GCFloatConVar(const char *, float, const char *);
	GCFloatConVar(const char *, float, const char *, float, float);
	float GetFloat();
	virtual ~GCFloatConVar();

	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:72
class GCSyncFloatConVar : GCConVar {
	GCSyncFloatConVar(const char *, float, const char *);
	GCSyncFloatConVar(const char *, float, const char *, float, float);
	virtual const char * GetBaseName();
	float GetFloat();
	virtual ~GCSyncFloatConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:84
class GCIntConVar : GCConVar {
	GCIntConVar(const char *, int, const char *);
	GCIntConVar(const char *, int, const char *, int, int);
	virtual const char * GetBaseName();
	int GetInt();
	virtual ~GCIntConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:93
class GCSyncIntConVar : GCConVar {
	GCSyncIntConVar(const char *, int, const char *);
	GCSyncIntConVar(const char *, int, const char *, int, int);
	virtual const char * GetBaseName();
	int GetInt();
	virtual ~GCSyncIntConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:105
class GCUIntConVar : GCConVar {
	GCUIntConVar(const char *, uint32, const char *);
	GCUIntConVar(const char *, uint32, const char *, uint32, uint32);
	virtual const char * GetBaseName();
	uint32 GetUInt();
	virtual ~GCUIntConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:114
class GCSyncUIntConVar : GCConVar {
	GCSyncUIntConVar(const char *, uint32, const char *);
	GCSyncUIntConVar(const char *, uint32, const char *, uint32, uint32);
	virtual const char * GetBaseName();
	uint32 GetUInt();
	virtual ~GCSyncUIntConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:126
class GCStrConVar : GCConVar {
	GCStrConVar(const char *, const char *, const char *);
	virtual const char * GetBaseName();
	const char * GetString();
	virtual ~GCStrConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};

// src/public/gcsdk/gc_convar.h:134
class GCSyncStrConVar : GCConVar {
	GCSyncStrConVar(const char *, const char *, const char *);
	virtual const char * GetBaseName();
	const char * GetString();
	virtual ~GCSyncStrConVar();

	// vtable[14] GetBaseName
	// sizeof = 160
};
