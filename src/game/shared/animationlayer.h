// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/animationlayer.h:54
class CAnimationLayer {
	class NetworkVar_m_nOrder {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flPlaybackRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bLooping {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nNewSequenceParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CAnimationLayer;  // +0x0
private:

	static datamap_t m_DataMap;

	class NetworkVar_m_op : public CNetworkedSequenceOperation {
	public:

		~NetworkVar_m_op();
		NetworkVar_m_op(NetworkVar_m_op &);
		NetworkVar_m_op(const NetworkVar_m_op &);
		NetworkVar_m_op();
		void CopyFrom(const CNetworkedSequenceOperation &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[2] NetworkStateChanged
		// vtable[4] NetworkStateChangedLog
		// vtable[3] NetworkStateChanged
		// sizeof = 40
	};

	typedef CNetworkVarBase<CNetworkedQuantizedFloat, CAnimationLayer::NetworkVar_m_flPlaybackRate> _NetworkVar_m_flPlaybackRate_t;

	_NetworkVar_m_flPlaybackRate_t m_flPlaybackRate;  // +0x44

	int m_nFlags;  // +0x54
	bool m_bSequenceFinished;  // +0x58

	float m_flKillRate;  // +0x5c
	float m_flKillDelay;  // +0x60
	float m_flLayerAnimtime;  // +0x64
	float m_flLayerFadeOuttime;  // +0x68
	Activity m_nActivity;  // +0x6c
	int m_nPriority;  // +0x70
	float m_flLastEventCycle;  // +0x74
	float m_flLastAccess;  // +0x78

	typedef CAnimationLayer ThisClass;
	typedef ThisClass ThisClass_m_op;

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CAnimationLayer();
	CAnimationLayer & operator=(const CAnimationLayer &);
	~CAnimationLayer();
	void Init(CBaseAnimatingOverlayController *);
	void SetOwner(CBaseAnimatingOverlayController *);
	CSkeletonInstance * GetSkeletonInstance();
	const CSkeletonInstance * GetSkeletonInstance();
	CBaseAnimatingOverlayController * GetOwner();
	const CBaseAnimatingOverlayController * GetOwner();
	void Reset();
	void AnimationFrameAdvance(float);
	int ComputeMaxAnimEvents();
	int DetectAnimEvents(float, float, int, animevent_t *);
	void SetOrder(int, LayerChangeBehavior_t);
	float GetFadeout(float);
	void SetActivity(Activity);
	Activity GetActivity();
	int GetFlags();
	void SetFlags(int);
	void ClearFlags(int);
	void ClearFlags();
	bool IsActive();
	bool IsAutokill();
	bool IsKillMe();
	void KillMe();
	void Dying();
	bool IsDying();
	void Dead();
	bool NoEvents();
	void SetAutofadeDisabled(bool);
	bool IsAutofadeDisabled();
	void SetLooping(bool);
	bool IsLooping();
	void SetSequence(HSequence, SetSequenceBehavior_t, LayerChangeBehavior_t);
	void ResetSequence(HSequence, LayerChangeBehavior_t);
	void SetCycle(float, LayerChangeBehavior_t);
	void SetPrevCycle(float);
	void SetPlaybackRate(float);
	void SetWeight(float, LayerChangeBehavior_t);
	void SetAnimTime(float);
	void SetPriority(int);
	void SetSequenceFinished(bool);
	void SetLastEventCheck(float);
	void SetFadeOutTime(float);
	void SetKillDelay(float);
	void SetKillRate(float);
	HSequence GetSequence();
	float GetCycle();
	float GetPrevCycle();
	float GetPlaybackRate();
	float GetWeight();
	int GetOrder();
	float GetKillDelay();
	float GetKillRate();
	float GetAnimTime();
	float GetFadeOutTime();
	bool IsSequenceFinished();
	float GetLastEventCheck();
	int GetPriority();
	float GetLastAccess();
	bool IsAbandoned();
	void MarkActive();
	void GetOperation(CAnimationDecodeOp *);
	void CopyFrom(CAnimationLayer *);
	void OnOrderChanged(CEntityInstance *, const int *);
	void OnClientSideAnimCycleReset();
	int Debug(int);
	void OnAnimationOpChanged(CEntityInstance *);
	void Init();
	int GetOffset_m_op();
	CAnimationLayer(const CAnimationLayer &);
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[1] HackToMakeAVTable
	// sizeof = 136
};
