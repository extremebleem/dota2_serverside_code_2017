// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/ientity2_entityio.h:44
struct EntityIOOutputDesc_t {
	const char * m_pName;  // +0x0
	uint32 m_nFlags;  // +0x8
	uint32 m_nOutputOffset;  // +0xc
	EntityIOOutputDesc_t();
	EntityIOOutputDesc_t(const char *, int, uint32);

	// sizeof = 16
};

// src/public/entity2/ientity2_entityio.h:57
struct EntityIOConnectionDesc_t {
	static datamap_t m_DataMap;

	string_t m_targetDesc;  // +0x0
	string_t m_targetInput;  // +0x8
	string_t m_valueOverride;  // +0x10
	EHANDLE2 m_hTarget;  // +0x18
	int32 m_nTimesToFire;  // +0x20
	float m_flDelay;  // +0x24
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	EntityIOConnectionDesc_t();
	EntityIOConnectionDesc_t(EntityIOTargetType_t, const char *, const char *, const char *, int, float);
	void Init(EntityIOTargetType_t, const char *, const char *, const char *, int, float);

	// sizeof = 40
};

// src/public/entity2/ientity2_entityio.h:81
struct EntityIOConnection_t : public EntityIOConnectionDesc_t {
public:

	static datamap_t m_DataMap;

	bool m_bMarkedForRemoval;  // +0x28

	EntityIOConnection_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 56
};

// src/public/entity2/ientity2_entityio.h:90
struct EntityIOConnectionHandle_t__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/entity2/ientity2_entityio.h:97
class CEntityIOOutput {
	int ()() * * _vptr.CEntityIOOutput;  // +0x0
private:

	static datamap_t m_DataMap;

	CEntityIOOutput & operator=(CEntityIOOutput &);
	CEntityIOOutput & operator=(const CEntityIOOutput &);
	~CEntityIOOutput();
	CEntityIOOutput(CEntityIOOutput &);
	CEntityIOOutput(const CEntityIOOutput &);
	CEntityIOOutput();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	const EntityIOOutputDesc_t * GetOutputDesc();
	float GetMaxDelay();
	int GetOutputConnectionCount();
	void FireOutput(CEntityInstance *, CEntityInstance *, float);
	void FireOutput(CEntityInstance *, CEntityInstance *);
	void AddConnection(const EntityIOConnectionDesc_t &);
	void ParseAndAddConnection(const char *);
	EntityIOConnectionHandle_t AddConnection(EHANDLE2, const char *, float);
	void RemoveConnection(EntityIOConnectionHandle_t);
	void RemoveAllConnections();
	const EntityIOConnection_t * GetActionForTarget(string_t);
	const EntityIOConnection_t * GetActionForTargetEntity(EHANDLE2);
	int Save(ISave &);
	int Restore(IRestore &, int);
	int NumberOfElements();
	virtual fieldtype_t ValueFieldType();
	void FireOutputInternal(CEntityInstance *, CEntityInstance *, const CVariant &, float);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] ValueFieldType
	// sizeof = 24
};

// src/public/entity2/ientity2_entityio.h:162
struct inputdata2_t {
	const const CVariant & value;  // +0x18
	int nOutputID;  // +0x20
	inputdata2_t(const CVariant &);

	// sizeof = 40
};

// src/public/entity2/ientity2_entityio.h:177
class CEntityIOInputFunction {
protected:

	const char * m_pName;  // +0x0
	uint32 m_nFlags;  // +0x8

	void * m_pContext;  // +0x10
	typedef void (*InputAdapterFunc_t)(const CUtlAbstractDelegate &, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, void *, const CVariant &);

	InputAdapterFunc_t m_adapterFunc;  // +0x30
	CEntityIOInputFunction();
	void Invoke(void *, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, const CVariant &);
	const char * GetName();
	uint32 GetFlags();

	// sizeof = 56
};

// src/public/entity2/ientity2_entityio.h:177
class CEntityIOInputFunction {
protected:

	const char * m_pName;  // +0x0
	uint32 m_nFlags;  // +0x8

	void * m_pContext;  // +0x10
	typedef void (*InputAdapterFunc_t)(const CUtlAbstractDelegate &, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, void *, const CVariant &);

