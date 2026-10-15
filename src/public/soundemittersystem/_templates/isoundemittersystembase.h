// Reconstructed from DWARF by pahole; not original source.

// src/public/soundemittersystem/isoundemittersystembase.h:129
class CSchemaTypeOf<gender_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};

// src/public/soundemittersystem/isoundemittersystembase.h:157
struct sound_interval_t<float16_with_assign> {
	sound_interval_t();
	interval_t & ToInterval(interval_t &);
	void FromInterval(const interval_t &);
	float Random();

	// sizeof = 4
};

// src/public/soundemittersystem/isoundemittersystembase.h:157
struct sound_interval_t<short unsigned int> {
	short unsigned int start;  // +0x0
	short unsigned int range;  // +0x2
	interval_t & ToInterval(interval_t &);
	void FromInterval(const interval_t &);
	float Random();

	// sizeof = 4
};

// src/public/soundemittersystem/isoundemittersystembase.h:157
struct sound_interval_t<unsigned char> {
	unsigned char start;  // +0x0
	unsigned char range;  // +0x1
	interval_t & ToInterval(interval_t &);
	void FromInterval(const interval_t &);
	float Random();

	// sizeof = 2
};
