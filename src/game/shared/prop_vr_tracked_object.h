// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/prop_vr_tracked_object.h:20
class IPropVRTrackedObjectPhysicsOverride {
	// sizeof = 1
};

// src/game/shared/prop_vr_tracked_object.h:25
class CPropVRTrackedObjectPhysicsOverride : public IPropVRTrackedObjectPhysicsOverride {
public:

	// sizeof = 1
};

// src/game/shared/prop_vr_tracked_object.h:30
class CPropVRTrackedObject : public CBaseAnimating, public IVRFlyListener {
	class NetworkVar_m_bIsTracking {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vTrackedPosition {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_qTrackedAngles {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vPhysicallyConstrainedPosition {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_qPhysicallyConstrainedAngles {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bClientIsAuthoritativeForTransform {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsInContact {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	HPhysicsBody m_hTrackedPositionPhysicsBody;  // +0x4c8
	HPhysicsJoint m_hPhysicallyConstrainedWeldJoint;  // +0x4d0
	bool m_bShouldBePhysicallyConstrained;  // +0x4d8
	bool m_bFoundInitialSafeLocation;  // +0x4d9

	typedef CBaseAnimating BaseClass;
	typedef CPropVRTrackedObject ThisClass;

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
	CPropVRTrackedObject(CPropVRTrackedObject &);
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
	CPropVRTrackedObject();
	virtual ~CPropVRTrackedObject();
	virtual void VRFly_OnBegin();
	virtual void VRFly_OnEnd(const matrix3x4_t &, const matrix3x4_t &);
	bool IsInContact();
	Vector GetTrackedPosition();
	QAngle GetTrackedAngles();
	Vector GetPhysicallyConstrainedPosition();
	QAngle GetPhysicallyConstrainedAngles();
	bool IsTracking();
	bool IsTrackedPositionWithin(float);
	void OnVRFlyNoClipChanged(bool);
	bool ShouldBePhysicallyConstrained(bool);
	virtual bool IsSafeLocationForObject(const Vector &, const QAngle &);
	virtual float GetMaxForce();
	virtual float GetMaxTorque();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual const char * GetDefaultModel();
	virtual Vector GetCollisionMins();
	virtual Vector GetCollisionMaxs();
	virtual void UpdateTrackingData(bool, const HandInfo_t *, bool);
	virtual void NotifySystemEvent(CBaseEntity *, notify_system_event_t, const notify_system_event_params_t &);
	void AddOrRemovePhysicsOverride(const IPropVRTrackedObjectPhysicsOverride *, bool);
	void AddOrRemoveBlockedByStaticLevel(bool);
	void SetPhysicallyConstrained(bool);
	virtual void PostSetModel();
	virtual float GetJointFrequency();
	virtual CBasePlayer * GetPlayerOwner();
	void SetInContact(bool);
	void Term();
	void UpdatePhysicallyConstrained();
	bool IsClientAuthoritativeForTransform();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[251] VRFly_OnBegin
	// vtable[252] VRFly_OnEnd
	// vtable[253] IsSafeLocationForObject
	// vtable[254] GetMaxForce
	// vtable[255] GetMaxTorque
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[256] GetDefaultModel
	// vtable[257] GetCollisionMins
	// vtable[258] GetCollisionMaxs
	// vtable[259] UpdateTrackingData
	// vtable[127] NotifySystemEvent
	// vtable[209] PostSetModel
	// vtable[260] GetJointFrequency
	// vtable[261] GetPlayerOwner
	// sizeof = 1328
};