	InputAdapterFunc_t m_adapterFunc;  // +0x30
	CEntityIOInputFunction();
	void Invoke(void *, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, const CVariant &);
	const char * GetName();
	uint32 GetFlags();
	void CEntityIOInputFunction<CEnvCombinedLightProbeVolume, CEnvCombinedLightProbeVolume>(const char *, CEnvCombinedLightProbeVolume *, class , uint32);
	void CEntityIOInputFunction<CEnvCubemap, CEnvCubemap>(const char *, CEnvCubemap *, class , uint32);
	void CEntityIOInputFunction<CEnvLightProbeVolume, CEnvLightProbeVolume>(const char *, CEnvLightProbeVolume *, class , uint32);
	void CEntityIOInputFunction<CEnvSky, CEnvSky>(const char *, CEnvSky *, class , uint32);
	void CEntityIOInputFunction<CLightEntity, CLightEntity>(const char *, CLightEntity *, class , uint32);
	void CEntityIOInputFunction<CLightEntity, CLightEntity>(const char *, CLightEntity *, class , uint32);

	// sizeof = 56
};

// src/public/entity2/ientity2_entityio.h:177
class CEntityIOInputFunction {
protected:

	const char * m_pName;  // +0x0
	uint32 m_nFlags;  // +0x8

	void * m_pContext;  // +0x10
	typedef void (*InputAdapterFunc_t)(const CUtlAbstractDelegate &, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, void *, const CVariant &);

	InputAdapterFunc_t m_adapterFunc;  // +0x30
	CEntityIOInputFunction();
	void Invoke(void *, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, const CVariant &);
	const char * GetName();
	uint32 GetFlags();
	void CEntityIOInputFunction<CBaseAnimating, CBaseAnimating>(const char *, CBaseAnimating *, class , uint32);
	void CEntityIOInputFunction<CBaseEntity, CBaseEntity>(const char *, CBaseEntity *, class , uint32);
	void CEntityIOInputFunction<float, CBaseEntity, CBaseEntity>(const char *, CBaseEntity *, class , uint32);

	// sizeof = 56
};

// src/public/entity2/ientity2_entityio.h:177
class CEntityIOInputFunction {
protected:

	const char * m_pName;  // +0x0
	uint32 m_nFlags;  // +0x8

	void * m_pContext;  // +0x10
	typedef void (*InputAdapterFunc_t)(const CUtlAbstractDelegate &, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, void *, const CVariant &);

	InputAdapterFunc_t m_adapterFunc;  // +0x30
	CEntityIOInputFunction();
	void Invoke(void *, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, const CVariant &);
	const char * GetName();
	uint32 GetFlags();
	void CEntityIOInputFunction<CPointValueRemapper, CPointValueRemapper>(const char *, CPointValueRemapper *, class , uint32);

	// sizeof = 56
};

// src/public/entity2/ientity2_entityio.h:177
class CEntityIOInputFunction {
protected:

	const char * m_pName;  // +0x0
	uint32 m_nFlags;  // +0x8

	void * m_pContext;  // +0x10
	typedef void (*InputAdapterFunc_t)(const CUtlAbstractDelegate &, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, void *, const CVariant &);

	InputAdapterFunc_t m_adapterFunc;  // +0x30
	CEntityIOInputFunction();
	void Invoke(void *, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, const CVariant &);
	const char * GetName();
	uint32 GetFlags();
	CEntityIOInputFunction & operator=(const CEntityIOInputFunction &);

	// sizeof = 56
};

// src/public/entity2/ientity2_entityio.h:177
class CEntityIOInputFunction {
protected:

	const char * m_pName;  // +0x0
	uint32 m_nFlags;  // +0x8

	void * m_pContext;  // +0x10
	typedef void (*InputAdapterFunc_t)(const CUtlAbstractDelegate &, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, void *, const CVariant &);

	InputAdapterFunc_t m_adapterFunc;  // +0x30
	CEntityIOInputFunction();
	void Invoke(void *, CEntityInstance *, CEntityInstance *, CEntityInstance *, int, const CVariant &);
	const char * GetName();
	uint32 GetFlags();
	void CEntityIOInputFunction<CEntityInstance, CEntityInstance>(const char *, CEntityInstance *, class , uint32);

	// sizeof = 56
};
