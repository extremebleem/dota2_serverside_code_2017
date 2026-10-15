// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_event_definition.h:38
struct SDOTAEventGoalDefinition {
	EventGoalID_t unGoalID;  // +0x0

	uint64 unGoalTargetValue;  // +0x28
	EventGoalID_t unPrerequisiteGoalID;  // +0x30

	uint32 unLinaPlaysGranted;  // +0x34
	SDOTAEventGoalDefinition();
	~SDOTAEventGoalDefinition();
	SDOTAEventGoalDefinition(const SDOTAEventGoalDefinition &);
	SDOTAEventGoalDefinition & operator=(const SDOTAEventGoalDefinition &);

	// sizeof = 56
};

// src/game/shared/dota/dota_event_definition.h:50
struct SDOTAEventMysteryCategory {
	const char * pszName;  // +0x0
	const char * pszLocName;  // +0x8
	const char * pszLootList;  // +0x10

	// sizeof = 24
};

// src/game/shared/dota/dota_event_definition.h:58
struct DOTAEventMysteryVOLine_t {
	const char * m_pSoundEvent;  // +0x0
	bool m_bIsSpokenByCharacterOnWheel;  // +0x8

	// sizeof = 16
};

// src/game/shared/dota/dota_event_definition.h:64
struct DOTAEventMysteryVOGroup_t {
	DOTAEventMysteryVOGroup_t();
	~DOTAEventMysteryVOGroup_t();

	// sizeof = 24
};

// src/game/shared/dota/dota_event_definition.h:107
struct SDOTAEventRewardDefinition_Item {
	uint32 unItemDef;  // +0x0
	uint32 unQuantity;  // +0xc

	// sizeof = 16
};

// src/game/shared/dota/dota_event_definition.h:115
struct SDOTAEventRewardDefinition_LootList {
	const char * pszLootList;  // +0x0
	uint32 unQuantity;  // +0x10

	// sizeof = 24
};

// src/game/shared/dota/dota_event_definition.h:123
struct SDOTAEventRewardDefinition_Trophy {
	TrophyID_t unTrophyID;  // +0x0

	TrophyScore_t unTrophyMinScore;  // +0x4

	// sizeof = 8
};

// src/game/shared/dota/dota_event_definition.h:129
struct SDOTAEventRewardDefinition_Action {
	EventActionID_t unActionID;  // +0x0
	uint32 unGrantCount;  // +0x4

	// sizeof = 8
};

// src/game/shared/dota/dota_event_definition.h:135
struct SDOTAEventRewardDefinition_Points {
	uint32 unPoints;  // +0x0
	uint32 unPremiumPoints;  // +0x4

	// sizeof = 8
};

// src/game/shared/dota/dota_event_definition.h:141
struct SDOTAEventRewardDefinition_BackpackSlots {
	uint32 unSlotsToGrant;  // +0x0

	// sizeof = 4
};

// src/game/shared/dota/dota_event_definition.h:146
struct SDOTAEventRewardDefinition_Emoticon {
	uint32 unEmoticonIDStart;  // +0x0
	uint32 unEmoticonIDEnd;  // +0x4

	// sizeof = 8
};

// src/game/shared/dota/dota_event_definition.h:152
struct SDOTAEventRewardDefinition_AccountFlag {
	uint32 unFlagsToGrant;  // +0x0
	uint32 unAuditData;  // +0x4

	// sizeof = 8
};

// src/game/shared/dota/dota_event_definition.h:158
struct SDOTAEventRewardDefinition_MaxPeriodicPoints {
	uint32 unPeriodicPointsType;  // +0x0
	uint32 unPeriodicPointsToAddToMax;  // +0x4

	// sizeof = 8
};

// src/game/shared/dota/dota_event_definition.h:164
struct SDOTAEventRewardDefinition_Quest {
	uint32 unQuestID;  // +0x0

	// sizeof = 4
};

// src/game/shared/dota/dota_event_definition.h:169
struct SDOTAEventRewardDefinition_MysteryItem {
	// sizeof = 1
};

// src/game/shared/dota/dota_event_definition.h:174
struct SDOTAEventRewardDefinition_Effect {
	const char * pszEffectName;  // +0x0
	const char * pszImage;  // +0x8
	uint32 unEffectIndex;  // +0x10

	// sizeof = 24
};

// src/game/shared/dota/dota_event_definition.h:181
struct SDOTAEventRewardDefinition {
	union {
	};

	union {
	};

	// sizeof = 32
};

