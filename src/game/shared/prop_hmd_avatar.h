// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/prop_hmd_avatar.h:24
class CPropHMDAvatar : public CPropVRTrackedObject {
	class NetworkVar_m_hLiteralControllerSlots {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hLogicalControllerSlots {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hVRControllers {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_hCloseCaption {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CPropVRTrackedObject BaseClass;
	typedef CPropHMDAvatar ThisClass;

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
	CPropHMDAvatar(CPropHMDAvatar &);
	CPropHMDAvatar(CPropHMDAvatar &);
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
	virtual bool IsHMDAvatar();
	CPropVRHand * GetVRHandRaw(vr_controller_slots_t);
	CPropVRHand * GetVRHandLiteral(eLiteralHandType);
	CPropVRHand * GetVRHandLogical(eLogicalHandType);
	vr_controller_slots_t GetVRHandSlotLiteral(eLiteralHandType);
	vr_controller_slots_t GetVRHandSlotLogical(eLogicalHandType);
	CPointWorldText * GetVRCloseCaption();
	virtual CBasePlayer * GetPlayerOwner();
	void AttachmentsThink();
	CPropHMDAvatar();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateTrackingData(bool, const HandInfo_t *, bool);
	virtual const char * GetDefaultModel();
	virtual Vector GetCollisionMins();
	virtual Vector GetCollisionMaxs();
	virtual int UpdateTransmitState();
	virtual void UpdateOnRemove();
	HSCRIPT ScriptGetVRHand(int);
	CPropVRHand * UpdateLogicalHand(eLogicalHandType, vr_controller_slots_t);
	void SwapLogicalHands();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CPropHMDAvatar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[142] IsHMDAvatar
	// vtable[261] GetPlayerOwner
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[6] Precache
	// vtable[259] UpdateTrackingData
	// vtable[256] GetDefaultModel
	// vtable[257] GetCollisionMins
	// vtable[258] GetCollisionMaxs
	// vtable[64] UpdateTransmitState
	// vtable[11] UpdateOnRemove
	// vtable[4] GetScriptDesc
	// sizeof = 1368
};
