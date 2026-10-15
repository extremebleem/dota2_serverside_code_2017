// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ambientgeneric.h:17
struct dynpitchvol_base_t {
private:

	int preset;  // +0x0
	int pitchrun;  // +0x4
	int pitchstart;  // +0x8
	int spinup;  // +0xc
	int spindown;  // +0x10
	int volrun;  // +0x14
	int volstart;  // +0x18
	int fadein;  // +0x1c
	int fadeout;  // +0x20
	int lfotype;  // +0x24
	int lforate;  // +0x28
	int lfomodpitch;  // +0x2c
	int lfomodvol;  // +0x30
	int cspinup;  // +0x34
	int cspincount;  // +0x38
	int pitch;  // +0x3c
	int spinupsav;  // +0x40
	int spindownsav;  // +0x44
	int pitchfrac;  // +0x48
	int vol;  // +0x4c
	int fadeinsav;  // +0x50
	int fadeoutsav;  // +0x54
	int volfrac;  // +0x58
	int lfofrac;  // +0x5c
	int lfomult;  // +0x60

	// sizeof = 100
};

// src/game/server/ambientgeneric.h:61
struct dynpitchvol_t : public dynpitchvol_base_t {
public:

private:

	static datamap_t m_DataMap;

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 100
};

// src/game/server/ambientgeneric.h:71
class CAmbientGeneric : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_radius;  // +0x308
	float m_flMaxRadius;  // +0x30c
	bool m_fActive;  // +0x378
	bool m_fLooping;  // +0x379

	string_t m_iszSound;  // +0x380
	string_t m_sSourceEntName;  // +0x388
	EHANDLE m_hSoundSource;  // +0x390
	typedef CPointEntity BaseClass;

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
	CAmbientGeneric(CAmbientGeneric &);
	CAmbientGeneric(CAmbientGeneric &);
	CAmbientGeneric();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	void RampThink();
	void InitModulationParms();
	void ComputeMaxAudibleDistance();
	virtual void SetTransmit(CCheckTransmitInfo *, bool);
	virtual void UpdateOnRemove();
	virtual void ToggleSound();
	virtual void SendSound(SoundFlags_t);
	void InputPlaySound(inputdata_t &);
	void InputStopSound(inputdata_t &);
	void InputToggleSound(inputdata_t &);
	void InputPitch(inputdata_t &);
	void InputVolume(inputdata_t &);
	void InputFadeIn(inputdata_t &);
	void InputFadeOut(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CAmbientGeneric();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[66] SetTransmit
	// vtable[11] UpdateOnRemove
	// vtable[207] ToggleSound
	// vtable[208] SendSound
	// vtable[34] GetDataDescMap
	// sizeof = 928
};
