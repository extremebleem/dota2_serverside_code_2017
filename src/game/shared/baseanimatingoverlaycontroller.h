// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseanimatingoverlaycontroller.h:39
class CBaseAnimatingOverlayController : public CBaseAnimatingController {
	enum {
		MAX_OVERLAYS = 0xf,
	};

	class NetworkVar_m_AnimOverlay {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CBaseAnimatingOverlayController ThisClass;

public:

private:

	static datamap_t m_DataMap;

	bool m_bDisableStudioFrameAdvanceHack;  // +0x2a8
	bool m_bOrderIsExternallyControlled;  // +0x2a9
	typedef CBaseAnimatingController BaseClass;
	~CBaseAnimatingOverlayController();
	CBaseAnimatingOverlayController(CBaseAnimatingOverlayController &);
	CBaseAnimatingOverlayController(const CBaseAnimatingOverlayController &);
	CBaseAnimatingOverlayController & operator=(CBaseAnimatingOverlayController &);
	CBaseAnimatingOverlayController & operator=(const CBaseAnimatingOverlayController &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CBaseAnimatingOverlayController();
	virtual void Connect(CEntityInstance *);
	virtual void Spawn(CEntityInstance *, const CEntityKeyValues *);
	virtual void Activate(CEntityInstance *, ActivateType_t);
	virtual void UpdateOnRemove(CEntityInstance *);
	virtual bool AnimationFrameAdvance(float, float, AnimationAdvanceType_t);
	virtual void DispatchAnimEvents(float, CBaseEntity *);
	virtual void OnNewModel(const CModel *, const CModel *);
	virtual void SetupSequences(ISequenceSetup *);
	virtual void SetupAnimationHistoryContext(ISkeletonAnimationHistoryContext *);
	virtual void VerifyValidity();
	int AddGestureSequence(HSequence, bool);
	int AddGestureSequence(const char *, bool);
	int AddGestureSequence(HSequence, float, bool);
	int AddGestureSequence(const char *, float, bool);
	int AddGesture(Activity, bool);
	int AddGesture(Activity, float, bool);
	bool IsPlayingGesture(Activity);
	void RestartGesture(Activity, bool, bool);
	void RemoveGesture(Activity);
	void RemoveAllGestures();
	void SetLayerSequence(int, HSequence, SetSequenceBehavior_t);
	int AddLayeredSequence(HSequence, int);
	void SetLayerPriority(int, int);
	bool IsValidLayer(int);
	void SetLayerDuration(int, float);
	float GetLayerDuration(int);
	void SetLayerCycle(int, float);
	void SetLayerCycle(int, float, float);
	float GetLayerCycle(int);
	void SetLayerPlaybackRate(int, float);
	void SetLayerWeight(int, float);
	float GetLayerWeight(int);
	void SetLayerAutokill(int, bool);
	void SetLayerLooping(int, bool);
	void SetLayerNoRestore(int, bool);
	void SetLayerNoEvents(int, bool);
	void SetLayerAutofadeDisabled(int, bool);
	Activity GetLayerActivity(int);
	void SetLayerActivity(int, Activity);
	HSequence GetLayerSequence(int);
	int FindGestureLayer(Activity);
	void RemoveLayer(int, float, float);
	void FastRemoveLayer(int);
	CAnimationLayer * GetAnimOverlay(int);
	const CAnimationLayer * GetAnimOverlay(int);
	int GetNumAnimOverlays();
	void SetNumAnimOverlays(int);
	bool HasActiveLayer();
	void SetDisableStudioFrameAdvanceHack(bool);
	bool GetDisableStudioFrameAdvanceHack();
	virtual void GetSequenceBounds(Vector *, Vector *);
	void VerifyOrder();
	void SetOrderIsExternallyControlled(bool);
	virtual void GatherSequences(CUtlVector<CAnimationDecodeOp, CUtlMemory<CAnimationDecodeOp, int> > &, CUtlVector<TransitioningLaterMetaInfo_t, CUtlMemory<TransitioningLaterMetaInfo_t, int> > &);
	void AddLayerInterpolator(int);
	void RemoveLayerInterpolator(int);
	int AddOverlays(int);
	void RemoveOverlays(int);
	int AllocateLayer(int);
	void OnOverlaysChanged();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[1] HackToMakeAVTable
	// vtable[26] NetworkStateChanged
	// vtable[27] NetworkStateChanged
	// vtable[28] NetworkStateChangedLog
	// vtable[2] GetDataDescMap
	// vtable[4] Connect
	// vtable[6] Spawn
	// vtable[7] Activate
	// vtable[8] UpdateOnRemove
	// vtable[13] AnimationFrameAdvance
	// vtable[14] DispatchAnimEvents
	// vtable[17] OnNewModel
	// vtable[15] SetupSequences
	// vtable[16] SetupAnimationHistoryContext
	// vtable[18] VerifyValidity
	// vtable[25] GetSequenceBounds
	// vtable[30] GatherSequences
	// sizeof = 688
};

// src/game/shared/baseanimatingoverlaycontroller.h:156
class CBodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance {
public:

	class NetworkVar_m_animationController : public CBaseAnimatingOverlayController {
	public:

		~NetworkVar_m_animationController();
		NetworkVar_m_animationController(NetworkVar_m_animationController &);
		NetworkVar_m_animationController(const NetworkVar_m_animationController &);
		NetworkVar_m_animationController();
		void CopyFrom(const CBaseAnimatingOverlayController &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[26] NetworkStateChanged
		// vtable[28] NetworkStateChangedLog
		// vtable[27] NetworkStateChanged
		// sizeof = 688
	};

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;

	static datamap_t m_DataMap;
	typedef ThisClass ThisClass_m_animationController;
	typedef CBodyComponentSkeletonInstance BaseClass;
	typedef CBodyComponentBaseAnimatingOverlay ThisClass;
	CBodyComponentBaseAnimatingOverlay();
	virtual CSkeletonAnimationController * GetAnimationController();
	int GetOffset_m_animationController();
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	~CBodyComponentBaseAnimatingOverlay();

	// vtable[0] GetAnimationController
	// vtable[3] Schema_DynamicBinding
	// vtable[4] HackToMakeAVTable
	// vtable[5] GetDataDescMap
	// sizeof = 1600
};
