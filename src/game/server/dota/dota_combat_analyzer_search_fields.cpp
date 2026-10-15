// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:31
struct SCLDeathFields : public ICLSearchFields {
public:

private:

	int m_iLastHits;  // +0x28
	CombatLogStringID_t m_iAttackerTeam;  // +0x2c
	CombatLogStringID_t m_iTargetTeam;  // +0x30
	CombatLogStringID_t m_iDamageSourceName;  // +0x34
	CombatLogStringID_t m_iAssistPlayerID;  // +0x38
	bool m_bTargetMustBeHero;  // +0x3c
	bool m_bLongRangeKill;  // +0x3d

	int m_iEventLocation;  // +0x40
	int m_iNeutralCampType;  // +0x44
	SCLDeathFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLDeathFields();

	// vtable[2] MatchEventFields
	// sizeof = 72
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:122
struct SCLKillstreakFields : public ICLSearchFields {
public:

private:

	CombatLogStringID_t m_iTargetSourceName;  // +0x28
	int m_iValue;  // +0x2c
	SCLKillstreakFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLKillstreakFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:154
struct SCLPlayerStatsFields : public ICLSearchFields {
public:

	SCLPlayerStatsFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLPlayerStatsFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:174
struct SCLAttackFields : public ICLSearchFields {
public:

private:

	CombatLogStringID_t m_iAttackerTeam;  // +0x28
	CombatLogStringID_t m_iTargetTeam;  // +0x2c
	CombatLogStringID_t m_iDamageSourceName;  // +0x30
	int m_iDamageType;  // +0x34
	int m_iDamageCategory;  // +0x38
	int m_iBuildingType;  // +0x3c
	bool m_bTargetMustBeHero;  // +0x40
	bool m_bTargetMustBeBuilding;  // +0x41
	bool m_bAttackIsUltimate;  // +0x42
	bool m_bAttackerMustBeHero;  // +0x43
	float m_flValueGreaterThan;  // +0x44
	SCLAttackFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLAttackFields();

	// vtable[2] MatchEventFields
	// sizeof = 72
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:260
struct SCLModifierAddFields : public ICLSearchFields {
public:

private:

	int m_iDamageSourceName;  // +0x28
	bool m_bTargetMustBeHero;  // +0x2c
	bool m_bIsStunDebuff;  // +0x2d

	float m_flDurationGreaterThan;  // +0x30
	SCLModifierAddFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLModifierAddFields();

	// vtable[2] MatchEventFields
	// sizeof = 56
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:302
struct SCLModifierRemoveFields : public ICLSearchFields {
public:

private:

	int m_iDamageSourceName;  // +0x28
	bool m_bTargetMustBeHero;  // +0x2c
	bool m_bIsStunDebuff;  // +0x2d
	bool m_bIsDebuff;  // +0x2e
	bool m_bIsSlowDebuff;  // +0x2f
	bool m_bIsSilenceDebuff;  // +0x30
	bool m_bIsInvisibilityBuff;  // +0x31
	bool m_bModifierPurged;  // +0x32
	bool m_bIsMotionControllerBuff;  // +0x33
	int m_iPurgeNPC;  // +0x34
	int m_iPurgeAbility;  // +0x38
	SCLModifierRemoveFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLModifierRemoveFields();

	// vtable[2] MatchEventFields
	// sizeof = 64
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:373
struct SCLModifierRefreshFields : public ICLSearchFields {
public:

private:

	bool m_bTargetMustBeHero;  // +0x28
	bool m_bIsStunDebuff;  // +0x29

	int m_iStackCount;  // +0x2c
	SCLModifierRefreshFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLModifierRefreshFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:411
struct SCLMultiKillFields : public ICLSearchFields {
public:

private:

	int m_iTargetSourceName;  // +0x28
	int m_iValue;  // +0x2c
	SCLMultiKillFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLMultiKillFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:442
struct SCLAbilityUseFields : public ICLSearchFields {
public:

private:

	bool m_bTargetIsNotSelf;  // +0x28
	SCLAbilityUseFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLAbilityUseFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:471
struct SCLAbilityTriggerFields : public ICLSearchFields {
public:

	SCLAbilityTriggerFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLAbilityTriggerFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:495
struct SCLHealFields : public ICLSearchFields {
public:

private:

	bool m_bTargetMustBeHero;  // +0x28
	bool m_bTargetMustBeBuilding;  // +0x29
	bool m_bIsLifestealHeal;  // +0x2a
	SCLHealFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLHealFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:532
struct SCLItemUseFields : public ICLSearchFields {
public:

private:

	int m_iLastHits;  // +0x28
	bool m_bTargetMustBeHero;  // +0x2c
	bool m_bTargetIsNotSelf;  // +0x2d
	SCLItemUseFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLItemUseFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:569
struct SCLItemPurchaseFields : public ICLSearchFields {
public:

private:

	int m_iValue;  // +0x28
	SCLItemPurchaseFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLItemPurchaseFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:596
struct SCLTeamBuildingKillFields : public ICLSearchFields {
public:

private:

	int m_iAttackerTeam;  // +0x28
	int m_iTargetTeam;  // +0x2c
	int m_iValue;  // +0x30
	SCLTeamBuildingKillFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLTeamBuildingKillFields();

	// vtable[2] MatchEventFields
	// sizeof = 56
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:631
struct SCLFirstBloodFields : public ICLSearchFields {
public:

private:

	int m_iAttackerTeam;  // +0x28
	int m_iAssistPlayerID;  // +0x2c
	SCLFirstBloodFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLFirstBloodFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:661
struct SCLNeutralCampStackFields : public ICLSearchFields {
public:

private:

	int m_iTargetSourceName;  // +0x28
	int m_iNeutralCampType;  // +0x2c
	int m_iValue;  // +0x30
	SCLNeutralCampStackFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLNeutralCampStackFields();

	// vtable[2] MatchEventFields
	// sizeof = 56
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:697
struct SCLPickupRuneFields : public ICLSearchFields {
public:

private:

	int m_iTargetSourceName;  // +0x28
	int m_iRuneType;  // +0x2c
	int m_iValue;  // +0x30
	SCLPickupRuneFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLPickupRuneFields();

	// vtable[2] MatchEventFields
	// sizeof = 56
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:733
struct SCLRevealInvisibleFields : public ICLSearchFields {
public:

	SCLRevealInvisibleFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLRevealInvisibleFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:755
struct SCLHeroSavedFields : public ICLSearchFields {
public:

private:

