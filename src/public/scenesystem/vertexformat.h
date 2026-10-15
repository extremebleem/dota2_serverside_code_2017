// Reconstructed from DWARF by pahole; not original source.

// src/public/scenesystem/vertexformat.h:92
struct VertexPos_t : public CBaseVertex {
public:

	VertexPos_t();
	void Position(const Vector &);
	void Position3f(float, float, float);
	void Position3fv(const float *);
	float * Position();
	Vector GetPosition();
	RenderInputLayout_t GetLayout();
	VertexPos_t & operator=(const VertexPos_t &);

	// sizeof = 12
};

// src/public/scenesystem/vertexformat.h:149
struct VertexColorPos_t : public VertexPos_t {
public:

	VertexColorPos_t();
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
	VertexColorPos_t & operator=(const VertexColorPos_t &);

	// sizeof = 16
};
