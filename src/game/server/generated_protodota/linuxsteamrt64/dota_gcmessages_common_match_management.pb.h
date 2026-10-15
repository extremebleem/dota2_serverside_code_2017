// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:176
class CSODOTAPartyMember : public Message {
public:

	static const int kPartnerTypeFieldNumber = 1;
	static const int kIsCoachFieldNumber = 2;
	static const int kRegionPingCodesFieldNumber = 4;
	static const int kRegionPingTimesFieldNumber = 5;
	static const int kRegionPingFailedBitmaskFieldNumber = 6;
	static const int kTourneySkillLevelFieldNumber = 7;
	static const int kTourneyBuyinFieldNumber = 8;
	static const int kTourneyPreventUntilFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int partner_type_;  // +0x18
	bool is_coach_;  // +0x1c

	int _region_ping_codes_cached_byte_size_;  // +0x30

	int _region_ping_times_cached_byte_size_;  // +0x48
	uint32 region_ping_failed_bitmask_;  // +0x4c
	uint32 tourney_skill_level_;  // +0x50
	uint32 tourney_buyin_;  // +0x54
	uint32 tourney_prevent_until_;  // +0x58

	static CSODOTAPartyMember * default_instance_;
	CSODOTAPartyMember();
	virtual ~CSODOTAPartyMember();
	CSODOTAPartyMember(const CSODOTAPartyMember &);
	CSODOTAPartyMember & operator=(const CSODOTAPartyMember &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTAPartyMember & default_instance();
	void Swap(CSODOTAPartyMember *);
	virtual CSODOTAPartyMember * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTAPartyMember &);
	void MergeFrom(const CSODOTAPartyMember &);
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
	bool has_partner_type();
	void clear_partner_type();
	PartnerAccountType partner_type();
	void set_partner_type(PartnerAccountType);
	bool has_is_coach();
	void clear_is_coach();
	bool is_coach();
	void set_is_coach(bool);
	int region_ping_codes_size();
	void clear_region_ping_codes();
	uint32 region_ping_codes(int);
	void set_region_ping_codes(int, uint32);
	void add_region_ping_codes(uint32);
	const RepeatedField<unsigned int> & region_ping_codes();
	RepeatedField<unsigned int> * mutable_region_ping_codes();
	int region_ping_times_size();
	void clear_region_ping_times();
	uint32 region_ping_times(int);
	void set_region_ping_times(int, uint32);
	void add_region_ping_times(uint32);
	const RepeatedField<unsigned int> & region_ping_times();
	RepeatedField<unsigned int> * mutable_region_ping_times();
	bool has_region_ping_failed_bitmask();
	void clear_region_ping_failed_bitmask();
	uint32 region_ping_failed_bitmask();
	void set_region_ping_failed_bitmask(uint32);
	bool has_tourney_skill_level();
	void clear_tourney_skill_level();
	uint32 tourney_skill_level();
	void set_tourney_skill_level(uint32);
	bool has_tourney_buyin();
	void clear_tourney_buyin();
	uint32 tourney_buyin();
	void set_tourney_buyin(uint32);
	bool has_tourney_prevent_until();
	void clear_tourney_prevent_until();
	uint32 tourney_prevent_until();
	void set_tourney_prevent_until(uint32);
	void set_has_partner_type();
	void clear_has_partner_type();
	void set_has_is_coach();
	void clear_has_is_coach();
	void set_has_region_ping_failed_bitmask();
	void clear_has_region_ping_failed_bitmask();
	void set_has_tourney_skill_level();
	void clear_has_tourney_skill_level();
	void set_has_tourney_buyin();
	void clear_has_tourney_buyin();
	void set_has_tourney_prevent_until();
	void clear_has_tourney_prevent_until();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:333
class CSODOTAParty : public Message {
public:

	static const CSODOTAParty_State UI;
	static const CSODOTAParty_State FINDING_MATCH = 1;
	static const CSODOTAParty_State IN_MATCH = 2;
	static const CSODOTAParty_State State_MIN;
	static const CSODOTAParty_State State_MAX = 2;
	static const int State_ARRAYSIZE = 3;
	static const int kPartyIdFieldNumber = 1;
	static const int kLeaderIdFieldNumber = 2;
	static const int kMemberIdsFieldNumber = 3;
	static const int kGameModesFieldNumber = 4;
	static const int kStateFieldNumber = 6;
	static const int kEffectiveStartedMatchmakingTimeFieldNumber = 7;
	static const int kRawStartedMatchmakingTimeFieldNumber = 32;
	static const int kAttemptStartTimeFieldNumber = 33;
	static const int kAttemptNumFieldNumber = 34;
	static const int kMatchgroupsFieldNumber = 11;
	static const int kLowPriorityAccountIdFieldNumber = 19;
	static const int kMatchTypeFieldNumber = 21;
	static const int kBotDifficultyFieldNumber = 22;
	static const int kTeamIdFieldNumber = 23;
	static const int kTeamNameFieldNumber = 51;
	static const int kTeamUiLogoFieldNumber = 52;
	static const int kTeamBaseLogoFieldNumber = 53;
	static const int kMatchDisabledUntilDateFieldNumber = 24;
	static const int kMatchDisabledAccountIdFieldNumber = 25;
	static const int kMatchmakingMaxRangeMinutesFieldNumber = 26;
	static const int kMatchlanguagesFieldNumber = 27;
	static const int kMapPreferenceFieldNumber = 38;
	static const int kMembersFieldNumber = 29;
	static const int kOpenGuildIdFieldNumber = 30;
	static const int kCommonGuildsFieldNumber = 31;
	static const int kLowPriorityGamesRemainingFieldNumber = 35;
	static const int kActiveIngameEventsFieldNumber = 39;
	static const int kOpenForJoinRequestsFieldNumber = 40;
	static const int kSentInvitesFieldNumber = 41;
	static const int kRecvInvitesFieldNumber = 42;
	static const int kAccountFlagsFieldNumber = 43;
	static const int kRegionSelectFlagsFieldNumber = 44;
	static const int kExclusiveTournamentIdFieldNumber = 45;
	static const int kTourneyDivisionIdFieldNumber = 47;
	static const int kTourneyScheduleTimeFieldNumber = 48;
	static const int kTourneySkillLevelFieldNumber = 49;
	static const int kTourneyBracketRoundFieldNumber = 50;
	static const int kTourneyQueueDeadlineTimeFieldNumber = 54;
	static const int kTourneyQueueDeadlineStateFieldNumber = 55;
	static const int kPartyBuilderSlotsToFillFieldNumber = 56;
	static const int kPartyBuilderMatchGroupsFieldNumber = 57;
	static const int kPartyBuilderStartTimeFieldNumber = 58;
private:

	unsigned int _has_bits_[2];  // +0x10
	uint64 party_id_;  // +0x18
	uint64 leader_id_;  // +0x20
	uint32 game_modes_;  // +0x38
	int state_;  // +0x3c
	uint32 effective_started_matchmaking_time_;  // +0x40
	uint32 raw_started_matchmaking_time_;  // +0x44
	uint32 attempt_start_time_;  // +0x48
	uint32 attempt_num_;  // +0x4c
	uint32 matchgroups_;  // +0x50
	uint32 low_priority_account_id_;  // +0x54
	int match_type_;  // +0x58
	int bot_difficulty_;  // +0x5c
	string * team_name_;  // +0x60
	uint64 team_ui_logo_;  // +0x68
	uint32 team_id_;  // +0x70
	uint32 match_disabled_until_date_;  // +0x74
	uint64 team_base_logo_;  // +0x78
	uint32 match_disabled_account_id_;  // +0x80
	uint32 matchmaking_max_range_minutes_;  // +0x84
	uint32 matchlanguages_;  // +0x88
	uint32 map_preference_;  // +0x8c
	uint32 open_guild_id_;  // +0xb8
	uint32 low_priority_games_remaining_;  // +0xbc
	bool open_for_join_requests_;  // +0xe8

	uint32 account_flags_;  // +0xec
	uint32 region_select_flags_;  // +0x108
	uint32 exclusive_tournament_id_;  // +0x10c
	uint32 tourney_division_id_;  // +0x110
	uint32 tourney_schedule_time_;  // +0x114
	uint32 tourney_skill_level_;  // +0x118
	uint32 tourney_bracket_round_;  // +0x11c
	uint32 tourney_queue_deadline_time_;  // +0x120
	int tourney_queue_deadline_state_;  // +0x124
	uint32 party_builder_slots_to_fill_;  // +0x128
	uint32 party_builder_match_groups_;  // +0x12c
	uint32 party_builder_start_time_;  // +0x130
	int _cached_size_;  // +0x134

