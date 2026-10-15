// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_volume_game.h:28
class CNavVolumeMarkupVolume : public CNavVolume {
public:

private:

protected:

	const CMarkupVolume * m_pMarkupVolume;  // +0x60
	CNavVolumeMarkupVolume(CNavVolumeMarkupVolume &);
	CNavVolumeMarkupVolume(const CNavVolumeMarkupVolume &);

private:

	CNavVolumeMarkupVolume(const CNavMesh *, NavHull_t, const CMarkupVolume *);
	void SetParams(const CMarkupVolume *);
	virtual void ParamsChanged();
	virtual bool ContainsArea(const CNavArea &);
	virtual void DrawDebug(float);
	const CMarkupVolume * GetMarkupVolume();

protected:

	virtual void GetExtent(Extent *);
	virtual bool OverlapsExtent(const Extent &);
	virtual ~CNavVolumeMarkupVolume();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] ParamsChanged
	// vtable[7] ContainsArea
	// vtable[11] DrawDebug
	// vtable[8] GetExtent
	// vtable[9] OverlapsExtent
	// sizeof = 200
};

// src/game/server/nav_volume_game.h:74
class CNavVolumeBreadthFirstSearch : public CNavVolume {
public:

private:

protected:

	float m_flSearchDist;  // +0x6c
	bool m_bSearchRun;  // +0x78

	NavAreaVector m_vecBFSNavAreas;  // +0x80
private:

	CNavVolumeBreadthFirstSearch(const CNavMesh *, NavHull_t, CNavArea *, float);
	CNavVolumeBreadthFirstSearch(const Vector &, float);
	virtual ~CNavVolumeBreadthFirstSearch();
	void SetParams(const Vector &, float);
	void SetParams(CNavArea *, float);
	virtual void ParamsChanged();
	virtual CNavArea * GetRandomArea();
	virtual const NavAreaVector * GetOrFindAreasOverlapping(NavAreaVector &);
	virtual void ForAreasOverlapping(function<void(CNavArea&)>);
	virtual bool ContainsArea(const CNavArea &);
	virtual void DrawDebug(float);

protected:

	void ConvertStartPosToStartArea();
	void DoSearch();
	virtual void GetExtent(Extent *);
	virtual bool OverlapsExtent(const Extent &);
	virtual void CalcCellList(NavCellList_t &);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] ParamsChanged
	// vtable[4] GetRandomArea
	// vtable[5] GetOrFindAreasOverlapping
	// vtable[6] ForAreasOverlapping
	// vtable[7] ContainsArea
	// vtable[11] DrawDebug
	// vtable[8] GetExtent
	// vtable[9] OverlapsExtent
	// vtable[10] CalcCellList
	// sizeof = 160
};
