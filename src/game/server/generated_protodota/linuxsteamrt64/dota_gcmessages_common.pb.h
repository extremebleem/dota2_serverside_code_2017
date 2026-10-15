// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:535
class CSODOTAGameAccountClient : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kWinsFieldNumber = 3;
	static const int kLossesFieldNumber = 4;
	static const int kXpFieldNumber = 12;
	static const int kLevelFieldNumber = 13;
	static const int kInitialSkillFieldNumber = 14;
	static const int kLeaverCountFieldNumber = 15;
	static const int kSecondaryLeaverCountFieldNumber = 58;
	static const int kLowPriorityUntilDateFieldNumber = 18;
	static const int kPreventTextChatUntilDateFieldNumber = 20;
	static const int kPreventVoiceUntilDateFieldNumber = 21;
	static const int kPreventPublicTextChatUntilDateFieldNumber = 86;
	static const int kLastAbandonedGameDateFieldNumber = 22;
	static const int kLastSecondaryAbandonedGameDateFieldNumber = 59;
	static const int kLeaverPenaltyCountFieldNumber = 23;
	static const int kCompletedGameStreakFieldNumber = 24;
	static const int kTeachingFieldNumber = 28;
	static const int kLeadershipFieldNumber = 29;
	static const int kFriendlyFieldNumber = 30;
	static const int kForgivingFieldNumber = 31;
	static const int kAccountDisabledUntilDateFieldNumber = 38;
	static const int kAccountDisabledCountFieldNumber = 39;
	static const int kShowcaseHeroIdFieldNumber = 40;
	static const int kMatchDisabledUntilDateFieldNumber = 41;
	static const int kMatchDisabledCountFieldNumber = 42;
	static const int kPartnerAccountTypeFieldNumber = 44;
	static const int kPartnerAccountStateFieldNumber = 45;
	static const int kShutdownlawterminatetimestampFieldNumber = 47;
	static const int kLowPriorityGamesRemainingFieldNumber = 48;
	static const int kCompetitiveRankFieldNumber = 49;
	static const int kCalibrationGamesRemainingFieldNumber = 51;
	static const int kSoloCompetitiveRankFieldNumber = 52;
	static const int kSoloCalibrationGamesRemainingFieldNumber = 54;
	static const int kGeneralSeasonalRankedRankFieldNumber = 75;
	static const int kGeneralSeasonalRankedCalibrationGamesRemainingFieldNumber = 76;
	static const int kGeneralSeasonalRankedGamesPlayedFieldNumber = 80;
	static const int kGeneralSeasonalRankedRankPeakFieldNumber = 81;
	static const int kGeneralSeasonalRankTransferredFieldNumber = 83;
	static const int kSoloSeasonalRankedRankFieldNumber = 77;
	static const int kSoloSeasonalRankedCalibrationGamesRemainingFieldNumber = 78;
	static const int kSoloSeasonalRankedGamesPlayedFieldNumber = 79;
	static const int kSoloSeasonalRankedRankPeakFieldNumber = 82;
	static const int kSoloSeasonalRankTransferredFieldNumber = 84;
	static const int kRecruitmentLevelFieldNumber = 55;
	static const int kHasNewNotificationsFieldNumber = 56;
	static const int kIsLeagueAdminFieldNumber = 57;
	static const int kCasualGamesPlayedFieldNumber = 60;
	static const int kSoloCompetitiveGamesPlayedFieldNumber = 61;
	static const int kPartyCompetitiveGamesPlayedFieldNumber = 62;
	static const int kCasual1V1GamesPlayedFieldNumber = 65;
	static const int kCompetitiveTeamGamesPlayedFieldNumber = 66;
	static const int kCurrAllHeroChallengeIdFieldNumber = 67;
	static const int kPlayTimePointsFieldNumber = 68;
	static const int kAccountFlagsFieldNumber = 69;
	static const int kPlayTimeLevelFieldNumber = 70;
	static const int kPlayerBehaviorSeqNumLastReportFieldNumber = 71;
	static const int kPlayerBehaviorScoreLastReportFieldNumber = 72;
	static const int kPlayerBehaviorReportOldDataFieldNumber = 73;
	static const int kTourneySkillLevelFieldNumber = 74;
	static const int kTourneyRecentParticipationDateFieldNumber = 85;
	static const int kFavoriteTeamFieldNumber = 87;
