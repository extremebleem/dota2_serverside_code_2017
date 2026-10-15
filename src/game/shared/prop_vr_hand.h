// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/prop_vr_hand.h:19
struct attachment_input_state_t {
private:

	uint64 m_nButtons;  // +0x0
	uint64 m_afButtonPressed;  // +0x8
	uint64 m_afButtonReleased;  // +0x10
	uint64 m_afButtonLast;  // +0x18
	float m_flTriggerAnalogValue;  // +0x20
	float m_flGripAnalogValue;  // +0x24
	float m_flTrackpadOrJoystickAnalogValueX;  // +0x28
	float m_flTrackpadOrJoystickAnalogValueY;  // +0x2c

	// sizeof = 48
};

// src/game/shared/prop_vr_hand.h:41
class CPropVRHand : public CPropVRTrackedObject {
	class NetworkVar_m_hActiveHandAttachment {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hHMDAvatar {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAttachments {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_bInitialized {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsInView {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nHandID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTriggerAnalogValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGripAnalogValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTrackpadOrJoystickAnalogValueX {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flTrackpadOrJoystickAnalogValueY {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCanPerformUse {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_LiteralHandType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	AttachmentHandle_t m_nAttachUseIndex;  // +0x670

	AttachmentHandle_t m_nAttachHoldIndex;  // +0x6a4

	typedef CPropVRTrackedObject BaseClass;
	typedef CPropVRHand ThisClass;

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
	CPropVRHand(CPropVRHand &);
	CPropVRHand(CPropVRHand &);
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
	const const char * CalculateModelName(int);
	eLiteralHandType CalculateLiteralHandType(int);
	bool IsInView();
	eLiteralHandType GetLiteralHandType();
	virtual void PostUpdateModifyPose();
	virtual CBaseVRHandAttachment * GetActiveHandAttachment();
	virtual int DrawDebugTextOverlays(uint64, int);
	CPropVRHand();
	virtual bool IsSafeLocationForObject(const Vector &, const QAngle &);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void InitVRHand(int, CPropHMDAvatar *);
	virtual Vector GetCollisionMins();
	virtual Vector GetCollisionMaxs();
	virtual void UpdateTrackingData(bool, const HandInfo_t *, bool);
	virtual int UpdateTransmitState();
	virtual void UpdateOnRemove();
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	void AddHandAttachment(CBaseVRHandAttachment *, bool);
	void FindAndRemoveHandAttachment(CBaseVRHandAttachment *);
	void ReplaceHandAttachment(CBaseVRHandAttachment *, CBaseVRHandAttachment *);
	void SetActiveAttachment(CBaseVRHandAttachment *, bool);
	CBaseVRHandAttachment * GetActiveAttachment(CBaseVRHandAttachment *);
	void SwapLogicalAttachmentsWith(CPropVRHand *);
	void ScriptFireHapticPulse(int);
	void ScriptSetHandAttachment(HSCRIPT);
	HSCRIPT ScriptGetHandAttachment();
	void ScriptAddHandAttachment(HSCRIPT);
	void ScriptRemoveHandAttachmentByHandle(HSCRIPT);
	HSCRIPT ScriptFindHandModelOverride(const char *);
	HSCRIPT ScriptAddHandModelOverride(const char *);
	void ScriptRemoveHandModelOverride(const char *);
	void ScriptRemoveAllHandModelOverrides();
	HSCRIPT ScriptGetPlayerOwner();
	int ScriptGetHandID();
	virtual void OnEntityDropped(CBaseEntity *);
	virtual void OnEntityPickedUp(CBaseEntity *);
	virtual void OnRestore();
	bool CanPerformUse();
	void FireHapticPulse(EHapticPulseType);
	float GetTriggerAnalog();
	float GetGripAnalog();
	bool HasAnalogGrip();
	void GetPadAnalog(float *, float *);
	void UpdatePoseOfAttachedEntity(const Vector &, const QAngle &, float);
	void AttachmentsThink();
	virtual void UpdateAnimation();
	int GetHandID();
	CPropVRHand * GetOtherHand();
	bool IsLogicalHand(eLogicalHandType);
	bool IsLiteralHand(eLiteralHandType);
	int GetNumAttachments();
	CBaseVRHandAttachment * GetAttachmentByIndex(int);
	int FindHandModelOverride(const char *);
	int FindHandAttachmentByModelName(const char *);
	CPropHMDAvatar * GetHMD();
	virtual CBasePlayer * GetPlayerOwner();
	virtual Vector GetVecForward();
	virtual Vector GetUsePosition();
	virtual matrix3x4_t GetHoldTransform(bool);
	CInteractionManager * GetInteractionManager();
	virtual void PostSetModel();

private:

	bool UpdateUseTransform();
	bool UpdateHoldTransform();
	void InitializeArms();

protected:

	void FindAndRemoveHandAttachmentInternal(CBaseVRHandAttachment *, bool, bool);
	void SetActiveAttachmentInternal(CBaseVRHandAttachment *, bool, bool, bool);
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CPropVRHand();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[262] PostUpdateModifyPose
	// vtable[263] GetActiveHandAttachment
	// vtable[79] DrawDebugTextOverlays
	// vtable[253] IsSafeLocationForObject
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[264] InitVRHand
	// vtable[257] GetCollisionMins
	// vtable[258] GetCollisionMaxs
	// vtable[259] UpdateTrackingData
	// vtable[64] UpdateTransmitState
	// vtable[11] UpdateOnRemove
	// vtable[90] OnTakeDamage
	// vtable[265] OnEntityDropped
	// vtable[266] OnEntityPickedUp
	// vtable[18] OnRestore
	// vtable[267] UpdateAnimation
	// vtable[261] GetPlayerOwner
	// vtable[268] GetVecForward
	// vtable[269] GetUsePosition
	// vtable[270] GetHoldTransform
	// vtable[209] PostSetModel
	// vtable[4] GetScriptDesc
	// sizeof = 1712
};
