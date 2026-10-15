// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/weapon_parse_base.h:30
class IWeaponInfo {
	int ()() * * _vptr.IWeaponInfo;  // +0x0
	~IWeaponInfo();
	IWeaponInfo(IWeaponInfo &);
	IWeaponInfo(const IWeaponInfo &);
	IWeaponInfo();
	virtual CAmmoDef * GetAmmoDef();
	virtual HWeaponInfo LookupWeaponInfo(const char *);

	// vtable[0] GetAmmoDef
	// vtable[1] LookupWeaponInfo
	// sizeof = 8
};

// src/game/shared/weapon_parse_base.h:137
class WeaponSoundData_t {
private:

	WeaponSoundData_t();

	~WeaponSoundData_t();
	WeaponSoundData_t & operator=(const WeaponSoundData_t &);

	// sizeof = 16
};

// src/game/shared/weapon_parse_base.h:148
class WeaponTextureData_t {
private:

	int m_x;  // +0x18
	int m_y;  // +0x1c
	int m_width;  // +0x20
	int m_height;  // +0x24
	int m_FontCharacter;  // +0x28
	WeaponTextureData_t();

	WeaponTextureData_t & operator=(const WeaponTextureData_t &);
	~WeaponTextureData_t();

	// sizeof = 48
};

// src/game/shared/weapon_parse_base.h:168
class FileWeaponInfo_t {
	int ()() * * _vptr.FileWeaponInfo_t;  // +0x0
private:

	bool m_bParsedScript;  // +0x8
	bool m_bLoadedHudElements;  // +0x9

	int m_iSlot;  // +0x38
	int m_iPosition;  // +0x3c
	int m_iMaxClip1;  // +0x40
	int m_iMaxClip2;  // +0x44
	int m_iDefaultClip1;  // +0x48
	int m_iDefaultClip2;  // +0x4c
	int m_iWeight;  // +0x50
	int m_iRumbleEffect;  // +0x54
	bool m_bAutoSwitchTo;  // +0x58
	bool m_bAutoSwitchFrom;  // +0x59

	int m_iFlags;  // +0x5c
	bool m_bMeleeWeapon;  // +0x78
	bool m_bBuiltRightHanded;  // +0x79
	bool m_bAllowFlipping;  // +0x7a

	int m_iAmmoType;  // +0x7c
	int m_iAmmo2Type;  // +0x80

	~FileWeaponInfo_t();
	FileWeaponInfo_t(FileWeaponInfo_t &);
	FileWeaponInfo_t(const FileWeaponInfo_t &);
	FileWeaponInfo_t();

	const char * GetShootSound(WeaponSound_t);
	bool IsValid();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Parse(KeyValues *, const char *);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] Precache
	// vtable[2] Parse
	// sizeof = 256
};
