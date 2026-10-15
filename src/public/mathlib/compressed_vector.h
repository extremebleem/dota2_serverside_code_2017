// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/compressed_vector.h:461
class float16 {
	union float16bits {
		short unsigned int rawWord;  // +0x0
		struct {
			short unsigned int mantissa:10;  // +0x0:0
			short unsigned int biased_exponent:5;  // +0x0:10
			short unsigned int sign:1;  // +0x0:15
		} bits;
	};

protected:

	void Init();
	short unsigned int GetBits();
	float GetFloat();
	void SetFloat(float);
	bool IsInfinity();
	bool IsNaN();
	bool operator==(float16);
	bool operator!=(float16);
	bool IsNaN(float16bits);
	bool IsInfinity(float16bits);
	short unsigned int ConvertFloatTo16bits(float);
	float Convert16bitFloatTo32bits(short unsigned int);

	// sizeof = 2
};

// src/public/mathlib/compressed_vector.h:461
class float16 {
	union float32bits {
		float rawFloat;  // +0x0
		struct {
			unsigned int mantissa:23;  // +0x0:0
			unsigned int biased_exponent:8;  // +0x0:23
			unsigned int sign:1;  // +0x0:31
		} bits;
	};

	union float16bits {
		short unsigned int rawWord;  // +0x0
		struct {
			short unsigned int mantissa:10;  // +0x0:0
			short unsigned int biased_exponent:5;  // +0x0:10
			short unsigned int sign:1;  // +0x0:15
		} bits;
	};

protected:

	void Init();
	short unsigned int GetBits();
	float GetFloat();
	void SetFloat(float);
	bool IsInfinity();
	bool IsNaN();
	bool operator==(float16);
	bool operator!=(float16);
	bool IsNaN(float16bits);
	bool IsInfinity(float16bits);
	short unsigned int ConvertFloatTo16bits(float);
	float Convert16bitFloatTo32bits(short unsigned int);
	float16();

	// sizeof = 2
};

// src/public/mathlib/compressed_vector.h:461
class float16 {
	union float32bits {
		float rawFloat;  // +0x0
		struct {
			unsigned int mantissa:23;  // +0x0:0
			unsigned int biased_exponent:8;  // +0x0:23
			unsigned int sign:1;  // +0x0:31
		} bits;
	};

	union float16bits {
		short unsigned int rawWord;  // +0x0
		struct {
			short unsigned int mantissa:10;  // +0x0:0
			short unsigned int biased_exponent:5;  // +0x0:10
			short unsigned int sign:1;  // +0x0:15
		} bits;
	};

protected:

	void Init();
	short unsigned int GetBits();
	float GetFloat();
	void SetFloat(float);
	bool IsInfinity();
	bool IsNaN();
	bool operator==(float16);
	bool operator!=(float16);
	bool IsNaN(float16bits);
	bool IsInfinity(float16bits);
	short unsigned int ConvertFloatTo16bits(float);
	float Convert16bitFloatTo32bits(short unsigned int);
	float16();
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 2
};

// src/public/mathlib/compressed_vector.h:461
class float16 {
	union float32bits {
		float rawFloat;  // +0x0
		struct {
			unsigned int mantissa:23;  // +0x0:0
			unsigned int biased_exponent:8;  // +0x0:23
			unsigned int sign:1;  // +0x0:31
		} bits;
	};

	union float16bits {
		short unsigned int rawWord;  // +0x0
		struct {
			short unsigned int mantissa:10;  // +0x0:0
			short unsigned int biased_exponent:5;  // +0x0:10
			short unsigned int sign:1;  // +0x0:15
		} bits;
	};

protected:

	void Init();
	short unsigned int GetBits();
	float GetFloat();
	void SetFloat(float);
	bool IsInfinity();
	bool IsNaN();
	bool operator==(float16);
	bool operator!=(float16);
	bool IsNaN(float16bits);
	bool IsInfinity(float16bits);
	short unsigned int ConvertFloatTo16bits(float);
	float Convert16bitFloatTo32bits(short unsigned int);
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 2
};

// src/public/mathlib/compressed_vector.h:461
class float16 {
	union float32bits {
		float rawFloat;  // +0x0
		struct {
			unsigned int mantissa:23;  // +0x0:0
			unsigned int biased_exponent:8;  // +0x0:23
			unsigned int sign:1;  // +0x0:31
		} bits;
	};

	union float16bits {
		short unsigned int rawWord;  // +0x0
		struct {
			short unsigned int mantissa:10;  // +0x0:0
			short unsigned int biased_exponent:5;  // +0x0:10
			short unsigned int sign:1;  // +0x0:15
		} bits;
	};

protected:

	void Init();
	short unsigned int GetBits();
	float GetFloat();
	void SetFloat(float);
	bool IsInfinity();
	bool IsNaN();
	bool operator==(float16);
	bool operator!=(float16);
	bool IsNaN(float16bits);
	bool IsInfinity(float16bits);
	short unsigned int ConvertFloatTo16bits(float);
	float Convert16bitFloatTo32bits(short unsigned int);

	// sizeof = 2
};

// src/public/mathlib/compressed_vector.h:668
class float16_with_assign : public float16 {
public:

	float16_with_assign();
	float16_with_assign(float);
	float16 & operator=(const float16 &);
	float16 & operator=(const float &);
	float operator float();

	// sizeof = 2
};
