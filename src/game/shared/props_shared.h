// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/props_shared.h:91
class IMultiplayerPhysics {
	int ()() * * _vptr.IMultiplayerPhysics;  // +0x0
	~IMultiplayerPhysics();
	IMultiplayerPhysics(IMultiplayerPhysics &);
	IMultiplayerPhysics(const IMultiplayerPhysics &);
	IMultiplayerPhysics();
	virtual int GetMultiplayerPhysicsMode();
	virtual float GetMass();
	virtual bool IsAsleep();

	// vtable[0] GetMultiplayerPhysicsMode
	// vtable[1] GetMass
	// vtable[2] IsAsleep
	// sizeof = 8
};

// src/game/shared/props_shared.h:134
class IBreakableWithPropData {
	int ()() * * _vptr.IBreakableWithPropData;  // +0x0
	IBreakableWithPropData(IBreakableWithPropData &);
	IBreakableWithPropData(const IBreakableWithPropData &);
	~IBreakableWithPropData();
	IBreakableWithPropData();
	virtual void SetDmgModBullet(float);
	virtual void SetDmgModClub(float);
	virtual void SetDmgModExplosive(float);
	virtual void SetDmgModFire(float);
	virtual float GetDmgModBullet();
	virtual float GetDmgModClub();
	virtual float GetDmgModExplosive();
	virtual float GetDmgModFire();
	virtual void SetExplosiveRadius(float);
	virtual void SetExplosiveDamage(float);
	virtual float GetExplosiveRadius();
	virtual float GetExplosiveDamage();
	virtual void SetPhysicsDamageTable(string_t);
	virtual string_t GetPhysicsDamageTable();
	virtual void SetBreakableModel(string_t);
	virtual string_t GetBreakableModel();
	virtual void SetBreakableSkin(int);
	virtual int GetBreakableSkin();
	virtual void SetBreakableCount(int);
	virtual int GetBreakableCount();
	virtual void SetMaxBreakableSize(int);
	virtual int GetMaxBreakableSize();
	virtual void SetPropDataBlocksLOS(bool);
	virtual void SetPropDataIsAIWalkable(bool);
	virtual void SetInteraction(propdata_interactions_t);
	virtual bool HasInteraction(propdata_interactions_t);
	virtual void SetPhysicsMode(int);
	virtual int GetPhysicsMode();
	virtual void SetMultiplayerBreakMode(mp_break_t);
	virtual mp_break_t GetMultiplayerBreakMode();
	virtual void SetBasePropData(string_t);
	virtual string_t GetBasePropData();
	virtual int GetMinHealthDamage();

	// vtable[0] SetDmgModBullet
	// vtable[1] SetDmgModClub
	// vtable[2] SetDmgModExplosive
	// vtable[3] SetDmgModFire
	// vtable[4] GetDmgModBullet
	// vtable[5] GetDmgModClub
	// vtable[6] GetDmgModExplosive
	// vtable[7] GetDmgModFire
	// vtable[8] SetExplosiveRadius
	// vtable[9] SetExplosiveDamage
	// vtable[10] GetExplosiveRadius
	// vtable[11] GetExplosiveDamage
	// vtable[12] SetPhysicsDamageTable
	// vtable[13] GetPhysicsDamageTable
	// vtable[14] SetBreakableModel
	// vtable[15] GetBreakableModel
	// vtable[16] SetBreakableSkin
	// vtable[17] GetBreakableSkin
	// vtable[18] SetBreakableCount
	// vtable[19] GetBreakableCount
	// vtable[20] SetMaxBreakableSize
	// vtable[21] GetMaxBreakableSize
	// vtable[22] SetPropDataBlocksLOS
	// vtable[23] SetPropDataIsAIWalkable
	// vtable[24] SetInteraction
	// vtable[25] HasInteraction
	// vtable[26] SetPhysicsMode
	// vtable[27] GetPhysicsMode
	// vtable[28] SetMultiplayerBreakMode
	// vtable[29] GetMultiplayerBreakMode
	// vtable[30] SetBasePropData
	// vtable[31] GetBasePropData
	// vtable[32] GetMinHealthDamage
	// sizeof = 8
};

// src/game/shared/props_shared.h:204
class CPropData : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct propdata_breakablechunk_t {
		string_t iszChunkType;  // +0x0
		propdata_breakablechunk_t();
		~propdata_breakablechunk_t();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

	bool m_bPropDataLoaded;  // +0x20

	typedef CAutoGameSystem BaseClass;
	CPropData(CPropData &);
	CPropData(const CPropData &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CPropData *);
	CPropData();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	void ParsePropDataFile();
	int ParsePropFromKV(CBaseEntity *, IBreakableWithPropData *, KeyValues *, KeyValues *, bool);
	int ParsePropFromBase(CBaseEntity *, IBreakableWithPropData *, const char *, bool);
	const char * GetRandomChunkModel(const char *, int);
	int GetPropValueFromBase(const char *, const char *, int);
	virtual ~CPropData();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// vtable[7] BuildGameSessionManifest
	// sizeof = 64
};

// src/game/shared/props_shared.h:248
struct breakablepropparams_t {
	const const Vector & origin;  // +0x0
	const const QAngle & angles;  // +0x8
	const float scale;  // +0x10

	const const Vector & velocity;  // +0x18
	const const AngularImpulse & angularVelocity;  // +0x20
	float impactEnergyScale;  // +0x28
	float defBurstScale;  // +0x2c
	float defBurstRandomize;  // +0x30
	int defCollisionGroup;  // +0x34
	bool useThisRawVelocity;  // +0x38

	int breakModelsNotToMake;  // +0x3c
	breakablepropparams_t(const Vector &, const QAngle &, float, const Vector &, const AngularImpulse &);

	// sizeof = 64
};
