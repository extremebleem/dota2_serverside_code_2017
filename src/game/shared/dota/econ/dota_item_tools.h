// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_tools.h:12
class CEconTool_LeagueViewPass : public IEconTool {
	struct ItemContribution_t {
		float m_flRevenuePercent;  // +0x4
		ItemContribution_t();

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int m_iSeasonID;  // +0x44
	uint32 m_iLeagueID;  // +0x48
	int m_iAdmin;  // +0x50
	int m_iOrder;  // +0x54
	int m_iDuration;  // +0x88
	int m_iBasePrizePool;  // +0x8c
	uint32 m_nStartTime;  // +0x94
	uint32 m_nEndTime;  // +0x98

	bool m_bBattlePassRollup;  // +0xca
	bool m_bFantasy;  // +0xcb
	bool m_bDisabled;  // +0xcc
	bool m_bPrivate;  // +0xcd
	CEconTool_LeagueViewPass(CEconTool_LeagueViewPass &);
	CEconTool_LeagueViewPass(const CEconTool_LeagueViewPass &);
	CEconTool_LeagueViewPass(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	uint32 GetLeagueID();
	int GetSeasonID();
	int GetAdmin();
	int GetOrder();
	int GetNumTeams();
	int GetDuration();
	int GetBasePrizePool();
	const char * GetTournamentLocation();
	const char * GetLocation();
	const char * GetOrganization();
	const char * GetSquareLogo();
	const char * GetLoadingScreen();
	EDOTA_League_Tier GetTier();
	item_definition_index_t GetHudSkinItemDef();
	LeagueMatchMVPMode_t GetMatchMVPMode();
	bool HasBattlePassRollup();
	uint32 GetStartTime();
	uint32 GetEndTime();
	bool SupportsFantasy();
	bool IsDisabled();
	bool IsPrivate();
	void GetTeams(CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > *);
	int GetItemContributionCount();
	const ItemContribution_t & GetItemContribution(int);
	virtual ~CEconTool_LeagueViewPass();

	// vtable[2] BInitFromKV
	// sizeof = 208
};

// src/game/shared/dota/econ/dota_item_tools.h:105
class CEconTool_EventTicket : public IEconTool {
public:

private:

	int m_iEventID;  // +0x44
	CEconTool_EventTicket(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int GetEventID();
	virtual ~CEconTool_EventTicket();

	// vtable[2] BInitFromKV
	// sizeof = 72
};

// src/game/shared/dota/econ/dota_item_tools.h:145
class CEconTool_TournamentPassport : public IEconTool {
public:

private:

	uint32 m_iLeagueID;  // +0x44
	CEconTool_TournamentPassport(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	uint32 GetLeagueID();
	virtual ~CEconTool_TournamentPassport();

	// vtable[2] BInitFromKV
	// sizeof = 72
};

// src/game/shared/dota/econ/dota_item_tools.h:185
class CEconTool_DropRateBooster : public IEconTool {
public:

private:

	float m_flDropRateBonus;  // +0x50
	uint32 m_unDurationHours;  // +0x54
	RTime32 m_rtExpiration;  // +0x58
	uint32 m_unGameSeconds;  // +0x5c
	uint32 m_unType;  // +0x60
	bool m_bDisableMerging;  // +0x66
	CEconTool_DropRateBooster(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	float GetDropRateBonus();
	uint32 GetDurationHours();
	RTime32 GetExpirationDate();
	item_definition_index_t GetBoosterDefIndex();
	bool HasExpirationDate();
	uint32 GetType();
	uint32 GetInGameSeconds();
	bool DisableMerging();
	virtual ~CEconTool_DropRateBooster();

	// vtable[2] BInitFromKV
	// sizeof = 104
};

// src/game/shared/dota/econ/dota_item_tools.h:251
class CEconTool_TeamShowcaseForge : public IEconTool {
public:

private:

