// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_antimage.h:17
class CDOTA_Bot_Hero_Antimage : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Antimage(CDOTA_Bot_Hero_Antimage &);
	CDOTA_Bot_Hero_Antimage(CDOTA_Bot_Hero_Antimage &);
	CDOTA_Bot_Hero_Antimage(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Antimage();

	// sizeof = 34496
};

// src/game/server/dota/bot/dota_bot_hero_antimage.h:30
class CDOTA_Bot_AbilityUsage_Antimage_Blink : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage> {
public:

	CDOTA_Bot_AbilityUsage_Antimage_Blink(CDOTA_Bot_AbilityUsage_Antimage_Blink &);
	CDOTA_Bot_AbilityUsage_Antimage_Blink(const CDOTA_Bot_AbilityUsage_Antimage_Blink &);
	CDOTA_Bot_AbilityUsage_Antimage_Blink(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Antimage_Blink();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_antimage.h:43
class CDOTA_Bot_AbilityUsage_Antimage_ManaVoid : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage> {
public:

	CDOTA_Bot_AbilityUsage_Antimage_ManaVoid(CDOTA_Bot_AbilityUsage_Antimage_ManaVoid &);
	CDOTA_Bot_AbilityUsage_Antimage_ManaVoid(const CDOTA_Bot_AbilityUsage_Antimage_ManaVoid &);
	CDOTA_Bot_AbilityUsage_Antimage_ManaVoid(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Antimage_ManaVoid();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
