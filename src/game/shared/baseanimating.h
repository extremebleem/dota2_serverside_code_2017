// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseanimating.h:32
class CBaseAnimating : public CBaseModelEntity {
	class NetworkVar_m_vecForce {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nForceBone {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMuzzleFlashParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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

public:

private:

	static datamap_t m_DataMap;

protected:

	Storage_t m_CHitboxComponent;  // +0x480
private:

	bool m_bModelIsLocked;  // +0x4a0

protected:

	float m_flDissolveStartTime;  // +0x4a4
	COutputEvent m_OnIgnite;  // +0x4a8
	typedef CBaseModelEntity BaseClass;
	typedef CBaseAnimating ThisClass;
	CBaseAnimating & operator=(CBaseAnimating &);
	CBaseAnimating & operator=(CBaseAnimating &);
	CBaseAnimating(CBaseAnimating &);
	CBaseAnimating(CBaseAnimating &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CHitboxComponent * GetComponent_CHitboxComponent();
	const CHitboxComponent * GetComponent(const CHitboxComponent *);
	CHitboxComponent * GetComponent(CHitboxComponent *);
	void EntCmpOverride_CBodyComponent();
	CBodyComponentBaseAnimating * GetComponent_CBodyComponentBaseAnimating();
	const CBodyComponentBaseAnimating * GetComponent(const CBodyComponentBaseAnimating *);
	CBodyComponentBaseAnimating * GetComponent(CBodyComponentBaseAnimating *);
	CBaseAnimating();
	virtual CBaseAnimating * GetBaseAnimating();
	virtual const CBaseAnimating * GetBaseAnimating();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void AddedToEntityDatabase();
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual void PreDataUpdate(DataUpdateType_t);
	virtual void PostDataUpdate(DataUpdateType_t);
	virtual void OnDataChanged(DataUpdateType_t);
	virtual void OnSetDormant(EntityDormancyType_t, EntityDormancyType_t);
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	virtual int Restore(IRestore &);
	virtual void DrawVCollide(bool);
	virtual void OnNewModel(HModel, HModel);
	virtual ShadowType_t ShadowCastType();
	virtual void SetPredictable(bool);
	virtual float GetGlobalFadeScale();
	virtual void Teleport(const Vector *, const QAngle *, const Vector *);
	virtual void PopulatePoseParameters();
	bool IsSequenceDebugging();
	const CModel * GetModelPtr();
	float GetAnimTimeInterval();
	void UseClientSideAnimation(bool);
	bool IsUsingClientSideAnimation();
	bool ShouldAnimateDuringGameplayPause();
	virtual void UpdateServerSideAnimation();
	virtual bool UseServerSideAnimation();
	int LookupPoseParameter(const char *);
	float SetPoseParameter(const char *, float);
	float SetPoseParameter(int, float);
	float ScriptSetPoseParameter(const char *, float);
	float GetPoseParameter(int);
	float GetPoseParameter(const char *);
	float GetPoseParameterNormalized(int);
	bool GetPoseParameterRange(int, float &, float &);
	bool HasPoseParameter(HSequence, const char *);
	bool HasPoseParameter(HSequence, int);
	float EdgeLimitPoseParameter(int, float, float);
	int GetNumPoseParameters();
	const float * GetPoseParameterArray();
	virtual void InitPoseParameters();
	int GetNumBones();
	int LookupBone(const char *);
	void GetBonePosition(int, Vector &, QAngle &);
	void GetBoneTransform(int, matrix3x4_t &);
	int GetPhysicsBone(int);
	bool GetRootBoneToWorldTransform(matrix3x4a_t *);
	int GetAttachmentCount();
	AttachmentHandle_t LookupAttachment(const char *);
	AttachmentHandle_t LookupAttachment(CUtlStringToken);
	int ScriptLookupAttachment(const char *);
	int GetAttachmentBoneCount(AttachmentHandle_t);
	int GetAttachmentBone(AttachmentHandle_t, int);
	CUtlStringToken GetAttachmentNameToken(AttachmentHandle_t);
	bool GetAttachment(const char *, Vector &);
	bool GetAttachment(const char *, Vector &, QAngle &);
	bool GetAttachment(AttachmentHandle_t, Vector &);
	bool GetAttachment(AttachmentHandle_t, Vector &, QAngle &);
	virtual bool GetAttachment(AttachmentHandle_t, matrix3x4_t &);
	bool GetAttachment(const char *, Vector &, Vector *, Vector *, Vector *);
	bool GetAttachment(AttachmentHandle_t, Vector &, Vector *, Vector *, Vector *);
	const Vector & ScriptGetAttachmentOrigin(int);
	const Vector & ScriptGetAttachmentAngles(int);
	bool GetAttachmentLocal(AttachmentHandle_t, matrix3x4_t &);
	bool GetAttachmentLocal(AttachmentHandle_t, Vector &, QAngle &);
	bool GetAttachmentLocal(AttachmentHandle_t, Vector &);
	bool GetAttachmentLocal(const char *, Vector &, QAngle &);
	virtual void UncorrectViewModelAttachment(Vector &);
	float GetPlaybackRate();
	void SetPlaybackRate(float);
	void StopAnimation();
	virtual void SetModelScale(float);
	float GetModelScale();
	bool IsModelScaleFractional();
	void Script_SetModelScale(float);
	void SetModelScale(float, float);
	void UpdateModelScale();
	void SetCycle(float);
	void SetPrevCycle(float);
	float GetCycle();
	float GetPrevCycle();
	HSequence GetSequence();
	void SetSequence(HSequence, SetSequenceBehavior_t);
	void ResetSequence(HSequence);
	bool IsValidSequence(HSequence);
	bool PrefetchSequence(HSequence);
	virtual void OnNewSequence();
	virtual void OnPlaybackRateChanged();
	HSequence LookupSequence(const char *);
	Activity LookupActivity(const char *);
	const char * GetSequenceName(HSequence);
	const char * GetSequenceActivityName(HSequence);
	Activity GetSequenceActivity(HSequence);
	virtual bool IsActivityFinished();
	bool IsSequenceFinished();
	bool SequenceLoops();
	bool IsSequenceLooping(HSequence);
	bool IsTransitionInterruptible();
	void NotifyWhenSequenceFinishes(bool);
	virtual void OnSequenceFinished(bool);
	float GetSequenceMoveYaw(HSequence);
	float GetSequenceMoveDist(HSequence);
	void GetSequenceLinearMotion(HSequence, Vector *);
	bool GetSequenceMovement(HSequence, float, float, Vector &, QAngle &);
	float GetSequenceGroundSpeed(HSequence);
	float SequenceDuration();
	float SequenceDuration(HSequence);
	float GetSequenceCycleRate(HSequence);
	float GetLastVisibleCycle(HSequence);
	float GetGroundSpeed();
	Vector GetGroundSpeedVelocity();
	void SetGroundSpeed(float);
	float GetInstantaneousVelocity(float);
	float GetEntryVelocity(HSequence);
	float GetExitVelocity(HSequence);
	HSequence SelectWeightedSequence(Activity);
	HSequence SelectWeightedSequence(Activity, HSequence);
	HSequence SelectWeightedSequenceFromModifiers(Activity, const CUtlSymbol *, int);
	HSequence SelectHeaviestSequence(Activity);
	void ResetSequenceInfo();
	HSequence FindTransitionSequence(HSequence, HSequence, int *);
	bool GotoSequence(HSequence, float, float, HSequence, HSequence &, float &, int &);
	void SetMovementPoseParams(const Vector &, int, int, int, int, bool);
	int ExtractBbox(HSequence, Vector &, Vector &);
	void SetSequenceBox();
	Activity RegisterPrivateActivity(const char *);
	void StudioFrameAdvance(AnimationAdvanceType_t);
	void StudioFrameAdvanceManual(float);
	void EnableIK(bool);
	virtual float GetIdealSpeed();
	virtual float GetIdealAccel();
	CSkeletonInstance * GetSkeletonInstance();
	const CSkeletonInstance * GetSkeletonInstance();
	void SetBody(MeshGroupMask_t);
	MeshGroupMask_t GetBody();
	void SetBodygroup(int, int);
	void SetBodygroupByName(const char *, int);
	int GetBodygroup(int);
	const char * GetBodygroupName(int);
	void GetBodygroupPartName(int, int, char *, int);
	int FindBodygroupByName(const char *);
	int GetBodygroupCount(int);
	int GetNumBodyGroups();
	void SetSkin(int);
	void SetSkin(CUtlStringToken);
	CUtlStringToken GetSkin();
	int GetS1Skin();
	void InputSkin(inputdata_t &);
	int CountBodyGroupVariants(int);
	int FindBodyGroupVariant(int, int);
	int FindDamagedBodyGroupVariant(int);
	void RandomizeBodygroups(CUtlVector<char const*, CUtlMemory<char const*, int> > &);
	void SetHitboxSet(int);
	int GetHitboxSet();
	const char * GetHitboxSetName();
	int GetHitboxSetCount();
	int GetHitboxBone(int);
	bool HasSelectionBoxes();
	const CHitBoxSet * GetHitboxSet(CUtlStringToken);
	int GetGlobalHitboxIndexFromSetIndex(int);
	int HitboxToWorldTransforms(CUtlStringToken, matrix3x4a_t *, int);
	int HitboxToWorldTransforms(const CHitBoxSet *, matrix3x4a_t *, int);
	bool ComputeHitboxSurroundingBox(Vector *, Vector *);
	bool ComputeEntitySpaceHitboxSurroundingBox(Vector *, Vector *);
	bool ComputeHitboxSurroundingBox(int, Vector *, Vector *);
	int GetHitboxesFrontside(int *, int, const Vector &, float);
	void CopyAnimationDataFrom(CBaseAnimating *);
	bool HasAnimEvent(HSequence, int);
	void DispatchAnimEvents(CBaseAnimating *);
	virtual void HandleAnimEvent(animevent_t *);
	virtual bool HandleScriptedAnimEvent(animevent_t *);
	virtual bool HandleBehaviorAnimEvent(animevent_t *);
	virtual void SpeechAnimEvent(const char *);
	LocalFlexController_t GetNumFlexControllers();
	const char * GetFlexControllerName(LocalFlexController_t);
	const char * GetFlexControllerType(LocalFlexController_t);
	virtual int DrawDebugTextOverlays(uint64, int);
	void ResetClientsideFrame();
	virtual void GetVelocity(Vector *, AngularImpulse *);
	virtual bool IsViewModel();
	virtual bool IsRagdoll();
	virtual bool IsClientRagdoll();
	virtual bool BecomeRagdollOnClient(const Vector &);
	virtual bool CanBecomeRagdoll();
	virtual void ClampRagdollForce(const Vector &, Vector *);
	void InputBecomeRagdoll(inputdata_t &);
	void UpdateFireDlight();
	bool IsOnFire();
	void InputSetSequence(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void InputSetBodyGroup(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	virtual void Ignite(float, bool, float, bool);
	virtual void IgniteLifetime(float);
	virtual void IgniteUseCheapEffect(bool);
	virtual void Extinguish();
	void Scorch(int, int);
	void InputIgnite(inputdata_t &);
	void InputIgniteLifetime(inputdata_t &);
	void InputIgniteNumHitboxFires(inputdata_t &);
	void InputIgniteHitboxFireScale(inputdata_t &);
	void DoMuzzleFlash();
	virtual bool Dissolve(const char *, float, bool, int, Vector, int);
	bool IsDissolving();
	void TransferDissolveFrom(CBaseAnimating *);
	void DrawRawSkeleton(matrix3x4_t *, bool, float, bool);
	virtual Vector GetStepOrigin();
	virtual QAngle GetStepAngles();
	CBaseAnimatingController * GetBaseAnimatingController();
	const CBaseAnimatingController * GetBaseAnimatingController();
	virtual void FormatViewModelAttachment(int, matrix3x4_t &);

private:

	void TermRopes();
	void DelayedInitModelEffects();
	void ParseModelEffects(KeyValues *);
	void UpdateRelevantInterpolatedVars();
	void LockStudioHdr();
	void UnlockStudioHdr();
	void HandleObsoleteAnimEvent(animevent_t *);
	virtual bool BuildTransformations(CStudioHdr *, Vector *, Quaternion *, const matrix3x4_t &, int, CBoneBitList &);
	virtual bool MaintainSequenceTransitions(CStudioHdr *, float, float *, Vector *, Quaternion *, int);
	virtual bool AccumulateLayers(CStudioHdr *, Vector *, Quaternion *, float *, float, int);
	virtual bool ApplyBoneMatrixTransform(matrix3x4_t &);
	virtual bool StandardBlendingRules(CStudioHdr *, const matrix3x4_t &, Vector *, Quaternion *, float, int);
	virtual bool SetupBones(matrix3x4_t *, int);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CBaseAnimating();
	/* tag__fprintf: const_type tag not supported! */;
	CBodyComponent * GetComponent<CBodyComponent>(CBodyComponent *);
	CBodyComponent * GetComponent<CBodyComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[28] HackToMakeAVTable
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[43] GetBaseAnimating
	// vtable[44] GetBaseAnimating
	// vtable[8] Spawn
	// vtable[7] AddedToEntityDatabase
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[13] PreDataUpdate
	// vtable[9] PostDataUpdate
	// vtable[214] OnDataChanged
	// vtable[12] OnSetDormant
	// vtable[66] SetTransmit
	// vtable[16] Restore
	// vtable[50] DrawVCollide
	// vtable[39] OnNewModel
	// vtable[215] ShadowCastType
	// vtable[216] SetPredictable
	// vtable[207] GetGlobalFadeScale
	// vtable[128] Teleport
	// vtable[38] PopulatePoseParameters
	// vtable[217] UpdateServerSideAnimation
	// vtable[218] UseServerSideAnimation
	// vtable[219] InitPoseParameters
	// vtable[220] GetAttachment
	// vtable[221] UncorrectViewModelAttachment
	// vtable[222] SetModelScale
	// vtable[223] OnNewSequence
	// vtable[224] OnPlaybackRateChanged
	// vtable[225] IsActivityFinished
	// vtable[226] OnSequenceFinished
	// vtable[227] GetIdealSpeed
	// vtable[228] GetIdealAccel
	// vtable[229] HandleAnimEvent
	// vtable[230] HandleScriptedAnimEvent
	// vtable[231] HandleBehaviorAnimEvent
	// vtable[232] SpeechAnimEvent
	// vtable[79] DrawDebugTextOverlays
	// vtable[173] GetVelocity
	// vtable[233] IsViewModel
	// vtable[234] IsRagdoll
	// vtable[235] IsClientRagdoll
	// vtable[236] BecomeRagdollOnClient
	// vtable[237] CanBecomeRagdoll
	// vtable[238] ClampRagdollForce
	// vtable[239] Ignite
	// vtable[240] IgniteLifetime
	// vtable[241] IgniteUseCheapEffect
	// vtable[242] Extinguish
	// vtable[243] Dissolve
	// vtable[193] GetStepOrigin
	// vtable[194] GetStepAngles
	// vtable[244] FormatViewModelAttachment
	// vtable[245] BuildTransformations
	// vtable[246] MaintainSequenceTransitions
	// vtable[247] AccumulateLayers
	// vtable[248] ApplyBoneMatrixTransform
	// vtable[249] StandardBlendingRules
	// vtable[250] SetupBones
	// vtable[4] GetScriptDesc
	// sizeof = 1216
};
