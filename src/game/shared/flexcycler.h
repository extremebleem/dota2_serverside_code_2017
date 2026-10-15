// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/flexcycler.h:27
class CFlexCycler : public CBaseFlex {
public:

private:

	static datamap_t m_DataMap;

	float m_flextime;  // +0x54c
	float m_flextarget[2048];  // +0x554
	float m_blinktime;  // +0x2554
	float m_looktime;  // +0x2558
	float m_speaktime;  // +0x2568
	int m_istalking;  // +0x256c
	int m_phoneme;  // +0x2570
	string_t m_iszSentence;  // +0x2578
	int m_sentence;  // +0x2580
	typedef CBaseFlex BaseClass;

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
	CFlexCycler(CFlexCycler &);
	CFlexCycler(CFlexCycler &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CFlexCycler();
	virtual int ObjectCaps();
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void Spawn(const CEntityKeyValues *);
	void FlexThink();
	virtual void ProcessSceneEvents();
	virtual bool IsAlive();
	void InputAddSequenceLayer(inputdata_t &);
	void InputClearAllSequenceLayers(inputdata_t &);
	void SetFlexTarget(LocalFlexController_t);
	LocalFlexController_t LookupFlex(const char *);
	virtual ~CFlexCycler();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[19] ObjectCaps
	// vtable[90] OnTakeDamage
	// vtable[8] Spawn
	// vtable[253] ProcessSceneEvents
	// vtable[262] IsAlive
	// sizeof = 9608
};

// src/game/shared/flexcycler.h:70
class CGenericFlexCycler : public CFlexCycler, public IBoneTransformOverride {
	enum TestMode_t {
		NONE = 0,
		OSCILLATE_POSE_PARAMETERS = 0x1,
		ADD_AND_REMOVE_ANIMATION_LAYERS = 0x2,
		TRIGGER_ANIM_EVENTS = 0x3,
		TOGGLE_SEQUENCES = 0x4,
		TEST_MODEL_SCALE = 0x5,
		CLIENT_SIDE_RAGDOLL = 0x6,
		USE_PROCEDURAL_BONES = 0x7,
		RESET_SEQUENCES = 0x8,
		TEST_MODE_COUNT = 0x9,
	};

	class NetworkVar_m_nTestMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	int m_nTestIndex;  // +0x2594
	string_t m_poseParameterName;  // +0x2598
	bool m_bDoClientSideAnimation;  // +0x25a0

	int m_nLayerIndex[2];  // +0x25b8
	int m_nBoneOverrideIndex;  // +0x25c8
	float m_flLastSimTime;  // +0x25cc
	typedef CGenericFlexCycler ThisClass;

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
	CGenericFlexCycler(CGenericFlexCycler &);
	CGenericFlexCycler(CGenericFlexCycler &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual BoneTransformOverrideResult_t GetBoneTransformOverride(const CSkeletonInstance *, int, const CBoneAccessor<CTransform> &, const CBoneAccessor<matrix3x4a_t> &, bool *, void *, matrix3x4a_t *);
	CGenericFlexCycler();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void HandleAnimEvent(animevent_t *);
	virtual void Activate(ActivateType_t);
	void OscillatePoseParametersThink();
	void AddRemoveAnimationLayersThink();
	void TriggerAnimEventsThink();
	void ToggleSequencesThink();
	void ModelScaleThink();
	void UseProceduralBonesThink();
	void ResetSequencesThink();
	void TickProceduralBoneTransform();
	void ClientSideRagdollThink();
	void DisplayTestModeNameThink();
	virtual ~CGenericFlexCycler();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[263] GetBoneTransformOverride
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[90] OnTakeDamage
	// vtable[229] HandleAnimEvent
	// vtable[10] Activate
	// sizeof = 9680
};
