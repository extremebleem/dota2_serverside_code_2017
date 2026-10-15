// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/sceneentity_shared.h:36
class CSceneEventInfo {
private:

	bool m_bStarted;  // +0x1c

	int m_iLayer;  // +0x20
	int m_iPriority;  // +0x24
	bool m_bIsGesture;  // +0x2c

	float m_flWeight;  // +0x30
	EHANDLE m_hTarget;  // +0x34
	bool m_bIsMoving;  // +0x38
	bool m_bHasArrived;  // +0x39

	float m_flInitialYaw;  // +0x3c
	float m_flTargetYaw;  // +0x40
	float m_flFacingYaw;  // +0x44
	int m_nType;  // +0x48
	float m_flNext;  // +0x4c
	bool m_bClientSide;  // +0x50
	bool m_bShouldRemove;  // +0x51

	const flexsettinghdr_t * m_pExpHdr;  // +0x58

	CSceneEventInfo();
	void InitWeight(CBaseFlex *);
	float UpdateWeight(CBaseFlex *);
	bool ShouldContinueProcessing();

	// sizeof = 96
};

// src/game/shared/sceneentity_shared.h:97
class IFlexSceneFileManager {
	int ()() * * _vptr.IFlexSceneFileManager;  // +0x0
	IFlexSceneFileManager(IFlexSceneFileManager &);
	IFlexSceneFileManager(const IFlexSceneFileManager &);
	~IFlexSceneFileManager();
	IFlexSceneFileManager();
	virtual const flexsettinghdr_t * FindSceneFile(CBaseFlex *, const char *, bool);

	// vtable[0] FindSceneFile
	// sizeof = 8
};
