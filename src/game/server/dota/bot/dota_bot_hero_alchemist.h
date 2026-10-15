// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_alchemist.h:17
class CDOTA_Bot_Hero_Alchemist : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Alchemist(CDOTA_Bot_Hero_Alchemist &);
	CDOTA_Bot_Hero_Alchemist(CDOTA_Bot_Hero_Alchemist &);
	CDOTA_Bot_Hero_Alchemist(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual int GetGankDistance();
	virtual ~CDOTA_Bot_Hero_Alchemist();

	// vtable[18] GetGankDistance
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_alchemist.h:34
class CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist> {
public:

	CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray(CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray &);
	CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray(const CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray &);
	CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_alchemist.h:47
class CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist> {
public:

	CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction(CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction &);
	CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction(const CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction &);
	CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_alchemist.h:60
class CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist> {
public:

	CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow(CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow &);
	CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow(const CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow &);
	CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_alchemist.h:73
class CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist> {
public:

	CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage(CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage &);
	CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage(const CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage &);
	CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
