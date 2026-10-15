// Reconstructed from DWARF by pahole; not original source.

// src/public/responserules/response_types.h:48
struct response_interval_t<float16_with_assign> {
	response_interval_t();
	interval_t & ToInterval(interval_t &);
	void FromInterval(const interval_t &);
	float Random();

	// sizeof = 4
};

// src/public/responserules/response_types.h:61
class CSchemaTypeOf<response_interval_t<float16_with_assign> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/responserules/response_types.h:405
class CSchemaTypeOf<CRR_Response::ResponseEnum_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};
