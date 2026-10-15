// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_obstructionmanager.h:56
struct Point_t {
	float X;  // +0x0
	float Y;  // +0x4
	void Set(float, float);
	void Set(Point_t &);

	// sizeof = 8
};

// src/game/server/dota/dota_obstructionmanager.h:65
struct Line_t {
	void Set(float, float, float, float);
	void Set(Point_t &, Point_t &);

	// sizeof = 16
};

// src/game/server/dota/dota_obstructionmanager.h:74
struct Box_t {
	void Set(float, float, float, float);
	void Set(Point_t &, Point_t &);

	// sizeof = 16
};

// src/game/server/dota/dota_obstructionmanager.h:83
struct CheckLine_t : public Line_t {
public:

	float m_flCheckLineLength;  // +0x10
	float m_flCheckLineInvLength;  // +0x14
	float m_flDeltaXNorm;  // +0x18
	float m_flDeltaYNorm;  // +0x1c
	void Set(float, float, float, float);

	// sizeof = 32
};

// src/game/server/dota/dota_obstructionmanager.h:134
struct IntersectionRecord_t {
	const ObstructionRecord_t * m_pObsRec;  // +0x8

	// sizeof = 24
};

// src/game/server/dota/dota_obstructionmanager.h:199
class CObstructionObject {
	int ()() * * _vptr.CObstructionObject;  // +0x0
private:

protected:

	int m_nObstructionProperties;  // +0x10
	CObstructionObject & operator=(CObstructionObject &);
	CObstructionObject & operator=(const CObstructionObject &);
	CObstructionObject(CObstructionObject &);
	CObstructionObject(const CObstructionObject &);
	~CObstructionObject();

private:

	CObstructionObject();
	ObstructionRecord_t * GetCurrentObstructionRecord();
	void AssignObstructionRecord(ObstructionRecord_t *);
	int GetObstructionProperties();
	void AddObstructionProperty(int);
	void RemoveObstructionProperty(int);
	virtual float GetObstructionRadius();
	virtual float GetObstructionCollisionPadding();
	virtual ObstructionRelationshipClass_t GetObstructionRelationshipClass();
	virtual ObstructionQuerySetClass_t GetObstructionQuerySetClass();
	virtual const char * GetObstructionName();
	virtual CBaseEntity * GetObstructionBaseEntity();
	virtual ObstructionType_t GetObstructionType();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] GetObstructionRadius
	// vtable[2] GetObstructionCollisionPadding
	// vtable[3] GetObstructionRelationshipClass
	// vtable[4] GetObstructionQuerySetClass
	// vtable[5] GetObstructionName
	// vtable[6] GetObstructionBaseEntity
	// vtable[7] GetObstructionType
	// sizeof = 24
};

// src/game/server/dota/dota_obstructionmanager.h:238
struct ObstructionRecord_t {
	union {
	};

	uint m_ObjectProperties;  // +0x0
	EHANDLE m_ObjectID;  // +0x4
	union {
	};
	uint8 m_ObsType;  // +0x10
	uint8 m_RadiusAdjustClass;  // +0x11
	uint8 m_RadiusAdjustClassMask;  // +0x12
	uint8 m_QuerySet;  // +0x13

	static const uint32 knInvalidInsertedSet = 18446744073709551615;
	uint32 m_nInsertedQuerySet;  // +0x14
	uint16 m_nCellXMin;  // +0x18
	uint16 m_nCellXMax;  // +0x1a
	uint16 m_nCellYMin;  // +0x1c
	uint16 m_nCellYMax;  // +0x1e
	float m_fRadiusAdjustFactor;  // +0x20
	float m_fXMin;  // +0x24
	float m_fYMin;  // +0x28
	float m_fXMax;  // +0x2c
	float m_fYMax;  // +0x30
	float m_fX;  // +0x34
	float m_fY;  // +0x38
	float m_fRadius;  // +0x3c
	ObstructionRecord_t();