	int m_iStatusEffectIndex;  // +0x44
	CEconTool_TeamShowcaseForge(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int GetStatusEffectIndex();
	item_definition_index_t GetEffigyItemDefIndex();
	virtual ~CEconTool_TeamShowcaseForge();

	// vtable[2] BInitFromKV
	// sizeof = 80
};

// src/game/shared/dota/econ/dota_item_tools.h:294
class CEconTool_EffigyReforgeItem : public IEconTool {
public:

	CEconTool_EffigyReforgeItem(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual ~CEconTool_EffigyReforgeItem();

	// sizeof = 72
};

// src/game/shared/dota/econ/dota_item_tools.h:315
class CEconTool_CompendiumSetSelection : public IEconTool {
public:

private:

	static CEconItemView * m_pApplyTool;
	uint32 m_unEventID;  // +0x44
	uint32 m_unActionID;  // +0x48
	uint32 m_unNumActionsToGrant;  // +0x4c
	uint32 m_unCompendiumLeagueID;  // +0x50
	uint32 m_unSelectionIndex;  // +0x54
	uint32 m_unSelectionValue;  // +0x58
	bool m_bSelectionAdditive;  // +0x5c
	CEconTool_CompendiumSetSelection(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	uint32 GetLeagueID();
	uint32 GetSelectionIndex();
	uint32 GetSelectionValue();
	bool IsSelectionAdditive();
	uint32 GetEventID();
	virtual ~CEconTool_CompendiumSetSelection();

	// vtable[2] BInitFromKV
	// sizeof = 96
};

// src/game/shared/dota/econ/dota_item_tools.h:414
class CEconTool_PassportFantasyTeam : public IEconTool {
public:

private:

	static CEconItemView * m_pApplyTool;
	CEconTool_PassportFantasyTeam(const char *, const char *, KeyValues *);
	virtual ~CEconTool_PassportFantasyTeam();

	// sizeof = 72
};

// src/game/shared/dota/econ/dota_item_tools.h:441
class CEconTool_FantasyTicket : public IEconTool {
public:

private:

	uint8 m_unSeason;  // +0x41
	CEconTool_FantasyTicket(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	uint8 GetSeason();
	virtual ~CEconTool_FantasyTicket();

	// vtable[2] BInitFromKV
	// sizeof = 72
};

// src/game/shared/dota/econ/dota_item_tools.h:481
class CEconTool_AwardEventPoints : public IEconTool {
public:

private:

	uint32 m_nRequireLeagueID;  // +0x44
	uint32 m_nEventID;  // +0x48
	uint32 m_nPoints;  // +0x4c
	uint32 m_nPremiumPoints;  // +0x50
	uint32 m_nCompendiumLeagueToAdd;  // +0x54
	uint32 m_nCompendiumSelectionToAdd;  // +0x58
	uint32 m_nCompendiumAddValue;  // +0x5c
	CEconTool_AwardEventPoints(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BFinishInitialization();
	uint32 GetRequireLeagueID();
	uint32 GetEventID();
	uint32 GetPoints();
	uint32 GetPremiumPoints();
	virtual ~CEconTool_AwardEventPoints();

	// vtable[2] BInitFromKV
	// vtable[6] BFinishInitialization
	// sizeof = 104
};

// src/game/shared/dota/econ/dota_item_tools.h:541
class CEconTool_Compendium : public IEconTool {
public:

private:

