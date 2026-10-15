// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dynamicprop.h:25
class CDynamicProp : public CBreakableProp {
	class NetworkVar_m_bUseHitboxesForRenderBox {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_pOutputAnimBegun;  // +0x650
	COutputEvent m_pOutputAnimOver;  // +0x668
	COutputEvent m_pOutputAnimLoopCycleOver;  // +0x680
	string_t m_iszDefaultAnim;  // +0x698
	int m_iTransitionDirection;  // +0x6a4
	bool m_bAnimateOnServer;  // +0x6a8
	bool m_bRandomizeCycle;  // +0x6a9
	bool m_bHoldAnimation;  // +0x6aa
	bool m_bRandomAnimator;  // +0x6ab
	float m_flNextRandAnim;  // +0x6ac
	float m_flMinRandAnimTime;  // +0x6b0
	float m_flMaxRandAnimTime;  // +0x6b4
	bool m_bStartDisabled;  // +0x6bc
	bool m_bUpdateAttachedChildren;  // +0x6bd
	bool m_bScriptedMovement;  // +0x6be
	bool m_bCreateNonSolid;  // +0x6c0
	bool m_bIsOverrideProp;  // +0x6c1

	int m_iInitialGlowState;  // +0x6c4
	int m_nGlowRange;  // +0x6c8
	int m_nGlowRangeMin;  // +0x6cc
	typedef CBreakableProp BaseClass;
	typedef CDynamicProp ThisClass;

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
	CDynamicProp(CDynamicProp &);
	CDynamicProp(CDynamicProp &);
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
	CDynamicProp();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void SpawnServerSide(const CEntityKeyValues *);
	virtual bool UseServerSideAnimation();
	virtual bool CreateVPhysics();
	virtual void UpdateOnRemove();
	virtual void HandleAnimEvent(animevent_t *);
	void AnimThink();
	void PropSetSequence(HSequence);
	virtual bool OverridePropdata();
	void InputSetAnimation(inputdata_t &);
	void InputSetAnimationNoReset(inputdata_t &);
	void InputSetAnimationTransition(inputdata_t &);
	void InputSetDefaultAnimation(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputDisableCollision(inputdata_t &);
	void InputEnableCollision(inputdata_t &);
	void InputSetPlaybackRate(inputdata_t &);
	void InputStartGlowing(inputdata_t &);
	void InputStopGlowing(inputdata_t &);
	void InputSetGlowOverride(inputdata_t &);
	void InputSetGlowRange(inputdata_t &);
	void FinishSetSequence(HSequence);
	void PropSetAnim(const char *);
	bool ShouldSetCreateTime(inputdata_t &);
	virtual ~CDynamicProp();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[218] UseServerSideAnimation
	// vtable[49] CreateVPhysics
	// vtable[11] UpdateOnRemove
	// vtable[229] HandleAnimEvent
	// vtable[252] OverridePropdata
	// sizeof = 1752
};

// src/game/shared/dynamicprop.h:127
class CDynamicPropAlias_dynamic_prop : public CDynamicProp {
public:

private:

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
	CDynamicPropAlias_dynamic_prop(CDynamicPropAlias_dynamic_prop &);
	CDynamicPropAlias_dynamic_prop(CDynamicPropAlias_dynamic_prop &);
	CDynamicPropAlias_dynamic_prop();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDynamicPropAlias_dynamic_prop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1752
};

// src/game/shared/dynamicprop.h:128
class CDynamicPropAlias_prop_dynamic_override : public CDynamicProp {
public:

private:

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
	CDynamicPropAlias_prop_dynamic_override(CDynamicPropAlias_prop_dynamic_override &);
	CDynamicPropAlias_prop_dynamic_override(CDynamicPropAlias_prop_dynamic_override &);
	CDynamicPropAlias_prop_dynamic_override();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDynamicPropAlias_prop_dynamic_override();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1752
};
