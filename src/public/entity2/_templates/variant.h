// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/variant.h:94
class CVariantBase<CVariantDefaultAllocator> {
	union {
		int m_int;  // +0x0
		uint m_uint;  // +0x0
		float m_float;  // +0x0
		const char * m_pszString;  // +0x0
		const Vector * m_pVector;  // +0x0
		void * m_pData;  // +0x0
		char m_char;  // +0x0
		bool m_bool;  // +0x0
		HSCRIPT m_hScript;  // +0x0
		uint32 m_hEntity;  // +0x0
		uint64 m_uint64;  // +0x0
		int64 m_int64;  // +0x0
		float64 m_float64;  // +0x0
		uint32 m_utlStringToken;  // +0x0
		ResourceHandle_t m_hResource;  // +0x0
	};

private:

	union {
		int m_int;  // +0x0
		uint m_uint;  // +0x0
		float m_float;  // +0x0
		const char * m_pszString;  // +0x0
		const Vector * m_pVector;  // +0x0
		void * m_pData;  // +0x0
		char m_char;  // +0x0
		bool m_bool;  // +0x0
		HSCRIPT m_hScript;  // +0x0
		uint32 m_hEntity;  // +0x0
		uint64 m_uint64;  // +0x0
		int64 m_int64;  // +0x0
		float64 m_float64;  // +0x0
		uint32 m_utlStringToken;  // +0x0
		ResourceHandle_t m_hResource;  // +0x0
	};
	int16 m_type;  // +0x8
	uint16 m_flags;  // +0xa

