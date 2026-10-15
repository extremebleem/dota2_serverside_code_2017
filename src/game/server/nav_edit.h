// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_edit.h:20
class CNavEditor : public INavEditor {
public:

protected:

	const CNavMesh & m_rNavMesh;  // +0x8
	bool m_bIsEditing;  // +0x10

	Place m_EditNavPlace;  // +0x3c
	bool m_bClimbableSurface;  // +0x4c

	bool m_bSplitAlongX;  // +0x9c

	float m_flSplitEdge;  // +0xa0

	bool m_bIsPlacePainting;  // +0x10c

	bool m_bIsContinuouslySelecting;  // +0x140
	bool m_bIsContinuouslyDeselecting;  // +0x141
	bool m_bIsDragDeselecting;  // +0x142

	int m_nDragSelectionVolumeZMax;  // +0x144
	int m_nDragSelectionVolumeZMin;  // +0x148
	~CNavEditor();
	CNavEditor(CNavEditor &);
	CNavEditor(const CNavEditor &);
	CNavEditor(CNavMesh &);
	virtual void OnNavMeshDestroy();
	virtual void Update();
	virtual void Reset(bool, bool);
	virtual void RemoveInvalid();
	virtual EditModeType GetEditMode();
	virtual void ClearAreas();
	virtual void ClearLadders();
	virtual void ClearMarks();
	void SetEditMode(EditModeType);
	bool IsEditMode(EditModeType);
	void DrawEditMode();
	void ClearCorner();
	void OnEditModeStart();
	void OnEditModeEnd();
	void CommandNavMark(const CCommandContext &, const CCommand &);
	void CommandNavMarkWalkable();
	void CommandNavUnmark();
	void CommandNavTogglePlaceMode();
	void CommandNavDelete();
	void CommandNavDeleteMarked();
	void CommandNavSplit();
	void CommandNavSplitAA();
	void CommandNavMerge();
	void CommandNavToggleSelectionSet();
	void CommandNavRaiseDragVolumeMax();
	void CommandNavLowerDragVolumeMax();
	void CommandNavRaiseDragVolumeMin();
	void CommandNavLowerDragVolumeMin();
	void CommandNavBuildLadder();
	void CommandNavStoreSelectionSet();
	void CommandNavRecallSelectionSet();
	void CommandNavAddToSelectionSet();
	void CommandNavAddToSelectionSetByID(const CCommandContext &, const CCommand &);
	void CommandNavRemoveFromSelectionSet();
	void CommandNavToggleInSelectionSet();
	void CommandNavClearSelectionSet();
	void CommandNavBeginSelecting();
	void CommandNavEndSelecting();
	void CommandNavBeginDragSelecting();
	void CommandNavEndDragSelecting();
	void CommandNavBeginDragDeselecting();
	void CommandNavEndDragDeselecting();
	void CommandNavToggleSelecting(bool);
	void CommandNavBeginDeselecting();
	void CommandNavEndDeselecting();
	void CommandNavToggleDeselecting(bool);
	void CommandNavSelectBlockedAreas();
	void CommandNavSelectObstructedAreas();
	void CommandNavSelectHalfSpace(const CCommandContext &, const CCommand &);
	void CommandNavSelectStairs();
	void CommandNavBeginShiftXY();
	void CommandNavEndShiftXY();
	void CommandNavBeginArea();
	void CommandNavEndArea();
	void CommandNavConnect();
	void CommandNavDisconnect();
	void CommandNavSplice();
	void CommandNavToggleAttribute(CNavAttribute);
	void CommandNavCornerSelect();
	void CommandNavCornerRaise(const CCommandContext &, const CCommand &);
	void CommandNavCornerLower(const CCommandContext &, const CCommand &);
	void CommandNavCornerPlaceOnGround(const CCommandContext &, const CCommand &);
	void CommandNavWarpToMark();
	void CommandNavLadderFlip();
	void CommandNavTestTestRayToMesh(const CCommandContext &, const CCommand &);
	void CommandNavCrouch();
	void CommandAutoBuildOffGridAreas();
	bool UpdateSelection();
	void GetEditVectors(Vector *, Vector *);
	bool FindLadderCorners(const Vector &, Vector *, Vector *, Vector *);
	CNavArea * EditCreateNavArea(const Vector &, const Vector &, bool);
	CNavSelectionSet & GetSelectionSet();
	void AddToSelectionSet(CNavArea *);
	void RemoveFromSelectionSet(CNavArea *);
	void ClearSelectionSet();
	bool IsSelectionSetEmpty();
	bool IsInSelectionSet(CNavArea *);
	const CNavSelectionSet & GetDragSelectionSet();
	CNavSelectionSet & GetDragSelectionSet();
	void UpdateDragSelectionSet();
	int GetDragSelectionVolumeZMax();
	int GetDragSelectionVolumeZMin();
	void SetDragSelectionVolumeZMax(int);
	void SetDragSelectionVolumeZMin(int);
	int IsDragDeselecting();
	void StartDragDeselecting();
	void StopDragDeselecting();
	bool IsContinuouslySelecting();
	bool IsContinuouslyDeselecting();
	void StartContinuouslySelecting();
	void StopContinuouslySelecting();
	void StartContinuouslyDeselecting();
	void StopContinuouslyDeselecting();
	Vector GetEditCursorPosition();
	int GetVertUnderCursor(const CNavArea &);
	bool IsPlacePainting();
	void SetPlacePainting(bool);
	Place GetEditNavPlace();
	void SetEditNavPlace(unsigned int);
	Vector GetAnchor();
	void SetAnchorToEditCursor();
	CNavArea * GetMarkedAreaExcludingSelectionSet();
	CNavArea * GetMarkedAreaIncludingSelectionSet();
	void SetMarkedArea(CNavArea *);
	CNavLadder * GetMarkedLadder();
	void SetMarkedLadder(CNavLadder *);
	NavCornerType GetMarkedCorner();
	void SetMarkedCorner(NavCornerType);
	CNavArea * GetSelectedArea();
	void SetSelectedArea(CNavArea *);
	CNavArea * GetAreaForFloodSelect();
	CNavLadder * GetSelectedLadder();
	void SetSelectedLadder(CNavLadder *);
	void SetupLadderAnchorAndNormal();
	void ToggleAreaAttribute(CNavArea *, CNavAttribute);
	bool DoSelectionTrace(const Vector &, const Vector &, bool, bool);
	void ForAllEditorSelectedAreas<NavAttributeSetter>(NavAttributeSetter &);
	void ForAllEditorSelectedAreas<ShiftSet>(ShiftSet &);
	void ForAllEditorSelectedAreas<NavAttributeClearer>(NavAttributeClearer &);
	void ForAllEditorSelectedAreas<Subdivider>(Subdivider &);
	void ForAllEditorSelectedAreas<NavAreaCollector>(NavAreaCollector &);

	// vtable[0] OnNavMeshDestroy
	// vtable[1] Update
	// vtable[2] Reset
	// vtable[3] RemoveInvalid
	// vtable[4] GetEditMode
	// vtable[5] ClearAreas
	// vtable[6] ClearLadders
	// vtable[7] ClearMarks
	// sizeof = 336
};
