// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gamecore/worklist.h:105
class CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4> {
	struct InternalInfo_t : public SceneObjectUpdater_t {
	public:

		uint32 m_nWorkFrameCount;  // +0x50
		int32 m_nActiveIndex:24;  // +0x54:0
		int32 m_nWorkType:8;  // +0x54:24
		InternalInfo_t();

		// sizeof = 88
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	unsigned int m_pWorkFrameCount[4];  // +0x110
	bool m_bAllowAddsToActiveWorkList;  // +0x120
	CWorkListTransient();
	WorkItemHandle_t AddWorkItem(const SceneObjectUpdater_t &, int);
	void RemoveWorkItem(WorkItemHandle_t);
	int WorkItemCount();
	void AddToActiveWorkList(WorkItemHandle_t);
	void ReaddToActiveWorkList(int, int);
	void ReaddToActiveWorkList(int, int, SceneObjectUpdater_t * *);
	void AdvanceFrame(int, int *, SceneObjectUpdater_t * * *);
	SceneObjectUpdater_t & GetWorkItem(WorkItemHandle_t);
	const SceneObjectUpdater_t & GetWorkItem(WorkItemHandle_t);
	int GetWorkItemType(WorkItemHandle_t);
	void AllowAddsToActiveWorkList(bool);
	int CountForType(int, int);

	// sizeof = 296
};

// src/game/include/gamecore/worklist.h:105
class CWorkListTransient<CRenderGameSystem::SceneObjectUpdater_t, 4> {
	struct InternalInfo_t : public SceneObjectUpdater_t {
	public:

		uint32 m_nWorkFrameCount;  // +0x50
		int32 m_nActiveIndex:24;  // +0x54:0
		int32 m_nWorkType:8;  // +0x54:24
		InternalInfo_t();

		// sizeof = 88
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	unsigned int m_pWorkFrameCount[4];  // +0x110
	bool m_bAllowAddsToActiveWorkList;  // +0x120
	CWorkListTransient();
	WorkItemHandle_t AddWorkItem(const SceneObjectUpdater_t &, int);
	void RemoveWorkItem(WorkItemHandle_t);
	int WorkItemCount();
	void AddToActiveWorkList(WorkItemHandle_t);
	void ReaddToActiveWorkList(int, int);
	void ReaddToActiveWorkList(int, int, SceneObjectUpdater_t * *);
	void AdvanceFrame(int, int *, SceneObjectUpdater_t * * *);
	SceneObjectUpdater_t & GetWorkItem(WorkItemHandle_t);
	const SceneObjectUpdater_t & GetWorkItem(WorkItemHandle_t);
	int GetWorkItemType(WorkItemHandle_t);
	void AllowAddsToActiveWorkList(bool);
	int CountForType(int, int);
	~CWorkListTransient();

	// sizeof = 296
};