	bool m_bIsHealSave;  // +0x28
	SCLHeroSavedFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLHeroSavedFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:784
struct SCLManaRestoreFields : public ICLSearchFields {
public:

private:

	bool m_bTargetMustBeHero;  // +0x28
	SCLManaRestoreFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLManaRestoreFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:813
struct SCLHeroGainedLevelFields : public ICLSearchFields {
public:

private:

	int m_iTargetHeroLevel;  // +0x28
	int m_iXPM;  // +0x2c
	int m_iGPM;  // +0x30
	SCLHeroGainedLevelFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLHeroGainedLevelFields();

	// vtable[2] MatchEventFields
	// sizeof = 56
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:847
struct SCLBottleHealedAllyFields : public ICLSearchFields {
public:

	SCLBottleHealedAllyFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLBottleHealedAllyFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:868
struct SCLEndGameStatsFields : public ICLSearchFields {
public:

	SCLEndGameStatsFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLEndGameStatsFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:888
struct SCLInterruptChannelFields : public ICLSearchFields {
public:

	SCLInterruptChannelFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLInterruptChannelFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:908
struct SCLAlliedGoldFields : public ICLSearchFields {
public:

	SCLAlliedGoldFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLAlliedGoldFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:928
struct SCLAegisTakenFields : public ICLSearchFields {
public:

private:

	bool m_bAegisSnatched;  // +0x28
	SCLAegisTakenFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLAegisTakenFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:955
struct SCLManaDamageFields : public ICLSearchFields {
public:

private:

	int m_iDamageSourceName;  // +0x28
	bool m_bTargetMustBeHero;  // +0x2c
	SCLManaDamageFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLManaDamageFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:989
struct SCLPhysicalDamagePreventedFields : public ICLSearchFields {
public:

private:

	int m_iDamageSourceName;  // +0x28
	SCLPhysicalDamagePreventedFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLPhysicalDamagePreventedFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:1015
struct SCLUnitSummonedFields : public ICLSearchFields {
public:

	SCLUnitSummonedFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLUnitSummonedFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:1037
struct SCLAttackEvadeFields : public ICLSearchFields {
public:

private:

	bool m_bSpellEvade;  // +0x28
	SCLAttackEvadeFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLAttackEvadeFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:1064
struct SCLGoldChangeFields : public ICLSearchFields {
public:

	SCLGoldChangeFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLGoldChangeFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:1085
struct SCLTreeCutDownFields : public ICLSearchFields {
public:

	SCLTreeCutDownFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLTreeCutDownFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:1105
struct SCLSuccessfulScanFields : public ICLSearchFields {
public:

	SCLSuccessfulScanFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLSuccessfulScanFields();

	// vtable[2] MatchEventFields
	// sizeof = 40
};

// src/game/server/dota/dota_combat_analyzer_search_fields.cpp:1125
struct SCLEndKillstreakFields : public ICLSearchFields {
public:

private:

	int m_iAssistPlayerID;  // +0x28
	SCLEndKillstreakFields(CDOTAPlayer *, KeyValues *);
	virtual SCLSearchFieldMatchResult_t MatchEventFields(const CMsgDOTACombatLogEntry *);
	virtual ~SCLEndKillstreakFields();