	static typedescription_t m_SaveBool[0];
	static typedescription_t m_SaveInt[0];
	static typedescription_t m_SaveFloat[0];
	static typedescription_t m_SaveEHandle[0];
	static typedescription_t m_SaveString[0];
	static typedescription_t m_SaveColor[0];
	static typedescription_t m_SaveVector[0];
	static typedescription_t m_SavePositionVector[0];
	static typedescription_t m_SaveVMatrix[0];
	static typedescription_t m_SaveVMatrixWorldspace[0];
	static typedescription_t m_SaveMatrix3x4Worldspace[0];
	CVariantBase();
	CVariantBase(int);
	CVariantBase(CEntityIndex);
	CVariantBase(uint32);
	CVariantBase(int64);
	CVariantBase(uint64);
	CVariantBase(float);
	CVariantBase(float64);
	CVariantBase(char);
	CVariantBase(bool);
	CVariantBase(HSCRIPT);
	CVariantBase(HSCRIPT_LIGHTBINDING);
	CVariantBase(CEntityHandle);
	CVariantBase(CUtlStringToken);
	CVariantBase(Color);
	CVariantBase(ResourceHandle_t);
	CVariantBase(HSequence);
	CVariantBase(Local<v8::Value>);
	CVariantBase(Local<v8::Object>);
	CVariantBase(Local<v8::Array>);
	CVariantBase(FunctionCallbackInfo<v8::Value> &);
	CVariantBase(const FunctionCallbackInfo<v8::Value> &);
	CVariantBase(const Vector &, bool);
	CVariantBase(const Vector2D &, bool);
	CVariantBase(const Vector4D &, bool);
	CVariantBase(const Vector *, bool);
	CVariantBase(const char *, bool);
	CVariantBase(const QAngle &, bool);
	CVariantBase(const Quaternion &, bool);
	CVariantBase(const CVariantBase<CVariantDefaultAllocator> &);
	~CVariantBase();
	void operator=(const CVariantBase<CVariantDefaultAllocator> &);
	bool IsNull();
	int operator int();
	CEntityIndex operator CEntityIndex();
	uint operator uint();
	int64 operator int64();
	uint64 operator uint64();
	float operator float();
	float64 operator float64();
	const Vector2D & operator const Vector2D&();
	const Vector & operator const Vector&();
	const Vector4D & operator const Vector4D&();
	const QAngle & operator const QAngle&();
	char operator char();
	bool operator bool();
	HSCRIPT operator HSCRIPT();
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING();
	CEntityHandle operator CEntityHandle();
	CEntityInstance * operator CEntityInstance*();
	const Quaternion & operator const Quaternion&();
	CUtlStringToken operator CUtlStringToken();
	Color operator Color();
	ResourceHandle_t operator ResourceHandle_t();
	Local<v8::Value> operator v8::Local<v8::Value>();
	Local<v8::Object> operator v8::Local<v8::Object>();
	Local<v8::Array> operator v8::Local<v8::Array>();
	FunctionCallbackInfo<v8::Value> & operator v8::FunctionCallbackInfo<v8::Value>&();
	void operator=(int);
	void operator=(CEntityIndex);
	void operator=(uint);
	void operator=(int64);
	void operator=(uint64);
	void operator=(float);
	void operator=(float64);
	void operator=(const Vector2D &);
	void operator=(const Vector &);
	void operator=(const Vector4D &);
	void operator=(const QAngle &);
	void operator=(const Quaternion &);
	void operator=(const Vector2D *);
	void operator=(QAngle *);
	void operator=(const QAngle *);
	void operator=(Vector2D *);
	void operator=(const Vector *);
	void operator=(Vector *);
	void operator=(const Vector4D *);
	void operator=(Vector4D *);
	void operator=(const Quaternion *);
	void operator=(Quaternion *);
	void operator=(const char *);
	void operator=(char);
	void operator=(bool);
	void operator=(HSCRIPT);
	void operator=(HSCRIPT_LIGHTBINDING);
	void operator=(CEntityHandle);
	void operator=(CEntityInstance *);
	void operator=(CUtlStringToken);
	void operator=(Color);
	void operator=(ResourceHandle_t);
	void operator=(HSequence);
	void Free();
	void TakeOwnership();
	bool AssignTo(float *);
	bool AssignTo(uint *);
	bool AssignTo(int *);
	bool AssignTo(bool *);
	bool AssignTo(Vector2D *);
	bool AssignTo(Vector *);
	bool AssignTo(Vector4D *);
	bool AssignTo(QAngle *);
	bool AssignTo(Quaternion *);
	bool AssignTo(QuaternionAligned *);
	bool AssignTo(VectorAligned *);
	bool AssignTo(string_t *);
	bool AssignTo(char *, uint);
	bool AssignTo(CUtlString *);
	bool AssignTo(HSCRIPT *);
	bool AssignTo(CEntityHandle *);
	bool AssignTo(CEntityInstance * *);
	bool AssignTo(CUtlStringToken *);
	bool AssignTo(Color *);
	bool AssignTo(ResourceHandle_t *);
	int GetType();
	uint16 GetFlags();
	void ConvertToCopiedData(bool);
	bool Bool();
	const char * TempString();
	string_t StringID();
	int Int();
	float Float();
	const CEntityHandle Entity();
	Color Color32();
	color24 Color24();
	void Vector3D(Vector &);
	void SetBool(bool);
	void SetCString(const char *);
	void SetString(string_t);
	void SetInt(int);
	void SetFloat(float);
	void SetVector3D(const Vector &);
	void SetPositionVector3D(const Vector &);
	void SetColor(Color);
	void SetColor(int, int, int, int);
	fieldtype_t FieldType();
	void Set(fieldtype_t, void *);
	void SetOther(fieldtype_t, void *);
	bool Convert(fieldtype_t);
	void SetOnRestore(fieldtype_t);
	void * Allocate(uint);
	void Free(void *);
	void CopyData(const char *, bool);
	void CopyData(const Vector2D *, bool);
	void CopyData(const Vector *, bool);
	void CopyData(const Vector4D *, bool);
	void CopyData(const QAngle *, bool);
	const char * ToString();
	bool AssignTo(char * *);

	// sizeof = 16
};

// src/public/entity2/variant.h:94
class CVariantBase<CEntityVariantAllocator> {
	union {
		int m_int;  // +0x0
		uint m_uint;  // +0x0
		float m_float;  // +0x0
		const char * m_pszString;  // +0x0
		const Vector * m_pVector;  // +0x0
		void * m_pData;  // +0x0
		char m_char;  // +0x0
		bool m_bool;  // +0x0
		HSCRIPT m_hScript;  // +0x0
		uint32 m_hEntity;  // +0x0
		uint64 m_uint64;  // +0x0
		int64 m_int64;  // +0x0
		float64 m_float64;  // +0x0
		uint32 m_utlStringToken;  // +0x0
		ResourceHandle_t m_hResource;  // +0x0
	};

private:

