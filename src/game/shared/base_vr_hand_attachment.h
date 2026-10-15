// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/base_vr_hand_attachment.h:12
class CBaseVRHandAttachment : public CBaseAnimating {
	class NetworkVar_m_hAttachedHand {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsAttached {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	typedef CBaseAnimating BaseClass;
	typedef CBaseVRHandAttachment ThisClass;

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
	CBaseVRHandAttachment(CBaseVRHandAttachment &);
	CBaseVRHandAttachment(CBaseVRHandAttachment &);
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
	CBaseVRHandAttachment();
	virtual void Spawn(const CEntityKeyValues *);
	void AttachToHand(CPropVRHand *);
	void AttachSwapHand(CPropVRHand *, CPropVRHand *);
	void DetachFromHand();
	void SetActiveAttachment(bool);
	virtual void OnIsActiveAttachmentChanged(bool);
	virtual int UpdateTransmitState();
	virtual void UpdateOnRemove();
	virtual bool GetDesiredHandActivity(Activity *);
	virtual void UpdatePose(const Vector &, const QAngle &, float);
	virtual void PostUpdatePose();
	virtual bool ShouldUpdatePose();
	HSequence SelectWeightedSequenceWithHandModifier(Activity);
	virtual void AttachmentThink(attachment_input_state_t *);
	bool IsAttachedToAnyHand();
	bool IsAttachedToHand(CPropVRHand *);
	CPropVRHand * GetAttachedHand();
	CBasePlayer * GetPlayerOwner();
	bool IsActiveAttachment();
	virtual bool CanBecomeActive();
	virtual void DropOnDeath();
	virtual bool ShouldFollowLogicalHandSwaps();
	virtual bool IsDefaultActiveAttachment();
	virtual float CalculateCollisionRadius(bool);
	virtual void OnAttachedToHand(CPropVRHand *, CPropVRHand *);
	virtual void OnDetachedFromHand(CPropVRHand *);
	virtual ~CBaseVRHandAttachment();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[251] OnIsActiveAttachmentChanged
	// vtable[64] UpdateTransmitState
	// vtable[11] UpdateOnRemove
	// vtable[252] GetDesiredHandActivity
	// vtable[253] UpdatePose
	// vtable[254] PostUpdatePose
	// vtable[255] ShouldUpdatePose
	// vtable[256] AttachmentThink
	// vtable[257] CanBecomeActive
	// vtable[258] DropOnDeath
	// vtable[259] ShouldFollowLogicalHandSwaps
	// vtable[260] IsDefaultActiveAttachment
	// vtable[261] CalculateCollisionRadius
	// vtable[262] OnAttachedToHand
	// vtable[263] OnDetachedFromHand
	// sizeof = 1224
};
