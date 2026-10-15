// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_path.h:29
class CAI_Path {
private:

	float m_flGoalTolerance;  // +0x8
	float m_flWaypointTolerance;  // +0xc
	Activity m_activity;  // +0x10
	EHANDLE m_hTarget;  // +0x18
	Activity m_arrivalActivity;  // +0x28
	bool m_bGoalPosSet;  // +0x30

	bool m_bGoalTypeSet;  // +0x58

	uint32 m_goalFlags;  // +0x60
	float m_flGoalMaxTravelDist;  // +0x64
	float m_flPathEndGoalRange;  // +0x68
	float m_flRouteStartTime;  // +0x6c
	float m_flDistAdvancedToCurWaypoint;  // +0x70
	EHANDLE m_goalDirectionTarget;  // +0x80
	float m_flGoalSpeed;  // +0x84
	EHANDLE m_goalSpeedTarget;  // +0x88
	float m_goalStoppingDistance;  // +0x8c

	static AI_Waypoint_t gm_InvalidWaypoint;
	static datamap_t m_DataMap;
	CAI_Path();
	~CAI_Path();
	void ClearPath();
	void ClearWaypoints();
	void SetMoveProbe(CAI_MoveProbe *);
	void SetWaypoints(AI_Waypoint_t *, const Vector *, bool);
	void PrependWaypoints(AI_Waypoint_t *);
	void PrependWaypoint(const Vector &, Navigation_t, unsigned int);
	bool IsEmpty();
	AI_Waypoint_t * GetCurWaypoint();
	const AI_Waypoint_t * GetCurWaypoint();
	AI_Waypoint_t * GetGoalWaypoint();
	const AI_Waypoint_t * GetGoalWaypoint();
	const Vector & CurWaypointPos();
	const Vector & NextWaypointPos();
	float CurWaypointYaw();
	int CurWaypointFlags();
	Navigation_t CurWaypointNavType();
	float GetPathLength();
	float GetPathDistanceToGoal(const Vector &);
	float GetPathDistAdvancedToCurWaypoint();
	float GetStartTime();
	void SetGoalTolerance(float);
	float GetGoalTolerance();
	void SetWaypointTolerance(float);
	float GetWaypointTolerance();
	Activity GetMovementActivity();
	Activity SetMovementActivity(Activity);
	HSequence GetMovementSequence();
	HSequence SetMovementSequence(HSequence);
	Activity GetArrivalActivity();
	void SetArrivalActivity(Activity);
	HSequence GetArrivalSequence();
	void SetArrivalSequence(HSequence);
	void SetGoalDirection(const Vector &);
	void SetGoalDirection(CBaseEntity *);
	Vector GetGoalDirection(const Vector &);
	void SetGoalSpeed(float);
	void SetGoalSpeed(CBaseEntity *);
	float GetGoalSpeed(const Vector &);
	void SetGoalStoppingDistance(float);
	float GetGoalStoppingDistance();
	float GetGoalMaxTravelDist();
	void SetGoalMaxTravelDist(float);
	float GetPathEndGoalRange();
	void SetPathEndGoalRange(float);
	void SetTarget(CBaseEntity *);
	CBaseEntity * GetTarget();
	void ClearTarget();
	void SetTargetOffset(const Vector &);
	Vector GetTargetOffset();
	GoalType_t GetGoalType();
	void SetGoalType(GoalType_t);
	bool IsGoalEntity();
	Vector CalcAndSetGoalPos(const Vector &, const Vector &, NavHull_t, bool, bool);
	void SetActualAndBaseGoalPos(const Vector &, const Vector &, bool);
	Vector CalcActualGoalPos(const Vector &, const Vector &, NavHull_t);
	const Vector & BaseGoalPosition();
	const Vector & ActualGoalPosition();
	void SetActualGoalPos(const Vector &);
	const Vector & GetGoalEntityInitialPos();
	void SetGoalFlags(uint32);
	uint32 GetGoalFlags();
	void Advance();
	bool CurWaypointIsGoal();
	void DrawDebugRouteOverlay(const Vector &, float);
	void ComputeRouteGoalDistances(AI_Waypoint_t *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 152
};
