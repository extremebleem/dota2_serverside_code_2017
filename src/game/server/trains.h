// Reconstructed from DWARF by pahole; not original source.

// src/game/server/trains.h:59
class CFuncTrackTrain : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_length;  // +0x488
	int m_lastBlockTick;  // +0x4b0
	float m_flVolume;  // +0x4b4
	float m_flBank;  // +0x4b8
	float m_oldSpeed;  // +0x4bc
	float m_flBlockDamage;  // +0x4c0
	float m_height;  // +0x4c4
	float m_maxSpeed;  // +0x4c8
	float m_dir;  // +0x4cc
	string_t m_iszSoundMove;  // +0x4d0
	string_t m_iszSoundMovePing;  // +0x4d8
	string_t m_iszSoundStart;  // +0x4e0
	string_t m_iszSoundStop;  // +0x4e8
	float m_flMoveSoundMinTime;  // +0x4f0
	float m_flMoveSoundMaxTime;  // +0x4f4
	float m_flNextMoveSoundTime;  // +0x4f8
	float m_flMoveSoundMinPitch;  // +0x4fc
	float m_flMoveSoundMaxPitch;  // +0x500

	COutputEvent m_OnStart;  // +0x518
	COutputEvent m_OnNext;  // +0x530
	bool m_bManualSpeedChanges;  // +0x548

	float m_flDesiredSpeed;  // +0x54c
	float m_flSpeedChangeTime;  // +0x550
	float m_flAccelSpeed;  // +0x554
	float m_flDecelSpeed;  // +0x558
	bool m_bAccelToSpeed;  // +0x55c

	float m_flNextMPSoundTime;  // +0x560
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
	CFuncTrackTrain(CFuncTrackTrain &);
	CFuncTrackTrain(CFuncTrackTrain &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CFuncTrackTrain();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	virtual bool CreateVPhysics();
	virtual void MoveDone();
	virtual void Blocked(CBaseEntity *);
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void DrawEntityDebugOverlays(uint64);
	void Next();
	void Find();
	void NearestPath();
	void DeadEnd();
	void SetTrack(CPathTrack *);
	void SetControls(CBaseEntity *);
	virtual bool OnControls(CBaseEntity *);
	void SoundStop();
	void SoundUpdate();
	void Start();
	void Stop();
	bool IsDirForward();
	void SetDirForward(bool);
	void SetSpeed(float, bool);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void InputSetSpeed(inputdata_t &);
	void InputSetSpeedDir(inputdata_t &);
	void InputSetSpeedReal(inputdata_t &);
	void InputStop(inputdata_t &);
	void InputResume(inputdata_t &);
	void InputReverse(inputdata_t &);
	void InputStartForward(inputdata_t &);
	void InputStartBackward(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputSetSpeedDirAccel(inputdata_t &);
	CFuncTrackTrain * Instance(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual int ObjectCaps();
	virtual void OnRestore();
	float GetMaxSpeed();
	float GetCurrentSpeed();
	float GetDesiredSpeed();
	virtual bool IsBaseTrain();

private:

	void ArriveAtNode(CPathTrack *);
	void FirePassInputs(CPathTrack *, CPathTrack *, bool);
	TrainVelocityType_t GetTrainVelocityType();
	void UpdateTrainVelocity(CPathTrack *, CPathTrack *, const Vector &, float);
	TrainOrientationType_t GetTrainOrientationType();
	void UpdateTrainOrientation(CPathTrack *, CPathTrack *, const Vector &, float);
	void UpdateOrientationAtPathTracks(CPathTrack *, CPathTrack *, const Vector &, float);
	void UpdateOrientationBlend(TrainOrientationType_t, CPathTrack *, CPathTrack *, const Vector &, float);
	void DoUpdateOrientation(const QAngle &, const QAngle &, float);
	void TeleportToPathTrack(CPathTrack *);
	virtual ~CFuncTrackTrain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[49] CreateVPhysics
	// vtable[118] MoveDone
	// vtable[115] Blocked
	// vtable[79] DrawDebugTextOverlays
	// vtable[14] DrawEntityDebugOverlays
	// vtable[98] OnControls
	// vtable[108] Use
	// vtable[34] GetDataDescMap
	// vtable[19] ObjectCaps
	// vtable[18] OnRestore
	// vtable[152] IsBaseTrain
	// sizeof = 1384
};
