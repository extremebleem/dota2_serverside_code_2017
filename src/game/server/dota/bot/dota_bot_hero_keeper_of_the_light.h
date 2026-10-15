// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_keeper_of_the_light.h:20
class CDOTA_Bot_Hero_Keeper_Of_The_Light : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Keeper_Of_The_Light(CDOTA_Bot_Hero_Keeper_Of_The_Light &);
	CDOTA_Bot_Hero_Keeper_Of_The_Light(CDOTA_Bot_Hero_Keeper_Of_The_Light &);
	CDOTA_Bot_Hero_Keeper_Of_The_Light(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Keeper_Of_The_Light();

	// sizeof = 34488
};

// src/game/server/dota/bot/dota_bot_hero_keeper_of_the_light.h:37
class CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Keeper_Of_The_Light> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	float m_flDelay;  // +0x24
	CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic(CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic &);
	CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic(const CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic &);
	CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	int GetCurrentUsageDesire_Tutorial();
	virtual ~CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_keeper_of_the_light.h:64
class CDOTA_TutorialBot_Hero_Keeper_Of_The_Light : public CDOTA_Bot_Hero_Keeper_Of_The_Light {
public:

	CDOTA_TutorialBot_Hero_Keeper_Of_The_Light(CDOTA_TutorialBot_Hero_Keeper_Of_The_Light &);
	CDOTA_TutorialBot_Hero_Keeper_Of_The_Light(CDOTA_TutorialBot_Hero_Keeper_Of_The_Light &);
	CDOTA_TutorialBot_Hero_Keeper_Of_The_Light(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual DOTA_BOT_MODE GetInitialMode();
	virtual CDOTA_BotMode * CreateMode(int);
	virtual ~CDOTA_TutorialBot_Hero_Keeper_Of_The_Light();

	// vtable[27] IsTutorial
	// vtable[4] GetInitialMode
	// vtable[12] CreateMode
	// sizeof = 34488
};
