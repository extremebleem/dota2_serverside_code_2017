// Reconstructed from DWARF by pahole; not original source.

// src/game/server/envmicrophone.h:38
class CEnvMicrophone : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bDisabled;  // +0x308

	EHANDLE m_hMeasureTarget;  // +0x30c
	int m_nSoundMask;  // +0x310
	float m_flSensitivity;  // +0x314
	float m_flSmoothFactor;  // +0x318
	float m_flMaxRange;  // +0x31c
	string_t m_iszSpeakerName;  // +0x320
	EHANDLE m_hSpeaker;  // +0x328
	bool m_bAvoidFeedback;  // +0x32c

	int m_iSpeakerDSPPreset;  // +0x330

	string_t m_iszListenFilter;  // +0x338

	COutputFloat m_SoundLevel;  // +0x348
	COutputEvent m_OnRoutedSound;  // +0x368
	COutputEvent m_OnHeardSound;  // +0x380
	char m_szLastSound[256];  // +0x398
	int m_iLastRoutedFrame;  // +0x498
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
	CEnvMicrophone(CEnvMicrophone &);
	CEnvMicrophone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CEnvMicrophone();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void OnRestore();
	void ActivateSpeaker();
	virtual void Think();
	bool CanHearSound(CSound *, float &);
	bool CanHearSound(CEntityIndex, soundlevel_t, float &, const Vector *);
	void SetSensitivity(float);
	void SetMaxRange(float);
	void SetSpeakerName(string_t);
	void SetSpeaker(string_t, EHANDLE);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputSetSpeakerName(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	bool OnSoundPlayed(CEntityIndex, const char *, soundlevel_t, float, int, int, const Vector *, float, CUtlVector<Vector, CUtlMemory<Vector, int> > &);
	void OnSoundStopped(const char *);

private:

	MicrophoneResult_t SoundPlayed(CEntityIndex, const char *, soundlevel_t, float, int, int, const Vector *, float, CUtlVector<Vector, CUtlMemory<Vector, int> > &);
	void SoundStopped(const char *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[18] OnRestore
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 1184
};