	uint32 m_nGrantPointsDef;  // +0x60
	uint32 m_nGrantActionID;  // +0x64
	uint32 m_nGrantEventOwnership;  // +0x68
	uint32 m_nGrantSteamPackage;  // +0x6c
	uint32 m_nOriginalPurchaserField;  // +0x70
	uint32 m_nGrantPoints;  // +0x74
	uint32 m_nGrantPremiumPoints;  // +0x78
	uint32 m_nAlreadyOwnedGrantPoints;  // +0x7c
	CEconTool_Compendium(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BFinishInitialization();
	const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > & GetGrantLeagueDefs();
	uint32 GetGrantPointsDef();
	uint32 GetGrantActionID();
	uint32 GetGrantEventOwnership();
	uint32 GetGrantSteamPackage();
	uint32 GetGrantEventPoints();
	uint32 GetGrantEventPremiumPoints();
	uint32 GetOriginalPurchaserField();
	uint32 GetAlreadyOwnedGrantPoints();
	virtual ~CEconTool_Compendium();

	// vtable[2] BInitFromKV
	// vtable[6] BFinishInitialization
	// sizeof = 128
};

// src/game/shared/dota/econ/dota_item_tools.h:623
class CEconTool_EmoticonUnlock : public IEconTool {
public:

private:

	uint32 m_unEmoticonIDStart;  // +0x44
	uint32 m_unEmoticonIDEnd;  // +0x48
	CEconTool_EmoticonUnlock(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BFinishInitialization();
	uint32 GetEmoticonIDStart();
	uint32 GetEmoticonIDEnd();
	virtual ~CEconTool_EmoticonUnlock();

	// vtable[2] BInitFromKV
	// vtable[6] BFinishInitialization
	// sizeof = 80
};

// src/game/shared/dota/econ/dota_item_tools.h:668
class CEconTool_CustomGameTicket : public IEconTool {
public:

private:

	PublishedFileId_t m_unPublishedFileID;  // +0x48
	uint32 m_unProductID;  // +0x50
	uint32 m_unDurationSeconds;  // +0x54
	CEconTool_CustomGameTicket(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BFinishInitialization();
	PublishedFileId_t GetPublishedFileID();
	uint32 GetProductID();
	virtual ~CEconTool_CustomGameTicket();

	// vtable[2] BInitFromKV
	// vtable[6] BFinishInitialization
	// sizeof = 88
};

// src/game/shared/dota/econ/dota_item_tools.h:714
class CEconTool_PennantUpgrade : public IEconTool {
public:

private:

	static CEconItemView * m_pApplyTool;
	static CEconItemView * m_pApplyTarget;
	CEconTool_PennantUpgrade(CEconTool_PennantUpgrade &);
	CEconTool_PennantUpgrade(const CEconTool_PennantUpgrade &);
	CEconTool_PennantUpgrade(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual ~CEconTool_PennantUpgrade();

	// vtable[2] BInitFromKV
	// vtable[3] CanApplyTo
	// sizeof = 96
};

// src/game/shared/dota/econ/dota_item_tools.h:759
class CEconTool_GemCombiner : public IEconTool {
public:

private:

	bool m_bFilterAutographID;  // +0x41
	CEconTool_GemCombiner(CEconTool_GemCombiner &);
	CEconTool_GemCombiner(const CEconTool_GemCombiner &);
	CEconTool_GemCombiner(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual ~CEconTool_GemCombiner();

	// vtable[2] BInitFromKV
	// vtable[3] CanApplyTo
	// sizeof = 72
};

// src/game/shared/dota/econ/dota_item_tools.h:796
class CEconTool_EggEssence : public IEconTool {
public:

private:

	static CEconItemView * m_pApplyTool;
	static CEconItemView * m_pApplyTarget;
	CEconTool_EggEssence(CEconTool_EggEssence &);
	CEconTool_EggEssence(const CEconTool_EggEssence &);
	CEconTool_EggEssence(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual ~CEconTool_EggEssence();

	// vtable[2] BInitFromKV
	// vtable[3] CanApplyTo
	// sizeof = 96
};

// src/game/shared/dota/econ/dota_item_tools.h:841
class CEconTool_UnusualPaint : public IEconTool {
public:

private:

