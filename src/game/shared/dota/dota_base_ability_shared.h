// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_base_ability_shared.h:79
struct DOTASpecialAbility_t {
private:

	const char * m_pszName;  // +0x0
	const char * m_pszValue;  // +0x8
	const char * m_pszLevelKey;  // +0x10
	const char * m_pszSpecialBonusAbility;  // +0x18
	int m_nCount;  // +0x24
	bool m_bSpellDamageField;  // +0x168

	DOTASpecialAbility_t();
	~DOTASpecialAbility_t();
	float GetFloat(int);
	int GetInt(int);

	// sizeof = 368
};

// src/game/shared/dota/dota_base_ability_shared.h:111
struct DOTAAbilityData_t : public CMemZeroOnNew {
public:

private:

	const char * m_pszAbilityName;  // +0x0
	const char * m_pszTextureName;  // +0x8
	const char * m_pszSharedCooldownName;  // +0x10
	const char * m_pszKeyOverride;  // +0x18
	const char * m_pszItemRecipeName;  // +0x20
	int m_iAbilityID;  // +0x30
	int m_iAbilityType;  // +0x34
	int m_iAbilityBehavior;  // +0x38
	int m_iAbilityTargetTeam;  // +0x3c
	int m_iAbilityTargetType;  // +0x40
	int m_iAbilityTargetFlags;  // +0x44
	int m_iAbilityDamageType;  // +0x48
	int m_iAbilityImmunityType;  // +0x4c
	int m_iAbilityDispellableType;  // +0x50
	int m_iFightRecapLevel;  // +0x54
	int m_iAssociatedConsumableItemDef;  // +0x58
	int m_iAssociatedEventID;  // +0x5c
	int m_iMaxLevel;  // +0x60
	int m_iItemBaseLevel;  // +0x64
	int m_iItemCost;  // +0x68
	int m_iItemID;  // +0x6c
	int m_iItemStockMax;  // +0x70
	float m_fItemStockTime;  // +0x74
	int * m_pItemShopTagKeys;  // +0x78
	float m_flModifierValue;  // +0x9c
	float m_flModifierValueBonus;  // +0xa0

	int * m_pCastRanges;  // +0xc0
	float * m_pCastPoints;  // +0xc8
	float * m_pChannelTimes;  // +0xd0
	float * m_pCooldowns;  // +0xd8
	float * m_pDurations;  // +0xe0
	int * m_pDamages;  // +0xe8
	int * m_pManaCosts;  // +0xf0
	int * m_pChannelledManaCosts;  // +0xf8
	int * m_pGoldCosts;  // +0x100
	int * m_pGoldCostsForUpgrade;  // +0x108
	int m_nCastRanges;  // +0x110
	int m_nCastPoints;  // +0x114
	int m_nChannelTimes;  // +0x118
	int m_nCooldowns;  // +0x11c
	int m_nDurations;  // +0x120
	int m_nDamages;  // +0x124
	int m_nManaCosts;  // +0x128
	int m_nChannelledManaCosts;  // +0x12c
	int m_nGoldCosts;  // +0x130
	int m_nGoldCostsForUpgrade;  // +0x134
	bool m_bHasScepterUpgrade;  // +0x138

	int m_nCastRangeBuffer;  // +0x13c
	int m_nSpecialAbilities;  // +0x140

	const char * m_pModelName;  // +0x150
	const char * m_pModelAlternateName;  // +0x158
	const char * m_pEffectName;  // +0x160
	const char * m_pPingOverrideText;  // +0x168
	int m_iLevelsBetweenUpgrades;  // +0x170
	int m_iRequiredLevel;  // +0x174
	bool m_bIsItem:1;  // +0x178:0
	bool m_bItemIsRecipe:1;  // +0x178:1
	bool m_bItemIsRecipeGenerated:1;  // +0x178:2
	bool m_bItemRequiresSecretShop:1;  // +0x178:3
	bool m_bItemAvailableAtSideShop:1;  // +0x178:4
	bool m_bItemIsPureSupport:1;  // +0x178:5
	bool m_bItemIsPurchasable:1;  // +0x178:6
	bool m_bItemStackable:1;  // +0x178:7
	bool m_bDisplayAdditionalHeroes:1;  // +0x179:0
	bool m_bItemContributesToNetWorthWhenDropped:1;  // +0x179:1
	bool m_bOnCastbar:1;  // +0x179:2
	bool m_bOnLearnbar:1;  // +0x179:3
	bool m_bIsGrantedByScepter:1;  // +0x179:4
	bool m_bIsCastableWhileHidden:1;  // +0x179:5
	bool m_bAnimationIgnoresModelScale:1;  // +0x179:6
	bool m_bIsPlayerSpecificCooldown:1;  // +0x179:7
	bool m_bIsAllowedInBackpack:1;  // +0x17a:0

	DOTAAbilityData_t();
	~DOTAAbilityData_t();
	Color GetItemColor();
	ItemQuality_t GetItemQuality();

	// sizeof = 384
};
