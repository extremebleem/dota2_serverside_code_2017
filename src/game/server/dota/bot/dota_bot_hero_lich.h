// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_lich.h:17
class CDOTA_Bot_Hero_Lich : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Lich(CDOTA_Bot_Hero_Lich &);
	CDOTA_Bot_Hero_Lich(CDOTA_Bot_Hero_Lich &);
	CDOTA_Bot_Hero_Lich(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Lich();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_lich.h:32
class CDOTA_Bot_AbilityUsage_Lich_FrostNova : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lich_FrostNova(CDOTA_Bot_AbilityUsage_Lich_FrostNova &);
	CDOTA_Bot_AbilityUsage_Lich_FrostNova(const CDOTA_Bot_AbilityUsage_Lich_FrostNova &);
	CDOTA_Bot_AbilityUsage_Lich_FrostNova(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lich_FrostNova();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_lich.h:49
class CDOTA_Bot_AbilityUsage_Lich_FrostArmor : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lich_FrostArmor(CDOTA_Bot_AbilityUsage_Lich_FrostArmor &);
	CDOTA_Bot_AbilityUsage_Lich_FrostArmor(const CDOTA_Bot_AbilityUsage_Lich_FrostArmor &);
	CDOTA_Bot_AbilityUsage_Lich_FrostArmor(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lich_FrostArmor();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_lich.h:66
class CDOTA_Bot_AbilityUsage_Lich_DarkRitual : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lich_DarkRitual(CDOTA_Bot_AbilityUsage_Lich_DarkRitual &);
	CDOTA_Bot_AbilityUsage_Lich_DarkRitual(const CDOTA_Bot_AbilityUsage_Lich_DarkRitual &);
	CDOTA_Bot_AbilityUsage_Lich_DarkRitual(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lich_DarkRitual();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_lich.h:83
class CDOTA_Bot_AbilityUsage_Lich_ChainFrost : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lich_ChainFrost(CDOTA_Bot_AbilityUsage_Lich_ChainFrost &);
	CDOTA_Bot_AbilityUsage_Lich_ChainFrost(const CDOTA_Bot_AbilityUsage_Lich_ChainFrost &);
	CDOTA_Bot_AbilityUsage_Lich_ChainFrost(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lich_ChainFrost();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