	// sizeof = 64
};

// src/game/server/dota/dota_obstructionmanager.h:291
class CObstructionRecordPoolManager {
private:

	ObstructionRecord_t * * m_pPoolBasePtrs;  // +0x0
	int * m_pPoolSizes;  // +0x8
	int m_nUsedPools;  // +0x10
	int m_nMaxPools;  // +0x14
	ObstructionRecord_t * m_pFreeHead;  // +0x18
	int m_nFreePoolZone;  // +0x20
	int m_nFreePoolIndex;  // +0x24
	int m_nTotalBlocks;  // +0x28
	int m_nFreeBlocks;  // +0x2c
	int m_nDefaultGrowSize;  // +0x30
	void SetNumPools(int);
	void InitNewPool(int);
	CObstructionRecordPoolManager(int, int);
	~CObstructionRecordPoolManager();
	ObstructionRecord_t * GetNewObsRecord();
	void FreeRecord(ObstructionRecord_t *);
	void ReclaimAllRecords();
	int GetTotalRecords();
	int GetFreeRecords();
	int GetAllocatedRecord();
	int GetGrowSize();
	void SetGrowSize(int);

	// sizeof = 56
};

// src/game/server/dota/dota_obstructionmanager.h:291
class CObstructionRecordPoolManager {
	enum {
		cFreeFreePoolUnavailable = 0xffffffffffffffff,
	};

private:

	ObstructionRecord_t * * m_pPoolBasePtrs;  // +0x0
	int * m_pPoolSizes;  // +0x8
	int m_nUsedPools;  // +0x10
	int m_nMaxPools;  // +0x14
	ObstructionRecord_t * m_pFreeHead;  // +0x18
	int m_nFreePoolZone;  // +0x20
	int m_nFreePoolIndex;  // +0x24
	int m_nTotalBlocks;  // +0x28
	int m_nFreeBlocks;  // +0x2c
	int m_nDefaultGrowSize;  // +0x30
	void SetNumPools(int);
	void InitNewPool(int);
	CObstructionRecordPoolManager(int, int);
	~CObstructionRecordPoolManager();
	ObstructionRecord_t * GetNewObsRecord();
	void FreeRecord(ObstructionRecord_t *);
	void ReclaimAllRecords();
	int GetTotalRecords();
	int GetFreeRecords();
	int GetAllocatedRecord();
	int GetGrowSize();
	void SetGrowSize(int);

	// sizeof = 56
};

// src/game/server/dota/dota_obstructionmanager.h:336
struct ObstructionGridNode_t {
	ObstructionRecord_t * * m_pRecList;  // +0x0
	int m_NumActive;  // +0x8
	int m_BlockSize;  // +0xc

	// sizeof = 16
};

// src/game/server/dota/dota_obstructionmanager.h:345
struct ObstructionGrid_t {
	ObstructionGridNode_t * m_Nodes;  // +0x0

	// sizeof = 8
};

// src/game/server/dota/dota_obstructionmanager.h:368
class C2DGridObstructionManager {
private:

	float m_TileXScale;  // +0x0
	float m_TileXOffset;  // +0x4
	float m_TileYScale;  // +0x8
	float m_TileYOffset;  // +0xc
	int m_nXTiles;  // +0x10
	int m_nYTiles;  // +0x14
	uint m_nObjectPropertiesMaskAll;  // +0x24
	uint m_nObjectPropertiesMaskNone;  // +0x28
	uint m_nObjectPropertiesMaskMerged;  // +0x2c
	bool m_bObManagerInitialized:1;  // +0x48:0
	bool m_bUseCollisionRadius:1;  // +0x48:1
	bool m_bCheckLineIntersections:1;  // +0x48:2
	bool m_bCheckPoint1Contained:1;  // +0x48:3
	bool m_bCheckPoint2Contained:1;  // +0x48:4
	bool m_bReturnOnlyClosest:1;  // +0x48:5
	bool m_bIncludeNotVisible:1;  // +0x48:6
	bool m_bQueryComplete:1;  // +0x48:7
	bool m_bRadiusAdjust:1;  // +0x49:0

