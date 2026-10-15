// Reconstructed from DWARF by pahole; not original source.

// src/public/scenesystem/isceneviewdebugoverlays.h:49
class ISceneViewDebugOverlays {
	struct {
		bool bNoDepthTest;  // +0x0

		float flDuration;  // +0x4

		// sizeof = 8
	};

	int ()() * * _vptr.ISceneViewDebugOverlays;  // +0x0
private:

	struct {
		bool bNoDepthTest;  // +0xc

		float flDuration;  // +0x10
	} m_BatchedSettings;
	ISceneViewDebugOverlays();
	virtual bool IsEmpty();
	virtual void Clear();
	virtual void AddDebugOverlaysBegin();
	virtual void AddDebugOverlaysEnd();
	virtual void SetOverlayStartTime(float);
	virtual float GetOverlayStartTime();
	virtual void AddToViewAndAgeList(ISceneView *, float, float);
	virtual void SetMinimumOverlayLifetime(float);
	virtual float GetMinimumOverlayLifetime();
	virtual void SetDefaultColor(const VertexColor_t &);
	virtual VertexColor_t GetDefaultColor();
	virtual void SetDebugOverlayRenderType(DebugRenderType_t);
	virtual DebugRenderType_t GetDebugOverlayRenderType();
	virtual void Line(const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	void Line(const Vector &, const Vector &, int, int, int, bool, float64);
	void Line(const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void Line2D(const Vector2D &, const Vector2D &, const VertexColor_t &, float64);
	void Line2D(const Vector2D &, const Vector2D &, int, int, int, int, float64);
	virtual void BoxAngles(const Vector &, const Vector &, const Vector &, const Quaternion &, const VertexColor_t &, bool, float64);
	void Box(const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	void Box(const Vector &, const Vector &, int, int, int, int, bool, float64);
	void Box(const Vector &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	void BoxAngles(const Vector &, const Vector &, const Vector &, const Quaternion &, int, int, int, int, bool, float64);
	void BoxAngles(const Vector &, const Vector &, const Vector &, const QAngle &, int, int, int, int, bool, float64);
	void BoxAngles(const matrix3x4_t &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void SolidBoxAngles(const Vector &, const Vector &, const Vector &, const Quaternion &, const VertexColor_t &, bool, float64);
	void SolidBoxAngles(const matrix3x4_t &, const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	virtual void Frustum(const CFrustum &, const VertexColor_t &, float64);
	virtual void Sphere(const matrix3x4_t &, float, const VertexColor_t &, bool, float64);
	void Sphere(const Vector &, float, const VertexColor_t &, bool, float64);
	void Sphere(const Vector &, float, int, int, int, bool, float64);
	void Sphere(const Vector &, float, int, int, int, int, bool, float64);
	virtual void Capsule(const matrix3x4_t &, float, float, const VertexColor_t &, bool, float64);
	virtual void Capsule(const Vector &, const Vector &, float, const VertexColor_t &, bool, float64);
	void Capsule(const Vector &, const QAngle &, float, float, int, int, int, int, bool, float64);
	void Capsule(const Vector &, const Quaternion &, float, float, int, int, int, int, bool, float64);
	virtual void Texture(HRenderTexture, const Rect_t &, const VertexColor_t &, const Vector2D &, const Vector2D &, float64);
	void Texture(HRenderTexture, const RenderViewport_t &);
	virtual void VectorText3D(const Vector &, const Vector &, const Vector &, const char *, const VertexColor_t &, bool, float64);
	void VectorText3D(const Vector &, const Vector &, const Vector &, const VertexColor_t &, bool, float64, const char *, ...);
	void VectorText3D(const Vector &, const Quaternion &, int, int, int, int, bool, float64, const char *, ...);
	void VectorText3D(const CFrustum &, const Vector &, float, const VertexColor_t &, bool, float64, const char *, ...);
	virtual void Text(const Vector2D &, int, const char *, float, const VertexColor_t &, float64);
	void Text(const Vector2D &, float, const VertexColor_t &, const char *, ...);
	void ScreenText(float, float, const char *, int, int, int, int, float64);
	void ScreenTextOffset(float, float, int, const char *, int, int, int, int, float64);
	virtual void TextWithFont(const Vector2D &, int, const char *, float, const VertexColor_t &, bool, bool, FontHandle_t, float64);
	virtual void Text(const Vector &, int, const char *, float, const VertexColor_t &, float64);
	void Text(const Vector &, int, float, int, int, int, int, float64, const char *, ...);
	void Text(const Vector &, const char *, float64);
	void Text(const Vector &, float64, const char *, ...);
	void EntityTextAtPosition(const Vector &, int, const char *, float64, int, int, int, int);
	virtual void FilledRect2D(const Rect_t &, const VertexColor_t &, float64);
	virtual void Axis(const matrix3x4_t &, float, bool, float64);
	void Axis(const CTransform &, float, bool, float64);
	void Axis(const Vector &, const QAngle &, float, bool, float64);
	void Axis(const Vector &, const Quaternion &, float, bool, float64);
	virtual void Cross(const Vector &, float, const VertexColor_t &, bool, float64);
	void Cross(const Vector &, float, int, int, int, bool, float64);
	void Cross(const Vector &, float, int, int, int, int, bool, float64);
	virtual void Cross3D(const Vector &, const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	void Cross3D(const Vector &, const Vector &, const Vector &, int, int, int, bool, float64);
	void Cross3D(const Vector &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	void Cross3D(const Vector &, float, int, int, int, bool, float64);
	void Cross3D(const Vector &, float, int, int, int, int, bool, float64);
	virtual void Cross3DOriented(const Vector &, const Vector &, const Vector &, const Vector &, float, const VertexColor_t &, const VertexColor_t &, const VertexColor_t &, bool, float64);
	void Cross3DOriented(const matrix3x4_t &, float, const VertexColor_t &, const VertexColor_t &, const VertexColor_t &, bool, float64);
	void Cross3DOriented(const matrix3x4_t &, float, int, bool, float64);
	void Cross3DOriented(const Vector &, const QAngle &, float, int, int, int, int, bool, float64);
	void Cross3DOriented(const Vector &, const QAngle &, float, int, int, int, bool, float64);
	void Cross3DOriented(const Vector &, const Quaternion &, float, int, int, int, int, bool, float64);
	virtual void Triangle(const Vector &, const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	void Triangle(const Vector &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void Circle(const Vector &, float, const VertexColor_t &, bool, float64);
	void Circle(const Vector &, float, int, int, int, int, bool, float64);
	virtual void Circle(const Vector &, const Vector &, const Vector &, float, const VertexColor_t &, bool, float64);
	void Circle(const Vector &, const Vector &, const Vector &, float, int, int, int, int, bool, float64);
	void Circle(const Vector &, const Quaternion &, float, int, int, int, int, bool, float64);
	void Circle(const Vector &, const QAngle &, float, int, int, int, int, bool, float64);
	virtual void HorzArrow(const Vector &, const Vector &, float, const VertexColor_t &, bool, float64);
	void HorzArrow(const Vector &, const Vector &, float, int, int, int, int, bool, float64);
	virtual void YawArrow(const Vector &, float, float, float, const VertexColor_t &, bool, float64);
	void YawArrow(const Vector &, float, float, float, int, int, int, int, bool, float64);
	virtual void VertArrow(const Vector &, const Vector &, float, const VertexColor_t &, bool, float64);
	void VertArrow(const Vector &, const Vector &, float, int, int, int, int, bool, float64);
	virtual void Cone(const Vector &, const Vector &, float, float, const VertexColor_t &, bool, float64);
	void Cone(const Vector &, const Vector &, float, float, int, int, int, int, bool, float64);
	virtual void SolidCone(const Vector &, const Vector &, float, float, const VertexColor_t &, bool, float64);
	void SolidCone(const Vector &, const Vector &, float, float, int, int, int, int, bool, float64);
	virtual void ScreenMessage(const char *, float64, VertexColor_t);
	virtual void Grid(const Vector &);
	virtual bool IsGridVisible();
	virtual void HideGrid();
	virtual void DrawTickMarkedLine(const Vector &, const Vector &, float, int, const VertexColor_t &, bool, float64);
	void DrawTickMarkedLine(const Vector &, const Vector &, float, int, int, int, int, bool, float64);
	void DrawTickMarkedLine(const Vector &, const Vector &, float, int, int, int, int, int, bool, float64);
	virtual void SweptBox(const Vector &, const Vector &, const Vector &, const Vector &, const Quaternion &, const VertexColor_t &, float64);
	void SweptBox(const Vector &, const Vector &, const Vector &, const Vector &, const QAngle &, int, int, int, int, float64);
	void SweptBox(const Vector &, const Vector &, const Vector &, const Vector &, const Quaternion &, int, int, int, int, float64);
	virtual void AddEntityTextOverlay(int, int, float64, int, int, int, int, const char *, ...);
	virtual void AddBoxOverlay(const Vector &, const Vector &, const Vector &, const QAngle &, int, int, int, int, float64);
	void AddBoxOverlay(const matrix3x4_t &, const Vector &, const Vector &, int, int, int, int, float64);
	virtual void AddBoxOverlay2(const Vector &, const Vector &, const Vector &, const QAngle &, const Color &, const Color &, float64);
	virtual void AddSphereOverlay(const Vector &, float, int, int, int, int, int, int, float64, bool);
	virtual void AddTriangleOverlay(const Vector &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void AddLineOverlay(const Vector &, const Vector &, int, int, int, bool, float64);
	virtual void AddLineOverlay(const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void AddLineOverlayAlpha(const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void AddTextOverlay(const Vector &, float64, const char *, ...);
	virtual void AddTextOverlay(const Vector &, int, float64, const char *, ...);
	virtual void AddTextOverlay(const Vector &, float64, float, const char *);
	virtual void AddTextOverlay(const Vector &, int, float64, float, const char *);
	virtual void AddTextOverlay(const Vector &, int, float64, float, float, float, float, const char *);
	virtual void AddTextOverlayRGB(const Vector &, int, float64, float, float, float, float, const char *, ...);
	virtual void AddTextOverlayRGB(const Vector &, int, float64, int, int, int, int, const char *, ...);
	virtual void AddScreenTextOverlay(float, float, int, float64, int, int, int, int, const char *);
	virtual void AddScreenTextOverlay(float, float, float64, int, int, int, int, const char *);
	virtual void AddScreenTextOverlayOffset(float, float, int, float64, int, int, int, int, const char *);
	virtual void AddSweptBoxOverlay(const Vector &, const Vector &, const Vector &, const Vector &, const QAngle &, int, int, int, int, float64);
	virtual void AddGridOverlay(const Vector &);
	virtual void AddCoordFrameOverlay(const matrix3x4_t &, float, int *);
	virtual void AddCircleOverlay(const Vector &, float, int, int, int, int, bool, float64);
	virtual int ScreenPosition(const Vector &, Vector &);
	virtual int ScreenPosition(float, float, Vector &);
	virtual void AddDebugSceneObject(CSceneObject *, float64);
	virtual void PushDebugOverlayScope(CUtlStringToken);
	virtual void PopDebugOverlayScope();
	virtual void RemoveAllInScope(CUtlStringToken);
	virtual ISceneWorld * GetDebugSceneWorld();
	virtual void AddToView(ISceneView *, float);
	virtual void AgeList(float, float);
	virtual void UnitTestCycleOverlayRenderType();
	void BeginBatchedLines(bool, float);
	void AddBatchedLine(const Vector &, const Vector &, int, int, int, int);
	void AddBatchedBox(const Vector &, const Vector &, int, int, int, int);
	void AddBatchedTriAxis(const Vector &, float, int, int, int, int);
	void EndBatchedLines();
	void BeginBatchedTriangles(bool, float);
	void AddBatchedTriangle(const Vector &, const Vector &, const Vector &, int, int, int, int);
	void EndBatchedTriangles();

	// vtable[0] IsEmpty
	// vtable[1] Clear
	// vtable[2] AddDebugOverlaysBegin
	// vtable[3] AddDebugOverlaysEnd
	// vtable[4] SetOverlayStartTime
	// vtable[5] GetOverlayStartTime
	// vtable[6] AddToViewAndAgeList
	// vtable[7] SetMinimumOverlayLifetime
	// vtable[8] GetMinimumOverlayLifetime
	// vtable[9] SetDefaultColor
	// vtable[10] GetDefaultColor
	// vtable[11] SetDebugOverlayRenderType
	// vtable[12] GetDebugOverlayRenderType
	// vtable[13] Line
	// vtable[14] Line2D
	// vtable[15] BoxAngles
	// vtable[16] SolidBoxAngles
	// vtable[17] Frustum
	// vtable[18] Sphere
	// vtable[19] Capsule
	// vtable[20] Capsule
	// vtable[21] Texture
	// vtable[22] VectorText3D
	// vtable[23] Text
	// vtable[24] TextWithFont
	// vtable[25] Text
	// vtable[26] FilledRect2D
	// vtable[27] Axis
	// vtable[28] Cross
	// vtable[29] Cross3D
	// vtable[30] Cross3DOriented
	// vtable[31] Triangle
	// vtable[32] Circle
	// vtable[33] Circle
	// vtable[34] HorzArrow
	// vtable[35] YawArrow
	// vtable[36] VertArrow
	// vtable[37] Cone
	// vtable[38] SolidCone
	// vtable[39] ScreenMessage
	// vtable[40] Grid
	// vtable[41] IsGridVisible
	// vtable[42] HideGrid
	// vtable[43] DrawTickMarkedLine
	// vtable[44] SweptBox
	// vtable[45] AddEntityTextOverlay
	// vtable[46] AddBoxOverlay
	// vtable[47] AddBoxOverlay2
	// vtable[48] AddSphereOverlay
	// vtable[49] AddTriangleOverlay
	// vtable[50] AddLineOverlay
	// vtable[51] AddLineOverlay
	// vtable[52] AddLineOverlayAlpha
	// vtable[53] AddTextOverlay
	// vtable[54] AddTextOverlay
	// vtable[55] AddTextOverlay
	// vtable[56] AddTextOverlay
	// vtable[57] AddTextOverlay
	// vtable[58] AddTextOverlayRGB
	// vtable[59] AddTextOverlayRGB
	// vtable[60] AddScreenTextOverlay
	// vtable[61] AddScreenTextOverlay
	// vtable[62] AddScreenTextOverlayOffset
	// vtable[63] AddSweptBoxOverlay
	// vtable[64] AddGridOverlay
	// vtable[65] AddCoordFrameOverlay
	// vtable[66] AddCircleOverlay
	// vtable[67] ScreenPosition
	// vtable[68] ScreenPosition
	// vtable[69] AddDebugSceneObject
	// vtable[70] PushDebugOverlayScope
	// vtable[71] PopDebugOverlayScope
	// vtable[72] RemoveAllInScope
	// vtable[73] GetDebugSceneWorld
	// vtable[74] AddToView
	// vtable[75] AgeList
	// vtable[76] UnitTestCycleOverlayRenderType
	// sizeof = 24
};

// src/public/scenesystem/isceneviewdebugoverlays.h:49
class ISceneViewDebugOverlays {
	struct {
		bool bNoDepthTest;  // +0x0

		float flDuration;  // +0x4

		// sizeof = 8
	};

	int ()() * * _vptr.ISceneViewDebugOverlays;  // +0x0
private:

	struct {
		bool bNoDepthTest;  // +0xc

		float flDuration;  // +0x10
	} m_BatchedSettings;
	ISceneViewDebugOverlays(ISceneViewDebugOverlays &);
	ISceneViewDebugOverlays(const ISceneViewDebugOverlays &);
	ISceneViewDebugOverlays();
	virtual bool IsEmpty();
	virtual void Clear();
	virtual void AddDebugOverlaysBegin();
	virtual void AddDebugOverlaysEnd();
	virtual void SetOverlayStartTime(float);
	virtual float GetOverlayStartTime();
	virtual void AddToViewAndAgeList(ISceneView *, float, float);
	virtual void SetMinimumOverlayLifetime(float);
	virtual float GetMinimumOverlayLifetime();
	virtual void SetDefaultColor(const VertexColor_t &);
	virtual VertexColor_t GetDefaultColor();
	virtual void SetDebugOverlayRenderType(DebugRenderType_t);
	virtual DebugRenderType_t GetDebugOverlayRenderType();
	virtual void Line(const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	void Line(const Vector &, const Vector &, int, int, int, bool, float64);
	void Line(const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void Line2D(const Vector2D &, const Vector2D &, const VertexColor_t &, float64);
	void Line2D(const Vector2D &, const Vector2D &, int, int, int, int, float64);
	virtual void BoxAngles(const Vector &, const Vector &, const Vector &, const Quaternion &, const VertexColor_t &, bool, float64);
	void Box(const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	void Box(const Vector &, const Vector &, int, int, int, int, bool, float64);
	void Box(const Vector &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	void BoxAngles(const Vector &, const Vector &, const Vector &, const Quaternion &, int, int, int, int, bool, float64);
	void BoxAngles(const Vector &, const Vector &, const Vector &, const QAngle &, int, int, int, int, bool, float64);
	void BoxAngles(const matrix3x4_t &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void SolidBoxAngles(const Vector &, const Vector &, const Vector &, const Quaternion &, const VertexColor_t &, bool, float64);
	void SolidBoxAngles(const matrix3x4_t &, const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	virtual void Frustum(const CFrustum &, const VertexColor_t &, float64);
	virtual void Sphere(const matrix3x4_t &, float, const VertexColor_t &, bool, float64);
	void Sphere(const Vector &, float, const VertexColor_t &, bool, float64);
	void Sphere(const Vector &, float, int, int, int, bool, float64);
	void Sphere(const Vector &, float, int, int, int, int, bool, float64);
	virtual void Capsule(const matrix3x4_t &, float, float, const VertexColor_t &, bool, float64);
	virtual void Capsule(const Vector &, const Vector &, float, const VertexColor_t &, bool, float64);
	void Capsule(const Vector &, const QAngle &, float, float, int, int, int, int, bool, float64);
	void Capsule(const Vector &, const Quaternion &, float, float, int, int, int, int, bool, float64);
	virtual void Texture(HRenderTexture, const Rect_t &, const VertexColor_t &, const Vector2D &, const Vector2D &, float64);
	void Texture(HRenderTexture, const RenderViewport_t &);
	virtual void VectorText3D(const Vector &, const Vector &, const Vector &, const char *, const VertexColor_t &, bool, float64);
	void VectorText3D(const Vector &, const Vector &, const Vector &, const VertexColor_t &, bool, float64, const char *, ...);
	void VectorText3D(const Vector &, const Quaternion &, int, int, int, int, bool, float64, const char *, ...);
	void VectorText3D(const CFrustum &, const Vector &, float, const VertexColor_t &, bool, float64, const char *, ...);
	virtual void Text(const Vector2D &, int, const char *, float, const VertexColor_t &, float64);
	void Text(const Vector2D &, float, const VertexColor_t &, const char *, ...);
	void ScreenText(float, float, const char *, int, int, int, int, float64);
	void ScreenTextOffset(float, float, int, const char *, int, int, int, int, float64);
	virtual void TextWithFont(const Vector2D &, int, const char *, float, const VertexColor_t &, bool, bool, FontHandle_t, float64);
	virtual void Text(const Vector &, int, const char *, float, const VertexColor_t &, float64);
	void Text(const Vector &, int, float, int, int, int, int, float64, const char *, ...);
	void Text(const Vector &, const char *, float64);
	void Text(const Vector &, float64, const char *, ...);
	void EntityTextAtPosition(const Vector &, int, const char *, float64, int, int, int, int);
	virtual void FilledRect2D(const Rect_t &, const VertexColor_t &, float64);
	virtual void Axis(const matrix3x4_t &, float, bool, float64);
	void Axis(const CTransform &, float, bool, float64);
	void Axis(const Vector &, const QAngle &, float, bool, float64);
	void Axis(const Vector &, const Quaternion &, float, bool, float64);
	virtual void Cross(const Vector &, float, const VertexColor_t &, bool, float64);
	void Cross(const Vector &, float, int, int, int, bool, float64);
	void Cross(const Vector &, float, int, int, int, int, bool, float64);
	virtual void Cross3D(const Vector &, const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	void Cross3D(const Vector &, const Vector &, const Vector &, int, int, int, bool, float64);
	void Cross3D(const Vector &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	void Cross3D(const Vector &, float, int, int, int, bool, float64);
	void Cross3D(const Vector &, float, int, int, int, int, bool, float64);
	virtual void Cross3DOriented(const Vector &, const Vector &, const Vector &, const Vector &, float, const VertexColor_t &, const VertexColor_t &, const VertexColor_t &, bool, float64);
	void Cross3DOriented(const matrix3x4_t &, float, const VertexColor_t &, const VertexColor_t &, const VertexColor_t &, bool, float64);
	void Cross3DOriented(const matrix3x4_t &, float, int, bool, float64);
	void Cross3DOriented(const Vector &, const QAngle &, float, int, int, int, int, bool, float64);
	void Cross3DOriented(const Vector &, const QAngle &, float, int, int, int, bool, float64);
	void Cross3DOriented(const Vector &, const Quaternion &, float, int, int, int, int, bool, float64);
	virtual void Triangle(const Vector &, const Vector &, const Vector &, const VertexColor_t &, bool, float64);
	void Triangle(const Vector &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void Circle(const Vector &, float, const VertexColor_t &, bool, float64);
	void Circle(const Vector &, float, int, int, int, int, bool, float64);
	virtual void Circle(const Vector &, const Vector &, const Vector &, float, const VertexColor_t &, bool, float64);
	void Circle(const Vector &, const Vector &, const Vector &, float, int, int, int, int, bool, float64);
	void Circle(const Vector &, const Quaternion &, float, int, int, int, int, bool, float64);
	void Circle(const Vector &, const QAngle &, float, int, int, int, int, bool, float64);
	virtual void HorzArrow(const Vector &, const Vector &, float, const VertexColor_t &, bool, float64);
	void HorzArrow(const Vector &, const Vector &, float, int, int, int, int, bool, float64);
	virtual void YawArrow(const Vector &, float, float, float, const VertexColor_t &, bool, float64);
	void YawArrow(const Vector &, float, float, float, int, int, int, int, bool, float64);
	virtual void VertArrow(const Vector &, const Vector &, float, const VertexColor_t &, bool, float64);
	void VertArrow(const Vector &, const Vector &, float, int, int, int, int, bool, float64);
	virtual void Cone(const Vector &, const Vector &, float, float, const VertexColor_t &, bool, float64);
	void Cone(const Vector &, const Vector &, float, float, int, int, int, int, bool, float64);
	virtual void SolidCone(const Vector &, const Vector &, float, float, const VertexColor_t &, bool, float64);
	void SolidCone(const Vector &, const Vector &, float, float, int, int, int, int, bool, float64);
	virtual void ScreenMessage(const char *, float64, VertexColor_t);
	virtual void Grid(const Vector &);
	virtual bool IsGridVisible();
	virtual void HideGrid();
	virtual void DrawTickMarkedLine(const Vector &, const Vector &, float, int, const VertexColor_t &, bool, float64);
	void DrawTickMarkedLine(const Vector &, const Vector &, float, int, int, int, int, bool, float64);
	void DrawTickMarkedLine(const Vector &, const Vector &, float, int, int, int, int, int, bool, float64);
	virtual void SweptBox(const Vector &, const Vector &, const Vector &, const Vector &, const Quaternion &, const VertexColor_t &, float64);
	void SweptBox(const Vector &, const Vector &, const Vector &, const Vector &, const QAngle &, int, int, int, int, float64);
	void SweptBox(const Vector &, const Vector &, const Vector &, const Vector &, const Quaternion &, int, int, int, int, float64);
	virtual void AddEntityTextOverlay(int, int, float64, int, int, int, int, const char *, ...);
	virtual void AddBoxOverlay(const Vector &, const Vector &, const Vector &, const QAngle &, int, int, int, int, float64);
	void AddBoxOverlay(const matrix3x4_t &, const Vector &, const Vector &, int, int, int, int, float64);
	virtual void AddBoxOverlay2(const Vector &, const Vector &, const Vector &, const QAngle &, const Color &, const Color &, float64);
	virtual void AddSphereOverlay(const Vector &, float, int, int, int, int, int, int, float64, bool);
	virtual void AddTriangleOverlay(const Vector &, const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void AddLineOverlay(const Vector &, const Vector &, int, int, int, bool, float64);
	virtual void AddLineOverlay(const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void AddLineOverlayAlpha(const Vector &, const Vector &, int, int, int, int, bool, float64);
	virtual void AddTextOverlay(const Vector &, float64, const char *, ...);
	virtual void AddTextOverlay(const Vector &, int, float64, const char *, ...);
	virtual void AddTextOverlay(const Vector &, float64, float, const char *);
	virtual void AddTextOverlay(const Vector &, int, float64, float, const char *);
	virtual void AddTextOverlay(const Vector &, int, float64, float, float, float, float, const char *);
	virtual void AddTextOverlayRGB(const Vector &, int, float64, float, float, float, float, const char *, ...);
	virtual void AddTextOverlayRGB(const Vector &, int, float64, int, int, int, int, const char *, ...);
	virtual void AddScreenTextOverlay(float, float, int, float64, int, int, int, int, const char *);
	virtual void AddScreenTextOverlay(float, float, float64, int, int, int, int, const char *);
	virtual void AddScreenTextOverlayOffset(float, float, int, float64, int, int, int, int, const char *);
	virtual void AddSweptBoxOverlay(const Vector &, const Vector &, const Vector &, const Vector &, const QAngle &, int, int, int, int, float64);
	virtual void AddGridOverlay(const Vector &);
	virtual void AddCoordFrameOverlay(const matrix3x4_t &, float, int *);
	virtual void AddCircleOverlay(const Vector &, float, int, int, int, int, bool, float64);
	virtual int ScreenPosition(const Vector &, Vector &);
	virtual int ScreenPosition(float, float, Vector &);
	virtual void AddDebugSceneObject(CSceneObject *, float64);
	virtual void PushDebugOverlayScope(CUtlStringToken);
	virtual void PopDebugOverlayScope();
	virtual void RemoveAllInScope(CUtlStringToken);
	virtual ISceneWorld * GetDebugSceneWorld();
	virtual void AddToView(ISceneView *, float);
	virtual void AgeList(float, float);
	virtual void UnitTestCycleOverlayRenderType();
	void BeginBatchedLines(bool, float);
	void AddBatchedLine(const Vector &, const Vector &, int, int, int, int);
	void AddBatchedBox(const Vector &, const Vector &, int, int, int, int);
	void AddBatchedTriAxis(const Vector &, float, int, int, int, int);
	void EndBatchedLines();
	void BeginBatchedTriangles(bool, float);
	void AddBatchedTriangle(const Vector &, const Vector &, const Vector &, int, int, int, int);
	void EndBatchedTriangles();

	// vtable[0] IsEmpty
	// vtable[1] Clear
	// vtable[2] AddDebugOverlaysBegin
	// vtable[3] AddDebugOverlaysEnd
	// vtable[4] SetOverlayStartTime
	// vtable[5] GetOverlayStartTime
	// vtable[6] AddToViewAndAgeList
	// vtable[7] SetMinimumOverlayLifetime
	// vtable[8] GetMinimumOverlayLifetime
	// vtable[9] SetDefaultColor
	// vtable[10] GetDefaultColor
	// vtable[11] SetDebugOverlayRenderType
	// vtable[12] GetDebugOverlayRenderType
	// vtable[13] Line
	// vtable[14] Line2D
	// vtable[15] BoxAngles
	// vtable[16] SolidBoxAngles
	// vtable[17] Frustum
	// vtable[18] Sphere
	// vtable[19] Capsule
	// vtable[20] Capsule
	// vtable[21] Texture
	// vtable[22] VectorText3D
	// vtable[23] Text
	// vtable[24] TextWithFont
	// vtable[25] Text
	// vtable[26] FilledRect2D
	// vtable[27] Axis
	// vtable[28] Cross
	// vtable[29] Cross3D
	// vtable[30] Cross3DOriented
	// vtable[31] Triangle
	// vtable[32] Circle
	// vtable[33] Circle
	// vtable[34] HorzArrow
	// vtable[35] YawArrow
	// vtable[36] VertArrow
	// vtable[37] Cone
	// vtable[38] SolidCone
	// vtable[39] ScreenMessage
	// vtable[40] Grid
	// vtable[41] IsGridVisible
	// vtable[42] HideGrid
	// vtable[43] DrawTickMarkedLine
	// vtable[44] SweptBox
	// vtable[45] AddEntityTextOverlay
	// vtable[46] AddBoxOverlay
	// vtable[47] AddBoxOverlay2
	// vtable[48] AddSphereOverlay
	// vtable[49] AddTriangleOverlay
	// vtable[50] AddLineOverlay
	// vtable[51] AddLineOverlay
	// vtable[52] AddLineOverlayAlpha
	// vtable[53] AddTextOverlay
	// vtable[54] AddTextOverlay
	// vtable[55] AddTextOverlay
	// vtable[56] AddTextOverlay
	// vtable[57] AddTextOverlay
	// vtable[58] AddTextOverlayRGB
	// vtable[59] AddTextOverlayRGB
	// vtable[60] AddScreenTextOverlay
	// vtable[61] AddScreenTextOverlay
	// vtable[62] AddScreenTextOverlayOffset
	// vtable[63] AddSweptBoxOverlay
	// vtable[64] AddGridOverlay
	// vtable[65] AddCoordFrameOverlay
	// vtable[66] AddCircleOverlay
	// vtable[67] ScreenPosition
	// vtable[68] ScreenPosition
	// vtable[69] AddDebugSceneObject
	// vtable[70] PushDebugOverlayScope
	// vtable[71] PopDebugOverlayScope
	// vtable[72] RemoveAllInScope
	// vtable[73] GetDebugSceneWorld
	// vtable[74] AddToView
	// vtable[75] AgeList
	// vtable[76] UnitTestCycleOverlayRenderType
	// sizeof = 24
};

// src/public/scenesystem/isceneviewdebugoverlays.h:299
class CDebugOverlayScope {
private:

	CDebugOverlayScope(ISceneViewDebugOverlays *, CUtlStringToken, bool);
	CDebugOverlayScope(ISceneViewDebugOverlays *, const char *, bool);
	~CDebugOverlayScope();
	void Init(ISceneViewDebugOverlays *, CUtlStringToken, bool);

	// sizeof = 16
};