	static CSODOTAParty * default_instance_;
	typedef CSODOTAParty_State State;
	CSODOTAParty();
	virtual ~CSODOTAParty();
	CSODOTAParty(const CSODOTAParty &);
	CSODOTAParty & operator=(const CSODOTAParty &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTAParty & default_instance();
	void Swap(CSODOTAParty *);
	virtual CSODOTAParty * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTAParty &);
	void MergeFrom(const CSODOTAParty &);
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
	bool State_IsValid(int);
	const EnumDescriptor * State_descriptor();
	const string & State_Name(State);
	bool State_Parse(const string &, State *);
	bool has_party_id();
	void clear_party_id();
	uint64 party_id();
	void set_party_id(uint64);
	bool has_leader_id();
	void clear_leader_id();
	uint64 leader_id();
	void set_leader_id(uint64);
	int member_ids_size();
	void clear_member_ids();
	uint64 member_ids(int);
	void set_member_ids(int, uint64);
	void add_member_ids(uint64);
	const RepeatedField<long unsigned int> & member_ids();
	RepeatedField<long unsigned int> * mutable_member_ids();
	bool has_game_modes();
	void clear_game_modes();
	uint32 game_modes();
	void set_game_modes(uint32);
	bool has_state();
	void clear_state();
	CSODOTAParty_State state();
	void set_state(CSODOTAParty_State);
	bool has_effective_started_matchmaking_time();
	void clear_effective_started_matchmaking_time();
	uint32 effective_started_matchmaking_time();
	void set_effective_started_matchmaking_time(uint32);
	bool has_raw_started_matchmaking_time();
	void clear_raw_started_matchmaking_time();
	uint32 raw_started_matchmaking_time();
	void set_raw_started_matchmaking_time(uint32);
	bool has_attempt_start_time();
	void clear_attempt_start_time();
	uint32 attempt_start_time();
	void set_attempt_start_time(uint32);
	bool has_attempt_num();
	void clear_attempt_num();
	uint32 attempt_num();
	void set_attempt_num(uint32);
	bool has_matchgroups();
	void clear_matchgroups();
	uint32 matchgroups();
	void set_matchgroups(uint32);
	bool has_low_priority_account_id();
	void clear_low_priority_account_id();
	uint32 low_priority_account_id();
	void set_low_priority_account_id(uint32);
	bool has_match_type();
	void clear_match_type();
	MatchType match_type();
	void set_match_type(MatchType);
	bool has_bot_difficulty();
	void clear_bot_difficulty();
	DOTABotDifficulty bot_difficulty();
	void set_bot_difficulty(DOTABotDifficulty);
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
	bool has_team_ui_logo();
	void clear_team_ui_logo();
	uint64 team_ui_logo();
	void set_team_ui_logo(uint64);
	bool has_team_base_logo();
	void clear_team_base_logo();
	uint64 team_base_logo();
	void set_team_base_logo(uint64);
	bool has_match_disabled_until_date();
	void clear_match_disabled_until_date();
	uint32 match_disabled_until_date();
	void set_match_disabled_until_date(uint32);
	bool has_match_disabled_account_id();
	void clear_match_disabled_account_id();
	uint32 match_disabled_account_id();
	void set_match_disabled_account_id(uint32);
	bool has_matchmaking_max_range_minutes();
	void clear_matchmaking_max_range_minutes();
	uint32 matchmaking_max_range_minutes();
	void set_matchmaking_max_range_minutes(uint32);
	bool has_matchlanguages();
	void clear_matchlanguages();
	uint32 matchlanguages();
	void set_matchlanguages(uint32);
	bool has_map_preference();
	void clear_map_preference();
	uint32 map_preference();
	void set_map_preference(uint32);
	int members_size();
	void clear_members();
	const CSODOTAPartyMember & members(int);
	CSODOTAPartyMember * mutable_members(int);
	CSODOTAPartyMember * add_members();
	const RepeatedPtrField<CSODOTAPartyMember> & members();
	RepeatedPtrField<CSODOTAPartyMember> * mutable_members();
	bool has_open_guild_id();
	void clear_open_guild_id();
	uint32 open_guild_id();
	void set_open_guild_id(uint32);
	int common_guilds_size();
	void clear_common_guilds();
	uint32 common_guilds(int);
	void set_common_guilds(int, uint32);
	void add_common_guilds(uint32);
	const RepeatedField<unsigned int> & common_guilds();
	RepeatedField<unsigned int> * mutable_common_guilds();
	bool has_low_priority_games_remaining();
	void clear_low_priority_games_remaining();
	uint32 low_priority_games_remaining();
	void set_low_priority_games_remaining(uint32);
	int active_ingame_events_size();
	void clear_active_ingame_events();
	EEvent active_ingame_events(int);
	void set_active_ingame_events(int, EEvent);
	void add_active_ingame_events(EEvent);
	const RepeatedField<int> & active_ingame_events();
	RepeatedField<int> * mutable_active_ingame_events();
	bool has_open_for_join_requests();
	void clear_open_for_join_requests();
	bool open_for_join_requests();
	void set_open_for_join_requests(bool);
	int sent_invites_size();
	void clear_sent_invites();
	const CSODOTAPartyInvite & sent_invites(int);
	CSODOTAPartyInvite * mutable_sent_invites(int);
	CSODOTAPartyInvite * add_sent_invites();
	const RepeatedPtrField<CSODOTAPartyInvite> & sent_invites();
	RepeatedPtrField<CSODOTAPartyInvite> * mutable_sent_invites();
	int recv_invites_size();
	void clear_recv_invites();
	const CSODOTAPartyInvite & recv_invites(int);
	CSODOTAPartyInvite * mutable_recv_invites(int);
	CSODOTAPartyInvite * add_recv_invites();
	const RepeatedPtrField<CSODOTAPartyInvite> & recv_invites();
	RepeatedPtrField<CSODOTAPartyInvite> * mutable_recv_invites();
	bool has_account_flags();
	void clear_account_flags();
	uint32 account_flags();
	void set_account_flags(uint32);
	bool has_region_select_flags();
	void clear_region_select_flags();
	uint32 region_select_flags();
	void set_region_select_flags(uint32);
	bool has_exclusive_tournament_id();
	void clear_exclusive_tournament_id();
	uint32 exclusive_tournament_id();
	void set_exclusive_tournament_id(uint32);
	bool has_tourney_division_id();
	void clear_tourney_division_id();
	uint32 tourney_division_id();
	void set_tourney_division_id(uint32);
	bool has_tourney_schedule_time();
	void clear_tourney_schedule_time();
	uint32 tourney_schedule_time();
	void set_tourney_schedule_time(uint32);
	bool has_tourney_skill_level();
	void clear_tourney_skill_level();
	uint32 tourney_skill_level();
	void set_tourney_skill_level(uint32);
	bool has_tourney_bracket_round();
	void clear_tourney_bracket_round();
	uint32 tourney_bracket_round();
	void set_tourney_bracket_round(uint32);
	bool has_tourney_queue_deadline_time();
	void clear_tourney_queue_deadline_time();
	uint32 tourney_queue_deadline_time();
	void set_tourney_queue_deadline_time(uint32);
	bool has_tourney_queue_deadline_state();
	void clear_tourney_queue_deadline_state();
	ETourneyQueueDeadlineState tourney_queue_deadline_state();
	void set_tourney_queue_deadline_state(ETourneyQueueDeadlineState);
	bool has_party_builder_slots_to_fill();
	void clear_party_builder_slots_to_fill();
	uint32 party_builder_slots_to_fill();
	void set_party_builder_slots_to_fill(uint32);
	bool has_party_builder_match_groups();
	void clear_party_builder_match_groups();
	uint32 party_builder_match_groups();
	void set_party_builder_match_groups(uint32);
	bool has_party_builder_start_time();
	void clear_party_builder_start_time();
	uint32 party_builder_start_time();
	void set_party_builder_start_time(uint32);
	void set_has_party_id();
	void clear_has_party_id();
	void set_has_leader_id();
	void clear_has_leader_id();
	void set_has_game_modes();
	void clear_has_game_modes();
	void set_has_state();
	void clear_has_state();
	void set_has_effective_started_matchmaking_time();
	void clear_has_effective_started_matchmaking_time();
	void set_has_raw_started_matchmaking_time();
	void clear_has_raw_started_matchmaking_time();
	void set_has_attempt_start_time();
	void clear_has_attempt_start_time();
	void set_has_attempt_num();
	void clear_has_attempt_num();
	void set_has_matchgroups();
	void clear_has_matchgroups();
	void set_has_low_priority_account_id();
	void clear_has_low_priority_account_id();
	void set_has_match_type();
	void clear_has_match_type();
	void set_has_bot_difficulty();
	void clear_has_bot_difficulty();
	void set_has_team_id();
	void clear_has_team_id();
	void set_has_team_name();
	void clear_has_team_name();
	void set_has_team_ui_logo();
	void clear_has_team_ui_logo();
	void set_has_team_base_logo();
	void clear_has_team_base_logo();
	void set_has_match_disabled_until_date();
	void clear_has_match_disabled_until_date();
	void set_has_match_disabled_account_id();
	void clear_has_match_disabled_account_id();
	void set_has_matchmaking_max_range_minutes();
	void clear_has_matchmaking_max_range_minutes();
	void set_has_matchlanguages();
	void clear_has_matchlanguages();
	void set_has_map_preference();
	void clear_has_map_preference();
	void set_has_open_guild_id();
	void clear_has_open_guild_id();
	void set_has_low_priority_games_remaining();
	void clear_has_low_priority_games_remaining();
	void set_has_open_for_join_requests();
	void clear_has_open_for_join_requests();
	void set_has_account_flags();
	void clear_has_account_flags();
	void set_has_region_select_flags();
	void clear_has_region_select_flags();
	void set_has_exclusive_tournament_id();
	void clear_has_exclusive_tournament_id();
	void set_has_tourney_division_id();
	void clear_has_tourney_division_id();
	void set_has_tourney_schedule_time();
	void clear_has_tourney_schedule_time();
	void set_has_tourney_skill_level();
	void clear_has_tourney_skill_level();
	void set_has_tourney_bracket_round();
	void clear_has_tourney_bracket_round();
	void set_has_tourney_queue_deadline_time();
	void clear_has_tourney_queue_deadline_time();
	void set_has_tourney_queue_deadline_state();
	void clear_has_tourney_queue_deadline_state();
	void set_has_party_builder_slots_to_fill();
	void clear_has_party_builder_slots_to_fill();
	void set_has_party_builder_match_groups();
	void clear_has_party_builder_match_groups();
	void set_has_party_builder_start_time();
	void clear_has_party_builder_start_time();
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
	// sizeof = 312
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:868
class CSODOTAPartyInvite_PartyMember : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kSteamIdFieldNumber = 2;
	static const int kIsCoachFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint64 steam_id_;  // +0x20
	bool is_coach_;  // +0x28

