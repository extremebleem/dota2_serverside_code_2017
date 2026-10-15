// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_draw.h:95
class INavDraw {
	int ()() * * _vptr.INavDraw;  // +0x0
	static INavDraw * ms_pInst;
	INavDraw(INavDraw &);
	INavDraw(const INavDraw &);
	INavDraw();
	void DrawLine(const Vector &, const Vector &, int, int, int, int, bool, float);
	void DrawSphere(const Vector &, float, int, int, int, int, bool, float);
	void DrawBox(const Vector &, const Vector &, int, int, int, int, bool, float);
	void DrawText(const Vector &, int, float, int, int, int, int, float64, const char *);

protected:

	virtual void DrawLine_Internal(const Vector &, const Vector &, int, int, int, int, bool, float);
	virtual void DrawSphere_Internal(const Vector &, float, int, int, int, int, bool, float);
	virtual void DrawBox_Internal(const Vector &, const Vector &, int, int, int, int, bool, float);
	virtual void DrawText_Internal(const Vector &, int, float, int, int, int, int, float64, const char *);

	// vtable[0] DrawLine_Internal
	// vtable[1] DrawSphere_Internal
	// vtable[2] DrawBox_Internal
	// vtable[3] DrawText_Internal
	// sizeof = 8
};

// src/public/navlib/nav_draw.h:132
class INavDrawArea {
	int ()() * * _vptr.INavDrawArea;  // +0x0
	static INavDrawArea * ms_pInst;
	INavDrawArea(INavDrawArea &);
	INavDrawArea(const INavDrawArea &);
	INavDrawArea();
	void DrawPolyFilled(const CNavPoly &, Color, float, NavDrawZTest, const Vector &, float);
	void DrawPolyOutline(const CNavPoly &, Color, float, NavDrawZTest, const Vector &, float);
	void DrawPolyOutlineWithHullMargin(const CNavPoly &, float, Color, float, NavDrawZTest, const Vector &);
	void DrawArea(const CNavArea &, float, NavEditColor);

protected:

	virtual void DrawPolyFilled_Internal(const CNavPoly &, Color, float, NavDrawZTest, const Vector &, float);
	virtual void DrawPolyOutline_Internal(const CNavPoly &, Color, float, NavDrawZTest, const Vector &, float);
	virtual void DrawPolyOutlineWithHullMargin_Internal(const CNavPoly &, float, Color, float, NavDrawZTest, const Vector &);
	virtual void DrawArea_Internal(const CNavArea &, float, NavEditColor);
	virtual void DrawGetColor_Internal(const CNavArea &, NavEditColor *, bool *);

	// vtable[0] DrawPolyFilled_Internal
	// vtable[1] DrawPolyOutline_Internal
	// vtable[2] DrawPolyOutlineWithHullMargin_Internal
	// vtable[3] DrawArea_Internal
	// vtable[4] DrawGetColor_Internal
	// sizeof = 8
};

// src/public/navlib/nav_draw.h:174
class INavDrawMesh {
	int ()() * * _vptr.INavDrawMesh;  // +0x0
	static INavDrawMesh * ms_pInst;
	INavDrawMesh(INavDrawMesh &);
	INavDrawMesh(const INavDrawMesh &);
	INavDrawMesh();
	void DrawPlayerCounts(const CNavMesh &);
	void DrawGridCellOutline(const CNavMesh &, int, int, float, float, const Color &, bool, float);
	void DrawClearance(const CNavMesh &);

protected:

	virtual void DrawPlayerCounts_Internal(const CNavMesh &);
	virtual void DrawGridCellOutline_Internal(const CNavMesh &, int, int, float, float, const Color &, bool, float);
	virtual void DrawClearance_Internal(const CNavMesh &);

	// vtable[0] DrawPlayerCounts_Internal
	// vtable[1] DrawGridCellOutline_Internal
	// vtable[2] DrawClearance_Internal
	// sizeof = 8
};
