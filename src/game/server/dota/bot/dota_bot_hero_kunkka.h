// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_kunkka.h:18
class CDOTA_Bot_Hero_Kunkka : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Kunkka(CDOTA_Bot_Hero_Kunkka &);
	CDOTA_Bot_Hero_Kunkka(CDOTA_Bot_Hero_Kunkka &);
	CDOTA_Bot_Hero_Kunkka(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual bool HasLocationStun();
	virtual int GetGankDistance();
	virtual int GetMaxRoamDistance();
	virtual ~CDOTA_Bot_Hero_Kunkka();

	// vtable[12] CreateMode
	// vtable[17] HasLocationStun
	// vtable[18] GetGankDistance
	// vtable[19] GetMaxRoamDistance
	// sizeof = 34520
};

// src/game/server/dota/bot/dota_bot_hero_kunkka.h:41
class CDOTA_BotMode_Laning_Kunkka : public CDOTA_BotMode_Laning {
public:

	CDOTA_BotMode_Laning_Kunkka(CDOTA_BotMode_Laning_Kunkka &);
	CDOTA_BotMode_Laning_Kunkka(const CDOTA_BotMode_Laning_Kunkka &);
	CDOTA_BotMode_Laning_Kunkka(CDOTA_Bot *);
	virtual void Think();
	virtual ~CDOTA_BotMode_Laning_Kunkka();

	// vtable[5] Think
	// sizeof = 240
};

// src/game/server/dota/bot/dota_bot_hero_kunkka.h:52
class CDOTA_BotMode_Attack_Kunkka : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Kunkka(CDOTA_BotMode_Attack_Kunkka &);
	CDOTA_BotMode_Attack_Kunkka(const CDOTA_BotMode_Attack_Kunkka &);
	CDOTA_BotMode_Attack_Kunkka(CDOTA_Bot *);
	virtual void Think();
	virtual ~CDOTA_BotMode_Attack_Kunkka();

	// vtable[5] Think
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_kunkka.h:75
class CDOTA_Bot_AbilityUsage_Kunkka_Torrent : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka> {
public:

private:

	CDOTA_Bot_AbilityUsage_Kunkka_Torrent(CDOTA_Bot_AbilityUsage_Kunkka_Torrent &);
	CDOTA_Bot_AbilityUsage_Kunkka_Torrent(const CDOTA_Bot_AbilityUsage_Kunkka_Torrent &);
	CDOTA_Bot_AbilityUsage_Kunkka_Torrent(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Kunkka_Torrent();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_kunkka.h:92
class CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot(CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot &);
	CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot(const CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot &);
	CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_kunkka.h:109
class CDOTA_Bot_AbilityUsage_Kunkka_GhostShip : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka> {
public:

private:

	CDOTA_Bot_AbilityUsage_Kunkka_GhostShip(CDOTA_Bot_AbilityUsage_Kunkka_GhostShip &);
	CDOTA_Bot_AbilityUsage_Kunkka_GhostShip(const CDOTA_Bot_AbilityUsage_Kunkka_GhostShip &);
	CDOTA_Bot_AbilityUsage_Kunkka_GhostShip(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Kunkka_GhostShip();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
