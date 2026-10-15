// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_pathing.h:22
struct sPathingInfo {
	short int iPreviousX;  // +0x0
	short int iPreviousY;  // +0x2
	short int iStepCount;  // +0x4
	short int iDist;  // +0x6
	short int iEstimatedTotalDist;  // +0x8

	// sizeof = 10
};

// src/game/server/dota/bot/dota_bot_pathing.h:31
struct sQueuedNode {
	int iPackedGrid;  // +0x0
	int iEstimatedTotalDist;  // +0x4
	short int iPrevQueuedNode;  // +0x8
	short int iNextQueuedNode;  // +0xa

	// sizeof = 12
};

// src/game/server/dota/bot/dota_bot_pathing.h:50
class CDOTA_Bot_Pathing {
private:

	int m_iUpdatesRequired;  // +0x3028
	int m_iLastResult;  // +0x302c
	int m_iIterations;  // +0x3030
	bool m_bAllowVisibleToEnemy;  // +0x3034

	int m_iStartX;  // +0x3038
	int m_iStartY;  // +0x303c
	int m_iEndX;  // +0x3040
	int m_iEndY;  // +0x3044
	int m_iHeadQueuedNode;  // +0x3048
	int m_iLowestQueuedNode;  // +0x304c
	int m_iHighWatermark;  // +0x4050
	int m_iFirstUnused;  // +0x4054
	char m_DebugStringBuffer[128];  // +0x4058
	CDOTA_Bot_Pathing();
	void Init(CDOTA_Bot *);
	int BuildPath(const Vector &, const Vector &, bool, bool);
	int UpdateSearch(bool);
	bool IsPathClear(const Vector &, const Vector &, float, bool, bool);
	bool IsPathClear(int, int, int, int, float, bool, bool);
	int FindTotalAvoidanceForPath(const Vector &, const Vector &, bool);
	const int * GetPathArray();
	Vector FindNearbyValidLocation(const Vector &, float);
	const char * GetDebugString();
	bool GenerateClearPath(int, int, int, int, float, bool, bool);
	void ResetQueuedNodePool();
	int GetQueuedNodeFromPool();
	void ReturnQueuedNodeToPool(int);
	int EstimateDistance(int, int, int, int, int);
	bool FindNearbyValidGrid(const Vector &, int, int *, int *);
	~CDOTA_Bot_Pathing();

	// sizeof = 16600
};