	// vtable[2] MatchEventFields
	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetItemNameFromEventBlock  (line 13, @0x000000000246cee0, libserver.so)
// calls: KeyValues::FindKey, KeyValues::GetInt, DOTAGameManager, CDOTAGameManager::GetAbilityDataByItemID, KeyValues::GetString
// callers: CCLSearchFieldFactory<SCLItemPurchaseFields, (DOTA_COMBATLOG_TYPES)11>::CreateSearchFields, CCLSearchFieldFactory<SCLItemUseFields, (DOTA_COMBATLOG_TYPES)6>::CreateSearchFields
// strings: "itemid"
const char *__fastcall GetItemNameFromEventBlock(KeyValues *pKVStatsEvent)
{
  int Int; // ebx
  CDOTAGameManager *v3; // rax
  DOTAAbilityData_t *AbilityDataByItemID; // rax

  if ( KeyValues::FindKey(pKVStatsEvent, "itemid", 0) == 0 )
    return KeyValues::GetString(pKVStatsEvent, "item", "", 0, 0);
  Int = KeyValues::GetInt(pKVStatsEvent, "itemid", 0);
  v3 = DOTAGameManager();
  AbilityDataByItemID = CDOTAGameManager::GetAbilityDataByItemID(v3, Int);
  if ( AbilityDataByItemID != 0 )
    return AbilityDataByItemID->m_pszAbilityName;
  else
    return "";
}


// SCLDeathFields::~SCLDeathFields  (line 31, @0x000000000249d160, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLDeathFields::~SCLDeathFields(SCLDeathFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DE9D0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLDeathFields::~SCLDeathFields  (line 31, @0x000000000249d180, libserver.so)  // inlines: ~SCLDeathFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLDeathFields::~SCLDeathFields(SCLDeathFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DE9D0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLDeathFields::MatchEventFields  (line 70, @0x00000000024a2af0, libserver.so)  // inlines: AssistPlayerIDMatches, AttackerTeamMatches, DamageSourceNameMatches, EventLocationMatches, IsLongRangeKillMatches, LastHitsMatches, NeutralCampTypeMatches, TargetMustBeHeroMatches, TargetTeamMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLDeathFields::MatchEventFields(
        const SCLDeathFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iLastHits; // edx
  CombatLogStringID_t m_iAttackerTeam; // eax
  CombatLogStringID_t m_iTargetTeam; // eax
  CombatLogStringID_t m_iDamageSourceName; // eax
  CombatLogStringID_t m_iAssistPlayerID; // ecx
  int v11; // esi
  __int64 v12; // rax
  char v13; // dl
  int m_iEventLocation; // eax
  int m_iNeutralCampType; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iLastHits = this->m_iLastHits;
    if ( m_iLastHits == -1 || m_iLastHits == *(pEntry + 26) )
    {
      m_iAttackerTeam = this->m_iAttackerTeam;
      if ( m_iAttackerTeam == -1 || m_iAttackerTeam == *(pEntry + 27) )
      {
        m_iTargetTeam = this->m_iTargetTeam;
        if ( m_iTargetTeam == -1 || m_iTargetTeam == *(pEntry + 28) )
        {
          m_iDamageSourceName = this->m_iDamageSourceName;
          if ( m_iDamageSourceName == -1 || m_iDamageSourceName == *(pEntry + 10) )
          {
            m_iAssistPlayerID = this->m_iAssistPlayerID;
            if ( m_iAssistPlayerID == -1 )
              goto LABEL_27;
            v11 = *(pEntry + 40);
            if ( v11 > 0 )
            {
              v12 = 0;
              v13 = 0;
              do
              {
                if ( *(*(pEntry + 19) + 4 * v12) == m_iAssistPlayerID )
                  v13 = 1;
                ++v12;
              }
              while ( v11 > v12 );
              if ( v13 != 0 )
              {
LABEL_27:
                if ( this->m_bTargetMustBeHero )
                {
                  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
                  if ( *(pEntry + 51) == 0 || *(pEntry + 50) != 0 )
                    return result;
                }
                m_iEventLocation = this->m_iEventLocation;
                if ( (m_iEventLocation == -1 || m_iEventLocation == *(pEntry + 46))
                  && (!this->m_bLongRangeKill || *(pEntry + 215) != 0) )
                {
                  m_iNeutralCampType = this->m_iNeutralCampType;
                  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
                  if ( m_iNeutralCampType != -1 )
                    return m_iNeutralCampType == *(pEntry + 35);
                  return result;
                }
              }
            }
          }
        }
      }
      return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
    }
  }
  return result;
}


// SCLKillstreakFields::~SCLKillstreakFields  (line 122, @0x000000000249d110, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLKillstreakFields::~SCLKillstreakFields(SCLKillstreakFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEA30;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLKillstreakFields::~SCLKillstreakFields  (line 122, @0x000000000249d130, libserver.so)  // inlines: ~SCLKillstreakFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLKillstreakFields::~SCLKillstreakFields(SCLKillstreakFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEA30;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLKillstreakFields::MatchEventFields  (line 131, @0x00000000024a2360, libserver.so)  // inlines: TargetSourceNameMatches, ValueMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLKillstreakFields::MatchEventFields(
        const SCLKillstreakFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  CombatLogStringID_t m_iTargetSourceName; // edx
  int m_iValue; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iTargetSourceName = this->m_iTargetSourceName;
    if ( m_iTargetSourceName == -1 || m_iTargetSourceName == *(pEntry + 8) )
    {
      m_iValue = this->m_iValue;
      result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
      if ( m_iValue != -1 )
        return m_iValue == *(pEntry + 13);
    }
  }
  return result;
}


// SCLPlayerStatsFields::~SCLPlayerStatsFields  (line 154, @0x000000000249d0c0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLPlayerStatsFields::~SCLPlayerStatsFields(SCLPlayerStatsFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEA90;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLPlayerStatsFields::~SCLPlayerStatsFields  (line 154, @0x000000000249d0e0, libserver.so)  // inlines: ~SCLPlayerStatsFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLPlayerStatsFields::~SCLPlayerStatsFields(SCLPlayerStatsFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEA90;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLPlayerStatsFields::MatchEventFields  (line 161, @0x00000000024a2230, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLPlayerStatsFields::MatchEventFields(
        const SCLPlayerStatsFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLAttackFields::~SCLAttackFields  (line 174, @0x000000000249d070, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLAttackFields::~SCLAttackFields(SCLAttackFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEAF0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLAttackFields::~SCLAttackFields  (line 174, @0x000000000249d090, libserver.so)  // inlines: ~SCLAttackFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLAttackFields::~SCLAttackFields(SCLAttackFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEAF0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLAttackFields::MatchEventFields  (line 213, @0x00000000024a2890, libserver.so)  // inlines: AttackIsUltimateMatches, AttackerMustBeHeroMatches, AttackerTeamMatches, DamageCategoryMatches, DamageSourceNameMatches, DamageTypeMatches, TargetBuildingMatches, TargetMustBeHeroMatches, TargetTeamMatches, ValueGreaterThanMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLAttackFields::MatchEventFields(
        const SCLAttackFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  CombatLogStringID_t m_iDamageSourceName; // edx
  CombatLogStringID_t m_iAttackerTeam; // eax
  CombatLogStringID_t m_iTargetTeam; // eax
  int m_iDamageType; // eax
  int m_iDamageCategory; // eax
  int m_iBuildingType; // edx
  float m_flValueGreaterThan; // xmm0_4

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( !matched )
    return result;
  m_iDamageSourceName = this->m_iDamageSourceName;
  if ( m_iDamageSourceName != -1 && m_iDamageSourceName != *(pEntry + 10) )
    return result;
  m_iAttackerTeam = this->m_iAttackerTeam;
  if ( m_iAttackerTeam != -1 && m_iAttackerTeam != *(pEntry + 27) )
    return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  m_iTargetTeam = this->m_iTargetTeam;
  if ( m_iTargetTeam != -1 && m_iTargetTeam != *(pEntry + 28) )
    return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  m_iDamageType = this->m_iDamageType;
  if ( m_iDamageType != 0 && m_iDamageType != *(pEntry + 47) )
    return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  m_iDamageCategory = this->m_iDamageCategory;
  if ( m_iDamageCategory != -1 && m_iDamageCategory != *(pEntry + 48) )
    return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( !this->m_bTargetMustBeHero
    || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 51) != 0) && *(pEntry + 50) == 0 )
  {
    m_iBuildingType = this->m_iBuildingType;
    if ( !this->m_bTargetMustBeBuilding
      || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 149) != 0)
      && (m_iBuildingType == 0 || m_iBuildingType == *(pEntry + 51)) )
    {
      if ( (!this->m_bAttackIsUltimate || *(pEntry + 151) != 0) && (!this->m_bAttackerMustBeHero || *(pEntry + 49) != 0) )
      {
        m_flValueGreaterThan = this->m_flValueGreaterThan;
        if ( m_flValueGreaterThan <= 0.0 )
          return SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
        result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
        if ( m_flValueGreaterThan <= *(pEntry + 13) )
          return SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
        return result;
      }
      return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
    }
  }
  return result;
}


// SCLModifierAddFields::~SCLModifierAddFields  (line 260, @0x000000000249d020, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLModifierAddFields::~SCLModifierAddFields(SCLModifierAddFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEB50;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLModifierAddFields::~SCLModifierAddFields  (line 260, @0x000000000249d040, libserver.so)  // inlines: ~SCLModifierAddFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLModifierAddFields::~SCLModifierAddFields(SCLModifierAddFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEB50;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLModifierAddFields::MatchEventFields  (line 274, @0x00000000024a2cf0, libserver.so)  // inlines: DamageSourceNameMatches, IsStunDebuffMatches, TargetMustBeHeroMatches
// calls: ICLSearchFields::MatchCommonEventFields, ICLSearchFields::DurationGreaterThanMatches
SCLSearchFieldMatchResult_t __fastcall SCLModifierAddFields::MatchEventFields(
        const SCLModifierAddFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  float v5; // xmm1_4
  SCLSearchFieldMatchResult_t result; // eax
  int m_iDamageSourceName; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iDamageSourceName = this->m_iDamageSourceName;
    if ( m_iDamageSourceName == -1 || m_iDamageSourceName == *(pEntry + 10) )
    {
      if ( !this->m_bTargetMustBeHero
        || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 51) != 0) && *(pEntry + 50) == 0 )
      {
        if ( !this->m_bIsStunDebuff )
          return ICLSearchFields::DurationGreaterThanMatches(this->m_flDurationGreaterThan, v5, pEntry);
        result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
        if ( *(pEntry + 17) > 0.0 )
          return ICLSearchFields::DurationGreaterThanMatches(this->m_flDurationGreaterThan, v5, pEntry);
      }
    }
  }
  return result;
}


// SCLModifierRemoveFields::~SCLModifierRemoveFields  (line 302, @0x000000000249cfd0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLModifierRemoveFields::~SCLModifierRemoveFields(SCLModifierRemoveFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEBB0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLModifierRemoveFields::~SCLModifierRemoveFields  (line 302, @0x000000000249cff0, libserver.so)  // inlines: ~SCLModifierRemoveFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLModifierRemoveFields::~SCLModifierRemoveFields(SCLModifierRemoveFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEBB0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLModifierRemoveFields::MatchEventFields  (line 323, @0x00000000024a29c0, libserver.so)  // inlines: DamageSourceNameMatches, IsDebuffMatches, IsInvisibilityBuffMatches, IsMotionControllerBuffMatches, IsSilenceDebuffMatches, IsSlowDebuffMatches, IsStunDebuffMatches, ModifierPurgedMatches, PurgeAbilityMatches, PurgeNPCMatches, TargetMustBeHeroMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLModifierRemoveFields::MatchEventFields(
        const SCLModifierRemoveFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iDamageSourceName; // edx
  int m_iPurgeNPC; // eax
  int m_iPurgeAbility; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iDamageSourceName = this->m_iDamageSourceName;
    if ( m_iDamageSourceName == -1 || m_iDamageSourceName == *(pEntry + 10) )
    {
      if ( !this->m_bTargetMustBeHero
        || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 51) != 0) && *(pEntry + 50) == 0 )
      {
        if ( this->m_bModifierPurged && *(pEntry + 212) == 0 )
          return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
        if ( !this->m_bIsDebuff || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 13) != 0) )
        {
          if ( !this->m_bIsStunDebuff
            || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 17) > 0.0) )
          {
            if ( !this->m_bIsSlowDebuff
              || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 18) > 0.0) )
            {
              if ( this->m_bIsInvisibilityBuff && *(pEntry + 201) == 0 )
                return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
              if ( this->m_bIsSilenceDebuff && *(pEntry + 202) == 0 )
                return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
              if ( this->m_bIsMotionControllerBuff && *(pEntry + 214) == 0 )
                return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
              m_iPurgeNPC = this->m_iPurgeNPC;
              if ( m_iPurgeNPC != -1 && m_iPurgeNPC != *(pEntry + 55) )
                return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
              m_iPurgeAbility = this->m_iPurgeAbility;
              result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
              if ( m_iPurgeAbility != -1 )
                return m_iPurgeAbility == *(pEntry + 54);
            }
          }
        }
      }
    }
  }
  return result;
}


// SCLModifierRefreshFields::~SCLModifierRefreshFields  (line 373, @0x000000000249cf80, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLModifierRefreshFields::~SCLModifierRefreshFields(SCLModifierRefreshFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEC10;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLModifierRefreshFields::~SCLModifierRefreshFields  (line 373, @0x000000000249cfa0, libserver.so)  // inlines: ~SCLModifierRefreshFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLModifierRefreshFields::~SCLModifierRefreshFields(SCLModifierRefreshFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEC10;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLModifierRefreshFields::MatchEventFields  (line 386, @0x00000000024a27d0, libserver.so)  // inlines: IsStunDebuffMatches, StackCountMatches, TargetMustBeHeroMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLModifierRefreshFields::MatchEventFields(
        const SCLModifierRefreshFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  unsigned int m_iStackCount; // eax

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched && (!this->m_bTargetMustBeHero || *(pEntry + 51) != 0 && *(pEntry + 50) == 0) )
  {
    if ( !this->m_bIsStunDebuff || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 17) > 0.0) )
    {
      m_iStackCount = this->m_iStackCount;
      return m_iStackCount == -1 || *(pEntry + 34) >= m_iStackCount;
    }
  }
  return result;
}


// SCLMultiKillFields::~SCLMultiKillFields  (line 411, @0x000000000249cf30, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLMultiKillFields::~SCLMultiKillFields(SCLMultiKillFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEC70;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLMultiKillFields::~SCLMultiKillFields  (line 411, @0x000000000249cf50, libserver.so)  // inlines: ~SCLMultiKillFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLMultiKillFields::~SCLMultiKillFields(SCLMultiKillFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEC70;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLMultiKillFields::MatchEventFields  (line 420, @0x00000000024a23b0, libserver.so)  // inlines: TargetSourceNameMatches, ValueMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLMultiKillFields::MatchEventFields(
        const SCLMultiKillFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iTargetSourceName; // edx
  int m_iValue; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iTargetSourceName = this->m_iTargetSourceName;
    if ( m_iTargetSourceName == -1 || m_iTargetSourceName == *(pEntry + 8) )
    {
      m_iValue = this->m_iValue;
      result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
      if ( m_iValue != -1 )
        return m_iValue == *(pEntry + 13);
    }
  }
  return result;
}


// SCLAbilityUseFields::~SCLAbilityUseFields  (line 442, @0x000000000249cee0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLAbilityUseFields::~SCLAbilityUseFields(SCLAbilityUseFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DECD0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLAbilityUseFields::~SCLAbilityUseFields  (line 442, @0x000000000249cf00, libserver.so)  // inlines: ~SCLAbilityUseFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLAbilityUseFields::~SCLAbilityUseFields(SCLAbilityUseFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DECD0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLAbilityUseFields::MatchEventFields  (line 452, @0x00000000024a2710, libserver.so)  // inlines: TargetIsNotSelfMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLAbilityUseFields::MatchEventFields(
        const SCLAbilityUseFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // al
  SCLSearchFieldMatchResult_t v5; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  v5 = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    LOBYTE(v5) = 1;
    if ( this->m_bTargetIsNotSelf )
      return *(pEntry + 200) ^ 1;
  }
  return v5;
}


// SCLAbilityTriggerFields::~SCLAbilityTriggerFields  (line 471, @0x000000000249ce90, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLAbilityTriggerFields::~SCLAbilityTriggerFields(SCLAbilityTriggerFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DED30;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLAbilityTriggerFields::~SCLAbilityTriggerFields  (line 471, @0x000000000249ceb0, libserver.so)  // inlines: ~SCLAbilityTriggerFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLAbilityTriggerFields::~SCLAbilityTriggerFields(SCLAbilityTriggerFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DED30;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLAbilityTriggerFields::MatchEventFields  (line 480, @0x00000000024a2240, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLAbilityTriggerFields::MatchEventFields(
        const SCLAbilityTriggerFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLHealFields::~SCLHealFields  (line 495, @0x000000000249ce40, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLHealFields::~SCLHealFields(SCLHealFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DED90;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLHealFields::~SCLHealFields  (line 495, @0x000000000249ce60, libserver.so)  // inlines: ~SCLHealFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLHealFields::~SCLHealFields(SCLHealFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DED90;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLHealFields::MatchEventFields  (line 507, @0x00000000024a26a0, libserver.so)  // inlines: LifestealHealMatches, TargetBuildingMatches, TargetMustBeHeroMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLHealFields::MatchEventFields(
        const SCLHealFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched && (!this->m_bTargetMustBeHero || *(pEntry + 51) != 0 && *(pEntry + 50) == 0) )
  {
    if ( !this->m_bTargetMustBeBuilding
      || (result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH, *(pEntry + 149) != 0) )
    {
      if ( this->m_bIsLifestealHeal )
        return *(pEntry + 203);
      else
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
    }
  }
  return result;
}


// SCLItemUseFields::~SCLItemUseFields  (line 532, @0x000000000249cdf0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLItemUseFields::~SCLItemUseFields(SCLItemUseFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEDF0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLItemUseFields::~SCLItemUseFields  (line 532, @0x000000000249ce10, libserver.so)  // inlines: ~SCLItemUseFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLItemUseFields::~SCLItemUseFields(SCLItemUseFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEDF0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLItemUseFields::MatchEventFields  (line 544, @0x00000000024a2750, libserver.so)  // inlines: LastHitsMatches, TargetIsNotSelfMatches, TargetMustBeHeroMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLItemUseFields::MatchEventFields(
        const SCLItemUseFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iLastHits; // eax

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched && (!this->m_bTargetMustBeHero || *(pEntry + 51) != 0 && *(pEntry + 50) == 0) )
  {
    m_iLastHits = this->m_iLastHits;
    if ( m_iLastHits == -1 || m_iLastHits == *(pEntry + 26) )
    {
      if ( this->m_bTargetIsNotSelf )
        return *(pEntry + 200) ^ 1;
      else
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
    }
    else
    {
      return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
    }
  }
  return result;
}


// SCLItemPurchaseFields::~SCLItemPurchaseFields  (line 569, @0x000000000249cda0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLItemPurchaseFields::~SCLItemPurchaseFields(SCLItemPurchaseFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEE50;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLItemPurchaseFields::~SCLItemPurchaseFields  (line 569, @0x000000000249cdc0, libserver.so)  // inlines: ~SCLItemPurchaseFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLItemPurchaseFields::~SCLItemPurchaseFields(SCLItemPurchaseFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEE50;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLItemPurchaseFields::MatchEventFields  (line 577, @0x00000000024a2400, libserver.so)  // inlines: ValueMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLItemPurchaseFields::MatchEventFields(
        const SCLItemPurchaseFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // al
  SCLSearchFieldMatchResult_t v5; // edx
  int m_iValue; // eax

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  v5 = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iValue = this->m_iValue;
    LOBYTE(v5) = 1;
    if ( m_iValue != -1 )
      return m_iValue == *(pEntry + 13);
  }
  return v5;
}


// SCLTeamBuildingKillFields::~SCLTeamBuildingKillFields  (line 596, @0x000000000249cd50, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLTeamBuildingKillFields::~SCLTeamBuildingKillFields(SCLTeamBuildingKillFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEEB0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLTeamBuildingKillFields::~SCLTeamBuildingKillFields  (line 596, @0x000000000249cd70, libserver.so)  // inlines: ~SCLTeamBuildingKillFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLTeamBuildingKillFields::~SCLTeamBuildingKillFields(SCLTeamBuildingKillFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEEB0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLTeamBuildingKillFields::MatchEventFields  (line 606, @0x00000000024a2440, libserver.so)  // inlines: AttackerTeamMatches, TargetTeamMatches, ValueMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLTeamBuildingKillFields::MatchEventFields(
        const SCLTeamBuildingKillFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iAttackerTeam; // edx
  int m_iTargetTeam; // eax
  int m_iValue; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iAttackerTeam = this->m_iAttackerTeam;
    if ( m_iAttackerTeam == -1 || m_iAttackerTeam == *(pEntry + 27) )
    {
      m_iTargetTeam = this->m_iTargetTeam;
      if ( m_iTargetTeam == -1 || m_iTargetTeam == *(pEntry + 28) )
      {
        m_iValue = this->m_iValue;
        result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
        if ( m_iValue != -1 )
          return m_iValue == *(pEntry + 13);
      }
      else
      {
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
      }
    }
  }
  return result;
}


