// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_area_ext.h:15
class CNavAreaExtended : public CNavArea {
	enum VisibilityType {
		NOT_VISIBLE = 0,
		POTENTIALLY_VISIBLE = 0x1,
		COMPLETELY_VISIBLE = 0x2,
	};

public:

protected:

	unsigned char m_nPlayerCount[2];  // +0x158
	uint8 m_nAverageLightIntensity;  // +0x15a

	float m_lightIntensity[4];  // +0x15c
	int m_nDamagingTickCount;  // +0x16c
	Place m_place;  // +0x170
	CNavAreaExtended(CNavMesh &);
	virtual void OnServerActivate();
	virtual void OnRoundRestart();
	virtual void InheritAttributes(const CNavArea *, const CNavArea *);
	virtual void Save(CUtlBuffer &, const CNavPlaceDirectory &);
	virtual NavErrorType Load(CUtlBuffer &, uint, uint, LegacyNavData_t *);
	virtual void SaveToSelectedSet(KeyValues *);
	virtual void RestoreFromSelectedSet(KeyValues *);
	virtual void GetNavDataProperties(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual void SetNavDataProperty(const char *, const char *);
	bool IsDamaging();
	void MarkAsDamaging(float);
	void IncrementPlayerCount(int, CEntityIndex);
	void DecrementPlayerCount(int, CEntityIndex);
	unsigned char GetPlayerCount(int);
	float GetLightIntensity(const Vector &);
	float GetLightIntensity(float, float);
	float GetAverageLightIntensity();
	void SetLighting(float);
	virtual bool ComputeLighting();
	void RecomputeAverageLightIntensity();
	virtual void SetPlace(Place);
	virtual Place GetPlace();
	VisibilityType ComputeVisibility(const CNavAreaExtended *, bool, bool, bool *);
	bool CalcEntirelyVisible(const Vector &);
	bool CalcPartiallyVisible(const Vector &);
	void SetupPVS();
	virtual ~CNavAreaExtended();

	// vtable[14] OnServerActivate
	// vtable[15] OnRoundRestart
	// vtable[27] InheritAttributes
	// vtable[8] Save
	// vtable[9] Load
	// vtable[11] SaveToSelectedSet
	// vtable[12] RestoreFromSelectedSet
	// vtable[29] GetNavDataProperties
	// vtable[30] SetNavDataProperty
	// vtable[31] ComputeLighting
	// vtable[6] SetPlace
	// vtable[7] GetPlace
	// sizeof = 376
};

// src/game/server/nav_area_ext.h:15
class CNavAreaExtended : public CNavArea {
	enum VisibilityType {
		NOT_VISIBLE = 0,
		POTENTIALLY_VISIBLE = 0x1,
		COMPLETELY_VISIBLE = 0x2,
	};

public:

protected:

	unsigned char m_nPlayerCount[2];  // +0x158
	uint8 m_nAverageLightIntensity;  // +0x15a

	float m_lightIntensity[4];  // +0x15c
	int m_nDamagingTickCount;  // +0x16c
	Place m_place;  // +0x170
	CNavAreaExtended(CNavAreaExtended &);
	CNavAreaExtended(const CNavAreaExtended &);
	CNavAreaExtended(CNavMesh &);
	virtual void OnServerActivate();
	virtual void OnRoundRestart();
	virtual void InheritAttributes(const CNavArea *, const CNavArea *);
	virtual void Save(CUtlBuffer &, const CNavPlaceDirectory &);
	virtual NavErrorType Load(CUtlBuffer &, uint, uint, LegacyNavData_t *);
	virtual void SaveToSelectedSet(KeyValues *);
	virtual void RestoreFromSelectedSet(KeyValues *);
	virtual void GetNavDataProperties(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual void SetNavDataProperty(const char *, const char *);
	bool IsDamaging();
	void MarkAsDamaging(float);
	void IncrementPlayerCount(int, CEntityIndex);
	void DecrementPlayerCount(int, CEntityIndex);
	unsigned char GetPlayerCount(int);
	float GetLightIntensity(const Vector &);
	float GetLightIntensity(float, float);
	float GetAverageLightIntensity();
	void SetLighting(float);
	virtual bool ComputeLighting();
	void RecomputeAverageLightIntensity();
	virtual void SetPlace(Place);
	virtual Place GetPlace();
	VisibilityType ComputeVisibility(const CNavAreaExtended *, bool, bool, bool *);
	bool CalcEntirelyVisible(const Vector &);
	bool CalcPartiallyVisible(const Vector &);
	void SetupPVS();
	virtual ~CNavAreaExtended();

	// vtable[14] OnServerActivate
	// vtable[15] OnRoundRestart
	// vtable[27] InheritAttributes
	// vtable[8] Save
	// vtable[9] Load
	// vtable[11] SaveToSelectedSet
	// vtable[12] RestoreFromSelectedSet
	// vtable[29] GetNavDataProperties
	// vtable[30] SetNavDataProperty
	// vtable[31] ComputeLighting
	// vtable[6] SetPlace
	// vtable[7] GetPlace
	// sizeof = 376
};
