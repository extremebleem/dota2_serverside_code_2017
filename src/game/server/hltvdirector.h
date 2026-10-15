// Reconstructed from DWARF by pahole; not original source.

// src/game/server/hltvdirector.h:33
class CHLTVGameEvent {
	int m_Tick;  // +0x0
	int m_Priority;  // +0x4
	long int m_Index;  // +0x8

	// sizeof = 24
};

// src/game/server/hltvdirector.h:42
class CHLTVDirector : public CGameEventListener, public IGameSystem, public IHLTVDirector {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	float m_fDelay;  // +0x38
	int m_nBroadcastTick;  // +0x3c

	int m_nNextShotTick;  // +0x60
	int m_iLastPlayer;  // +0x64
	int m_nNextAnalyzeTick;  // +0x68
	int m_nNumFixedCameras;  // +0x6c
	int m_nNumActivePlayers;  // +0x270

	int m_iRunningIndex;  // +0x484
	CUtlRBTree<CHLTVGameEvent, short unsigned int, bool (*)(const CHLTVGameEvent&, const CHLTVGameEvent&), CUtlMemory<UtlRBTreeNode_t<CHLTVGameEvent, short unsigned int>, short unsigned int> > m_EventHistory;  // +0x488
	typedef IGameSystem BaseClass;
	CHLTVDirector(const CHLTVDirector &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CHLTVDirector *);
	CHLTVDirector();
	virtual ~CHLTVDirector();
	virtual bool IsActive();
	virtual void SetHLTVServer(IHLTVServer *);
	virtual IHLTVServer * GetHLTVServer();
	virtual int GetDirectorTick();
	virtual CEntityIndex GetPVSEntity();
	virtual Vector GetPVSOrigin();
	virtual float GetDelay();
	virtual const char * * GetModEvents();
	virtual void OnStartRecording();
	virtual int GetDirectorCameraEventId();
	virtual void BroadcastLocalTitle(CEntityIndex);
	virtual void CreateLocalChatMessage(const CSteamID &, const char *, const char *, NetMessageHandle_t &, void * &);
	virtual void OnHLTVUncompressedSnapshot(int, bf_write &);
	virtual void OnHLTVNetMessage(NetMessageHandle_t, const NetMessageInfo_t *, const void *);
	void BuildCameraList();
	float GetBroadcastTime();
	virtual void FireGameEvent(IGameEvent *);
	virtual bool Init();
	virtual void Shutdown();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual const char * GetFixedCameraEntityName();
	bool SetCameraMan(CEntityIndex);
	CEntityIndex GetCameraMan();
	void BroadcastScreenMessage(const char *);
	void BroadcastEventInternal(IGameEvent *, IHLTVServer *);
	virtual void StartNewShot();
	virtual void StartRandomShot();
	virtual void StartDelayMessage();
	virtual void StartBestFixedCameraShot(bool);
	virtual void StartBestPlayerCameraShot();
	virtual void StartFixedCameraShot(int, int);
	virtual void StartChaseCameraShot(CEntityIndex, CEntityIndex, int, int, int, bool);
	virtual void UpdateSettings();
	virtual void AnalyzePlayers();
	virtual void AnalyzeCameras();
	virtual bool StartCameraManShot();
	virtual void StartInstantBroadcastShot();
	virtual void FinishCameraManShot();
	virtual void BuildActivePlayerList();
	virtual CHLTVGameEvent * FindBestGameEvent();
	virtual void CreateShotFromEvent(CHLTVGameEvent *);
	virtual void NewEventNotification(CHLTVGameEvent *);
	int FindFirstEvent(int);
	void CheckHistory();
	void RemoveEventsFromHistory(int);

	// vtable[3] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[4] DoesGameSystemReallocate
	// vtable[5] SetGameSystemGlobalPtrs
	// vtable[6] IsActive
	// vtable[7] SetHLTVServer
	// vtable[8] GetHLTVServer
	// vtable[9] GetDirectorTick
	// vtable[10] GetPVSEntity
	// vtable[11] GetPVSOrigin
	// vtable[12] GetDelay
	// vtable[13] GetModEvents
	// vtable[14] OnStartRecording
	// vtable[15] GetDirectorCameraEventId
	// vtable[16] BroadcastLocalTitle
	// vtable[17] CreateLocalChatMessage
	// vtable[18] OnHLTVUncompressedSnapshot
	// vtable[19] OnHLTVNetMessage
	// vtable[2] FireGameEvent
	// vtable[20] Init
	// vtable[21] Shutdown
	// vtable[22] FrameUpdatePostEntityThink
	// vtable[23] PostSpawnGroupLoad
	// vtable[24] GetFixedCameraEntityName
	// vtable[25] StartNewShot
	// vtable[26] StartRandomShot
	// vtable[27] StartDelayMessage
	// vtable[28] StartBestFixedCameraShot
	// vtable[29] StartBestPlayerCameraShot
	// vtable[30] StartFixedCameraShot
	// vtable[31] StartChaseCameraShot
	// vtable[32] UpdateSettings
	// vtable[33] AnalyzePlayers
	// vtable[34] AnalyzeCameras
	// vtable[35] StartCameraManShot
	// vtable[36] StartInstantBroadcastShot
	// vtable[37] FinishCameraManShot
	// vtable[38] BuildActivePlayerList
	// vtable[39] FindBestGameEvent
	// vtable[40] CreateShotFromEvent
	// vtable[41] NewEventNotification
	// sizeof = 1208
};
