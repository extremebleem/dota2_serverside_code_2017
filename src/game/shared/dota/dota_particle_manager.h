// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_particle_manager.h:55
class CDOTA_ParticleElement {
	int m_iIndex;  // +0x160
	CDOTA_ParticleElement();

	// sizeof = 360
};

// src/game/shared/dota/dota_particle_manager.h:75
class CDOTA_ParticleManager {
	struct PortraitParticleMapEntry_t {
		int nOriginalParticleIndex;  // +0x0
		int nPortrait;  // +0x4
		int nPortraitParticleIndex;  // +0x8

		// sizeof = 12
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int m_iRunningParticleCount;  // +0x30

	static INetworkStringTable * g_pStringTableParticleEffectAssets;
	CDOTA_ParticleManager();
	~CDOTA_ParticleManager();
	int CreateParticle(const char *, int, CBaseEntity *, CRecipientFilter *, CBaseEntity *);
	int CreateParticle(const attachedparticlesystem_t *, bool, CBaseEntity *, CBaseEntity *);
	int CreateAttachedParticle(const char *, bool, CBaseEntity *, CBaseEntity *);
	bool SetParticleControl(int, int, Vector);
	bool SetParticleControlForward(int, int, Vector);
	bool SetParticleControlOrientation(int, int, Vector, Vector, Vector);
	bool SetParticleControlFallback(int, int, Vector);
	bool SetParticleControlEnt(int, int, CBaseEntity *, int, const char *, Vector, bool);
	void ReleaseParticleIndex(int);
	void DestroyParticleEffect(int, bool);
	void DestroyAllParticleEffectsInvolving(CBaseEntity *, bool);
	bool SetFrozen(int, bool);
	bool SetParticleControlOffset(int, int, Vector);
	bool SetShouldDraw(int, bool);
	void ChangeControlPointAttachment(CBaseEntity *, int, int);
	bool SetParticleAlwaysInstantiate(int);
	bool SetParticleAlwaysSimulate(int);
	void SetParticleFoWProperties(int, int, int, float);
	void ChangeParticleControlPointAttachmentForModelSwap(CBaseEntity *, const CModel *, const CModel *);
	void RemoveAllParticles();
	void RemoveServerParticles();
	const char * GetParticleReplacement(const char *, CBaseEntity *);
	const char * GetParticleSnapshotReplacement(const char *, CBaseEntity *);
	void CreateParticleEffectInternal(int, HParticleSystemDefinition, int, CBaseEntity *, CRecipientFilter *, CBaseEntity *);
	void CreateParticleEffectInternal(int, const char *, int, CBaseEntity *, CRecipientFilter *, CBaseEntity *);
	int FindPortraitParticleIndex(int, int);
	int FindEmptyParticleIndex();
	CDOTA_ParticleElement * FindElementByIndex(int);
	void OnStringTableParticleAssetsChanged(void *, INetworkStringTable *, int, const char *, const void *);

	// sizeof = 56
};

// src/game/shared/dota/dota_particle_manager.h:189
class CDOTA_ParticleManagerSystem : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	typedef CAutoGameSystem BaseClass;
	CDOTA_ParticleManagerSystem(CDOTA_ParticleManagerSystem &);
	CDOTA_ParticleManagerSystem(const CDOTA_ParticleManagerSystem &);
	CDOTA_ParticleManagerSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_ParticleManagerSystem *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual ~CDOTA_ParticleManagerSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// sizeof = 32
};
