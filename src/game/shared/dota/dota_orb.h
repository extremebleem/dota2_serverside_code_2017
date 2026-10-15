// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_orb.h:36
class CDOTA_Orb {
	int ()() * * _vptr.CDOTA_Orb;  // +0x0
private:

	EHANDLE m_hCaster;  // +0x10
	EHANDLE m_hAbility;  // +0x14

	CDOTA_Orb();
	CDOTA_Orb(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual ~CDOTA_Orb();
	virtual const char * GetProjectileName();
	virtual int GetOrbLabel();
	virtual void OnOrbStart(KeyValues *);
	virtual void OnOrbFire(const CModifierParams &);
	virtual void OnOrbPreImpact(const CModifierParams &);
	virtual void OnOrbImpact(const CModifierParams &);
	CDOTA_BaseNPC * GetCaster();
	CDOTABaseAbility * GetAbility();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetProjectileName
	// vtable[4] GetOrbLabel
	// vtable[5] OnOrbStart
	// vtable[6] OnOrbFire
	// vtable[7] OnOrbPreImpact
	// vtable[8] OnOrbImpact
	// sizeof = 24
};
