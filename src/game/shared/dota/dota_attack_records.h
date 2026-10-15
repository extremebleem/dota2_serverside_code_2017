// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_attack_records.h:73
class CDOTA_AttackRecord {
private:

	EHANDLE m_hSource;  // +0x8
	EHANDLE m_hInflictor;  // +0xc
	EHANDLE m_hTarget;  // +0x10
	EHANDLE m_hProjectileSource;  // +0x14
	float m_flDamage;  // +0x18
	float m_flOriginalDamage;  // +0x1c
	float m_flDamagePhysical;  // +0x20
	float m_flDamagePhysical_IllusionDisplay;  // +0x24
	float m_flDamageMagical;  // +0x28
	float m_flDamageComposite;  // +0x2c
	float m_flDamagePure;  // +0x30
	short int m_iRecord;  // +0x34

	int m_iDamageCategory;  // +0x38
	int m_iFailType;  // +0x3c
	int m_iDamageType;  // +0x40
	int m_iFlags;  // +0x44
	bool m_bAttack;  // +0x48
	bool m_bRangedAttack;  // +0x49
	bool m_bFakeAttack;  // +0x4a
	bool m_bNeverMiss;  // +0x4b
	bool m_bTriggeredAttack;  // +0x4c

	Activity m_animation;  // +0x50

	bool m_bProcessProcs;  // +0x68
	bool m_bUseProjectile;  // +0x69
	bool m_bUseCastAttackOrb;  // +0x6a
	bool m_bAutoCastAttack;  // +0x6b
	int m_nBashSource;  // +0x6c
	float m_flAttackHeight;  // +0x70
	float m_flCriticalBonus;  // +0x74
	float m_flCriticalDamage;  // +0x78
	float m_flCriticalDisplay;  // +0x7c
	int m_iProjectileSpeed;  // +0x80

	string_t m_iszAutoAttackRangedParticle;  // +0x88

	CDOTA_AttackRecord();
	~CDOTA_AttackRecord();
	bool operator==(const CDOTA_AttackRecord &);
	bool IsCritical();
	Activity GetAttackAnimation();
	void OnProjectileHit();
	void DeleteOrb();

	// sizeof = 152
};

// src/game/shared/dota/dota_attack_records.h:172
class CDOTA_AttackRecordManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	uint8 m_iRecordsCount;  // +0x30
	typedef CAutoGameSystem BaseClass;
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_AttackRecordManager *);
	CDOTA_AttackRecordManager();
	virtual void GameInit(const EventGameInit_t &);
	CDOTA_AttackRecord * AddNewAttackRecord();
	CDOTA_AttackRecord * GetRecordByIndex(long int);
	void RemoveRecordByIndex(long int);
	void RemoveRecord(CDOTA_AttackRecord *);
	virtual ~CDOTA_AttackRecordManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// sizeof = 56
};

// src/game/shared/dota/dota_attack_records.h:172
class CDOTA_AttackRecordManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	uint8 m_iRecordsCount;  // +0x30
	typedef CAutoGameSystem BaseClass;
	CDOTA_AttackRecordManager(CDOTA_AttackRecordManager &);
	CDOTA_AttackRecordManager(const CDOTA_AttackRecordManager &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_AttackRecordManager *);
	CDOTA_AttackRecordManager();
	virtual void GameInit(const EventGameInit_t &);
	CDOTA_AttackRecord * AddNewAttackRecord();
	CDOTA_AttackRecord * GetRecordByIndex(long int);
	void RemoveRecordByIndex(long int);
	void RemoveRecord(CDOTA_AttackRecord *);
	virtual ~CDOTA_AttackRecordManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// sizeof = 56
};
