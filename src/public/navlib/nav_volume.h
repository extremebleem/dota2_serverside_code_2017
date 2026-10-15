// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_volume.h:20
class CNavAreaFilter {
	function<bool(const CNavArea&)> m_FilterFunc;  // +0x10
protected:

	bool m_bDrawDetails;  // +0x30
	CNavAreaFilter();
	bool FilterArea(const CNavArea &);
	~CNavAreaFilter();
	CNavAreaFilter & operator=(const CNavAreaFilter &);

	// sizeof = 56
};

// src/public/navlib/nav_volume.h:40
class CNavVolume {
	enum {
		MAX_AREAS_STORED_DEFAULT = 0x1000,
	};

	int ()() * * _vptr.CNavVolume;  // +0x0
private:

protected:

	const CNavMesh * m_pNavMesh;  // +0x8
	int m_nMaxAreasStored;  // +0x1c
	int m_nDebugLevel;  // +0x20
private:

	bool m_bFilterActive;  // +0x24

	CNavVolume(const CNavVolume &);

	CNavVolume(const CNavMesh *, NavHull_t);
	virtual ~CNavVolume();
	void SetNavMesh(const CNavMesh *);
	virtual void ParamsChanged();
	void SetFilter(const CNavAreaFilter &);
	bool IsFilterActive();
	void SetMaxAreasStored(int);
	virtual CNavArea * GetRandomArea();
	virtual const NavAreaVector * GetOrFindAreasOverlapping(NavAreaVector &);
	virtual void ForAreasOverlapping(function<void(CNavArea&)>);
	virtual bool ContainsArea(const CNavArea &);

protected:

	bool FilterArea(const CNavArea &);
	virtual void GetExtent(Extent *);
	virtual bool OverlapsExtent(const Extent &);
	virtual void CalcCellList(NavCellList_t &);
	virtual void DrawDebug(float);
	void DrawAreaGeometryReject(const CNavArea &);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] ParamsChanged
	// vtable[4] GetRandomArea
	// vtable[5] GetOrFindAreasOverlapping
	// vtable[6] ForAreasOverlapping
	// vtable[7] ContainsArea
	// vtable[8] GetExtent
	// vtable[9] OverlapsExtent
	// vtable[10] CalcCellList
	// vtable[11] DrawDebug
	// sizeof = 96
};

// src/public/navlib/nav_volume.h:132
class CNavVolumeVector : public CNavVolume {
public:

private:

protected:

	const NavAreaVector * m_pAreas;  // +0x60
	bool m_bHasBeenPreFiltered;  // +0x68

	NavAreaVector m_FilteredAreas;  // +0x70
	CNavVolumeVector(CNavVolumeVector &);
	CNavVolumeVector(const CNavVolumeVector &);

private:

	CNavVolumeVector(const CNavMesh *, NavHull_t, const NavAreaVector *);
	void SetAreas(const NavAreaVector *);
	virtual void ParamsChanged();
	virtual CNavArea * GetRandomArea();
	virtual const NavAreaVector * GetOrFindAreasOverlapping(NavAreaVector &);
	virtual void ForAreasOverlapping(function<void(CNavArea&)>);
	virtual bool ContainsArea(const CNavArea &);

protected:

	virtual void GetExtent(Extent *);
	virtual bool OverlapsExtent(const Extent &);
	virtual void CalcCellList(NavCellList_t &);
	virtual void DrawDebug(float);
	void PrefilterAreas();
	virtual ~CNavVolumeVector();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] ParamsChanged
	// vtable[4] GetRandomArea
	// vtable[5] GetOrFindAreasOverlapping
	// vtable[6] ForAreasOverlapping
	// vtable[7] ContainsArea
	// vtable[8] GetExtent
	// vtable[9] OverlapsExtent
	// vtable[10] CalcCellList
	// vtable[11] DrawDebug
	// sizeof = 136
};

// src/public/navlib/nav_volume.h:200
class CNavVolumeAll : public CNavVolumeVector {
public:

private:

	CNavVolumeAll(CNavVolumeAll &);
	CNavVolumeAll(const CNavVolumeAll &);

	CNavVolumeAll(const CNavMesh *, NavHull_t);

protected:

	virtual void DrawDebug(float);
	virtual ~CNavVolumeAll();

	// vtable[0] Schema_DynamicBinding
	// vtable[11] DrawDebug
	// sizeof = 136
};

// src/public/navlib/nav_volume.h:213
class CNavVolumeSphere : public CNavVolume {
public:

private:

protected:

	float m_flRadius;  // +0x6c
	CNavVolumeSphere(CNavVolumeSphere &);
	CNavVolumeSphere(const CNavVolumeSphere &);

private:

	CNavVolumeSphere(const CNavMesh *, NavHull_t, const Vector &, float);
	void SetParams(const Vector &, float);
	virtual void ParamsChanged();
	virtual bool ContainsArea(const CNavArea &);
	virtual void DrawDebug(float);

protected:

	virtual void GetExtent(Extent *);
	virtual bool OverlapsExtent(const Extent &);
	virtual void CalcCellList(NavCellList_t &);
	virtual ~CNavVolumeSphere();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] ParamsChanged
	// vtable[7] ContainsArea
	// vtable[11] DrawDebug
	// vtable[8] GetExtent
	// vtable[9] OverlapsExtent
	// vtable[10] CalcCellList
	// sizeof = 112
};

// src/public/navlib/nav_volume.h:269
class CNavVolumeSphericalShell : public CNavVolumeSphere {
public:

private:

protected:

	float m_flRadiusInner;  // +0x70
private:

	CNavVolumeSphericalShell(const CNavMesh *, NavHull_t, const Vector &, float, float);
	void SetParams(const Vector &, float, float);
	virtual void ParamsChanged();
	virtual bool ContainsArea(const CNavArea &);
	virtual void DrawDebug(float);

protected:

	virtual bool OverlapsExtent(const Extent &);
	virtual void CalcCellList(NavCellList_t &);
	virtual ~CNavVolumeSphericalShell();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] ParamsChanged
	// vtable[7] ContainsArea
	// vtable[11] DrawDebug
	// vtable[9] OverlapsExtent
	// vtable[10] CalcCellList
	// sizeof = 120
};