// src/game/shared/dota/dota_event_definition.h:201
struct SDOTAEventScoreRewardsDefinition {
	uint32 unActionScore;  // +0x0
	uint32 unActionScoreRepeatInterval;  // +0x4
	SDOTAEventScoreRewardsDefinition();
	~SDOTAEventScoreRewardsDefinition();

	// sizeof = 32
};

// src/game/shared/dota/dota_event_definition.h:208
struct SDOTAEventAchievementDefinition {
	const char * pszName;  // +0x0
	const char * pszDescription;  // +0x8
	const char * pszImage;  // +0x10
	EventActionID_t unTrackingActionID;  // +0x18
	uint32 unAchievementGoal;  // +0x1c
	uint32 unAchievementLevel;  // +0x20

	// sizeof = 40
};

// src/game/shared/dota/dota_event_definition.h:218
struct SDOTAEventActionDefinition {
	EventActionID_t unMinActionID;  // +0x0
	EventActionID_t unMaxActionID;  // +0x4
	const char * pszActionName;  // +0x8
	uint32 unMaxGrants;  // +0x10
	uint32 unAvailableAtEventLevel;  // +0x14
	uint32 unAvailableAtEventLevelRepeatInterval;  // +0x18
	uint32 unPointCost;  // +0x1c
	uint32 unPremiumPointCost;  // +0x20

	bool bMustOwnEvent;  // +0x48
	bool bAddToWebRequest;  // +0x49
	bool bImportant;  // +0x4a
	SDOTAEventActionDefinition();
	bool IsClaimable();
	uint32 GetEventLevelForActionID(EventActionID_t);
	EventActionID_t GetActionIDForEventLevel(uint32);
	~SDOTAEventActionDefinition();

	// sizeof = 80
};

// src/game/shared/dota/dota_event_definition.h:242
class CDOTAEventDefinition {
private:

	uint32 m_unLeagueID;  // +0x10
	bool m_bMajor;  // +0x14
	bool m_bHasBracketData;  // +0x15
	bool m_bEventPointPopup;  // +0x16
	bool m_bEventPointPopupPremium;  // +0x17
	bool m_bCanGrantPoints;  // +0x18

	uint32 m_unEventPointsPerLevel;  // +0x1c
	uint32 m_unEventEndTime;  // +0x20

	const char * m_pszSeasonName;  // +0x28
	const char * m_pszSeasonClass;  // +0x30
	TrophyID_t m_unCrestTrophyID;  // +0x3a

	const char * m_pszCrestPrefix;  // +0x40
	unsigned int m_unPlayerCardDustCount[3];  // +0x80
	uint m_unPlayerCardDustPackPrice;  // +0x8c
	const char * m_pszBackgroundPanelPath;  // +0x90
	const char * m_pszQuestPickerPanelPath;  // +0x98
	const char * m_pszQuestStatusPanelPath;  // +0xa0
	QuestID_t m_unDefaultQuestID;  // +0xa8

	const char * m_pszEventURL;  // +0xb0
	const char * m_pszRecyclingButtonID;  // +0xb8
	const char * m_pszShowHomePageEvent;  // +0xc0
	const char * m_pszPurchaseAccessEvent;  // +0xc8
	const char * m_pszPurchaseLevelsEvent;  // +0xd0
	const char * m_pszPurchasePointsEvent;  // +0xd8
	const char * m_pszSpendPointsEvent;  // +0xe0
	const char * m_pszShowAchievementsEvent;  // +0xe8
	const char * m_pszShowLevelRewardsEvent;  // +0xf0
	const char * m_pszNormalPointsLeaderboardName;  // +0xf8
	const char * m_pszPremiumPointsLeaderboardName;  // +0x100
	const char * m_pszWagerWinningsLeaderboardName;  // +0x108
	const char * m_pszSeasonMMRFriendsLeaderboardName;  // +0x110
	const char * m_pszSeasonMMRGlobalLeaderboardName;  // +0x118
	const char * m_pszWeekendTourneyFriendsLeaderboardNameBase;  // +0x120
	const char * m_pszFantasyLeaderboardName;  // +0x128
	const char * m_pszSeasonBackgroundMapName;  // +0x130
	TrophyID_t m_unLevelEventTrophyID;  // +0x138
	TrophyID_t m_unAchievementsTrophyID;  // +0x13a
	TrophyID_t m_unWeekendTourneyTrophyRegularSeason;  // +0x13c
	TrophyID_t m_unWeekendTourneyTrophyChampionsCup;  // +0x13e
	bool m_bTotalPointsUsesHighWatermark;  // +0x140

