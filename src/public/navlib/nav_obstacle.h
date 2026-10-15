// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_obstacle.h:16
class INavObstacle {
	int ()() * * _vptr.INavObstacle;  // +0x0
	INavObstacle(INavObstacle &);
	INavObstacle(const INavObstacle &);
	INavObstacle();
	virtual int32 GetId();
	virtual void WorldSpaceSurroundingBounds(Vector *, Vector *);
	virtual void WorldSpaceOrientedBounds(Vector *, Vector *, Vector *, QAngle *);
	bool IsNavObstacle();
	bool IsNavObstacleActive();
	virtual bool IsNavAvoidanceObstacle();
	virtual bool IsNavAvoidanceObstacleActive();
	virtual float GetNavObstructionHeight();
	virtual bool IsNavBlockingObstacle();
	virtual bool IsNavBlockingObstacleActive();

	// vtable[0] GetId
	// vtable[1] WorldSpaceSurroundingBounds
	// vtable[2] WorldSpaceOrientedBounds
	// vtable[3] IsNavAvoidanceObstacle
	// vtable[4] IsNavAvoidanceObstacleActive
	// vtable[5] GetNavObstructionHeight
	// vtable[6] IsNavBlockingObstacle
	// vtable[7] IsNavBlockingObstacleActive
	// sizeof = 8
};
