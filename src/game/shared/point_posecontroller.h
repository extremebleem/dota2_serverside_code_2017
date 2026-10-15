// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_posecontroller.h:39
class CPoseController : public CBaseEntity {
	class NetworkVar_m_bPoseValueParity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fPoseValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fInterpolationTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bInterpolationWrap {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fCycleFrequency {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nFModType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fFModTimeOffset {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fFModRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fFModAmplitude {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hProps {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_chPoseIndex {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	bool m_bDisablePropLookup;  // +0x340

	string_t m_iszPropName;  // +0x348
	string_t m_iszPoseParameterName;  // +0x350
	typedef CBaseEntity BaseClass;
	typedef CPoseController ThisClass;

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
	CPoseController(CPoseController &);
	CPoseController(CPoseController &);
	CPoseController();
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
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	void BuildPropList();
	void BuildPoseIndexList();
	void SetPoseIndex(int, int);
	void SetCurrentPose(float);
	float GetPoseValue();
	void SetProp(CBaseAnimating *);
	void SetPropName(const char *);
	void SetPoseParameterName(const char *);
	void SetPoseValue(float);
	void SetInterpolationTime(float);
	void SetInterpolationWrap(bool);
	void SetCycleFrequency(float);
	void SetFModType(int);
	void SetFModTimeOffset(float);
	void SetFModRate(float);
	void SetFModAmplitude(float);
	void RandomizeFMod(float);
	void InputSetPoseParameterName(inputdata_t &);
	void InputSetPoseValue(inputdata_t &);
	void InputSetInterpolationTime(inputdata_t &);
	void InputSetCycleFrequency(inputdata_t &);
	void InputSetFModType(inputdata_t &);
	void InputSetFModTimeOffset(inputdata_t &);
	void InputSetFModRate(inputdata_t &);
	void InputSetFModAmplitude(inputdata_t &);
	void InputRandomizeFMod(inputdata_t &);
	void InputGetFMod(inputdata_t &);
	virtual ~CPoseController();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[117] Think
	// sizeof = 856
};
