// Reconstructed from DWARF by pahole; not original source.

// src/game/public/meshutils/glview_buffer.h:22
struct GLViewLine_t {
	GLViewLine_t();

	// sizeof = 36
};

// src/game/public/meshutils/glview_buffer.h:29
struct GLViewPoly_t {
	GLViewPoly_t();

	// sizeof = 40
};

// src/game/public/meshutils/glview_buffer.h:35
struct GLViewPrimitiveList_t {
	GLViewPrimitiveList_t();

	// sizeof = 48
};

// src/game/public/meshutils/glview_buffer.h:41
class CGlViewBuffer : public CUtlBuffer {
public:

	CGlViewBuffer();
	void WriteVertex(const Vector &, float, float, float);
	void WriteBox(Vector *, float, float, float);
	void WriteBBox(const Vector &, const Vector &, float, float, float);
	void WriteOrientedBox(const Vector &, const Vector &, const CTransform &, float, float, float);
	void WriteOrientedBox(const Vector &, const Vector &, const VMatrix &, float, float, float);
	void WriteLine(const Vector &, const Vector &, float, float, float);
	void WriteSphere(const Vector &, float, float, float, float);
	void WriteDisc(const Vector &, const Vector &, const Vector &, float, float, float, float, int);
	void WriteDiscWireframe(const Vector &, const Vector &, const Vector &, float, float, float, float, int);
	void WritePolygon(const Vector *, int, float, float, float);
	void WritePolygon(const Vector *, const Vector *, int);
	void WritePolygonIndexed(const Vector *, const Vector *, const int *, int);
	void WritePolygonWireframe(const Vector *, int, float, float, float);
	void WriteKDTree(RayTracingEnvironment *, uint16, float, float, float);
	void WriteKDTree_HalfLambert(RayTracingEnvironment *, uint16, const Vector &, float, float, float);
	void WriteKDTreeMaterialColors(RayTracingEnvironment *, uint16, const Vector *, uint);
	bool ConvertToPrimitiveList(GLViewPrimitiveList_t &, CUtlString &);
	void WriteCMeshWireframe(const CMesh &, const CTransform &, float, float, float);
	void WriteSweptBox(const CTransform &, const Vector &, const Vector &, const Vector &, float, float, float);
	void WriteAmbientCube(const Vector &, float, Vector &, int, int);
	void WriteWireframePolyhedron(const CPolyhedron &, float, float, float);
	void WriteSolidPolyhedron(const CPolyhedron &, float, float, float);

	// sizeof = 80
};

// src/game/public/meshutils/glview_buffer.h:79
class CGeoViewBuffer : public CUtlBuffer {
public:

	CGeoViewBuffer();
	void WriteBox(Vector *, float, float, float);
	void WriteBBox(const Vector &, const Vector &, float, float, float);
	void WriteOrientedBox(const Vector &, const Vector &, const CTransform &, float, float, float);
	void WriteOrientedBox(const Vector &, const Vector &, const VMatrix &, float, float, float);
	void WriteLine(const Vector &, const Vector &, float, float, float);
	void WriteSphere(const Vector &, float, float, float, float);
	void WriteDisc(const Vector &, const Vector &, const Vector &, float, float, float, float, int);
	void WriteDiscWireframe(const Vector &, const Vector &, const Vector &, float, float, float, float, int);
	void WritePolygon(const Vector *, int, float, float, float);
	void WritePolygon(const Vector *, const Vector *, int);
	void WritePolygonIndexed(const Vector *, const Vector *, const int *, int);
	void WritePolygonWireframe(const Vector *, int, float, float, float);
	void WriteKDTree(RayTracingEnvironment *, uint16, float, float, float);
	void WriteKDTree_HalfLambert(RayTracingEnvironment *, uint16, const Vector &, float, float, float);
	void WriteKDTreeMaterialColors(RayTracingEnvironment *, uint16, const Vector *, uint);
	void WriteCMeshWireframe(const CMesh &, const CTransform &, float, float, float);
	void WriteSweptBox(const CTransform &, const Vector &, const Vector &, const Vector &, float, float, float);
	void WriteAmbientCube(const Vector &, float, Vector &, int, int);
	void WriteCamera(const CTransform &);
	void WriteText3D(const Vector &, const char *);

private:

	void WriteVertex(const Vector &, float, float, float);
	void WriteKDTreeAndChildren(RayTracingEnvironment *, uint16, IVertColorBase *);
	void WriteKDTree(RayTracingEnvironment *, const matrix3x4a_t &, uint16, IVertColorBase *);

	// sizeof = 80
};

// src/game/public/meshutils/glview_buffer.h:132
class CGeoViewVertex {
	CGeoViewVertex();
	void Serialize(CUtlBuffer &);
	void Unserialize(CUtlBuffer &);

	// sizeof = 16
};

// src/game/public/meshutils/glview_buffer.h:143
class CGeoViewLines {
	CGeoViewLines();
	void AddVert(const Vector &, float, float, float);
	size_t ByteCount();
	void Serialize(CUtlBuffer &);
	void Unserialize(CUtlBuffer &);
	~CGeoViewLines();

	// sizeof = 24
};

// src/game/public/meshutils/glview_buffer.h:155
class CGeoViewCamera {
	float m_flHorizontalFOV;  // +0x1c
	int m_nCameraId;  // +0x20
	CGeoViewCamera();
	size_t ByteCount();
	void Serialize(CUtlBuffer &);
	void Unserialize(CUtlBuffer &);

	// sizeof = 36
};

// src/game/public/meshutils/glview_buffer.h:168
class CGeoViewPolygon {
	CGeoViewPolygon();
	void AddVert(const Vector &, float, float, float);
	size_t ByteCount();
	void Serialize(CUtlBuffer &);
	void Unserialize(CUtlBuffer &);
	~CGeoViewPolygon();

	// sizeof = 24
};

// src/game/public/meshutils/glview_buffer.h:178
class CGeoViewText3D {
	const char * m_pText;  // +0x10
	CGeoViewText3D();
	CGeoViewText3D(const Vector &, const char *);
	size_t ByteCount();
	void Serialize(CUtlBuffer &);
	void Unserialize(CUtlBuffer &);

	// sizeof = 24
};