	static CEconItemView * m_pApplyTool;
	static CEconItemView * m_pApplyTarget;
	CEconTool_UnusualPaint(CEconTool_UnusualPaint &);
	CEconTool_UnusualPaint(const CEconTool_UnusualPaint &);
	CEconTool_UnusualPaint(const char *, item_capabilities_t);
	virtual bool CanApplyTo(const IEconItemInterface *, const IEconItemInterface *);
	virtual ~CEconTool_UnusualPaint();

	// vtable[3] CanApplyTo
	// sizeof = 72
};

// src/game/shared/dota/econ/dota_item_tools.h:861
class CEconTool_PlayerCard : public IEconTool {
public:

private:

	RTime32 m_nDateOfBirth;  // +0x44
	uint64 m_nSteamID;  // +0x48
	MatchID_t m_nMatchID;  // +0x50
	int m_pFavoriteHeroes[3];  // +0x88
	CEconTool_PlayerCard(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	RTime32 GetDateOfBirth();
	uint64 GetSteamID();
	MatchID_t GetMatchID();
	const char * GetName();
	const char * GetTeamName();
	const char * GetCountryCode();
	const char * GetRole();
	const char * GetTeamImage();
	const char * GetPlayerImage();
	int GetFavoriteHero(int);
	virtual ~CEconTool_PlayerCard();

	// vtable[2] BInitFromKV
	// sizeof = 152
};

// src/game/shared/dota/econ/dota_item_tools.h:943
class CEconTool_PlayerCardPack : public IEconTool {
	struct TeamInfo_t {
		TeamID_t unTeamID;  // +0x0
		char pszTeamName[64];  // +0x4
		unsigned int unMembers[5];  // +0x44

		// sizeof = 88
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int m_nCardCount;  // +0x44
	int m_nGoldRarity;  // +0x48

	int m_nSilverBonusCount;  // +0x50
	int m_nSilverBonusStatMin;  // +0x54
	int m_nSilverBonusStatMax;  // +0x58
	int m_nGoldBonusCount;  // +0x5c
	int m_nGoldBonusStatMin;  // +0x60
	int m_nGoldBonusStatMax;  // +0x64
	CEconTool_PlayerCardPack(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int GetCardCount();
	int GetGoldRarity();
	int GetSilverBonusCount();
	int GetSilverBonusStatMin();
	int GetSilverBonusStatMax();
	int GetGoldBonusCount();
	int GetGoldBonusStatMin();
	int GetGoldBonusStatMax();
	AccountID_t GetRandomPlayer();
	const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > * GetPlayerList();
	const CUtlVector<CEconTool_PlayerCardPack::TeamInfo_t, CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t, int> > * GetTeamList();
	const TeamInfo_t * GetTeamInfo(TeamID_t);
	item_definition_index_t GetPlayerCardItemDefIndex();
	virtual ~CEconTool_PlayerCardPack();

	// vtable[2] BInitFromKV
	// sizeof = 152
};

// src/game/shared/dota/econ/dota_item_tools.h:943
class CEconTool_PlayerCardPack : public IEconTool {
	struct TeamInfo_t {
		TeamID_t unTeamID;  // +0x0
		char pszTeamName[64];  // +0x4
		unsigned int unMembers[5];  // +0x44

		// sizeof = 88
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int m_nCardCount;  // +0x44
	int m_nGoldRarity;  // +0x48