// SCLFirstBloodFields::~SCLFirstBloodFields  (line 631, @0x000000000249cd00, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLFirstBloodFields::~SCLFirstBloodFields(SCLFirstBloodFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEF10;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLFirstBloodFields::~SCLFirstBloodFields  (line 631, @0x000000000249cd20, libserver.so)  // inlines: ~SCLFirstBloodFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLFirstBloodFields::~SCLFirstBloodFields(SCLFirstBloodFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEF10;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLFirstBloodFields::MatchEventFields  (line 639, @0x00000000024a2c10, libserver.so)  // inlines: AssistPlayerIDMatches, AttackerTeamMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLFirstBloodFields::MatchEventFields(
        const SCLFirstBloodFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iAttackerTeam; // edx
  int m_iAssistPlayerID; // ecx
  int v8; // edi
  __int64 v9; // rdx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iAttackerTeam = this->m_iAttackerTeam;
    if ( m_iAttackerTeam == -1 || m_iAttackerTeam == *(pEntry + 27) )
    {
      m_iAssistPlayerID = this->m_iAssistPlayerID;
      result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
      if ( m_iAssistPlayerID != -1 )
      {
        v8 = *(pEntry + 40);
        if ( v8 <= 0 )
        {
          return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
        }
        else
        {
          v9 = 0;
          result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
          do
          {
            if ( m_iAssistPlayerID == *(*(pEntry + 19) + 4 * v9) )
              result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
            ++v9;
          }
          while ( v8 > v9 );
        }
      }
    }
  }
  return result;
}


