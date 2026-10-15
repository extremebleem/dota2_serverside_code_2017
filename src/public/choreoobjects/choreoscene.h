// Reconstructed from DWARF by pahole; not original source.

// src/public/choreoobjects/choreoscene.h:59
class CSceneTokenProcessor : public ISceneTokenProcessor {
public:

private:

	const char * m_pBuffer;  // +0x8
	char m_szToken[1024];  // +0x10
	CSceneTokenProcessor(CSceneTokenProcessor &);
	CSceneTokenProcessor(const CSceneTokenProcessor &);
	CSceneTokenProcessor();
	CSceneTokenProcessor(const char *);
	CSceneTokenProcessor(const CUtlBuffer &);
	virtual const char * CurrentToken();
	virtual bool GetToken(bool);
	virtual bool TokenAvailable();
	virtual void Error(const char *, ...);
	void SetBuffer(const char *);
	void SetBuffer(const CUtlBuffer &);
	const char * ParseNextToken(const char *);

	// vtable[0] CurrentToken
	// vtable[1] GetToken
	// vtable[2] TokenAvailable
	// vtable[3] Error
	// sizeof = 1296
};

// src/public/choreoobjects/choreoscene.h:90
class CChoreoScene : public ICurveDataAccessor {
	enum {
		IN_RANGE = 0,
		BEFORE_RANGE = 0x1,
		AFTER_RANGE = 0x2,
	};

	enum {
		PROCESSING_TYPE_IGNORE = 0,
		PROCESSING_TYPE_START = 0x1,
		PROCESSING_TYPE_START_RESUMECONDITION = 0x2,
		PROCESSING_TYPE_CONTINUE = 0x3,
		PROCESSING_TYPE_STOP = 0x4,
	};

	struct ActiveList {
		typedef enum {
			PROCESSING_TYPE_IGNORE = 0,
			PROCESSING_TYPE_START = 0x1,
			PROCESSING_TYPE_START_RESUMECONDITION = 0x2,
			PROCESSING_TYPE_CONTINUE = 0x3,
			PROCESSING_TYPE_STOP = 0x4,
		} PROCESSING_TYPE;

		PROCESSING_TYPE pt;  // +0x0

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

	static bool s_bEditingDisabled;
private:

	float m_flCurrentTime;  // +0x98
	float m_flStartTime;  // +0x9c
	float m_flEndTime;  // +0xa0
	float m_flEarliestTime;  // +0xa4
	float m_flLatestTime;  // +0xa8
	int m_nActiveEvents;  // +0xac
	float m_flSoundSystemLatency;  // +0xb0
	float m_flLastActiveTime;  // +0xb4
	void (*m_pfnPrint)(const char *, ...);  // +0xb8
	int m_nSceneFPS;  // +0xd8

	bool m_bIsBackground:1;  // +0x164:0
	bool m_bIgnorePhonemes:1;  // +0x164:1
	bool m_bSubScene:1;  // +0x164:2
	bool m_bUseFrameSnap:1;  // +0x164:3
	bool m_bRestoring:1;  // +0x164:4