	union {
		int m_int;  // +0x0
		uint m_uint;  // +0x0
		float m_float;  // +0x0
		const char * m_pszString;  // +0x0
		const Vector * m_pVector;  // +0x0
		void * m_pData;  // +0x0
		char m_char;  // +0x0
		bool m_bool;  // +0x0
		HSCRIPT m_hScript;  // +0x0
		uint32 m_hEntity;  // +0x0
		uint64 m_uint64;  // +0x0
		int64 m_int64;  // +0x0
		float64 m_float64;  // +0x0
		uint32 m_utlStringToken;  // +0x0
		ResourceHandle_t m_hResource;  // +0x0
	};
	int16 m_type;  // +0x8
	uint16 m_flags;  // +0xa

	static typedescription_t m_SaveBool[0];
	static typedescription_t m_SaveInt[0];
	static typedescription_t m_SaveFloat[0];
	static typedescription_t m_SaveEHandle[0];
	static typedescription_t m_SaveString[0];
	static typedescription_t m_SaveColor[0];
	static typedescription_t m_SaveVector[0];
	static typedescription_t m_SavePositionVector[0];
	static typedescription_t m_SaveVMatrix[0];
	static typedescription_t m_SaveVMatrixWorldspace[0];
	static typedescription_t m_SaveMatrix3x4Worldspace[0];
	CVariantBase();
	CVariantBase(int);
	CVariantBase(CEntityIndex);
	CVariantBase(uint32);
	CVariantBase(int64);
	CVariantBase(uint64);
	CVariantBase(float);
	CVariantBase(float64);
	CVariantBase(char);
	CVariantBase(bool);
	CVariantBase(HSCRIPT);
	CVariantBase(HSCRIPT_LIGHTBINDING);
	CVariantBase(CEntityHandle);
	CVariantBase(CUtlStringToken);
	CVariantBase(Color);
	CVariantBase(ResourceHandle_t);
	CVariantBase(HSequence);
	CVariantBase(Local<v8::Value>);
	CVariantBase(Local<v8::Object>);
	CVariantBase(Local<v8::Array>);
	CVariantBase(FunctionCallbackInfo<v8::Value> &);
	CVariantBase(const FunctionCallbackInfo<v8::Value> &);
	CVariantBase(const Vector &, bool);
	CVariantBase(const Vector2D &, bool);
	CVariantBase(const Vector4D &, bool);
	CVariantBase(const Vector *, bool);
	CVariantBase(const char *, bool);
	CVariantBase(const QAngle &, bool);
	CVariantBase(const Quaternion &, bool);
	CVariantBase(const CVariantBase<CEntityVariantAllocator> &);
	~CVariantBase();
	void operator=(const CVariantBase<CEntityVariantAllocator> &);
	bool IsNull();
	int operator int();
	CEntityIndex operator CEntityIndex();
	uint operator uint();
	int64 operator int64();
	uint64 operator uint64();
	float operator float();
	float64 operator float64();
	const Vector2D & operator const Vector2D&();
	const Vector & operator const Vector&();
	const Vector4D & operator const Vector4D&();
	const QAngle & operator const QAngle&();
	char operator char();
	bool operator bool();
	HSCRIPT operator HSCRIPT();
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING();
	CEntityHandle operator CEntityHandle();
	CEntityInstance * operator CEntityInstance*();
	const Quaternion & operator const Quaternion&();
	CUtlStringToken operator CUtlStringToken();
	Color operator Color();
	ResourceHandle_t operator ResourceHandle_t();
	Local<v8::Value> operator v8::Local<v8::Value>();
	Local<v8::Object> operator v8::Local<v8::Object>();
	Local<v8::Array> operator v8::Local<v8::Array>();
	FunctionCallbackInfo<v8::Value> & operator v8::FunctionCallbackInfo<v8::Value>&();
	void operator=(int);
	void operator=(CEntityIndex);
	void operator=(uint);
	void operator=(int64);
	void operator=(uint64);
	void operator=(float);
	void operator=(float64);
	void operator=(const Vector2D &);
	void operator=(const Vector &);
	void operator=(const Vector4D &);
	void operator=(const QAngle &);
	void operator=(const Quaternion &);
	void operator=(const Vector2D *);
	void operator=(QAngle *);
	void operator=(const QAngle *);
	void operator=(Vector2D *);
	void operator=(const Vector *);
	void operator=(Vector *);
	void operator=(const Vector4D *);
	void operator=(Vector4D *);
	void operator=(const Quaternion *);
	void operator=(Quaternion *);
	void operator=(const char *);
	void operator=(char);
	void operator=(bool);
	void operator=(HSCRIPT);
	void operator=(HSCRIPT_LIGHTBINDING);
	void operator=(CEntityHandle);
	void operator=(CEntityInstance *);
	void operator=(CUtlStringToken);
	void operator=(Color);
	void operator=(ResourceHandle_t);
	void operator=(HSequence);
	void Free();
	void TakeOwnership();
	bool AssignTo(float *);
	bool AssignTo(uint *);
	bool AssignTo(int *);
	bool AssignTo(bool *);
	bool AssignTo(Vector2D *);
	bool AssignTo(Vector *);
	bool AssignTo(Vector4D *);
	bool AssignTo(QAngle *);
	bool AssignTo(Quaternion *);
	bool AssignTo(QuaternionAligned *);
	bool AssignTo(VectorAligned *);
	bool AssignTo(string_t *);
	bool AssignTo(char *, uint);
	bool AssignTo(CUtlString *);
	bool AssignTo(HSCRIPT *);
	bool AssignTo(CEntityHandle *);
	bool AssignTo(CEntityInstance * *);
	bool AssignTo(CUtlStringToken *);
	bool AssignTo(Color *);
	bool AssignTo(ResourceHandle_t *);
	int GetType();
	uint16 GetFlags();
	void ConvertToCopiedData(bool);
	bool Bool();
	const char * TempString();
	string_t StringID();
	int Int();
	float Float();
	const CEntityHandle Entity();
	Color Color32();
	color24 Color24();
	void Vector3D(Vector &);
	void SetBool(bool);
	void SetCString(const char *);
	void SetString(string_t);
	void SetInt(int);
	void SetFloat(float);
	void SetVector3D(const Vector &);
	void SetPositionVector3D(const Vector &);
	void SetColor(Color);
	void SetColor(int, int, int, int);
	fieldtype_t FieldType();
	void Set(fieldtype_t, void *);
	void SetOther(fieldtype_t, void *);
	bool Convert(fieldtype_t);
	void SetOnRestore(fieldtype_t);
	void * Allocate(uint);
	void Free(void *);
	void CopyData(const char *, bool);
	void CopyData(const Vector2D *, bool);
	void CopyData(const Vector *, bool);
	void CopyData(const Vector4D *, bool);
	void CopyData(const QAngle *, bool);
	const char * ToString();
	bool AssignTo(char * *);

