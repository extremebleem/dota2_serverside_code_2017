// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_waypoint.h:37
struct AI_Waypoint_t {
	float flYaw;  // +0xc
	int iNodeID;  // +0x10
	float flPathDistGoal;  // +0x14
	EHANDLE hPathCorner;  // +0x18
	EHANDLE m_hData;  // +0x1c
private:

	int m_fWaypointFlags;  // +0x20

	static CUtlMemoryPool<AI_Waypoint_t> s_Allocator;
	static datamap_t m_DataMap;
	AI_Waypoint_t();
	AI_Waypoint_t(const Vector &, float, Navigation_t, int, int);
	AI_Waypoint_t(const AI_Waypoint_t &);
	AI_Waypoint_t & operator=(const AI_Waypoint_t &);
	~AI_Waypoint_t();
	void AssertValid();
	int Flags();
	void ModifyFlags(int, bool);
	Navigation_t GetNavType();
	void SetNavType(Navigation_t);
	bool IsReducible();
	void SetNext(AI_Waypoint_t *);
	AI_Waypoint_t * GetNext();
	const AI_Waypoint_t * GetNext();
	void SetPrev(AI_Waypoint_t *);
	AI_Waypoint_t * GetPrev();
	const AI_Waypoint_t * GetPrev();
	AI_Waypoint_t * GetLast();
	const Vector & GetPos();
	void SetPos(const Vector &);
	EHANDLE GetEHandleData();
	void * operator new(size_t);
	void * operator new(size_t, int, const char *, int);
	void operator delete(void *);
	void operator delete(void *, int, const char *, int);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 56
};

// src/game/server/ai_waypoint.h:218
class CAI_WaypointList {
private:

	CAI_WaypointList();
	CAI_WaypointList(AI_Waypoint_t *);
	void SetWaypoints(AI_Waypoint_t *);
	void PrependWaypoints(AI_Waypoint_t *);
	void PrependWaypoint(const Vector &, Navigation_t, unsigned int, float);
	bool IsEmpty();
	AI_Waypoint_t * GetFirst();
	const AI_Waypoint_t * GetFirst();
	AI_Waypoint_t * GetLast();
	const AI_Waypoint_t * GetLast();
	void RemoveAll();

	// sizeof = 8
};
