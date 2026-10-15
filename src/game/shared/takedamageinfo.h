// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/takedamageinfo.h:75
class CTakeDamageInfo {
	int ()() * * _vptr.CTakeDamageInfo;  // +0x0
private:

protected:

	EHANDLE m_hInflictor;  // +0x38
	EHANDLE m_hAttacker;  // +0x3c
	EHANDLE m_hWeapon;  // +0x40
	float m_flDamage;  // +0x44
	float m_flMaxDamage;  // +0x48
	float m_flBaseDamage;  // +0x4c
	int m_bitsDamageType;  // +0x50
	int m_iDamageCustom;  // +0x54
	int m_iAmmoType;  // +0x58
	float m_flRadius;  // +0x5c
	HPhysicsBody m_hBodyPart;  // +0x60
	bool m_bCanHeadshot;  // +0x68

	float m_flOriginalDamage;  // +0x6c
	int m_nDamageTaken;  // +0x70
	short int m_iRecord;  // +0x74

	float m_flStabilityDamage;  // +0x78
	int m_bitsDotaDamageType;  // +0x7c
	int m_nDotaDamageCategory;  // +0x80
	bool m_bAllowFriendlyFire;  // +0x84
	bool m_bCanBeBlocked;  // +0x85

	HSCRIPT m_hScriptInstance;  // +0x88

	static datamap_t m_DataMap;

private:

	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	HSCRIPT GetHScript();
	CTakeDamageInfo();
	CTakeDamageInfo(CBaseEntity *, CBaseEntity *, float, int, int);
	CTakeDamageInfo(CBaseEntity *, CBaseEntity *, CBaseEntity *, float, int, int);
	CTakeDamageInfo(CBaseEntity *, CBaseEntity *, const Vector &, const Vector &, float, int, int, Vector *);
	CTakeDamageInfo(CBaseEntity *, CBaseEntity *, CBaseEntity *, const Vector &, const Vector &, float, int, int, Vector *);
	CTakeDamageInfo(const CTakeDamageInfo &);
	CTakeDamageInfo & operator=(const CTakeDamageInfo &);
	~CTakeDamageInfo();
	void CopyData(const CTakeDamageInfo *);
	CBaseEntity * GetInflictor();
	HSCRIPT Script_GetInflictor();
	void SetInflictor(CBaseEntity *);
	CBaseEntity * GetWeapon();
	void SetWeapon(CBaseEntity *);
	CBaseEntity * GetAttacker();
	HSCRIPT Script_GetAttacker();
	void SetAttacker(CBaseEntity *);
	void Script_SetAttacker(HSCRIPT);
	float GetDamage();
	void SetDamage(float);
	float GetMaxDamage();
	void SetMaxDamage(float);
	void ScaleDamage(float);
	void AddDamage(float);
	float GetBaseDamage();
	bool BaseDamageIsValid();
	Vector GetDamageForce();
	void SetDamageForce(const Vector &);
	void ScaleDamageForce(float);
	Vector GetDamagePosition();
	void SetDamagePosition(const Vector &);
	Vector GetReportedPosition();
	void SetReportedPosition(const Vector &);
	Vector GetDamageDirection();
	void SetDamageDirection(const Vector &);
	int GetDamageType();
	void SetDamageType(int);
	void AddDamageType(int);
	int GetDamageCustom();
	void SetDamageCustom(int);
	int GetAmmoType();
	void SetAmmoType(int);
	const char * GetAmmoName();
	float GetRadius();
	void SetRadius(float);
	bool IsFatalBlastDamage();
	void Set(CBaseEntity *, CBaseEntity *, float, int, int);
	void Set(CBaseEntity *, CBaseEntity *, CBaseEntity *, float, int, int);
	void Set(CBaseEntity *, CBaseEntity *, const Vector &, const Vector &, float, int, int, Vector *);
	void Set(CBaseEntity *, CBaseEntity *, CBaseEntity *, const Vector &, const Vector &, float, int, int, Vector *);
	void AdjustPlayerDamageInflictedForSkillLevel();
	void AdjustPlayerDamageTakenForSkillLevel();
	void DebugGetDamageTypeString(unsigned int, char *, int);
	void SetBodyPart(HPhysicsBody);
	HPhysicsBody GetBodyPart();
	void SetOriginalDamage(float);
	float GetOriginalDamage();
	void SetDamageTaken(int);
	float GetDamageTaken();
	void SetDotaDamageType(int);
	int GetDotaDamageType();
	void SetDotaDamageCategory(int);
	int GetDotaDamageCategory();
	void SetDamageRecord(short int);
	short int GetDamageRecord();
	void SetStabilityDamage(float);
	float GetStabilityDamage();
	void SetAllowFriendlyFire(bool);
	bool AllowFriendlyFire();
	void SetCanBeBlocked(bool);
	bool CanBeBlocked();
	void CopyDamageToBaseDamage();
	bool IsImpactDamage();
	bool CanHeadshot();
	void SetCanHeadshot(bool);
	void Init(CBaseEntity *, CBaseEntity *, CBaseEntity *, const Vector &, const Vector &, const Vector &, float, int, int);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] GetScriptDesc
	// sizeof = 144
};

// src/game/shared/takedamageinfo.h:262
class CMultiDamage : public CTakeDamageInfo {
public:

protected:

	EHANDLE m_hTarget;  // +0x90

	static datamap_t m_DataMap;
	CMultiDamage(CMultiDamage &);
	CMultiDamage(const CMultiDamage &);
	CMultiDamage();
	bool IsClear();
	CBaseEntity * GetTarget();
	void SetTarget(CBaseEntity *);
	void Init(CBaseEntity *, CBaseEntity *, CBaseEntity *, CBaseEntity *, const Vector &, const Vector &, const Vector &, float, int, int);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	~CMultiDamage();

	// sizeof = 152
};