	// sizeof = 16
};

// src/public/entity2/variant.h:94
class CVariantBase<CEntityVariantAllocator> {
	union {
		int m_int;  // +0x0
		uint m_uint;  // +0x0
		float m_float;  // +0x0
		const char * m_pszString;  // +0x0
		const Vector * m_pVector;  // +0x0
		void * m_pData;  // +0x0
		char m_char;  // +0x0
		bool m_bool;  // +0x0
		HSCRIPT m_hScript;  // +0x0
		uint32 m_hEntity;  // +0x0
		uint64 m_uint64;  // +0x0
		int64 m_int64;  // +0x0
		float64 m_float64;  // +0x0
		uint32 m_utlStringToken;  // +0x0
		ResourceHandle_t m_hResource;  // +0x0
	};

private:

	union {
		int m_int;  // +0x0
		uint m_uint;  // +0x0
		float m_float;  // +0x0
		const char * m_pszString;  // +0x0
		const Vector * m_pVector;  // +0x0
		void * m_pData;  // +0x0
		char m_char;  // +0x0
		bool m_bool;  // +0x0
		HSCRIPT m_hScript;  // +0x0
		uint32 m_hEntity;  // +0x0
		uint64 m_uint64;  // +0x0
		int64 m_int64;  // +0x0
		float64 m_float64;  // +0x0
		uint32 m_utlStringToken;  // +0x0
		ResourceHandle_t m_hResource;  // +0x0
	};
	int16 m_type;  // +0x8
	uint16 m_flags;  // +0xa

