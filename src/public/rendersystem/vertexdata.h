// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/vertexdata.h:21
class CBaseVertex {
	void Position(const Vector &);
	void Position3f(float, float, float);
	void Position3fv(const float *);
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
	void Color(const VertexColor_t &);
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
	void TangentBasis(Vector, Vector);
	void TangentS(const Vector &);
	void TangentT(const Vector &);
	void TangentS3f(float, float, float);
	void TangentS3fv(const float *);
	void TangentT3f(float, float, float);
	void TangentT3fv(const float *);
	void TangentBasis(const Vector4D &);
	RenderInputLayout_t GetLayout();
	CBaseVertex();

	// sizeof = 1
};
