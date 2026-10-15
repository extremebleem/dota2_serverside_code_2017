// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/networktransmitcomponent.h:20
class CNetworkTransmitComponent : public IEventRegisterCallback {
public:

private:

	static datamap_t m_DataMap;

	uint32 m_nStateFlags;  // +0x40
	uint8 m_nTransmitStateOwnedCounter;  // +0x44
	bool m_bPendingStateChange;  // +0x45

	SpawnGroupHandle_t m_PhysicalSpawnGroupHandle;  // +0x54

	static int s_nWatchTransmitEntity;
	static bool s_bUseNetworkVars;
	static bool s_bNetworkVarPerFieldTracking;
	static bool s_bNetworkVarValidate;
	CNetworkTransmitComponent(const CNetworkTransmitComponent &);
	CNetworkTransmitComponent & operator=(const CNetworkTransmitComponent &);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CNetworkTransmitComponent();
	~CNetworkTransmitComponent();
	void Init(CBaseEntity *);
	void LatchSettings();
	virtual void FireEvent();
	int SetTransmitState(int);
	int GetTransmitState();
	void ClearTransmitState();
	void StateChanged();
	void StateChanged(CEntityInstance *, uint32, int32, ChangeAccessorFieldPathIndex_t);
	ChangeAccessorFieldPathIndex_t AddChangeAccessorPath(CEntityInstance *, const CFieldPath &);
	void ClearStateChanged();
	ChangeAccessorFieldPathIndexInfo_t * GetChangeAccessorFieldPathIndexInfo();
	const ChangeAccessorFieldPathIndexInfo_t * GetChangeAccessorFieldPathIndexInfo();
	bool HasChangeOffsetsInfo();
	CChangeInfoAccessor * GetChangeAccessor();
	bool IsInsideDispatchUpdateTransmitState();
	int DispatchUpdateTransmitState(CBaseEntity *);
	void IncrementTransmitStateOwnedCounter();
	void DecrementTransmitStateOwnedCounter();
	bool IsInPVS(const CGameCheckTransmitInfo &);
	void MarkPVSInformationDirty();
	void RecomputePVSInformation(CEntityIndex);
	int AreaNum(CEntityIndex);
	const SpawnGroupHandle_t & GetPhysicalSpawnGroupHandle();
	void CalcPhysicalSpawnGroupHandle();
	void SetUpdateInterval(float);
	CBaseEntity * GetOuter();
	bool IsInPVSOfConnectedSpawnGroup_R(CUtlHash<CUtlStringToken, bool (*)(const CUtlStringToken&, const CUtlStringToken&), unsigned int (*)(const CUtlStringToke, const CUtlStringToken &, CMapSpawnGroup *, CMapSpawnGroup *, const Vector &, bool);
	bool ValidateChangeOffset(FlattenedSerializerHandle_t, const char *, VarChangeInfo_t &, CUtlString &);

	// vtable[1] Schema_DynamicBinding
	// vtable[0] FireEvent
	// sizeof = 88
};
