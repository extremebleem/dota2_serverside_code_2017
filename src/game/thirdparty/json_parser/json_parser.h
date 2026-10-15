// Reconstructed from DWARF by pahole; not original source.

// src/game/thirdparty/json_parser/json_parser.h:78
struct JSON_value_struct {
	union {
		JSON_int_t integer_value;  // +0x0
		double float_value;  // +0x0
		struct {
			const char * value;  // +0x0
			size_t length;  // +0x8
		} str;
	};

	union {
		JSON_int_t integer_value;  // +0x0
		double float_value;  // +0x0
		struct {
			const char * value;  // +0x0
			size_t length;  // +0x8
		} str;
	} vu;

	// sizeof = 16
};
