// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_chen.h:17
class CDOTA_Bot_Hero_Chen : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Chen(CDOTA_Bot_Hero_Chen &);
	CDOTA_Bot_Hero_Chen(CDOTA_Bot_Hero_Chen &);
	CDOTA_Bot_Hero_Chen(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Chen();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_chen.h:32
class CDOTA_Bot_AbilityUsage_Chen_Penitence : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen> {
public:

	CDOTA_Bot_AbilityUsage_Chen_Penitence(CDOTA_Bot_AbilityUsage_Chen_Penitence &);
	CDOTA_Bot_AbilityUsage_Chen_Penitence(const CDOTA_Bot_AbilityUsage_Chen_Penitence &);
	CDOTA_Bot_AbilityUsage_Chen_Penitence(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Chen_Penitence();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_chen.h:45
class CDOTA_Bot_AbilityUsage_Chen_TestOfFaith : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen> {
public:

	CDOTA_Bot_AbilityUsage_Chen_TestOfFaith(CDOTA_Bot_AbilityUsage_Chen_TestOfFaith &);
	CDOTA_Bot_AbilityUsage_Chen_TestOfFaith(const CDOTA_Bot_AbilityUsage_Chen_TestOfFaith &);
	CDOTA_Bot_AbilityUsage_Chen_TestOfFaith(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Chen_TestOfFaith();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_chen.h:58
class CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen> {
public:

	CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion(CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion &);
	CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion(const CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion &);
	CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_chen.h:71
class CDOTA_Bot_AbilityUsage_Chen_HandOfGod : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen> {
public:

	CDOTA_Bot_AbilityUsage_Chen_HandOfGod(CDOTA_Bot_AbilityUsage_Chen_HandOfGod &);
	CDOTA_Bot_AbilityUsage_Chen_HandOfGod(const CDOTA_Bot_AbilityUsage_Chen_HandOfGod &);
	CDOTA_Bot_AbilityUsage_Chen_HandOfGod(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Chen_HandOfGod();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
