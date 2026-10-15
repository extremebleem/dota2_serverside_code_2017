// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_skeleton_king.h:17
class CDOTA_Bot_Hero_SkeletonKing : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_SkeletonKing(CDOTA_Bot_Hero_SkeletonKing &);
	CDOTA_Bot_Hero_SkeletonKing(CDOTA_Bot_Hero_SkeletonKing &);
	CDOTA_Bot_Hero_SkeletonKing(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual int GetGankDistance();
	virtual float GetAggressionFactor();
	virtual ~CDOTA_Bot_Hero_SkeletonKing();

	// vtable[18] GetGankDistance
	// vtable[5] GetAggressionFactor
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_skeleton_king.h:35
class CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkeletonKing> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast(CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast &);
	CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast(const CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast &);
	CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_skeleton_king.h:56
class CDOTA_TutorialBot_Hero_SkeletonKing : public CDOTA_Bot_Hero_SkeletonKing {
public:

private:

	bool m_bHasSeenEnemy;  // +0x86c8
	CDOTA_TutorialBot_Hero_SkeletonKing(CDOTA_TutorialBot_Hero_SkeletonKing &);
	CDOTA_TutorialBot_Hero_SkeletonKing(CDOTA_TutorialBot_Hero_SkeletonKing &);
	CDOTA_TutorialBot_Hero_SkeletonKing(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual void Think();
	virtual ~CDOTA_TutorialBot_Hero_SkeletonKing();

	// vtable[27] IsTutorial
	// vtable[3] Think
	// sizeof = 34512
};
