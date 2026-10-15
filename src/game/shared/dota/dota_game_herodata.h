// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_game_herodata.h:280
class CDOTAPlayerChallenge : public CProtoBufSharedObject<CSODOTAPlayerChallenge, 2010> {
public:

	static const int k_nTypeID = 2010;
	static const uint32 knTI5_ChallengeSlots = 4;
	static const uint32 knTI5_ChallengeSlot_For_HeroSpecific = 3;
	static const uint32 knTI5_HeroSpecificChallenge_Tier_Base = 10;
	static const uint32 knTI5_BackupChallengeStart = 100;
	static const uint32 knTI5_RerollDuration_Completed = 432000;
	static const uint32 knTI5_RerollDuration_Incomplete = 259200;
	static const uint32 knWM2016_ChallengeSlots = 3;
	static const uint32 knWM2016_ChallengeSlot_ForHeroSpecific = 2;
	static const uint32 knWM2016_HeroSpecificChallenge_Tier_Base = 10;
	static const uint32 knWM2016_BackupChallengeStart = 100;
	static const uint32 knWM2016_RerollDuration_Completed = 604800;
	static const uint32 knWM2016_HeroSpecificChallenge_RerollDuration_Completed = 79200;
	static const uint32 knWM2016_DailyHeroChallengeReward = 100;
	static const uint32 knWM2016_WeeklyChallengeReward = 300;
	CDOTAPlayerChallenge(CDOTAPlayerChallenge &);
	CDOTAPlayerChallenge(const CDOTAPlayerChallenge &);
	CDOTAPlayerChallenge();
	uint32 GetEventID();
	uint32 GetSlotID();
	uint32 GetChallengeType();
	RTime32 GetCreatedTime();
	uint32 GetCompleted();
	uint32 GetIntParam0();
	uint32 GetIntParam1();
	uint32 GetSequenceID();
	uint32 GetTier();
	uint32 GetFlags();
	uint32 GetAttempts();
	uint32 GetCompleteLimit();
	bool IsInBackupSlot();
	bool IsComplete();
	bool IsFullyComplete();
	bool IsQuestChallenge();
	uint32 GetQuestID();
	uint32 GetChallengeID();
	uint32 GetQuestRank();
	virtual bool BIsKeyLess(const CSharedObject &);
	uint32 GetRequiredHeroID();
	virtual ~CDOTAPlayerChallenge();

	// vtable[5] BIsKeyLess
	// sizeof = 88
};
