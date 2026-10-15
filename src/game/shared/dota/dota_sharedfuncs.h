// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_sharedfuncs.h:95
class CCompendiumDataFileTemplateHandler {
	struct templatekeytoremove_t {
		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CCompendiumDataFileTemplateHandler(KeyValues *);
	~CCompendiumDataFileTemplateHandler();
	bool ResolveTemplates();
	bool ExtractTemplates();
	bool ExtractTemplatesRecursive(KeyValues *, KeyValues *);
	bool ResolveTemplatesRecursive(KeyValues *);
	bool MergeTemplateIntoKV(KeyValues *, KeyValues *);
	bool ResolveDefines(KeyValues *, KeyValues *, const char *);
	bool ResolveDefinesRecursive(KeyValues *, const char *, const wchar_t *, const char *, const char *);
	KeyValues * GetTemplateKV(const char *);

	// sizeof = 40
};

// src/game/shared/dota/dota_sharedfuncs.h:168
struct challenge_variable_t {
	int nIndex;  // +0xc
	challenge_variable_t();
	~challenge_variable_t();

	// sizeof = 16
};

// src/game/shared/dota/dota_sharedfuncs.h:185
struct challenge_template_t {
	ChallengeType_t nChallengeType;  // +0x28
	bool bMultiMatchChallenge;  // +0x2c

	int nChallengeRanks;  // +0x30
	challenge_template_t();
	~challenge_template_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_sharedfuncs.h:207
struct challenge_var_set_t {
	struct var_value_t {
		int nVarValue;  // +0x0
		int nVarWeight;  // +0x4
		int nVarRank;  // +0x8

		// sizeof = 12
	};
	/* tag__fprintf: const_type tag not supported! */;

	int nVarIndex;  // +0x8

	challenge_var_set_t();
	~challenge_var_set_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_sharedfuncs.h:207
struct challenge_var_set_t {
	struct var_value_t {
		int nVarValue;  // +0x0
		int nVarWeight;  // +0x4
		int nVarRank;  // +0x8

		// sizeof = 12
	};
	/* tag__fprintf: const_type tag not supported! */;

	int nVarIndex;  // +0x8

	challenge_var_set_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_sharedfuncs.h:221
struct challenge_instance_t {
	static const uint32 k_nInstanceVar_CompleteLimit = 200;
	ChallengeType_t nChallengeType;  // +0x8
	int nChallengeTier;  // +0xc
	int nWeight;  // +0x10

	bool bQuestOnly;  // +0x30
	challenge_instance_t();
	~challenge_instance_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_sharedfuncs.h:241
struct challenge_quest_t {
	enum EPrerequisite {
		ePrerequisite_ChallengeComplete = 0,
		ePrerequisite_ChallengeNotComplete = 0x1,
		ePrerequisite_ChallengeCompleteOr = 0x2,
		ePrerequisite_Max = 0x3,
	};

	enum ECompleteAction {
		eCompleteAction_GrantPoints = 0,
		eCompleteAction_GrantPremiumPoints = 0x1,
		eCompleteAction_SetSelection = 0x2,
		eCompleteAction_SetAction = 0x3,
		eCompleteAction_SetSelectionHeroID = 0x4,
		eCompleteAction_IncrementGoal = 0x5,
		eCompleteAction_IncrementTrophy = 0x6,
		eCompleteAction_Max = 0x7,
	};

	struct challenge_t {
		struct prerequisite_t {
			QuestChallengeID_t m_nChallengeID;  // +0x4

			// sizeof = 8
		};

		struct complete_action_t {
			int m_nActionData;  // +0x4
			uint32 m_unRequiredRank;  // +0x8

			// sizeof = 12
		};

		struct instance_t {
			const challenge_instance_t * pInstance;  // +0x8
			uint32 unWeight;  // +0x10
			instance_t();

			// sizeof = 24
		};
		/* tag__fprintf: const_type tag not supported! */;
		/* tag__fprintf: const_type tag not supported! */;
		/* tag__fprintf: const_type tag not supported! */;

		QuestChallengeID_t nChallengeID;  // +0x20
		uint32 unTotalInstanceWeight;  // +0x24
		bool bOptional;  // +0x70
		challenge_t();

		// sizeof = 120
	};

	QuestID_t nQuestID;  // +0x30
	uint32 unEventID;  // +0x34
	EventGoalID_t unEventGoalID;  // +0x38

	bool bLocked;  // +0x58
	challenge_quest_t();
	~challenge_quest_t();

	// sizeof = 96
};

// src/game/shared/dota/dota_sharedfuncs.h:241
struct challenge_quest_t {
	enum EPrerequisite {
		ePrerequisite_ChallengeComplete = 0,
		ePrerequisite_ChallengeNotComplete = 0x1,
		ePrerequisite_ChallengeCompleteOr = 0x2,
		ePrerequisite_Max = 0x3,
	};

	enum ECompleteAction {
		eCompleteAction_GrantPoints = 0,
		eCompleteAction_GrantPremiumPoints = 0x1,
		eCompleteAction_SetSelection = 0x2,
		eCompleteAction_SetAction = 0x3,
		eCompleteAction_SetSelectionHeroID = 0x4,
		eCompleteAction_IncrementGoal = 0x5,
		eCompleteAction_IncrementTrophy = 0x6,
		eCompleteAction_Max = 0x7,
	};

	struct challenge_t {
		struct prerequisite_t {
			QuestChallengeID_t m_nChallengeID;  // +0x4

			// sizeof = 8
		};

		struct complete_action_t {
			int m_nActionData;  // +0x4
			uint32 m_unRequiredRank;  // +0x8

			// sizeof = 12
		};

		struct instance_t {
			const challenge_instance_t * pInstance;  // +0x8
			uint32 unWeight;  // +0x10
			instance_t();
			~instance_t();

			// sizeof = 24
		};
		/* tag__fprintf: const_type tag not supported! */;
		/* tag__fprintf: const_type tag not supported! */;
		/* tag__fprintf: const_type tag not supported! */;

		QuestChallengeID_t nChallengeID;  // +0x20
		uint32 unTotalInstanceWeight;  // +0x24
		bool bOptional;  // +0x70
		challenge_t();
		~challenge_t();

		// sizeof = 120
	};

	QuestID_t nQuestID;  // +0x30
	uint32 unEventID;  // +0x34
	EventGoalID_t unEventGoalID;  // +0x38

	bool bLocked;  // +0x58
	challenge_quest_t();
	~challenge_quest_t();

	// sizeof = 96
};

// src/game/shared/dota/dota_sharedfuncs.h:355
class CPlayerCardBonusAttributePacked {
	struct PlayerCardBonus_t {
		int nBonusType;  // +0x0
		int nValue;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CPlayerCardBonusAttributePacked();
	bool HasBonus(int);
	int GetBonusValue(int);
	bool IsCommon();
	bool IsSilver();
	bool IsGold();
	void AddBonus(int, int);
	uint64 GetPacked();
	void FromPacked(uint64);
	~CPlayerCardBonusAttributePacked();

	// sizeof = 24
};
