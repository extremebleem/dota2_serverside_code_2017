// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseviewmodel_shared.h:72
class CBaseViewModel : public CBaseAnimatingOverlay, public IAttachmentOverride {
	class NetworkVar_m_nViewModelIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nAnimationParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hLayerSequence {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nLayer {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flAnimationStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hWeapon {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hOwner {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	Activity m_Activity;  // +0x4f0

	string_t m_sVMName;  // +0x4f8
	string_t m_sAnimationPrefix;  // +0x500
	int m_oldLayer;  // +0x50c
	float m_oldLayerStartTime;  // +0x510

	typedef CBaseAnimatingOverlay BaseClass;
	typedef CBaseViewModel ThisClass;

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
	CBaseViewModel(CBaseViewModel &);
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
	CBaseViewModel();
	virtual ~CBaseViewModel();
	void OnWeaponChanged();
	virtual bool IsViewable();

protected:

	virtual void UpdateOnRemove();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void SendViewModelMatchingSequence(HSequence);
	virtual void SetWeaponModel(const char *, CBaseCombatWeapon *);
	virtual void CalcViewModelLag(Vector &, QAngle &, QAngle &);
	virtual void CalcViewModelView(CBasePlayer *, const Vector &, const QAngle &);
	virtual void ItemPostFrame(CBasePlayer *, const Vector &, const QAngle &);
	void FadePreviousLayer(int, HSequence, float);
	void SetOwner(CBaseEntity *);
	void SetIndex(int);
	int ViewModelIndex();
	virtual CBaseEntity * GetOwner();
	virtual void AddEffects(int);
	virtual void RemoveEffects(int);
	void SpawnControlPanels();
	void DestroyControlPanels();
	void SetControlPanelsActive(bool);
	void ShowControlPanells(bool);
	virtual CBaseCombatWeapon * GetOwningWeapon();
	virtual bool IsViewModel();
	virtual bool IsViewModelOrAttachment();
	void OnViewModelEffectsChanged(CEntityInstance *, const uint32 *);
	CBaseCombatWeapon * GetWeapon();
	bool IsViewModelSequenceFinishedForLayer(ViewmodelLayer_t);
	float GetViewModelSequenceDurationForLayer(ViewmodelLayer_t);
	virtual AttachmentOverrideResult_t LookupOverrideAttachment(CUtlStringToken, AttachmentHandle_t *);
	virtual AttachmentOverrideResult_t GetOverrideAttachment(AttachmentHandle_t, matrix3x4_t *, bool *);
	virtual int UpdateTransmitState();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[28] HackToMakeAVTable
	// vtable[34] GetDataDescMap
	// vtable[102] IsViewable
	// vtable[11] UpdateOnRemove
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[251] SendViewModelMatchingSequence
	// vtable[252] SetWeaponModel
	// vtable[253] CalcViewModelLag
	// vtable[254] CalcViewModelView
	// vtable[255] ItemPostFrame
	// vtable[256] GetOwner
	// vtable[257] AddEffects
	// vtable[258] RemoveEffects
	// vtable[259] GetOwningWeapon
	// vtable[233] IsViewModel
	// vtable[260] IsViewModelOrAttachment
	// vtable[261] LookupOverrideAttachment
	// vtable[262] GetOverrideAttachment
	// vtable[64] UpdateTransmitState
	// vtable[65] ShouldTransmit
	// vtable[66] SetTransmit
	// sizeof = 1328
};
