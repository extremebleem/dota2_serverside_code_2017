// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_hltvdirector.h:15
class CDOTAHLTVDirector : public CHLTVDirector {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nNextForcedShotTick;  // +0x4bc
	int m_nNextShotID;  // +0x4c0
	int m_cameraEventId;  // +0x4c4

	char m_szLastReplayFilename[260];  // +0x4e0

	typedef CHLTVDirector BaseClass;
	CDOTAHLTVDirector(CDOTAHLTVDirector &);
	CDOTAHLTVDirector(const CDOTAHLTVDirector &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAHLTVDirector *);
	CDOTAHLTVDirector();
	virtual int GetDirectorCameraEventId();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	void GameRules_State_Enter(DOTA_GameState);
	void FinishRecording();
	void UploadReplay(uint32, LobbyType);
	virtual void CreateShotFromEvent(CHLTVGameEvent *);
	virtual void SetHLTVServer(IHLTVServer *);
	void StartChaseCameraShot(int, int, int, int, float, EDOTAHeroChaseEventType);
	virtual void StartRandomShot();
	virtual const char * * GetModEvents();
	virtual void AnalyzePlayers();
	bool UploadReplayFiles(const CUtlStringList &);
	virtual CHLTVGameEvent * FindBestGameEvent();
	void TryToGenerateTeleportEvent(EHANDLE);
	virtual void NewEventNotification(CHLTVGameEvent *);

private:

	void DiscardReplay();
	virtual void Shutdown();
	virtual ~CDOTAHLTVDirector();

	// vtable[3] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[4] DoesGameSystemReallocate
	// vtable[5] SetGameSystemGlobalPtrs
	// vtable[15] GetDirectorCameraEventId
	// vtable[22] FrameUpdatePostEntityThink
	// vtable[40] CreateShotFromEvent
	// vtable[7] SetHLTVServer
	// vtable[26] StartRandomShot
	// vtable[13] GetModEvents
	// vtable[33] AnalyzePlayers
	// vtable[39] FindBestGameEvent
	// vtable[41] NewEventNotification
	// vtable[21] Shutdown
	// sizeof = 1536
};
