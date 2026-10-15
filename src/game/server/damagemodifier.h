// Reconstructed from DWARF by pahole; not original source.

// src/game/server/damagemodifier.h:23
class CDamageModifier {
private:

	float m_flModifier;  // +0x0
	bool m_bDoneToMe;  // +0x8
	CDamageModifier();
	void AddModifierToEntity(CBaseEntity *);
	void RemoveModifier();
	void SetModifier(float);
	float GetModifier();
	void SetDoneToMe(bool);
	bool IsDamageDoneToMe();
	CBaseEntity * GetCharacter();

	// sizeof = 12
};
