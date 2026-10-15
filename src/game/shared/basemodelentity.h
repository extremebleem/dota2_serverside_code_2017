// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/basemodelentity.h:33
class CBodyComponentBaseModelEntity : public CBodyComponentSkeletonInstance {
public:

private:

	static EntComponentInfo_t s_EntComponentInfo;
	static int entity_component_error_class_decl_says_contained_but_impl_is_referenced;
	~CBodyComponentBaseModelEntity();
	CBodyComponentBaseModelEntity(CBodyComponentBaseModelEntity &);
	CBodyComponentBaseModelEntity(const CBodyComponentBaseModelEntity &);
	CBodyComponentBaseModelEntity();
	virtual CSkeletonAnimationController * GetAnimationController();
	CEntityComponentHelper * GetBaseComponentHelper();

protected:

	EntComponentInfo_t & GetEntComponentInfo();
	int GetRuntimeComponentIndex();
	bool EntIsContained();
	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);

	// vtable[0] GetAnimationController
	// vtable[3] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/basemodelentity.h:43
class CBaseModelEntity : public CBaseEntity {
	class NetworkVar_m_nRenderMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nRenderFX {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_clrRender {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_LightGroup {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGlowBackfaceMult {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fadeMinDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fadeMaxDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFadeScale {
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

	Storage_t m_CRenderComponent;  // +0x308
private:

	int m_iViewerID;  // +0x310
	int m_iTeamVisibilityBitmask;  // +0x314
protected:

	bool m_bVisibilityDirtyFlag;  // +0x319
	short int m_iFOWTempViewerID[10];  // +0x31a
private:

	bool m_bHasCollision;  // +0x32f
protected:

	class NetworkVar_m_Collision : public CCollisionProperty {
	public:

		NetworkVar_m_Collision & operator=(NetworkVar_m_Collision &);
		NetworkVar_m_Collision & operator=(const NetworkVar_m_Collision &);
		NetworkVar_m_Collision(NetworkVar_m_Collision &);
		NetworkVar_m_Collision(const NetworkVar_m_Collision &);
		~NetworkVar_m_Collision();
		NetworkVar_m_Collision();
		void CopyFrom(const CCollisionProperty &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[30] NetworkStateChanged
		// vtable[32] NetworkStateChangedLog
		// vtable[31] NetworkStateChanged
		// sizeof = 168
	};

private:

	class NetworkVar_m_Glow : public CGlowProperty {
	public:

		NetworkVar_m_Glow & operator=(NetworkVar_m_Glow &);
		NetworkVar_m_Glow & operator=(const NetworkVar_m_Glow &);
		NetworkVar_m_Glow(NetworkVar_m_Glow &);
		NetworkVar_m_Glow(const NetworkVar_m_Glow &);
		~NetworkVar_m_Glow();
		NetworkVar_m_Glow();
		void CopyFrom(const CGlowProperty &);
		virtual void NetworkStateChanged();
		virtual void NetworkStateChangedLog(const char *, const char *);
		virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);

		// vtable[1] NetworkStateChanged
		// vtable[3] NetworkStateChangedLog
		// vtable[2] NetworkStateChanged
		// sizeof = 72
	};

	class Cm_vecViewOffsetInitializer : public INetworkStateChangedRouter {
	public:

		Cm_vecViewOffsetInitializer & operator=(Cm_vecViewOffsetInitializer &);
		Cm_vecViewOffsetInitializer & operator=(const Cm_vecViewOffsetInitializer &);
		Cm_vecViewOffsetInitializer(Cm_vecViewOffsetInitializer &);
		Cm_vecViewOffsetInitializer(const Cm_vecViewOffsetInitializer &);
		~Cm_vecViewOffsetInitializer();
		Cm_vecViewOffsetInitializer();
		virtual void NetworkStateChanged(void *, int32, int32, ChangeAccessorFieldPathIndex_t);
		virtual void NetworkStateChangedLog(const char *);

	private:

		ThisClass * GetOuter();
		const ThisClass * GetOuter();

		// vtable[0] NetworkStateChanged
		// vtable[1] NetworkStateChangedLog
		// sizeof = 8
	};

