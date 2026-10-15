// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_ancient_apparition.h:17
class CDOTA_Bot_Hero_AncientApparition : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_AncientApparition(CDOTA_Bot_Hero_AncientApparition &);
	CDOTA_Bot_Hero_AncientApparition(CDOTA_Bot_Hero_AncientApparition &);
	CDOTA_Bot_Hero_AncientApparition(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_AncientApparition();

	// sizeof = 34520
};

// src/game/server/dota/bot/dota_bot_hero_ancient_apparition.h:33
class CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition> {
public:

	CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet(CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet &);
	CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet(const CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet &);
	CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_ancient_apparition.h:46
class CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition> {
public:

	CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex(CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex &);
	CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex(const CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex &);
	CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_ancient_apparition.h:59
class CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition> {
public:

	CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch(CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch &);
	CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch(const CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch &);
	CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_ancient_apparition.h:72
class CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition> {
public:

	CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast(CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast &);
	CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast(const CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast &);
	CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_ancient_apparition.h:85
class CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition> {
public:

	CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease(CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease &);
	CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease(const CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease &);
	CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
