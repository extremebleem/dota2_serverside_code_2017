// Reconstructed from DWARF by pahole; not original source.

// src/game/public/scenesystem/vertexformat.h:19
class CTSInputLayoutCreator {
private:

	RenderInputLayout_t m_hLayout;  // +0x4
	CTSInputLayoutCreator();
	bool IsInitialized();
	RenderInputLayout_t CreateLayout(const char *, int, const RenderInputLayoutField_t *);
	RenderInputLayout_t GetLayout();

	// sizeof = 8
};

// src/game/public/scenesystem/vertexformat.h:246
struct VertexUVPos_t : public VertexPos_t {
public:

	VertexUVPos_t();
	void SetUV0(const Vector2D &);
	void SetUV0(float, float);
	void TexCoord(int, const Vector4D &);
	void TexCoord1f(int, float);
	void TexCoord2f(int, float, float);
	void TexCoord2fv(int, const float *);
	void TexCoord3f(int, float, float, float);
	void TexCoord3fv(int, const float *);
	void TexCoord4f(int, float, float, float, float);
	void TexCoord4fv(int, const float *);
	void TexCoordSubRect2f(int, float, float, float, float, float, float);
	void TexCoordSubRect2fv(int, const float *, const float *, const float *);
	const float * TexCoord(int);
	RenderInputLayout_t GetLayout();
	VertexUVPos_t & operator=(const VertexUVPos_t &);

	// sizeof = 20
};

// src/game/public/scenesystem/vertexformat.h:361
struct VertexColorUVPos_t : public VertexUVPos_t {
public:

	VertexColorUVPos_t();
	void Color(const VertexColor_t &);
	void Color3f(float, float, float);
	void Color3fv(const float *);
	void Color4f(float, float, float, float);
	void Color4fv(const float *);
	void Color3ub(unsigned char, unsigned char, unsigned char);
	void Color3ubv(const unsigned char *);
	void Color4ub(unsigned char, unsigned char, unsigned char, unsigned char);
	void Color4ubv(const unsigned char *);
	unsigned int Color();
	RenderInputLayout_t GetLayout();
	VertexColorUVPos_t & operator=(const VertexColorUVPos_t &);

	// sizeof = 24
};

// src/game/public/scenesystem/vertexformat.h:554
struct VertexUVPosColorNormalAndTangent_t : public VertexColorUVPos_t {
public:

	VertexUVPosColorNormalAndTangent_t();
	void Normal(const Vector &);
	void Normal3f(float, float, float);
	void Normal3fv(const float *);
	void TangentBasis(Vector, Vector);
	void TangentBasis(const Vector4D &);
	const float * Normal();
	RenderInputLayout_t GetLayout();
	VertexUVPosColorNormalAndTangent_t & operator=(const VertexUVPosColorNormalAndTangent_t &);

	// sizeof = 52
};

// src/game/public/scenesystem/vertexformat.h:733
struct VertexWireFrame_t : public VertexPos_t {
public:

	VertexWireFrame_t();
	void Color3f(float, float, float);
	void Color3fv(const float *);
	void Color4f(float, float, float, float);
	void Color4fv(const float *);
	void Color3ub(unsigned char, unsigned char, unsigned char);
	void Color3ubv(const unsigned char *);
	void Color4ub(unsigned char, unsigned char, unsigned char, unsigned char);
	void Color4ubv(const unsigned char *);
	void Normal(const Vector &);
	void Normal3f(float, float, float);
	void Normal3fv(const float *);
	void StartPoint(const Vector &);
	unsigned int Color();
	const float * Normal();
	RenderInputLayout_t GetLayout();
	VertexWireFrame_t & operator=(const VertexWireFrame_t &);

	// sizeof = 40
};
