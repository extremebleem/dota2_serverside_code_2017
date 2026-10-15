// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_node.h:23
class CNavNode {
private:

	float m_obstacleHeight[4];  // +0x38
	float m_obstacleStartDist[4];  // +0x48
	float m_obstacleEndDist[4];  // +0x58
	unsigned int m_id;  // +0x68
	int m_attributeFlags;  // +0x6c

	static CNavNode * m_list;
	static unsigned int m_listLength;
	static unsigned int m_nextID;
	unsigned char m_visited;  // +0x80

	bool m_isCovered;  // +0x90

	bool m_isBlocked[4];  // +0xa0
	bool m_crouch[4];  // +0xa4
	float m_groundHeightAboveNode[4];  // +0xa8
	CNavNode(const Vector &, const Vector &, CNavNode *);
	~CNavNode();
	CNavNode * GetNode(const Vector &);
	void CleanupGeneration();
	CNavNode * GetConnectedNode(NavDirType);
	Vector GetPosition();
	Vector GetNormal();
	unsigned int GetID();
	CNavNode * GetFirst();
	unsigned int GetListLength();
	CNavNode * GetNext();
	CNavNode * GetParent();
	void Draw();
	void ConnectTo(CNavNode *, NavDirType, float, float, float);
	void MarkAsVisited(NavDirType);
	bool HasVisited(NavDirType);
	bool IsBiLinked(NavDirType);
	bool IsClosedCell();
	void Cover();
	bool IsCovered();
	void AssignArea(CNavArea *);
	CNavArea * GetArea();
	void SetNodeAttributes(int);
	int GetNodeAttributes();
	float GetGroundHeightAboveNode(NavCornerType);
	bool IsBlockedInAnyDirection();
	bool IsBlockedInDirection(NavDirType);
	CNavNode();
	bool TestForCrouchArea(NavCornerType, const Vector &, const Vector &, float *);
	void CheckCrouch();

	// sizeof = 184
};
