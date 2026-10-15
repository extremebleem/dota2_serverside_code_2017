// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pvsmanager.h:17
class IPVSManager {
	int ()() * * _vptr.IPVSManager;  // +0x0
	~IPVSManager();
	IPVSManager(IPVSManager &);
	IPVSManager(const IPVSManager &);
	IPVSManager();
	virtual IPVS * GetPVS(SpawnGroupHandle_t);
	virtual int GetClustersForBounds(SpawnGroupHandle_t, uint32 *, int, const Vector &, const Vector &, int *);
	virtual int GetClusterCount(SpawnGroupHandle_t);
	virtual int GetAllClusterBounds(SpawnGroupHandle_t, bbox_t *, int);
	virtual int GetClusterForOrigin(SpawnGroupHandle_t, const Vector &);
	virtual bool GetPVSForCluster(SpawnGroupHandle_t, int, vis_info_t *);
	virtual bool CheckOriginInPVS(SpawnGroupHandle_t, const Vector &, const vis_info_t *);
	virtual bool CheckBoxInPVS(SpawnGroupHandle_t, const Vector &, const Vector &, const vis_info_t *);
	virtual void ResetPVS(SpawnGroupHandle_t, vis_info_t *);
	virtual void AddOriginToPVS(SpawnGroupHandle_t, const Vector &, vis_info_t *);
	virtual bool CheckHeadnodeVisible(SpawnGroupHandle_t, int, const vis_info_t *);
	virtual bool CheckAreasConnected(SpawnGroupHandle_t, int, int);
	virtual int GetArea(SpawnGroupHandle_t, const Vector &);
	virtual void GetAreaBits(SpawnGroupHandle_t, int, unsigned char *, int);
	virtual bool GetAreaPortalPlane(SpawnGroupHandle_t, const Vector &, int, VPlane *);
	virtual void SetAreaPortalState(SpawnGroupHandle_t, int, int);
	virtual void SetAreaPortalStates(SpawnGroupHandle_t, const int *, const int *, int);
	virtual void GetAllSpawnGroupsWithPVS(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *, CUtlVector<IPVS*, CUtlMemory<IPVS*, int> > *);

	// vtable[0] GetPVS
	// vtable[1] GetClustersForBounds
	// vtable[2] GetClusterCount
	// vtable[3] GetAllClusterBounds
	// vtable[4] GetClusterForOrigin
	// vtable[5] GetPVSForCluster
	// vtable[6] CheckOriginInPVS
	// vtable[7] CheckBoxInPVS
	// vtable[8] ResetPVS
	// vtable[9] AddOriginToPVS
	// vtable[10] CheckHeadnodeVisible
	// vtable[11] CheckAreasConnected
	// vtable[12] GetArea
	// vtable[13] GetAreaBits
	// vtable[14] GetAreaPortalPlane
	// vtable[15] SetAreaPortalState
	// vtable[16] SetAreaPortalStates
	// vtable[17] GetAllSpawnGroupsWithPVS
	// sizeof = 8
};

// src/game/server/pvsmanager.h:71
class CPVSManager : public CAutoGameSystem, public IPVSManager {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CAutoGameSystem BaseClass;
	CPVSManager();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CPVSManager *);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	virtual IPVS * GetPVS(SpawnGroupHandle_t);
	virtual int GetClustersForBounds(SpawnGroupHandle_t, uint32 *, int, const Vector &, const Vector &, int *);
	virtual int GetClusterCount(SpawnGroupHandle_t);
	virtual int GetAllClusterBounds(SpawnGroupHandle_t, bbox_t *, int);
	virtual int GetClusterForOrigin(SpawnGroupHandle_t, const Vector &);
	virtual bool GetPVSForCluster(SpawnGroupHandle_t, int, vis_info_t *);
	virtual bool CheckOriginInPVS(SpawnGroupHandle_t, const Vector &, const vis_info_t *);
	virtual bool CheckBoxInPVS(SpawnGroupHandle_t, const Vector &, const Vector &, const vis_info_t *);
	virtual void ResetPVS(SpawnGroupHandle_t, vis_info_t *);
	virtual void AddOriginToPVS(SpawnGroupHandle_t, const Vector &, vis_info_t *);
	virtual bool CheckHeadnodeVisible(SpawnGroupHandle_t, int, const vis_info_t *);
	virtual bool CheckAreasConnected(SpawnGroupHandle_t, int, int);
	virtual int GetArea(SpawnGroupHandle_t, const Vector &);
	virtual void GetAreaBits(SpawnGroupHandle_t, int, unsigned char *, int);
	virtual bool GetAreaPortalPlane(SpawnGroupHandle_t, const Vector &, int, VPlane *);
	virtual void SetAreaPortalState(SpawnGroupHandle_t, int, int);
	virtual void SetAreaPortalStates(SpawnGroupHandle_t, const int *, const int *, int);
	virtual void GetAllSpawnGroupsWithPVS(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *, CUtlVector<IPVS*, CUtlMemory<IPVS*, int> > *);
	virtual ~CPVSManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[18] ActiveSpawnGroupChanged
	// vtable[40] GetPVS
	// vtable[41] GetClustersForBounds
	// vtable[42] GetClusterCount
	// vtable[43] GetAllClusterBounds
	// vtable[44] GetClusterForOrigin
	// vtable[45] GetPVSForCluster
	// vtable[46] CheckOriginInPVS
	// vtable[47] CheckBoxInPVS
	// vtable[48] ResetPVS
	// vtable[49] AddOriginToPVS
	// vtable[50] CheckHeadnodeVisible
	// vtable[51] CheckAreasConnected
	// vtable[52] GetArea
	// vtable[53] GetAreaBits
	// vtable[54] GetAreaPortalPlane
	// vtable[55] SetAreaPortalState
	// vtable[56] SetAreaPortalStates
	// vtable[57] GetAllSpawnGroupsWithPVS
	// sizeof = 32
};