	unsigned char m_RelationshipMatrix[8];  // +0x4a

	EHANDLE m_IgnoreHandle;  // +0x54
	float m_CollisionRadius;  // +0x58
	float m_MaxRadiusAdjustment;  // +0x5c
	float m_SearcherRadiusAdjustment;  // +0x64
	int m_CurrentCollisionCount;  // +0x98
	int m_MaxCollisionCount;  // +0x9c
	int m_ClosestDistanceIndex;  // +0xa0
	float m_ClosestDistance;  // +0xa4
	ObstructionRecord_t * m_CurrentObstruciton;  // +0xa8
	CollisionResultList_t * m_ResultList;  // +0xb0
	C2DGridObstructionManager();
	~C2DGridObstructionManager();
	void Init(int, int, float, float, float, float, float);
	void DeInit();
	void Reset();
	bool UpdateObjectObstruction(CObstructionObject *);
	void RemoveObjectObstruction(CObstructionObject *);
	void RefreshObjectClassInfo(CObstructionObject *);
	void SetCollisionRadius(bool, float);
	float GetCollisionRadius();
	void SetSearcherRelationship(ObstructionRelationshipClass_t, float);
	ObstructionRelationshipClass_t GetSearcherClass();
	float GetSearcherRadiusAdjustment();
	void SetIgnoreList(bool, EHANDLE *, int);
	void SetObstructionPropertyMaskAll(uint);
	void SetObstructionPropertyMaskNone(uint);
	uint GetObstructionPropertyMaskAll();
	uint GetObstructionPropertyMaskNone();
	void SetObstructionPropertyQuerySetFlags(ObstructionQuerySetClass_t, uint);
	void SetRadiusAdjustmentRelationship(int, int, bool);
	float GetCollisionPadding(ObstructionRelationshipClass_t, float, ObstructionRelationshipClass_t, float);
	Vector2D AdvanceAroundObstruction(const Vector2D &, const ObstructionRecord_t *, bool);
	void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	ObstructionRecord_t * UpdateSquareObstruction(ObstructionRecord_t *, float, float, float, float, ObstructionQuerySetClass_t, int, EHANDLE, CObstructionObject *);
	ObstructionRecord_t * UpdateCircleObstruction(ObstructionRecord_t *, float, float, float, ObstructionQuerySetClass_t, int, EHANDLE, CObstructionObject *);
	bool CheckForCollisions(float, float, float, float, CollisionResultList_t *, EHANDLE, uint, int);
	bool CheckForCollisionsByQuerySet(ObstructionQuerySetFlags_t, float, float, float, float, CollisionResultList_t *, EHANDLE, uint, int);
	ObstructionRecord_t * GetNewObstructionRecord(CObstructionObject *);
	void ValidateObjectProperties(ObstructionQuerySetClass_t, int);
	void UpdateObstructionRecord(ObstructionRecord_t *);
	void DeleteObRecord(ObstructionRecord_t *);
	bool IsRecordInIgnoreList(ObstructionRecord_t *);
	void CheckForCollisionsInNode(ObstructionGridNode_t *);
	void CheckBoxCollision(ObstructionRecord_t *, float);
	void CheckCircleCollision(ObstructionRecord_t *, float);
	Vector2D AdvanceAroundObstructionBox(const Vector2D &, const ObstructionRecord_t *, bool, float);
	Vector2D AdvanceAroundObstructionCircle(const Vector2D &, const ObstructionRecord_t *, bool, float);
	void RecordDetails(IntersectionType_t, ObstructionRecord_t *, Point_t *);
	bool ValidateAgainstPropertySearchMasks(uint);
	float ConvertToTileX(float);
	float ConvertToTileY(float);

	// sizeof = 184
};
