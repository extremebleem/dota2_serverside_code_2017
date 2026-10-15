// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physics_prop_ragdoll.h:23
struct RagdollActivationRecord_t {
	int m_nForceBone;  // +0xc
	float m_flDt;  // +0x1801c
	int m_nCollisionGroup;  // +0x18020
	bool m_bActivateRagdoll;  // +0x18024
	bool m_bWakeRagdoll;  // +0x18025

	RagdollActivationRecord_t();

	// sizeof = 98352
};

// src/game/server/physics_prop_ragdoll.h:38
struct AttachedRagdollActivationRecord_t : public RagdollActivationRecord_t {
public:

	IPhysicsObject * m_pAttached;  // +0x18030
	int m_nBoneIndexRoot;  // +0x18040
	int m_nParentBoneAttach;  // +0x18050
	AttachedRagdollActivationRecord_t();

	// sizeof = 98400
};

// src/game/server/physics_prop_ragdoll.h:49
class CRagdollProp : public CBaseAnimating, public CDefaultPlayerPickupVPhysics {
	class NetworkVar_m_ragPos {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_ragAngles {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_flBlendWeight {
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

private:

	bool m_bStartDisabled;  // +0xa58

	string_t m_anglesOverrideString;  // +0xd60
	uint32 m_lastUpdateTickCount;  // +0xd68
	bool m_allAsleep;  // +0xd6c
	bool m_bFirstCollisionAfterLaunch;  // +0xd6d

	EHANDLE m_hDamageEntity;  // +0xd70
	EHANDLE m_hKiller;  // +0xd74
	float m_flLastPhysicsInfluenceTime;  // +0xd7c
	float m_flFadeOutStartTime;  // +0xd80
	float m_flFadeTime;  // +0xd84
	string_t m_strSourceClassName;  // +0xd88
	bool m_bHasBeenPhysgunned;  // +0xd90

	float m_flDefaultFadeScale;  // +0xd98
	bool m_bShouldDeleteActivationRecord;  // +0x109c

	typedef CBaseAnimating BaseClass;
	typedef CRagdollProp ThisClass;
	CRagdollProp(CRagdollProp &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CRagdollProp();
	virtual ~CRagdollProp();
	virtual void UpdateOnRemove();
	virtual void DrawEntityDebugOverlays(uint64);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	void DisableAutoFade();
	virtual int ObjectCaps();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool IsAlive();
	virtual void Teleport(const Vector *, const QAngle *, const Vector *);
	virtual void VPhysicsUpdate(IPhysicsObject *);
	virtual int VPhysicsGetObjectList(IPhysicsObject * *, int);
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	void SetSourceClassName(const char *);
	virtual CBasePlayer * HasPhysicsAttacker(float);
	void InitRagdollAnimation();
	void SetDebrisThink();
	void ClearFlagsThink();
	ragdoll_t * GetRagdoll();
	virtual bool IsRagdoll();
	virtual void SetDamageEntity(CBaseEntity *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void OnSave();
	virtual void OnRestore();
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual void OnPhysGunDrop(CBasePlayer *, PhysGunDrop_t, int);
	virtual AngularImpulse PhysGunLaunchAngularImpulse();
	bool HasPhysgunInteraction(const char *, const char *);
	void HandleFirstCollisionInteractions(int, gamevcollisionevent_t *);
	void SetBlendWeight(float);
	void FadeOut(float, float);
	bool IsFading();
	CBaseEntity * GetKiller();
	void SetKiller(CBaseEntity *);
	void GetAngleOverrideFromCurrentState(char *, int);
	void DisableMotion();
	void InputEnableMotion(inputdata_t &);
	void InputDisableMotion(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputFadeAndRemove(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

protected:

	void CalcRagdollSize();
	virtual bool HasActivationRecord();
	void RagdollPostActivate();
	void ApplyActivationRecord(RagdollActivationRecord_t *);

private:

	void UpdateNetworkDataFromVPhysics();
	void FadeOutThink();
	/* tag__fprintf: const_type tag not supported! */;
	CBodyComponent * GetComponent<CBodyComponent>(CBodyComponent *);
	CBodyComponent * GetComponent<CBodyComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[11] UpdateOnRemove
	// vtable[14] DrawEntityDebugOverlays
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[19] ObjectCaps
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[251] IsAlive
	// vtable[128] Teleport
	// vtable[52] VPhysicsUpdate
	// vtable[53] VPhysicsGetObjectList
	// vtable[79] DrawDebugTextOverlays
	// vtable[159] ModifyOrAppendCriteria
	// vtable[190] HasPhysicsAttacker
	// vtable[234] IsRagdoll
	// vtable[252] SetDamageEntity
	// vtable[90] OnTakeDamage
	// vtable[17] OnSave
	// vtable[18] OnRestore
	// vtable[57] VPhysicsCollision
	// vtable[253] OnPhysGunPickup
	// vtable[254] OnPhysGunDrop
	// vtable[255] PhysGunLaunchAngularImpulse
	// vtable[34] GetDataDescMap
	// vtable[256] HasActivationRecord
	// sizeof = 4264
};
