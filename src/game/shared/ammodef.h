// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ammodef.h:20
struct Ammo_t {
	char * pName;  // +0x0
	int nDamageType;  // +0x8
	int eTracerType;  // +0xc
	float physicsForceImpulse;  // +0x10
	int nMinSplashSize;  // +0x14
	int nMaxSplashSize;  // +0x18
	int nFlags;  // +0x1c
	int pPlrDmg;  // +0x20
	int pNPCDmg;  // +0x24
	int pMaxCarry;  // +0x28

	const ConVar * pPlrDmgCVar;  // +0x30
	const ConVar * pNPCDmgCVar;  // +0x38
	const ConVar * pMaxCarryCVar;  // +0x40

	// sizeof = 72
};

// src/game/shared/ammodef.h:70
class CAmmoDef {
	int ()() * * _vptr.CAmmoDef;  // +0x0
	int m_nAmmoIndex;  // +0x8

	CAmmoDef(const CAmmoDef &);
	Ammo_t * GetAmmoOfIndex(int);
	int Index(const char *);
	int PlrDamage(int);
	int NPCDamage(int);
	virtual int MaxCarry(int, const CBaseCombatCharacter *);
	bool CanCarryInfiniteAmmo(int);
	int DamageType(int);
	int TracerType(int);
	float DamageForce(int);
	int MinSplashSize(int);
	int MaxSplashSize(int);
	int Flags(int);
	void AddAmmoType(const char *, int, int, int, int, int, float, int, int, int);
	void AddAmmoType(const char *, int, int, const char *, const char *, const char *, float, int, int, int);
	int NumAmmoTypes();
	CAmmoDef();
	virtual ~CAmmoDef();

private:

	bool AddAmmoType(const char *, int, int, int, int, int);

	// vtable[0] MaxCarry
	// sizeof = 2320
};