	int m_nLastPauseEvent;  // +0x168
	float m_flPrecomputedStopTime;  // +0x16c
	void CChoreoScene(CChoreoScene *, IChoreoEventCallback *, ScenePrintFunction);
	virtual void ~CChoreoScene(CChoreoScene *, int);
	void CChoreoScene(CChoreoScene *, const CChoreoScene &);
	CChoreoScene & operator=(CChoreoScene *, const CChoreoScene &);
	CChoreoEvent * FindEvent(const CChoreoScene *, ChoreoObjectHandle_t);
	CChoreoActor * FindActor(const CChoreoScene *, ChoreoObjectHandle_t);
	CChoreoChannel * FindChannel(const CChoreoScene *, ChoreoObjectHandle_t);
	virtual float GetDuration(const CChoreoScene *);
	virtual bool CurveHasEndTime(const CChoreoScene *);
	virtual int GetDefaultCurveType(const CChoreoScene *);
	virtual float GetDefaultEdgeValue(const CChoreoScene *);
	bool SaveBinary(CChoreoScene *, const char *, const char *, unsigned int, IChoreoStringPool *);
	void SaveToBinaryBuffer(CChoreoScene *, CUtlBuffer &, unsigned int, IChoreoStringPool *);
	bool RestoreFromBinaryBuffer(CChoreoScene *, CUtlBuffer &, const char *, IChoreoStringPool *);
	bool RestoreFromTextBuffer(CChoreoScene *, CUtlBuffer &, const char *);
	bool GetCRCFromBinaryBuffer(CUtlBuffer &, unsigned int &);
	void SetRestoring(CChoreoScene *, bool);
	bool IsRestoring(const CChoreoScene *);
	void SetEventCallbackInterface(CChoreoScene *, IChoreoEventCallback *);
	bool ParseFromBuffer(CChoreoScene *, const char *, ISceneTokenProcessor *);
	bool ParseFromBuffer(CChoreoScene *, CUtlBuffer &, ISceneTokenProcessor *);
	void SetPrintFunc(CChoreoScene *, void (*)(const char *, ...));
	bool SaveToFile(CChoreoScene *, const char *);
	bool ExportMarkedToFile(const CChoreoScene *, const char *);
	void ExportMarkedToBuffer(const CChoreoScene *, CUtlBuffer &);
	void MarkForSaveAll(CChoreoScene *, bool);
	bool Merge(CChoreoScene *, CChoreoScene *);
	void FileSaveFlexAnimationTrack(const CChoreoScene *, CUtlBuffer &, int, const CFlexAnimationTrack *, int);
	void FileSaveFlexAnimations(const CChoreoScene *, CUtlBuffer &, int, const CChoreoEvent *);
	void FileSaveRamp(const CChoreoScene *, CUtlBuffer &, int, const CChoreoEvent *);
	void FileSaveSceneRamp(const CChoreoScene *, CUtlBuffer &, int);
	void FileSaveScaleSettings(const CChoreoScene *, CUtlBuffer &, int, const CChoreoScene *);
	void ParseFlexAnimations(const CChoreoScene *, ISceneTokenProcessor *, CChoreoEvent *, bool);
	void ParseRamp(const CChoreoScene *, ISceneTokenProcessor *, CChoreoEvent *);
	void ParseSceneRamp(CChoreoScene *, ISceneTokenProcessor *);
	void ParseScaleSettings(CChoreoScene *, ISceneTokenProcessor *);
	void ParseEdgeInfo(const CChoreoScene *, ISceneTokenProcessor *, EdgeInfo_t *);
	void SceneMsg(CChoreoScene *, const char *, ...);
	void Print(CChoreoScene *);
	void SetSoundFileStartupLatency(CChoreoScene *, float);
	void Think(CChoreoScene *, float);
	float GetTime(CChoreoScene *);
	void GetSceneTimes(CChoreoScene *, float &, float &);
	void SetTime(CChoreoScene *, float);
	void LoopToTime(CChoreoScene *, float);
	bool SimulationFinished(CChoreoScene *);
	bool SpeechFinished(const CChoreoScene *);
	void ResetSimulation(CChoreoScene *, bool, float, float);
	float FindStopTime(const CChoreoScene *);
	float FindLastSpeakTime(const CChoreoScene *);
	void ResumeSimulation(CChoreoScene *);
	bool CheckEventCompletion(CChoreoScene *);
	CChoreoActor * FindActor(CChoreoScene *, const char *);
	void RemoveActor(CChoreoScene *, CChoreoActor *);
	int FindActorIndex(CChoreoScene *, CChoreoActor *);
	void SwapActors(CChoreoScene *, int, int);
	int GetNumEvents(const CChoreoScene *);
	CChoreoEvent * GetEvent(const CChoreoScene *, int);
	int GetNumActors(const CChoreoScene *);
	CChoreoActor * GetActor(CChoreoScene *, int);
	const CChoreoActor * GetActor(const CChoreoScene *, int);
	int GetNumChannels(const CChoreoScene *);
	CChoreoChannel * GetChannel(CChoreoScene *, int);
	void DeleteReferencedObjects(CChoreoScene *, CChoreoActor *);
	void DeleteReferencedObjects(CChoreoScene *, CChoreoChannel *);
	void DeleteReferencedObjects(CChoreoScene *, CChoreoEvent *);
	CChoreoActor * AllocActor(CChoreoScene *);
	CChoreoChannel * AllocChannel(CChoreoScene *);
	CChoreoEvent * AllocEvent(CChoreoScene *);
	void AddEventToScene(CChoreoScene *, CChoreoEvent *);
	void AddActorToScene(CChoreoScene *, CChoreoActor *);
	void AddChannelToScene(CChoreoScene *, CChoreoChannel *);
	void ReconcileGestureTimes(CChoreoScene *);
	void ReconcileTags(CChoreoScene *);
	CEventRelativeTag * FindTagByName(CChoreoScene *, const char *, const char *);
	CChoreoEvent * FindTargetingEvent(CChoreoScene *, const char *, const char *);
	const char * GetMapname(const CChoreoScene *);
	void SetMapname(CChoreoScene *, const char *);
	void ExportEvents(CChoreoScene *, const char *, CUtlVector<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> > &);
	void ImportEvents(CChoreoScene *, ISceneTokenProcessor *, CChoreoActor *, CChoreoChannel *);
	void SetSubScene(CChoreoScene *, bool);
	bool IsSubScene(const CChoreoScene *);
	int GetSceneFPS(const CChoreoScene *);
	void SetSceneFPS(CChoreoScene *, int);
	bool IsUsingFrameSnap(const CChoreoScene *);
	void SetUsingFrameSnap(CChoreoScene *, bool);
	float SnapTime(CChoreoScene *, float);
	const CCurveData * GetSceneRamp(const CChoreoScene *);
	CCurveData * GetSceneRamp(CChoreoScene *);
	int GetTimeZoom(const CChoreoScene *, const char *);
	void SetTimeZoom(CChoreoScene *, const char *, int);
	int TimeZoomFirst(CChoreoScene *);
	int TimeZoomNext(CChoreoScene *, int);
	int TimeZoomInvalid(const CChoreoScene *);
	const char * TimeZoomName(CChoreoScene *, int);
	void ReconcileCloseCaption(CChoreoScene *);
	const char * GetFilename(const CChoreoScene *);
	void SetFileName(CChoreoScene *, const char *);
	bool GetPlayingSoundName(CChoreoScene *, char *, int);
	bool HasUnplayedSpeech(const CChoreoScene *);
	bool HasFlexAnimation(const CChoreoScene *);
	void SetBackground(CChoreoScene *, bool);
	bool IsBackground(const CChoreoScene *);
	void ClearPauseEventDependencies(CChoreoScene *);
	bool HasEventsOfType(const CChoreoScene *, enum );
	void RemoveEventsExceptTypes(CChoreoScene *, int *, int);
	void GatherEventsOfType(const CChoreoScene *, EVENTTYPE, CUtlVector<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> > &, bool);
	void GatherNonGlobalEvents(const CChoreoScene *, CUtlVector<CChoreoEvent*, CUtlMemory<CChoreoEvent*, int> > &);
	float GetStartTime(const CChoreoScene *);
	float GetEndTime(const CChoreoScene *);
	void IgnorePhonemes(CChoreoScene *, bool);
	bool ShouldIgnorePhonemes(const CChoreoScene *);
	int IsTimeInRange(CChoreoScene *, float, float, float);
	bool EventLess(const ActiveList &, const ActiveList &);
	int EventThink(CChoreoScene *, CChoreoEvent *, float, float, bool, PROCESSING_TYPE &);
	void choreoprintf(CChoreoScene *, int, const char *, ...);
	void Init(CChoreoScene *, IChoreoEventCallback *);
	float FindAdjustedStartTime(CChoreoScene *);
	float FindAdjustedEndTime(CChoreoScene *);
	CChoreoEvent * FindPauseBetweenTimes(CChoreoScene *, float, float);
	CChoreoEvent * ParseEvent(CChoreoScene *, CChoreoActor *, CChoreoChannel *);
	CChoreoChannel * ParseChannel(CChoreoScene *, CChoreoActor *);
	CChoreoActor * ParseActor(CChoreoScene *);
	void ParseFPS(CChoreoScene *);
	void ParseSnap(CChoreoScene *);
	void ParseIgnorePhonemes(CChoreoScene *);
	void ParseMapname(CChoreoScene *);
	void ParseFacePoserModel(CChoreoScene *, CChoreoActor *);
	void PrintEvent(CChoreoScene *, int, CChoreoEvent *);
	void PrintChannel(CChoreoScene *, int, CChoreoChannel *);
	void PrintActor(CChoreoScene *, int, CChoreoActor *);
	void FilePrintf(const CChoreoScene *, CUtlBuffer &, int, const char *, ...);
	void FileSaveEvent(const CChoreoScene *, CUtlBuffer &, int, const CChoreoEvent *);
	void FileSaveChannel(const CChoreoScene *, CUtlBuffer &, int, const CChoreoChannel *);
	void FileSaveActor(const CChoreoScene *, CUtlBuffer &, int, const CChoreoActor *);
	void FileSaveHeader(const CChoreoScene *, CUtlBuffer &);
	void DestroyActor(CChoreoScene *, CChoreoActor *);
	void DestroyChannel(CChoreoScene *, CChoreoChannel *);
	void DestroyEvent(CChoreoScene *, CChoreoEvent *);
	void AddPauseEventDependency(CChoreoScene *, CChoreoEvent *, CChoreoEvent *);
	void InternalDetermineEventTypes(CChoreoScene *);

// vtable[0] GetDuration
// vtable[1] CurveHasEndTime
// vtable[2] GetDefaultCurveType
// vtable[3] GetDefaultEdgeValue
};

// src/public/choreoobjects/choreoscene.h:474
class IChoreoStringPool {
	int ()() * * _vptr.IChoreoStringPool;  // +0x0
	IChoreoStringPool(IChoreoStringPool &);
	IChoreoStringPool(const IChoreoStringPool &);
	IChoreoStringPool();
	virtual int FindOrAddString(const char *);
	virtual bool GetString(int, char *, int);

	// vtable[0] FindOrAddString
	// vtable[1] GetString
	// sizeof = 8
};