	typedef CBaseEntity BaseClass;
	typedef CBaseModelEntity ThisClass;
	typedef ThisClass ThisClass_m_Collision;
	typedef ThisClass ThisClass_m_Glow;
	CBaseModelEntity & operator=(CBaseModelEntity &);
	CBaseModelEntity(CBaseModelEntity &);
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
	void EntCmpOverride_CBodyComponent();
	CBodyComponentBaseModelEntity * GetComponent_CBodyComponentBaseModelEntity();
	const CBodyComponentBaseModelEntity * GetComponent(const CBodyComponentBaseModelEntity *);
	CBodyComponentBaseModelEntity * GetComponent(CBodyComponentBaseModelEntity *);
	CRenderComponent * GetComponent_CRenderComponent();
	const CRenderComponent * GetComponent(const CRenderComponent *);
	CRenderComponent * GetComponent(CRenderComponent *);
	CBaseModelEntity();
	virtual ~CBaseModelEntity();
	virtual CBaseModelEntity * GetBaseModelEntity();
	virtual const CBaseModelEntity * GetBaseModelEntity();
	virtual void Connect();
	virtual void SpawnShared(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void OnRestore();

protected:

	virtual void UpdateOnRemove();
	virtual bool ShouldDraw();
	float GetMinFadeDist();
	float GetMaxFadeDist();
	void SetFadeDistance(float, float);
	void SetGlobalFadeScale(float);
	virtual float GetGlobalFadeScale();
	virtual ICollideable * GetCollideable();
	virtual CBaseModelEntity * GetGlowEntity();
	virtual const char * DamageDecal(int, int);
	void SetCollisionBounds(const Vector &, const Vector &);
	void SetSize(const Vector &, const Vector &);
	void SetCollisionBoundsFromCurrentModel();
	void ScriptSetSize(const Vector &, const Vector &);
	void SetSupport(const Vector &);
	Vector GetSupport();
	void SetCollision(bool);
	bool HasCollision();
	void SetModel(const char *);
	void SetModel(HModel);
	void ScriptSetModel(const char *);
	virtual void PostSetModel();
	void SetModelAsync(const char *);
	void SetModelFromKeyValues(const CEntityKeyValues *, const char *);
	void SetRenderMode(RenderMode_t);
	RenderMode_t GetRenderMode();
	void SetRenderFX(RenderFx_t);
	RenderFx_t GetRenderFX();
	const color24 GetRenderColor();
	void SetRenderColor(const color24 &);
	void SetRenderColor(uint8, uint8, uint8);
	void SetRenderColorAndAlpha(const Color &);
	uint8 GetRenderAlpha();
	void SetRenderAlpha(uint8);
	int ScriptGetRenderAlpha();
	void ScriptSetRenderAlpha(int);
	Vector4D GetRenderColorFloatRGBA();
	Color GetClrRenderDirect();
	void InputAlpha(inputdata_t &);
	void InputColor(inputdata_t &);
	CUtlStringToken GetLightGroup();
	void SetLightGroup(CUtlStringToken);
	void ScriptSetLightGroup(const char *);
	void ScriptSetRenderMode(int);
	void ScriptSetRenderColor(int, int, int);
	void SUB_StartFadeOut(float, bool);
	void SUB_StartFadeOutInstant();
	void SUB_FadeOut();
	void SUB_PerformFadeOut();
	virtual bool SUB_AllowedToFade();
	void SetCollisionGroup(int);
	void SetSolid(SolidType_t);
	void ClearSolidFlags();
	void RemoveSolidFlags(int);
	void AddSolidFlags(int);
	void SetSolidFlags(int);
	CCollisionProperty * CollisionProp();
	const CCollisionProperty * CollisionProp();
	CGlowProperty * GlowProp();
	const CGlowProperty * GlowProp();
	float GetGlowBackfaceMult();
	virtual const Vector & GetViewOffset();
	virtual void SetViewOffset(const Vector &);
	void SetFOWViewerID(int);
	int GetFOWViewerID();
	void SetFOWTempViewerID(int, int);
	int GetFOWTempViewerID(int);
	void TagAsSeenByTeam(int);
	void RemoveSeenByTeamTag(int);
	int GetTeamVisibilityBitmask();
	bool CanBeSeenByTeam(int);
	bool IsViewerEnabled();
	void ClearFOWDirtyFlag();
	void SetFOWDirty();
	virtual bool IsPartOfFOWSystem();
	virtual void UpdateVisibility();

private:

	int GetOffset_m_Collision();
	int GetOffset_m_Glow();
	int GetOffset_m_vecViewOffset();
	CNetworkViewOffsetVector & Get_m_vecViewOffset();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	CRenderComponent * GetComponent<CRenderComponent>();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[28] HackToMakeAVTable
	// vtable[34] GetDataDescMap
	// vtable[41] GetBaseModelEntity
	// vtable[42] GetBaseModelEntity
	// vtable[5] Connect
	// vtable[37] SpawnShared
	// vtable[10] Activate
	// vtable[18] OnRestore
	// vtable[11] UpdateOnRemove
	// vtable[78] ShouldDraw
	// vtable[207] GetGlobalFadeScale
	// vtable[29] GetCollideable
	// vtable[72] GetGlowEntity
	// vtable[208] DamageDecal
	// vtable[209] PostSetModel
	// vtable[210] SUB_AllowedToFade
	// vtable[171] GetViewOffset
	// vtable[211] SetViewOffset
	// vtable[212] IsPartOfFOWSystem
	// vtable[213] UpdateVisibility
	// vtable[4] GetScriptDesc
	// sizeof = 1152
};

// src/game/shared/basemodelentity.h:424
class CServerOnlyModelEntity : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseModelEntity BaseClass;

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
	CServerOnlyModelEntity(CServerOnlyModelEntity &);
	CServerOnlyModelEntity(CServerOnlyModelEntity &);
	CServerOnlyModelEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual int ObjectCaps();
	virtual ~CServerOnlyModelEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[19] ObjectCaps
	// sizeof = 1152
};

// src/game/shared/basemodelentity.h:437
class CModelPointEntity : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CBaseModelEntity BaseClass;

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
	CModelPointEntity(CModelPointEntity &);
	CModelPointEntity(CModelPointEntity &);
	CModelPointEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	void EntCmpOverride_CBodyComponent();
	CBodyComponentPoint * GetComponent_CBodyComponentPoint();
	const CBodyComponentPoint * GetComponent(const CBodyComponentPoint *);
	CBodyComponentPoint * GetComponent(CBodyComponentPoint *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual int ObjectCaps();
	virtual ~CModelPointEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[65] ShouldTransmit
	// vtable[19] ObjectCaps
	// sizeof = 1152
};