	uint32 m_unPeriodicResourceType;  // +0x144
	unsigned int m_unPeriodicPoints[10];  // +0x148
	uint32 m_unPeriodicStartTime;  // +0x170
	uint32 m_unPeriodDuration;  // +0x174
	uint32 m_unPeriodicPointScaleFactor;  // +0x178
	uint32 m_unPeriodicPointBonusPoints;  // +0x17c
	uint32 m_unPeriodicPointBonusMinimumPoints;  // +0x180
	uint32 m_unPeriodicPointBonusMaximumPoints;  // +0x184
	EventActionID_t m_unCustomGameRewardActionID;  // +0x188
	TrophyID_t m_unCustomGameRewardTrophy;  // +0x18c

	RTime32 m_unWagerTime;  // +0x190
	int m_nWagerAmounts[4];  // +0x194
	uint32 m_unTipAmount;  // +0x1a4
	RTime32 m_unExpirationDate;  // +0x1a8
	float m_fWagerConversionRatio;  // +0x1ac

	CUtlOrderedMap m_mapLevelRewards;  // +0x1e0
	CUtlOrderedMap m_mapItemRewards;  // +0x228

	CUtlOrderedMap m_mapEventGoals;  // +0x290
	const char * m_pszMysteryName;  // +0x2c0
	const char * m_pszMysteryImage;  // +0x2c8
	CUtlOrderedMap m_mapEventActions;  // +0x368
	CUtlOrderedMap m_mapEventActionsByName;  // +0x398
	CUtlOrderedMap m_mapEventLevelActions;  // +0x3e0
	CUtlOrderedMap m_mapItemLevelRewards;  // +0x428
	float m_fFantasyScoring[12];  // +0x458
	unsigned int m_unFantasyDayTimestamps[10];  // +0x488
	CDOTAEventDefinition(EEvent);
	~CDOTAEventDefinition();
	bool InitFromKeyValues(KeyValues *, CUtlString &);
	uint32 GetLeagueID();
	bool IsMajor();
	bool HasBracketData();
	bool CanGrantPoints();
	const char * GetSeasonName();
	const char * GetSeasonClass();
	item_definition_index_t GetRecyclingRecipeItemDef();
	uint32 GetEventPointsPerLevel();
	uint32 GetEventPointsLevel(uint32);
	uint32 GetEventPointsToNextLevel(uint32);
	bool DoesEventPointPopup(bool);
	const CMsgDOTASeasonRewards * GetRewards_Legacy();
	void GetRewardsAtLevel_Legacy(uint32, CUtlVector<const CMsgDOTASeasonRewards_Reward*, CUtlMemory<const CMsgDOTASeasonRewards_Reward*, int> > &);
	uint32 GetMaxLevelWithNonRepeatingReward_Legacy();
	const CUtlVector<const CMsgDOTASeasonRewards_Reward*, CUtlMemory<const CMsgDOTASeasonRewards_Reward*, int> > & GetRepeatingRewards_Legacy();
	const CMsgDOTASeasonAchievements * GetAchievements_Legacy();
	uint32 GetMaxEventLevelWithNonRepeatingAction();
	void GetActionsAtEventLevel(uint32, CUtlVector<const SDOTAEventActionDefinition*, CUtlMemory<const SDOTAEventActionDefinition*, int> > &);
	const CUtlVector<const SDOTAEventActionDefinition*, CUtlMemory<const SDOTAEventActionDefinition*, int> > & GetRepeatingEventLevelActions();
	uint32 GetNextLevelForItemDefReward(item_definition_index_t, uint32);
	uint32 GetNextNonRepeatingLevelForItemDefReward(item_definition_index_t, uint32);
	uint32 GetNextRepeatingLevelForItemDefReward(item_definition_index_t, uint32);
	bool IsItemDefAnEventReward(item_definition_index_t);
	const CMsgDOTASeasonPredictions * GetPredictions();
	const char * GetMysteryName();
	const char * GetMysteryImage();
	const SDOTAEventMysteryCategory * GetMysteryCategory(DOTAEventMysteryCategoryIndex_t);
	const SDOTAEventMysteryCategory * GetMysteryCategoryByName(const char *);
	const CUtlVector<SDOTAEventMysteryCategory, CUtlMemory<SDOTAEventMysteryCategory, int> > & GetMysteryCategories();
	const CUtlVector<int, CUtlMemory<int, int> > & GetMysteryWheelSegments();
	const DOTAEventMysteryVOGroup_t * GetMysteryWheelVOGroup(const char *);
	float GetFantasyScoringFactor(DOTAFantasy_Scoring);
	RTime32 GetFantasyDayTimestamp(int);
	bool IsValidFantasyDayTimestamp(RTime32);
	const CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > & GetActivateItemDefs();
	const CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > & GetPurchasePointsItemDefs();
	const char * GetBackgroundPanelPath();
	const char * GetQuestPickerPanelPath();
	const char * GetQuestStatusPanelPath();
	QuestID_t GetDefaultQuestID();
	const char * GetEventURL();
	const char * GetRecyclingButtonID();
	const char * GetShowHomePageEvent();
	const char * GetPurchaseAccessEvent();
	const char * GetPurchaseLevelsEvent();
	const char * GetPurchasePointsEvent();
	const char * GetSpendPointsEvent();
	const char * GetShowAchivementsEvent();
	const char * GetShowLevelRewardsEvent();
	const char * GetNormalPointsLeaderboardName();
	const char * GetPremiumPointsLeaderboardName();
	const char * GetWagerWinningsLeaderboardName();
	const char * GetSeasonMMRFriendsLeaderboardName();
	const char * GetSeasonMMRGlobalLeaderboardName();
	const char * GetWeekendTourneyFriendsLeaderboardNameBase(int);
	CUtlString GetWeekendTourneyFriendsLeaderboardNameForSkillLevel(int);
	const char * GetWeekendTourneyFriendsLeaderboardNameBase();
	const char * GetFantasyLeaderboardName();
	const char * GetSeasonBackgroundMapName();
	TrophyID_t GetLevelEventTrophyID();
	TrophyID_t GetAchievementsTrophyID();
	TrophyID_t GetWeekendTourneyTrophyRegularSeason();
	TrophyID_t GetWeekendTourneyTrophyChampionsCup();
	RTime32 GetEventEndTime();
	RTime32 GetTimeUntilEventEnd();
	bool TotalPointsUsesHighWatermark();
	bool IsPeriodic();
	uint32 GetPeriodicPoints(int);
	uint32 GetPeriodicResourceType();
	bool UsePeriodicPointsToAdjustPointGrants();
	int GetPeriodicPointScaleFactor();
	int GetPeriodicPointBonusPoints();
	int GetPeriodicPointBonusMinimumPoints();
	int GetPeriodicPointBonusMaximumPoints();
	EventActionID_t GetCustomGameRewardActionID();
	TrophyID_t GetCustomGameRewardTrophy();
	RTime32 GetPeriodStartTime();
	RTime32 GetPeriodDuration();
	int GetPeriodIndex(RTime32);
	RTime32 GetPeriodicTime(RTime32);
	RTime32 GetTimeUntilPeriodReset(RTime32);
	RTime32 GetWagerTime();
	int GetBaseWagerSizeAmount(int);
	float GetWagerConversionRatio();
	uint32 GetTipAmount();
	item_definition_index_t GetEventFXItemDef();
	item_definition_index_t GetPlayerCardPackItemDef();
	item_definition_index_t GetPlayerCardItemDef();
	item_definition_index_t GetPlayerCardDustItemDef();
	uint32 GetPlayerCardDustCount(int);
	uint32 GetPlayerCardPackDustPrice();
	const CUtlOrderedMap & GetEventGoalDefinitions();
	const SDOTAEventGoalDefinition * GetEventGoalDefinition(EventGoalID_t);
	const SDOTAEventGoalDefinition * GetEventGoalDefinitionByName(const char *);
	EventGoalID_t ParseEventGoalID(const char *);
	bool IsExpired();
	bool IsExpiredAtTime(uint32);
	RTime32 GetExpirationDate();
	uint32 GetEffectMaskForAction(EventActionID_t, uint32);
	const CUtlOrderedMap & GetActionDefinitionsMap();
	const SDOTAEventActionDefinition * GetActionDefinition(EventActionID_t);
	const SDOTAEventActionDefinition * GetActionDefinitionByName(const char *);
	const CUtlVector<const SDOTAEventActionDefinition*, CUtlMemory<const SDOTAEventActionDefinition*, int> > & GetAchievementActionDefinitions();
	bool InitArcanaVoteFromKV(KeyValues *, CUtlString &);
	bool InitItemDefVectorFromKV(KeyValues *, CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> > &, CUtlString &);
	bool InitEventActions(KeyValues *, CUtlString &);
	bool InitEventScoreRewards(SDOTAEventScoreRewardsDefinition &, KeyValues *, const char *, CUtlString &);
	bool InitEventReward(SDOTAEventRewardDefinition &, KeyValues *, const char *, const char *, CUtlString &);
	bool ParseRepeatInterval(const char *, uint32 &, uint32 &);
	bool ParseRange(const char *, uint32 &, uint32 &);

	// sizeof = 1200
};