// SCLNeutralCampStackFields::~SCLNeutralCampStackFields  (line 661, @0x000000000249ccb0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLNeutralCampStackFields::~SCLNeutralCampStackFields(SCLNeutralCampStackFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEF70;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLNeutralCampStackFields::~SCLNeutralCampStackFields  (line 661, @0x000000000249ccd0, libserver.so)  // inlines: ~SCLNeutralCampStackFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLNeutralCampStackFields::~SCLNeutralCampStackFields(SCLNeutralCampStackFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEF70;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLNeutralCampStackFields::MatchEventFields  (line 670, @0x00000000024a24b0, libserver.so)  // inlines: NeutralCampTypeMatches, TargetSourceNameMatches, ValueMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLNeutralCampStackFields::MatchEventFields(
        const SCLNeutralCampStackFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iTargetSourceName; // edx
  int m_iValue; // eax
  int m_iNeutralCampType; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iTargetSourceName = this->m_iTargetSourceName;
    if ( m_iTargetSourceName == -1 || m_iTargetSourceName == *(pEntry + 8) )
    {
      m_iValue = this->m_iValue;
      if ( m_iValue == -1 || m_iValue == *(pEntry + 13) )
      {
        m_iNeutralCampType = this->m_iNeutralCampType;
        result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
        if ( m_iNeutralCampType != -1 )
          return m_iNeutralCampType == *(pEntry + 35);
      }
      else
      {
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
      }
    }
  }
  return result;
}


