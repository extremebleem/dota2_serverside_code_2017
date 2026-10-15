// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_moon_shard.h:24
class CDOTA_Modifier_Item_Moonshard_Consumed : public CDOTA_Buff {
public:

private:

	int consumed_bonus;  // +0xba8
	CDOTA_Modifier_Item_Moonshard_Consumed();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual const char * GetTexture();
	virtual EMatchPermanentBuff GetMatchPermanentBuff();
	int GetConsumedBonus();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual bool AllowIllusionDuplicate();
	virtual CDOTA_Buff * DuplicateForIllusion(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Item_Moonshard_Consumed();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[32] GetTexture
	// vtable[53] GetMatchPermanentBuff
	// vtable[10] AddCustomTransmiterData
	// vtable[18] AllowIllusionDuplicate
	// vtable[22] DuplicateForIllusion
	// sizeof = 2992
};
