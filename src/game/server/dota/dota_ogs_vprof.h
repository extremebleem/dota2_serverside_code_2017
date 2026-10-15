// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_ogs_vprof.h:34
class CDOTA_OGS_VPROF : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef const char * ReportType_t;

	static const ReportType_t kREPORT_GAME_AVERAGE;
	/* tag__fprintf: const_type tag not supported! */;
	static const ReportType_t kREPORT_HEARTBEAT;
	static const ReportType_t kREPORT_SPIKE;
	static const ReportType_t kREPORT_INVALID;
	typedef CAutoGameSystem BaseClass;
	CDOTA_OGS_VPROF(CDOTA_OGS_VPROF &);
	CDOTA_OGS_VPROF(const CDOTA_OGS_VPROF &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_OGS_VPROF *);
	CDOTA_OGS_VPROF();
	void OnGameStart();
	void OnGameEnd();
	void HaltRecording();
	bool IsGameUnderway();
	ReportType_t CurrentReportMode();
	void ChangeReportMode(ReportType_t);
	void ForDebuggingOnlyForceGameReportNow();
	bool IsValid(ReportType_t);
	ReportType_t ConvarToReportType(int);
	void OnConvarChanged(IConVar *, const char *, float);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	void Reset();
	virtual ~CDOTA_OGS_VPROF();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 32
};