// SCLPickupRuneFields::~SCLPickupRuneFields  (line 697, @0x000000000249cc60, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLPickupRuneFields::~SCLPickupRuneFields(SCLPickupRuneFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEFD0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLPickupRuneFields::~SCLPickupRuneFields  (line 697, @0x000000000249cc80, libserver.so)  // inlines: ~SCLPickupRuneFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLPickupRuneFields::~SCLPickupRuneFields(SCLPickupRuneFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DEFD0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLPickupRuneFields::MatchEventFields  (line 706, @0x00000000024a2520, libserver.so)  // inlines: RuneTypeMatches, TargetSourceNameMatches, ValueMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLPickupRuneFields::MatchEventFields(
        const SCLPickupRuneFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iTargetSourceName; // edx
  int m_iRuneType; // eax
  int m_iValue; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iTargetSourceName = this->m_iTargetSourceName;
    if ( m_iTargetSourceName == -1 || m_iTargetSourceName == *(pEntry + 8) )
    {
      m_iRuneType = this->m_iRuneType;
      if ( m_iRuneType == -1 || m_iRuneType == *(pEntry + 36) )
      {
        m_iValue = this->m_iValue;
        result = SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
        if ( m_iValue != -1 )
          return m_iValue == *(pEntry + 13);
      }
      else
      {
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
      }
    }
  }
  return result;
}


// SCLRevealInvisibleFields::~SCLRevealInvisibleFields  (line 733, @0x000000000249cc10, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLRevealInvisibleFields::~SCLRevealInvisibleFields(SCLRevealInvisibleFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF030;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLRevealInvisibleFields::~SCLRevealInvisibleFields  (line 733, @0x000000000249cc30, libserver.so)  // inlines: ~SCLRevealInvisibleFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLRevealInvisibleFields::~SCLRevealInvisibleFields(SCLRevealInvisibleFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF030;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLRevealInvisibleFields::MatchEventFields  (line 742, @0x00000000024a2250, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLRevealInvisibleFields::MatchEventFields(
        const SCLRevealInvisibleFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLHeroSavedFields::~SCLHeroSavedFields  (line 755, @0x000000000249cbc0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLHeroSavedFields::~SCLHeroSavedFields(SCLHeroSavedFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF090;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLHeroSavedFields::~SCLHeroSavedFields  (line 755, @0x000000000249cbe0, libserver.so)  // inlines: ~SCLHeroSavedFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLHeroSavedFields::~SCLHeroSavedFields(SCLHeroSavedFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF090;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLHeroSavedFields::MatchEventFields  (line 765, @0x00000000024a2640, libserver.so)  // inlines: HealSaveMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLHeroSavedFields::MatchEventFields(
        const SCLHeroSavedFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // al
  SCLSearchFieldMatchResult_t v5; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  v5 = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    LOBYTE(v5) = 1;
    if ( this->m_bIsHealSave )
      return *(pEntry + 150);
  }
  return v5;
}


// SCLManaRestoreFields::~SCLManaRestoreFields  (line 784, @0x000000000249cb70, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLManaRestoreFields::~SCLManaRestoreFields(SCLManaRestoreFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF0F0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLManaRestoreFields::~SCLManaRestoreFields  (line 784, @0x000000000249cb90, libserver.so)  // inlines: ~SCLManaRestoreFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLManaRestoreFields::~SCLManaRestoreFields(SCLManaRestoreFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF0F0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLManaRestoreFields::MatchEventFields  (line 794, @0x00000000024a2590, libserver.so)  // inlines: TargetMustBeHeroMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLManaRestoreFields::MatchEventFields(
        const SCLManaRestoreFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    LOBYTE(result) = 1;
    if ( this->m_bTargetMustBeHero )
    {
      if ( *(pEntry + 51) != 0 )
      {
        if ( *(pEntry + 50) != 0 )
          return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
      }
      else
      {
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
      }
    }
  }
  return result;
}