	static CSODOTAPartyInvite_PartyMember * default_instance_;
	CSODOTAPartyInvite_PartyMember();
	virtual ~CSODOTAPartyInvite_PartyMember();
	CSODOTAPartyInvite_PartyMember(const CSODOTAPartyInvite_PartyMember &);
	CSODOTAPartyInvite_PartyMember & operator=(const CSODOTAPartyInvite_PartyMember &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTAPartyInvite_PartyMember & default_instance();
	void Swap(CSODOTAPartyInvite_PartyMember *);
	virtual CSODOTAPartyInvite_PartyMember * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTAPartyInvite_PartyMember &);
	void MergeFrom(const CSODOTAPartyInvite_PartyMember &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_is_coach();
	void clear_is_coach();
	bool is_coach();
	void set_is_coach(bool);
	void set_has_name();
	void clear_has_name();
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_is_coach();
	void clear_has_is_coach();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:972
class CSODOTAPartyInvite : public Message {
public:

	static const int kGroupIdFieldNumber = 1;
	static const int kSenderIdFieldNumber = 2;
	static const int kSenderNameFieldNumber = 3;
	static const int kMembersFieldNumber = 4;
	static const int kTeamIdFieldNumber = 5;
	static const int kLowPriorityStatusFieldNumber = 6;
	static const int kAsCoachFieldNumber = 7;
	static const int kInviteGidFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 group_id_;  // +0x18
	uint64 sender_id_;  // +0x20
	string * sender_name_;  // +0x28
	uint32 team_id_;  // +0x48
	bool low_priority_status_;  // +0x4c
	bool as_coach_;  // +0x4d

	uint64 invite_gid_;  // +0x50

	static CSODOTAPartyInvite * default_instance_;
	CSODOTAPartyInvite();
	virtual ~CSODOTAPartyInvite();
	CSODOTAPartyInvite(const CSODOTAPartyInvite &);
	CSODOTAPartyInvite & operator=(const CSODOTAPartyInvite &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTAPartyInvite & default_instance();
	void Swap(CSODOTAPartyInvite *);
	virtual CSODOTAPartyInvite * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTAPartyInvite &);
	void MergeFrom(const CSODOTAPartyInvite &);
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
	bool has_group_id();
	void clear_group_id();
	uint64 group_id();
	void set_group_id(uint64);
	bool has_sender_id();
	void clear_sender_id();
	uint64 sender_id();
	void set_sender_id(uint64);
	bool has_sender_name();
	void clear_sender_name();
	const string & sender_name();
	void set_sender_name(const string &);
	void set_sender_name(const char *);
	void set_sender_name(const char *, size_t);
	string * mutable_sender_name();
	string * release_sender_name();
	void set_allocated_sender_name(string *);
	int members_size();
	void clear_members();
	const CSODOTAPartyInvite_PartyMember & members(int);
	CSODOTAPartyInvite_PartyMember * mutable_members(int);
	CSODOTAPartyInvite_PartyMember * add_members();
	const RepeatedPtrField<CSODOTAPartyInvite_PartyMember> & members();
	RepeatedPtrField<CSODOTAPartyInvite_PartyMember> * mutable_members();
	bool has_team_id();
	void clear_team_id();
	uint32 team_id();
	void set_team_id(uint32);
	bool has_low_priority_status();
	void clear_low_priority_status();
	bool low_priority_status();
	void set_low_priority_status(bool);
	bool has_as_coach();
	void clear_as_coach();
	bool as_coach();
	void set_as_coach(bool);
	bool has_invite_gid();
	void clear_invite_gid();
	uint64 invite_gid();
	void set_invite_gid(uint64);
	void set_has_group_id();
	void clear_has_group_id();
	void set_has_sender_id();
	void clear_has_sender_id();
	void set_has_sender_name();
	void clear_has_sender_name();
	void set_has_team_id();
	void clear_has_team_id();
	void set_has_low_priority_status();
	void clear_has_low_priority_status();
	void set_has_as_coach();
	void clear_has_as_coach();
	void set_has_invite_gid();
	void clear_has_invite_gid();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:1131
class CSODOTALobbyInvite_LobbyMember : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kSteamIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	uint64 steam_id_;  // +0x20

	static CSODOTALobbyInvite_LobbyMember * default_instance_;
	CSODOTALobbyInvite_LobbyMember();
	virtual ~CSODOTALobbyInvite_LobbyMember();
	CSODOTALobbyInvite_LobbyMember(const CSODOTALobbyInvite_LobbyMember &);
	CSODOTALobbyInvite_LobbyMember & operator=(const CSODOTALobbyInvite_LobbyMember &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTALobbyInvite_LobbyMember & default_instance();
	void Swap(CSODOTALobbyInvite_LobbyMember *);
	virtual CSODOTALobbyInvite_LobbyMember * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTALobbyInvite_LobbyMember &);
	void MergeFrom(const CSODOTALobbyInvite_LobbyMember &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	void set_has_name();
	void clear_has_name();
	void set_has_steam_id();
	void clear_has_steam_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:1225
class CSODOTALobbyInvite : public Message {
public:

	static const int kGroupIdFieldNumber = 1;
	static const int kSenderIdFieldNumber = 2;
	static const int kSenderNameFieldNumber = 3;
	static const int kMembersFieldNumber = 4;
	static const int kCustomGameIdFieldNumber = 5;
	static const int kInviteGidFieldNumber = 6;
	static const int kCustomGameCrcFieldNumber = 7;
	static const int kCustomGameTimestampFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 group_id_;  // +0x18
	uint64 sender_id_;  // +0x20
	string * sender_name_;  // +0x28
	uint64 custom_game_id_;  // +0x48
	uint64 invite_gid_;  // +0x50
	uint64 custom_game_crc_;  // +0x58
	uint32 custom_game_timestamp_;  // +0x60

	static CSODOTALobbyInvite * default_instance_;
	CSODOTALobbyInvite();
	virtual ~CSODOTALobbyInvite();
	CSODOTALobbyInvite(const CSODOTALobbyInvite &);
	CSODOTALobbyInvite & operator=(const CSODOTALobbyInvite &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTALobbyInvite & default_instance();
	void Swap(CSODOTALobbyInvite *);
	virtual CSODOTALobbyInvite * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTALobbyInvite &);
	void MergeFrom(const CSODOTALobbyInvite &);
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
	bool has_group_id();
	void clear_group_id();
	uint64 group_id();
	void set_group_id(uint64);
	bool has_sender_id();
	void clear_sender_id();
	uint64 sender_id();
	void set_sender_id(uint64);
	bool has_sender_name();
	void clear_sender_name();
	const string & sender_name();
	void set_sender_name(const string &);
	void set_sender_name(const char *);
	void set_sender_name(const char *, size_t);
	string * mutable_sender_name();
	string * release_sender_name();
	void set_allocated_sender_name(string *);
	int members_size();
	void clear_members();
	const CSODOTALobbyInvite_LobbyMember & members(int);
	CSODOTALobbyInvite_LobbyMember * mutable_members(int);
	CSODOTALobbyInvite_LobbyMember * add_members();
	const RepeatedPtrField<CSODOTALobbyInvite_LobbyMember> & members();
	RepeatedPtrField<CSODOTALobbyInvite_LobbyMember> * mutable_members();
	bool has_custom_game_id();
	void clear_custom_game_id();
	uint64 custom_game_id();
	void set_custom_game_id(uint64);
	bool has_invite_gid();
	void clear_invite_gid();
	uint64 invite_gid();
	void set_invite_gid(uint64);
	bool has_custom_game_crc();
	void clear_custom_game_crc();
	uint64 custom_game_crc();
	void set_custom_game_crc(uint64);
	bool has_custom_game_timestamp();
	void clear_custom_game_timestamp();
	uint32 custom_game_timestamp();
	void set_custom_game_timestamp(uint32);
	void set_has_group_id();
	void clear_has_group_id();
	void set_has_sender_id();
	void clear_has_sender_id();
	void set_has_sender_name();
	void clear_has_sender_name();
	void set_has_custom_game_id();
	void clear_has_custom_game_id();
	void set_has_invite_gid();
	void clear_has_invite_gid();
	void set_has_custom_game_crc();
	void clear_has_custom_game_crc();
	void set_has_custom_game_timestamp();
	void clear_has_custom_game_timestamp();
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
	// sizeof = 104
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:1384
class CMsgLeaverState : public Message {
public:

	static const int kLobbyStateFieldNumber = 1;
	static const int kGameStateFieldNumber = 2;
	static const int kLeaverDetectedFieldNumber = 3;
	static const int kFirstBloodHappenedFieldNumber = 4;
	static const int kDiscardMatchResultsFieldNumber = 5;
	static const int kMassDisconnectFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 lobby_state_;  // +0x18
	int game_state_;  // +0x1c
	bool leaver_detected_;  // +0x20
	bool first_blood_happened_;  // +0x21
	bool discard_match_results_;  // +0x22
	bool mass_disconnect_;  // +0x23

	static CMsgLeaverState * default_instance_;
	CMsgLeaverState();
	virtual ~CMsgLeaverState();
	CMsgLeaverState(const CMsgLeaverState &);
	CMsgLeaverState & operator=(const CMsgLeaverState &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLeaverState & default_instance();
	void Swap(CMsgLeaverState *);
	virtual CMsgLeaverState * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLeaverState &);
	void MergeFrom(const CMsgLeaverState &);
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
	bool has_lobby_state();
	void clear_lobby_state();
	uint32 lobby_state();
	void set_lobby_state(uint32);
	bool has_game_state();
	void clear_game_state();
	DOTA_GameState game_state();
	void set_game_state(DOTA_GameState);
	bool has_leaver_detected();
	void clear_leaver_detected();
	bool leaver_detected();
	void set_leaver_detected(bool);
	bool has_first_blood_happened();
	void clear_first_blood_happened();
	bool first_blood_happened();
	void set_first_blood_happened(bool);
	bool has_discard_match_results();
	void clear_discard_match_results();
	bool discard_match_results();
	void set_discard_match_results(bool);
	bool has_mass_disconnect();
	void clear_mass_disconnect();
	bool mass_disconnect();
	void set_mass_disconnect(bool);
	void set_has_lobby_state();
	void clear_has_lobby_state();
	void set_has_game_state();
	void clear_has_game_state();
	void set_has_leaver_detected();
	void clear_has_leaver_detected();
	void set_has_first_blood_happened();
	void clear_has_first_blood_happened();
	void set_has_discard_match_results();
	void clear_has_discard_match_results();
	void set_has_mass_disconnect();
	void clear_has_mass_disconnect();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:1513
class CDOTALobbyMember_CDOTALobbyMemberXPBonus : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kXpBonusFieldNumber = 2;
	static const int kSourceKeyFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 type_;  // +0x18
	float xp_bonus_;  // +0x1c
	uint64 source_key_;  // +0x20

	static CDOTALobbyMember_CDOTALobbyMemberXPBonus * default_instance_;
	CDOTALobbyMember_CDOTALobbyMemberXPBonus();
	virtual ~CDOTALobbyMember_CDOTALobbyMemberXPBonus();
	CDOTALobbyMember_CDOTALobbyMemberXPBonus(const CDOTALobbyMember_CDOTALobbyMemberXPBonus &);
	CDOTALobbyMember_CDOTALobbyMemberXPBonus & operator=(const CDOTALobbyMember_CDOTALobbyMemberXPBonus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTALobbyMember_CDOTALobbyMemberXPBonus & default_instance();
	void Swap(CDOTALobbyMember_CDOTALobbyMemberXPBonus *);
	virtual CDOTALobbyMember_CDOTALobbyMemberXPBonus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTALobbyMember_CDOTALobbyMemberXPBonus &);
	void MergeFrom(const CDOTALobbyMember_CDOTALobbyMemberXPBonus &);
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
	uint32 type();
	void set_type(uint32);
	bool has_xp_bonus();
	void clear_xp_bonus();
	float xp_bonus();
	void set_xp_bonus(float);
	bool has_source_key();
	void clear_source_key();
	uint64 source_key();
	void set_source_key(uint64);
	void set_has_type();
	void clear_has_type();
	void set_has_xp_bonus();
	void clear_has_xp_bonus();
	void set_has_source_key();
	void clear_has_source_key();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:1612
class CDOTALobbyMember : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kHeroIdFieldNumber = 2;
	static const int kTeamFieldNumber = 3;
	static const int kNameFieldNumber = 6;
	static const int kSlotFieldNumber = 7;
	static const int kPartyIdFieldNumber = 12;
	static const int kMetaLevelFieldNumber = 13;
	static const int kMetaXpFieldNumber = 14;
	static const int kMetaXpAwardedFieldNumber = 15;
	static const int kLeaverStatusFieldNumber = 16;
	static const int kLeaverActionsFieldNumber = 28;
	static const int kChannelFieldNumber = 17;
	static const int kPrizeDefIndexFieldNumber = 18;
	static const int kDisabledHeroIdFieldNumber = 20;
	static const int kPartnerAccountTypeFieldNumber = 21;
	static const int kEnabledHeroIdFieldNumber = 22;
	static const int kCoachTeamFieldNumber = 23;
	static const int kNexonPcBangNoFieldNumber = 24;
	static const int kNexonPcBangNameFieldNumber = 25;
	static const int kXpBonusesFieldNumber = 27;
	static const int kRankChangeFieldNumber = 29;
	static const int kCameramanFieldNumber = 30;
	static const int kCustomGameProductIdsFieldNumber = 31;
	static const int kLobbyMvpVoteAccountIdFieldNumber = 32;
	static const int kSearchMatchTypeFieldNumber = 33;
	static const int kFavoriteTeamAndQualityFieldNumber = 34;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 id_;  // +0x18
	uint32 hero_id_;  // +0x20
	int team_;  // +0x24
	string * name_;  // +0x28
	uint64 party_id_;  // +0x30
	uint32 slot_;  // +0x38
	uint32 meta_level_;  // +0x3c
	uint32 meta_xp_;  // +0x40
	uint32 meta_xp_awarded_;  // +0x44
	int leaver_status_;  // +0x48
	uint32 leaver_actions_;  // +0x4c
	uint32 channel_;  // +0x50
	uint32 prize_def_index_;  // +0x54
	int partner_account_type_;  // +0x78
	int coach_team_;  // +0x7c
	string * nexon_pc_bang_name_;  // +0x80
	uint32 nexon_pc_bang_no_;  // +0x88
	int32 rank_change_;  // +0x8c
	bool cameraman_;  // +0xb8

	uint32 lobby_mvp_vote_account_id_;  // +0xbc
	int search_match_type_;  // +0xc0
	uint32 favorite_team_and_quality_;  // +0xc4

	static CDOTALobbyMember * default_instance_;
	CDOTALobbyMember();
	virtual ~CDOTALobbyMember();
	CDOTALobbyMember(const CDOTALobbyMember &);
	CDOTALobbyMember & operator=(const CDOTALobbyMember &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTALobbyMember & default_instance();
	void Swap(CDOTALobbyMember *);
	virtual CDOTALobbyMember * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTALobbyMember &);
	void MergeFrom(const CDOTALobbyMember &);
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
	uint64 id();
	void set_id(uint64);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	bool has_team();
	void clear_team();
	DOTA_GC_TEAM team();
	void set_team(DOTA_GC_TEAM);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_slot();
	void clear_slot();
	uint32 slot();
	void set_slot(uint32);
	bool has_party_id();
	void clear_party_id();
	uint64 party_id();
	void set_party_id(uint64);
	bool has_meta_level();
	void clear_meta_level();
	uint32 meta_level();
	void set_meta_level(uint32);
	bool has_meta_xp();
	void clear_meta_xp();
	uint32 meta_xp();
	void set_meta_xp(uint32);
	bool has_meta_xp_awarded();
	void clear_meta_xp_awarded();
	uint32 meta_xp_awarded();
	void set_meta_xp_awarded(uint32);
	bool has_leaver_status();
	void clear_leaver_status();
	DOTALeaverStatus_t leaver_status();
	void set_leaver_status(DOTALeaverStatus_t);
	bool has_leaver_actions();
	void clear_leaver_actions();
	uint32 leaver_actions();
	void set_leaver_actions(uint32);
	bool has_channel();
	void clear_channel();
	uint32 channel();
	void set_channel(uint32);
	bool has_prize_def_index();
	void clear_prize_def_index();
	uint32 prize_def_index();
	void set_prize_def_index(uint32);
	int disabled_hero_id_size();
	void clear_disabled_hero_id();
	uint32 disabled_hero_id(int);
	void set_disabled_hero_id(int, uint32);
	void add_disabled_hero_id(uint32);
	const RepeatedField<unsigned int> & disabled_hero_id();
	RepeatedField<unsigned int> * mutable_disabled_hero_id();
	bool has_partner_account_type();
	void clear_partner_account_type();
	PartnerAccountType partner_account_type();
	void set_partner_account_type(PartnerAccountType);
	int enabled_hero_id_size();
	void clear_enabled_hero_id();
	uint32 enabled_hero_id(int);
	void set_enabled_hero_id(int, uint32);
	void add_enabled_hero_id(uint32);
	const RepeatedField<unsigned int> & enabled_hero_id();
	RepeatedField<unsigned int> * mutable_enabled_hero_id();
	bool has_coach_team();
	void clear_coach_team();
	DOTA_GC_TEAM coach_team();
	void set_coach_team(DOTA_GC_TEAM);
	bool has_nexon_pc_bang_no();
	void clear_nexon_pc_bang_no();
	uint32 nexon_pc_bang_no();
	void set_nexon_pc_bang_no(uint32);
	bool has_nexon_pc_bang_name();
	void clear_nexon_pc_bang_name();
	const string & nexon_pc_bang_name();
	void set_nexon_pc_bang_name(const string &);
	void set_nexon_pc_bang_name(const char *);
	void set_nexon_pc_bang_name(const char *, size_t);
	string * mutable_nexon_pc_bang_name();
	string * release_nexon_pc_bang_name();
	void set_allocated_nexon_pc_bang_name(string *);
	int xp_bonuses_size();
	void clear_xp_bonuses();
	const CDOTALobbyMember_CDOTALobbyMemberXPBonus & xp_bonuses(int);
	CDOTALobbyMember_CDOTALobbyMemberXPBonus * mutable_xp_bonuses(int);
	CDOTALobbyMember_CDOTALobbyMemberXPBonus * add_xp_bonuses();
	const RepeatedPtrField<CDOTALobbyMember_CDOTALobbyMemberXPBonus> & xp_bonuses();
	RepeatedPtrField<CDOTALobbyMember_CDOTALobbyMemberXPBonus> * mutable_xp_bonuses();
	bool has_rank_change();
	void clear_rank_change();
	int32 rank_change();
	void set_rank_change(int32);
	bool has_cameraman();
	void clear_cameraman();
	bool cameraman();
	void set_cameraman(bool);
	int custom_game_product_ids_size();
	void clear_custom_game_product_ids();
	uint32 custom_game_product_ids(int);
	void set_custom_game_product_ids(int, uint32);
	void add_custom_game_product_ids(uint32);
	const RepeatedField<unsigned int> & custom_game_product_ids();
	RepeatedField<unsigned int> * mutable_custom_game_product_ids();
	bool has_lobby_mvp_vote_account_id();
	void clear_lobby_mvp_vote_account_id();
	uint32 lobby_mvp_vote_account_id();
	void set_lobby_mvp_vote_account_id(uint32);
	bool has_search_match_type();
	void clear_search_match_type();
	MatchType search_match_type();
	void set_search_match_type(MatchType);
	bool has_favorite_team_and_quality();
	void clear_favorite_team_and_quality();
	uint32 favorite_team_and_quality();
	void set_favorite_team_and_quality(uint32);
	void set_has_id();
	void clear_has_id();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_team();
	void clear_has_team();
	void set_has_name();
	void clear_has_name();
	void set_has_slot();
	void clear_has_slot();
	void set_has_party_id();
	void clear_has_party_id();
	void set_has_meta_level();
	void clear_has_meta_level();
	void set_has_meta_xp();
	void clear_has_meta_xp();
	void set_has_meta_xp_awarded();
	void clear_has_meta_xp_awarded();
	void set_has_leaver_status();
	void clear_has_leaver_status();
	void set_has_leaver_actions();
	void clear_has_leaver_actions();
	void set_has_channel();
	void clear_has_channel();
	void set_has_prize_def_index();
	void clear_has_prize_def_index();
	void set_has_partner_account_type();
	void clear_has_partner_account_type();
	void set_has_coach_team();
	void clear_has_coach_team();
	void set_has_nexon_pc_bang_no();
	void clear_has_nexon_pc_bang_no();
	void set_has_nexon_pc_bang_name();
	void clear_has_nexon_pc_bang_name();
	void set_has_rank_change();
	void clear_has_rank_change();
	void set_has_cameraman();
	void clear_has_cameraman();
	void set_has_lobby_mvp_vote_account_id();
	void clear_has_lobby_mvp_vote_account_id();
	void set_has_search_match_type();
	void clear_has_search_match_type();
	void set_has_favorite_team_and_quality();
	void clear_has_favorite_team_and_quality();
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
	// sizeof = 200
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:1965
class CLobbyTeamDetails : public Message {
public:

	static const int kTeamNameFieldNumber = 1;
	static const int kTeamTagFieldNumber = 3;
	static const int kTeamIdFieldNumber = 4;
	static const int kTeamLogoFieldNumber = 5;
	static const int kTeamBaseLogoFieldNumber = 6;
	static const int kTeamBannerLogoFieldNumber = 7;
	static const int kTeamCompleteFieldNumber = 8;
	static const int kGuildNameFieldNumber = 9;
	static const int kGuildTagFieldNumber = 10;
	static const int kGuildIdFieldNumber = 11;
	static const int kGuildLogoFieldNumber = 12;
	static const int kGuildBaseLogoFieldNumber = 13;
	static const int kGuildBannerLogoFieldNumber = 14;
	static const int kRankFieldNumber = 15;
	static const int kRankChangeFieldNumber = 16;
	static const int kIsHomeTeamFieldNumber = 17;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * team_name_;  // +0x18
	string * team_tag_;  // +0x20
	uint64 team_logo_;  // +0x28
	uint64 team_base_logo_;  // +0x30
	uint64 team_banner_logo_;  // +0x38
	uint32 team_id_;  // +0x40
	uint32 guild_id_;  // +0x44
	string * guild_name_;  // +0x48
	string * guild_tag_;  // +0x50
	uint64 guild_logo_;  // +0x58
	uint64 guild_base_logo_;  // +0x60
	bool team_complete_;  // +0x68
	bool is_home_team_;  // +0x69

	uint32 rank_;  // +0x6c
	uint64 guild_banner_logo_;  // +0x70
	int32 rank_change_;  // +0x78

	static CLobbyTeamDetails * default_instance_;
	CLobbyTeamDetails();
	virtual ~CLobbyTeamDetails();
	CLobbyTeamDetails(const CLobbyTeamDetails &);
	CLobbyTeamDetails & operator=(const CLobbyTeamDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CLobbyTeamDetails & default_instance();
	void Swap(CLobbyTeamDetails *);
	virtual CLobbyTeamDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CLobbyTeamDetails &);
	void MergeFrom(const CLobbyTeamDetails &);
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
	bool has_team_name();
	void clear_team_name();
	const string & team_name();
	void set_team_name(const string &);
	void set_team_name(const char *);
	void set_team_name(const char *, size_t);
	string * mutable_team_name();
	string * release_team_name();
	void set_allocated_team_name(string *);
	bool has_team_tag();
	void clear_team_tag();
	const string & team_tag();
	void set_team_tag(const string &);
	void set_team_tag(const char *);
	void set_team_tag(const char *, size_t);
	string * mutable_team_tag();
	string * release_team_tag();
	void set_allocated_team_tag(string *);
	bool has_team_id();
	void clear_team_id();
	uint32 team_id();
	void set_team_id(uint32);
	bool has_team_logo();
	void clear_team_logo();
	uint64 team_logo();
	void set_team_logo(uint64);
	bool has_team_base_logo();
	void clear_team_base_logo();
	uint64 team_base_logo();
	void set_team_base_logo(uint64);
	bool has_team_banner_logo();
	void clear_team_banner_logo();
	uint64 team_banner_logo();
	void set_team_banner_logo(uint64);
	bool has_team_complete();
	void clear_team_complete();
	bool team_complete();
	void set_team_complete(bool);
	bool has_guild_name();
	void clear_guild_name();
	const string & guild_name();
	void set_guild_name(const string &);
	void set_guild_name(const char *);
	void set_guild_name(const char *, size_t);
	string * mutable_guild_name();
	string * release_guild_name();
	void set_allocated_guild_name(string *);
	bool has_guild_tag();
	void clear_guild_tag();
	const string & guild_tag();
	void set_guild_tag(const string &);
	void set_guild_tag(const char *);
	void set_guild_tag(const char *, size_t);
	string * mutable_guild_tag();
	string * release_guild_tag();
	void set_allocated_guild_tag(string *);
	bool has_guild_id();
	void clear_guild_id();
	uint32 guild_id();
	void set_guild_id(uint32);
	bool has_guild_logo();
	void clear_guild_logo();
	uint64 guild_logo();
	void set_guild_logo(uint64);
	bool has_guild_base_logo();
	void clear_guild_base_logo();
	uint64 guild_base_logo();
	void set_guild_base_logo(uint64);
	bool has_guild_banner_logo();
	void clear_guild_banner_logo();
	uint64 guild_banner_logo();
	void set_guild_banner_logo(uint64);
	bool has_rank();
	void clear_rank();
	uint32 rank();
	void set_rank(uint32);
	bool has_rank_change();
	void clear_rank_change();
	int32 rank_change();
	void set_rank_change(int32);
	bool has_is_home_team();
	void clear_is_home_team();
	bool is_home_team();
	void set_is_home_team(bool);
	void set_has_team_name();
	void clear_has_team_name();
	void set_has_team_tag();
	void clear_has_team_tag();
	void set_has_team_id();
	void clear_has_team_id();
	void set_has_team_logo();
	void clear_has_team_logo();
	void set_has_team_base_logo();
	void clear_has_team_base_logo();
	void set_has_team_banner_logo();
	void clear_has_team_banner_logo();
	void set_has_team_complete();
	void clear_has_team_complete();
	void set_has_guild_name();
	void clear_has_guild_name();
	void set_has_guild_tag();
	void clear_has_guild_tag();
	void set_has_guild_id();
	void clear_has_guild_id();
	void set_has_guild_logo();
	void clear_has_guild_logo();
	void set_has_guild_base_logo();
	void clear_has_guild_base_logo();
	void set_has_guild_banner_logo();
	void clear_has_guild_banner_logo();
	void set_has_rank();
	void clear_has_rank();
	void set_has_rank_change();
	void clear_has_rank_change();
	void set_has_is_home_team();
	void clear_has_is_home_team();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:2214
class CLobbyTimedRewardDetails : public Message {
public:

	static const int kItemDefIndexFieldNumber = 2;
	static const int kIsSupplyCrateFieldNumber = 3;
	static const int kIsTimedDropFieldNumber = 4;
	static const int kAccountIdFieldNumber = 5;
	static const int kOriginFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_index_;  // +0x18
	bool is_supply_crate_;  // +0x1c
	bool is_timed_drop_;  // +0x1d

	uint32 account_id_;  // +0x20
	uint32 origin_;  // +0x24

	static CLobbyTimedRewardDetails * default_instance_;
	CLobbyTimedRewardDetails();
	virtual ~CLobbyTimedRewardDetails();
	CLobbyTimedRewardDetails(const CLobbyTimedRewardDetails &);
	CLobbyTimedRewardDetails & operator=(const CLobbyTimedRewardDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CLobbyTimedRewardDetails & default_instance();
	void Swap(CLobbyTimedRewardDetails *);
	virtual CLobbyTimedRewardDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CLobbyTimedRewardDetails &);
	void MergeFrom(const CLobbyTimedRewardDetails &);
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
	bool has_item_def_index();
	void clear_item_def_index();
	uint32 item_def_index();
	void set_item_def_index(uint32);
	bool has_is_supply_crate();
	void clear_is_supply_crate();
	bool is_supply_crate();
	void set_is_supply_crate(bool);
	bool has_is_timed_drop();
	void clear_is_timed_drop();
	bool is_timed_drop();
	void set_is_timed_drop(bool);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_origin();
	void clear_origin();
	uint32 origin();
	void set_origin(uint32);
	void set_has_item_def_index();
	void clear_has_item_def_index();
	void set_has_is_supply_crate();
	void clear_has_is_supply_crate();
	void set_has_is_timed_drop();
	void clear_has_is_timed_drop();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_origin();
	void clear_has_origin();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:2333
class CLobbyBroadcastChannelInfo : public Message {
public:

	static const int kChannelIdFieldNumber = 1;
	static const int kCountryCodeFieldNumber = 2;
	static const int kDescriptionFieldNumber = 3;
	static const int kLanguageCodeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * country_code_;  // +0x18
	string * description_;  // +0x20
	string * language_code_;  // +0x28
	uint32 channel_id_;  // +0x30

	static CLobbyBroadcastChannelInfo * default_instance_;
	CLobbyBroadcastChannelInfo();
	virtual ~CLobbyBroadcastChannelInfo();
	CLobbyBroadcastChannelInfo(const CLobbyBroadcastChannelInfo &);
	CLobbyBroadcastChannelInfo & operator=(const CLobbyBroadcastChannelInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CLobbyBroadcastChannelInfo & default_instance();
	void Swap(CLobbyBroadcastChannelInfo *);
	virtual CLobbyBroadcastChannelInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CLobbyBroadcastChannelInfo &);
	void MergeFrom(const CLobbyBroadcastChannelInfo &);
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
	bool has_channel_id();
	void clear_channel_id();
	uint32 channel_id();
	void set_channel_id(uint32);
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
	bool has_language_code();
	void clear_language_code();
	const string & language_code();
	void set_language_code(const string &);
	void set_language_code(const char *);
	void set_language_code(const char *, size_t);
	string * mutable_language_code();
	string * release_language_code();
	void set_allocated_language_code(string *);
	void set_has_channel_id();
	void clear_has_channel_id();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:2457
class CSODOTALobby_CExtraMsg : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kContentsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * contents_;  // +0x18
	uint32 id_;  // +0x20

	static CSODOTALobby_CExtraMsg * default_instance_;
	CSODOTALobby_CExtraMsg();
	virtual ~CSODOTALobby_CExtraMsg();
	CSODOTALobby_CExtraMsg(const CSODOTALobby_CExtraMsg &);
	CSODOTALobby_CExtraMsg & operator=(const CSODOTALobby_CExtraMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTALobby_CExtraMsg & default_instance();
	void Swap(CSODOTALobby_CExtraMsg *);
	virtual CSODOTALobby_CExtraMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTALobby_CExtraMsg &);
	void MergeFrom(const CSODOTALobby_CExtraMsg &);
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
	bool has_contents();
	void clear_contents();
	const string & contents();
	void set_contents(const string &);
	void set_contents(const char *);
	void set_contents(const void *, size_t);
	string * mutable_contents();
	string * release_contents();
	void set_allocated_contents(string *);
	void set_has_id();
	void clear_has_id();
	void set_has_contents();
	void clear_has_contents();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:2551
class CSODOTALobby : public Message {
public:

	static const CSODOTALobby_State UI;
	static const CSODOTALobby_State READYUP = 4;
	static const CSODOTALobby_State SERVERSETUP = 1;
	static const CSODOTALobby_State RUN = 2;
	static const CSODOTALobby_State POSTGAME = 3;
	static const CSODOTALobby_State NOTREADY = 5;
	static const CSODOTALobby_State SERVERASSIGN = 6;
	static const CSODOTALobby_State State_MIN;
	static const CSODOTALobby_State State_MAX = 6;
	static const int State_ARRAYSIZE = 7;
	static const CSODOTALobby_LobbyType INVALID = 18446744073709551615;
	static const CSODOTALobby_LobbyType CASUAL_MATCH;
	static const CSODOTALobby_LobbyType PRACTICE = 1;
	static const CSODOTALobby_LobbyType TOURNAMENT = 2;
	static const CSODOTALobby_LobbyType COOP_BOT_MATCH = 4;
	static const CSODOTALobby_LobbyType LEGACY_TEAM_MATCH = 5;
	static const CSODOTALobby_LobbyType LEGACY_SOLO_QUEUE_MATCH = 6;
	static const CSODOTALobby_LobbyType COMPETITIVE_MATCH = 7;
	static const CSODOTALobby_LobbyType CASUAL_1V1_MATCH = 8;
	static const CSODOTALobby_LobbyType WEEKEND_TOURNEY = 9;
	static const CSODOTALobby_LobbyType LOCAL_BOT_MATCH = 10;
	static const CSODOTALobby_LobbyType SPECTATOR = 11;
	static const CSODOTALobby_LobbyType LobbyType_MIN = 18446744073709551615;
	static const CSODOTALobby_LobbyType LobbyType_MAX = 11;
	static const int LobbyType_ARRAYSIZE = 12;
	static const int kLobbyIdFieldNumber = 1;
	static const int kMembersFieldNumber = 2;
	static const int kLeftMembersFieldNumber = 7;
	static const int kLeaderIdFieldNumber = 11;
	static const int kServerIdFieldNumber = 6;
	static const int kGameModeFieldNumber = 3;
	static const int kPendingInvitesFieldNumber = 10;
	static const int kStateFieldNumber = 4;
	static const int kConnectFieldNumber = 5;
	static const int kLobbyTypeFieldNumber = 12;
	static const int kAllowCheatsFieldNumber = 13;
	static const int kFillWithBotsFieldNumber = 14;
	static const int kIntroModeFieldNumber = 15;
	static const int kGameNameFieldNumber = 16;
	static const int kTeamDetailsFieldNumber = 17;
	static const int kTutorialLessonFieldNumber = 18;
	static const int kTournamentIdFieldNumber = 19;
	static const int kTournamentGameIdFieldNumber = 20;
	static const int kServerRegionFieldNumber = 21;
	static const int kGameStateFieldNumber = 22;
	static const int kNumSpectatorsFieldNumber = 23;
	static const int kMatchgroupFieldNumber = 25;
	static const int kCmPickFieldNumber = 28;
	static const int kMatchIdFieldNumber = 30;
	static const int kAllowSpectatingFieldNumber = 31;
	static const int kBotDifficultyRadiantFieldNumber = 36;
	static const int kGameVersionFieldNumber = 37;
	static const int kTimedRewardDetailsFieldNumber = 38;
	static const int kPassKeyFieldNumber = 39;
	static const int kLeagueidFieldNumber = 42;
	static const int kPenaltyLevelRadiantFieldNumber = 43;
	static const int kPenaltyLevelDireFieldNumber = 44;
	static const int kLoadGameIdFieldNumber = 45;
	static const int kSeriesTypeFieldNumber = 46;
	static const int kRadiantSeriesWinsFieldNumber = 47;
	static const int kDireSeriesWinsFieldNumber = 48;
	static const int kLootGeneratedFieldNumber = 49;
	static const int kLootAwardedFieldNumber = 50;
	static const int kAllchatFieldNumber = 51;
	static const int kDotaTvDelayFieldNumber = 53;
	static const int kCustomGameModeFieldNumber = 54;
	static const int kCustomMapNameFieldNumber = 55;
	static const int kCustomDifficultyFieldNumber = 56;
	static const int kLanFieldNumber = 57;
	static const int kBroadcastChannelInfoFieldNumber = 58;
	static const int kFirstLeaverAccountidFieldNumber = 59;
	static const int kSeriesIdFieldNumber = 60;
	static const int kLowPriorityFieldNumber = 61;
	static const int kExtraMessagesFieldNumber = 62;
	static const int kSaveGameFieldNumber = 63;
	static const int kFirstBloodHappenedFieldNumber = 65;
	static const int kMatchOutcomeFieldNumber = 70;
	static const int kMassDisconnectFieldNumber = 67;
	static const int kCustomGameIdFieldNumber = 68;
	static const int kActiveIngameEventsFieldNumber = 69;
	static const int kCustomMinPlayersFieldNumber = 71;
	static const int kCustomMaxPlayersFieldNumber = 72;
	static const int kPartnerTypeFieldNumber = 73;
	static const int kLanHostPingToServerRegionFieldNumber = 74;
	static const int kVisibilityFieldNumber = 75;
	static const int kCustomGameCrcFieldNumber = 76;
	static const int kCustomGameAutoCreatedLobbyFieldNumber = 77;
	static const int kLeagueSeriesIdFieldNumber = 78;
	static const int kLeagueGameIdFieldNumber = 79;
	static const int kCustomGameTimestampFieldNumber = 80;
	static const int kPreviousSeriesMatchesFieldNumber = 81;
	static const int kPreviousMatchOverrideFieldNumber = 82;
	static const int kCustomGameUsesAccountRecordsFieldNumber = 83;
	static const int kLeagueSelectionPriorityTeamFieldNumber = 84;
	static const int kLeagueSelectionPriorityChoiceFieldNumber = 85;
	static const int kLeagueNonSelectionPriorityChoiceFieldNumber = 86;
	static const int kGameStartTimeFieldNumber = 87;
	static const int kPauseSettingFieldNumber = 88;
	static const int kLobbyMvpAccountIdFieldNumber = 89;
	static const int kWeekendTourneyDivisionIdFieldNumber = 90;
	static const int kWeekendTourneySkillLevelFieldNumber = 91;
	static const int kWeekendTourneyBracketRoundFieldNumber = 92;
	static const int kBotDifficultyDireFieldNumber = 93;
	static const int kBotRadiantFieldNumber = 94;
	static const int kBotDireFieldNumber = 95;
private:

	unsigned int _has_bits_[3];  // +0x10
	int _cached_size_;  // +0x1c
	uint64 lobby_id_;  // +0x20
	uint64 leader_id_;  // +0x58
	uint64 server_id_;  // +0x60
	uint32 game_mode_;  // +0x78
	int state_;  // +0x7c
	string * connect_;  // +0x80
	string * game_name_;  // +0x88
	int lobby_type_;  // +0x90
	bool allow_cheats_;  // +0x94
	bool fill_with_bots_;  // +0x95
	bool intro_mode_;  // +0x96
	bool allow_spectating_;  // +0x97
	uint32 tutorial_lesson_;  // +0xb0
	uint32 tournament_id_;  // +0xb4
	uint32 tournament_game_id_;  // +0xb8
	uint32 server_region_;  // +0xbc
	int game_state_;  // +0xc0
	uint32 num_spectators_;  // +0xc4
	uint32 matchgroup_;  // +0xc8
	int cm_pick_;  // +0xcc
	uint64 match_id_;  // +0xd0
	int bot_difficulty_radiant_;  // +0xd8
	int game_version_;  // +0xdc
	string * pass_key_;  // +0xf8
	uint32 leagueid_;  // +0x100
	uint32 penalty_level_radiant_;  // +0x104
	uint32 penalty_level_dire_;  // +0x108
	uint32 load_game_id_;  // +0x10c
	uint32 series_type_;  // +0x110
	uint32 radiant_series_wins_;  // +0x114
	uint32 dire_series_wins_;  // +0x118
	uint32 loot_generated_;  // +0x11c
	uint32 loot_awarded_;  // +0x120
	int dota_tv_delay_;  // +0x124
	string * custom_game_mode_;  // +0x128
	string * custom_map_name_;  // +0x130
	uint32 custom_difficulty_;  // +0x150
	bool allchat_;  // +0x154
	bool lan_;  // +0x155
	bool low_priority_;  // +0x156
	bool first_blood_happened_;  // +0x157
	uint32 first_leaver_accountid_;  // +0x158
	uint32 series_id_;  // +0x15c
	uint64 custom_game_id_;  // +0x180
	int match_outcome_;  // +0x188
	uint32 custom_min_players_;  // +0x18c
	uint32 custom_max_players_;  // +0x1a0
	int partner_type_;  // +0x1a4
	uint32 lan_host_ping_to_server_region_;  // +0x1a8
	int visibility_;  // +0x1ac
	uint64 custom_game_crc_;  // +0x1b0
	bool mass_disconnect_;  // +0x1b8
	bool custom_game_auto_created_lobby_;  // +0x1b9
	bool custom_game_uses_account_records_;  // +0x1ba

	uint32 league_series_id_;  // +0x1bc
	uint32 league_game_id_;  // +0x1c0
	uint32 custom_game_timestamp_;  // +0x1c4
	uint64 previous_match_override_;  // +0x1d8
	uint32 league_selection_priority_team_;  // +0x1e0
	int league_selection_priority_choice_;  // +0x1e4
	int league_non_selection_priority_choice_;  // +0x1e8
	uint32 game_start_time_;  // +0x1ec
	int pause_setting_;  // +0x1f0
	uint32 lobby_mvp_account_id_;  // +0x1f4
	uint32 weekend_tourney_division_id_;  // +0x1f8
	uint32 weekend_tourney_skill_level_;  // +0x1fc
	uint32 weekend_tourney_bracket_round_;  // +0x200
	int bot_difficulty_dire_;  // +0x204
	uint64 bot_radiant_;  // +0x208
	uint64 bot_dire_;  // +0x210

	static CSODOTALobby * default_instance_;
	typedef CSODOTALobby_State State;
	typedef CSODOTALobby_LobbyType LobbyType;
	CSODOTALobby();
	virtual ~CSODOTALobby();
	CSODOTALobby(const CSODOTALobby &);
	CSODOTALobby & operator=(const CSODOTALobby &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSODOTALobby & default_instance();
	void Swap(CSODOTALobby *);
	virtual CSODOTALobby * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSODOTALobby &);
	void MergeFrom(const CSODOTALobby &);
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
	bool State_IsValid(int);
	const EnumDescriptor * State_descriptor();
	const string & State_Name(State);
	bool State_Parse(const string &, State *);
	bool LobbyType_IsValid(int);
	const EnumDescriptor * LobbyType_descriptor();
	const string & LobbyType_Name(LobbyType);
	bool LobbyType_Parse(const string &, LobbyType *);
	bool has_lobby_id();
	void clear_lobby_id();
	uint64 lobby_id();
	void set_lobby_id(uint64);
	int members_size();
	void clear_members();
	const CDOTALobbyMember & members(int);
	CDOTALobbyMember * mutable_members(int);
	CDOTALobbyMember * add_members();
	const RepeatedPtrField<CDOTALobbyMember> & members();
	RepeatedPtrField<CDOTALobbyMember> * mutable_members();
	int left_members_size();
	void clear_left_members();
	const CDOTALobbyMember & left_members(int);
	CDOTALobbyMember * mutable_left_members(int);
	CDOTALobbyMember * add_left_members();
	const RepeatedPtrField<CDOTALobbyMember> & left_members();
	RepeatedPtrField<CDOTALobbyMember> * mutable_left_members();
	bool has_leader_id();
	void clear_leader_id();
	uint64 leader_id();
	void set_leader_id(uint64);
	bool has_server_id();
	void clear_server_id();
	uint64 server_id();
	void set_server_id(uint64);
	bool has_game_mode();
	void clear_game_mode();
	uint32 game_mode();
	void set_game_mode(uint32);
	int pending_invites_size();
	void clear_pending_invites();
	uint64 pending_invites(int);
	void set_pending_invites(int, uint64);
	void add_pending_invites(uint64);
	const RepeatedField<long unsigned int> & pending_invites();
	RepeatedField<long unsigned int> * mutable_pending_invites();
	bool has_state();
	void clear_state();
	CSODOTALobby_State state();
	void set_state(CSODOTALobby_State);
	bool has_connect();
	void clear_connect();
	const string & connect();
	void set_connect(const string &);
	void set_connect(const char *);
	void set_connect(const char *, size_t);
	string * mutable_connect();
	string * release_connect();
	void set_allocated_connect(string *);
	bool has_lobby_type();
	void clear_lobby_type();
	CSODOTALobby_LobbyType lobby_type();
	void set_lobby_type(CSODOTALobby_LobbyType);
	bool has_allow_cheats();
	void clear_allow_cheats();
	bool allow_cheats();
	void set_allow_cheats(bool);
	bool has_fill_with_bots();
	void clear_fill_with_bots();
	bool fill_with_bots();
	void set_fill_with_bots(bool);
	bool has_intro_mode();
	void clear_intro_mode();
	bool intro_mode();
	void set_intro_mode(bool);
	bool has_game_name();
	void clear_game_name();
	const string & game_name();
	void set_game_name(const string &);
	void set_game_name(const char *);
	void set_game_name(const char *, size_t);
	string * mutable_game_name();
	string * release_game_name();
	void set_allocated_game_name(string *);
	int team_details_size();
	void clear_team_details();
	const CLobbyTeamDetails & team_details(int);
	CLobbyTeamDetails * mutable_team_details(int);
	CLobbyTeamDetails * add_team_details();
	const RepeatedPtrField<CLobbyTeamDetails> & team_details();
	RepeatedPtrField<CLobbyTeamDetails> * mutable_team_details();
	bool has_tutorial_lesson();
	void clear_tutorial_lesson();
	uint32 tutorial_lesson();
	void set_tutorial_lesson(uint32);
	bool has_tournament_id();
	void clear_tournament_id();
	uint32 tournament_id();
	void set_tournament_id(uint32);
	bool has_tournament_game_id();
	void clear_tournament_game_id();
	uint32 tournament_game_id();
	void set_tournament_game_id(uint32);
	bool has_server_region();
	void clear_server_region();
	uint32 server_region();
	void set_server_region(uint32);
	bool has_game_state();
	void clear_game_state();
	DOTA_GameState game_state();
	void set_game_state(DOTA_GameState);
	bool has_num_spectators();
	void clear_num_spectators();
	uint32 num_spectators();
	void set_num_spectators(uint32);
	bool has_matchgroup();
	void clear_matchgroup();
	uint32 matchgroup();
	void set_matchgroup(uint32);
	bool has_cm_pick();
	void clear_cm_pick();
	DOTA_CM_PICK cm_pick();
	void set_cm_pick(DOTA_CM_PICK);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_allow_spectating();
	void clear_allow_spectating();
	bool allow_spectating();
	void set_allow_spectating(bool);
	bool has_bot_difficulty_radiant();
	void clear_bot_difficulty_radiant();
	DOTABotDifficulty bot_difficulty_radiant();
	void set_bot_difficulty_radiant(DOTABotDifficulty);
	bool has_game_version();
	void clear_game_version();
	DOTAGameVersion game_version();
	void set_game_version(DOTAGameVersion);
	int timed_reward_details_size();
	void clear_timed_reward_details();
	const CLobbyTimedRewardDetails & timed_reward_details(int);
	CLobbyTimedRewardDetails * mutable_timed_reward_details(int);
	CLobbyTimedRewardDetails * add_timed_reward_details();
	const RepeatedPtrField<CLobbyTimedRewardDetails> & timed_reward_details();
	RepeatedPtrField<CLobbyTimedRewardDetails> * mutable_timed_reward_details();
	bool has_pass_key();
	void clear_pass_key();
	const string & pass_key();
	void set_pass_key(const string &);
	void set_pass_key(const char *);
	void set_pass_key(const char *, size_t);
	string * mutable_pass_key();
	string * release_pass_key();
	void set_allocated_pass_key(string *);
	bool has_leagueid();
	void clear_leagueid();
	uint32 leagueid();
	void set_leagueid(uint32);
	bool has_penalty_level_radiant();
	void clear_penalty_level_radiant();
	uint32 penalty_level_radiant();
	void set_penalty_level_radiant(uint32);
	bool has_penalty_level_dire();
	void clear_penalty_level_dire();
	uint32 penalty_level_dire();
	void set_penalty_level_dire(uint32);
	bool has_load_game_id();
	void clear_load_game_id();
	uint32 load_game_id();
	void set_load_game_id(uint32);
	bool has_series_type();
	void clear_series_type();
	uint32 series_type();
	void set_series_type(uint32);
	bool has_radiant_series_wins();
	void clear_radiant_series_wins();
	uint32 radiant_series_wins();
	void set_radiant_series_wins(uint32);
	bool has_dire_series_wins();
	void clear_dire_series_wins();
	uint32 dire_series_wins();
	void set_dire_series_wins(uint32);
	bool has_loot_generated();
	void clear_loot_generated();
	uint32 loot_generated();
	void set_loot_generated(uint32);
	bool has_loot_awarded();
	void clear_loot_awarded();
	uint32 loot_awarded();
	void set_loot_awarded(uint32);
	bool has_allchat();
	void clear_allchat();
	bool allchat();
	void set_allchat(bool);
	bool has_dota_tv_delay();
	void clear_dota_tv_delay();
	LobbyDotaTVDelay dota_tv_delay();
	void set_dota_tv_delay(LobbyDotaTVDelay);
	bool has_custom_game_mode();
	void clear_custom_game_mode();
	const string & custom_game_mode();
	void set_custom_game_mode(const string &);
	void set_custom_game_mode(const char *);
	void set_custom_game_mode(const char *, size_t);
	string * mutable_custom_game_mode();
	string * release_custom_game_mode();
	void set_allocated_custom_game_mode(string *);
	bool has_custom_map_name();
	void clear_custom_map_name();
	const string & custom_map_name();
	void set_custom_map_name(const string &);
	void set_custom_map_name(const char *);
	void set_custom_map_name(const char *, size_t);
	string * mutable_custom_map_name();
	string * release_custom_map_name();
	void set_allocated_custom_map_name(string *);
	bool has_custom_difficulty();
	void clear_custom_difficulty();
	uint32 custom_difficulty();
	void set_custom_difficulty(uint32);
	bool has_lan();
	void clear_lan();
	bool lan();
	void set_lan(bool);
	int broadcast_channel_info_size();
	void clear_broadcast_channel_info();
	const CLobbyBroadcastChannelInfo & broadcast_channel_info(int);
	CLobbyBroadcastChannelInfo * mutable_broadcast_channel_info(int);
	CLobbyBroadcastChannelInfo * add_broadcast_channel_info();
	const RepeatedPtrField<CLobbyBroadcastChannelInfo> & broadcast_channel_info();
	RepeatedPtrField<CLobbyBroadcastChannelInfo> * mutable_broadcast_channel_info();
	bool has_first_leaver_accountid();
	void clear_first_leaver_accountid();
	uint32 first_leaver_accountid();
	void set_first_leaver_accountid(uint32);
	bool has_series_id();
	void clear_series_id();
	uint32 series_id();
	void set_series_id(uint32);
	bool has_low_priority();
	void clear_low_priority();
	bool low_priority();
	void set_low_priority(bool);
	int extra_messages_size();
	void clear_extra_messages();
	const CSODOTALobby_CExtraMsg & extra_messages(int);
	CSODOTALobby_CExtraMsg * mutable_extra_messages(int);
	CSODOTALobby_CExtraMsg * add_extra_messages();
	const RepeatedPtrField<CSODOTALobby_CExtraMsg> & extra_messages();
	RepeatedPtrField<CSODOTALobby_CExtraMsg> * mutable_extra_messages();
	bool has_save_game();
	void clear_save_game();
	const CDOTASaveGame & save_game();
	CDOTASaveGame * mutable_save_game();
	CDOTASaveGame * release_save_game();
	void set_allocated_save_game(CDOTASaveGame *);
	bool has_first_blood_happened();
	void clear_first_blood_happened();
	bool first_blood_happened();
	void set_first_blood_happened(bool);
	bool has_match_outcome();
	void clear_match_outcome();
	EMatchOutcome match_outcome();
	void set_match_outcome(EMatchOutcome);
	bool has_mass_disconnect();
	void clear_mass_disconnect();
	bool mass_disconnect();
	void set_mass_disconnect(bool);
	bool has_custom_game_id();
	void clear_custom_game_id();
	uint64 custom_game_id();
	void set_custom_game_id(uint64);
	int active_ingame_events_size();
	void clear_active_ingame_events();
	EEvent active_ingame_events(int);
	void set_active_ingame_events(int, EEvent);
	void add_active_ingame_events(EEvent);
	const RepeatedField<int> & active_ingame_events();
	RepeatedField<int> * mutable_active_ingame_events();
	bool has_custom_min_players();
	void clear_custom_min_players();
	uint32 custom_min_players();
	void set_custom_min_players(uint32);
	bool has_custom_max_players();
	void clear_custom_max_players();
	uint32 custom_max_players();
	void set_custom_max_players(uint32);
	bool has_partner_type();
	void clear_partner_type();
	PartnerAccountType partner_type();
	void set_partner_type(PartnerAccountType);
	bool has_lan_host_ping_to_server_region();
	void clear_lan_host_ping_to_server_region();
	uint32 lan_host_ping_to_server_region();
	void set_lan_host_ping_to_server_region(uint32);
	bool has_visibility();
	void clear_visibility();
	DOTALobbyVisibility visibility();
	void set_visibility(DOTALobbyVisibility);
	bool has_custom_game_crc();
	void clear_custom_game_crc();
	uint64 custom_game_crc();
	void set_custom_game_crc(uint64);
	bool has_custom_game_auto_created_lobby();
	void clear_custom_game_auto_created_lobby();
	bool custom_game_auto_created_lobby();
	void set_custom_game_auto_created_lobby(bool);
	bool has_league_series_id();
	void clear_league_series_id();
	uint32 league_series_id();
	void set_league_series_id(uint32);
	bool has_league_game_id();
	void clear_league_game_id();
	uint32 league_game_id();
	void set_league_game_id(uint32);
	bool has_custom_game_timestamp();
	void clear_custom_game_timestamp();
	uint32 custom_game_timestamp();
	void set_custom_game_timestamp(uint32);
	int previous_series_matches_size();
	void clear_previous_series_matches();
	uint64 previous_series_matches(int);
	void set_previous_series_matches(int, uint64);
	void add_previous_series_matches(uint64);
	const RepeatedField<long unsigned int> & previous_series_matches();
	RepeatedField<long unsigned int> * mutable_previous_series_matches();
	bool has_previous_match_override();
	void clear_previous_match_override();
	uint64 previous_match_override();
	void set_previous_match_override(uint64);
	bool has_custom_game_uses_account_records();
	void clear_custom_game_uses_account_records();
	bool custom_game_uses_account_records();
	void set_custom_game_uses_account_records(bool);
	bool has_league_selection_priority_team();
	void clear_league_selection_priority_team();
	uint32 league_selection_priority_team();
	void set_league_selection_priority_team(uint32);
	bool has_league_selection_priority_choice();
	void clear_league_selection_priority_choice();
	SelectionPriorityType league_selection_priority_choice();
	void set_league_selection_priority_choice(SelectionPriorityType);
	bool has_league_non_selection_priority_choice();
	void clear_league_non_selection_priority_choice();
	SelectionPriorityType league_non_selection_priority_choice();
	void set_league_non_selection_priority_choice(SelectionPriorityType);
	bool has_game_start_time();
	void clear_game_start_time();
	uint32 game_start_time();
	void set_game_start_time(uint32);
	bool has_pause_setting();
	void clear_pause_setting();
	LobbyDotaPauseSetting pause_setting();
	void set_pause_setting(LobbyDotaPauseSetting);
	bool has_lobby_mvp_account_id();
	void clear_lobby_mvp_account_id();
	uint32 lobby_mvp_account_id();
	void set_lobby_mvp_account_id(uint32);
	bool has_weekend_tourney_division_id();
	void clear_weekend_tourney_division_id();
	uint32 weekend_tourney_division_id();
	void set_weekend_tourney_division_id(uint32);
	bool has_weekend_tourney_skill_level();
	void clear_weekend_tourney_skill_level();
	uint32 weekend_tourney_skill_level();
	void set_weekend_tourney_skill_level(uint32);
	bool has_weekend_tourney_bracket_round();
	void clear_weekend_tourney_bracket_round();
	uint32 weekend_tourney_bracket_round();
	void set_weekend_tourney_bracket_round(uint32);
	bool has_bot_difficulty_dire();
	void clear_bot_difficulty_dire();
	DOTABotDifficulty bot_difficulty_dire();
	void set_bot_difficulty_dire(DOTABotDifficulty);
	bool has_bot_radiant();
	void clear_bot_radiant();
	uint64 bot_radiant();
	void set_bot_radiant(uint64);
	bool has_bot_dire();
	void clear_bot_dire();
	uint64 bot_dire();
	void set_bot_dire(uint64);
	void set_has_lobby_id();
	void clear_has_lobby_id();
	void set_has_leader_id();
	void clear_has_leader_id();
	void set_has_server_id();
	void clear_has_server_id();
	void set_has_game_mode();
	void clear_has_game_mode();
	void set_has_state();
	void clear_has_state();
	void set_has_connect();
	void clear_has_connect();
	void set_has_lobby_type();
	void clear_has_lobby_type();
	void set_has_allow_cheats();
	void clear_has_allow_cheats();
	void set_has_fill_with_bots();
	void clear_has_fill_with_bots();
	void set_has_intro_mode();
	void clear_has_intro_mode();
	void set_has_game_name();
	void clear_has_game_name();
	void set_has_tutorial_lesson();
	void clear_has_tutorial_lesson();
	void set_has_tournament_id();
	void clear_has_tournament_id();
	void set_has_tournament_game_id();
	void clear_has_tournament_game_id();
	void set_has_server_region();
	void clear_has_server_region();
	void set_has_game_state();
	void clear_has_game_state();
	void set_has_num_spectators();
	void clear_has_num_spectators();
	void set_has_matchgroup();
	void clear_has_matchgroup();
	void set_has_cm_pick();
	void clear_has_cm_pick();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_allow_spectating();
	void clear_has_allow_spectating();
	void set_has_bot_difficulty_radiant();
	void clear_has_bot_difficulty_radiant();
	void set_has_game_version();
	void clear_has_game_version();
	void set_has_pass_key();
	void clear_has_pass_key();
	void set_has_leagueid();
	void clear_has_leagueid();
	void set_has_penalty_level_radiant();
	void clear_has_penalty_level_radiant();
	void set_has_penalty_level_dire();
	void clear_has_penalty_level_dire();
	void set_has_load_game_id();
	void clear_has_load_game_id();
	void set_has_series_type();
	void clear_has_series_type();
	void set_has_radiant_series_wins();
	void clear_has_radiant_series_wins();
	void set_has_dire_series_wins();
	void clear_has_dire_series_wins();
	void set_has_loot_generated();
	void clear_has_loot_generated();
	void set_has_loot_awarded();
	void clear_has_loot_awarded();
	void set_has_allchat();
	void clear_has_allchat();
	void set_has_dota_tv_delay();
	void clear_has_dota_tv_delay();
	void set_has_custom_game_mode();
	void clear_has_custom_game_mode();
	void set_has_custom_map_name();
	void clear_has_custom_map_name();
	void set_has_custom_difficulty();
	void clear_has_custom_difficulty();
	void set_has_lan();
	void clear_has_lan();
	void set_has_first_leaver_accountid();
	void clear_has_first_leaver_accountid();
	void set_has_series_id();
	void clear_has_series_id();
	void set_has_low_priority();
	void clear_has_low_priority();
	void set_has_save_game();
	void clear_has_save_game();
	void set_has_first_blood_happened();
	void clear_has_first_blood_happened();
	void set_has_match_outcome();
	void clear_has_match_outcome();
	void set_has_mass_disconnect();
	void clear_has_mass_disconnect();
	void set_has_custom_game_id();
	void clear_has_custom_game_id();
	void set_has_custom_min_players();
	void clear_has_custom_min_players();
	void set_has_custom_max_players();
	void clear_has_custom_max_players();
	void set_has_partner_type();
	void clear_has_partner_type();
	void set_has_lan_host_ping_to_server_region();
	void clear_has_lan_host_ping_to_server_region();
	void set_has_visibility();
	void clear_has_visibility();
	void set_has_custom_game_crc();
	void clear_has_custom_game_crc();
	void set_has_custom_game_auto_created_lobby();
	void clear_has_custom_game_auto_created_lobby();
	void set_has_league_series_id();
	void clear_has_league_series_id();
	void set_has_league_game_id();
	void clear_has_league_game_id();
	void set_has_custom_game_timestamp();
	void clear_has_custom_game_timestamp();
	void set_has_previous_match_override();
	void clear_has_previous_match_override();
	void set_has_custom_game_uses_account_records();
	void clear_has_custom_game_uses_account_records();
	void set_has_league_selection_priority_team();
	void clear_has_league_selection_priority_team();
	void set_has_league_selection_priority_choice();
	void clear_has_league_selection_priority_choice();
	void set_has_league_non_selection_priority_choice();
	void clear_has_league_non_selection_priority_choice();
	void set_has_game_start_time();
	void clear_has_game_start_time();
	void set_has_pause_setting();
	void clear_has_pause_setting();
	void set_has_lobby_mvp_account_id();
	void clear_has_lobby_mvp_account_id();
	void set_has_weekend_tourney_division_id();
	void clear_has_weekend_tourney_division_id();
	void set_has_weekend_tourney_skill_level();
	void clear_has_weekend_tourney_skill_level();
	void set_has_weekend_tourney_bracket_round();
	void clear_has_weekend_tourney_bracket_round();
	void set_has_bot_difficulty_dire();
	void clear_has_bot_difficulty_dire();
	void set_has_bot_radiant();
	void clear_has_bot_radiant();
	void set_has_bot_dire();
	void clear_has_bot_dire();
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
	// sizeof = 536
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_common_match_management.pb.h:3537
class CMsgLobbyPlaytestDetails : public Message {
public:

	static const int kJsonFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * json_;  // +0x18

	static CMsgLobbyPlaytestDetails * default_instance_;
	CMsgLobbyPlaytestDetails();
	virtual ~CMsgLobbyPlaytestDetails();
	CMsgLobbyPlaytestDetails(const CMsgLobbyPlaytestDetails &);
	CMsgLobbyPlaytestDetails & operator=(const CMsgLobbyPlaytestDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLobbyPlaytestDetails & default_instance();
	void Swap(CMsgLobbyPlaytestDetails *);
	virtual CMsgLobbyPlaytestDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLobbyPlaytestDetails &);
	void MergeFrom(const CMsgLobbyPlaytestDetails &);
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
	bool has_json();
	void clear_json();
	const string & json();
	void set_json(const string &);
	void set_json(const char *);
	void set_json(const char *, size_t);
	string * mutable_json();
	string * release_json();
	void set_allocated_json(string *);
	void set_has_json();
	void clear_has_json();
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
