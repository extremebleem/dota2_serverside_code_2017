// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_draw_game.h:26
class CNavDraw : public INavDraw {
public:

	CNavDraw(CNavDraw &);
	CNavDraw(const CNavDraw &);
	CNavDraw();

protected:

	virtual void DrawBox_Internal(const Vector &, const Vector &, int, int, int, int, bool, float);
	virtual void DrawLine_Internal(const Vector &, const Vector &, int, int, int, int, bool, float);
	virtual void DrawSphere_Internal(const Vector &, float, int, int, int, int, bool, float);
	virtual void DrawText_Internal(const Vector &, int, float, int, int, int, int, float64, const char *);

	// vtable[2] DrawBox_Internal
	// vtable[0] DrawLine_Internal
	// vtable[1] DrawSphere_Internal
	// vtable[3] DrawText_Internal
	// sizeof = 8
};

// src/game/server/nav_draw_game.h:55
class CNavDrawPoly {
	void DrawCrossline(const CNavPoly &, bool, Color, float, NavDrawZTest, const Vector &);
	void DrawVertHotspot(const CNavPoly &, int, Color);
	void DrawDragSelectionSet(const CNavPoly &, Color &);
	void DrawLineCore(const Vector &, const Vector &, Color, float, NavDrawZTest);
	void DrawTriangleCore(const Vector &, const Vector &, const Vector &, Color, float, NavDrawZTest);

	// sizeof = 1
};

// src/game/server/nav_draw_game.h:73
class CNavDrawArea : public INavDrawArea {
public:

	CNavDrawArea(CNavDrawArea &);
	CNavDrawArea(const CNavDrawArea &);
	CNavDrawArea();
	void DrawConnectedAreas(const CNavArea &, float);
	void DrawAreaConnection(const CNavArea &, const CNavArea &, NavEdgeIndex, NavEdgeIndex, int, int, float);

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

// src/game/server/nav_draw_game.h:94
class CNavDrawAreaExt : public CNavDrawArea {
public:

	CNavDrawAreaExt();

protected:

	virtual void DrawArea_Internal(const CNavArea &, float, NavEditColor);
	virtual void DrawGetColor_Internal(const CNavArea &, NavEditColor *, bool *);

	// vtable[3] DrawArea_Internal
	// vtable[4] DrawGetColor_Internal
	// sizeof = 8
};

// src/game/server/nav_draw_game.h:105
class CNavDrawLadder {
	void DrawLadder(const CNavLadder &);
	void DrawConnectedAreas(const CNavLadder &);

	// sizeof = 1
};

// src/game/server/nav_draw_game.h:116
class CNavDrawMesh : public INavDrawMesh {
public:

	CNavDrawMesh();

protected:

	virtual void DrawPlayerCounts_Internal(const CNavMesh &);
	virtual void DrawGridCellOutline_Internal(const CNavMesh &, int, int, float, float, const Color &, bool, float);
	virtual void DrawClearance_Internal(const CNavMesh &);

	// vtable[0] DrawPlayerCounts_Internal
	// vtable[1] DrawGridCellOutline_Internal
	// vtable[2] DrawClearance_Internal
	// sizeof = 8
};