// SCLHeroGainedLevelFields::~SCLHeroGainedLevelFields  (line 813, @0x000000000249cb20, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLHeroGainedLevelFields::~SCLHeroGainedLevelFields(SCLHeroGainedLevelFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF150;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLHeroGainedLevelFields::~SCLHeroGainedLevelFields  (line 813, @0x000000000249cb40, libserver.so)  // inlines: ~SCLHeroGainedLevelFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLHeroGainedLevelFields::~SCLHeroGainedLevelFields(SCLHeroGainedLevelFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF150;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLHeroGainedLevelFields::MatchEventFields  (line 824, @0x00000000024a22e0, libserver.so)  // inlines: TargetHeroLevelMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLHeroGainedLevelFields::MatchEventFields(
        const SCLHeroGainedLevelFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // al
  SCLSearchFieldMatchResult_t v5; // edx
  int m_iTargetHeroLevel; // eax

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  v5 = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iTargetHeroLevel = this->m_iTargetHeroLevel;
    LOBYTE(v5) = 1;
    if ( m_iTargetHeroLevel != -1 )
      return m_iTargetHeroLevel == *(pEntry + 43);
  }
  return v5;
}


// SCLBottleHealedAllyFields::~SCLBottleHealedAllyFields  (line 847, @0x000000000249cad0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLBottleHealedAllyFields::~SCLBottleHealedAllyFields(SCLBottleHealedAllyFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF1B0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLBottleHealedAllyFields::~SCLBottleHealedAllyFields  (line 847, @0x000000000249caf0, libserver.so)  // inlines: ~SCLBottleHealedAllyFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLBottleHealedAllyFields::~SCLBottleHealedAllyFields(SCLBottleHealedAllyFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF1B0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLBottleHealedAllyFields::MatchEventFields  (line 855, @0x00000000024a2260, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLBottleHealedAllyFields::MatchEventFields(
        const SCLBottleHealedAllyFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLEndGameStatsFields::~SCLEndGameStatsFields  (line 868, @0x000000000249ca80, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLEndGameStatsFields::~SCLEndGameStatsFields(SCLEndGameStatsFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF210;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLEndGameStatsFields::~SCLEndGameStatsFields  (line 868, @0x000000000249caa0, libserver.so)  // inlines: ~SCLEndGameStatsFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLEndGameStatsFields::~SCLEndGameStatsFields(SCLEndGameStatsFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF210;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLEndGameStatsFields::MatchEventFields  (line 875, @0x00000000024a2270, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLEndGameStatsFields::MatchEventFields(
        const SCLEndGameStatsFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLInterruptChannelFields::~SCLInterruptChannelFields  (line 888, @0x000000000249ca30, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLInterruptChannelFields::~SCLInterruptChannelFields(SCLInterruptChannelFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF270;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLInterruptChannelFields::~SCLInterruptChannelFields  (line 888, @0x000000000249ca50, libserver.so)  // inlines: ~SCLInterruptChannelFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLInterruptChannelFields::~SCLInterruptChannelFields(SCLInterruptChannelFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF270;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLInterruptChannelFields::MatchEventFields  (line 895, @0x00000000024a2280, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLInterruptChannelFields::MatchEventFields(
        const SCLInterruptChannelFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLAlliedGoldFields::~SCLAlliedGoldFields  (line 908, @0x000000000249c9e0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLAlliedGoldFields::~SCLAlliedGoldFields(SCLAlliedGoldFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF2D0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLAlliedGoldFields::~SCLAlliedGoldFields  (line 908, @0x000000000249ca00, libserver.so)  // inlines: ~SCLAlliedGoldFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLAlliedGoldFields::~SCLAlliedGoldFields(SCLAlliedGoldFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF2D0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLAlliedGoldFields::MatchEventFields  (line 915, @0x00000000024a2290, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLAlliedGoldFields::MatchEventFields(
        const SCLAlliedGoldFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLAegisTakenFields::~SCLAegisTakenFields  (line 928, @0x000000000249c990, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLAegisTakenFields::~SCLAegisTakenFields(SCLAegisTakenFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF330;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLAegisTakenFields::~SCLAegisTakenFields  (line 928, @0x000000000249c9b0, libserver.so)  // inlines: ~SCLAegisTakenFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLAegisTakenFields::~SCLAegisTakenFields(SCLAegisTakenFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF330;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLAegisTakenFields::MatchEventFields  (line 936, @0x00000000024a2850, libserver.so)  // inlines: AegisSnatchedMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLAegisTakenFields::MatchEventFields(
        const SCLAegisTakenFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // al
  __int64 v5; // rdx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  LODWORD(v5) = 0;
  if ( matched )
  {
    LOBYTE(v5) = 1;
    if ( this->m_bAegisSnatched )
      return *(pEntry + 13) != 0;
  }
  return v5;
}


// SCLManaDamageFields::~SCLManaDamageFields  (line 955, @0x000000000249c940, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLManaDamageFields::~SCLManaDamageFields(SCLManaDamageFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF390;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLManaDamageFields::~SCLManaDamageFields  (line 955, @0x000000000249c960, libserver.so)  // inlines: ~SCLManaDamageFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLManaDamageFields::~SCLManaDamageFields(SCLManaDamageFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF390;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLManaDamageFields::MatchEventFields  (line 966, @0x00000000024a25e0, libserver.so)  // inlines: DamageSourceNameMatches, TargetMustBeHeroMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLManaDamageFields::MatchEventFields(
        const SCLManaDamageFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // dl
  SCLSearchFieldMatchResult_t result; // eax
  int m_iDamageSourceName; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iDamageSourceName = this->m_iDamageSourceName;
    if ( m_iDamageSourceName == -1 || m_iDamageSourceName == *(pEntry + 10) )
    {
      if ( !this->m_bTargetMustBeHero )
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
      result = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
      if ( *(pEntry + 51) != 0 && *(pEntry + 50) == 0 )
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_MATCHED;
    }
  }
  return result;
}


// SCLPhysicalDamagePreventedFields::~SCLPhysicalDamagePreventedFields  (line 989, @0x000000000249c8f0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLPhysicalDamagePreventedFields::~SCLPhysicalDamagePreventedFields(
        SCLPhysicalDamagePreventedFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF3F0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLPhysicalDamagePreventedFields::~SCLPhysicalDamagePreventedFields  (line 989, @0x000000000249c910, libserver.so)  // inlines: ~SCLPhysicalDamagePreventedFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLPhysicalDamagePreventedFields::~SCLPhysicalDamagePreventedFields(
        SCLPhysicalDamagePreventedFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF3F0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLPhysicalDamagePreventedFields::MatchEventFields  (line 996, @0x00000000024a2320, libserver.so)  // inlines: DamageSourceNameMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLPhysicalDamagePreventedFields::MatchEventFields(
        const SCLPhysicalDamagePreventedFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // al
  SCLSearchFieldMatchResult_t v5; // edx
  int m_iDamageSourceName; // eax

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  v5 = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iDamageSourceName = this->m_iDamageSourceName;
    LOBYTE(v5) = 1;
    if ( m_iDamageSourceName != -1 )
      return m_iDamageSourceName == *(pEntry + 10);
  }
  return v5;
}


// SCLUnitSummonedFields::~SCLUnitSummonedFields  (line 1015, @0x000000000249c8a0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLUnitSummonedFields::~SCLUnitSummonedFields(SCLUnitSummonedFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF450;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLUnitSummonedFields::~SCLUnitSummonedFields  (line 1015, @0x000000000249c8c0, libserver.so)  // inlines: ~SCLUnitSummonedFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLUnitSummonedFields::~SCLUnitSummonedFields(SCLUnitSummonedFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF450;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLUnitSummonedFields::MatchEventFields  (line 1024, @0x00000000024a22a0, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLUnitSummonedFields::MatchEventFields(
        const SCLUnitSummonedFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLAttackEvadeFields::~SCLAttackEvadeFields  (line 1037, @0x000000000249c850, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLAttackEvadeFields::~SCLAttackEvadeFields(SCLAttackEvadeFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF4B0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLAttackEvadeFields::~SCLAttackEvadeFields  (line 1037, @0x000000000249c870, libserver.so)  // inlines: ~SCLAttackEvadeFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLAttackEvadeFields::~SCLAttackEvadeFields(SCLAttackEvadeFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF4B0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLAttackEvadeFields::MatchEventFields  (line 1045, @0x00000000024a2670, libserver.so)  // inlines: SpellEvadeMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLAttackEvadeFields::MatchEventFields(
        const SCLAttackEvadeFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // al
  SCLSearchFieldMatchResult_t v5; // edx

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  v5 = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    LOBYTE(v5) = 1;
    if ( this->m_bSpellEvade )
      return *(pEntry + 213);
  }
  return v5;
}


// SCLGoldChangeFields::~SCLGoldChangeFields  (line 1064, @0x000000000249c800, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLGoldChangeFields::~SCLGoldChangeFields(SCLGoldChangeFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF510;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLGoldChangeFields::~SCLGoldChangeFields  (line 1064, @0x000000000249c820, libserver.so)  // inlines: ~SCLGoldChangeFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLGoldChangeFields::~SCLGoldChangeFields(SCLGoldChangeFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF510;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLGoldChangeFields::MatchEventFields  (line 1071, @0x00000000024a22b0, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLGoldChangeFields::MatchEventFields(
        const SCLGoldChangeFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLTreeCutDownFields::~SCLTreeCutDownFields  (line 1085, @0x000000000249c7b0, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLTreeCutDownFields::~SCLTreeCutDownFields(SCLTreeCutDownFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF570;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLTreeCutDownFields::~SCLTreeCutDownFields  (line 1085, @0x000000000249c7d0, libserver.so)  // inlines: ~SCLTreeCutDownFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLTreeCutDownFields::~SCLTreeCutDownFields(SCLTreeCutDownFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF570;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLTreeCutDownFields::MatchEventFields  (line 1092, @0x00000000024a22c0, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLTreeCutDownFields::MatchEventFields(
        const SCLTreeCutDownFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLSuccessfulScanFields::~SCLSuccessfulScanFields  (line 1105, @0x000000000249c760, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLSuccessfulScanFields::~SCLSuccessfulScanFields(SCLSuccessfulScanFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF5D0;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLSuccessfulScanFields::~SCLSuccessfulScanFields  (line 1105, @0x000000000249c780, libserver.so)  // inlines: ~SCLSuccessfulScanFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLSuccessfulScanFields::~SCLSuccessfulScanFields(SCLSuccessfulScanFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF5D0;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLSuccessfulScanFields::MatchEventFields  (line 1112, @0x00000000024a22d0, libserver.so)
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLSuccessfulScanFields::MatchEventFields(
        const SCLSuccessfulScanFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  return ICLSearchFields::MatchCommonEventFields(this, pEntry);
}


// SCLEndKillstreakFields::~SCLEndKillstreakFields  (line 1125, @0x000000000249c710, libserver.so)
// calls: ICLSearchFields::~ICLSearchFields
void __fastcall SCLEndKillstreakFields::~SCLEndKillstreakFields(SCLEndKillstreakFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF630;
  ICLSearchFields::~ICLSearchFields(this);
}


// SCLEndKillstreakFields::~SCLEndKillstreakFields  (line 1125, @0x000000000249c730, libserver.so)  // inlines: ~SCLEndKillstreakFields
// calls: ICLSearchFields::~ICLSearchFields, operator delete
void __fastcall SCLEndKillstreakFields::~SCLEndKillstreakFields(SCLEndKillstreakFields *const this)
{
  this->_vptr_ICLSearchFields = off_40DF630;
  ICLSearchFields::~ICLSearchFields(this);
  operator delete(this);
}


// SCLEndKillstreakFields::MatchEventFields  (line 1132, @0x00000000024a2c90, libserver.so)  // inlines: AssistPlayerIDMatches
// calls: ICLSearchFields::MatchCommonEventFields
SCLSearchFieldMatchResult_t __fastcall SCLEndKillstreakFields::MatchEventFields(
        const SCLEndKillstreakFields *const this,
        const CMsgDOTACombatLogEntry *pEntry)
{
  bool matched; // al
  SCLSearchFieldMatchResult_t v5; // edx
  int m_iAssistPlayerID; // ecx
  int v7; // edi
  __int64 v8; // rdx
  unsigned __int8 v9; // al

  matched = ICLSearchFields::MatchCommonEventFields(this, pEntry);
  v5 = SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
  if ( matched )
  {
    m_iAssistPlayerID = this->m_iAssistPlayerID;
    LOBYTE(v5) = 1;
    if ( m_iAssistPlayerID != -1 )
    {
      v7 = *(pEntry + 40);
      if ( v7 <= 0 )
      {
        return SCLSearchFieldMatchResult_t::MATCH_RESULT_NO_MATCH;
      }
      else
      {
        v8 = 0;
        v9 = 0;
        do
        {
          if ( *(*(pEntry + 19) + 4 * v8) == m_iAssistPlayerID )
            v9 = 1;
          ++v8;
        }
        while ( v7 > v8 );
        return v9;
      }
    }
  }
  return v5;
}


