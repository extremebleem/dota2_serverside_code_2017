// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_batrider.h:17
class CDOTA_Bot_Hero_Batrider : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Batrider(CDOTA_Bot_Hero_Batrider &);
	CDOTA_Bot_Hero_Batrider(CDOTA_Bot_Hero_Batrider &);
	CDOTA_Bot_Hero_Batrider(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Batrider();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_batrider.h:32
class CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider> {
public:

	CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm(CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm &);
	CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm(const CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm &);
	CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_batrider.h:45
class CDOTA_Bot_AbilityUsage_Batrider_Flamebreak : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider> {
public:

	CDOTA_Bot_AbilityUsage_Batrider_Flamebreak(CDOTA_Bot_AbilityUsage_Batrider_Flamebreak &);
	CDOTA_Bot_AbilityUsage_Batrider_Flamebreak(const CDOTA_Bot_AbilityUsage_Batrider_Flamebreak &);
	CDOTA_Bot_AbilityUsage_Batrider_Flamebreak(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Batrider_Flamebreak();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_batrider.h:58
class CDOTA_Bot_AbilityUsage_Batrider_Firefly : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider> {
public:

	CDOTA_Bot_AbilityUsage_Batrider_Firefly(CDOTA_Bot_AbilityUsage_Batrider_Firefly &);
	CDOTA_Bot_AbilityUsage_Batrider_Firefly(const CDOTA_Bot_AbilityUsage_Batrider_Firefly &);
	CDOTA_Bot_AbilityUsage_Batrider_Firefly(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Batrider_Firefly();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_batrider.h:71
class CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider> {
public:

	CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso(CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso &);
	CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso(const CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso &);
	CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