private:

	unsigned int _has_bits_[2];  // +0x10
	uint32 account_id_;  // +0x18
	uint32 wins_;  // +0x1c
	uint32 losses_;  // +0x20
	uint32 xp_;  // +0x24
	uint32 level_;  // +0x28
	uint32 initial_skill_;  // +0x2c
	uint32 leaver_count_;  // +0x30
	uint32 secondary_leaver_count_;  // +0x34
	uint32 low_priority_until_date_;  // +0x38
	uint32 prevent_text_chat_until_date_;  // +0x3c
	uint32 prevent_voice_until_date_;  // +0x40
	uint32 prevent_public_text_chat_until_date_;  // +0x44
	uint32 last_abandoned_game_date_;  // +0x48
	uint32 last_secondary_abandoned_game_date_;  // +0x4c
	uint32 leaver_penalty_count_;  // +0x50
	uint32 completed_game_streak_;  // +0x54
	uint32 teaching_;  // +0x58
	uint32 leadership_;  // +0x5c
	uint32 friendly_;  // +0x60
	uint32 forgiving_;  // +0x64
	uint32 account_disabled_until_date_;  // +0x68
	uint32 account_disabled_count_;  // +0x6c
	uint32 showcase_hero_id_;  // +0x70
	uint32 match_disabled_until_date_;  // +0x74
	uint32 match_disabled_count_;  // +0x78
	int partner_account_type_;  // +0x7c
	uint32 partner_account_state_;  // +0x80
	uint32 shutdownlawterminatetimestamp_;  // +0x84
	uint32 low_priority_games_remaining_;  // +0x88
	uint32 competitive_rank_;  // +0x8c
	uint32 calibration_games_remaining_;  // +0x90
	uint32 solo_competitive_rank_;  // +0x94
	uint32 solo_calibration_games_remaining_;  // +0x98
	uint32 general_seasonal_ranked_rank_;  // +0x9c
	uint32 general_seasonal_ranked_calibration_games_remaining_;  // +0xa0
	uint32 general_seasonal_ranked_games_played_;  // +0xa4
	uint32 general_seasonal_ranked_rank_peak_;  // +0xa8
	uint32 solo_seasonal_ranked_rank_;  // +0xac
	uint32 solo_seasonal_ranked_calibration_games_remaining_;  // +0xb0
	uint32 solo_seasonal_ranked_games_played_;  // +0xb4
	uint32 solo_seasonal_ranked_rank_peak_;  // +0xb8
	bool general_seasonal_rank_transferred_;  // +0xbc
	bool solo_seasonal_rank_transferred_;  // +0xbd
	bool has_new_notifications_;  // +0xbe
	bool is_league_admin_;  // +0xbf
	uint32 recruitment_level_;  // +0xc0
	uint32 casual_games_played_;  // +0xc4
	uint32 solo_competitive_games_played_;  // +0xc8
	uint32 party_competitive_games_played_;  // +0xcc
	uint32 casual_1v1_games_played_;  // +0xd0
	uint32 competitive_team_games_played_;  // +0xd4
	uint32 curr_all_hero_challenge_id_;  // +0xd8
	uint32 play_time_points_;  // +0xdc
	uint32 account_flags_;  // +0xe0
	uint32 play_time_level_;  // +0xe4
	uint32 player_behavior_seq_num_last_report_;  // +0xe8
	uint32 player_behavior_score_last_report_;  // +0xec
	bool player_behavior_report_old_data_;  // +0xf0

	uint32 tourney_skill_level_;  // +0xf4
	uint32 tourney_recent_participation_date_;  // +0xf8
	uint32 favorite_team_;  // +0xfc
	int _cached_size_;  // +0x100

	static CSODOTAGameAccountClient * default_instance_;
	CSODOTAGameAccountClient();
	virtual ~CSODOTAGameAccountClient();
	CSODOTAGameAccountClient(const CSODOTAGameAccountClient &);
	CSODOTAGameAccountClient & operator=(const CSODOTAGameAccountClient &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTAGameAccountClient & default_instance();
	void Swap(CSODOTAGameAccountClient *);
	virtual CSODOTAGameAccountClient * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTAGameAccountClient &);
	void MergeFrom(const CSODOTAGameAccountClient &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_wins();
	void clear_wins();
	uint32 wins();
	void set_wins(uint32);
	bool has_losses();
	void clear_losses();
	uint32 losses();
	void set_losses(uint32);
	bool has_xp();
	void clear_xp();
	uint32 xp();
	void set_xp(uint32);
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	bool has_initial_skill();
	void clear_initial_skill();
	uint32 initial_skill();
	void set_initial_skill(uint32);
	bool has_leaver_count();
	void clear_leaver_count();
	uint32 leaver_count();
	void set_leaver_count(uint32);
	bool has_secondary_leaver_count();
	void clear_secondary_leaver_count();
	uint32 secondary_leaver_count();
	void set_secondary_leaver_count(uint32);
	bool has_low_priority_until_date();
	void clear_low_priority_until_date();
	uint32 low_priority_until_date();
	void set_low_priority_until_date(uint32);
	bool has_prevent_text_chat_until_date();
	void clear_prevent_text_chat_until_date();
	uint32 prevent_text_chat_until_date();
	void set_prevent_text_chat_until_date(uint32);
	bool has_prevent_voice_until_date();
	void clear_prevent_voice_until_date();
	uint32 prevent_voice_until_date();
	void set_prevent_voice_until_date(uint32);
	bool has_prevent_public_text_chat_until_date();
	void clear_prevent_public_text_chat_until_date();
	uint32 prevent_public_text_chat_until_date();
	void set_prevent_public_text_chat_until_date(uint32);
	bool has_last_abandoned_game_date();
	void clear_last_abandoned_game_date();
	uint32 last_abandoned_game_date();
	void set_last_abandoned_game_date(uint32);
	bool has_last_secondary_abandoned_game_date();
	void clear_last_secondary_abandoned_game_date();
	uint32 last_secondary_abandoned_game_date();
	void set_last_secondary_abandoned_game_date(uint32);
	bool has_leaver_penalty_count();
	void clear_leaver_penalty_count();
	uint32 leaver_penalty_count();
	void set_leaver_penalty_count(uint32);
	bool has_completed_game_streak();
	void clear_completed_game_streak();
	uint32 completed_game_streak();
	void set_completed_game_streak(uint32);
	bool has_teaching();
	void clear_teaching();
	uint32 teaching();
	void set_teaching(uint32);
	bool has_leadership();
	void clear_leadership();
	uint32 leadership();
	void set_leadership(uint32);
	bool has_friendly();
	void clear_friendly();
	uint32 friendly();
	void set_friendly(uint32);
	bool has_forgiving();
	void clear_forgiving();
	uint32 forgiving();
	void set_forgiving(uint32);
	bool has_account_disabled_until_date();
	void clear_account_disabled_until_date();
	uint32 account_disabled_until_date();
	void set_account_disabled_until_date(uint32);
	bool has_account_disabled_count();
	void clear_account_disabled_count();
	uint32 account_disabled_count();
	void set_account_disabled_count(uint32);
	bool has_showcase_hero_id();
	void clear_showcase_hero_id();
	uint32 showcase_hero_id();
	void set_showcase_hero_id(uint32);
	bool has_match_disabled_until_date();
	void clear_match_disabled_until_date();
	uint32 match_disabled_until_date();
	void set_match_disabled_until_date(uint32);
	bool has_match_disabled_count();
	void clear_match_disabled_count();
	uint32 match_disabled_count();
	void set_match_disabled_count(uint32);
	bool has_partner_account_type();
	void clear_partner_account_type();
	PartnerAccountType partner_account_type();
	void set_partner_account_type(PartnerAccountType);
	bool has_partner_account_state();
	void clear_partner_account_state();
	uint32 partner_account_state();
	void set_partner_account_state(uint32);
	bool has_shutdownlawterminatetimestamp();
	void clear_shutdownlawterminatetimestamp();
	uint32 shutdownlawterminatetimestamp();
	void set_shutdownlawterminatetimestamp(uint32);
	bool has_low_priority_games_remaining();
	void clear_low_priority_games_remaining();
	uint32 low_priority_games_remaining();
	void set_low_priority_games_remaining(uint32);
	bool has_competitive_rank();
	void clear_competitive_rank();
	uint32 competitive_rank();
	void set_competitive_rank(uint32);
	bool has_calibration_games_remaining();
	void clear_calibration_games_remaining();
	uint32 calibration_games_remaining();
	void set_calibration_games_remaining(uint32);
	bool has_solo_competitive_rank();
	void clear_solo_competitive_rank();
	uint32 solo_competitive_rank();
	void set_solo_competitive_rank(uint32);
	bool has_solo_calibration_games_remaining();
	void clear_solo_calibration_games_remaining();
	uint32 solo_calibration_games_remaining();
	void set_solo_calibration_games_remaining(uint32);
	bool has_general_seasonal_ranked_rank();
	void clear_general_seasonal_ranked_rank();
	uint32 general_seasonal_ranked_rank();
	void set_general_seasonal_ranked_rank(uint32);
	bool has_general_seasonal_ranked_calibration_games_remaining();
	void clear_general_seasonal_ranked_calibration_games_remaining();
	uint32 general_seasonal_ranked_calibration_games_remaining();
	void set_general_seasonal_ranked_calibration_games_remaining(uint32);
	bool has_general_seasonal_ranked_games_played();
	void clear_general_seasonal_ranked_games_played();
	uint32 general_seasonal_ranked_games_played();
	void set_general_seasonal_ranked_games_played(uint32);
	bool has_general_seasonal_ranked_rank_peak();
	void clear_general_seasonal_ranked_rank_peak();
	uint32 general_seasonal_ranked_rank_peak();
	void set_general_seasonal_ranked_rank_peak(uint32);
	bool has_general_seasonal_rank_transferred();
	void clear_general_seasonal_rank_transferred();
	bool general_seasonal_rank_transferred();
	void set_general_seasonal_rank_transferred(bool);
	bool has_solo_seasonal_ranked_rank();
	void clear_solo_seasonal_ranked_rank();
	uint32 solo_seasonal_ranked_rank();
	void set_solo_seasonal_ranked_rank(uint32);
	bool has_solo_seasonal_ranked_calibration_games_remaining();
	void clear_solo_seasonal_ranked_calibration_games_remaining();
	uint32 solo_seasonal_ranked_calibration_games_remaining();
	void set_solo_seasonal_ranked_calibration_games_remaining(uint32);
	bool has_solo_seasonal_ranked_games_played();
	void clear_solo_seasonal_ranked_games_played();
	uint32 solo_seasonal_ranked_games_played();
	void set_solo_seasonal_ranked_games_played(uint32);
	bool has_solo_seasonal_ranked_rank_peak();
	void clear_solo_seasonal_ranked_rank_peak();
	uint32 solo_seasonal_ranked_rank_peak();
	void set_solo_seasonal_ranked_rank_peak(uint32);
	bool has_solo_seasonal_rank_transferred();
	void clear_solo_seasonal_rank_transferred();
	bool solo_seasonal_rank_transferred();
	void set_solo_seasonal_rank_transferred(bool);
	bool has_recruitment_level();
	void clear_recruitment_level();
	uint32 recruitment_level();
	void set_recruitment_level(uint32);
	bool has_has_new_notifications();
	void clear_has_new_notifications();
	bool has_new_notifications();
	void set_has_new_notifications(bool);
	bool has_is_league_admin();
	void clear_is_league_admin();
	bool is_league_admin();
	void set_is_league_admin(bool);
	bool has_casual_games_played();
	void clear_casual_games_played();
	uint32 casual_games_played();
	void set_casual_games_played(uint32);
	bool has_solo_competitive_games_played();
	void clear_solo_competitive_games_played();
	uint32 solo_competitive_games_played();
	void set_solo_competitive_games_played(uint32);
	bool has_party_competitive_games_played();
	void clear_party_competitive_games_played();
	uint32 party_competitive_games_played();
	void set_party_competitive_games_played(uint32);
	bool has_casual_1v1_games_played();
	void clear_casual_1v1_games_played();
	uint32 casual_1v1_games_played();
	void set_casual_1v1_games_played(uint32);
	bool has_competitive_team_games_played();
	void clear_competitive_team_games_played();
	uint32 competitive_team_games_played();
	void set_competitive_team_games_played(uint32);
	bool has_curr_all_hero_challenge_id();
	void clear_curr_all_hero_challenge_id();
	uint32 curr_all_hero_challenge_id();
	void set_curr_all_hero_challenge_id(uint32);
	bool has_play_time_points();
	void clear_play_time_points();
	uint32 play_time_points();
	void set_play_time_points(uint32);
	bool has_account_flags();
	void clear_account_flags();
	uint32 account_flags();
	void set_account_flags(uint32);
	bool has_play_time_level();
	void clear_play_time_level();
	uint32 play_time_level();
	void set_play_time_level(uint32);
	bool has_player_behavior_seq_num_last_report();
	void clear_player_behavior_seq_num_last_report();
	uint32 player_behavior_seq_num_last_report();
	void set_player_behavior_seq_num_last_report(uint32);
	bool has_player_behavior_score_last_report();
	void clear_player_behavior_score_last_report();
	uint32 player_behavior_score_last_report();
	void set_player_behavior_score_last_report(uint32);
	bool has_player_behavior_report_old_data();
	void clear_player_behavior_report_old_data();
	bool player_behavior_report_old_data();
	void set_player_behavior_report_old_data(bool);
	bool has_tourney_skill_level();
	void clear_tourney_skill_level();
	uint32 tourney_skill_level();
	void set_tourney_skill_level(uint32);
	bool has_tourney_recent_participation_date();
	void clear_tourney_recent_participation_date();
	uint32 tourney_recent_participation_date();
	void set_tourney_recent_participation_date(uint32);
	bool has_favorite_team();
	void clear_favorite_team();
	uint32 favorite_team();
	void set_favorite_team(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_wins();
	void clear_has_wins();
	void set_has_losses();
	void clear_has_losses();
	void set_has_xp();
	void clear_has_xp();
	void set_has_level();
	void clear_has_level();
	void set_has_initial_skill();
	void clear_has_initial_skill();
	void set_has_leaver_count();
	void clear_has_leaver_count();
	void set_has_secondary_leaver_count();
	void clear_has_secondary_leaver_count();
	void set_has_low_priority_until_date();
	void clear_has_low_priority_until_date();
	void set_has_prevent_text_chat_until_date();
	void clear_has_prevent_text_chat_until_date();
	void set_has_prevent_voice_until_date();
	void clear_has_prevent_voice_until_date();
	void set_has_prevent_public_text_chat_until_date();
	void clear_has_prevent_public_text_chat_until_date();
	void set_has_last_abandoned_game_date();
	void clear_has_last_abandoned_game_date();
	void set_has_last_secondary_abandoned_game_date();
	void clear_has_last_secondary_abandoned_game_date();
	void set_has_leaver_penalty_count();
	void clear_has_leaver_penalty_count();
	void set_has_completed_game_streak();
	void clear_has_completed_game_streak();
	void set_has_teaching();
	void clear_has_teaching();
	void set_has_leadership();
	void clear_has_leadership();
	void set_has_friendly();
	void clear_has_friendly();
	void set_has_forgiving();
	void clear_has_forgiving();
	void set_has_account_disabled_until_date();
	void clear_has_account_disabled_until_date();
	void set_has_account_disabled_count();
	void clear_has_account_disabled_count();
	void set_has_showcase_hero_id();
	void clear_has_showcase_hero_id();
	void set_has_match_disabled_until_date();
	void clear_has_match_disabled_until_date();
	void set_has_match_disabled_count();
	void clear_has_match_disabled_count();
	void set_has_partner_account_type();
	void clear_has_partner_account_type();
	void set_has_partner_account_state();
	void clear_has_partner_account_state();
	void set_has_shutdownlawterminatetimestamp();
	void clear_has_shutdownlawterminatetimestamp();
	void set_has_low_priority_games_remaining();
	void clear_has_low_priority_games_remaining();
	void set_has_competitive_rank();
	void clear_has_competitive_rank();
	void set_has_calibration_games_remaining();
	void clear_has_calibration_games_remaining();
	void set_has_solo_competitive_rank();
	void clear_has_solo_competitive_rank();
	void set_has_solo_calibration_games_remaining();
	void clear_has_solo_calibration_games_remaining();
	void set_has_general_seasonal_ranked_rank();
	void clear_has_general_seasonal_ranked_rank();
	void set_has_general_seasonal_ranked_calibration_games_remaining();
	void clear_has_general_seasonal_ranked_calibration_games_remaining();
	void set_has_general_seasonal_ranked_games_played();
	void clear_has_general_seasonal_ranked_games_played();
	void set_has_general_seasonal_ranked_rank_peak();
	void clear_has_general_seasonal_ranked_rank_peak();
	void set_has_general_seasonal_rank_transferred();
	void clear_has_general_seasonal_rank_transferred();
	void set_has_solo_seasonal_ranked_rank();
	void clear_has_solo_seasonal_ranked_rank();
	void set_has_solo_seasonal_ranked_calibration_games_remaining();
	void clear_has_solo_seasonal_ranked_calibration_games_remaining();
	void set_has_solo_seasonal_ranked_games_played();
	void clear_has_solo_seasonal_ranked_games_played();
	void set_has_solo_seasonal_ranked_rank_peak();
	void clear_has_solo_seasonal_ranked_rank_peak();
	void set_has_solo_seasonal_rank_transferred();
	void clear_has_solo_seasonal_rank_transferred();
	void set_has_recruitment_level();
	void clear_has_recruitment_level();
	void set_has_has_new_notifications();
	void clear_has_has_new_notifications();
	void set_has_is_league_admin();
	void clear_has_is_league_admin();
	void set_has_casual_games_played();
	void clear_has_casual_games_played();
	void set_has_solo_competitive_games_played();
	void clear_has_solo_competitive_games_played();
	void set_has_party_competitive_games_played();
	void clear_has_party_competitive_games_played();
	void set_has_casual_1v1_games_played();
	void clear_has_casual_1v1_games_played();
	void set_has_competitive_team_games_played();
	void clear_has_competitive_team_games_played();
	void set_has_curr_all_hero_challenge_id();
	void clear_has_curr_all_hero_challenge_id();
	void set_has_play_time_points();
	void clear_has_play_time_points();
	void set_has_account_flags();
	void clear_has_account_flags();
	void set_has_play_time_level();
	void clear_has_play_time_level();
	void set_has_player_behavior_seq_num_last_report();
	void clear_has_player_behavior_seq_num_last_report();
	void set_has_player_behavior_score_last_report();
	void clear_has_player_behavior_score_last_report();
	void set_has_player_behavior_report_old_data();
	void clear_has_player_behavior_report_old_data();
	void set_has_tourney_skill_level();
	void clear_has_tourney_skill_level();
	void set_has_tourney_recent_participation_date();
	void clear_has_tourney_recent_participation_date();
	void set_has_favorite_team();
	void clear_has_favorite_team();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 264
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:1214
class CMsgLobbyEventPoints_AccountPoints : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kNormalPointsFieldNumber = 2;
	static const int kPremiumPointsFieldNumber = 3;
	static const int kOwnedFieldNumber = 4;
	static const int kFavoriteTeamFieldNumber = 5;
	static const int kFavoriteTeamLevelFieldNumber = 6;
	static const int kPointsHeldFieldNumber = 7;
	static const int kPremiumPointsHeldFieldNumber = 8;
	static const int kFavoriteTeamFoilLevelFieldNumber = 9;
	static const int kWagerTokensRemainingFieldNumber = 10;
	static const int kWagerTokensMaxFieldNumber = 11;
	static const int kActiveEffectsMaskFieldNumber = 12;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 normal_points_;  // +0x1c
	uint32 premium_points_;  // +0x20
	bool owned_;  // +0x24

	uint32 favorite_team_;  // +0x28
	uint32 favorite_team_level_;  // +0x2c
	uint32 points_held_;  // +0x30
	uint32 premium_points_held_;  // +0x34
	uint32 favorite_team_foil_level_;  // +0x38
	uint32 wager_tokens_remaining_;  // +0x3c
	uint64 active_effects_mask_;  // +0x40
	uint32 wager_tokens_max_;  // +0x48

	static CMsgLobbyEventPoints_AccountPoints * default_instance_;
	CMsgLobbyEventPoints_AccountPoints();
	virtual ~CMsgLobbyEventPoints_AccountPoints();
	CMsgLobbyEventPoints_AccountPoints(const CMsgLobbyEventPoints_AccountPoints &);
	CMsgLobbyEventPoints_AccountPoints & operator=(const CMsgLobbyEventPoints_AccountPoints &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLobbyEventPoints_AccountPoints & default_instance();
	void Swap(CMsgLobbyEventPoints_AccountPoints *);
	virtual CMsgLobbyEventPoints_AccountPoints * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLobbyEventPoints_AccountPoints &);
	void MergeFrom(const CMsgLobbyEventPoints_AccountPoints &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_normal_points();
	void clear_normal_points();
	uint32 normal_points();
	void set_normal_points(uint32);
	bool has_premium_points();
	void clear_premium_points();
	uint32 premium_points();
	void set_premium_points(uint32);
	bool has_owned();
	void clear_owned();
	bool owned();
	void set_owned(bool);
	bool has_favorite_team();
	void clear_favorite_team();
	uint32 favorite_team();
	void set_favorite_team(uint32);
	bool has_favorite_team_level();
	void clear_favorite_team_level();
	uint32 favorite_team_level();
	void set_favorite_team_level(uint32);
	bool has_points_held();
	void clear_points_held();
	uint32 points_held();
	void set_points_held(uint32);
	bool has_premium_points_held();
	void clear_premium_points_held();
	uint32 premium_points_held();
	void set_premium_points_held(uint32);
	bool has_favorite_team_foil_level();
	void clear_favorite_team_foil_level();
	uint32 favorite_team_foil_level();
	void set_favorite_team_foil_level(uint32);
	bool has_wager_tokens_remaining();
	void clear_wager_tokens_remaining();
	uint32 wager_tokens_remaining();
	void set_wager_tokens_remaining(uint32);
	bool has_wager_tokens_max();
	void clear_wager_tokens_max();
	uint32 wager_tokens_max();
	void set_wager_tokens_max(uint32);
	bool has_active_effects_mask();
	void clear_active_effects_mask();
	uint64 active_effects_mask();
	void set_active_effects_mask(uint64);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_normal_points();
	void clear_has_normal_points();
	void set_has_premium_points();
	void clear_has_premium_points();
	void set_has_owned();
	void clear_has_owned();
	void set_has_favorite_team();
	void clear_has_favorite_team();
	void set_has_favorite_team_level();
	void clear_has_favorite_team_level();
	void set_has_points_held();
	void clear_has_points_held();
	void set_has_premium_points_held();
	void clear_has_premium_points_held();
	void set_has_favorite_team_foil_level();
	void clear_has_favorite_team_foil_level();
	void set_has_wager_tokens_remaining();
	void clear_has_wager_tokens_remaining();
	void set_has_wager_tokens_max();
	void clear_has_wager_tokens_max();
	void set_has_active_effects_mask();
	void clear_has_active_effects_mask();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 80
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:1403
class CMsgLobbyEventPoints : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kAccountPointsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x30

	static CMsgLobbyEventPoints * default_instance_;
	CMsgLobbyEventPoints();
	virtual ~CMsgLobbyEventPoints();
	CMsgLobbyEventPoints(const CMsgLobbyEventPoints &);
	CMsgLobbyEventPoints & operator=(const CMsgLobbyEventPoints &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLobbyEventPoints & default_instance();
	void Swap(CMsgLobbyEventPoints *);
	virtual CMsgLobbyEventPoints * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLobbyEventPoints &);
	void MergeFrom(const CMsgLobbyEventPoints &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	int account_points_size();
	void clear_account_points();
	const CMsgLobbyEventPoints_AccountPoints & account_points(int);
	CMsgLobbyEventPoints_AccountPoints * mutable_account_points(int);
	CMsgLobbyEventPoints_AccountPoints * add_account_points();
	const RepeatedPtrField<CMsgLobbyEventPoints_AccountPoints> & account_points();
	RepeatedPtrField<CMsgLobbyEventPoints_AccountPoints> * mutable_account_points();
	void set_has_event_id();
	void clear_has_event_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:1497
class CMsgBattleCupVictory : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kWinDateFieldNumber = 2;
	static const int kValidUntilFieldNumber = 3;
	static const int kSkillLevelFieldNumber = 4;
	static const int kTournamentIdFieldNumber = 5;
	static const int kDivisionIdFieldNumber = 6;
	static const int kTeamIdFieldNumber = 7;
	static const int kStreakFieldNumber = 8;
	static const int kTrophyIdFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 win_date_;  // +0x1c
	uint32 valid_until_;  // +0x20
	uint32 skill_level_;  // +0x24
	uint32 tournament_id_;  // +0x28
	uint32 division_id_;  // +0x2c
	uint32 team_id_;  // +0x30
	uint32 streak_;  // +0x34
	uint32 trophy_id_;  // +0x38

	static CMsgBattleCupVictory * default_instance_;
	CMsgBattleCupVictory();
	virtual ~CMsgBattleCupVictory();
	CMsgBattleCupVictory(const CMsgBattleCupVictory &);
	CMsgBattleCupVictory & operator=(const CMsgBattleCupVictory &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgBattleCupVictory & default_instance();
	void Swap(CMsgBattleCupVictory *);
	virtual CMsgBattleCupVictory * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgBattleCupVictory &);
	void MergeFrom(const CMsgBattleCupVictory &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_win_date();
	void clear_win_date();
	uint32 win_date();
	void set_win_date(uint32);
	bool has_valid_until();
	void clear_valid_until();
	uint32 valid_until();
	void set_valid_until(uint32);
	bool has_skill_level();
	void clear_skill_level();
	uint32 skill_level();
	void set_skill_level(uint32);
	bool has_tournament_id();
	void clear_tournament_id();
	uint32 tournament_id();
	void set_tournament_id(uint32);
	bool has_division_id();
	void clear_division_id();
	uint32 division_id();
	void set_division_id(uint32);
	bool has_team_id();
	void clear_team_id();
	uint32 team_id();
	void set_team_id(uint32);
	bool has_streak();
	void clear_streak();
	uint32 streak();
	void set_streak(uint32);
	bool has_trophy_id();
	void clear_trophy_id();
	uint32 trophy_id();
	void set_trophy_id(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_win_date();
	void clear_has_win_date();
	void set_has_valid_until();
	void clear_has_valid_until();
	void set_has_skill_level();
	void clear_has_skill_level();
	void set_has_tournament_id();
	void clear_has_tournament_id();
	void set_has_division_id();
	void clear_has_division_id();
	void set_has_team_id();
	void clear_has_team_id();
	void set_has_streak();
	void clear_has_streak();
	void set_has_trophy_id();
	void clear_has_trophy_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:1656
class CMsgLobbyBattleCupVictoryList : public Message {
public:

	static const int kWinnersFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgLobbyBattleCupVictoryList * default_instance_;
	CMsgLobbyBattleCupVictoryList();
	virtual ~CMsgLobbyBattleCupVictoryList();
	CMsgLobbyBattleCupVictoryList(const CMsgLobbyBattleCupVictoryList &);
	CMsgLobbyBattleCupVictoryList & operator=(const CMsgLobbyBattleCupVictoryList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLobbyBattleCupVictoryList & default_instance();
	void Swap(CMsgLobbyBattleCupVictoryList *);
	virtual CMsgLobbyBattleCupVictoryList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLobbyBattleCupVictoryList &);
	void MergeFrom(const CMsgLobbyBattleCupVictoryList &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int winners_size();
	void clear_winners();
	const CMsgBattleCupVictory & winners(int);
	CMsgBattleCupVictory * mutable_winners(int);
	CMsgBattleCupVictory * add_winners();
	const RepeatedPtrField<CMsgBattleCupVictory> & winners();
	RepeatedPtrField<CMsgBattleCupVictory> * mutable_winners();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:1738
class CMsgDOTABroadcastNotification : public Message {
public:

	static const int kMessageFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18

	static CMsgDOTABroadcastNotification * default_instance_;
	CMsgDOTABroadcastNotification();
	virtual ~CMsgDOTABroadcastNotification();
	CMsgDOTABroadcastNotification(const CMsgDOTABroadcastNotification &);
	CMsgDOTABroadcastNotification & operator=(const CMsgDOTABroadcastNotification &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTABroadcastNotification & default_instance();
	void Swap(CMsgDOTABroadcastNotification *);
	virtual CMsgDOTABroadcastNotification * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTABroadcastNotification &);
	void MergeFrom(const CMsgDOTABroadcastNotification &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_message();
	void clear_message();
	const string & message();
	void set_message(const string &);
	void set_message(const char *);
	void set_message(const char *, size_t);
	string * mutable_message();
	string * release_message();
	void set_allocated_message(string *);
	void set_has_message();
	void clear_has_message();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:1822
class CProtoItemHeroStatue : public Message {
public:

	static const int kHeroIdFieldNumber = 1;
	static const int kStatusEffectIndexFieldNumber = 2;
	static const int kSequenceNameFieldNumber = 3;
	static const int kCycleFieldNumber = 4;
	static const int kWearableFieldNumber = 5;
	static const int kInscriptionFieldNumber = 6;
	static const int kStyleFieldNumber = 7;
	static const int kTournamentDropFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 hero_id_;  // +0x18
	uint32 status_effect_index_;  // +0x1c
	string * sequence_name_;  // +0x20
	string * inscription_;  // +0x38
	float cycle_;  // +0x40
	bool tournament_drop_;  // +0x44

	static CProtoItemHeroStatue * default_instance_;
	CProtoItemHeroStatue();
	virtual ~CProtoItemHeroStatue();
	CProtoItemHeroStatue(const CProtoItemHeroStatue &);
	CProtoItemHeroStatue & operator=(const CProtoItemHeroStatue &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemHeroStatue & default_instance();
	void Swap(CProtoItemHeroStatue *);
	virtual CProtoItemHeroStatue * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemHeroStatue &);
	void MergeFrom(const CProtoItemHeroStatue &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	bool has_status_effect_index();
	void clear_status_effect_index();
	uint32 status_effect_index();
	void set_status_effect_index(uint32);
	bool has_sequence_name();
	void clear_sequence_name();
	const string & sequence_name();
	void set_sequence_name(const string &);
	void set_sequence_name(const char *);
	void set_sequence_name(const char *, size_t);
	string * mutable_sequence_name();
	string * release_sequence_name();
	void set_allocated_sequence_name(string *);
	bool has_cycle();
	void clear_cycle();
	float cycle();
	void set_cycle(float);
	int wearable_size();
	void clear_wearable();
	uint32 wearable(int);
	void set_wearable(int, uint32);
	void add_wearable(uint32);
	const RepeatedField<unsigned int> & wearable();
	RepeatedField<unsigned int> * mutable_wearable();
	bool has_inscription();
	void clear_inscription();
	const string & inscription();
	void set_inscription(const string &);
	void set_inscription(const char *);
	void set_inscription(const char *, size_t);
	string * mutable_inscription();
	string * release_inscription();
	void set_allocated_inscription(string *);
	int style_size();
	void clear_style();
	uint32 style(int);
	void set_style(int, uint32);
	void add_style(uint32);
	const RepeatedField<unsigned int> & style();
	RepeatedField<unsigned int> * mutable_style();
	bool has_tournament_drop();
	void clear_tournament_drop();
	bool tournament_drop();
	void set_tournament_drop(bool);
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_status_effect_index();
	void clear_has_status_effect_index();
	void set_has_sequence_name();
	void clear_has_sequence_name();
	void set_has_cycle();
	void clear_has_cycle();
	void set_has_inscription();
	void clear_has_inscription();
	void set_has_tournament_drop();
	void clear_has_tournament_drop();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 88
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:1987
class CProtoItemTeamShowcase : public Message {
public:

	static const int kHeroIdFieldNumber = 1;
	static const int kStatusEffectIndexFieldNumber = 2;
	static const int kSequenceNameFieldNumber = 3;
	static const int kCycleFieldNumber = 4;
	static const int kWearableFieldNumber = 5;
	static const int kInscriptionFieldNumber = 6;
	static const int kStyleFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 hero_id_;  // +0x18
	uint32 status_effect_index_;  // +0x1c
	string * sequence_name_;  // +0x20
	string * inscription_;  // +0x38
	float cycle_;  // +0x50

	static CProtoItemTeamShowcase * default_instance_;
	CProtoItemTeamShowcase();
	virtual ~CProtoItemTeamShowcase();
	CProtoItemTeamShowcase(const CProtoItemTeamShowcase &);
	CProtoItemTeamShowcase & operator=(const CProtoItemTeamShowcase &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CProtoItemTeamShowcase & default_instance();
	void Swap(CProtoItemTeamShowcase *);
	virtual CProtoItemTeamShowcase * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CProtoItemTeamShowcase &);
	void MergeFrom(const CProtoItemTeamShowcase &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	bool has_status_effect_index();
	void clear_status_effect_index();
	uint32 status_effect_index();
	void set_status_effect_index(uint32);
	bool has_sequence_name();
	void clear_sequence_name();
	const string & sequence_name();
	void set_sequence_name(const string &);
	void set_sequence_name(const char *);
	void set_sequence_name(const char *, size_t);
	string * mutable_sequence_name();
	string * release_sequence_name();
	void set_allocated_sequence_name(string *);
	bool has_cycle();
	void clear_cycle();
	float cycle();
	void set_cycle(float);
	int wearable_size();
	void clear_wearable();
	uint32 wearable(int);
	void set_wearable(int, uint32);
	void add_wearable(uint32);
	const RepeatedField<unsigned int> & wearable();
	RepeatedField<unsigned int> * mutable_wearable();
	bool has_inscription();
	void clear_inscription();
	const string & inscription();
	void set_inscription(const string &);
	void set_inscription(const char *);
	void set_inscription(const char *, size_t);
	string * mutable_inscription();
	string * release_inscription();
	void set_allocated_inscription(string *);
	int style_size();
	void clear_style();
	uint32 style(int);
	void set_style(int, uint32);
	void add_style(uint32);
	const RepeatedField<unsigned int> & style();
	RepeatedField<unsigned int> * mutable_style();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_status_effect_index();
	void clear_has_status_effect_index();
	void set_has_sequence_name();
	void clear_has_sequence_name();
	void set_has_cycle();
	void clear_has_cycle();
	void set_has_inscription();
	void clear_has_inscription();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 88
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2142
class CMatchPlayerAbilityUpgrade : public Message {
public:

	static const int kAbilityFieldNumber = 1;
	static const int kTimeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ability_;  // +0x18
	uint32 time_;  // +0x1c

	static CMatchPlayerAbilityUpgrade * default_instance_;
	CMatchPlayerAbilityUpgrade();
	virtual ~CMatchPlayerAbilityUpgrade();
	CMatchPlayerAbilityUpgrade(const CMatchPlayerAbilityUpgrade &);
	CMatchPlayerAbilityUpgrade & operator=(const CMatchPlayerAbilityUpgrade &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMatchPlayerAbilityUpgrade & default_instance();
	void Swap(CMatchPlayerAbilityUpgrade *);
	virtual CMatchPlayerAbilityUpgrade * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMatchPlayerAbilityUpgrade &);
	void MergeFrom(const CMatchPlayerAbilityUpgrade &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_ability();
	void clear_ability();
	uint32 ability();
	void set_ability(uint32);
	bool has_time();
	void clear_time();
	uint32 time();
	void set_time(uint32);
	void set_has_ability();
	void clear_has_ability();
	void set_has_time();
	void clear_has_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2231
class CMatchAdditionalUnitInventory : public Message {
public:

	static const int kUnitNameFieldNumber = 1;
	static const int kItemsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * unit_name_;  // +0x18

	static CMatchAdditionalUnitInventory * default_instance_;
	CMatchAdditionalUnitInventory();
	virtual ~CMatchAdditionalUnitInventory();
	CMatchAdditionalUnitInventory(const CMatchAdditionalUnitInventory &);
	CMatchAdditionalUnitInventory & operator=(const CMatchAdditionalUnitInventory &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMatchAdditionalUnitInventory & default_instance();
	void Swap(CMatchAdditionalUnitInventory *);
	virtual CMatchAdditionalUnitInventory * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMatchAdditionalUnitInventory &);
	void MergeFrom(const CMatchAdditionalUnitInventory &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_unit_name();
	void clear_unit_name();
	const string & unit_name();
	void set_unit_name(const string &);
	void set_unit_name(const char *);
	void set_unit_name(const char *, size_t);
	string * mutable_unit_name();
	string * release_unit_name();
	void set_allocated_unit_name(string *);
	int items_size();
	void clear_items();
	uint32 items(int);
	void set_items(int, uint32);
	void add_items(uint32);
	const RepeatedField<unsigned int> & items();
	RepeatedField<unsigned int> * mutable_items();
	void set_has_unit_name();
	void clear_has_unit_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2328
class CMatchPlayerPermanentBuff : public Message {
public:

	static const int kPermanentBuffFieldNumber = 1;
	static const int kStackCountFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 permanent_buff_;  // +0x18
	uint32 stack_count_;  // +0x1c

	static CMatchPlayerPermanentBuff * default_instance_;
	CMatchPlayerPermanentBuff();
	virtual ~CMatchPlayerPermanentBuff();
	CMatchPlayerPermanentBuff(const CMatchPlayerPermanentBuff &);
	CMatchPlayerPermanentBuff & operator=(const CMatchPlayerPermanentBuff &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMatchPlayerPermanentBuff & default_instance();
	void Swap(CMatchPlayerPermanentBuff *);
	virtual CMatchPlayerPermanentBuff * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMatchPlayerPermanentBuff &);
	void MergeFrom(const CMatchPlayerPermanentBuff &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_permanent_buff();
	void clear_permanent_buff();
	uint32 permanent_buff();
	void set_permanent_buff(uint32);
	bool has_stack_count();
	void clear_stack_count();
	uint32 stack_count();
	void set_stack_count(uint32);
	void set_has_permanent_buff();
	void clear_has_permanent_buff();
	void set_has_stack_count();
	void clear_has_stack_count();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2417
class CMatchHeroSelectEvent : public Message {
public:

	static const int kIsPickFieldNumber = 1;
	static const int kTeamFieldNumber = 2;
	static const int kHeroIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool is_pick_;  // +0x18

	uint32 team_;  // +0x1c
	uint32 hero_id_;  // +0x20

	static CMatchHeroSelectEvent * default_instance_;
	CMatchHeroSelectEvent();
	virtual ~CMatchHeroSelectEvent();
	CMatchHeroSelectEvent(const CMatchHeroSelectEvent &);
	CMatchHeroSelectEvent & operator=(const CMatchHeroSelectEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMatchHeroSelectEvent & default_instance();
	void Swap(CMatchHeroSelectEvent *);
	virtual CMatchHeroSelectEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMatchHeroSelectEvent &);
	void MergeFrom(const CMatchHeroSelectEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_is_pick();
	void clear_is_pick();
	bool is_pick();
	void set_is_pick(bool);
	bool has_team();
	void clear_team();
	uint32 team();
	void set_team(uint32);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	void set_has_is_pick();
	void clear_has_is_pick();
	void set_has_team();
	void clear_has_team();
	void set_has_hero_id();
	void clear_has_hero_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2516
class CMsgDOTAProcessFantasyScheduledEvent : public Message {
public:

	static const int kEventFieldNumber = 1;
	static const int kTimestampFieldNumber = 2;
	static const int kFantasyLeagueIdFieldNumber = 3;
	static const int kSeasonFieldNumber = 4;
	static const int kReferenceDataFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_;  // +0x18
	uint32 timestamp_;  // +0x1c
	uint32 fantasy_league_id_;  // +0x20
	uint32 season_;  // +0x24
	uint32 reference_data_;  // +0x28

	static CMsgDOTAProcessFantasyScheduledEvent * default_instance_;
	CMsgDOTAProcessFantasyScheduledEvent();
	virtual ~CMsgDOTAProcessFantasyScheduledEvent();
	CMsgDOTAProcessFantasyScheduledEvent(const CMsgDOTAProcessFantasyScheduledEvent &);
	CMsgDOTAProcessFantasyScheduledEvent & operator=(const CMsgDOTAProcessFantasyScheduledEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAProcessFantasyScheduledEvent & default_instance();
	void Swap(CMsgDOTAProcessFantasyScheduledEvent *);
	virtual CMsgDOTAProcessFantasyScheduledEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAProcessFantasyScheduledEvent &);
	void MergeFrom(const CMsgDOTAProcessFantasyScheduledEvent &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_event();
	void clear_event();
	uint32 event();
	void set_event(uint32);
	bool has_timestamp();
	void clear_timestamp();
	uint32 timestamp();
	void set_timestamp(uint32);
	bool has_fantasy_league_id();
	void clear_fantasy_league_id();
	uint32 fantasy_league_id();
	void set_fantasy_league_id(uint32);
	bool has_season();
	void clear_season();
	uint32 season();
	void set_season(uint32);
	bool has_reference_data();
	void clear_reference_data();
	uint32 reference_data();
	void set_reference_data(uint32);
	void set_has_event();
	void clear_has_event();
	void set_has_timestamp();
	void clear_has_timestamp();
	void set_has_fantasy_league_id();
	void clear_has_fantasy_league_id();
	void set_has_season();
	void clear_has_season();
	void set_has_reference_data();
	void clear_has_reference_data();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2635
class CMsgDOTAHasItemQuery : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 account_id_;  // +0x20

	static CMsgDOTAHasItemQuery * default_instance_;
	CMsgDOTAHasItemQuery();
	virtual ~CMsgDOTAHasItemQuery();
	CMsgDOTAHasItemQuery(const CMsgDOTAHasItemQuery &);
	CMsgDOTAHasItemQuery & operator=(const CMsgDOTAHasItemQuery &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAHasItemQuery & default_instance();
	void Swap(CMsgDOTAHasItemQuery *);
	virtual CMsgDOTAHasItemQuery * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAHasItemQuery &);
	void MergeFrom(const CMsgDOTAHasItemQuery &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2724
class CMsgDOTAHasItemResponse : public Message {
public:

	static const int kHasItemFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool has_item_;  // +0x18

	static CMsgDOTAHasItemResponse * default_instance_;
	CMsgDOTAHasItemResponse();
	virtual ~CMsgDOTAHasItemResponse();
	CMsgDOTAHasItemResponse(const CMsgDOTAHasItemResponse &);
	CMsgDOTAHasItemResponse & operator=(const CMsgDOTAHasItemResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAHasItemResponse & default_instance();
	void Swap(CMsgDOTAHasItemResponse *);
	virtual CMsgDOTAHasItemResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAHasItemResponse &);
	void MergeFrom(const CMsgDOTAHasItemResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_has_item();
	void clear_has_item();
	bool has_item();
	void set_has_item(bool);
	void set_has_has_item();
	void clear_has_has_item();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2803
class CMsgGCIsProQuery : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18

	static CMsgGCIsProQuery * default_instance_;
	CMsgGCIsProQuery();
	virtual ~CMsgGCIsProQuery();
	CMsgGCIsProQuery(const CMsgGCIsProQuery &);
	CMsgGCIsProQuery & operator=(const CMsgGCIsProQuery &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCIsProQuery & default_instance();
	void Swap(CMsgGCIsProQuery *);
	virtual CMsgGCIsProQuery * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCIsProQuery &);
	void MergeFrom(const CMsgGCIsProQuery &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2882
class CMsgGCIsProResponse : public Message {
public:

	static const int kIsProFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool is_pro_;  // +0x18

	static CMsgGCIsProResponse * default_instance_;
	CMsgGCIsProResponse();
	virtual ~CMsgGCIsProResponse();
	CMsgGCIsProResponse(const CMsgGCIsProResponse &);
	CMsgGCIsProResponse & operator=(const CMsgGCIsProResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCIsProResponse & default_instance();
	void Swap(CMsgGCIsProResponse *);
	virtual CMsgGCIsProResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCIsProResponse &);
	void MergeFrom(const CMsgGCIsProResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_is_pro();
	void clear_is_pro();
	bool is_pro();
	void set_is_pro(bool);
	void set_has_is_pro();
	void clear_has_is_pro();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:2961
class CMsgDOTAHasItemDefsQuery : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kItemdefIdsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x28

	static CMsgDOTAHasItemDefsQuery * default_instance_;
	CMsgDOTAHasItemDefsQuery();
	virtual ~CMsgDOTAHasItemDefsQuery();
	CMsgDOTAHasItemDefsQuery(const CMsgDOTAHasItemDefsQuery &);
	CMsgDOTAHasItemDefsQuery & operator=(const CMsgDOTAHasItemDefsQuery &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAHasItemDefsQuery & default_instance();
	void Swap(CMsgDOTAHasItemDefsQuery *);
	virtual CMsgDOTAHasItemDefsQuery * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAHasItemDefsQuery &);
	void MergeFrom(const CMsgDOTAHasItemDefsQuery &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	int itemdef_ids_size();
	void clear_itemdef_ids();
	uint32 itemdef_ids(int);
	void set_itemdef_ids(int, uint32);
	void add_itemdef_ids(uint32);
	const RepeatedField<unsigned int> & itemdef_ids();
	RepeatedField<unsigned int> * mutable_itemdef_ids();
	void set_has_account_id();
	void clear_has_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3053
class CMsgDOTAHasItemDefsResponse : public Message {
public:

	static const int kHasItemsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool has_items_;  // +0x18

	static CMsgDOTAHasItemDefsResponse * default_instance_;
	CMsgDOTAHasItemDefsResponse();
	virtual ~CMsgDOTAHasItemDefsResponse();
	CMsgDOTAHasItemDefsResponse(const CMsgDOTAHasItemDefsResponse &);
	CMsgDOTAHasItemDefsResponse & operator=(const CMsgDOTAHasItemDefsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAHasItemDefsResponse & default_instance();
	void Swap(CMsgDOTAHasItemDefsResponse *);
	virtual CMsgDOTAHasItemDefsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAHasItemDefsResponse &);
	void MergeFrom(const CMsgDOTAHasItemDefsResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_has_items();
	void clear_has_items();
	bool has_items();
	void set_has_items(bool);
	void set_has_has_items();
	void clear_has_has_items();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3132
class CMsgGCGetPlayerCardItemInfo : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPlayerCardItemIdsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x28

	static CMsgGCGetPlayerCardItemInfo * default_instance_;
	CMsgGCGetPlayerCardItemInfo();
	virtual ~CMsgGCGetPlayerCardItemInfo();
	CMsgGCGetPlayerCardItemInfo(const CMsgGCGetPlayerCardItemInfo &);
	CMsgGCGetPlayerCardItemInfo & operator=(const CMsgGCGetPlayerCardItemInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetPlayerCardItemInfo & default_instance();
	void Swap(CMsgGCGetPlayerCardItemInfo *);
	virtual CMsgGCGetPlayerCardItemInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetPlayerCardItemInfo &);
	void MergeFrom(const CMsgGCGetPlayerCardItemInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	int player_card_item_ids_size();
	void clear_player_card_item_ids();
	uint64 player_card_item_ids(int);
	void set_player_card_item_ids(int, uint64);
	void add_player_card_item_ids(uint64);
	const RepeatedField<long unsigned int> & player_card_item_ids();
	RepeatedField<long unsigned int> * mutable_player_card_item_ids();
	void set_has_account_id();
	void clear_has_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3224
class CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo : public Message {
public:

	static const int kPlayerCardItemIdFieldNumber = 1;
	static const int kAccountIdFieldNumber = 2;
	static const int kPackedBonusesFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 player_card_item_id_;  // +0x18
	uint64 packed_bonuses_;  // +0x20
	uint32 account_id_;  // +0x28

	static CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo * default_instance_;
	CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo();
	virtual ~CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo();
	CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo(const CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo &);
	CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo & operator=(const CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo & default_instance();
	void Swap(CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo *);
	virtual CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo &);
	void MergeFrom(const CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_player_card_item_id();
	void clear_player_card_item_id();
	uint64 player_card_item_id();
	void set_player_card_item_id(uint64);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_packed_bonuses();
	void clear_packed_bonuses();
	uint64 packed_bonuses();
	void set_packed_bonuses(uint64);
	void set_has_player_card_item_id();
	void clear_has_player_card_item_id();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_packed_bonuses();
	void clear_has_packed_bonuses();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3323
class CMsgGCGetPlayerCardItemInfoResponse : public Message {
public:

	static const int kPlayerCardInfosFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCGetPlayerCardItemInfoResponse * default_instance_;
	CMsgGCGetPlayerCardItemInfoResponse();
	virtual ~CMsgGCGetPlayerCardItemInfoResponse();
	CMsgGCGetPlayerCardItemInfoResponse(const CMsgGCGetPlayerCardItemInfoResponse &);
	CMsgGCGetPlayerCardItemInfoResponse & operator=(const CMsgGCGetPlayerCardItemInfoResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGetPlayerCardItemInfoResponse & default_instance();
	void Swap(CMsgGCGetPlayerCardItemInfoResponse *);
	virtual CMsgGCGetPlayerCardItemInfoResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGetPlayerCardItemInfoResponse &);
	void MergeFrom(const CMsgGCGetPlayerCardItemInfoResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int player_card_infos_size();
	void clear_player_card_infos();
	const CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo & player_card_infos(int);
	CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo * mutable_player_card_infos(int);
	CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo * add_player_card_infos();
	const RepeatedPtrField<CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo> & player_card_infos();
	RepeatedPtrField<CMsgGCGetPlayerCardItemInfoResponse_PlayerCardInfo> * mutable_player_card_infos();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3407
class CMsgGCToGCFantasySetMatchLeague : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kLeagueIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 league_id_;  // +0x20

	static CMsgGCToGCFantasySetMatchLeague * default_instance_;
	CMsgGCToGCFantasySetMatchLeague();
	virtual ~CMsgGCToGCFantasySetMatchLeague();
	CMsgGCToGCFantasySetMatchLeague(const CMsgGCToGCFantasySetMatchLeague &);
	CMsgGCToGCFantasySetMatchLeague & operator=(const CMsgGCToGCFantasySetMatchLeague &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToGCFantasySetMatchLeague & default_instance();
	void Swap(CMsgGCToGCFantasySetMatchLeague *);
	virtual CMsgGCToGCFantasySetMatchLeague * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToGCFantasySetMatchLeague &);
	void MergeFrom(const CMsgGCToGCFantasySetMatchLeague &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_league_id();
	void clear_has_league_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3496
class CSODOTAMapLocationState : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kLocationIdFieldNumber = 2;
	static const int kCompletedFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	int32 location_id_;  // +0x1c
	bool completed_;  // +0x20

	static CSODOTAMapLocationState * default_instance_;
	CSODOTAMapLocationState();
	virtual ~CSODOTAMapLocationState();
	CSODOTAMapLocationState(const CSODOTAMapLocationState &);
	CSODOTAMapLocationState & operator=(const CSODOTAMapLocationState &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTAMapLocationState & default_instance();
	void Swap(CSODOTAMapLocationState *);
	virtual CSODOTAMapLocationState * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTAMapLocationState &);
	void MergeFrom(const CSODOTAMapLocationState &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_location_id();
	void clear_location_id();
	int32 location_id();
	void set_location_id(int32);
	bool has_completed();
	void clear_completed();
	bool completed();
	void set_completed(bool);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_location_id();
	void clear_has_location_id();
	void set_has_completed();
	void clear_has_completed();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3595
class CMsgLeagueAdminList : public Message {
public:

	static const int kAccountIdsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgLeagueAdminList * default_instance_;
	CMsgLeagueAdminList();
	virtual ~CMsgLeagueAdminList();
	CMsgLeagueAdminList(const CMsgLeagueAdminList &);
	CMsgLeagueAdminList & operator=(const CMsgLeagueAdminList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLeagueAdminList & default_instance();
	void Swap(CMsgLeagueAdminList *);
	virtual CMsgLeagueAdminList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLeagueAdminList &);
	void MergeFrom(const CMsgLeagueAdminList &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int account_ids_size();
	void clear_account_ids();
	uint32 account_ids(int);
	void set_account_ids(int, uint32);
	void add_account_ids(uint32);
	const RepeatedField<unsigned int> & account_ids();
	RepeatedField<unsigned int> * mutable_account_ids();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3677
class CCompendiumTimestampedData : public Message {
public:

	static const int kGameTimeFieldNumber = 1;
	static const int kGpmFieldNumber = 2;
	static const int kXpmFieldNumber = 3;
	static const int kKillsFieldNumber = 4;
	static const int kDeathsFieldNumber = 5;
	static const int kItemPurchasesFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 game_time_;  // +0x18
	uint32 gpm_;  // +0x1c
	uint32 xpm_;  // +0x20
	uint32 kills_;  // +0x24
	uint32 deaths_;  // +0x38

	static CCompendiumTimestampedData * default_instance_;
	CCompendiumTimestampedData();
	virtual ~CCompendiumTimestampedData();
	CCompendiumTimestampedData(const CCompendiumTimestampedData &);
	CCompendiumTimestampedData & operator=(const CCompendiumTimestampedData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCompendiumTimestampedData & default_instance();
	void Swap(CCompendiumTimestampedData *);
	virtual CCompendiumTimestampedData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCompendiumTimestampedData &);
	void MergeFrom(const CCompendiumTimestampedData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_game_time();
	void clear_game_time();
	uint32 game_time();
	void set_game_time(uint32);
	bool has_gpm();
	void clear_gpm();
	uint32 gpm();
	void set_gpm(uint32);
	bool has_xpm();
	void clear_xpm();
	uint32 xpm();
	void set_xpm(uint32);
	bool has_kills();
	void clear_kills();
	uint32 kills();
	void set_kills(uint32);
	bool has_deaths();
	void clear_deaths();
	uint32 deaths();
	void set_deaths(uint32);
	int item_purchases_size();
	void clear_item_purchases();
	uint32 item_purchases(int);
	void set_item_purchases(int, uint32);
	void add_item_purchases(uint32);
	const RepeatedField<unsigned int> & item_purchases();
	RepeatedField<unsigned int> * mutable_item_purchases();
	void set_has_game_time();
	void clear_has_game_time();
	void set_has_gpm();
	void clear_has_gpm();
	void set_has_xpm();
	void clear_has_xpm();
	void set_has_kills();
	void clear_has_kills();
	void set_has_deaths();
	void clear_has_deaths();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3809
class CCompendiumGameTimeline : public Message {
public:

	static const int kDataFieldNumber = 1;
	static const int kTagsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CCompendiumGameTimeline * default_instance_;
	CCompendiumGameTimeline();
	virtual ~CCompendiumGameTimeline();
	CCompendiumGameTimeline(const CCompendiumGameTimeline &);
	CCompendiumGameTimeline & operator=(const CCompendiumGameTimeline &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCompendiumGameTimeline & default_instance();
	void Swap(CCompendiumGameTimeline *);
	virtual CCompendiumGameTimeline * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCompendiumGameTimeline &);
	void MergeFrom(const CCompendiumGameTimeline &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int data_size();
	void clear_data();
	const CCompendiumTimestampedData & data(int);
	CCompendiumTimestampedData * mutable_data(int);
	CCompendiumTimestampedData * add_data();
	const RepeatedPtrField<CCompendiumTimestampedData> & data();
	RepeatedPtrField<CCompendiumTimestampedData> * mutable_data();
	int tags_size();
	void clear_tags();
	const string & tags(int);
	string * mutable_tags(int);
	void set_tags(int, const string &);
	void set_tags(int, const char *);
	void set_tags(int, const char *, size_t);
	string * add_tags();
	void add_tags(const string &);
	void add_tags(const char *);
	void add_tags(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & tags();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_tags();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3908
class CCompendiumGameList : public Message {
public:

	static const int kGamesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CCompendiumGameList * default_instance_;
	CCompendiumGameList();
	virtual ~CCompendiumGameList();
	CCompendiumGameList(const CCompendiumGameList &);
	CCompendiumGameList & operator=(const CCompendiumGameList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CCompendiumGameList & default_instance();
	void Swap(CCompendiumGameList *);
	virtual CCompendiumGameList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CCompendiumGameList &);
	void MergeFrom(const CCompendiumGameList &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int games_size();
	void clear_games();
	const CCompendiumGameTimeline & games(int);
	CCompendiumGameTimeline * mutable_games(int);
	CCompendiumGameTimeline * add_games();
	const RepeatedPtrField<CCompendiumGameTimeline> & games();
	RepeatedPtrField<CCompendiumGameTimeline> * mutable_games();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:3990
class CAdditionalEquipSlot : public Message {
public:

	static const int kClassIdFieldNumber = 1;
	static const int kSlotIdFieldNumber = 2;
	static const int kDefIndexFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 class_id_;  // +0x18
	uint32 slot_id_;  // +0x1c
	uint32 def_index_;  // +0x20

	static CAdditionalEquipSlot * default_instance_;
	CAdditionalEquipSlot();
	virtual ~CAdditionalEquipSlot();
	CAdditionalEquipSlot(const CAdditionalEquipSlot &);
	CAdditionalEquipSlot & operator=(const CAdditionalEquipSlot &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CAdditionalEquipSlot & default_instance();
	void Swap(CAdditionalEquipSlot *);
	virtual CAdditionalEquipSlot * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CAdditionalEquipSlot &);
	void MergeFrom(const CAdditionalEquipSlot &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_class_id();
	void clear_class_id();
	uint32 class_id();
	void set_class_id(uint32);
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	bool has_def_index();
	void clear_def_index();
	uint32 def_index();
	void set_def_index(uint32);
	void set_has_class_id();
	void clear_has_class_id();
	void set_has_slot_id();
	void clear_has_slot_id();
	void set_has_def_index();
	void clear_has_def_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:4089
class CMsgDOTACombatLogEntry : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kTargetNameFieldNumber = 2;
	static const int kTargetSourceNameFieldNumber = 3;
	static const int kAttackerNameFieldNumber = 4;
	static const int kDamageSourceNameFieldNumber = 5;
	static const int kInflictorNameFieldNumber = 6;
	static const int kIsAttackerIllusionFieldNumber = 7;
	static const int kIsAttackerHeroFieldNumber = 8;
	static const int kIsTargetIllusionFieldNumber = 9;
	static const int kIsTargetHeroFieldNumber = 10;
	static const int kIsVisibleRadiantFieldNumber = 11;
	static const int kIsVisibleDireFieldNumber = 12;
	static const int kValueFieldNumber = 13;
	static const int kHealthFieldNumber = 14;
	static const int kTimestampFieldNumber = 15;
	static const int kStunDurationFieldNumber = 16;
	static const int kSlowDurationFieldNumber = 17;
	static const int kIsAbilityToggleOnFieldNumber = 18;
	static const int kIsAbilityToggleOffFieldNumber = 19;
	static const int kAbilityLevelFieldNumber = 20;
	static const int kLocationXFieldNumber = 21;
	static const int kLocationYFieldNumber = 22;
	static const int kGoldReasonFieldNumber = 23;
	static const int kTimestampRawFieldNumber = 24;
	static const int kModifierDurationFieldNumber = 25;
	static const int kXpReasonFieldNumber = 26;
	static const int kLastHitsFieldNumber = 27;
	static const int kAttackerTeamFieldNumber = 28;
	static const int kTargetTeamFieldNumber = 29;
	static const int kObsWardsPlacedFieldNumber = 30;
	static const int kAssistPlayer0FieldNumber = 31;
	static const int kAssistPlayer1FieldNumber = 32;
	static const int kAssistPlayer2FieldNumber = 33;
	static const int kAssistPlayer3FieldNumber = 34;
	static const int kStackCountFieldNumber = 35;
	static const int kHiddenModifierFieldNumber = 36;
	static const int kIsTargetBuildingFieldNumber = 37;
	static const int kNeutralCampTypeFieldNumber = 38;
	static const int kRuneTypeFieldNumber = 39;
	static const int kAssistPlayersFieldNumber = 40;
	static const int kIsHealSaveFieldNumber = 41;
	static const int kIsUltimateAbilityFieldNumber = 42;
	static const int kAttackerHeroLevelFieldNumber = 43;
	static const int kTargetHeroLevelFieldNumber = 44;
	static const int kXpmFieldNumber = 45;
	static const int kGpmFieldNumber = 46;
	static const int kEventLocationFieldNumber = 47;
	static const int kTargetIsSelfFieldNumber = 48;
	static const int kDamageTypeFieldNumber = 49;
	static const int kInvisibilityModifierFieldNumber = 50;
	static const int kDamageCategoryFieldNumber = 51;
	static const int kNetworthFieldNumber = 52;
	static const int kBuildingTypeFieldNumber = 53;
	static const int kModifierElapsedDurationFieldNumber = 54;
	static const int kSilenceModifierFieldNumber = 55;
	static const int kHealFromLifestealFieldNumber = 56;
	static const int kModifierPurgedFieldNumber = 57;
	static const int kSpellEvadedFieldNumber = 58;
	static const int kMotionControllerModifierFieldNumber = 59;
	static const int kLongRangeKillFieldNumber = 60;
	static const int kModifierPurgeAbilityFieldNumber = 61;
	static const int kModifierPurgeNpcFieldNumber = 62;
private:

	unsigned int _has_bits_[2];  // +0x10
	int type_;  // +0x18
	uint32 target_name_;  // +0x1c
	uint32 target_source_name_;  // +0x20
	uint32 attacker_name_;  // +0x24
	uint32 damage_source_name_;  // +0x28
	uint32 inflictor_name_;  // +0x2c
	bool is_attacker_illusion_;  // +0x30
	bool is_attacker_hero_;  // +0x31
	bool is_target_illusion_;  // +0x32
	bool is_target_hero_;  // +0x33
	uint32 value_;  // +0x34
	int32 health_;  // +0x38
	float timestamp_;  // +0x3c
	bool is_visible_radiant_;  // +0x40
	bool is_visible_dire_;  // +0x41
	bool is_ability_toggle_on_;  // +0x42
	bool is_ability_toggle_off_;  // +0x43
	float stun_duration_;  // +0x44
	float slow_duration_;  // +0x48
	uint32 ability_level_;  // +0x4c
	float location_x_;  // +0x50
	float location_y_;  // +0x54
	uint32 gold_reason_;  // +0x58
	float timestamp_raw_;  // +0x5c
	float modifier_duration_;  // +0x60
	uint32 xp_reason_;  // +0x64
	uint32 last_hits_;  // +0x68
	uint32 attacker_team_;  // +0x6c
	uint32 target_team_;  // +0x70
	uint32 obs_wards_placed_;  // +0x74
	uint32 assist_player0_;  // +0x78
	uint32 assist_player1_;  // +0x7c
	uint32 assist_player2_;  // +0x80
	uint32 assist_player3_;  // +0x84
	uint32 stack_count_;  // +0x88
	uint32 neutral_camp_type_;  // +0x8c
	uint32 rune_type_;  // +0x90
	bool hidden_modifier_;  // +0x94
	bool is_target_building_;  // +0x95
	bool is_heal_save_;  // +0x96
	bool is_ultimate_ability_;  // +0x97
	uint32 attacker_hero_level_;  // +0xa8
	uint32 target_hero_level_;  // +0xac
	uint32 xpm_;  // +0xb0
	uint32 gpm_;  // +0xb4
	uint32 event_location_;  // +0xb8
	uint32 damage_type_;  // +0xbc
	uint32 damage_category_;  // +0xc0
	uint32 networth_;  // +0xc4
	bool target_is_self_;  // +0xc8
	bool invisibility_modifier_;  // +0xc9
	bool silence_modifier_;  // +0xca
	bool heal_from_lifesteal_;  // +0xcb
	uint32 building_type_;  // +0xcc
	float modifier_elapsed_duration_;  // +0xd0
	bool modifier_purged_;  // +0xd4
	bool spell_evaded_;  // +0xd5
	bool motion_controller_modifier_;  // +0xd6
	bool long_range_kill_;  // +0xd7
	uint32 modifier_purge_ability_;  // +0xd8
	uint32 modifier_purge_npc_;  // +0xdc
	int _cached_size_;  // +0xe0

	static CMsgDOTACombatLogEntry * default_instance_;
	CMsgDOTACombatLogEntry();
	virtual ~CMsgDOTACombatLogEntry();
	CMsgDOTACombatLogEntry(const CMsgDOTACombatLogEntry &);
	CMsgDOTACombatLogEntry & operator=(const CMsgDOTACombatLogEntry &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTACombatLogEntry & default_instance();
	void Swap(CMsgDOTACombatLogEntry *);
	virtual CMsgDOTACombatLogEntry * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTACombatLogEntry &);
	void MergeFrom(const CMsgDOTACombatLogEntry &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_type();
	void clear_type();
	DOTA_COMBATLOG_TYPES type();
	void set_type(DOTA_COMBATLOG_TYPES);
	bool has_target_name();
	void clear_target_name();
	uint32 target_name();
	void set_target_name(uint32);
	bool has_target_source_name();
	void clear_target_source_name();
	uint32 target_source_name();
	void set_target_source_name(uint32);
	bool has_attacker_name();
	void clear_attacker_name();
	uint32 attacker_name();
	void set_attacker_name(uint32);
	bool has_damage_source_name();
	void clear_damage_source_name();
	uint32 damage_source_name();
	void set_damage_source_name(uint32);
	bool has_inflictor_name();
	void clear_inflictor_name();
	uint32 inflictor_name();
	void set_inflictor_name(uint32);
	bool has_is_attacker_illusion();
	void clear_is_attacker_illusion();
	bool is_attacker_illusion();
	void set_is_attacker_illusion(bool);
	bool has_is_attacker_hero();
	void clear_is_attacker_hero();
	bool is_attacker_hero();
	void set_is_attacker_hero(bool);
	bool has_is_target_illusion();
	void clear_is_target_illusion();
	bool is_target_illusion();
	void set_is_target_illusion(bool);
	bool has_is_target_hero();
	void clear_is_target_hero();
	bool is_target_hero();
	void set_is_target_hero(bool);
	bool has_is_visible_radiant();
	void clear_is_visible_radiant();
	bool is_visible_radiant();
	void set_is_visible_radiant(bool);
	bool has_is_visible_dire();
	void clear_is_visible_dire();
	bool is_visible_dire();
	void set_is_visible_dire(bool);
	bool has_value();
	void clear_value();
	uint32 value();
	void set_value(uint32);
	bool has_health();
	void clear_health();
	int32 health();
	void set_health(int32);
	bool has_timestamp();
	void clear_timestamp();
	float timestamp();
	void set_timestamp(float);
	bool has_stun_duration();
	void clear_stun_duration();
	float stun_duration();
	void set_stun_duration(float);
	bool has_slow_duration();
	void clear_slow_duration();
	float slow_duration();
	void set_slow_duration(float);
	bool has_is_ability_toggle_on();
	void clear_is_ability_toggle_on();
	bool is_ability_toggle_on();
	void set_is_ability_toggle_on(bool);
	bool has_is_ability_toggle_off();
	void clear_is_ability_toggle_off();
	bool is_ability_toggle_off();
	void set_is_ability_toggle_off(bool);
	bool has_ability_level();
	void clear_ability_level();
	uint32 ability_level();
	void set_ability_level(uint32);
	bool has_location_x();
	void clear_location_x();
	float location_x();
	void set_location_x(float);
	bool has_location_y();
	void clear_location_y();
	float location_y();
	void set_location_y(float);
	bool has_gold_reason();
	void clear_gold_reason();
	uint32 gold_reason();
	void set_gold_reason(uint32);
	bool has_timestamp_raw();
	void clear_timestamp_raw();
	float timestamp_raw();
	void set_timestamp_raw(float);
	bool has_modifier_duration();
	void clear_modifier_duration();
	float modifier_duration();
	void set_modifier_duration(float);
	bool has_xp_reason();
	void clear_xp_reason();
	uint32 xp_reason();
	void set_xp_reason(uint32);
	bool has_last_hits();
	void clear_last_hits();
	uint32 last_hits();
	void set_last_hits(uint32);
	bool has_attacker_team();
	void clear_attacker_team();
	uint32 attacker_team();
	void set_attacker_team(uint32);
	bool has_target_team();
	void clear_target_team();
	uint32 target_team();
	void set_target_team(uint32);
	bool has_obs_wards_placed();
	void clear_obs_wards_placed();
	uint32 obs_wards_placed();
	void set_obs_wards_placed(uint32);
	bool has_assist_player0();
	void clear_assist_player0();
	uint32 assist_player0();
	void set_assist_player0(uint32);
	bool has_assist_player1();
	void clear_assist_player1();
	uint32 assist_player1();
	void set_assist_player1(uint32);
	bool has_assist_player2();
	void clear_assist_player2();
	uint32 assist_player2();
	void set_assist_player2(uint32);
	bool has_assist_player3();
	void clear_assist_player3();
	uint32 assist_player3();
	void set_assist_player3(uint32);
	bool has_stack_count();
	void clear_stack_count();
	uint32 stack_count();
	void set_stack_count(uint32);
	bool has_hidden_modifier();
	void clear_hidden_modifier();
	bool hidden_modifier();
	void set_hidden_modifier(bool);
	bool has_is_target_building();
	void clear_is_target_building();
	bool is_target_building();
	void set_is_target_building(bool);
	bool has_neutral_camp_type();
	void clear_neutral_camp_type();
	uint32 neutral_camp_type();
	void set_neutral_camp_type(uint32);
	bool has_rune_type();
	void clear_rune_type();
	uint32 rune_type();
	void set_rune_type(uint32);
	int assist_players_size();
	void clear_assist_players();
	uint32 assist_players(int);
	void set_assist_players(int, uint32);
	void add_assist_players(uint32);
	const RepeatedField<unsigned int> & assist_players();
	RepeatedField<unsigned int> * mutable_assist_players();
	bool has_is_heal_save();
	void clear_is_heal_save();
	bool is_heal_save();
	void set_is_heal_save(bool);
	bool has_is_ultimate_ability();
	void clear_is_ultimate_ability();
	bool is_ultimate_ability();
	void set_is_ultimate_ability(bool);
	bool has_attacker_hero_level();
	void clear_attacker_hero_level();
	uint32 attacker_hero_level();
	void set_attacker_hero_level(uint32);
	bool has_target_hero_level();
	void clear_target_hero_level();
	uint32 target_hero_level();
	void set_target_hero_level(uint32);
	bool has_xpm();
	void clear_xpm();
	uint32 xpm();
	void set_xpm(uint32);
	bool has_gpm();
	void clear_gpm();
	uint32 gpm();
	void set_gpm(uint32);
	bool has_event_location();
	void clear_event_location();
	uint32 event_location();
	void set_event_location(uint32);
	bool has_target_is_self();
	void clear_target_is_self();
	bool target_is_self();
	void set_target_is_self(bool);
	bool has_damage_type();
	void clear_damage_type();
	uint32 damage_type();
	void set_damage_type(uint32);
	bool has_invisibility_modifier();
	void clear_invisibility_modifier();
	bool invisibility_modifier();
	void set_invisibility_modifier(bool);
	bool has_damage_category();
	void clear_damage_category();
	uint32 damage_category();
	void set_damage_category(uint32);
	bool has_networth();
	void clear_networth();
	uint32 networth();
	void set_networth(uint32);
	bool has_building_type();
	void clear_building_type();
	uint32 building_type();
	void set_building_type(uint32);
	bool has_modifier_elapsed_duration();
	void clear_modifier_elapsed_duration();
	float modifier_elapsed_duration();
	void set_modifier_elapsed_duration(float);
	bool has_silence_modifier();
	void clear_silence_modifier();
	bool silence_modifier();
	void set_silence_modifier(bool);
	bool has_heal_from_lifesteal();
	void clear_heal_from_lifesteal();
	bool heal_from_lifesteal();
	void set_heal_from_lifesteal(bool);
	bool has_modifier_purged();
	void clear_modifier_purged();
	bool modifier_purged();
	void set_modifier_purged(bool);
	bool has_spell_evaded();
	void clear_spell_evaded();
	bool spell_evaded();
	void set_spell_evaded(bool);
	bool has_motion_controller_modifier();
	void clear_motion_controller_modifier();
	bool motion_controller_modifier();
	void set_motion_controller_modifier(bool);
	bool has_long_range_kill();
	void clear_long_range_kill();
	bool long_range_kill();
	void set_long_range_kill(bool);
	bool has_modifier_purge_ability();
	void clear_modifier_purge_ability();
	uint32 modifier_purge_ability();
	void set_modifier_purge_ability(uint32);
	bool has_modifier_purge_npc();
	void clear_modifier_purge_npc();
	uint32 modifier_purge_npc();
	void set_modifier_purge_npc(uint32);
	void set_has_type();
	void clear_has_type();
	void set_has_target_name();
	void clear_has_target_name();
	void set_has_target_source_name();
	void clear_has_target_source_name();
	void set_has_attacker_name();
	void clear_has_attacker_name();
	void set_has_damage_source_name();
	void clear_has_damage_source_name();
	void set_has_inflictor_name();
	void clear_has_inflictor_name();
	void set_has_is_attacker_illusion();
	void clear_has_is_attacker_illusion();
	void set_has_is_attacker_hero();
	void clear_has_is_attacker_hero();
	void set_has_is_target_illusion();
	void clear_has_is_target_illusion();
	void set_has_is_target_hero();
	void clear_has_is_target_hero();
	void set_has_is_visible_radiant();
	void clear_has_is_visible_radiant();
	void set_has_is_visible_dire();
	void clear_has_is_visible_dire();
	void set_has_value();
	void clear_has_value();
	void set_has_health();
	void clear_has_health();
	void set_has_timestamp();
	void clear_has_timestamp();
	void set_has_stun_duration();
	void clear_has_stun_duration();
	void set_has_slow_duration();
	void clear_has_slow_duration();
	void set_has_is_ability_toggle_on();
	void clear_has_is_ability_toggle_on();
	void set_has_is_ability_toggle_off();
	void clear_has_is_ability_toggle_off();
	void set_has_ability_level();
	void clear_has_ability_level();
	void set_has_location_x();
	void clear_has_location_x();
	void set_has_location_y();
	void clear_has_location_y();
	void set_has_gold_reason();
	void clear_has_gold_reason();
	void set_has_timestamp_raw();
	void clear_has_timestamp_raw();
	void set_has_modifier_duration();
	void clear_has_modifier_duration();
	void set_has_xp_reason();
	void clear_has_xp_reason();
	void set_has_last_hits();
	void clear_has_last_hits();
	void set_has_attacker_team();
	void clear_has_attacker_team();
	void set_has_target_team();
	void clear_has_target_team();
	void set_has_obs_wards_placed();
	void clear_has_obs_wards_placed();
	void set_has_assist_player0();
	void clear_has_assist_player0();
	void set_has_assist_player1();
	void clear_has_assist_player1();
	void set_has_assist_player2();
	void clear_has_assist_player2();
	void set_has_assist_player3();
	void clear_has_assist_player3();
	void set_has_stack_count();
	void clear_has_stack_count();
	void set_has_hidden_modifier();
	void clear_has_hidden_modifier();
	void set_has_is_target_building();
	void clear_has_is_target_building();
	void set_has_neutral_camp_type();
	void clear_has_neutral_camp_type();
	void set_has_rune_type();
	void clear_has_rune_type();
	void set_has_is_heal_save();
	void clear_has_is_heal_save();
	void set_has_is_ultimate_ability();
	void clear_has_is_ultimate_ability();
	void set_has_attacker_hero_level();
	void clear_has_attacker_hero_level();
	void set_has_target_hero_level();
	void clear_has_target_hero_level();
	void set_has_xpm();
	void clear_has_xpm();
	void set_has_gpm();
	void clear_has_gpm();
	void set_has_event_location();
	void clear_has_event_location();
	void set_has_target_is_self();
	void clear_has_target_is_self();
	void set_has_damage_type();
	void clear_has_damage_type();
	void set_has_invisibility_modifier();
	void clear_has_invisibility_modifier();
	void set_has_damage_category();
	void clear_has_damage_category();
	void set_has_networth();
	void clear_has_networth();
	void set_has_building_type();
	void clear_has_building_type();
	void set_has_modifier_elapsed_duration();
	void clear_has_modifier_elapsed_duration();
	void set_has_silence_modifier();
	void clear_has_silence_modifier();
	void set_has_heal_from_lifesteal();
	void clear_has_heal_from_lifesteal();
	void set_has_modifier_purged();
	void clear_has_modifier_purged();
	void set_has_spell_evaded();
	void clear_has_spell_evaded();
	void set_has_motion_controller_modifier();
	void clear_has_motion_controller_modifier();
	void set_has_long_range_kill();
	void clear_has_long_range_kill();
	void set_has_modifier_purge_ability();
	void clear_has_modifier_purge_ability();
	void set_has_modifier_purge_npc();
	void clear_has_modifier_purge_npc();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 232
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:4781
class CMsgDOTAProfileCard_Slot_Trophy : public Message {
public:

	static const int kTrophyIdFieldNumber = 1;
	static const int kTrophyScoreFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 trophy_id_;  // +0x18
	uint32 trophy_score_;  // +0x1c

	static CMsgDOTAProfileCard_Slot_Trophy * default_instance_;
	CMsgDOTAProfileCard_Slot_Trophy();
	virtual ~CMsgDOTAProfileCard_Slot_Trophy();
	CMsgDOTAProfileCard_Slot_Trophy(const CMsgDOTAProfileCard_Slot_Trophy &);
	CMsgDOTAProfileCard_Slot_Trophy & operator=(const CMsgDOTAProfileCard_Slot_Trophy &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAProfileCard_Slot_Trophy & default_instance();
	void Swap(CMsgDOTAProfileCard_Slot_Trophy *);
	virtual CMsgDOTAProfileCard_Slot_Trophy * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAProfileCard_Slot_Trophy &);
	void MergeFrom(const CMsgDOTAProfileCard_Slot_Trophy &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_trophy_id();
	void clear_trophy_id();
	uint32 trophy_id();
	void set_trophy_id(uint32);
	bool has_trophy_score();
	void clear_trophy_score();
	uint32 trophy_score();
	void set_trophy_score(uint32);
	void set_has_trophy_id();
	void clear_has_trophy_id();
	void set_has_trophy_score();
	void clear_has_trophy_score();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:4870
class CMsgDOTAProfileCard_Slot_Stat : public Message {
public:

	static const int kStatIdFieldNumber = 1;
	static const int kStatScoreFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int stat_id_;  // +0x18
	uint32 stat_score_;  // +0x1c

	static CMsgDOTAProfileCard_Slot_Stat * default_instance_;
	CMsgDOTAProfileCard_Slot_Stat();
	virtual ~CMsgDOTAProfileCard_Slot_Stat();
	CMsgDOTAProfileCard_Slot_Stat(const CMsgDOTAProfileCard_Slot_Stat &);
	CMsgDOTAProfileCard_Slot_Stat & operator=(const CMsgDOTAProfileCard_Slot_Stat &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAProfileCard_Slot_Stat & default_instance();
	void Swap(CMsgDOTAProfileCard_Slot_Stat *);
	virtual CMsgDOTAProfileCard_Slot_Stat * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAProfileCard_Slot_Stat &);
	void MergeFrom(const CMsgDOTAProfileCard_Slot_Stat &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_stat_id();
	void clear_stat_id();
	CMsgDOTAProfileCard_EStatID stat_id();
	void set_stat_id(CMsgDOTAProfileCard_EStatID);
	bool has_stat_score();
	void clear_stat_score();
	uint32 stat_score();
	void set_stat_score(uint32);
	void set_has_stat_id();
	void clear_has_stat_id();
	void set_has_stat_score();
	void clear_has_stat_score();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:4959
class CMsgDOTAProfileCard_Slot_Item : public Message {
public:

	static const int kSerializedItemFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * serialized_item_;  // +0x18
	uint64 item_id_;  // +0x20

	static CMsgDOTAProfileCard_Slot_Item * default_instance_;
	CMsgDOTAProfileCard_Slot_Item();
	virtual ~CMsgDOTAProfileCard_Slot_Item();
	CMsgDOTAProfileCard_Slot_Item(const CMsgDOTAProfileCard_Slot_Item &);
	CMsgDOTAProfileCard_Slot_Item & operator=(const CMsgDOTAProfileCard_Slot_Item &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAProfileCard_Slot_Item & default_instance();
	void Swap(CMsgDOTAProfileCard_Slot_Item *);
	virtual CMsgDOTAProfileCard_Slot_Item * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAProfileCard_Slot_Item &);
	void MergeFrom(const CMsgDOTAProfileCard_Slot_Item &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_serialized_item();
	void clear_serialized_item();
	const string & serialized_item();
	void set_serialized_item(const string &);
	void set_serialized_item(const char *);
	void set_serialized_item(const void *, size_t);
	string * mutable_serialized_item();
	string * release_serialized_item();
	void set_allocated_serialized_item(string *);
	bool has_item_id();
	void clear_item_id();
	uint64 item_id();
	void set_item_id(uint64);
	void set_has_serialized_item();
	void clear_has_serialized_item();
	void set_has_item_id();
	void clear_has_item_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:5053
class CMsgDOTAProfileCard_Slot_Hero : public Message {
public:

	static const int kHeroIdFieldNumber = 1;
	static const int kHeroWinsFieldNumber = 2;
	static const int kHeroLossesFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 hero_id_;  // +0x18
	uint32 hero_wins_;  // +0x1c
	uint32 hero_losses_;  // +0x20

	static CMsgDOTAProfileCard_Slot_Hero * default_instance_;
	CMsgDOTAProfileCard_Slot_Hero();
	virtual ~CMsgDOTAProfileCard_Slot_Hero();
	CMsgDOTAProfileCard_Slot_Hero(const CMsgDOTAProfileCard_Slot_Hero &);
	CMsgDOTAProfileCard_Slot_Hero & operator=(const CMsgDOTAProfileCard_Slot_Hero &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAProfileCard_Slot_Hero & default_instance();
	void Swap(CMsgDOTAProfileCard_Slot_Hero *);
	virtual CMsgDOTAProfileCard_Slot_Hero * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAProfileCard_Slot_Hero &);
	void MergeFrom(const CMsgDOTAProfileCard_Slot_Hero &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	bool has_hero_wins();
	void clear_hero_wins();
	uint32 hero_wins();
	void set_hero_wins(uint32);
	bool has_hero_losses();
	void clear_hero_losses();
	uint32 hero_losses();
	void set_hero_losses(uint32);
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_hero_wins();
	void clear_has_hero_wins();
	void set_has_hero_losses();
	void clear_has_hero_losses();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:5152
class CMsgDOTAProfileCard_Slot_Emoticon : public Message {
public:

	static const int kEmoticonIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 emoticon_id_;  // +0x18

	static CMsgDOTAProfileCard_Slot_Emoticon * default_instance_;
	CMsgDOTAProfileCard_Slot_Emoticon();
	virtual ~CMsgDOTAProfileCard_Slot_Emoticon();
	CMsgDOTAProfileCard_Slot_Emoticon(const CMsgDOTAProfileCard_Slot_Emoticon &);
	CMsgDOTAProfileCard_Slot_Emoticon & operator=(const CMsgDOTAProfileCard_Slot_Emoticon &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAProfileCard_Slot_Emoticon & default_instance();
	void Swap(CMsgDOTAProfileCard_Slot_Emoticon *);
	virtual CMsgDOTAProfileCard_Slot_Emoticon * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAProfileCard_Slot_Emoticon &);
	void MergeFrom(const CMsgDOTAProfileCard_Slot_Emoticon &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_emoticon_id();
	void clear_emoticon_id();
	uint32 emoticon_id();
	void set_emoticon_id(uint32);
	void set_has_emoticon_id();
	void clear_has_emoticon_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:5231
class CMsgDOTAProfileCard_Slot : public Message {
public:

	static const int kSlotIdFieldNumber = 1;
	static const int kTrophyFieldNumber = 2;
	static const int kStatFieldNumber = 3;
	static const int kItemFieldNumber = 4;
	static const int kHeroFieldNumber = 5;
	static const int kEmoticonFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 slot_id_;  // +0x40

	static CMsgDOTAProfileCard_Slot * default_instance_;
	CMsgDOTAProfileCard_Slot();
	virtual ~CMsgDOTAProfileCard_Slot();
	CMsgDOTAProfileCard_Slot(const CMsgDOTAProfileCard_Slot &);
	CMsgDOTAProfileCard_Slot & operator=(const CMsgDOTAProfileCard_Slot &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAProfileCard_Slot & default_instance();
	void Swap(CMsgDOTAProfileCard_Slot *);
	virtual CMsgDOTAProfileCard_Slot * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAProfileCard_Slot &);
	void MergeFrom(const CMsgDOTAProfileCard_Slot &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	bool has_trophy();
	void clear_trophy();
	const CMsgDOTAProfileCard_Slot_Trophy & trophy();
	CMsgDOTAProfileCard_Slot_Trophy * mutable_trophy();
	CMsgDOTAProfileCard_Slot_Trophy * release_trophy();
	void set_allocated_trophy(CMsgDOTAProfileCard_Slot_Trophy *);
	bool has_stat();
	void clear_stat();
	const CMsgDOTAProfileCard_Slot_Stat & stat();
	CMsgDOTAProfileCard_Slot_Stat * mutable_stat();
	CMsgDOTAProfileCard_Slot_Stat * release_stat();
	void set_allocated_stat(CMsgDOTAProfileCard_Slot_Stat *);
	bool has_item();
	void clear_item();
	const CMsgDOTAProfileCard_Slot_Item & item();
	CMsgDOTAProfileCard_Slot_Item * mutable_item();
	CMsgDOTAProfileCard_Slot_Item * release_item();
	void set_allocated_item(CMsgDOTAProfileCard_Slot_Item *);
	bool has_hero();
	void clear_hero();
	const CMsgDOTAProfileCard_Slot_Hero & hero();
	CMsgDOTAProfileCard_Slot_Hero * mutable_hero();
	CMsgDOTAProfileCard_Slot_Hero * release_hero();
	void set_allocated_hero(CMsgDOTAProfileCard_Slot_Hero *);
	bool has_emoticon();
	void clear_emoticon();
	const CMsgDOTAProfileCard_Slot_Emoticon & emoticon();
	CMsgDOTAProfileCard_Slot_Emoticon * mutable_emoticon();
	CMsgDOTAProfileCard_Slot_Emoticon * release_emoticon();
	void set_allocated_emoticon(CMsgDOTAProfileCard_Slot_Emoticon *);
	void set_has_slot_id();
	void clear_has_slot_id();
	void set_has_trophy();
	void clear_has_trophy();
	void set_has_stat();
	void clear_has_stat();
	void set_has_item();
	void clear_has_item();
	void set_has_hero();
	void clear_has_hero();
	void set_has_emoticon();
	void clear_has_emoticon();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:5376
class CMsgDOTAProfileCard : public Message {
public:

	static const CMsgDOTAProfileCard_EStatID k_eStat_SoloRank = 1;
	static const CMsgDOTAProfileCard_EStatID k_eStat_PartyRank = 2;
	static const CMsgDOTAProfileCard_EStatID k_eStat_Wins = 3;
	static const CMsgDOTAProfileCard_EStatID k_eStat_Commends = 4;
	static const CMsgDOTAProfileCard_EStatID k_eStat_GamesPlayed = 5;
	static const CMsgDOTAProfileCard_EStatID k_eStat_FirstMatchDate = 6;
	static const CMsgDOTAProfileCard_EStatID EStatID_MIN = 1;
	static const CMsgDOTAProfileCard_EStatID EStatID_MAX = 6;
	static const int EStatID_ARRAYSIZE = 7;
	static const int kAccountIdFieldNumber = 1;
	static const int kBackgroundDefIndexFieldNumber = 2;
	static const int kSlotsFieldNumber = 3;
	static const int kBadgePointsFieldNumber = 4;
	static const int kEventPointsFieldNumber = 5;
	static const int kEventIdFieldNumber = 6;
	static const int kRecentBattleCupVictoryFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 background_def_index_;  // +0x1c
	uint32 badge_points_;  // +0x38
	uint32 event_points_;  // +0x3c
	uint32 event_id_;  // +0x48

	static CMsgDOTAProfileCard * default_instance_;
	typedef CMsgDOTAProfileCard_EStatID EStatID;
	CMsgDOTAProfileCard();
	virtual ~CMsgDOTAProfileCard();
	CMsgDOTAProfileCard(const CMsgDOTAProfileCard &);
	CMsgDOTAProfileCard & operator=(const CMsgDOTAProfileCard &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAProfileCard & default_instance();
	void Swap(CMsgDOTAProfileCard *);
	virtual CMsgDOTAProfileCard * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAProfileCard &);
	void MergeFrom(const CMsgDOTAProfileCard &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EStatID_IsValid(int);
	const EnumDescriptor * EStatID_descriptor();
	const string & EStatID_Name(EStatID);
	bool EStatID_Parse(const string &, EStatID *);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_background_def_index();
	void clear_background_def_index();
	uint32 background_def_index();
	void set_background_def_index(uint32);
	int slots_size();
	void clear_slots();
	const CMsgDOTAProfileCard_Slot & slots(int);
	CMsgDOTAProfileCard_Slot * mutable_slots(int);
	CMsgDOTAProfileCard_Slot * add_slots();
	const RepeatedPtrField<CMsgDOTAProfileCard_Slot> & slots();
	RepeatedPtrField<CMsgDOTAProfileCard_Slot> * mutable_slots();
	bool has_badge_points();
	void clear_badge_points();
	uint32 badge_points();
	void set_badge_points(uint32);
	bool has_event_points();
	void clear_event_points();
	uint32 event_points();
	void set_event_points(uint32);
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_recent_battle_cup_victory();
	void clear_recent_battle_cup_victory();
	const CMsgBattleCupVictory & recent_battle_cup_victory();
	CMsgBattleCupVictory * mutable_recent_battle_cup_victory();
	CMsgBattleCupVictory * release_recent_battle_cup_victory();
	void set_allocated_recent_battle_cup_victory(CMsgBattleCupVictory *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_background_def_index();
	void clear_has_background_def_index();
	void set_has_badge_points();
	void clear_has_badge_points();
	void set_has_event_points();
	void clear_has_event_points();
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_recent_battle_cup_victory();
	void clear_has_recent_battle_cup_victory();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 80
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:5550
class CSODOTAPlayerChallenge : public Message {
public:

	static const CSODOTAPlayerChallenge_EFlags eFlag_InstantRerollUncompleted = 1;
	static const CSODOTAPlayerChallenge_EFlags eFlag_QuestChallenge = 2;
	static const CSODOTAPlayerChallenge_EFlags EFlags_MIN = 1;
	static const CSODOTAPlayerChallenge_EFlags EFlags_MAX = 2;
	static const int EFlags_ARRAYSIZE = 3;
	static const int kAccountIdFieldNumber = 1;
	static const int kEventIdFieldNumber = 2;
	static const int kSlotIdFieldNumber = 3;
	static const int kChallengeTypeFieldNumber = 4;
	static const int kIntParam0FieldNumber = 5;
	static const int kIntParam1FieldNumber = 6;
	static const int kCreatedTimeFieldNumber = 7;
	static const int kCompletedFieldNumber = 8;
	static const int kSequenceIdFieldNumber = 9;
	static const int kChallengeTierFieldNumber = 10;
	static const int kFlagsFieldNumber = 11;
	static const int kAttemptsFieldNumber = 12;
	static const int kCompleteLimitFieldNumber = 13;
	static const int kQuestRankFieldNumber = 14;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 event_id_;  // +0x1c
	uint32 slot_id_;  // +0x20
	uint32 challenge_type_;  // +0x24
	uint32 int_param_0_;  // +0x28
	uint32 int_param_1_;  // +0x2c
	uint32 created_time_;  // +0x30
	uint32 completed_;  // +0x34
	uint32 sequence_id_;  // +0x38
	uint32 challenge_tier_;  // +0x3c
	uint32 flags_;  // +0x40
	uint32 attempts_;  // +0x44
	uint32 complete_limit_;  // +0x48
	uint32 quest_rank_;  // +0x4c

	static CSODOTAPlayerChallenge * default_instance_;
	typedef CSODOTAPlayerChallenge_EFlags EFlags;
	CSODOTAPlayerChallenge();
	virtual ~CSODOTAPlayerChallenge();
	CSODOTAPlayerChallenge(const CSODOTAPlayerChallenge &);
	CSODOTAPlayerChallenge & operator=(const CSODOTAPlayerChallenge &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTAPlayerChallenge & default_instance();
	void Swap(CSODOTAPlayerChallenge *);
	virtual CSODOTAPlayerChallenge * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTAPlayerChallenge &);
	void MergeFrom(const CSODOTAPlayerChallenge &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EFlags_IsValid(int);
	const EnumDescriptor * EFlags_descriptor();
	const string & EFlags_Name(EFlags);
	bool EFlags_Parse(const string &, EFlags *);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_slot_id();
	void clear_slot_id();
	uint32 slot_id();
	void set_slot_id(uint32);
	bool has_challenge_type();
	void clear_challenge_type();
	uint32 challenge_type();
	void set_challenge_type(uint32);
	bool has_int_param_0();
	void clear_int_param_0();
	uint32 int_param_0();
	void set_int_param_0(uint32);
	bool has_int_param_1();
	void clear_int_param_1();
	uint32 int_param_1();
	void set_int_param_1(uint32);
	bool has_created_time();
	void clear_created_time();
	uint32 created_time();
	void set_created_time(uint32);
	bool has_completed();
	void clear_completed();
	uint32 completed();
	void set_completed(uint32);
	bool has_sequence_id();
	void clear_sequence_id();
	uint32 sequence_id();
	void set_sequence_id(uint32);
	bool has_challenge_tier();
	void clear_challenge_tier();
	uint32 challenge_tier();
	void set_challenge_tier(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_attempts();
	void clear_attempts();
	uint32 attempts();
	void set_attempts(uint32);
	bool has_complete_limit();
	void clear_complete_limit();
	uint32 complete_limit();
	void set_complete_limit(uint32);
	bool has_quest_rank();
	void clear_quest_rank();
	uint32 quest_rank();
	void set_quest_rank(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_slot_id();
	void clear_has_slot_id();
	void set_has_challenge_type();
	void clear_has_challenge_type();
	void set_has_int_param_0();
	void clear_has_int_param_0();
	void set_has_int_param_1();
	void clear_has_int_param_1();
	void set_has_created_time();
	void clear_has_created_time();
	void set_has_completed();
	void clear_has_completed();
	void set_has_sequence_id();
	void clear_has_sequence_id();
	void set_has_challenge_tier();
	void clear_has_challenge_tier();
	void set_has_flags();
	void clear_has_flags();
	void set_has_attempts();
	void clear_has_attempts();
	void set_has_complete_limit();
	void clear_has_complete_limit();
	void set_has_quest_rank();
	void clear_has_quest_rank();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 80
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:5783
class CMsgClientToGCRerollPlayerChallenge : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kSequenceIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x18
	uint32 sequence_id_;  // +0x1c

	static CMsgClientToGCRerollPlayerChallenge * default_instance_;
	CMsgClientToGCRerollPlayerChallenge();
	virtual ~CMsgClientToGCRerollPlayerChallenge();
	CMsgClientToGCRerollPlayerChallenge(const CMsgClientToGCRerollPlayerChallenge &);
	CMsgClientToGCRerollPlayerChallenge & operator=(const CMsgClientToGCRerollPlayerChallenge &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgClientToGCRerollPlayerChallenge & default_instance();
	void Swap(CMsgClientToGCRerollPlayerChallenge *);
	virtual CMsgClientToGCRerollPlayerChallenge * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgClientToGCRerollPlayerChallenge &);
	void MergeFrom(const CMsgClientToGCRerollPlayerChallenge &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_sequence_id();
	void clear_sequence_id();
	uint32 sequence_id();
	void set_sequence_id(uint32);
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_sequence_id();
	void clear_has_sequence_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:5872
class CMsgGCRerollPlayerChallengeResponse : public Message {
public:

	static const CMsgGCRerollPlayerChallengeResponse_EResult eResult_Success;
	static const CMsgGCRerollPlayerChallengeResponse_EResult eResult_Dropped = 1;
	static const CMsgGCRerollPlayerChallengeResponse_EResult eResult_NotFound = 2;
	static const CMsgGCRerollPlayerChallengeResponse_EResult eResult_CantReroll = 3;
	static const CMsgGCRerollPlayerChallengeResponse_EResult eResult_ServerError = 4;
	static const CMsgGCRerollPlayerChallengeResponse_EResult EResult_MIN;
	static const CMsgGCRerollPlayerChallengeResponse_EResult EResult_MAX = 4;
	static const int EResult_ARRAYSIZE = 5;
	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int result_;  // +0x18

	static CMsgGCRerollPlayerChallengeResponse * default_instance_;
	typedef CMsgGCRerollPlayerChallengeResponse_EResult EResult;
	CMsgGCRerollPlayerChallengeResponse();
	virtual ~CMsgGCRerollPlayerChallengeResponse();
	CMsgGCRerollPlayerChallengeResponse(const CMsgGCRerollPlayerChallengeResponse &);
	CMsgGCRerollPlayerChallengeResponse & operator=(const CMsgGCRerollPlayerChallengeResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCRerollPlayerChallengeResponse & default_instance();
	void Swap(CMsgGCRerollPlayerChallengeResponse *);
	virtual CMsgGCRerollPlayerChallengeResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCRerollPlayerChallengeResponse &);
	void MergeFrom(const CMsgGCRerollPlayerChallengeResponse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool EResult_IsValid(int);
	const EnumDescriptor * EResult_descriptor();
	const string & EResult_Name(EResult);
	bool EResult_Parse(const string &, EResult *);
	bool has_result();
	void clear_result();
	CMsgGCRerollPlayerChallengeResponse_EResult result();
	void set_result(CMsgGCRerollPlayerChallengeResponse_EResult);
	void set_has_result();
	void clear_has_result();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:5978
class CMsgGCTopCustomGamesList : public Message {
public:

	static const int kTopCustomGamesFieldNumber = 1;
	static const int kGameOfTheDayFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 game_of_the_day_;  // +0x28

	static CMsgGCTopCustomGamesList * default_instance_;
	CMsgGCTopCustomGamesList();
	virtual ~CMsgGCTopCustomGamesList();
	CMsgGCTopCustomGamesList(const CMsgGCTopCustomGamesList &);
	CMsgGCTopCustomGamesList & operator=(const CMsgGCTopCustomGamesList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCTopCustomGamesList & default_instance();
	void Swap(CMsgGCTopCustomGamesList *);
	virtual CMsgGCTopCustomGamesList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCTopCustomGamesList &);
	void MergeFrom(const CMsgGCTopCustomGamesList &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int top_custom_games_size();
	void clear_top_custom_games();
	uint64 top_custom_games(int);
	void set_top_custom_games(int, uint64);
	void add_top_custom_games(uint64);
	const RepeatedField<long unsigned int> & top_custom_games();
	RepeatedField<long unsigned int> * mutable_top_custom_games();
	bool has_game_of_the_day();
	void clear_game_of_the_day();
	uint64 game_of_the_day();
	void set_game_of_the_day(uint64);
	void set_has_game_of_the_day();
	void clear_has_game_of_the_day();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:6070
class CMsgDOTARealtimeGameStats_TeamDetails : public Message {
public:

	static const int kTeamNumberFieldNumber = 1;
	static const int kTeamIdFieldNumber = 2;
	static const int kTeamNameFieldNumber = 3;
	static const int kTeamLogoFieldNumber = 4;
	static const int kScoreFieldNumber = 5;
	static const int kPlayersFieldNumber = 6;
	static const int kOnlyTeamFieldNumber = 7;
	static const int kCheersFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 team_number_;  // +0x18
	uint32 team_id_;  // +0x1c
	string * team_name_;  // +0x20
	uint64 team_logo_;  // +0x28
	uint32 score_;  // +0x48
	bool only_team_;  // +0x4c

	uint32 cheers_;  // +0x50

	static CMsgDOTARealtimeGameStats_TeamDetails * default_instance_;
	CMsgDOTARealtimeGameStats_TeamDetails();
	virtual ~CMsgDOTARealtimeGameStats_TeamDetails();
	CMsgDOTARealtimeGameStats_TeamDetails(const CMsgDOTARealtimeGameStats_TeamDetails &);
	CMsgDOTARealtimeGameStats_TeamDetails & operator=(const CMsgDOTARealtimeGameStats_TeamDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_TeamDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_TeamDetails *);
	virtual CMsgDOTARealtimeGameStats_TeamDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_TeamDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_TeamDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_team_number();
	void clear_team_number();
	uint32 team_number();
	void set_team_number(uint32);
	bool has_team_id();
	void clear_team_id();
	uint32 team_id();
	void set_team_id(uint32);
	bool has_team_name();
	void clear_team_name();
	const string & team_name();
	void set_team_name(const string &);
	void set_team_name(const char *);
	void set_team_name(const char *, size_t);
	string * mutable_team_name();
	string * release_team_name();
	void set_allocated_team_name(string *);
	bool has_team_logo();
	void clear_team_logo();
	uint64 team_logo();
	void set_team_logo(uint64);
	bool has_score();
	void clear_score();
	uint32 score();
	void set_score(uint32);
	int players_size();
	void clear_players();
	const CMsgDOTARealtimeGameStats_PlayerDetails & players(int);
	CMsgDOTARealtimeGameStats_PlayerDetails * mutable_players(int);
	CMsgDOTARealtimeGameStats_PlayerDetails * add_players();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_PlayerDetails> & players();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_PlayerDetails> * mutable_players();
	bool has_only_team();
	void clear_only_team();
	bool only_team();
	void set_only_team(bool);
	bool has_cheers();
	void clear_cheers();
	uint32 cheers();
	void set_cheers(uint32);
	void set_has_team_number();
	void clear_has_team_number();
	void set_has_team_id();
	void clear_has_team_id();
	void set_has_team_name();
	void clear_has_team_name();
	void set_has_team_logo();
	void clear_has_team_logo();
	void set_has_score();
	void clear_has_score();
	void set_has_only_team();
	void clear_has_only_team();
	void set_has_cheers();
	void clear_has_cheers();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 88
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:6227
class CMsgDOTARealtimeGameStats_ItemDetails : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kTimeFieldNumber = 3;
	static const int kSoldFieldNumber = 4;
	static const int kStackcountFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint32 id_;  // +0x20
	int32 time_;  // +0x24
	bool sold_;  // +0x28

	uint32 stackcount_;  // +0x2c

	static CMsgDOTARealtimeGameStats_ItemDetails * default_instance_;
	CMsgDOTARealtimeGameStats_ItemDetails();
	virtual ~CMsgDOTARealtimeGameStats_ItemDetails();
	CMsgDOTARealtimeGameStats_ItemDetails(const CMsgDOTARealtimeGameStats_ItemDetails &);
	CMsgDOTARealtimeGameStats_ItemDetails & operator=(const CMsgDOTARealtimeGameStats_ItemDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_ItemDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_ItemDetails *);
	virtual CMsgDOTARealtimeGameStats_ItemDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_ItemDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_ItemDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_id();
	void clear_id();
	uint32 id();
	void set_id(uint32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_time();
	void clear_time();
	int32 time();
	void set_time(int32);
	bool has_sold();
	void clear_sold();
	bool sold();
	void set_sold(bool);
	bool has_stackcount();
	void clear_stackcount();
	uint32 stackcount();
	void set_stackcount(uint32);
	void set_has_id();
	void clear_has_id();
	void set_has_name();
	void clear_has_name();
	void set_has_time();
	void clear_has_time();
	void set_has_sold();
	void clear_has_sold();
	void set_has_stackcount();
	void clear_has_stackcount();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:6351
class CMsgDOTARealtimeGameStats_AbilityDetails : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kLevelFieldNumber = 3;
	static const int kCooldownFieldNumber = 4;
	static const int kCooldownMaxFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint32 id_;  // +0x20
	uint32 level_;  // +0x24
	float cooldown_;  // +0x28
	float cooldown_max_;  // +0x2c

	static CMsgDOTARealtimeGameStats_AbilityDetails * default_instance_;
	CMsgDOTARealtimeGameStats_AbilityDetails();
	virtual ~CMsgDOTARealtimeGameStats_AbilityDetails();
	CMsgDOTARealtimeGameStats_AbilityDetails(const CMsgDOTARealtimeGameStats_AbilityDetails &);
	CMsgDOTARealtimeGameStats_AbilityDetails & operator=(const CMsgDOTARealtimeGameStats_AbilityDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_AbilityDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_AbilityDetails *);
	virtual CMsgDOTARealtimeGameStats_AbilityDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_AbilityDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_AbilityDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_id();
	void clear_id();
	uint32 id();
	void set_id(uint32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	bool has_cooldown();
	void clear_cooldown();
	float cooldown();
	void set_cooldown(float);
	bool has_cooldown_max();
	void clear_cooldown_max();
	float cooldown_max();
	void set_cooldown_max(float);
	void set_has_id();
	void clear_has_id();
	void set_has_name();
	void clear_has_name();
	void set_has_level();
	void clear_has_level();
	void set_has_cooldown();
	void clear_has_cooldown();
	void set_has_cooldown_max();
	void clear_has_cooldown_max();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:6475
class CMsgDOTARealtimeGameStats_HeroToHeroStats : public Message {
public:

	static const int kVictimidFieldNumber = 1;
	static const int kKillsFieldNumber = 2;
	static const int kAssistsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 victimid_;  // +0x18
	uint32 kills_;  // +0x1c
	uint32 assists_;  // +0x20

	static CMsgDOTARealtimeGameStats_HeroToHeroStats * default_instance_;
	CMsgDOTARealtimeGameStats_HeroToHeroStats();
	virtual ~CMsgDOTARealtimeGameStats_HeroToHeroStats();
	CMsgDOTARealtimeGameStats_HeroToHeroStats(const CMsgDOTARealtimeGameStats_HeroToHeroStats &);
	CMsgDOTARealtimeGameStats_HeroToHeroStats & operator=(const CMsgDOTARealtimeGameStats_HeroToHeroStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_HeroToHeroStats & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_HeroToHeroStats *);
	virtual CMsgDOTARealtimeGameStats_HeroToHeroStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_HeroToHeroStats &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_HeroToHeroStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_victimid();
	void clear_victimid();
	uint32 victimid();
	void set_victimid(uint32);
	bool has_kills();
	void clear_kills();
	uint32 kills();
	void set_kills(uint32);
	bool has_assists();
	void clear_assists();
	uint32 assists();
	void set_assists(uint32);
	void set_has_victimid();
	void clear_has_victimid();
	void set_has_kills();
	void clear_has_kills();
	void set_has_assists();
	void clear_has_assists();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:6574
class CMsgDOTARealtimeGameStats_AbilityList : public Message {
public:

	static const int kIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTARealtimeGameStats_AbilityList * default_instance_;
	CMsgDOTARealtimeGameStats_AbilityList();
	virtual ~CMsgDOTARealtimeGameStats_AbilityList();
	CMsgDOTARealtimeGameStats_AbilityList(const CMsgDOTARealtimeGameStats_AbilityList &);
	CMsgDOTARealtimeGameStats_AbilityList & operator=(const CMsgDOTARealtimeGameStats_AbilityList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_AbilityList & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_AbilityList *);
	virtual CMsgDOTARealtimeGameStats_AbilityList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_AbilityList &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_AbilityList &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int id_size();
	void clear_id();
	uint32 id(int);
	void set_id(int, uint32);
	void add_id(uint32);
	const RepeatedField<unsigned int> & id();
	RepeatedField<unsigned int> * mutable_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:6656
class CMsgDOTARealtimeGameStats_PlayerDetails : public Message {
public:

	static const int kAccountidFieldNumber = 1;
	static const int kPlayeridFieldNumber = 2;
	static const int kNameFieldNumber = 3;
	static const int kTeamFieldNumber = 4;
	static const int kHeroidFieldNumber = 5;
	static const int kHealthpointsFieldNumber = 6;
	static const int kMaxhealthpointsFieldNumber = 7;
	static const int kHealthregenrateFieldNumber = 8;
	static const int kManapointsFieldNumber = 9;
	static const int kMaxmanapointsFieldNumber = 10;
	static const int kManaregenrateFieldNumber = 11;
	static const int kBaseStrengthFieldNumber = 12;
	static const int kBaseAgilityFieldNumber = 13;
	static const int kBaseIntelligenceFieldNumber = 14;
	static const int kBaseArmorFieldNumber = 15;
	static const int kBaseMovespeedFieldNumber = 16;
	static const int kBaseDamageFieldNumber = 17;
	static const int kStrengthFieldNumber = 18;
	static const int kAgilityFieldNumber = 19;
	static const int kIntelligenceFieldNumber = 20;
	static const int kArmorFieldNumber = 21;
	static const int kMovespeedFieldNumber = 22;
	static const int kDamageFieldNumber = 23;
	static const int kHeroDamageFieldNumber = 24;
	static const int kTowerDamageFieldNumber = 25;
	static const int kAbilitiesFieldNumber = 26;
	static const int kLevelFieldNumber = 27;
	static const int kKillCountFieldNumber = 28;
	static const int kDeathCountFieldNumber = 29;
	static const int kAssistsCountFieldNumber = 30;
	static const int kDeniesCountFieldNumber = 31;
	static const int kLhCountFieldNumber = 32;
	static const int kHeroHealingFieldNumber = 33;
	static const int kGoldPerMinFieldNumber = 34;
	static const int kXpPerMinFieldNumber = 35;
	static const int kNetGoldFieldNumber = 36;
	static const int kGoldFieldNumber = 37;
	static const int kXFieldNumber = 38;
	static const int kYFieldNumber = 39;
	static const int kRespawnTimeFieldNumber = 40;
	static const int kUltimateCooldownFieldNumber = 41;
	static const int kHasBuybackFieldNumber = 42;
	static const int kItemsFieldNumber = 43;
	static const int kStashitemsFieldNumber = 44;
	static const int kItemshoppinglistFieldNumber = 45;
	static const int kLevelpointsFieldNumber = 46;
	static const int kHeroToHeroStatsFieldNumber = 47;
	static const int kHasUltimateFieldNumber = 48;
	static const int kHasUltimateManaFieldNumber = 49;
private:

	unsigned int _has_bits_[2];  // +0x10
	uint32 accountid_;  // +0x18
	uint32 playerid_;  // +0x1c
	string * name_;  // +0x20
	uint32 team_;  // +0x28
	uint32 heroid_;  // +0x2c
	uint32 healthpoints_;  // +0x30
	uint32 maxhealthpoints_;  // +0x34
	float healthregenrate_;  // +0x38
	uint32 manapoints_;  // +0x3c
	uint32 maxmanapoints_;  // +0x40
	float manaregenrate_;  // +0x44
	uint32 base_strength_;  // +0x48
	uint32 base_agility_;  // +0x4c
	uint32 base_intelligence_;  // +0x50
	int32 base_armor_;  // +0x54
	uint32 base_movespeed_;  // +0x58
	uint32 base_damage_;  // +0x5c
	uint32 strength_;  // +0x60
	uint32 agility_;  // +0x64
	uint32 intelligence_;  // +0x68
	int32 armor_;  // +0x6c
	uint32 movespeed_;  // +0x70
	uint32 damage_;  // +0x74
	uint32 hero_damage_;  // +0x78
	uint32 tower_damage_;  // +0x7c
	uint32 level_;  // +0x98
	uint32 kill_count_;  // +0x9c
	uint32 death_count_;  // +0xa0
	uint32 assists_count_;  // +0xa4
	uint32 denies_count_;  // +0xa8
	uint32 lh_count_;  // +0xac
	uint32 hero_healing_;  // +0xb0
	uint32 gold_per_min_;  // +0xb4
	uint32 xp_per_min_;  // +0xb8
	uint32 net_gold_;  // +0xbc
	uint32 gold_;  // +0xc0
	float x_;  // +0xc4
	float y_;  // +0xc8
	int32 respawn_time_;  // +0xcc
	uint32 ultimate_cooldown_;  // +0x118
	bool has_buyback_;  // +0x11c
	bool has_ultimate_;  // +0x11d
	bool has_ultimate_mana_;  // +0x11e

	int _cached_size_;  // +0x150

	static CMsgDOTARealtimeGameStats_PlayerDetails * default_instance_;
	CMsgDOTARealtimeGameStats_PlayerDetails();
	virtual ~CMsgDOTARealtimeGameStats_PlayerDetails();
	CMsgDOTARealtimeGameStats_PlayerDetails(const CMsgDOTARealtimeGameStats_PlayerDetails &);
	CMsgDOTARealtimeGameStats_PlayerDetails & operator=(const CMsgDOTARealtimeGameStats_PlayerDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_PlayerDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_PlayerDetails *);
	virtual CMsgDOTARealtimeGameStats_PlayerDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_PlayerDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_PlayerDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_accountid();
	void clear_accountid();
	uint32 accountid();
	void set_accountid(uint32);
	bool has_playerid();
	void clear_playerid();
	uint32 playerid();
	void set_playerid(uint32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_team();
	void clear_team();
	uint32 team();
	void set_team(uint32);
	bool has_heroid();
	void clear_heroid();
	uint32 heroid();
	void set_heroid(uint32);
	bool has_healthpoints();
	void clear_healthpoints();
	uint32 healthpoints();
	void set_healthpoints(uint32);
	bool has_maxhealthpoints();
	void clear_maxhealthpoints();
	uint32 maxhealthpoints();
	void set_maxhealthpoints(uint32);
	bool has_healthregenrate();
	void clear_healthregenrate();
	float healthregenrate();
	void set_healthregenrate(float);
	bool has_manapoints();
	void clear_manapoints();
	uint32 manapoints();
	void set_manapoints(uint32);
	bool has_maxmanapoints();
	void clear_maxmanapoints();
	uint32 maxmanapoints();
	void set_maxmanapoints(uint32);
	bool has_manaregenrate();
	void clear_manaregenrate();
	float manaregenrate();
	void set_manaregenrate(float);
	bool has_base_strength();
	void clear_base_strength();
	uint32 base_strength();
	void set_base_strength(uint32);
	bool has_base_agility();
	void clear_base_agility();
	uint32 base_agility();
	void set_base_agility(uint32);
	bool has_base_intelligence();
	void clear_base_intelligence();
	uint32 base_intelligence();
	void set_base_intelligence(uint32);
	bool has_base_armor();
	void clear_base_armor();
	int32 base_armor();
	void set_base_armor(int32);
	bool has_base_movespeed();
	void clear_base_movespeed();
	uint32 base_movespeed();
	void set_base_movespeed(uint32);
	bool has_base_damage();
	void clear_base_damage();
	uint32 base_damage();
	void set_base_damage(uint32);
	bool has_strength();
	void clear_strength();
	uint32 strength();
	void set_strength(uint32);
	bool has_agility();
	void clear_agility();
	uint32 agility();
	void set_agility(uint32);
	bool has_intelligence();
	void clear_intelligence();
	uint32 intelligence();
	void set_intelligence(uint32);
	bool has_armor();
	void clear_armor();
	int32 armor();
	void set_armor(int32);
	bool has_movespeed();
	void clear_movespeed();
	uint32 movespeed();
	void set_movespeed(uint32);
	bool has_damage();
	void clear_damage();
	uint32 damage();
	void set_damage(uint32);
	bool has_hero_damage();
	void clear_hero_damage();
	uint32 hero_damage();
	void set_hero_damage(uint32);
	bool has_tower_damage();
	void clear_tower_damage();
	uint32 tower_damage();
	void set_tower_damage(uint32);
	int abilities_size();
	void clear_abilities();
	const CMsgDOTARealtimeGameStats_AbilityDetails & abilities(int);
	CMsgDOTARealtimeGameStats_AbilityDetails * mutable_abilities(int);
	CMsgDOTARealtimeGameStats_AbilityDetails * add_abilities();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityDetails> & abilities();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityDetails> * mutable_abilities();
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	bool has_kill_count();
	void clear_kill_count();
	uint32 kill_count();
	void set_kill_count(uint32);
	bool has_death_count();
	void clear_death_count();
	uint32 death_count();
	void set_death_count(uint32);
	bool has_assists_count();
	void clear_assists_count();
	uint32 assists_count();
	void set_assists_count(uint32);
	bool has_denies_count();
	void clear_denies_count();
	uint32 denies_count();
	void set_denies_count(uint32);
	bool has_lh_count();
	void clear_lh_count();
	uint32 lh_count();
	void set_lh_count(uint32);
	bool has_hero_healing();
	void clear_hero_healing();
	uint32 hero_healing();
	void set_hero_healing(uint32);
	bool has_gold_per_min();
	void clear_gold_per_min();
	uint32 gold_per_min();
	void set_gold_per_min(uint32);
	bool has_xp_per_min();
	void clear_xp_per_min();
	uint32 xp_per_min();
	void set_xp_per_min(uint32);
	bool has_net_gold();
	void clear_net_gold();
	uint32 net_gold();
	void set_net_gold(uint32);
	bool has_gold();
	void clear_gold();
	uint32 gold();
	void set_gold(uint32);
	bool has_x();
	void clear_x();
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
	bool has_respawn_time();
	void clear_respawn_time();
	int32 respawn_time();
	void set_respawn_time(int32);
	bool has_ultimate_cooldown();
	void clear_ultimate_cooldown();
	uint32 ultimate_cooldown();
	void set_ultimate_cooldown(uint32);
	bool has_has_buyback();
	void clear_has_buyback();
	bool has_buyback();
	void set_has_buyback(bool);
	int items_size();
	void clear_items();
	const CMsgDOTARealtimeGameStats_ItemDetails & items(int);
	CMsgDOTARealtimeGameStats_ItemDetails * mutable_items(int);
	CMsgDOTARealtimeGameStats_ItemDetails * add_items();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails> & items();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails> * mutable_items();
	int stashitems_size();
	void clear_stashitems();
	const CMsgDOTARealtimeGameStats_ItemDetails & stashitems(int);
	CMsgDOTARealtimeGameStats_ItemDetails * mutable_stashitems(int);
	CMsgDOTARealtimeGameStats_ItemDetails * add_stashitems();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails> & stashitems();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails> * mutable_stashitems();
	int itemshoppinglist_size();
	void clear_itemshoppinglist();
	const CMsgDOTARealtimeGameStats_ItemDetails & itemshoppinglist(int);
	CMsgDOTARealtimeGameStats_ItemDetails * mutable_itemshoppinglist(int);
	CMsgDOTARealtimeGameStats_ItemDetails * add_itemshoppinglist();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails> & itemshoppinglist();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_ItemDetails> * mutable_itemshoppinglist();
	int levelpoints_size();
	void clear_levelpoints();
	const CMsgDOTARealtimeGameStats_AbilityList & levelpoints(int);
	CMsgDOTARealtimeGameStats_AbilityList * mutable_levelpoints(int);
	CMsgDOTARealtimeGameStats_AbilityList * add_levelpoints();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityList> & levelpoints();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_AbilityList> * mutable_levelpoints();
	int hero_to_hero_stats_size();
	void clear_hero_to_hero_stats();
	const CMsgDOTARealtimeGameStats_HeroToHeroStats & hero_to_hero_stats(int);
	CMsgDOTARealtimeGameStats_HeroToHeroStats * mutable_hero_to_hero_stats(int);
	CMsgDOTARealtimeGameStats_HeroToHeroStats * add_hero_to_hero_stats();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_HeroToHeroStats> & hero_to_hero_stats();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_HeroToHeroStats> * mutable_hero_to_hero_stats();
	bool has_has_ultimate();
	void clear_has_ultimate();
	bool has_ultimate();
	void set_has_ultimate(bool);
	bool has_has_ultimate_mana();
	void clear_has_ultimate_mana();
	bool has_ultimate_mana();
	void set_has_ultimate_mana(bool);
	void set_has_accountid();
	void clear_has_accountid();
	void set_has_playerid();
	void clear_has_playerid();
	void set_has_name();
	void clear_has_name();
	void set_has_team();
	void clear_has_team();
	void set_has_heroid();
	void clear_has_heroid();
	void set_has_healthpoints();
	void clear_has_healthpoints();
	void set_has_maxhealthpoints();
	void clear_has_maxhealthpoints();
	void set_has_healthregenrate();
	void clear_has_healthregenrate();
	void set_has_manapoints();
	void clear_has_manapoints();
	void set_has_maxmanapoints();
	void clear_has_maxmanapoints();
	void set_has_manaregenrate();
	void clear_has_manaregenrate();
	void set_has_base_strength();
	void clear_has_base_strength();
	void set_has_base_agility();
	void clear_has_base_agility();
	void set_has_base_intelligence();
	void clear_has_base_intelligence();
	void set_has_base_armor();
	void clear_has_base_armor();
	void set_has_base_movespeed();
	void clear_has_base_movespeed();
	void set_has_base_damage();
	void clear_has_base_damage();
	void set_has_strength();
	void clear_has_strength();
	void set_has_agility();
	void clear_has_agility();
	void set_has_intelligence();
	void clear_has_intelligence();
	void set_has_armor();
	void clear_has_armor();
	void set_has_movespeed();
	void clear_has_movespeed();
	void set_has_damage();
	void clear_has_damage();
	void set_has_hero_damage();
	void clear_has_hero_damage();
	void set_has_tower_damage();
	void clear_has_tower_damage();
	void set_has_level();
	void clear_has_level();
	void set_has_kill_count();
	void clear_has_kill_count();
	void set_has_death_count();
	void clear_has_death_count();
	void set_has_assists_count();
	void clear_has_assists_count();
	void set_has_denies_count();
	void clear_has_denies_count();
	void set_has_lh_count();
	void clear_has_lh_count();
	void set_has_hero_healing();
	void clear_has_hero_healing();
	void set_has_gold_per_min();
	void clear_has_gold_per_min();
	void set_has_xp_per_min();
	void clear_has_xp_per_min();
	void set_has_net_gold();
	void clear_has_net_gold();
	void set_has_gold();
	void clear_has_gold();
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_respawn_time();
	void clear_has_respawn_time();
	void set_has_ultimate_cooldown();
	void clear_has_ultimate_cooldown();
	void set_has_has_buyback();
	void clear_has_has_buyback();
	void set_has_has_ultimate();
	void clear_has_has_ultimate();
	void set_has_has_ultimate_mana();
	void clear_has_has_ultimate_mana();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 344
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:7238
class CMsgDOTARealtimeGameStats_BuildingDetails : public Message {
public:

	static const int kTeamFieldNumber = 2;
	static const int kHeadingFieldNumber = 3;
	static const int kLaneFieldNumber = 4;
	static const int kTierFieldNumber = 5;
	static const int kTypeFieldNumber = 6;
	static const int kXFieldNumber = 7;
	static const int kYFieldNumber = 8;
	static const int kDestroyedFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 team_;  // +0x18
	float heading_;  // +0x1c
	uint32 lane_;  // +0x20
	uint32 tier_;  // +0x24
	uint32 type_;  // +0x28
	float x_;  // +0x2c
	float y_;  // +0x30
	bool destroyed_;  // +0x34

	static CMsgDOTARealtimeGameStats_BuildingDetails * default_instance_;
	CMsgDOTARealtimeGameStats_BuildingDetails();
	virtual ~CMsgDOTARealtimeGameStats_BuildingDetails();
	CMsgDOTARealtimeGameStats_BuildingDetails(const CMsgDOTARealtimeGameStats_BuildingDetails &);
	CMsgDOTARealtimeGameStats_BuildingDetails & operator=(const CMsgDOTARealtimeGameStats_BuildingDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_BuildingDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_BuildingDetails *);
	virtual CMsgDOTARealtimeGameStats_BuildingDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_BuildingDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_BuildingDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_team();
	void clear_team();
	uint32 team();
	void set_team(uint32);
	bool has_heading();
	void clear_heading();
	float heading();
	void set_heading(float);
	bool has_lane();
	void clear_lane();
	uint32 lane();
	void set_lane(uint32);
	bool has_tier();
	void clear_tier();
	uint32 tier();
	void set_tier(uint32);
	bool has_type();
	void clear_type();
	uint32 type();
	void set_type(uint32);
	bool has_x();
	void clear_x();
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
	bool has_destroyed();
	void clear_destroyed();
	bool destroyed();
	void set_destroyed(bool);
	void set_has_team();
	void clear_has_team();
	void set_has_heading();
	void clear_has_heading();
	void set_has_lane();
	void clear_has_lane();
	void set_has_tier();
	void clear_has_tier();
	void set_has_type();
	void clear_has_type();
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_destroyed();
	void clear_has_destroyed();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:7387
class CMsgDOTARealtimeGameStats_KillDetails : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kDeathTimeFieldNumber = 2;
	static const int kKillerPlayerIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	int32 death_time_;  // +0x1c
	uint32 killer_player_id_;  // +0x20

	static CMsgDOTARealtimeGameStats_KillDetails * default_instance_;
	CMsgDOTARealtimeGameStats_KillDetails();
	virtual ~CMsgDOTARealtimeGameStats_KillDetails();
	CMsgDOTARealtimeGameStats_KillDetails(const CMsgDOTARealtimeGameStats_KillDetails &);
	CMsgDOTARealtimeGameStats_KillDetails & operator=(const CMsgDOTARealtimeGameStats_KillDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_KillDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_KillDetails *);
	virtual CMsgDOTARealtimeGameStats_KillDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_KillDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_KillDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_player_id();
	void clear_player_id();
	uint32 player_id();
	void set_player_id(uint32);
	bool has_death_time();
	void clear_death_time();
	int32 death_time();
	void set_death_time(int32);
	bool has_killer_player_id();
	void clear_killer_player_id();
	uint32 killer_player_id();
	void set_killer_player_id(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_death_time();
	void clear_has_death_time();
	void set_has_killer_player_id();
	void clear_has_killer_player_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:7486
class CMsgDOTARealtimeGameStats_BroadcasterDetails : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kSelectedHeroFieldNumber = 2;
	static const int kSelectedGraphFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 selected_hero_;  // +0x1c
	uint32 selected_graph_;  // +0x20

	static CMsgDOTARealtimeGameStats_BroadcasterDetails * default_instance_;
	CMsgDOTARealtimeGameStats_BroadcasterDetails();
	virtual ~CMsgDOTARealtimeGameStats_BroadcasterDetails();
	CMsgDOTARealtimeGameStats_BroadcasterDetails(const CMsgDOTARealtimeGameStats_BroadcasterDetails &);
	CMsgDOTARealtimeGameStats_BroadcasterDetails & operator=(const CMsgDOTARealtimeGameStats_BroadcasterDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_BroadcasterDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_BroadcasterDetails *);
	virtual CMsgDOTARealtimeGameStats_BroadcasterDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_BroadcasterDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_BroadcasterDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_player_id();
	void clear_player_id();
	uint32 player_id();
	void set_player_id(uint32);
	bool has_selected_hero();
	void clear_selected_hero();
	uint32 selected_hero();
	void set_selected_hero(uint32);
	bool has_selected_graph();
	void clear_selected_graph();
	uint32 selected_graph();
	void set_selected_graph(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_selected_hero();
	void clear_has_selected_hero();
	void set_has_selected_graph();
	void clear_has_selected_graph();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:7585
class CMsgDOTARealtimeGameStats_PickBanDetails : public Message {
public:

	static const int kHeroFieldNumber = 1;
	static const int kTeamFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 hero_;  // +0x18
	uint32 team_;  // +0x1c

	static CMsgDOTARealtimeGameStats_PickBanDetails * default_instance_;
	CMsgDOTARealtimeGameStats_PickBanDetails();
	virtual ~CMsgDOTARealtimeGameStats_PickBanDetails();
	CMsgDOTARealtimeGameStats_PickBanDetails(const CMsgDOTARealtimeGameStats_PickBanDetails &);
	CMsgDOTARealtimeGameStats_PickBanDetails & operator=(const CMsgDOTARealtimeGameStats_PickBanDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_PickBanDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_PickBanDetails *);
	virtual CMsgDOTARealtimeGameStats_PickBanDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_PickBanDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_PickBanDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_hero();
	void clear_hero();
	uint32 hero();
	void set_hero(uint32);
	bool has_team();
	void clear_team();
	uint32 team();
	void set_team(uint32);
	void set_has_hero();
	void clear_has_hero();
	void set_has_team();
	void clear_has_team();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:7674
class CMsgDOTARealtimeGameStats_MatchDetails : public Message {
public:

	static const int kServerSteamIdFieldNumber = 1;
	static const int kMatchidFieldNumber = 2;
	static const int kTimestampFieldNumber = 3;
	static const int kTimeOfDayFieldNumber = 4;
	static const int kIsNightstalkerNightFieldNumber = 5;
	static const int kGameTimeFieldNumber = 6;
	static const int kTeamidRadiantFieldNumber = 8;
	static const int kTeamidDireFieldNumber = 9;
	static const int kPicksFieldNumber = 10;
	static const int kBansFieldNumber = 11;
	static const int kKillsFieldNumber = 12;
	static const int kBroadcastersFieldNumber = 13;
	static const int kGameModeFieldNumber = 14;
	static const int kLeagueIdFieldNumber = 15;
	static const int kSingleTeamFieldNumber = 16;
	static const int kCheersPeakFieldNumber = 17;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 server_steam_id_;  // +0x18
	uint64 matchid_;  // +0x20
	uint32 timestamp_;  // +0x28
	float time_of_day_;  // +0x2c
	int32 game_time_;  // +0x30
	uint32 teamid_radiant_;  // +0x34
	uint32 teamid_dire_;  // +0x50
	bool is_nightstalker_night_;  // +0x54
	bool single_team_;  // +0x55

	uint32 game_mode_;  // +0xa0
	uint32 league_id_;  // +0xa4
	uint32 cheers_peak_;  // +0xa8

	static CMsgDOTARealtimeGameStats_MatchDetails * default_instance_;
	CMsgDOTARealtimeGameStats_MatchDetails();
	virtual ~CMsgDOTARealtimeGameStats_MatchDetails();
	CMsgDOTARealtimeGameStats_MatchDetails(const CMsgDOTARealtimeGameStats_MatchDetails &);
	CMsgDOTARealtimeGameStats_MatchDetails & operator=(const CMsgDOTARealtimeGameStats_MatchDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_MatchDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_MatchDetails *);
	virtual CMsgDOTARealtimeGameStats_MatchDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_MatchDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_MatchDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_server_steam_id();
	void clear_server_steam_id();
	uint64 server_steam_id();
	void set_server_steam_id(uint64);
	bool has_matchid();
	void clear_matchid();
	uint64 matchid();
	void set_matchid(uint64);
	bool has_timestamp();
	void clear_timestamp();
	uint32 timestamp();
	void set_timestamp(uint32);
	bool has_time_of_day();
	void clear_time_of_day();
	float time_of_day();
	void set_time_of_day(float);
	bool has_is_nightstalker_night();
	void clear_is_nightstalker_night();
	bool is_nightstalker_night();
	void set_is_nightstalker_night(bool);
	bool has_game_time();
	void clear_game_time();
	int32 game_time();
	void set_game_time(int32);
	bool has_teamid_radiant();
	void clear_teamid_radiant();
	uint32 teamid_radiant();
	void set_teamid_radiant(uint32);
	bool has_teamid_dire();
	void clear_teamid_dire();
	uint32 teamid_dire();
	void set_teamid_dire(uint32);
	int picks_size();
	void clear_picks();
	const CMsgDOTARealtimeGameStats_PickBanDetails & picks(int);
	CMsgDOTARealtimeGameStats_PickBanDetails * mutable_picks(int);
	CMsgDOTARealtimeGameStats_PickBanDetails * add_picks();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails> & picks();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails> * mutable_picks();
	int bans_size();
	void clear_bans();
	const CMsgDOTARealtimeGameStats_PickBanDetails & bans(int);
	CMsgDOTARealtimeGameStats_PickBanDetails * mutable_bans(int);
	CMsgDOTARealtimeGameStats_PickBanDetails * add_bans();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails> & bans();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_PickBanDetails> * mutable_bans();
	int kills_size();
	void clear_kills();
	const CMsgDOTARealtimeGameStats_KillDetails & kills(int);
	CMsgDOTARealtimeGameStats_KillDetails * mutable_kills(int);
	CMsgDOTARealtimeGameStats_KillDetails * add_kills();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_KillDetails> & kills();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_KillDetails> * mutable_kills();
	int broadcasters_size();
	void clear_broadcasters();
	const CMsgDOTARealtimeGameStats_BroadcasterDetails & broadcasters(int);
	CMsgDOTARealtimeGameStats_BroadcasterDetails * mutable_broadcasters(int);
	CMsgDOTARealtimeGameStats_BroadcasterDetails * add_broadcasters();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_BroadcasterDetails> & broadcasters();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_BroadcasterDetails> * mutable_broadcasters();
	bool has_game_mode();
	void clear_game_mode();
	uint32 game_mode();
	void set_game_mode(uint32);
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	bool has_single_team();
	void clear_single_team();
	bool single_team();
	void set_single_team(bool);
	bool has_cheers_peak();
	void clear_cheers_peak();
	uint32 cheers_peak();
	void set_cheers_peak(uint32);
	void set_has_server_steam_id();
	void clear_has_server_steam_id();
	void set_has_matchid();
	void clear_has_matchid();
	void set_has_timestamp();
	void clear_has_timestamp();
	void set_has_time_of_day();
	void clear_has_time_of_day();
	void set_has_is_nightstalker_night();
	void clear_has_is_nightstalker_night();
	void set_has_game_time();
	void clear_has_game_time();
	void set_has_teamid_radiant();
	void clear_has_teamid_radiant();
	void set_has_teamid_dire();
	void clear_has_teamid_dire();
	void set_has_game_mode();
	void clear_has_game_mode();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_single_team();
	void clear_has_single_team();
	void set_has_cheers_peak();
	void clear_has_cheers_peak();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 176
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:7915
class CMsgDOTARealtimeGameStats_GraphData_LocationStats : public Message {
public:

	static const int kStatsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTARealtimeGameStats_GraphData_LocationStats * default_instance_;
	CMsgDOTARealtimeGameStats_GraphData_LocationStats();
	virtual ~CMsgDOTARealtimeGameStats_GraphData_LocationStats();
	CMsgDOTARealtimeGameStats_GraphData_LocationStats(const CMsgDOTARealtimeGameStats_GraphData_LocationStats &);
	CMsgDOTARealtimeGameStats_GraphData_LocationStats & operator=(const CMsgDOTARealtimeGameStats_GraphData_LocationStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_GraphData_LocationStats & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_GraphData_LocationStats *);
	virtual CMsgDOTARealtimeGameStats_GraphData_LocationStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_GraphData_LocationStats &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_GraphData_LocationStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int stats_size();
	void clear_stats();
	int32 stats(int);
	void set_stats(int, int32);
	void add_stats(int32);
	const RepeatedField<int> & stats();
	RepeatedField<int> * mutable_stats();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:7997
class CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats : public Message {
public:

	static const int kLocStatsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats * default_instance_;
	CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats();
	virtual ~CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats();
	CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats(const CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats &);
	CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats & operator=(const CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats *);
	virtual CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int loc_stats_size();
	void clear_loc_stats();
	const CMsgDOTARealtimeGameStats_GraphData_LocationStats & loc_stats(int);
	CMsgDOTARealtimeGameStats_GraphData_LocationStats * mutable_loc_stats(int);
	CMsgDOTARealtimeGameStats_GraphData_LocationStats * add_loc_stats();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_LocationStats> & loc_stats();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_LocationStats> * mutable_loc_stats();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:8079
class CMsgDOTARealtimeGameStats_GraphData : public Message {
public:

	static const CMsgDOTARealtimeGameStats_GraphData_eStat CreepGoldEarned;
	static const CMsgDOTARealtimeGameStats_GraphData_eStat KillGoldEarned = 1;
	static const CMsgDOTARealtimeGameStats_GraphData_eStat DeathAndBuybackGoldLost = 2;
	static const CMsgDOTARealtimeGameStats_GraphData_eStat XPEarned = 3;
	static const CMsgDOTARealtimeGameStats_GraphData_eStat eStat_MIN;
	static const CMsgDOTARealtimeGameStats_GraphData_eStat eStat_MAX = 3;
	static const int eStat_ARRAYSIZE = 4;
	static const CMsgDOTARealtimeGameStats_GraphData_eLocation BotLane;
	static const CMsgDOTARealtimeGameStats_GraphData_eLocation MidLane = 1;
	static const CMsgDOTARealtimeGameStats_GraphData_eLocation TopLane = 2;
	static const CMsgDOTARealtimeGameStats_GraphData_eLocation Jungle = 3;
	static const CMsgDOTARealtimeGameStats_GraphData_eLocation Ancients = 4;
	static const CMsgDOTARealtimeGameStats_GraphData_eLocation Other = 5;
	static const CMsgDOTARealtimeGameStats_GraphData_eLocation eLocation_MIN;
	static const CMsgDOTARealtimeGameStats_GraphData_eLocation eLocation_MAX = 5;
	static const int eLocation_ARRAYSIZE = 6;
	static const int kGraphGoldFieldNumber = 1;
	static const int kGraphXpFieldNumber = 2;
	static const int kGraphKillFieldNumber = 3;
	static const int kGraphTowerFieldNumber = 4;
	static const int kGraphRaxFieldNumber = 5;
	static const int kTeamLocStatsFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTARealtimeGameStats_GraphData * default_instance_;
	typedef CMsgDOTARealtimeGameStats_GraphData_eStat eStat;
	typedef CMsgDOTARealtimeGameStats_GraphData_eLocation eLocation;
	CMsgDOTARealtimeGameStats_GraphData();
	virtual ~CMsgDOTARealtimeGameStats_GraphData();
	CMsgDOTARealtimeGameStats_GraphData(const CMsgDOTARealtimeGameStats_GraphData &);
	CMsgDOTARealtimeGameStats_GraphData & operator=(const CMsgDOTARealtimeGameStats_GraphData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats_GraphData & default_instance();
	void Swap(CMsgDOTARealtimeGameStats_GraphData *);
	virtual CMsgDOTARealtimeGameStats_GraphData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats_GraphData &);
	void MergeFrom(const CMsgDOTARealtimeGameStats_GraphData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool eStat_IsValid(int);
	const EnumDescriptor * eStat_descriptor();
	const string & eStat_Name(eStat);
	bool eStat_Parse(const string &, eStat *);
	bool eLocation_IsValid(int);
	const EnumDescriptor * eLocation_descriptor();
	const string & eLocation_Name(eLocation);
	bool eLocation_Parse(const string &, eLocation *);
	int graph_gold_size();
	void clear_graph_gold();
	int32 graph_gold(int);
	void set_graph_gold(int, int32);
	void add_graph_gold(int32);
	const RepeatedField<int> & graph_gold();
	RepeatedField<int> * mutable_graph_gold();
	int graph_xp_size();
	void clear_graph_xp();
	int32 graph_xp(int);
	void set_graph_xp(int, int32);
	void add_graph_xp(int32);
	const RepeatedField<int> & graph_xp();
	RepeatedField<int> * mutable_graph_xp();
	int graph_kill_size();
	void clear_graph_kill();
	int32 graph_kill(int);
	void set_graph_kill(int, int32);
	void add_graph_kill(int32);
	const RepeatedField<int> & graph_kill();
	RepeatedField<int> * mutable_graph_kill();
	int graph_tower_size();
	void clear_graph_tower();
	int32 graph_tower(int);
	void set_graph_tower(int, int32);
	void add_graph_tower(int32);
	const RepeatedField<int> & graph_tower();
	RepeatedField<int> * mutable_graph_tower();
	int graph_rax_size();
	void clear_graph_rax();
	int32 graph_rax(int);
	void set_graph_rax(int, int32);
	void add_graph_rax(int32);
	const RepeatedField<int> & graph_rax();
	RepeatedField<int> * mutable_graph_rax();
	int team_loc_stats_size();
	void clear_team_loc_stats();
	const CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats & team_loc_stats(int);
	CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats * mutable_team_loc_stats(int);
	CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats * add_team_loc_stats();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats> & team_loc_stats();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_GraphData_TeamLocationStats> * mutable_team_loc_stats();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 128
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:8283
class CMsgDOTARealtimeGameStats : public Message {
public:

	static const int kMatchFieldNumber = 1;
	static const int kTeamsFieldNumber = 2;
	static const int kBuildingsFieldNumber = 3;
	static const int kGraphDataFieldNumber = 4;
	static const int kDeltaFrameFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool delta_frame_;  // +0x58

	static CMsgDOTARealtimeGameStats * default_instance_;
	CMsgDOTARealtimeGameStats();
	virtual ~CMsgDOTARealtimeGameStats();
	CMsgDOTARealtimeGameStats(const CMsgDOTARealtimeGameStats &);
	CMsgDOTARealtimeGameStats & operator=(const CMsgDOTARealtimeGameStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStats & default_instance();
	void Swap(CMsgDOTARealtimeGameStats *);
	virtual CMsgDOTARealtimeGameStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStats &);
	void MergeFrom(const CMsgDOTARealtimeGameStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_match();
	void clear_match();
	const CMsgDOTARealtimeGameStats_MatchDetails & match();
	CMsgDOTARealtimeGameStats_MatchDetails * mutable_match();
	CMsgDOTARealtimeGameStats_MatchDetails * release_match();
	void set_allocated_match(CMsgDOTARealtimeGameStats_MatchDetails *);
	int teams_size();
	void clear_teams();
	const CMsgDOTARealtimeGameStats_TeamDetails & teams(int);
	CMsgDOTARealtimeGameStats_TeamDetails * mutable_teams(int);
	CMsgDOTARealtimeGameStats_TeamDetails * add_teams();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_TeamDetails> & teams();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_TeamDetails> * mutable_teams();
	int buildings_size();
	void clear_buildings();
	const CMsgDOTARealtimeGameStats_BuildingDetails & buildings(int);
	CMsgDOTARealtimeGameStats_BuildingDetails * mutable_buildings(int);
	CMsgDOTARealtimeGameStats_BuildingDetails * add_buildings();
	const RepeatedPtrField<CMsgDOTARealtimeGameStats_BuildingDetails> & buildings();
	RepeatedPtrField<CMsgDOTARealtimeGameStats_BuildingDetails> * mutable_buildings();
	bool has_graph_data();
	void clear_graph_data();
	const CMsgDOTARealtimeGameStats_GraphData & graph_data();
	CMsgDOTARealtimeGameStats_GraphData * mutable_graph_data();
	CMsgDOTARealtimeGameStats_GraphData * release_graph_data();
	void set_allocated_graph_data(CMsgDOTARealtimeGameStats_GraphData *);
	bool has_delta_frame();
	void clear_delta_frame();
	bool delta_frame();
	void set_delta_frame(bool);
	void set_has_match();
	void clear_has_match();
	void set_has_graph_data();
	void clear_has_graph_data();
	void set_has_delta_frame();
	void clear_has_delta_frame();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 96
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:8425
class CMsgDOTARealtimeGameStatsTerse_TeamDetails : public Message {
public:

	static const int kTeamNumberFieldNumber = 1;
	static const int kTeamIdFieldNumber = 2;
	static const int kTeamNameFieldNumber = 3;
	static const int kTeamLogoFieldNumber = 4;
	static const int kScoreFieldNumber = 5;
	static const int kPlayersFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 team_number_;  // +0x18
	uint32 team_id_;  // +0x1c
	string * team_name_;  // +0x20
	uint64 team_logo_;  // +0x28
	uint32 score_;  // +0x48

	static CMsgDOTARealtimeGameStatsTerse_TeamDetails * default_instance_;
	CMsgDOTARealtimeGameStatsTerse_TeamDetails();
	virtual ~CMsgDOTARealtimeGameStatsTerse_TeamDetails();
	CMsgDOTARealtimeGameStatsTerse_TeamDetails(const CMsgDOTARealtimeGameStatsTerse_TeamDetails &);
	CMsgDOTARealtimeGameStatsTerse_TeamDetails & operator=(const CMsgDOTARealtimeGameStatsTerse_TeamDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStatsTerse_TeamDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStatsTerse_TeamDetails *);
	virtual CMsgDOTARealtimeGameStatsTerse_TeamDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStatsTerse_TeamDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStatsTerse_TeamDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_team_number();
	void clear_team_number();
	uint32 team_number();
	void set_team_number(uint32);
	bool has_team_id();
	void clear_team_id();
	uint32 team_id();
	void set_team_id(uint32);
	bool has_team_name();
	void clear_team_name();
	const string & team_name();
	void set_team_name(const string &);
	void set_team_name(const char *);
	void set_team_name(const char *, size_t);
	string * mutable_team_name();
	string * release_team_name();
	void set_allocated_team_name(string *);
	bool has_team_logo();
	void clear_team_logo();
	uint64 team_logo();
	void set_team_logo(uint64);
	bool has_score();
	void clear_score();
	uint32 score();
	void set_score(uint32);
	int players_size();
	void clear_players();
	const CMsgDOTARealtimeGameStatsTerse_PlayerDetails & players(int);
	CMsgDOTARealtimeGameStatsTerse_PlayerDetails * mutable_players(int);
	CMsgDOTARealtimeGameStatsTerse_PlayerDetails * add_players();
	const RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_PlayerDetails> & players();
	RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_PlayerDetails> * mutable_players();
	void set_has_team_number();
	void clear_has_team_number();
	void set_has_team_id();
	void clear_has_team_id();
	void set_has_team_name();
	void clear_has_team_name();
	void set_has_team_logo();
	void clear_has_team_logo();
	void set_has_score();
	void clear_has_score();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 80
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:8562
class CMsgDOTARealtimeGameStatsTerse_PlayerDetails : public Message {
public:

	static const int kAccountidFieldNumber = 1;
	static const int kPlayeridFieldNumber = 2;
	static const int kNameFieldNumber = 3;
	static const int kTeamFieldNumber = 4;
	static const int kHeroidFieldNumber = 5;
	static const int kLevelFieldNumber = 6;
	static const int kKillCountFieldNumber = 7;
	static const int kDeathCountFieldNumber = 8;
	static const int kAssistsCountFieldNumber = 9;
	static const int kDeniesCountFieldNumber = 10;
	static const int kLhCountFieldNumber = 11;
	static const int kGoldFieldNumber = 12;
	static const int kXFieldNumber = 13;
	static const int kYFieldNumber = 14;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 accountid_;  // +0x18
	uint32 playerid_;  // +0x1c
	string * name_;  // +0x20
	uint32 team_;  // +0x28
	uint32 heroid_;  // +0x2c
	uint32 level_;  // +0x30
	uint32 kill_count_;  // +0x34
	uint32 death_count_;  // +0x38
	uint32 assists_count_;  // +0x3c
	uint32 denies_count_;  // +0x40
	uint32 lh_count_;  // +0x44
	uint32 gold_;  // +0x48
	float x_;  // +0x4c
	float y_;  // +0x50

	static CMsgDOTARealtimeGameStatsTerse_PlayerDetails * default_instance_;
	CMsgDOTARealtimeGameStatsTerse_PlayerDetails();
	virtual ~CMsgDOTARealtimeGameStatsTerse_PlayerDetails();
	CMsgDOTARealtimeGameStatsTerse_PlayerDetails(const CMsgDOTARealtimeGameStatsTerse_PlayerDetails &);
	CMsgDOTARealtimeGameStatsTerse_PlayerDetails & operator=(const CMsgDOTARealtimeGameStatsTerse_PlayerDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStatsTerse_PlayerDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStatsTerse_PlayerDetails *);
	virtual CMsgDOTARealtimeGameStatsTerse_PlayerDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStatsTerse_PlayerDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStatsTerse_PlayerDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_accountid();
	void clear_accountid();
	uint32 accountid();
	void set_accountid(uint32);
	bool has_playerid();
	void clear_playerid();
	uint32 playerid();
	void set_playerid(uint32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_team();
	void clear_team();
	uint32 team();
	void set_team(uint32);
	bool has_heroid();
	void clear_heroid();
	uint32 heroid();
	void set_heroid(uint32);
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	bool has_kill_count();
	void clear_kill_count();
	uint32 kill_count();
	void set_kill_count(uint32);
	bool has_death_count();
	void clear_death_count();
	uint32 death_count();
	void set_death_count(uint32);
	bool has_assists_count();
	void clear_assists_count();
	uint32 assists_count();
	void set_assists_count(uint32);
	bool has_denies_count();
	void clear_denies_count();
	uint32 denies_count();
	void set_denies_count(uint32);
	bool has_lh_count();
	void clear_lh_count();
	uint32 lh_count();
	void set_lh_count(uint32);
	bool has_gold();
	void clear_gold();
	uint32 gold();
	void set_gold(uint32);
	bool has_x();
	void clear_x();
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
	void set_has_accountid();
	void clear_has_accountid();
	void set_has_playerid();
	void clear_has_playerid();
	void set_has_name();
	void clear_has_name();
	void set_has_team();
	void clear_has_team();
	void set_has_heroid();
	void clear_has_heroid();
	void set_has_level();
	void clear_has_level();
	void set_has_kill_count();
	void clear_has_kill_count();
	void set_has_death_count();
	void clear_has_death_count();
	void set_has_assists_count();
	void clear_has_assists_count();
	void set_has_denies_count();
	void clear_has_denies_count();
	void set_has_lh_count();
	void clear_has_lh_count();
	void set_has_gold();
	void clear_has_gold();
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 88
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:8776
class CMsgDOTARealtimeGameStatsTerse_BuildingDetails : public Message {
public:

	static const int kTeamFieldNumber = 1;
	static const int kHeadingFieldNumber = 2;
	static const int kTypeFieldNumber = 3;
	static const int kLaneFieldNumber = 4;
	static const int kTierFieldNumber = 5;
	static const int kXFieldNumber = 6;
	static const int kYFieldNumber = 7;
	static const int kDestroyedFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 team_;  // +0x18
	float heading_;  // +0x1c
	uint32 type_;  // +0x20
	uint32 lane_;  // +0x24
	uint32 tier_;  // +0x28
	float x_;  // +0x2c
	float y_;  // +0x30
	bool destroyed_;  // +0x34

	static CMsgDOTARealtimeGameStatsTerse_BuildingDetails * default_instance_;
	CMsgDOTARealtimeGameStatsTerse_BuildingDetails();
	virtual ~CMsgDOTARealtimeGameStatsTerse_BuildingDetails();
	CMsgDOTARealtimeGameStatsTerse_BuildingDetails(const CMsgDOTARealtimeGameStatsTerse_BuildingDetails &);
	CMsgDOTARealtimeGameStatsTerse_BuildingDetails & operator=(const CMsgDOTARealtimeGameStatsTerse_BuildingDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStatsTerse_BuildingDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStatsTerse_BuildingDetails *);
	virtual CMsgDOTARealtimeGameStatsTerse_BuildingDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStatsTerse_BuildingDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStatsTerse_BuildingDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_team();
	void clear_team();
	uint32 team();
	void set_team(uint32);
	bool has_heading();
	void clear_heading();
	float heading();
	void set_heading(float);
	bool has_type();
	void clear_type();
	uint32 type();
	void set_type(uint32);
	bool has_lane();
	void clear_lane();
	uint32 lane();
	void set_lane(uint32);
	bool has_tier();
	void clear_tier();
	uint32 tier();
	void set_tier(uint32);
	bool has_x();
	void clear_x();
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
	bool has_destroyed();
	void clear_destroyed();
	bool destroyed();
	void set_destroyed(bool);
	void set_has_team();
	void clear_has_team();
	void set_has_heading();
	void clear_has_heading();
	void set_has_type();
	void clear_has_type();
	void set_has_lane();
	void clear_has_lane();
	void set_has_tier();
	void clear_has_tier();
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_destroyed();
	void clear_has_destroyed();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:8925
class CMsgDOTARealtimeGameStatsTerse_MatchDetails : public Message {
public:

	static const int kServerSteamIdFieldNumber = 1;
	static const int kMatchidFieldNumber = 2;
	static const int kTimestampFieldNumber = 3;
	static const int kGameTimeFieldNumber = 4;
	static const int kSteamBroadcasterAccountIdsFieldNumber = 6;
	static const int kGameModeFieldNumber = 7;
	static const int kLeagueIdFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 server_steam_id_;  // +0x18
	uint64 matchid_;  // +0x20
	uint32 timestamp_;  // +0x28
	int32 game_time_;  // +0x2c
	uint32 game_mode_;  // +0x40
	uint32 league_id_;  // +0x44

	static CMsgDOTARealtimeGameStatsTerse_MatchDetails * default_instance_;
	CMsgDOTARealtimeGameStatsTerse_MatchDetails();
	virtual ~CMsgDOTARealtimeGameStatsTerse_MatchDetails();
	CMsgDOTARealtimeGameStatsTerse_MatchDetails(const CMsgDOTARealtimeGameStatsTerse_MatchDetails &);
	CMsgDOTARealtimeGameStatsTerse_MatchDetails & operator=(const CMsgDOTARealtimeGameStatsTerse_MatchDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStatsTerse_MatchDetails & default_instance();
	void Swap(CMsgDOTARealtimeGameStatsTerse_MatchDetails *);
	virtual CMsgDOTARealtimeGameStatsTerse_MatchDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStatsTerse_MatchDetails &);
	void MergeFrom(const CMsgDOTARealtimeGameStatsTerse_MatchDetails &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_server_steam_id();
	void clear_server_steam_id();
	uint64 server_steam_id();
	void set_server_steam_id(uint64);
	bool has_matchid();
	void clear_matchid();
	uint64 matchid();
	void set_matchid(uint64);
	bool has_timestamp();
	void clear_timestamp();
	uint32 timestamp();
	void set_timestamp(uint32);
	bool has_game_time();
	void clear_game_time();
	int32 game_time();
	void set_game_time(int32);
	int steam_broadcaster_account_ids_size();
	void clear_steam_broadcaster_account_ids();
	uint32 steam_broadcaster_account_ids(int);
	void set_steam_broadcaster_account_ids(int, uint32);
	void add_steam_broadcaster_account_ids(uint32);
	const RepeatedField<unsigned int> & steam_broadcaster_account_ids();
	RepeatedField<unsigned int> * mutable_steam_broadcaster_account_ids();
	bool has_game_mode();
	void clear_game_mode();
	uint32 game_mode();
	void set_game_mode(uint32);
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	void set_has_server_steam_id();
	void clear_has_server_steam_id();
	void set_has_matchid();
	void clear_has_matchid();
	void set_has_timestamp();
	void clear_has_timestamp();
	void set_has_game_time();
	void clear_has_game_time();
	void set_has_game_mode();
	void clear_has_game_mode();
	void set_has_league_id();
	void clear_has_league_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:9067
class CMsgDOTARealtimeGameStatsTerse_GraphData : public Message {
public:

	static const int kGraphGoldFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTARealtimeGameStatsTerse_GraphData * default_instance_;
	CMsgDOTARealtimeGameStatsTerse_GraphData();
	virtual ~CMsgDOTARealtimeGameStatsTerse_GraphData();
	CMsgDOTARealtimeGameStatsTerse_GraphData(const CMsgDOTARealtimeGameStatsTerse_GraphData &);
	CMsgDOTARealtimeGameStatsTerse_GraphData & operator=(const CMsgDOTARealtimeGameStatsTerse_GraphData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStatsTerse_GraphData & default_instance();
	void Swap(CMsgDOTARealtimeGameStatsTerse_GraphData *);
	virtual CMsgDOTARealtimeGameStatsTerse_GraphData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStatsTerse_GraphData &);
	void MergeFrom(const CMsgDOTARealtimeGameStatsTerse_GraphData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int graph_gold_size();
	void clear_graph_gold();
	int32 graph_gold(int);
	void set_graph_gold(int, int32);
	void add_graph_gold(int32);
	const RepeatedField<int> & graph_gold();
	RepeatedField<int> * mutable_graph_gold();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:9149
class CMsgDOTARealtimeGameStatsTerse : public Message {
public:

	static const int kMatchFieldNumber = 1;
	static const int kTeamsFieldNumber = 2;
	static const int kBuildingsFieldNumber = 3;
	static const int kGraphDataFieldNumber = 4;
	static const int kDeltaFrameFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool delta_frame_;  // +0x58

	static CMsgDOTARealtimeGameStatsTerse * default_instance_;
	CMsgDOTARealtimeGameStatsTerse();
	virtual ~CMsgDOTARealtimeGameStatsTerse();
	CMsgDOTARealtimeGameStatsTerse(const CMsgDOTARealtimeGameStatsTerse &);
	CMsgDOTARealtimeGameStatsTerse & operator=(const CMsgDOTARealtimeGameStatsTerse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARealtimeGameStatsTerse & default_instance();
	void Swap(CMsgDOTARealtimeGameStatsTerse *);
	virtual CMsgDOTARealtimeGameStatsTerse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARealtimeGameStatsTerse &);
	void MergeFrom(const CMsgDOTARealtimeGameStatsTerse &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_match();
	void clear_match();
	const CMsgDOTARealtimeGameStatsTerse_MatchDetails & match();
	CMsgDOTARealtimeGameStatsTerse_MatchDetails * mutable_match();
	CMsgDOTARealtimeGameStatsTerse_MatchDetails * release_match();
	void set_allocated_match(CMsgDOTARealtimeGameStatsTerse_MatchDetails *);
	int teams_size();
	void clear_teams();
	const CMsgDOTARealtimeGameStatsTerse_TeamDetails & teams(int);
	CMsgDOTARealtimeGameStatsTerse_TeamDetails * mutable_teams(int);
	CMsgDOTARealtimeGameStatsTerse_TeamDetails * add_teams();
	const RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_TeamDetails> & teams();
	RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_TeamDetails> * mutable_teams();
	int buildings_size();
	void clear_buildings();
	const CMsgDOTARealtimeGameStatsTerse_BuildingDetails & buildings(int);
	CMsgDOTARealtimeGameStatsTerse_BuildingDetails * mutable_buildings(int);
	CMsgDOTARealtimeGameStatsTerse_BuildingDetails * add_buildings();
	const RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_BuildingDetails> & buildings();
	RepeatedPtrField<CMsgDOTARealtimeGameStatsTerse_BuildingDetails> * mutable_buildings();
	bool has_graph_data();
	void clear_graph_data();
	const CMsgDOTARealtimeGameStatsTerse_GraphData & graph_data();
	CMsgDOTARealtimeGameStatsTerse_GraphData * mutable_graph_data();
	CMsgDOTARealtimeGameStatsTerse_GraphData * release_graph_data();
	void set_allocated_graph_data(CMsgDOTARealtimeGameStatsTerse_GraphData *);
	bool has_delta_frame();
	void clear_delta_frame();
	bool delta_frame();
	void set_delta_frame(bool);
	void set_has_match();
	void clear_has_match();
	void set_has_graph_data();
	void clear_has_graph_data();
	void set_has_delta_frame();
	void clear_has_delta_frame();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 96
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:9284
class CMsgGCToClientMatchGroupsVersion : public Message {
public:

	static const int kMatchgroupsVersionFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 matchgroups_version_;  // +0x18

	static CMsgGCToClientMatchGroupsVersion * default_instance_;
	CMsgGCToClientMatchGroupsVersion();
	virtual ~CMsgGCToClientMatchGroupsVersion();
	CMsgGCToClientMatchGroupsVersion(const CMsgGCToClientMatchGroupsVersion &);
	CMsgGCToClientMatchGroupsVersion & operator=(const CMsgGCToClientMatchGroupsVersion &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToClientMatchGroupsVersion & default_instance();
	void Swap(CMsgGCToClientMatchGroupsVersion *);
	virtual CMsgGCToClientMatchGroupsVersion * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToClientMatchGroupsVersion &);
	void MergeFrom(const CMsgGCToClientMatchGroupsVersion &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_matchgroups_version();
	void clear_matchgroups_version();
	uint32 matchgroups_version();
	void set_matchgroups_version(uint32);
	void set_has_matchgroups_version();
	void clear_has_matchgroups_version();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:9363
class CMsgDOTASDOHeroStatsHistory : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kGameModeFieldNumber = 2;
	static const int kLobbyTypeFieldNumber = 3;
	static const int kStartTimeFieldNumber = 4;
	static const int kWonFieldNumber = 5;
	static const int kGpmFieldNumber = 6;
	static const int kXpmFieldNumber = 7;
	static const int kKillsFieldNumber = 8;
	static const int kDeathsFieldNumber = 9;
	static const int kAssistsFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 game_mode_;  // +0x20
	uint32 lobby_type_;  // +0x24
	uint32 start_time_;  // +0x28
	bool won_;  // +0x2c

	uint32 gpm_;  // +0x30
	uint32 xpm_;  // +0x34
	uint32 kills_;  // +0x38
	uint32 deaths_;  // +0x3c
	uint32 assists_;  // +0x40

	static CMsgDOTASDOHeroStatsHistory * default_instance_;
	CMsgDOTASDOHeroStatsHistory();
	virtual ~CMsgDOTASDOHeroStatsHistory();
	CMsgDOTASDOHeroStatsHistory(const CMsgDOTASDOHeroStatsHistory &);
	CMsgDOTASDOHeroStatsHistory & operator=(const CMsgDOTASDOHeroStatsHistory &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASDOHeroStatsHistory & default_instance();
	void Swap(CMsgDOTASDOHeroStatsHistory *);
	virtual CMsgDOTASDOHeroStatsHistory * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASDOHeroStatsHistory &);
	void MergeFrom(const CMsgDOTASDOHeroStatsHistory &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_game_mode();
	void clear_game_mode();
	uint32 game_mode();
	void set_game_mode(uint32);
	bool has_lobby_type();
	void clear_lobby_type();
	uint32 lobby_type();
	void set_lobby_type(uint32);
	bool has_start_time();
	void clear_start_time();
	uint32 start_time();
	void set_start_time(uint32);
	bool has_won();
	void clear_won();
	bool won();
	void set_won(bool);
	bool has_gpm();
	void clear_gpm();
	uint32 gpm();
	void set_gpm(uint32);
	bool has_xpm();
	void clear_xpm();
	uint32 xpm();
	void set_xpm(uint32);
	bool has_kills();
	void clear_kills();
	uint32 kills();
	void set_kills(uint32);
	bool has_deaths();
	void clear_deaths();
	uint32 deaths();
	void set_deaths(uint32);
	bool has_assists();
	void clear_assists();
	uint32 assists();
	void set_assists(uint32);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_game_mode();
	void clear_has_game_mode();
	void set_has_lobby_type();
	void clear_has_lobby_type();
	void set_has_start_time();
	void clear_has_start_time();
	void set_has_won();
	void clear_has_won();
	void set_has_gpm();
	void clear_has_gpm();
	void set_has_xpm();
	void clear_has_xpm();
	void set_has_kills();
	void clear_has_kills();
	void set_has_deaths();
	void clear_has_deaths();
	void set_has_assists();
	void clear_has_assists();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:9532
class CMsgDOTASeasonRewards_Reward : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kItemdefFieldNumber = 2;
	static const int kImportanceFieldNumber = 3;
	static const int kBaseLevelFieldNumber = 4;
	static const int kRepeatLevelFieldNumber = 5;
	static const int kRewardTypeFieldNumber = 6;
	static const int kImageFieldNumber = 7;
	static const int kActionIdFieldNumber = 8;
	static const int kEffectIndexFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint32 itemdef_;  // +0x20
	uint32 importance_;  // +0x24
	uint32 base_level_;  // +0x28
	uint32 repeat_level_;  // +0x2c
	string * image_;  // +0x30
	int reward_type_;  // +0x38
	uint32 action_id_;  // +0x3c
	uint32 effect_index_;  // +0x40

	static CMsgDOTASeasonRewards_Reward * default_instance_;
	CMsgDOTASeasonRewards_Reward();
	virtual ~CMsgDOTASeasonRewards_Reward();
	CMsgDOTASeasonRewards_Reward(const CMsgDOTASeasonRewards_Reward &);
	CMsgDOTASeasonRewards_Reward & operator=(const CMsgDOTASeasonRewards_Reward &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonRewards_Reward & default_instance();
	void Swap(CMsgDOTASeasonRewards_Reward *);
	virtual CMsgDOTASeasonRewards_Reward * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonRewards_Reward &);
	void MergeFrom(const CMsgDOTASeasonRewards_Reward &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_itemdef();
	void clear_itemdef();
	uint32 itemdef();
	void set_itemdef(uint32);
	bool has_importance();
	void clear_importance();
	uint32 importance();
	void set_importance(uint32);
	bool has_base_level();
	void clear_base_level();
	uint32 base_level();
	void set_base_level(uint32);
	bool has_repeat_level();
	void clear_repeat_level();
	uint32 repeat_level();
	void set_repeat_level(uint32);
	bool has_reward_type();
	void clear_reward_type();
	CMsgDOTASeasonRewards_ERewardType reward_type();
	void set_reward_type(CMsgDOTASeasonRewards_ERewardType);
	bool has_image();
	void clear_image();
	const string & image();
	void set_image(const string &);
	void set_image(const char *);
	void set_image(const char *, size_t);
	string * mutable_image();
	string * release_image();
	void set_allocated_image(string *);
	bool has_action_id();
	void clear_action_id();
	uint32 action_id();
	void set_action_id(uint32);
	bool has_effect_index();
	void clear_effect_index();
	uint32 effect_index();
	void set_effect_index(uint32);
	void set_has_name();
	void clear_has_name();
	void set_has_itemdef();
	void clear_has_itemdef();
	void set_has_importance();
	void clear_has_importance();
	void set_has_base_level();
	void clear_has_base_level();
	void set_has_repeat_level();
	void clear_has_repeat_level();
	void set_has_reward_type();
	void clear_has_reward_type();
	void set_has_image();
	void clear_has_image();
	void set_has_action_id();
	void clear_has_action_id();
	void set_has_effect_index();
	void clear_has_effect_index();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:9701
class CMsgDOTASeasonRewards : public Message {
public:

	static const CMsgDOTASeasonRewards_ERewardType EconItem;
	static const CMsgDOTASeasonRewards_ERewardType MysteryWheel = 1;
	static const CMsgDOTASeasonRewards_ERewardType AbilityEffect = 2;
	static const CMsgDOTASeasonRewards_ERewardType Other = 3;
	static const CMsgDOTASeasonRewards_ERewardType MysteryWheelPointsBased = 4;
	static const CMsgDOTASeasonRewards_ERewardType ERewardType_MIN;
	static const CMsgDOTASeasonRewards_ERewardType ERewardType_MAX = 4;
	static const int ERewardType_ARRAYSIZE = 5;
	static const int kRewardsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTASeasonRewards * default_instance_;
	typedef CMsgDOTASeasonRewards_ERewardType ERewardType;
	CMsgDOTASeasonRewards();
	virtual ~CMsgDOTASeasonRewards();
	CMsgDOTASeasonRewards(const CMsgDOTASeasonRewards &);
	CMsgDOTASeasonRewards & operator=(const CMsgDOTASeasonRewards &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonRewards & default_instance();
	void Swap(CMsgDOTASeasonRewards *);
	virtual CMsgDOTASeasonRewards * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonRewards &);
	void MergeFrom(const CMsgDOTASeasonRewards &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool ERewardType_IsValid(int);
	const EnumDescriptor * ERewardType_descriptor();
	const string & ERewardType_Name(ERewardType);
	bool ERewardType_Parse(const string &, ERewardType *);
	int rewards_size();
	void clear_rewards();
	const CMsgDOTASeasonRewards_Reward & rewards(int);
	CMsgDOTASeasonRewards_Reward * mutable_rewards(int);
	CMsgDOTASeasonRewards_Reward * add_rewards();
	const RepeatedPtrField<CMsgDOTASeasonRewards_Reward> & rewards();
	RepeatedPtrField<CMsgDOTASeasonRewards_Reward> * mutable_rewards();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:9812
class CMsgDOTASeasonAchievements_Achievement : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kDescriptionFieldNumber = 2;
	static const int kImageFieldNumber = 3;
	static const int kActionIdFieldNumber = 4;
	static const int kMaxGrantsFieldNumber = 5;
	static const int kNormalPointsFieldNumber = 6;
	static const int kTrackingAchievementFieldNumber = 7;
	static const int kAchievementGoalFieldNumber = 8;
	static const int kAchievementLevelFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * description_;  // +0x20
	string * image_;  // +0x28
	uint32 action_id_;  // +0x30
	uint32 max_grants_;  // +0x34
	uint32 normal_points_;  // +0x38
	uint32 tracking_achievement_;  // +0x3c
	uint32 achievement_goal_;  // +0x40
	uint32 achievement_level_;  // +0x44

	static CMsgDOTASeasonAchievements_Achievement * default_instance_;
	CMsgDOTASeasonAchievements_Achievement();
	virtual ~CMsgDOTASeasonAchievements_Achievement();
	CMsgDOTASeasonAchievements_Achievement(const CMsgDOTASeasonAchievements_Achievement &);
	CMsgDOTASeasonAchievements_Achievement & operator=(const CMsgDOTASeasonAchievements_Achievement &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonAchievements_Achievement & default_instance();
	void Swap(CMsgDOTASeasonAchievements_Achievement *);
	virtual CMsgDOTASeasonAchievements_Achievement * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonAchievements_Achievement &);
	void MergeFrom(const CMsgDOTASeasonAchievements_Achievement &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_description();
	void clear_description();
	const string & description();
	void set_description(const string &);
	void set_description(const char *);
	void set_description(const char *, size_t);
	string * mutable_description();
	string * release_description();
	void set_allocated_description(string *);
	bool has_image();
	void clear_image();
	const string & image();
	void set_image(const string &);
	void set_image(const char *);
	void set_image(const char *, size_t);
	string * mutable_image();
	string * release_image();
	void set_allocated_image(string *);
	bool has_action_id();
	void clear_action_id();
	uint32 action_id();
	void set_action_id(uint32);
	bool has_max_grants();
	void clear_max_grants();
	uint32 max_grants();
	void set_max_grants(uint32);
	bool has_normal_points();
	void clear_normal_points();
	uint32 normal_points();
	void set_normal_points(uint32);
	bool has_tracking_achievement();
	void clear_tracking_achievement();
	uint32 tracking_achievement();
	void set_tracking_achievement(uint32);
	bool has_achievement_goal();
	void clear_achievement_goal();
	uint32 achievement_goal();
	void set_achievement_goal(uint32);
	bool has_achievement_level();
	void clear_achievement_level();
	uint32 achievement_level();
	void set_achievement_level(uint32);
	void set_has_name();
	void clear_has_name();
	void set_has_description();
	void clear_has_description();
	void set_has_image();
	void clear_has_image();
	void set_has_action_id();
	void clear_has_action_id();
	void set_has_max_grants();
	void clear_has_max_grants();
	void set_has_normal_points();
	void clear_has_normal_points();
	void set_has_tracking_achievement();
	void clear_has_tracking_achievement();
	void set_has_achievement_goal();
	void clear_has_achievement_goal();
	void set_has_achievement_level();
	void clear_has_achievement_level();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:9986
class CMsgDOTASeasonAchievements : public Message {
public:

	static const int kAchievementsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTASeasonAchievements * default_instance_;
	CMsgDOTASeasonAchievements();
	virtual ~CMsgDOTASeasonAchievements();
	CMsgDOTASeasonAchievements(const CMsgDOTASeasonAchievements &);
	CMsgDOTASeasonAchievements & operator=(const CMsgDOTASeasonAchievements &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonAchievements & default_instance();
	void Swap(CMsgDOTASeasonAchievements *);
	virtual CMsgDOTASeasonAchievements * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonAchievements &);
	void MergeFrom(const CMsgDOTASeasonAchievements &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int achievements_size();
	void clear_achievements();
	const CMsgDOTASeasonAchievements_Achievement & achievements(int);
	CMsgDOTASeasonAchievements_Achievement * mutable_achievements(int);
	CMsgDOTASeasonAchievements_Achievement * add_achievements();
	const RepeatedPtrField<CMsgDOTASeasonAchievements_Achievement> & achievements();
	RepeatedPtrField<CMsgDOTASeasonAchievements_Achievement> * mutable_achievements();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:10070
class CMsgDOTASeasonPredictions_Choice : public Message {
public:

	static const int kValueFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kMinRawValueFieldNumber = 3;
	static const int kMaxRawValueFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint32 value_;  // +0x20
	uint32 min_raw_value_;  // +0x24
	uint32 max_raw_value_;  // +0x28

	static CMsgDOTASeasonPredictions_Choice * default_instance_;
	CMsgDOTASeasonPredictions_Choice();
	virtual ~CMsgDOTASeasonPredictions_Choice();
	CMsgDOTASeasonPredictions_Choice(const CMsgDOTASeasonPredictions_Choice &);
	CMsgDOTASeasonPredictions_Choice & operator=(const CMsgDOTASeasonPredictions_Choice &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonPredictions_Choice & default_instance();
	void Swap(CMsgDOTASeasonPredictions_Choice *);
	virtual CMsgDOTASeasonPredictions_Choice * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonPredictions_Choice &);
	void MergeFrom(const CMsgDOTASeasonPredictions_Choice &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_value();
	void clear_value();
	uint32 value();
	void set_value(uint32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_min_raw_value();
	void clear_min_raw_value();
	uint32 min_raw_value();
	void set_min_raw_value(uint32);
	bool has_max_raw_value();
	void clear_max_raw_value();
	uint32 max_raw_value();
	void set_max_raw_value(uint32);
	void set_has_value();
	void clear_has_value();
	void set_has_name();
	void clear_has_name();
	void set_has_min_raw_value();
	void clear_has_min_raw_value();
	void set_has_max_raw_value();
	void clear_has_max_raw_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:10184
class CMsgDOTASeasonPredictions_Answers : public Message {
public:

	static const int kAnswerIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 answer_id_;  // +0x18

	static CMsgDOTASeasonPredictions_Answers * default_instance_;
	CMsgDOTASeasonPredictions_Answers();
	virtual ~CMsgDOTASeasonPredictions_Answers();
	CMsgDOTASeasonPredictions_Answers(const CMsgDOTASeasonPredictions_Answers &);
	CMsgDOTASeasonPredictions_Answers & operator=(const CMsgDOTASeasonPredictions_Answers &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonPredictions_Answers & default_instance();
	void Swap(CMsgDOTASeasonPredictions_Answers *);
	virtual CMsgDOTASeasonPredictions_Answers * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonPredictions_Answers &);
	void MergeFrom(const CMsgDOTASeasonPredictions_Answers &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_answer_id();
	void clear_answer_id();
	uint32 answer_id();
	void set_answer_id(uint32);
	void set_has_answer_id();
	void clear_has_answer_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:10263
class CMsgDOTASeasonPredictions_QueryKeyValues : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * value_;  // +0x20

	static CMsgDOTASeasonPredictions_QueryKeyValues * default_instance_;
	CMsgDOTASeasonPredictions_QueryKeyValues();
	virtual ~CMsgDOTASeasonPredictions_QueryKeyValues();
	CMsgDOTASeasonPredictions_QueryKeyValues(const CMsgDOTASeasonPredictions_QueryKeyValues &);
	CMsgDOTASeasonPredictions_QueryKeyValues & operator=(const CMsgDOTASeasonPredictions_QueryKeyValues &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonPredictions_QueryKeyValues & default_instance();
	void Swap(CMsgDOTASeasonPredictions_QueryKeyValues *);
	virtual CMsgDOTASeasonPredictions_QueryKeyValues * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonPredictions_QueryKeyValues &);
	void MergeFrom(const CMsgDOTASeasonPredictions_QueryKeyValues &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_value();
	void clear_value();
	const string & value();
	void set_value(const string &);
	void set_value(const char *);
	void set_value(const char *, size_t);
	string * mutable_value();
	string * release_value();
	void set_allocated_value(string *);
	void set_has_name();
	void clear_has_name();
	void set_has_value();
	void clear_has_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:10362
class CMsgDOTASeasonPredictions_Prediction : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kQuestionFieldNumber = 2;
	static const int kChoicesFieldNumber = 3;
	static const int kSelectionIdFieldNumber = 4;
	static const int kStartDateFieldNumber = 5;
	static const int kLockDateFieldNumber = 6;
	static const int kRewardFieldNumber = 7;
	static const int kAnswerTypeFieldNumber = 8;
	static const int kAnswerIdFieldNumber = 9;
	static const int kAnswersFieldNumber = 10;
	static const int kQueryNameFieldNumber = 11;
	static const int kQueryBindParamsFieldNumber = 12;
	static const int kLockOnSelectionIdFieldNumber = 13;
	static const int kLockOnSelectionValueFieldNumber = 14;
	static const int kLockOnSelectionSetFieldNumber = 15;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * question_;  // +0x18
	int type_;  // +0x20
	uint32 selection_id_;  // +0x24
	uint32 start_date_;  // +0x40
	uint32 lock_date_;  // +0x44
	uint32 reward_;  // +0x48
	int answer_type_;  // +0x4c
	string * query_name_;  // +0x68
	uint32 answer_id_;  // +0x70
	uint32 lock_on_selection_id_;  // +0x74
	uint32 lock_on_selection_value_;  // +0x88
	bool lock_on_selection_set_;  // +0x8c

	static CMsgDOTASeasonPredictions_Prediction * default_instance_;
	CMsgDOTASeasonPredictions_Prediction();
	virtual ~CMsgDOTASeasonPredictions_Prediction();
	CMsgDOTASeasonPredictions_Prediction(const CMsgDOTASeasonPredictions_Prediction &);
	CMsgDOTASeasonPredictions_Prediction & operator=(const CMsgDOTASeasonPredictions_Prediction &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonPredictions_Prediction & default_instance();
	void Swap(CMsgDOTASeasonPredictions_Prediction *);
	virtual CMsgDOTASeasonPredictions_Prediction * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonPredictions_Prediction &);
	void MergeFrom(const CMsgDOTASeasonPredictions_Prediction &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_type();
	void clear_type();
	CMsgDOTASeasonPredictions_ePredictionType type();
	void set_type(CMsgDOTASeasonPredictions_ePredictionType);
	bool has_question();
	void clear_question();
	const string & question();
	void set_question(const string &);
	void set_question(const char *);
	void set_question(const char *, size_t);
	string * mutable_question();
	string * release_question();
	void set_allocated_question(string *);
	int choices_size();
	void clear_choices();
	const CMsgDOTASeasonPredictions_Choice & choices(int);
	CMsgDOTASeasonPredictions_Choice * mutable_choices(int);
	CMsgDOTASeasonPredictions_Choice * add_choices();
	const RepeatedPtrField<CMsgDOTASeasonPredictions_Choice> & choices();
	RepeatedPtrField<CMsgDOTASeasonPredictions_Choice> * mutable_choices();
	bool has_selection_id();
	void clear_selection_id();
	uint32 selection_id();
	void set_selection_id(uint32);
	bool has_start_date();
	void clear_start_date();
	uint32 start_date();
	void set_start_date(uint32);
	bool has_lock_date();
	void clear_lock_date();
	uint32 lock_date();
	void set_lock_date(uint32);
	bool has_reward();
	void clear_reward();
	uint32 reward();
	void set_reward(uint32);
	bool has_answer_type();
	void clear_answer_type();
	CMsgDOTASeasonPredictions_eAnswerType answer_type();
	void set_answer_type(CMsgDOTASeasonPredictions_eAnswerType);
	bool has_answer_id();
	void clear_answer_id();
	uint32 answer_id();
	void set_answer_id(uint32);
	int answers_size();
	void clear_answers();
	const CMsgDOTASeasonPredictions_Answers & answers(int);
	CMsgDOTASeasonPredictions_Answers * mutable_answers(int);
	CMsgDOTASeasonPredictions_Answers * add_answers();
	const RepeatedPtrField<CMsgDOTASeasonPredictions_Answers> & answers();
	RepeatedPtrField<CMsgDOTASeasonPredictions_Answers> * mutable_answers();
	bool has_query_name();
	void clear_query_name();
	const string & query_name();
	void set_query_name(const string &);
	void set_query_name(const char *);
	void set_query_name(const char *, size_t);
	string * mutable_query_name();
	string * release_query_name();
	void set_allocated_query_name(string *);
	int query_bind_params_size();
	void clear_query_bind_params();
	uint32 query_bind_params(int);
	void set_query_bind_params(int, uint32);
	void add_query_bind_params(uint32);
	const RepeatedField<unsigned int> & query_bind_params();
	RepeatedField<unsigned int> * mutable_query_bind_params();
	bool has_lock_on_selection_id();
	void clear_lock_on_selection_id();
	uint32 lock_on_selection_id();
	void set_lock_on_selection_id(uint32);
	bool has_lock_on_selection_value();
	void clear_lock_on_selection_value();
	uint32 lock_on_selection_value();
	void set_lock_on_selection_value(uint32);
	bool has_lock_on_selection_set();
	void clear_lock_on_selection_set();
	bool lock_on_selection_set();
	void set_lock_on_selection_set(bool);
	void set_has_type();
	void clear_has_type();
	void set_has_question();
	void clear_has_question();
	void set_has_selection_id();
	void clear_has_selection_id();
	void set_has_start_date();
	void clear_has_start_date();
	void set_has_lock_date();
	void clear_has_lock_date();
	void set_has_reward();
	void clear_has_reward();
	void set_has_answer_type();
	void clear_has_answer_type();
	void set_has_answer_id();
	void clear_has_answer_id();
	void set_has_query_name();
	void clear_has_query_name();
	void set_has_lock_on_selection_id();
	void clear_has_lock_on_selection_id();
	void set_has_lock_on_selection_value();
	void clear_has_lock_on_selection_value();
	void set_has_lock_on_selection_set();
	void clear_has_lock_on_selection_set();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 144
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:10600
class CMsgDOTASeasonPredictions_InGamePrediction : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kTypeFieldNumber = 3;
	static const int kGroupFieldNumber = 4;
	static const int kQuestionFieldNumber = 5;
	static const int kChoicesFieldNumber = 6;
	static const int kRequiredHeroesFieldNumber = 7;
	static const int kQueryNameFieldNumber = 8;
	static const int kQueryValuesFieldNumber = 9;
	static const int kAnswerResolutionTypeFieldNumber = 10;
	static const int kPointsToGrantFieldNumber = 11;
	static const int kRewardActionFieldNumber = 12;
	static const int kDebugForceSelectionFieldNumber = 13;
	static const int kRawValueTypeFieldNumber = 14;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint32 id_;  // +0x20
	int type_;  // +0x24
	string * question_;  // +0x28
	int group_;  // +0x60
	int answer_resolution_type_;  // +0x64
	string * query_name_;  // +0x68
	uint32 points_to_grant_;  // +0x88
	uint32 reward_action_;  // +0x8c
	uint32 debug_force_selection_;  // +0x90
	int raw_value_type_;  // +0x94

	static CMsgDOTASeasonPredictions_InGamePrediction * default_instance_;
	CMsgDOTASeasonPredictions_InGamePrediction();
	virtual ~CMsgDOTASeasonPredictions_InGamePrediction();
	CMsgDOTASeasonPredictions_InGamePrediction(const CMsgDOTASeasonPredictions_InGamePrediction &);
	CMsgDOTASeasonPredictions_InGamePrediction & operator=(const CMsgDOTASeasonPredictions_InGamePrediction &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonPredictions_InGamePrediction & default_instance();
	void Swap(CMsgDOTASeasonPredictions_InGamePrediction *);
	virtual CMsgDOTASeasonPredictions_InGamePrediction * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonPredictions_InGamePrediction &);
	void MergeFrom(const CMsgDOTASeasonPredictions_InGamePrediction &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_id();
	void clear_id();
	uint32 id();
	void set_id(uint32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_type();
	void clear_type();
	CMsgDOTASeasonPredictions_ePredictionType type();
	void set_type(CMsgDOTASeasonPredictions_ePredictionType);
	bool has_group();
	void clear_group();
	CMsgDOTASeasonPredictions_eRandomSelectionGroup_t group();
	void set_group(CMsgDOTASeasonPredictions_eRandomSelectionGroup_t);
	bool has_question();
	void clear_question();
	const string & question();
	void set_question(const string &);
	void set_question(const char *);
	void set_question(const char *, size_t);
	string * mutable_question();
	string * release_question();
	void set_allocated_question(string *);
	int choices_size();
	void clear_choices();
	const CMsgDOTASeasonPredictions_Choice & choices(int);
	CMsgDOTASeasonPredictions_Choice * mutable_choices(int);
	CMsgDOTASeasonPredictions_Choice * add_choices();
	const RepeatedPtrField<CMsgDOTASeasonPredictions_Choice> & choices();
	RepeatedPtrField<CMsgDOTASeasonPredictions_Choice> * mutable_choices();
	int required_heroes_size();
	void clear_required_heroes();
	const string & required_heroes(int);
	string * mutable_required_heroes(int);
	void set_required_heroes(int, const string &);
	void set_required_heroes(int, const char *);
	void set_required_heroes(int, const char *, size_t);
	string * add_required_heroes();
	void add_required_heroes(const string &);
	void add_required_heroes(const char *);
	void add_required_heroes(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & required_heroes();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_required_heroes();
	bool has_query_name();
	void clear_query_name();
	const string & query_name();
	void set_query_name(const string &);
	void set_query_name(const char *);
	void set_query_name(const char *, size_t);
	string * mutable_query_name();
	string * release_query_name();
	void set_allocated_query_name(string *);
	int query_values_size();
	void clear_query_values();
	const CMsgDOTASeasonPredictions_QueryKeyValues & query_values(int);
	CMsgDOTASeasonPredictions_QueryKeyValues * mutable_query_values(int);
	CMsgDOTASeasonPredictions_QueryKeyValues * add_query_values();
	const RepeatedPtrField<CMsgDOTASeasonPredictions_QueryKeyValues> & query_values();
	RepeatedPtrField<CMsgDOTASeasonPredictions_QueryKeyValues> * mutable_query_values();
	bool has_answer_resolution_type();
	void clear_answer_resolution_type();
	CMsgDOTASeasonPredictions_eResolutionType_t answer_resolution_type();
	void set_answer_resolution_type(CMsgDOTASeasonPredictions_eResolutionType_t);
	bool has_points_to_grant();
	void clear_points_to_grant();
	uint32 points_to_grant();
	void set_points_to_grant(uint32);
	bool has_reward_action();
	void clear_reward_action();
	uint32 reward_action();
	void set_reward_action(uint32);
	bool has_debug_force_selection();
	void clear_debug_force_selection();
	uint32 debug_force_selection();
	void set_debug_force_selection(uint32);
	bool has_raw_value_type();
	void clear_raw_value_type();
	CMsgDOTASeasonPredictions_eRawValueType_t raw_value_type();
	void set_raw_value_type(CMsgDOTASeasonPredictions_eRawValueType_t);
	void set_has_id();
	void clear_has_id();
	void set_has_name();
	void clear_has_name();
	void set_has_type();
	void clear_has_type();
	void set_has_group();
	void clear_has_group();
	void set_has_question();
	void clear_has_question();
	void set_has_query_name();
	void clear_has_query_name();
	void set_has_answer_resolution_type();
	void clear_has_answer_resolution_type();
	void set_has_points_to_grant();
	void clear_has_points_to_grant();
	void set_has_reward_action();
	void clear_has_reward_action();
	void set_has_debug_force_selection();
	void clear_has_debug_force_selection();
	void set_has_raw_value_type();
	void clear_has_raw_value_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 152
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:10837
class CMsgDOTASeasonPredictions : public Message {
public:

	static const CMsgDOTASeasonPredictions_ePredictionType Generic;
	static const CMsgDOTASeasonPredictions_ePredictionType Hero = 1;
	static const CMsgDOTASeasonPredictions_ePredictionType Team = 2;
	static const CMsgDOTASeasonPredictions_ePredictionType Player = 3;
	static const CMsgDOTASeasonPredictions_ePredictionType Special = 4;
	static const CMsgDOTASeasonPredictions_ePredictionType YesNo = 5;
	static const CMsgDOTASeasonPredictions_ePredictionType ePredictionType_MIN;
	static const CMsgDOTASeasonPredictions_ePredictionType ePredictionType_MAX = 5;
	static const int ePredictionType_ARRAYSIZE = 6;
	static const CMsgDOTASeasonPredictions_eAnswerType SingleInt;
	static const CMsgDOTASeasonPredictions_eAnswerType SingleFloat = 1;
	static const CMsgDOTASeasonPredictions_eAnswerType MultipleInt = 2;
	static const CMsgDOTASeasonPredictions_eAnswerType MultipleFloat = 3;
	static const CMsgDOTASeasonPredictions_eAnswerType AnswerTeam = 4;
	static const CMsgDOTASeasonPredictions_eAnswerType SingleTime = 5;
	static const CMsgDOTASeasonPredictions_eAnswerType MultipleTime = 6;
	static const CMsgDOTASeasonPredictions_eAnswerType NoAnswer = 7;
	static const CMsgDOTASeasonPredictions_eAnswerType eAnswerType_MIN;
	static const CMsgDOTASeasonPredictions_eAnswerType eAnswerType_MAX = 7;
	static const int eAnswerType_ARRAYSIZE = 8;
	static const CMsgDOTASeasonPredictions_eResolutionType_t InvalidQuery;
	static const CMsgDOTASeasonPredictions_eResolutionType_t FirstToPassQuery = 1;
	static const CMsgDOTASeasonPredictions_eResolutionType_t LastToPassQuery = 2;
	static const CMsgDOTASeasonPredictions_eResolutionType_t LastRemainingQuery = 3;
	static const CMsgDOTASeasonPredictions_eResolutionType_t MaxToPassQuery = 4;
	static const CMsgDOTASeasonPredictions_eResolutionType_t MinToPassQuery = 5;
	static const CMsgDOTASeasonPredictions_eResolutionType_t SumQuery = 6;
	static const CMsgDOTASeasonPredictions_eResolutionType_t MaxTeamSumToPassQuery = 7;
	static const CMsgDOTASeasonPredictions_eResolutionType_t MinTeamSumToPassQuery = 8;
	static const CMsgDOTASeasonPredictions_eResolutionType_t eResolutionType_t_MIN;
	static const CMsgDOTASeasonPredictions_eResolutionType_t eResolutionType_t_MAX = 8;
	static const int eResolutionType_t_ARRAYSIZE = 9;
	static const CMsgDOTASeasonPredictions_eRandomSelectionGroup_t EarlyGame;
	static const CMsgDOTASeasonPredictions_eRandomSelectionGroup_t MidGame = 1;
	static const CMsgDOTASeasonPredictions_eRandomSelectionGroup_t LateGame = 2;
	static const CMsgDOTASeasonPredictions_eRandomSelectionGroup_t Count = 3;
	static const CMsgDOTASeasonPredictions_eRandomSelectionGroup_t eRandomSelectionGroup_t_MIN;
	static const CMsgDOTASeasonPredictions_eRandomSelectionGroup_t eRandomSelectionGroup_t_MAX = 3;
	static const int eRandomSelectionGroup_t_ARRAYSIZE = 4;
	static const CMsgDOTASeasonPredictions_eRawValueType_t Number;
	static const CMsgDOTASeasonPredictions_eRawValueType_t Time = 1;
	static const CMsgDOTASeasonPredictions_eRawValueType_t eRawValueType_t_MIN;
	static const CMsgDOTASeasonPredictions_eRawValueType_t eRawValueType_t_MAX = 1;
	static const int eRawValueType_t_ARRAYSIZE = 2;
	static const int kPredictionsFieldNumber = 1;
	static const int kInGamePredictionsFieldNumber = 2;
	static const int kInGamePredictionCountPerGameFieldNumber = 3;
	static const int kInGamePredictionVotingPeriodMinutesFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 in_game_prediction_count_per_game_;  // +0x48
	uint32 in_game_prediction_voting_period_minutes_;  // +0x4c

	static CMsgDOTASeasonPredictions * default_instance_;
	typedef CMsgDOTASeasonPredictions_ePredictionType ePredictionType;
	typedef CMsgDOTASeasonPredictions_eAnswerType eAnswerType;
	typedef CMsgDOTASeasonPredictions_eResolutionType_t eResolutionType_t;
	typedef CMsgDOTASeasonPredictions_eRandomSelectionGroup_t eRandomSelectionGroup_t;
	typedef CMsgDOTASeasonPredictions_eRawValueType_t eRawValueType_t;
	CMsgDOTASeasonPredictions();
	virtual ~CMsgDOTASeasonPredictions();
	CMsgDOTASeasonPredictions(const CMsgDOTASeasonPredictions &);
	CMsgDOTASeasonPredictions & operator=(const CMsgDOTASeasonPredictions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTASeasonPredictions & default_instance();
	void Swap(CMsgDOTASeasonPredictions *);
	virtual CMsgDOTASeasonPredictions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTASeasonPredictions &);
	void MergeFrom(const CMsgDOTASeasonPredictions &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool ePredictionType_IsValid(int);
	const EnumDescriptor * ePredictionType_descriptor();
	const string & ePredictionType_Name(ePredictionType);
	bool ePredictionType_Parse(const string &, ePredictionType *);
	bool eAnswerType_IsValid(int);
	const EnumDescriptor * eAnswerType_descriptor();
	const string & eAnswerType_Name(eAnswerType);
	bool eAnswerType_Parse(const string &, eAnswerType *);
	bool eResolutionType_t_IsValid(int);
	const EnumDescriptor * eResolutionType_t_descriptor();
	const string & eResolutionType_t_Name(eResolutionType_t);
	bool eResolutionType_t_Parse(const string &, eResolutionType_t *);
	bool eRandomSelectionGroup_t_IsValid(int);
	const EnumDescriptor * eRandomSelectionGroup_t_descriptor();
	const string & eRandomSelectionGroup_t_Name(eRandomSelectionGroup_t);
	bool eRandomSelectionGroup_t_Parse(const string &, eRandomSelectionGroup_t *);
	bool eRawValueType_t_IsValid(int);
	const EnumDescriptor * eRawValueType_t_descriptor();
	const string & eRawValueType_t_Name(eRawValueType_t);
	bool eRawValueType_t_Parse(const string &, eRawValueType_t *);
	int predictions_size();
	void clear_predictions();
	const CMsgDOTASeasonPredictions_Prediction & predictions(int);
	CMsgDOTASeasonPredictions_Prediction * mutable_predictions(int);
	CMsgDOTASeasonPredictions_Prediction * add_predictions();
	const RepeatedPtrField<CMsgDOTASeasonPredictions_Prediction> & predictions();
	RepeatedPtrField<CMsgDOTASeasonPredictions_Prediction> * mutable_predictions();
	int in_game_predictions_size();
	void clear_in_game_predictions();
	const CMsgDOTASeasonPredictions_InGamePrediction & in_game_predictions(int);
	CMsgDOTASeasonPredictions_InGamePrediction * mutable_in_game_predictions(int);
	CMsgDOTASeasonPredictions_InGamePrediction * add_in_game_predictions();
	const RepeatedPtrField<CMsgDOTASeasonPredictions_InGamePrediction> & in_game_predictions();
	RepeatedPtrField<CMsgDOTASeasonPredictions_InGamePrediction> * mutable_in_game_predictions();
	bool has_in_game_prediction_count_per_game();
	void clear_in_game_prediction_count_per_game();
	uint32 in_game_prediction_count_per_game();
	void set_in_game_prediction_count_per_game(uint32);
	bool has_in_game_prediction_voting_period_minutes();
	void clear_in_game_prediction_voting_period_minutes();
	uint32 in_game_prediction_voting_period_minutes();
	void set_in_game_prediction_voting_period_minutes(uint32);
	void set_has_in_game_prediction_count_per_game();
	void clear_has_in_game_prediction_count_per_game();
	void set_has_in_game_prediction_voting_period_minutes();
	void clear_has_in_game_prediction_voting_period_minutes();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 80
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:11097
class CMsgDOTAMatch_Player_CustomGameData : public Message {
public:

	static const int kDotaTeamFieldNumber = 1;
	static const int kWinnerFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 dota_team_;  // +0x18
	bool winner_;  // +0x1c

	static CMsgDOTAMatch_Player_CustomGameData * default_instance_;
	CMsgDOTAMatch_Player_CustomGameData();
	virtual ~CMsgDOTAMatch_Player_CustomGameData();
	CMsgDOTAMatch_Player_CustomGameData(const CMsgDOTAMatch_Player_CustomGameData &);
	CMsgDOTAMatch_Player_CustomGameData & operator=(const CMsgDOTAMatch_Player_CustomGameData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAMatch_Player_CustomGameData & default_instance();
	void Swap(CMsgDOTAMatch_Player_CustomGameData *);
	virtual CMsgDOTAMatch_Player_CustomGameData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAMatch_Player_CustomGameData &);
	void MergeFrom(const CMsgDOTAMatch_Player_CustomGameData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_dota_team();
	void clear_dota_team();
	uint32 dota_team();
	void set_dota_team(uint32);
	bool has_winner();
	void clear_winner();
	bool winner();
	void set_winner(bool);
	void set_has_dota_team();
	void clear_has_dota_team();
	void set_has_winner();
	void clear_has_winner();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:11186
class CMsgDOTAMatch_Player : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPlayerSlotFieldNumber = 2;
	static const int kHeroIdFieldNumber = 3;
	static const int kItem0FieldNumber = 4;
	static const int kItem1FieldNumber = 5;
	static const int kItem2FieldNumber = 6;
	static const int kItem3FieldNumber = 7;
	static const int kItem4FieldNumber = 8;
	static const int kItem5FieldNumber = 9;
	static const int kItem6FieldNumber = 59;
	static const int kItem7FieldNumber = 60;
	static const int kItem8FieldNumber = 61;
	static const int kExpectedTeamContributionFieldNumber = 10;
	static const int kScaledMetricFieldNumber = 11;
	static const int kPreviousRankFieldNumber = 12;
	static const int kRankChangeFieldNumber = 13;
	static const int kSoloRankFieldNumber = 49;
	static const int kSeasonalRankFieldNumber = 53;
	static const int kKillsFieldNumber = 14;
	static const int kDeathsFieldNumber = 15;
	static const int kAssistsFieldNumber = 16;
	static const int kLeaverStatusFieldNumber = 17;
	static const int kGoldFieldNumber = 18;
	static const int kLastHitsFieldNumber = 19;
	static const int kDeniesFieldNumber = 20;
	static const int kGoldPerMinFieldNumber = 21;
	static const int kXPPerMinFieldNumber = 22;
	static const int kGoldSpentFieldNumber = 23;
	static const int kHeroDamageFieldNumber = 24;
	static const int kTowerDamageFieldNumber = 25;
	static const int kHeroHealingFieldNumber = 26;
	static const int kLevelFieldNumber = 27;
	static const int kTimeLastSeenFieldNumber = 28;
	static const int kPlayerNameFieldNumber = 29;
	static const int kSupportAbilityValueFieldNumber = 30;
	static const int kFeedingDetectedFieldNumber = 32;
	static const int kSearchRankFieldNumber = 34;
	static const int kSearchRankUncertaintyFieldNumber = 35;
	static const int kRankUncertaintyChangeFieldNumber = 36;
	static const int kHeroPlayCountFieldNumber = 37;
	static const int kPartyIdFieldNumber = 38;
	static const int kScaledHeroDamageFieldNumber = 54;
	static const int kScaledTowerDamageFieldNumber = 55;
	static const int kScaledHeroHealingFieldNumber = 56;
	static const int kScaledKillsFieldNumber = 39;
	static const int kScaledDeathsFieldNumber = 40;
	static const int kScaledAssistsFieldNumber = 41;
	static const int kClaimedFarmGoldFieldNumber = 42;
	static const int kSupportGoldFieldNumber = 43;
	static const int kClaimedDeniesFieldNumber = 44;
	static const int kClaimedMissesFieldNumber = 45;
	static const int kMissesFieldNumber = 46;
	static const int kAbilityUpgradesFieldNumber = 47;
	static const int kAdditionalUnitsInventoryFieldNumber = 48;
	static const int kPermanentBuffsFieldNumber = 57;
	static const int kCustomGameDataFieldNumber = 50;
	static const int kActiveBattlePassFieldNumber = 51;
	static const int kNetWorthFieldNumber = 52;
	static const int kBotDifficultyFieldNumber = 58;
private:

	unsigned int _has_bits_[2];  // +0x10
	uint32 account_id_;  // +0x18
	uint32 player_slot_;  // +0x1c
	uint32 hero_id_;  // +0x20
	uint32 item_0_;  // +0x24
	uint32 item_1_;  // +0x28
	uint32 item_2_;  // +0x2c
	uint32 item_3_;  // +0x30
	uint32 item_4_;  // +0x34
	uint32 item_5_;  // +0x38
	uint32 item_6_;  // +0x3c
	uint32 item_7_;  // +0x40
	uint32 item_8_;  // +0x44
	float expected_team_contribution_;  // +0x48
	float scaled_metric_;  // +0x4c
	uint32 previous_rank_;  // +0x50
	int32 rank_change_;  // +0x54
	uint32 kills_;  // +0x58
	uint32 deaths_;  // +0x5c
	uint32 assists_;  // +0x60
	uint32 leaver_status_;  // +0x64
	uint32 gold_;  // +0x68
	uint32 last_hits_;  // +0x6c
	uint32 denies_;  // +0x70
	uint32 gold_per_min_;  // +0x74
	uint32 xp_per_min_;  // +0x78
	uint32 gold_spent_;  // +0x7c
	uint32 hero_damage_;  // +0x80
	uint32 tower_damage_;  // +0x84
	uint32 hero_healing_;  // +0x88
	uint32 level_;  // +0x8c
	bool solo_rank_;  // +0x90
	bool seasonal_rank_;  // +0x91
	bool feeding_detected_;  // +0x92
	bool active_battle_pass_;  // +0x93
	uint32 time_last_seen_;  // +0x94
	string * player_name_;  // +0x98
	uint32 support_ability_value_;  // +0xa0
	uint32 search_rank_;  // +0xa4
	uint32 search_rank_uncertainty_;  // +0xa8
	int32 rank_uncertainty_change_;  // +0xac
	uint64 party_id_;  // +0xb0
	uint32 hero_play_count_;  // +0xb8
	uint32 scaled_hero_damage_;  // +0xbc
	uint32 scaled_tower_damage_;  // +0xc0
	uint32 scaled_hero_healing_;  // +0xc4
	float scaled_kills_;  // +0xc8
	float scaled_deaths_;  // +0xcc
	float scaled_assists_;  // +0xd0
	uint32 claimed_farm_gold_;  // +0xd4
	uint32 support_gold_;  // +0xd8
	uint32 claimed_denies_;  // +0xdc
	uint32 claimed_misses_;  // +0xe0
	uint32 misses_;  // +0xe4
	uint32 net_worth_;  // +0x138
	uint32 bot_difficulty_;  // +0x13c
	int _cached_size_;  // +0x140

	static CMsgDOTAMatch_Player * default_instance_;
	CMsgDOTAMatch_Player();
	virtual ~CMsgDOTAMatch_Player();
	CMsgDOTAMatch_Player(const CMsgDOTAMatch_Player &);
	CMsgDOTAMatch_Player & operator=(const CMsgDOTAMatch_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAMatch_Player & default_instance();
	void Swap(CMsgDOTAMatch_Player *);
	virtual CMsgDOTAMatch_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAMatch_Player &);
	void MergeFrom(const CMsgDOTAMatch_Player &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_player_slot();
	void clear_player_slot();
	uint32 player_slot();
	void set_player_slot(uint32);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	bool has_item_0();
	void clear_item_0();
	uint32 item_0();
	void set_item_0(uint32);
	bool has_item_1();
	void clear_item_1();
	uint32 item_1();
	void set_item_1(uint32);
	bool has_item_2();
	void clear_item_2();
	uint32 item_2();
	void set_item_2(uint32);
	bool has_item_3();
	void clear_item_3();
	uint32 item_3();
	void set_item_3(uint32);
	bool has_item_4();
	void clear_item_4();
	uint32 item_4();
	void set_item_4(uint32);
	bool has_item_5();
	void clear_item_5();
	uint32 item_5();
	void set_item_5(uint32);
	bool has_item_6();
	void clear_item_6();
	uint32 item_6();
	void set_item_6(uint32);
	bool has_item_7();
	void clear_item_7();
	uint32 item_7();
	void set_item_7(uint32);
	bool has_item_8();
	void clear_item_8();
	uint32 item_8();
	void set_item_8(uint32);
	bool has_expected_team_contribution();
	void clear_expected_team_contribution();
	float expected_team_contribution();
	void set_expected_team_contribution(float);
	bool has_scaled_metric();
	void clear_scaled_metric();
	float scaled_metric();
	void set_scaled_metric(float);
	bool has_previous_rank();
	void clear_previous_rank();
	uint32 previous_rank();
	void set_previous_rank(uint32);
	bool has_rank_change();
	void clear_rank_change();
	int32 rank_change();
	void set_rank_change(int32);
	bool has_solo_rank();
	void clear_solo_rank();
	bool solo_rank();
	void set_solo_rank(bool);
	bool has_seasonal_rank();
	void clear_seasonal_rank();
	bool seasonal_rank();
	void set_seasonal_rank(bool);
	bool has_kills();
	void clear_kills();
	uint32 kills();
	void set_kills(uint32);
	bool has_deaths();
	void clear_deaths();
	uint32 deaths();
	void set_deaths(uint32);
	bool has_assists();
	void clear_assists();
	uint32 assists();
	void set_assists(uint32);
	bool has_leaver_status();
	void clear_leaver_status();
	uint32 leaver_status();
	void set_leaver_status(uint32);
	bool has_gold();
	void clear_gold();
	uint32 gold();
	void set_gold(uint32);
	bool has_last_hits();
	void clear_last_hits();
	uint32 last_hits();
	void set_last_hits(uint32);
	bool has_denies();
	void clear_denies();
	uint32 denies();
	void set_denies(uint32);
	bool has_gold_per_min();
	void clear_gold_per_min();
	uint32 gold_per_min();
	void set_gold_per_min(uint32);
	bool has_xp_per_min();
	void clear_xp_per_min();
	uint32 xp_per_min();
	void set_xp_per_min(uint32);
	bool has_gold_spent();
	void clear_gold_spent();
	uint32 gold_spent();
	void set_gold_spent(uint32);
	bool has_hero_damage();
	void clear_hero_damage();
	uint32 hero_damage();
	void set_hero_damage(uint32);
	bool has_tower_damage();
	void clear_tower_damage();
	uint32 tower_damage();
	void set_tower_damage(uint32);
	bool has_hero_healing();
	void clear_hero_healing();
	uint32 hero_healing();
	void set_hero_healing(uint32);
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	bool has_time_last_seen();
	void clear_time_last_seen();
	uint32 time_last_seen();
	void set_time_last_seen(uint32);
	bool has_player_name();
	void clear_player_name();
	const string & player_name();
	void set_player_name(const string &);
	void set_player_name(const char *);
	void set_player_name(const char *, size_t);
	string * mutable_player_name();
	string * release_player_name();
	void set_allocated_player_name(string *);
	bool has_support_ability_value();
	void clear_support_ability_value();
	uint32 support_ability_value();
	void set_support_ability_value(uint32);
	bool has_feeding_detected();
	void clear_feeding_detected();
	bool feeding_detected();
	void set_feeding_detected(bool);
	bool has_search_rank();
	void clear_search_rank();
	uint32 search_rank();
	void set_search_rank(uint32);
	bool has_search_rank_uncertainty();
	void clear_search_rank_uncertainty();
	uint32 search_rank_uncertainty();
	void set_search_rank_uncertainty(uint32);
	bool has_rank_uncertainty_change();
	void clear_rank_uncertainty_change();
	int32 rank_uncertainty_change();
	void set_rank_uncertainty_change(int32);
	bool has_hero_play_count();
	void clear_hero_play_count();
	uint32 hero_play_count();
	void set_hero_play_count(uint32);
	bool has_party_id();
	void clear_party_id();
	uint64 party_id();
	void set_party_id(uint64);
	bool has_scaled_hero_damage();
	void clear_scaled_hero_damage();
	uint32 scaled_hero_damage();
	void set_scaled_hero_damage(uint32);
	bool has_scaled_tower_damage();
	void clear_scaled_tower_damage();
	uint32 scaled_tower_damage();
	void set_scaled_tower_damage(uint32);
	bool has_scaled_hero_healing();
	void clear_scaled_hero_healing();
	uint32 scaled_hero_healing();
	void set_scaled_hero_healing(uint32);
	bool has_scaled_kills();
	void clear_scaled_kills();
	float scaled_kills();
	void set_scaled_kills(float);
	bool has_scaled_deaths();
	void clear_scaled_deaths();
	float scaled_deaths();
	void set_scaled_deaths(float);
	bool has_scaled_assists();
	void clear_scaled_assists();
	float scaled_assists();
	void set_scaled_assists(float);
	bool has_claimed_farm_gold();
	void clear_claimed_farm_gold();
	uint32 claimed_farm_gold();
	void set_claimed_farm_gold(uint32);
	bool has_support_gold();
	void clear_support_gold();
	uint32 support_gold();
	void set_support_gold(uint32);
	bool has_claimed_denies();
	void clear_claimed_denies();
	uint32 claimed_denies();
	void set_claimed_denies(uint32);
	bool has_claimed_misses();
	void clear_claimed_misses();
	uint32 claimed_misses();
	void set_claimed_misses(uint32);
	bool has_misses();
	void clear_misses();
	uint32 misses();
	void set_misses(uint32);
	int ability_upgrades_size();
	void clear_ability_upgrades();
	const CMatchPlayerAbilityUpgrade & ability_upgrades(int);
	CMatchPlayerAbilityUpgrade * mutable_ability_upgrades(int);
	CMatchPlayerAbilityUpgrade * add_ability_upgrades();
	const RepeatedPtrField<CMatchPlayerAbilityUpgrade> & ability_upgrades();
	RepeatedPtrField<CMatchPlayerAbilityUpgrade> * mutable_ability_upgrades();
	int additional_units_inventory_size();
	void clear_additional_units_inventory();
	const CMatchAdditionalUnitInventory & additional_units_inventory(int);
	CMatchAdditionalUnitInventory * mutable_additional_units_inventory(int);
	CMatchAdditionalUnitInventory * add_additional_units_inventory();
	const RepeatedPtrField<CMatchAdditionalUnitInventory> & additional_units_inventory();
	RepeatedPtrField<CMatchAdditionalUnitInventory> * mutable_additional_units_inventory();
	int permanent_buffs_size();
	void clear_permanent_buffs();
	const CMatchPlayerPermanentBuff & permanent_buffs(int);
	CMatchPlayerPermanentBuff * mutable_permanent_buffs(int);
	CMatchPlayerPermanentBuff * add_permanent_buffs();
	const RepeatedPtrField<CMatchPlayerPermanentBuff> & permanent_buffs();
	RepeatedPtrField<CMatchPlayerPermanentBuff> * mutable_permanent_buffs();
	bool has_custom_game_data();
	void clear_custom_game_data();
	const CMsgDOTAMatch_Player_CustomGameData & custom_game_data();
	CMsgDOTAMatch_Player_CustomGameData * mutable_custom_game_data();
	CMsgDOTAMatch_Player_CustomGameData * release_custom_game_data();
	void set_allocated_custom_game_data(CMsgDOTAMatch_Player_CustomGameData *);
	bool has_active_battle_pass();
	void clear_active_battle_pass();
	bool active_battle_pass();
	void set_active_battle_pass(bool);
	bool has_net_worth();
	void clear_net_worth();
	uint32 net_worth();
	void set_net_worth(uint32);
	bool has_bot_difficulty();
	void clear_bot_difficulty();
	uint32 bot_difficulty();
	void set_bot_difficulty(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_player_slot();
	void clear_has_player_slot();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_item_0();
	void clear_has_item_0();
	void set_has_item_1();
	void clear_has_item_1();
	void set_has_item_2();
	void clear_has_item_2();
	void set_has_item_3();
	void clear_has_item_3();
	void set_has_item_4();
	void clear_has_item_4();
	void set_has_item_5();
	void clear_has_item_5();
	void set_has_item_6();
	void clear_has_item_6();
	void set_has_item_7();
	void clear_has_item_7();
	void set_has_item_8();
	void clear_has_item_8();
	void set_has_expected_team_contribution();
	void clear_has_expected_team_contribution();
	void set_has_scaled_metric();
	void clear_has_scaled_metric();
	void set_has_previous_rank();
	void clear_has_previous_rank();
	void set_has_rank_change();
	void clear_has_rank_change();
	void set_has_solo_rank();
	void clear_has_solo_rank();
	void set_has_seasonal_rank();
	void clear_has_seasonal_rank();
	void set_has_kills();
	void clear_has_kills();
	void set_has_deaths();
	void clear_has_deaths();
	void set_has_assists();
	void clear_has_assists();
	void set_has_leaver_status();
	void clear_has_leaver_status();
	void set_has_gold();
	void clear_has_gold();
	void set_has_last_hits();
	void clear_has_last_hits();
	void set_has_denies();
	void clear_has_denies();
	void set_has_gold_per_min();
	void clear_has_gold_per_min();
	void set_has_xp_per_min();
	void clear_has_xp_per_min();
	void set_has_gold_spent();
	void clear_has_gold_spent();
	void set_has_hero_damage();
	void clear_has_hero_damage();
	void set_has_tower_damage();
	void clear_has_tower_damage();
	void set_has_hero_healing();
	void clear_has_hero_healing();
	void set_has_level();
	void clear_has_level();
	void set_has_time_last_seen();
	void clear_has_time_last_seen();
	void set_has_player_name();
	void clear_has_player_name();
	void set_has_support_ability_value();
	void clear_has_support_ability_value();
	void set_has_feeding_detected();
	void clear_has_feeding_detected();
	void set_has_search_rank();
	void clear_has_search_rank();
	void set_has_search_rank_uncertainty();
	void clear_has_search_rank_uncertainty();
	void set_has_rank_uncertainty_change();
	void clear_has_rank_uncertainty_change();
	void set_has_hero_play_count();
	void clear_has_hero_play_count();
	void set_has_party_id();
	void clear_has_party_id();
	void set_has_scaled_hero_damage();
	void clear_has_scaled_hero_damage();
	void set_has_scaled_tower_damage();
	void clear_has_scaled_tower_damage();
	void set_has_scaled_hero_healing();
	void clear_has_scaled_hero_healing();
	void set_has_scaled_kills();
	void clear_has_scaled_kills();
	void set_has_scaled_deaths();
	void clear_has_scaled_deaths();
	void set_has_scaled_assists();
	void clear_has_scaled_assists();
	void set_has_claimed_farm_gold();
	void clear_has_claimed_farm_gold();
	void set_has_support_gold();
	void clear_has_support_gold();
	void set_has_claimed_denies();
	void clear_has_claimed_denies();
	void set_has_claimed_misses();
	void clear_has_claimed_misses();
	void set_has_misses();
	void clear_has_misses();
	void set_has_custom_game_data();
	void clear_has_custom_game_data();
	void set_has_active_battle_pass();
	void clear_has_active_battle_pass();
	void set_has_net_worth();
	void clear_has_net_worth();
	void set_has_bot_difficulty();
	void clear_has_bot_difficulty();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 328
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:11863
class CMsgDOTAMatch_BroadcasterInfo : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint32 account_id_;  // +0x20

	static CMsgDOTAMatch_BroadcasterInfo * default_instance_;
	CMsgDOTAMatch_BroadcasterInfo();
	virtual ~CMsgDOTAMatch_BroadcasterInfo();
	CMsgDOTAMatch_BroadcasterInfo(const CMsgDOTAMatch_BroadcasterInfo &);
	CMsgDOTAMatch_BroadcasterInfo & operator=(const CMsgDOTAMatch_BroadcasterInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAMatch_BroadcasterInfo & default_instance();
	void Swap(CMsgDOTAMatch_BroadcasterInfo *);
	virtual CMsgDOTAMatch_BroadcasterInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAMatch_BroadcasterInfo &);
	void MergeFrom(const CMsgDOTAMatch_BroadcasterInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_name();
	void clear_has_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:11957
class CMsgDOTAMatch_BroadcasterChannel : public Message {
public:

	static const int kCountryCodeFieldNumber = 1;
	static const int kDescriptionFieldNumber = 2;
	static const int kBroadcasterInfosFieldNumber = 3;
	static const int kLanguageCodeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * country_code_;  // +0x18
	string * description_;  // +0x20
	string * language_code_;  // +0x40

	static CMsgDOTAMatch_BroadcasterChannel * default_instance_;
	CMsgDOTAMatch_BroadcasterChannel();
	virtual ~CMsgDOTAMatch_BroadcasterChannel();
	CMsgDOTAMatch_BroadcasterChannel(const CMsgDOTAMatch_BroadcasterChannel &);
	CMsgDOTAMatch_BroadcasterChannel & operator=(const CMsgDOTAMatch_BroadcasterChannel &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAMatch_BroadcasterChannel & default_instance();
	void Swap(CMsgDOTAMatch_BroadcasterChannel *);
	virtual CMsgDOTAMatch_BroadcasterChannel * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAMatch_BroadcasterChannel &);
	void MergeFrom(const CMsgDOTAMatch_BroadcasterChannel &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_country_code();
	void clear_country_code();
	const string & country_code();
	void set_country_code(const string &);
	void set_country_code(const char *);
	void set_country_code(const char *, size_t);
	string * mutable_country_code();
	string * release_country_code();
	void set_allocated_country_code(string *);
	bool has_description();
	void clear_description();
	const string & description();
	void set_description(const string &);
	void set_description(const char *);
	void set_description(const char *, size_t);
	string * mutable_description();
	string * release_description();
	void set_allocated_description(string *);
	int broadcaster_infos_size();
	void clear_broadcaster_infos();
	const CMsgDOTAMatch_BroadcasterInfo & broadcaster_infos(int);
	CMsgDOTAMatch_BroadcasterInfo * mutable_broadcaster_infos(int);
	CMsgDOTAMatch_BroadcasterInfo * add_broadcaster_infos();
	const RepeatedPtrField<CMsgDOTAMatch_BroadcasterInfo> & broadcaster_infos();
	RepeatedPtrField<CMsgDOTAMatch_BroadcasterInfo> * mutable_broadcaster_infos();
	bool has_language_code();
	void clear_language_code();
	const string & language_code();
	void set_language_code(const string &);
	void set_language_code(const char *);
	void set_language_code(const char *, size_t);
	string * mutable_language_code();
	string * release_language_code();
	void set_allocated_language_code(string *);
	void set_has_country_code();
	void clear_has_country_code();
	void set_has_description();
	void clear_has_description();
	void set_has_language_code();
	void clear_has_language_code();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 72
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:12084
class CMsgDOTAMatch_CustomGameData : public Message {
public:

	static const int kCustomGameIdFieldNumber = 1;
	static const int kMapNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 custom_game_id_;  // +0x18
	string * map_name_;  // +0x20

	static CMsgDOTAMatch_CustomGameData * default_instance_;
	CMsgDOTAMatch_CustomGameData();
	virtual ~CMsgDOTAMatch_CustomGameData();
	CMsgDOTAMatch_CustomGameData(const CMsgDOTAMatch_CustomGameData &);
	CMsgDOTAMatch_CustomGameData & operator=(const CMsgDOTAMatch_CustomGameData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAMatch_CustomGameData & default_instance();
	void Swap(CMsgDOTAMatch_CustomGameData *);
	virtual CMsgDOTAMatch_CustomGameData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAMatch_CustomGameData &);
	void MergeFrom(const CMsgDOTAMatch_CustomGameData &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_custom_game_id();
	void clear_custom_game_id();
	uint64 custom_game_id();
	void set_custom_game_id(uint64);
	bool has_map_name();
	void clear_map_name();
	const string & map_name();
	void set_map_name(const string &);
	void set_map_name(const char *);
	void set_map_name(const char *, size_t);
	string * mutable_map_name();
	string * release_map_name();
	void set_allocated_map_name(string *);
	void set_has_custom_game_id();
	void clear_has_custom_game_id();
	void set_has_map_name();
	void clear_has_map_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:12178
class CMsgDOTAMatch : public Message {
public:

	static const CMsgDOTAMatch_ReplayState REPLAY_AVAILABLE;
	static const CMsgDOTAMatch_ReplayState REPLAY_NOT_RECORDED = 1;
	static const CMsgDOTAMatch_ReplayState REPLAY_EXPIRED = 2;
	static const CMsgDOTAMatch_ReplayState ReplayState_MIN;
	static const CMsgDOTAMatch_ReplayState ReplayState_MAX = 2;
	static const int ReplayState_ARRAYSIZE = 3;
	static const int kDurationFieldNumber = 3;
	static const int kStartTimeFieldNumber = 4;
	static const int kPlayersFieldNumber = 5;
	static const int kMatchIdFieldNumber = 6;
	static const int kTowerStatusFieldNumber = 8;
	static const int kBarracksStatusFieldNumber = 9;
	static const int kClusterFieldNumber = 10;
	static const int kFirstBloodTimeFieldNumber = 12;
	static const int kReplaySaltFieldNumber = 13;
	static const int kServerIpFieldNumber = 14;
	static const int kServerPortFieldNumber = 15;
	static const int kLobbyTypeFieldNumber = 16;
	static const int kHumanPlayersFieldNumber = 17;
	static const int kAverageSkillFieldNumber = 18;
	static const int kGameBalanceFieldNumber = 19;
	static const int kRadiantTeamIdFieldNumber = 20;
	static const int kDireTeamIdFieldNumber = 21;
	static const int kLeagueidFieldNumber = 22;
	static const int kRadiantTeamNameFieldNumber = 23;
	static const int kDireTeamNameFieldNumber = 24;
	static const int kRadiantTeamLogoFieldNumber = 25;
	static const int kDireTeamLogoFieldNumber = 26;
	static const int kRadiantTeamCompleteFieldNumber = 27;
	static const int kDireTeamCompleteFieldNumber = 28;
	static const int kPositiveVotesFieldNumber = 29;
	static const int kNegativeVotesFieldNumber = 30;
	static const int kGameModeFieldNumber = 31;
	static const int kPicksBansFieldNumber = 32;
	static const int kMatchSeqNumFieldNumber = 33;
	static const int kReplayStateFieldNumber = 34;
	static const int kRadiantGuildIdFieldNumber = 35;
	static const int kDireGuildIdFieldNumber = 36;
	static const int kRadiantTeamTagFieldNumber = 37;
	static const int kDireTeamTagFieldNumber = 38;
	static const int kSeriesIdFieldNumber = 39;
	static const int kSeriesTypeFieldNumber = 40;
	static const int kBroadcasterChannelsFieldNumber = 43;
	static const int kEngineFieldNumber = 44;
	static const int kCustomGameDataFieldNumber = 45;
	static const int kMatchFlagsFieldNumber = 46;
	static const int kPrivateMetadataKeyFieldNumber = 47;
	static const int kRadiantTeamScoreFieldNumber = 48;
	static const int kDireTeamScoreFieldNumber = 49;
	static const int kMatchOutcomeFieldNumber = 50;
	static const int kTournamentIdFieldNumber = 51;
	static const int kTournamentRoundFieldNumber = 52;
	static const int kPreGameDurationFieldNumber = 53;
private:

	unsigned int _has_bits_[2];  // +0x10
	uint32 duration_;  // +0x18
	uint32 starttime_;  // +0x1c
	uint64 match_id_;  // +0x38
	uint32 cluster_;  // +0x60
	uint32 first_blood_time_;  // +0x64
	uint32 replay_salt_;  // +0x68
	uint32 server_ip_;  // +0x6c
	uint32 server_port_;  // +0x70
	uint32 lobby_type_;  // +0x74
	uint32 human_players_;  // +0x78
	uint32 average_skill_;  // +0x7c
	float game_balance_;  // +0x80
	uint32 radiant_team_id_;  // +0x84
	uint32 dire_team_id_;  // +0x88
	uint32 leagueid_;  // +0x8c
	string * radiant_team_name_;  // +0x90
	string * dire_team_name_;  // +0x98
	uint64 radiant_team_logo_;  // +0xa0
	uint64 dire_team_logo_;  // +0xa8
	uint32 radiant_team_complete_;  // +0xb0
	uint32 dire_team_complete_;  // +0xb4
	uint32 positive_votes_;  // +0xb8
	uint32 negative_votes_;  // +0xbc
	int game_mode_;  // +0xd8
	int replay_state_;  // +0xdc
	uint64 match_seq_num_;  // +0xe0
	uint32 radiant_guild_id_;  // +0xe8
	uint32 dire_guild_id_;  // +0xec
	string * radiant_team_tag_;  // +0xf0
	string * dire_team_tag_;  // +0xf8
	uint32 series_id_;  // +0x100
	uint32 series_type_;  // +0x104
	uint32 engine_;  // +0x128
	uint32 match_flags_;  // +0x12c
	uint32 private_metadata_key_;  // +0x130
	uint32 radiant_team_score_;  // +0x134
	uint32 dire_team_score_;  // +0x138
	int match_outcome_;  // +0x13c
	uint32 tournament_id_;  // +0x140
	uint32 tournament_round_;  // +0x144
	uint32 pre_game_duration_;  // +0x148
	int _cached_size_;  // +0x14c

	static CMsgDOTAMatch * default_instance_;
	typedef CMsgDOTAMatch_ReplayState ReplayState;
	CMsgDOTAMatch();
	virtual ~CMsgDOTAMatch();
	CMsgDOTAMatch(const CMsgDOTAMatch &);
	CMsgDOTAMatch & operator=(const CMsgDOTAMatch &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAMatch & default_instance();
	void Swap(CMsgDOTAMatch *);
	virtual CMsgDOTAMatch * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAMatch &);
	void MergeFrom(const CMsgDOTAMatch &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool ReplayState_IsValid(int);
	const EnumDescriptor * ReplayState_descriptor();
	const string & ReplayState_Name(ReplayState);
	bool ReplayState_Parse(const string &, ReplayState *);
	bool has_duration();
	void clear_duration();
	uint32 duration();
	void set_duration(uint32);
	bool has_starttime();
	void clear_starttime();
	uint32 starttime();
	void set_starttime(uint32);
	int players_size();
	void clear_players();
	const CMsgDOTAMatch_Player & players(int);
	CMsgDOTAMatch_Player * mutable_players(int);
	CMsgDOTAMatch_Player * add_players();
	const RepeatedPtrField<CMsgDOTAMatch_Player> & players();
	RepeatedPtrField<CMsgDOTAMatch_Player> * mutable_players();
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	int tower_status_size();
	void clear_tower_status();
	uint32 tower_status(int);
	void set_tower_status(int, uint32);
	void add_tower_status(uint32);
	const RepeatedField<unsigned int> & tower_status();
	RepeatedField<unsigned int> * mutable_tower_status();
	int barracks_status_size();
	void clear_barracks_status();
	uint32 barracks_status(int);
	void set_barracks_status(int, uint32);
	void add_barracks_status(uint32);
	const RepeatedField<unsigned int> & barracks_status();
	RepeatedField<unsigned int> * mutable_barracks_status();
	bool has_cluster();
	void clear_cluster();
	uint32 cluster();
	void set_cluster(uint32);
	bool has_first_blood_time();
	void clear_first_blood_time();
	uint32 first_blood_time();
	void set_first_blood_time(uint32);
	bool has_replay_salt();
	void clear_replay_salt();
	uint32 replay_salt();
	void set_replay_salt(uint32);
	bool has_server_ip();
	void clear_server_ip();
	uint32 server_ip();
	void set_server_ip(uint32);
	bool has_server_port();
	void clear_server_port();
	uint32 server_port();
	void set_server_port(uint32);
	bool has_lobby_type();
	void clear_lobby_type();
	uint32 lobby_type();
	void set_lobby_type(uint32);
	bool has_human_players();
	void clear_human_players();
	uint32 human_players();
	void set_human_players(uint32);
	bool has_average_skill();
	void clear_average_skill();
	uint32 average_skill();
	void set_average_skill(uint32);
	bool has_game_balance();
	void clear_game_balance();
	float game_balance();
	void set_game_balance(float);
	bool has_radiant_team_id();
	void clear_radiant_team_id();
	uint32 radiant_team_id();
	void set_radiant_team_id(uint32);
	bool has_dire_team_id();
	void clear_dire_team_id();
	uint32 dire_team_id();
	void set_dire_team_id(uint32);
	bool has_leagueid();
	void clear_leagueid();
	uint32 leagueid();
	void set_leagueid(uint32);
	bool has_radiant_team_name();
	void clear_radiant_team_name();
	const string & radiant_team_name();
	void set_radiant_team_name(const string &);
	void set_radiant_team_name(const char *);
	void set_radiant_team_name(const char *, size_t);
	string * mutable_radiant_team_name();
	string * release_radiant_team_name();
	void set_allocated_radiant_team_name(string *);
	bool has_dire_team_name();
	void clear_dire_team_name();
	const string & dire_team_name();
	void set_dire_team_name(const string &);
	void set_dire_team_name(const char *);
	void set_dire_team_name(const char *, size_t);
	string * mutable_dire_team_name();
	string * release_dire_team_name();
	void set_allocated_dire_team_name(string *);
	bool has_radiant_team_logo();
	void clear_radiant_team_logo();
	uint64 radiant_team_logo();
	void set_radiant_team_logo(uint64);
	bool has_dire_team_logo();
	void clear_dire_team_logo();
	uint64 dire_team_logo();
	void set_dire_team_logo(uint64);
	bool has_radiant_team_complete();
	void clear_radiant_team_complete();
	uint32 radiant_team_complete();
	void set_radiant_team_complete(uint32);
	bool has_dire_team_complete();
	void clear_dire_team_complete();
	uint32 dire_team_complete();
	void set_dire_team_complete(uint32);
	bool has_positive_votes();
	void clear_positive_votes();
	uint32 positive_votes();
	void set_positive_votes(uint32);
	bool has_negative_votes();
	void clear_negative_votes();
	uint32 negative_votes();
	void set_negative_votes(uint32);
	bool has_game_mode();
	void clear_game_mode();
	DOTA_GameMode game_mode();
	void set_game_mode(DOTA_GameMode);
	int picks_bans_size();
	void clear_picks_bans();
	const CMatchHeroSelectEvent & picks_bans(int);
	CMatchHeroSelectEvent * mutable_picks_bans(int);
	CMatchHeroSelectEvent * add_picks_bans();
	const RepeatedPtrField<CMatchHeroSelectEvent> & picks_bans();
	RepeatedPtrField<CMatchHeroSelectEvent> * mutable_picks_bans();
	bool has_match_seq_num();
	void clear_match_seq_num();
	uint64 match_seq_num();
	void set_match_seq_num(uint64);
	bool has_replay_state();
	void clear_replay_state();
	CMsgDOTAMatch_ReplayState replay_state();
	void set_replay_state(CMsgDOTAMatch_ReplayState);
	bool has_radiant_guild_id();
	void clear_radiant_guild_id();
	uint32 radiant_guild_id();
	void set_radiant_guild_id(uint32);
	bool has_dire_guild_id();
	void clear_dire_guild_id();
	uint32 dire_guild_id();
	void set_dire_guild_id(uint32);
	bool has_radiant_team_tag();
	void clear_radiant_team_tag();
	const string & radiant_team_tag();
	void set_radiant_team_tag(const string &);
	void set_radiant_team_tag(const char *);
	void set_radiant_team_tag(const char *, size_t);
	string * mutable_radiant_team_tag();
	string * release_radiant_team_tag();
	void set_allocated_radiant_team_tag(string *);
	bool has_dire_team_tag();
	void clear_dire_team_tag();
	const string & dire_team_tag();
	void set_dire_team_tag(const string &);
	void set_dire_team_tag(const char *);
	void set_dire_team_tag(const char *, size_t);
	string * mutable_dire_team_tag();
	string * release_dire_team_tag();
	void set_allocated_dire_team_tag(string *);
	bool has_series_id();
	void clear_series_id();
	uint32 series_id();
	void set_series_id(uint32);
	bool has_series_type();
	void clear_series_type();
	uint32 series_type();
	void set_series_type(uint32);
	int broadcaster_channels_size();
	void clear_broadcaster_channels();
	const CMsgDOTAMatch_BroadcasterChannel & broadcaster_channels(int);
	CMsgDOTAMatch_BroadcasterChannel * mutable_broadcaster_channels(int);
	CMsgDOTAMatch_BroadcasterChannel * add_broadcaster_channels();
	const RepeatedPtrField<CMsgDOTAMatch_BroadcasterChannel> & broadcaster_channels();
	RepeatedPtrField<CMsgDOTAMatch_BroadcasterChannel> * mutable_broadcaster_channels();
	bool has_engine();
	void clear_engine();
	uint32 engine();
	void set_engine(uint32);
	bool has_custom_game_data();
	void clear_custom_game_data();
	const CMsgDOTAMatch_CustomGameData & custom_game_data();
	CMsgDOTAMatch_CustomGameData * mutable_custom_game_data();
	CMsgDOTAMatch_CustomGameData * release_custom_game_data();
	void set_allocated_custom_game_data(CMsgDOTAMatch_CustomGameData *);
	bool has_match_flags();
	void clear_match_flags();
	uint32 match_flags();
	void set_match_flags(uint32);
	bool has_private_metadata_key();
	void clear_private_metadata_key();
	uint32 private_metadata_key();
	void set_private_metadata_key(uint32);
	bool has_radiant_team_score();
	void clear_radiant_team_score();
	uint32 radiant_team_score();
	void set_radiant_team_score(uint32);
	bool has_dire_team_score();
	void clear_dire_team_score();
	uint32 dire_team_score();
	void set_dire_team_score(uint32);
	bool has_match_outcome();
	void clear_match_outcome();
	EMatchOutcome match_outcome();
	void set_match_outcome(EMatchOutcome);
	bool has_tournament_id();
	void clear_tournament_id();
	uint32 tournament_id();
	void set_tournament_id(uint32);
	bool has_tournament_round();
	void clear_tournament_round();
	uint32 tournament_round();
	void set_tournament_round(uint32);
	bool has_pre_game_duration();
	void clear_pre_game_duration();
	uint32 pre_game_duration();
	void set_pre_game_duration(uint32);
	void set_has_duration();
	void clear_has_duration();
	void set_has_starttime();
	void clear_has_starttime();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_cluster();
	void clear_has_cluster();
	void set_has_first_blood_time();
	void clear_has_first_blood_time();
	void set_has_replay_salt();
	void clear_has_replay_salt();
	void set_has_server_ip();
	void clear_has_server_ip();
	void set_has_server_port();
	void clear_has_server_port();
	void set_has_lobby_type();
	void clear_has_lobby_type();
	void set_has_human_players();
	void clear_has_human_players();
	void set_has_average_skill();
	void clear_has_average_skill();
	void set_has_game_balance();
	void clear_has_game_balance();
	void set_has_radiant_team_id();
	void clear_has_radiant_team_id();
	void set_has_dire_team_id();
	void clear_has_dire_team_id();
	void set_has_leagueid();
	void clear_has_leagueid();
	void set_has_radiant_team_name();
	void clear_has_radiant_team_name();
	void set_has_dire_team_name();
	void clear_has_dire_team_name();
	void set_has_radiant_team_logo();
	void clear_has_radiant_team_logo();
	void set_has_dire_team_logo();
	void clear_has_dire_team_logo();
	void set_has_radiant_team_complete();
	void clear_has_radiant_team_complete();
	void set_has_dire_team_complete();
	void clear_has_dire_team_complete();
	void set_has_positive_votes();
	void clear_has_positive_votes();
	void set_has_negative_votes();
	void clear_has_negative_votes();
	void set_has_game_mode();
	void clear_has_game_mode();
	void set_has_match_seq_num();
	void clear_has_match_seq_num();
	void set_has_replay_state();
	void clear_has_replay_state();
	void set_has_radiant_guild_id();
	void clear_has_radiant_guild_id();
	void set_has_dire_guild_id();
	void clear_has_dire_guild_id();
	void set_has_radiant_team_tag();
	void clear_has_radiant_team_tag();
	void set_has_dire_team_tag();
	void clear_has_dire_team_tag();
	void set_has_series_id();
	void clear_has_series_id();
	void set_has_series_type();
	void clear_has_series_type();
	void set_has_engine();
	void clear_has_engine();
	void set_has_custom_game_data();
	void clear_has_custom_game_data();
	void set_has_match_flags();
	void clear_has_match_flags();
	void set_has_private_metadata_key();
	void clear_has_private_metadata_key();
	void set_has_radiant_team_score();
	void clear_has_radiant_team_score();
	void set_has_dire_team_score();
	void clear_has_dire_team_score();
	void set_has_match_outcome();
	void clear_has_match_outcome();
	void set_has_tournament_id();
	void clear_has_tournament_id();
	void set_has_tournament_round();
	void clear_has_tournament_round();
	void set_has_pre_game_duration();
	void clear_has_pre_game_duration();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 336
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:12784
class CMsgPlayerCard_StatModifier : public Message {
public:

	static const int kStatFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 stat_;  // +0x18
	uint32 value_;  // +0x1c

	static CMsgPlayerCard_StatModifier * default_instance_;
	CMsgPlayerCard_StatModifier();
	virtual ~CMsgPlayerCard_StatModifier();
	CMsgPlayerCard_StatModifier(const CMsgPlayerCard_StatModifier &);
	CMsgPlayerCard_StatModifier & operator=(const CMsgPlayerCard_StatModifier &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgPlayerCard_StatModifier & default_instance();
	void Swap(CMsgPlayerCard_StatModifier *);
	virtual CMsgPlayerCard_StatModifier * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgPlayerCard_StatModifier &);
	void MergeFrom(const CMsgPlayerCard_StatModifier &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_stat();
	void clear_stat();
	uint32 stat();
	void set_stat(uint32);
	bool has_value();
	void clear_value();
	uint32 value();
	void set_value(uint32);
	void set_has_stat();
	void clear_has_stat();
	void set_has_value();
	void clear_has_value();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:12873
class CMsgPlayerCard : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kStatModifierFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x30

	static CMsgPlayerCard * default_instance_;
	CMsgPlayerCard();
	virtual ~CMsgPlayerCard();
	CMsgPlayerCard(const CMsgPlayerCard &);
	CMsgPlayerCard & operator=(const CMsgPlayerCard &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgPlayerCard & default_instance();
	void Swap(CMsgPlayerCard *);
	virtual CMsgPlayerCard * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgPlayerCard &);
	void MergeFrom(const CMsgPlayerCard &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	int stat_modifier_size();
	void clear_stat_modifier();
	const CMsgPlayerCard_StatModifier & stat_modifier(int);
	CMsgPlayerCard_StatModifier * mutable_stat_modifier(int);
	CMsgPlayerCard_StatModifier * add_stat_modifier();
	const RepeatedPtrField<CMsgPlayerCard_StatModifier> & stat_modifier();
	RepeatedPtrField<CMsgPlayerCard_StatModifier> * mutable_stat_modifier();
	void set_has_account_id();
	void clear_has_account_id();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:12967
class CMsgDOTAFantasyPlayerStats : public Message {
public:

	static const int kPlayerAccountIdFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
	static const int kMatchCompletedFieldNumber = 3;
	static const int kTeamIdFieldNumber = 4;
	static const int kLeagueIdFieldNumber = 5;
	static const int kDelayFieldNumber = 6;
	static const int kSeriesIdFieldNumber = 7;
	static const int kSeriesTypeFieldNumber = 8;
	static const int kKillsFieldNumber = 10;
	static const int kDeathsFieldNumber = 11;
	static const int kCsFieldNumber = 12;
	static const int kGpmFieldNumber = 13;
	static const int kTowerKillsFieldNumber = 14;
	static const int kRoshanKillsFieldNumber = 15;
	static const int kTeamfightParticipationFieldNumber = 16;
	static const int kWardsPlacedFieldNumber = 17;
	static const int kCampsStackedFieldNumber = 18;
	static const int kRunesGrabbedFieldNumber = 19;
	static const int kFirstBloodFieldNumber = 20;
	static const int kStunsFieldNumber = 21;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 player_account_id_;  // +0x20
	bool match_completed_;  // +0x24

	uint32 team_id_;  // +0x28
	uint32 league_id_;  // +0x2c
	uint32 delay_;  // +0x30
	uint32 series_id_;  // +0x34
	uint32 series_type_;  // +0x38
	uint32 kills_;  // +0x3c
	uint32 deaths_;  // +0x40
	uint32 cs_;  // +0x44
	float gpm_;  // +0x48
	uint32 tower_kills_;  // +0x4c
	uint32 roshan_kills_;  // +0x50
	float teamfight_participation_;  // +0x54
	uint32 wards_placed_;  // +0x58
	uint32 camps_stacked_;  // +0x5c
	uint32 runes_grabbed_;  // +0x60
	uint32 first_blood_;  // +0x64
	float stuns_;  // +0x68

	static CMsgDOTAFantasyPlayerStats * default_instance_;
	CMsgDOTAFantasyPlayerStats();
	virtual ~CMsgDOTAFantasyPlayerStats();
	CMsgDOTAFantasyPlayerStats(const CMsgDOTAFantasyPlayerStats &);
	CMsgDOTAFantasyPlayerStats & operator=(const CMsgDOTAFantasyPlayerStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAFantasyPlayerStats & default_instance();
	void Swap(CMsgDOTAFantasyPlayerStats *);
	virtual CMsgDOTAFantasyPlayerStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAFantasyPlayerStats &);
	void MergeFrom(const CMsgDOTAFantasyPlayerStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_player_account_id();
	void clear_player_account_id();
	uint32 player_account_id();
	void set_player_account_id(uint32);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_match_completed();
	void clear_match_completed();
	bool match_completed();
	void set_match_completed(bool);
	bool has_team_id();
	void clear_team_id();
	uint32 team_id();
	void set_team_id(uint32);
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	bool has_delay();
	void clear_delay();
	uint32 delay();
	void set_delay(uint32);
	bool has_series_id();
	void clear_series_id();
	uint32 series_id();
	void set_series_id(uint32);
	bool has_series_type();
	void clear_series_type();
	uint32 series_type();
	void set_series_type(uint32);
	bool has_kills();
	void clear_kills();
	uint32 kills();
	void set_kills(uint32);
	bool has_deaths();
	void clear_deaths();
	uint32 deaths();
	void set_deaths(uint32);
	bool has_cs();
	void clear_cs();
	uint32 cs();
	void set_cs(uint32);
	bool has_gpm();
	void clear_gpm();
	float gpm();
	void set_gpm(float);
	bool has_tower_kills();
	void clear_tower_kills();
	uint32 tower_kills();
	void set_tower_kills(uint32);
	bool has_roshan_kills();
	void clear_roshan_kills();
	uint32 roshan_kills();
	void set_roshan_kills(uint32);
	bool has_teamfight_participation();
	void clear_teamfight_participation();
	float teamfight_participation();
	void set_teamfight_participation(float);
	bool has_wards_placed();
	void clear_wards_placed();
	uint32 wards_placed();
	void set_wards_placed(uint32);
	bool has_camps_stacked();
	void clear_camps_stacked();
	uint32 camps_stacked();
	void set_camps_stacked(uint32);
	bool has_runes_grabbed();
	void clear_runes_grabbed();
	uint32 runes_grabbed();
	void set_runes_grabbed(uint32);
	bool has_first_blood();
	void clear_first_blood();
	uint32 first_blood();
	void set_first_blood(uint32);
	bool has_stuns();
	void clear_stuns();
	float stuns();
	void set_stuns(float);
	void set_has_player_account_id();
	void clear_has_player_account_id();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_match_completed();
	void clear_has_match_completed();
	void set_has_team_id();
	void clear_has_team_id();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_delay();
	void clear_has_delay();
	void set_has_series_id();
	void clear_has_series_id();
	void set_has_series_type();
	void clear_has_series_type();
	void set_has_kills();
	void clear_has_kills();
	void set_has_deaths();
	void clear_has_deaths();
	void set_has_cs();
	void clear_has_cs();
	void set_has_gpm();
	void clear_has_gpm();
	void set_has_tower_kills();
	void clear_has_tower_kills();
	void set_has_roshan_kills();
	void clear_has_roshan_kills();
	void set_has_teamfight_participation();
	void clear_has_teamfight_participation();
	void set_has_wards_placed();
	void clear_has_wards_placed();
	void set_has_camps_stacked();
	void clear_has_camps_stacked();
	void set_has_runes_grabbed();
	void clear_has_runes_grabbed();
	void set_has_first_blood();
	void clear_has_first_blood();
	void set_has_stuns();
	void clear_has_stuns();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 112
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:13236
class CMsgDOTAFantasyPlayerMatchStats : public Message {
public:

	static const int kMatchesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTAFantasyPlayerMatchStats * default_instance_;
	CMsgDOTAFantasyPlayerMatchStats();
	virtual ~CMsgDOTAFantasyPlayerMatchStats();
	CMsgDOTAFantasyPlayerMatchStats(const CMsgDOTAFantasyPlayerMatchStats &);
	CMsgDOTAFantasyPlayerMatchStats & operator=(const CMsgDOTAFantasyPlayerMatchStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAFantasyPlayerMatchStats & default_instance();
	void Swap(CMsgDOTAFantasyPlayerMatchStats *);
	virtual CMsgDOTAFantasyPlayerMatchStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAFantasyPlayerMatchStats &);
	void MergeFrom(const CMsgDOTAFantasyPlayerMatchStats &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int matches_size();
	void clear_matches();
	const CMsgDOTAFantasyPlayerStats & matches(int);
	CMsgDOTAFantasyPlayerStats * mutable_matches(int);
	CMsgDOTAFantasyPlayerStats * add_matches();
	const RepeatedPtrField<CMsgDOTAFantasyPlayerStats> & matches();
	RepeatedPtrField<CMsgDOTAFantasyPlayerStats> * mutable_matches();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:13318
class CMsgDOTABotDebugInfo_Bot_Mode : public Message {
public:

	static const int kModeIdFieldNumber = 1;
	static const int kDesireFieldNumber = 2;
	static const int kTargetEntityFieldNumber = 3;
	static const int kTargetXFieldNumber = 4;
	static const int kTargetYFieldNumber = 5;
	static const int kTargetZFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 mode_id_;  // +0x18
	float desire_;  // +0x1c
	uint32 target_entity_;  // +0x20
	uint32 target_x_;  // +0x24
	uint32 target_y_;  // +0x28
	uint32 target_z_;  // +0x2c

	static CMsgDOTABotDebugInfo_Bot_Mode * default_instance_;
	CMsgDOTABotDebugInfo_Bot_Mode();
	virtual ~CMsgDOTABotDebugInfo_Bot_Mode();
	CMsgDOTABotDebugInfo_Bot_Mode(const CMsgDOTABotDebugInfo_Bot_Mode &);
	CMsgDOTABotDebugInfo_Bot_Mode & operator=(const CMsgDOTABotDebugInfo_Bot_Mode &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTABotDebugInfo_Bot_Mode & default_instance();
	void Swap(CMsgDOTABotDebugInfo_Bot_Mode *);
	virtual CMsgDOTABotDebugInfo_Bot_Mode * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTABotDebugInfo_Bot_Mode &);
	void MergeFrom(const CMsgDOTABotDebugInfo_Bot_Mode &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_mode_id();
	void clear_mode_id();
	uint32 mode_id();
	void set_mode_id(uint32);
	bool has_desire();
	void clear_desire();
	float desire();
	void set_desire(float);
	bool has_target_entity();
	void clear_target_entity();
	uint32 target_entity();
	void set_target_entity(uint32);
	bool has_target_x();
	void clear_target_x();
	uint32 target_x();
	void set_target_x(uint32);
	bool has_target_y();
	void clear_target_y();
	uint32 target_y();
	void set_target_y(uint32);
	bool has_target_z();
	void clear_target_z();
	uint32 target_z();
	void set_target_z(uint32);
	void set_has_mode_id();
	void clear_has_mode_id();
	void set_has_desire();
	void clear_has_desire();
	void set_has_target_entity();
	void clear_has_target_entity();
	void set_has_target_x();
	void clear_has_target_x();
	void set_has_target_y();
	void clear_has_target_y();
	void set_has_target_z();
	void clear_has_target_z();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:13447
class CMsgDOTABotDebugInfo_Bot_Action : public Message {
public:

	static const int kActionIdFieldNumber = 1;
	static const int kActionTargetFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * action_target_;  // +0x18
	uint32 action_id_;  // +0x20

	static CMsgDOTABotDebugInfo_Bot_Action * default_instance_;
	CMsgDOTABotDebugInfo_Bot_Action();
	virtual ~CMsgDOTABotDebugInfo_Bot_Action();
	CMsgDOTABotDebugInfo_Bot_Action(const CMsgDOTABotDebugInfo_Bot_Action &);
	CMsgDOTABotDebugInfo_Bot_Action & operator=(const CMsgDOTABotDebugInfo_Bot_Action &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTABotDebugInfo_Bot_Action & default_instance();
	void Swap(CMsgDOTABotDebugInfo_Bot_Action *);
	virtual CMsgDOTABotDebugInfo_Bot_Action * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTABotDebugInfo_Bot_Action &);
	void MergeFrom(const CMsgDOTABotDebugInfo_Bot_Action &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_action_id();
	void clear_action_id();
	uint32 action_id();
	void set_action_id(uint32);
	bool has_action_target();
	void clear_action_target();
	const string & action_target();
	void set_action_target(const string &);
	void set_action_target(const char *);
	void set_action_target(const char *, size_t);
	string * mutable_action_target();
	string * release_action_target();
	void set_allocated_action_target(string *);
	void set_has_action_id();
	void clear_has_action_id();
	void set_has_action_target();
	void clear_has_action_target();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:13541
class CMsgDOTABotDebugInfo_Bot : public Message {
public:

	static const int kPlayerOwnerIdFieldNumber = 1;
	static const int kHeroIdFieldNumber = 2;
	static const int kDifficultyFieldNumber = 3;
	static const int kPowerCurrentFieldNumber = 4;
	static const int kPowerMaxFieldNumber = 5;
	static const int kMoveTargetXFieldNumber = 6;
	static const int kMoveTargetYFieldNumber = 7;
	static const int kMoveTargetZFieldNumber = 8;
	static const int kActiveModeIdFieldNumber = 9;
	static const int kExecutionTimeFieldNumber = 10;
	static const int kModesFieldNumber = 11;
	static const int kActionFieldNumber = 12;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_owner_id_;  // +0x18
	uint32 hero_id_;  // +0x1c
	uint32 difficulty_;  // +0x20
	uint32 power_current_;  // +0x24
	uint32 power_max_;  // +0x28
	uint32 move_target_x_;  // +0x2c
	uint32 move_target_y_;  // +0x30
	uint32 move_target_z_;  // +0x34
	uint32 active_mode_id_;  // +0x38
	float execution_time_;  // +0x3c

	static CMsgDOTABotDebugInfo_Bot * default_instance_;
	CMsgDOTABotDebugInfo_Bot();
	virtual ~CMsgDOTABotDebugInfo_Bot();
	CMsgDOTABotDebugInfo_Bot(const CMsgDOTABotDebugInfo_Bot &);
	CMsgDOTABotDebugInfo_Bot & operator=(const CMsgDOTABotDebugInfo_Bot &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTABotDebugInfo_Bot & default_instance();
	void Swap(CMsgDOTABotDebugInfo_Bot *);
	virtual CMsgDOTABotDebugInfo_Bot * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTABotDebugInfo_Bot &);
	void MergeFrom(const CMsgDOTABotDebugInfo_Bot &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_player_owner_id();
	void clear_player_owner_id();
	uint32 player_owner_id();
	void set_player_owner_id(uint32);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	bool has_difficulty();
	void clear_difficulty();
	uint32 difficulty();
	void set_difficulty(uint32);
	bool has_power_current();
	void clear_power_current();
	uint32 power_current();
	void set_power_current(uint32);
	bool has_power_max();
	void clear_power_max();
	uint32 power_max();
	void set_power_max(uint32);
	bool has_move_target_x();
	void clear_move_target_x();
	uint32 move_target_x();
	void set_move_target_x(uint32);
	bool has_move_target_y();
	void clear_move_target_y();
	uint32 move_target_y();
	void set_move_target_y(uint32);
	bool has_move_target_z();
	void clear_move_target_z();
	uint32 move_target_z();
	void set_move_target_z(uint32);
	bool has_active_mode_id();
	void clear_active_mode_id();
	uint32 active_mode_id();
	void set_active_mode_id(uint32);
	bool has_execution_time();
	void clear_execution_time();
	float execution_time();
	void set_execution_time(float);
	int modes_size();
	void clear_modes();
	const CMsgDOTABotDebugInfo_Bot_Mode & modes(int);
	CMsgDOTABotDebugInfo_Bot_Mode * mutable_modes(int);
	CMsgDOTABotDebugInfo_Bot_Mode * add_modes();
	const RepeatedPtrField<CMsgDOTABotDebugInfo_Bot_Mode> & modes();
	RepeatedPtrField<CMsgDOTABotDebugInfo_Bot_Mode> * mutable_modes();
	bool has_action();
	void clear_action();
	const CMsgDOTABotDebugInfo_Bot_Action & action();
	CMsgDOTABotDebugInfo_Bot_Action * mutable_action();
	CMsgDOTABotDebugInfo_Bot_Action * release_action();
	void set_allocated_action(CMsgDOTABotDebugInfo_Bot_Action *);
	void set_has_player_owner_id();
	void clear_has_player_owner_id();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_difficulty();
	void clear_has_difficulty();
	void set_has_power_current();
	void clear_has_power_current();
	void set_has_power_max();
	void clear_has_power_max();
	void set_has_move_target_x();
	void clear_has_move_target_x();
	void set_has_move_target_y();
	void clear_has_move_target_y();
	void set_has_move_target_z();
	void clear_has_move_target_z();
	void set_has_active_mode_id();
	void clear_has_active_mode_id();
	void set_has_execution_time();
	void clear_has_execution_time();
	void set_has_action();
	void clear_has_action();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 96
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common.pb.h:13738
class CMsgDOTABotDebugInfo : public Message {
public:

	static const int kBotsFieldNumber = 1;
	static const int kDesirePushLaneTopFieldNumber = 2;
	static const int kDesirePushLaneMidFieldNumber = 3;
	static const int kDesirePushLaneBotFieldNumber = 4;
	static const int kDesireDefendLaneTopFieldNumber = 5;
	static const int kDesireDefendLaneMidFieldNumber = 6;
	static const int kDesireDefendLaneBotFieldNumber = 7;
	static const int kDesireFarmLaneTopFieldNumber = 8;
	static const int kDesireFarmLaneMidFieldNumber = 9;
	static const int kDesireFarmLaneBotFieldNumber = 10;
	static const int kDesireFarmRoshanFieldNumber = 11;
	static const int kExecutionTimeFieldNumber = 12;
	static const int kRuneStatusFieldNumber = 13;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float desire_push_lane_top_;  // +0x30
	float desire_push_lane_mid_;  // +0x34
	float desire_push_lane_bot_;  // +0x38
	float desire_defend_lane_top_;  // +0x3c
	float desire_defend_lane_mid_;  // +0x40
	float desire_defend_lane_bot_;  // +0x44
	float desire_farm_lane_top_;  // +0x48
	float desire_farm_lane_mid_;  // +0x4c
	float desire_farm_lane_bot_;  // +0x50
	float desire_farm_roshan_;  // +0x54
	float execution_time_;  // +0x68

	static CMsgDOTABotDebugInfo * default_instance_;
	CMsgDOTABotDebugInfo();
	virtual ~CMsgDOTABotDebugInfo();
	CMsgDOTABotDebugInfo(const CMsgDOTABotDebugInfo &);
	CMsgDOTABotDebugInfo & operator=(const CMsgDOTABotDebugInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTABotDebugInfo & default_instance();
	void Swap(CMsgDOTABotDebugInfo *);
	virtual CMsgDOTABotDebugInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTABotDebugInfo &);
	void MergeFrom(const CMsgDOTABotDebugInfo &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int bots_size();
	void clear_bots();
	const CMsgDOTABotDebugInfo_Bot & bots(int);
	CMsgDOTABotDebugInfo_Bot * mutable_bots(int);
	CMsgDOTABotDebugInfo_Bot * add_bots();
	const RepeatedPtrField<CMsgDOTABotDebugInfo_Bot> & bots();
	RepeatedPtrField<CMsgDOTABotDebugInfo_Bot> * mutable_bots();
	bool has_desire_push_lane_top();
	void clear_desire_push_lane_top();
	float desire_push_lane_top();
	void set_desire_push_lane_top(float);
	bool has_desire_push_lane_mid();
	void clear_desire_push_lane_mid();
	float desire_push_lane_mid();
	void set_desire_push_lane_mid(float);
	bool has_desire_push_lane_bot();
	void clear_desire_push_lane_bot();
	float desire_push_lane_bot();
	void set_desire_push_lane_bot(float);
	bool has_desire_defend_lane_top();
	void clear_desire_defend_lane_top();
	float desire_defend_lane_top();
	void set_desire_defend_lane_top(float);
	bool has_desire_defend_lane_mid();
	void clear_desire_defend_lane_mid();
	float desire_defend_lane_mid();
	void set_desire_defend_lane_mid(float);
	bool has_desire_defend_lane_bot();
	void clear_desire_defend_lane_bot();
	float desire_defend_lane_bot();
	void set_desire_defend_lane_bot(float);
	bool has_desire_farm_lane_top();
	void clear_desire_farm_lane_top();
	float desire_farm_lane_top();
	void set_desire_farm_lane_top(float);
	bool has_desire_farm_lane_mid();
	void clear_desire_farm_lane_mid();
	float desire_farm_lane_mid();
	void set_desire_farm_lane_mid(float);
	bool has_desire_farm_lane_bot();
	void clear_desire_farm_lane_bot();
	float desire_farm_lane_bot();
	void set_desire_farm_lane_bot(float);
	bool has_desire_farm_roshan();
	void clear_desire_farm_roshan();
	float desire_farm_roshan();
	void set_desire_farm_roshan(float);
	bool has_execution_time();
	void clear_execution_time();
	float execution_time();
	void set_execution_time(float);
	int rune_status_size();
	void clear_rune_status();
	uint32 rune_status(int);
	void set_rune_status(int, uint32);
	void add_rune_status(uint32);
	const RepeatedField<unsigned int> & rune_status();
	RepeatedField<unsigned int> * mutable_rune_status();
	void set_has_desire_push_lane_top();
	void clear_has_desire_push_lane_top();
	void set_has_desire_push_lane_mid();
	void clear_has_desire_push_lane_mid();
	void set_has_desire_push_lane_bot();
	void clear_has_desire_push_lane_bot();
	void set_has_desire_defend_lane_top();
	void clear_has_desire_defend_lane_top();
	void set_has_desire_defend_lane_mid();
	void clear_has_desire_defend_lane_mid();
	void set_has_desire_defend_lane_bot();
	void clear_has_desire_defend_lane_bot();
	void set_has_desire_farm_lane_top();
	void clear_has_desire_farm_lane_top();
	void set_has_desire_farm_lane_mid();
	void clear_has_desire_farm_lane_mid();
	void set_has_desire_farm_lane_bot();
	void clear_has_desire_farm_lane_bot();
	void set_has_desire_farm_roshan();
	void clear_has_desire_farm_roshan();
	void set_has_execution_time();
	void clear_has_execution_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 112
};