	int m_nSilverBonusCount;  // +0x50
	int m_nSilverBonusStatMin;  // +0x54
	int m_nSilverBonusStatMax;  // +0x58
	int m_nGoldBonusCount;  // +0x5c
	int m_nGoldBonusStatMin;  // +0x60
	int m_nGoldBonusStatMax;  // +0x64
	CEconTool_PlayerCardPack(CEconTool_PlayerCardPack &);
	CEconTool_PlayerCardPack(const CEconTool_PlayerCardPack &);
	CEconTool_PlayerCardPack(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int GetCardCount();
	int GetGoldRarity();
	int GetSilverBonusCount();
	int GetSilverBonusStatMin();
	int GetSilverBonusStatMax();
	int GetGoldBonusCount();
	int GetGoldBonusStatMin();
	int GetGoldBonusStatMax();
	AccountID_t GetRandomPlayer();
	const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > * GetPlayerList();
	const CUtlVector<CEconTool_PlayerCardPack::TeamInfo_t, CUtlMemory<CEconTool_PlayerCardPack::TeamInfo_t, int> > * GetTeamList();
	const TeamInfo_t * GetTeamInfo(TeamID_t);
	item_definition_index_t GetPlayerCardItemDefIndex();
	virtual ~CEconTool_PlayerCardPack();

	// vtable[2] BInitFromKV
	// sizeof = 152
};

// src/game/shared/dota/econ/dota_item_tools.h:1066
class CEconTool_HeroStatueForge : public IEconTool {
public:

private:

	int m_iStatusEffectIndex;  // +0x44
	CEconTool_HeroStatueForge(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	int GetStatusEffectIndex();
	item_definition_index_t GetEffigyItemDefIndex();
	virtual ~CEconTool_HeroStatueForge();

	// vtable[2] BInitFromKV
	// sizeof = 80
};

// src/game/shared/dota/econ/dota_item_tools.h:1112
class CEconTool_HeroStatueReforge : public IEconTool {
public:

	CEconTool_HeroStatueReforge(const char *, const char *, item_capabilities_t, KeyValues *);
	virtual ~CEconTool_HeroStatueReforge();

	// sizeof = 72
};

// src/game/shared/dota/econ/dota_item_tools.h:1140
class CEconTool_Gift : public IEconTool {
public:

private:

	int m_iMaxRecipients;  // +0x50
	bool m_bDontRequireUsageConfirmation;  // +0x58

	int m_iNumItems;  // +0x5c
	CEconTool_Gift(const char *, const char *, KeyValues *);
	virtual bool BInitFromKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *);
	virtual bool BFinishInitialization();
	const char * GetLootListName();
	const int GetMaxRecipients();
	EGiftTargetRule GetTargetRule();
	const int GetNumItems();
	virtual ~CEconTool_Gift();

	// vtable[2] BInitFromKV
	// vtable[6] BFinishInitialization
	// sizeof = 96
};

// src/game/shared/dota/econ/dota_item_tools.h:1210
class CDOTAStaticRecipeComponentEvent : public CStaticRecipeComponent {
public:

	uint32 m_unEventID;  // +0x64
	uint32 m_unNormalPoints;  // +0x68
	uint32 m_unPremiumPoints;  // +0x6c
	CUtlMap<unsigned int, unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> m_mapActionGrants;  // +0x70
	CDOTAStaticRecipeComponentEvent(CDOTAStaticRecipeComponentEvent &);
	CDOTAStaticRecipeComponentEvent(const CDOTAStaticRecipeComponentEvent &);
	CDOTAStaticRecipeComponentEvent(bool);
	virtual bool ParseKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
	virtual ~CDOTAStaticRecipeComponentEvent();

	// vtable[2] ParseKV
	// sizeof = 152
};

// src/game/shared/dota/econ/dota_item_tools.h:1232
class CDOTAStaticRecipeComponentLeagueOwnership : public CStaticRecipeComponent {
public:

	uint32 m_unLeagueID;  // +0x64
	CDOTAStaticRecipeComponentLeagueOwnership(CDOTAStaticRecipeComponentLeagueOwnership &);
	CDOTAStaticRecipeComponentLeagueOwnership(const CDOTAStaticRecipeComponentLeagueOwnership &);
	CDOTAStaticRecipeComponentLeagueOwnership(bool);
	virtual bool ParseKV(KeyValues *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, CEconTool_ItemDynamicRecipe *);
	virtual ~CDOTAStaticRecipeComponentLeagueOwnership();

	// vtable[2] ParseKV
	// sizeof = 104
};
