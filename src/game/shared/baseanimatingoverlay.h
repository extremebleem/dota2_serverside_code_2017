// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseanimatingoverlay.h:26
class CBaseAnimatingOverlay : public CBaseAnimating {
	enum {
		MAX_OVERLAYS = 0xf,
	};

public:

private:

	static datamap_t m_DataMap;
	typedef CBaseAnimating BaseClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CBaseAnimatingOverlay & operator=(CBaseAnimatingOverlay &);
	CBaseAnimatingOverlay(CBaseAnimatingOverlay &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void EntCmpOverride_CBodyComponent();
	CBodyComponentBaseAnimatingOverlay * GetComponent_CBodyComponentBaseAnimatingOverlay();
	const CBodyComponentBaseAnimatingOverlay * GetComponent(const CBodyComponentBaseAnimatingOverlay *);
	CBodyComponentBaseAnimatingOverlay * GetComponent(CBodyComponentBaseAnimatingOverlay *);
	CBaseAnimatingOverlay();
	virtual ~CBaseAnimatingOverlay();
	virtual CBaseAnimatingOverlay * GetBaseAnimatingOverlay();
	virtual const CBaseAnimatingOverlay * GetBaseAnimatingOverlay();
	virtual void OnRestore();
	int AddGestureSequence(HSequence, bool);
	int AddGestureSequence(HSequence, float, bool);
	int AddGesture(Activity, bool);
	int AddGesture(Activity, float, bool);
	bool IsPlayingGesture(Activity);
	void RestartGesture(Activity, bool, bool);
	void RemoveGesture(Activity);
	void RemoveAllGestures();
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
	Activity GetLayerActivity(int);
	HSequence GetLayerSequence(int);
	int FindGestureLayer(Activity);
	void RemoveLayer(int, float, float);
	void FastRemoveLayer(int);
	CAnimationLayer * GetAnimOverlay(int);
	const CAnimationLayer * GetAnimOverlay(int);
	int GetNumAnimOverlays();
	void SetNumAnimOverlays(int);
	bool HasActiveLayer();
	void SetOverlayPrevEventCycle(int, float);
	CBaseAnimatingOverlayController * GetBaseAnimatingOverlayController();
	const CBaseAnimatingOverlayController * GetBaseAnimatingOverlayController();
	void VerifyOrder();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[45] GetBaseAnimatingOverlay
	// vtable[46] GetBaseAnimatingOverlay
	// vtable[18] OnRestore
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[28] HackToMakeAVTable
	// sizeof = 1216
};
