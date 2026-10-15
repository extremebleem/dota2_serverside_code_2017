// Reconstructed from DWARF by pahole; not original source.

// src/public/navlib/nav_openlist.h:18
class CNavOpenListElement {
protected:

	float m_flTotalCost;  // +0x10
	float m_flCostSoFar;  // +0x14
	float m_flPathLengthSoFar;  // +0x18
	CNavOpenListElement();
	CNavOpenListElement(CNavArea &, float, float, float);
	CNavArea * GetArea();
	void SetTotalCost(float);
	float GetTotalCost();
	void SetCostSoFar(float);
	float GetCostSoFar();
	void SetPathLengthSoFar(float);
	float GetPathLengthSoFar();

	// sizeof = 32
};

// src/public/navlib/nav_openlist.h:87
class CNavOpenList {
	struct SetHeapEntryIndex_t {
		void SetIndex(CNavOpenListElement &, int);

		// sizeof = 1
	};
	bool PriorityQueueLessFunc(const CNavOpenListElement &, const CNavOpenListElement &);
	CNavOpenList(int, int);
	bool IsEmpty();
	void RemoveAtHead();
	void RemoveAll();
	bool PopElement(CNavOpenListElement *);
	const CNavOpenListElement & GetElement(int);
	void AddArea(CNavArea &, float, float, float);
	void UpdateAreaCost(const CNavArea &, float, float, float);
	void DebugPrint();

	// sizeof = 32
};