	static typedescription_t m_SaveBool[0];
	static typedescription_t m_SaveInt[0];
	static typedescription_t m_SaveFloat[0];
	static typedescription_t m_SaveEHandle[0];
	static typedescription_t m_SaveString[0];
	static typedescription_t m_SaveColor[0];
	static typedescription_t m_SaveVector[0];
	static typedescription_t m_SavePositionVector[0];
	static typedescription_t m_SaveVMatrix[0];
	static typedescription_t m_SaveVMatrixWorldspace[0];
	static typedescription_t m_SaveMatrix3x4Worldspace[0];
	CVariantBase();
	CVariantBase(int);
	CVariantBase(CEntityIndex);
	CVariantBase(uint32);
	CVariantBase(int64);
	CVariantBase(uint64);
	CVariantBase(float);
	CVariantBase(float64);
	CVariantBase(char);
	CVariantBase(bool);
	CVariantBase(HSCRIPT);
	CVariantBase(HSCRIPT_LIGHTBINDING);
	CVariantBase(CEntityHandle);
	CVariantBase(CUtlStringToken);
	CVariantBase(Color);
	CVariantBase(ResourceHandle_t);
	CVariantBase(HSequence);
	CVariantBase(Local<v8::Value>);
	CVariantBase(Local<v8::Object>);
	CVariantBase(Local<v8::Array>);
	CVariantBase(FunctionCallbackInfo<v8::Value> &);
	CVariantBase(const FunctionCallbackInfo<v8::Value> &);
	CVariantBase(const Vector &, bool);
	CVariantBase(const Vector2D &, bool);
	CVariantBase(const Vector4D &, bool);
	CVariantBase(const Vector *, bool);
	CVariantBase(const char *, bool);
	CVariantBase(const QAngle &, bool);
	CVariantBase(const Quaternion &, bool);
	CVariantBase(const CVariantBase<CEntityVariantAllocator> &);
	~CVariantBase();
	void operator=(const CVariantBase<CEntityVariantAllocator> &);
	bool IsNull();
	int operator int();
	CEntityIndex operator CEntityIndex();
	uint operator uint();
	int64 operator int64();
	uint64 operator uint64();
	float operator float();
	float64 operator float64();
	const Vector2D & operator const Vector2D&();
	const Vector & operator const Vector&();
	const Vector4D & operator const Vector4D&();
	const QAngle & operator const QAngle&();
	char operator char();
	bool operator bool();
	HSCRIPT operator HSCRIPT();
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING();
	CEntityHandle operator CEntityHandle();
	CEntityInstance * operator CEntityInstance*();
	const Quaternion & operator const Quaternion&();
	CUtlStringToken operator CUtlStringToken();
	Color operator Color();
	ResourceHandle_t operator ResourceHandle_t();
	Local<v8::Value> operator v8::Local<v8::Value>();
	Local<v8::Object> operator v8::Local<v8::Object>();
	Local<v8::Array> operator v8::Local<v8::Array>();
	FunctionCallbackInfo<v8::Value> & operator v8::FunctionCallbackInfo<v8::Value>&();
	void operator=(int);
	void operator=(CEntityIndex);
	void operator=(uint);
	void operator=(int64);
	void operator=(uint64);
	void operator=(float);
	void operator=(float64);
	void operator=(const Vector2D &);
	void operator=(const Vector &);
	void operator=(const Vector4D &);
	void operator=(const QAngle &);
	void operator=(const Quaternion &);
	void operator=(const Vector2D *);
	void operator=(QAngle *);
	void operator=(const QAngle *);
	void operator=(Vector2D *);
	void operator=(const Vector *);
	void operator=(Vector *);
	void operator=(const Vector4D *);
	void operator=(Vector4D *);
	void operator=(const Quaternion *);
	void operator=(Quaternion *);
	void operator=(const char *);
	void operator=(char);
	void operator=(bool);
	void operator=(HSCRIPT);
	void operator=(HSCRIPT_LIGHTBINDING);
	void operator=(CEntityHandle);
	void operator=(CEntityInstance *);
	void operator=(CUtlStringToken);
	void operator=(Color);
	void operator=(ResourceHandle_t);
	void operator=(HSequence);
	void Free();
	void TakeOwnership();
	bool AssignTo(float *);
	bool AssignTo(uint *);
	bool AssignTo(int *);
	bool AssignTo(bool *);
	bool AssignTo(Vector2D *);
	bool AssignTo(Vector *);
	bool AssignTo(Vector4D *);
	bool AssignTo(QAngle *);
	bool AssignTo(Quaternion *);
	bool AssignTo(QuaternionAligned *);
	bool AssignTo(VectorAligned *);
	bool AssignTo(string_t *);
	bool AssignTo(char *, uint);
	bool AssignTo(CUtlString *);
	bool AssignTo(HSCRIPT *);
	bool AssignTo(CEntityHandle *);
	bool AssignTo(CEntityInstance * *);
	bool AssignTo(CUtlStringToken *);
	bool AssignTo(Color *);
	bool AssignTo(ResourceHandle_t *);
	int GetType();
	uint16 GetFlags();
	void ConvertToCopiedData(bool);
	bool Bool();
	const char * TempString();
	string_t StringID();
	int Int();
	float Float();
	const CEntityHandle Entity();
	Color Color32();
	color24 Color24();
	void Vector3D(Vector &);
	void SetBool(bool);
	void SetCString(const char *);
	void SetString(string_t);
	void SetInt(int);
	void SetFloat(float);
	void SetVector3D(const Vector &);
	void SetPositionVector3D(const Vector &);
	void SetColor(Color);
	void SetColor(int, int, int, int);
	fieldtype_t FieldType();
	void Set(fieldtype_t, void *);
	void SetOther(fieldtype_t, void *);
	bool Convert(fieldtype_t);
	void SetOnRestore(fieldtype_t);
	void * Allocate(uint);
	void Free(void *);
	void CopyData(const char *, bool);
	void CopyData(const Vector2D *, bool);
	void CopyData(const Vector *, bool);
	void CopyData(const Vector4D *, bool);
	void CopyData(const QAngle *, bool);
	const char * ToString();
	bool AssignTo(char * *);
	Vector2D * Allocate<Vector2D>();
	void CopyData<Vector2D>(const Vector2D &, bool);
	Vector * Allocate<Vector>();
	Vector4D * Allocate<Vector4D>();
	void CopyData<Vector4D>(const Vector4D &, bool);
	QAngle * Allocate<QAngle>();
	void CopyData<QAngle>(const QAngle &, bool);
	Quaternion * Allocate<Quaternion>();
	void CopyData<Quaternion>(const Quaternion &, bool);
	CHandle<CBaseEntity> Get<CHandle<CBaseEntity> >();
	void CopyData<Vector>(const Vector &, bool);
	bool AssignTo<CBaseEntity>(CHandle<CBaseEntity> *);
	bool AssignTo<CEntityVariantAllocator>(CVariantBase<CEntityVariantAllocator> *);

	// sizeof = 16
};

// src/public/entity2/variant.h:384
class CSchemaTypeOf<CVariantBase<CVariantDefaultAllocator> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/entity2/variant.h:1581
class CStackAnnotationVariableHandler<CVariantBase<CVariantDefaultAllocator>*> {
	const const CVariantBase<CVariantDefaultAllocator> * m_VarStorage;  // +0x0
	typedef const CVariantBase<CVariantDefaultAllocator> * ConstructorVarType;
	CStackAnnotationVariableHandler(> *, ConstructorVarType);
	void ResolveVar(> *, IAnnotationPackager *, const char *);

	// sizeof = 8
};

// CVariantBase: 47 more instantiations (full list in INDEX.tsv)
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
//   CVariantBase<CEntityVariantAllocator>
//   CVariantBase<CVariantDefaultAllocator>
