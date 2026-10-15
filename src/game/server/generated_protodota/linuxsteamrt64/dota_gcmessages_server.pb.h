// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:440
class CMsgPoorNetworkConditions_Player : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kDisconnectReasonFieldNumber = 2;
	static const int kNumBadIntervalsFieldNumber = 3;
	static const int kPeakLossPctFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	int disconnect_reason_;  // +0x1c
	uint32 num_bad_intervals_;  // +0x20
	uint32 peak_loss_pct_;  // +0x24

	static CMsgPoorNetworkConditions_Player * default_instance_;
	CMsgPoorNetworkConditions_Player();
	virtual ~CMsgPoorNetworkConditions_Player();
	CMsgPoorNetworkConditions_Player(const CMsgPoorNetworkConditions_Player &);
	CMsgPoorNetworkConditions_Player & operator=(const CMsgPoorNetworkConditions_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgPoorNetworkConditions_Player & default_instance();
	void Swap(CMsgPoorNetworkConditions_Player *);
	virtual CMsgPoorNetworkConditions_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgPoorNetworkConditions_Player &);
	void MergeFrom(const CMsgPoorNetworkConditions_Player &);
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
	bool has_disconnect_reason();
	void clear_disconnect_reason();
	ENetworkDisconnectionReason disconnect_reason();
	void set_disconnect_reason(ENetworkDisconnectionReason);
	bool has_num_bad_intervals();
	void clear_num_bad_intervals();
	uint32 num_bad_intervals();
	void set_num_bad_intervals(uint32);
	bool has_peak_loss_pct();
	void clear_peak_loss_pct();
	uint32 peak_loss_pct();
	void set_peak_loss_pct(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_disconnect_reason();
	void clear_has_disconnect_reason();
	void set_has_num_bad_intervals();
	void clear_has_num_bad_intervals();
	void set_has_peak_loss_pct();
	void clear_has_peak_loss_pct();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:549
class CMsgPoorNetworkConditions : public Message {
public:

	static const int kDetectionTypeFieldNumber = 1;
	static const int kPlayersFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int detection_type_;  // +0x30

	static CMsgPoorNetworkConditions * default_instance_;
	CMsgPoorNetworkConditions();
	virtual ~CMsgPoorNetworkConditions();
	CMsgPoorNetworkConditions(const CMsgPoorNetworkConditions &);
	CMsgPoorNetworkConditions & operator=(const CMsgPoorNetworkConditions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgPoorNetworkConditions & default_instance();
	void Swap(CMsgPoorNetworkConditions *);
	virtual CMsgPoorNetworkConditions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgPoorNetworkConditions &);
	void MergeFrom(const CMsgPoorNetworkConditions &);
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
	bool has_detection_type();
	void clear_detection_type();
	EPoorNetworkConditionsType detection_type();
	void set_detection_type(EPoorNetworkConditionsType);
	int players_size();
	void clear_players();
	const CMsgPoorNetworkConditions_Player & players(int);
	CMsgPoorNetworkConditions_Player * mutable_players(int);
	CMsgPoorNetworkConditions_Player * add_players();
	const RepeatedPtrField<CMsgPoorNetworkConditions_Player> & players();
	RepeatedPtrField<CMsgPoorNetworkConditions_Player> * mutable_players();
	void set_has_detection_type();
	void clear_has_detection_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:643
class CMsgGameserverCrash : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kLobbyIdFieldNumber = 2;
	static const int kGameStateFieldNumber = 3;
	static const int kSentinelSaveTimeFieldNumber = 4;
	static const int kCustomGameIdFieldNumber = 11;
	static const int kTournamentIdFieldNumber = 12;
	static const int kServerSteamIdFieldNumber = 5;
	static const int kServerPublicIpAddrFieldNumber = 6;
	static const int kServerPortFieldNumber = 7;
	static const int kServerClusterFieldNumber = 8;
	static const int kPidFieldNumber = 9;
	static const int kEngineFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint64 lobby_id_;  // +0x20
	int game_state_;  // +0x28
	uint32 sentinel_save_time_;  // +0x2c
	uint64 custom_game_id_;  // +0x30
	uint64 server_steam_id_;  // +0x38
	uint32 tournament_id_;  // +0x40
	uint32 server_public_ip_addr_;  // +0x44
	uint32 server_port_;  // +0x48
	uint32 server_cluster_;  // +0x4c
	uint32 pid_;  // +0x50
	uint32 engine_;  // +0x54

	static CMsgGameserverCrash * default_instance_;
	CMsgGameserverCrash();
	virtual ~CMsgGameserverCrash();
	CMsgGameserverCrash(const CMsgGameserverCrash &);
	CMsgGameserverCrash & operator=(const CMsgGameserverCrash &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameserverCrash & default_instance();
	void Swap(CMsgGameserverCrash *);
	virtual CMsgGameserverCrash * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameserverCrash &);
	void MergeFrom(const CMsgGameserverCrash &);
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
	bool has_lobby_id();
	void clear_lobby_id();
	uint64 lobby_id();
	void set_lobby_id(uint64);
	bool has_game_state();
	void clear_game_state();
	DOTA_GameState game_state();
	void set_game_state(DOTA_GameState);
	bool has_sentinel_save_time();
	void clear_sentinel_save_time();
	uint32 sentinel_save_time();
	void set_sentinel_save_time(uint32);
	bool has_custom_game_id();
	void clear_custom_game_id();
	uint64 custom_game_id();
	void set_custom_game_id(uint64);
	bool has_tournament_id();
	void clear_tournament_id();
	uint32 tournament_id();
	void set_tournament_id(uint32);
	bool has_server_steam_id();
	void clear_server_steam_id();
	uint64 server_steam_id();
	void set_server_steam_id(uint64);
	bool has_server_public_ip_addr();
	void clear_server_public_ip_addr();
	uint32 server_public_ip_addr();
	void set_server_public_ip_addr(uint32);
	bool has_server_port();
	void clear_server_port();
	uint32 server_port();
	void set_server_port(uint32);
	bool has_server_cluster();
	void clear_server_cluster();
	uint32 server_cluster();
	void set_server_cluster(uint32);
	bool has_pid();
	void clear_pid();
	uint32 pid();
	void set_pid(uint32);
	bool has_engine();
	void clear_engine();
	uint32 engine();
	void set_engine(uint32);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_lobby_id();
	void clear_has_lobby_id();
	void set_has_game_state();
	void clear_has_game_state();
	void set_has_sentinel_save_time();
	void clear_has_sentinel_save_time();
	void set_has_custom_game_id();
	void clear_has_custom_game_id();
	void set_has_tournament_id();
	void clear_has_tournament_id();
	void set_has_server_steam_id();
	void clear_has_server_steam_id();
	void set_has_server_public_ip_addr();
	void clear_has_server_public_ip_addr();
	void set_has_server_port();
	void clear_has_server_port();
	void set_has_server_cluster();
	void clear_has_server_cluster();
	void set_has_pid();
	void clear_has_pid();
	void set_has_engine();
	void clear_has_engine();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:832
class CMsgConnectedPlayers_Player : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kHeroIdFieldNumber = 2;
	static const int kLeaverStateFieldNumber = 3;
	static const int kDisconnectReasonFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint32 hero_id_;  // +0x28
	int disconnect_reason_;  // +0x2c

	static CMsgConnectedPlayers_Player * default_instance_;
	CMsgConnectedPlayers_Player();
	virtual ~CMsgConnectedPlayers_Player();
	CMsgConnectedPlayers_Player(const CMsgConnectedPlayers_Player &);
	CMsgConnectedPlayers_Player & operator=(const CMsgConnectedPlayers_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgConnectedPlayers_Player & default_instance();
	void Swap(CMsgConnectedPlayers_Player *);
	virtual CMsgConnectedPlayers_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgConnectedPlayers_Player &);
	void MergeFrom(const CMsgConnectedPlayers_Player &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	bool has_leaver_state();
	void clear_leaver_state();
	const CMsgLeaverState & leaver_state();
	CMsgLeaverState * mutable_leaver_state();
	CMsgLeaverState * release_leaver_state();
	void set_allocated_leaver_state(CMsgLeaverState *);
	bool has_disconnect_reason();
	void clear_disconnect_reason();
	ENetworkDisconnectionReason disconnect_reason();
	void set_disconnect_reason(ENetworkDisconnectionReason);
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_leaver_state();
	void clear_has_leaver_state();
	void set_has_disconnect_reason();
	void clear_has_disconnect_reason();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:943
class CMsgConnectedPlayers : public Message {
public:

	static const CMsgConnectedPlayers_SendReason INVALID;
	static const CMsgConnectedPlayers_SendReason HEARTBEAT = 1;
	static const CMsgConnectedPlayers_SendReason GAME_STATE = 2;
	static const CMsgConnectedPlayers_SendReason FIRST_BLOOD = 3;
	static const CMsgConnectedPlayers_SendReason PLAYER_CONNECTED = 4;
	static const CMsgConnectedPlayers_SendReason PLAYER_HERO = 5;
	static const CMsgConnectedPlayers_SendReason PLAYER_DISCONNECTED_CONSEQUENCES = 6;
	static const CMsgConnectedPlayers_SendReason PLAYER_DISCONNECTED_NOCONSEQUENCES = 7;
	static const CMsgConnectedPlayers_SendReason GAMESTATE_TIMEOUT = 10;
	static const CMsgConnectedPlayers_SendReason MASS_DISCONNECT = 11;
	static const CMsgConnectedPlayers_SendReason KILLS = 13;
	static const CMsgConnectedPlayers_SendReason BUILDING_STATE = 14;
	static const CMsgConnectedPlayers_SendReason SendReason_MIN;
	static const CMsgConnectedPlayers_SendReason SendReason_MAX = 14;
	static const int SendReason_ARRAYSIZE = 15;
	static const int kConnectedPlayersFieldNumber = 1;
	static const int kDisconnectedPlayersFieldNumber = 7;
	static const int kGameStateFieldNumber = 2;
	static const int kFirstBloodHappenedFieldNumber = 6;
	static const int kLegacyMassDisconnectFieldNumber = 9;
	static const int kPoorNetworkConditionsFieldNumber = 10;
	static const int kSendReasonFieldNumber = 8;
	static const int kRadiantKillsFieldNumber = 11;
	static const int kDireKillsFieldNumber = 12;
	static const int kRadiantLeadFieldNumber = 14;
	static const int kBuildingStateFieldNumber = 15;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int game_state_;  // +0x48
	bool first_blood_happened_;  // +0x4c
	bool legacy_mass_disconnect_;  // +0x4d

	int send_reason_;  // +0x58
	uint32 radiant_kills_;  // +0x5c
	uint32 dire_kills_;  // +0x60
	int32 radiant_lead_;  // +0x64
	uint32 building_state_;  // +0x68

	static CMsgConnectedPlayers * default_instance_;
	typedef CMsgConnectedPlayers_SendReason SendReason;
	CMsgConnectedPlayers();
	virtual ~CMsgConnectedPlayers();
	CMsgConnectedPlayers(const CMsgConnectedPlayers &);
	CMsgConnectedPlayers & operator=(const CMsgConnectedPlayers &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgConnectedPlayers & default_instance();
	void Swap(CMsgConnectedPlayers *);
	virtual CMsgConnectedPlayers * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgConnectedPlayers &);
	void MergeFrom(const CMsgConnectedPlayers &);
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
	bool SendReason_IsValid(int);
	const EnumDescriptor * SendReason_descriptor();
	const string & SendReason_Name(SendReason);
	bool SendReason_Parse(const string &, SendReason *);
	int connected_players_size();
	void clear_connected_players();
	const CMsgConnectedPlayers_Player & connected_players(int);
	CMsgConnectedPlayers_Player * mutable_connected_players(int);
	CMsgConnectedPlayers_Player * add_connected_players();
	const RepeatedPtrField<CMsgConnectedPlayers_Player> & connected_players();
	RepeatedPtrField<CMsgConnectedPlayers_Player> * mutable_connected_players();
	int disconnected_players_size();
	void clear_disconnected_players();
	const CMsgConnectedPlayers_Player & disconnected_players(int);
	CMsgConnectedPlayers_Player * mutable_disconnected_players(int);
	CMsgConnectedPlayers_Player * add_disconnected_players();
	const RepeatedPtrField<CMsgConnectedPlayers_Player> & disconnected_players();
	RepeatedPtrField<CMsgConnectedPlayers_Player> * mutable_disconnected_players();
	bool has_game_state();
	void clear_game_state();
	DOTA_GameState game_state();
	void set_game_state(DOTA_GameState);
	bool has_first_blood_happened();
	void clear_first_blood_happened();
	bool first_blood_happened();
	void set_first_blood_happened(bool);
	bool has_legacy_mass_disconnect();
	void clear_legacy_mass_disconnect();
	bool legacy_mass_disconnect();
	void set_legacy_mass_disconnect(bool);
	bool has_poor_network_conditions();
	void clear_poor_network_conditions();
	const CMsgPoorNetworkConditions & poor_network_conditions();
	CMsgPoorNetworkConditions * mutable_poor_network_conditions();
	CMsgPoorNetworkConditions * release_poor_network_conditions();
	void set_allocated_poor_network_conditions(CMsgPoorNetworkConditions *);
	bool has_send_reason();
	void clear_send_reason();
	CMsgConnectedPlayers_SendReason send_reason();
	void set_send_reason(CMsgConnectedPlayers_SendReason);
	bool has_radiant_kills();
	void clear_radiant_kills();
	uint32 radiant_kills();
	void set_radiant_kills(uint32);
	bool has_dire_kills();
	void clear_dire_kills();
	uint32 dire_kills();
	void set_dire_kills(uint32);
	bool has_radiant_lead();
	void clear_radiant_lead();
	int32 radiant_lead();
	void set_radiant_lead(int32);
	bool has_building_state();
	void clear_building_state();
	uint32 building_state();
	void set_building_state(uint32);
	void set_has_game_state();
	void clear_has_game_state();
	void set_has_first_blood_happened();
	void clear_has_first_blood_happened();
	void set_has_legacy_mass_disconnect();
	void clear_has_legacy_mass_disconnect();
	void set_has_poor_network_conditions();
	void clear_has_poor_network_conditions();
	void set_has_send_reason();
	void clear_has_send_reason();
	void set_has_radiant_kills();
	void clear_has_radiant_kills();
	void set_has_dire_kills();
	void clear_has_dire_kills();
	void set_has_radiant_lead();
	void clear_has_radiant_lead();
	void set_has_building_state();
	void clear_has_building_state();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:1166
class CMsgGameServerInfo : public Message {
public:

	static const CMsgGameServerInfo_ServerType UNSPECIFIED;
	static const CMsgGameServerInfo_ServerType GAME = 1;
	static const CMsgGameServerInfo_ServerType PROXY = 2;
	static const CMsgGameServerInfo_ServerType ServerType_MIN;
	static const CMsgGameServerInfo_ServerType ServerType_MAX = 2;
	static const int ServerType_ARRAYSIZE = 3;
	static const CMsgGameServerInfo_CustomGames BOTH;
	static const CMsgGameServerInfo_CustomGames NONE = 1;
	static const CMsgGameServerInfo_CustomGames ONLY = 2;
	static const CMsgGameServerInfo_CustomGames CustomGames_MIN;
	static const CMsgGameServerInfo_CustomGames CustomGames_MAX = 2;
	static const int CustomGames_ARRAYSIZE = 3;
	static const int kServerPublicIpAddrFieldNumber = 1;
	static const int kServerPrivateIpAddrFieldNumber = 2;
	static const int kServerPortFieldNumber = 3;
	static const int kServerTvPortFieldNumber = 4;
	static const int kAssignedServerTvPortFieldNumber = 22;
	static const int kServerSteamdatagramPortFieldNumber = 21;
	static const int kServerKeyFieldNumber = 5;
	static const int kServerHibernationFieldNumber = 6;
	static const int kServerTypeFieldNumber = 7;
	static const int kServerRegionFieldNumber = 8;
	static const int kServerLoadavgFieldNumber = 9;
	static const int kServerTvBroadcastTimeFieldNumber = 10;
	static const int kServerGameTimeFieldNumber = 11;
	static const int kServerRelayConnectedSteamIdFieldNumber = 12;
	static const int kRelaySlotsMaxFieldNumber = 13;
	static const int kRelaysConnectedFieldNumber = 14;
	static const int kRelayClientsConnectedFieldNumber = 15;
	static const int kRelayedGameServerSteamIdFieldNumber = 16;
	static const int kParentRelayCountFieldNumber = 17;
	static const int kTvSecretCodeFieldNumber = 18;
	static const int kServerVersionFieldNumber = 19;
	static const int kServerClusterFieldNumber = 20;
	static const int kAllowCustomGamesFieldNumber = 23;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 server_public_ip_addr_;  // +0x18
	uint32 server_private_ip_addr_;  // +0x1c
	uint32 server_port_;  // +0x20
	uint32 server_tv_port_;  // +0x24
	uint32 assigned_server_tv_port_;  // +0x28
	uint32 server_steamdatagram_port_;  // +0x2c
	string * server_key_;  // +0x30
	bool server_hibernation_;  // +0x38

	int server_type_;  // +0x3c
	uint32 server_region_;  // +0x40
	float server_loadavg_;  // +0x44
	float server_tv_broadcast_time_;  // +0x48
	float server_game_time_;  // +0x4c
	uint64 server_relay_connected_steam_id_;  // +0x50
	uint32 relay_slots_max_;  // +0x58
	int32 relays_connected_;  // +0x5c
	uint64 relayed_game_server_steam_id_;  // +0x60
	int32 relay_clients_connected_;  // +0x68
	uint32 parent_relay_count_;  // +0x6c
	uint64 tv_secret_code_;  // +0x70
	uint32 server_version_;  // +0x78
	uint32 server_cluster_;  // +0x7c
	int allow_custom_games_;  // +0x80

	static CMsgGameServerInfo * default_instance_;
	typedef CMsgGameServerInfo_ServerType ServerType;
	typedef CMsgGameServerInfo_CustomGames CustomGames;
	CMsgGameServerInfo();
	virtual ~CMsgGameServerInfo();
	CMsgGameServerInfo(const CMsgGameServerInfo &);
	CMsgGameServerInfo & operator=(const CMsgGameServerInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameServerInfo & default_instance();
	void Swap(CMsgGameServerInfo *);
	virtual CMsgGameServerInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameServerInfo &);
	void MergeFrom(const CMsgGameServerInfo &);
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
	bool ServerType_IsValid(int);
	const EnumDescriptor * ServerType_descriptor();
	const string & ServerType_Name(ServerType);
	bool ServerType_Parse(const string &, ServerType *);
	bool CustomGames_IsValid(int);
	const EnumDescriptor * CustomGames_descriptor();
	const string & CustomGames_Name(CustomGames);
	bool CustomGames_Parse(const string &, CustomGames *);
	bool has_server_public_ip_addr();
	void clear_server_public_ip_addr();
	uint32 server_public_ip_addr();
	void set_server_public_ip_addr(uint32);
	bool has_server_private_ip_addr();
	void clear_server_private_ip_addr();
	uint32 server_private_ip_addr();
	void set_server_private_ip_addr(uint32);
	bool has_server_port();
	void clear_server_port();
	uint32 server_port();
	void set_server_port(uint32);
	bool has_server_tv_port();
	void clear_server_tv_port();
	uint32 server_tv_port();
	void set_server_tv_port(uint32);
	bool has_assigned_server_tv_port();
	void clear_assigned_server_tv_port();
	uint32 assigned_server_tv_port();
	void set_assigned_server_tv_port(uint32);
	bool has_server_steamdatagram_port();
	void clear_server_steamdatagram_port();
	uint32 server_steamdatagram_port();
	void set_server_steamdatagram_port(uint32);
	bool has_server_key();
	void clear_server_key();
	const string & server_key();
	void set_server_key(const string &);
	void set_server_key(const char *);
	void set_server_key(const char *, size_t);
	string * mutable_server_key();
	string * release_server_key();
	void set_allocated_server_key(string *);
	bool has_server_hibernation();
	void clear_server_hibernation();
	bool server_hibernation();
	void set_server_hibernation(bool);
	bool has_server_type();
	void clear_server_type();
	CMsgGameServerInfo_ServerType server_type();
	void set_server_type(CMsgGameServerInfo_ServerType);
	bool has_server_region();
	void clear_server_region();
	uint32 server_region();
	void set_server_region(uint32);
	bool has_server_loadavg();
	void clear_server_loadavg();
	float server_loadavg();
	void set_server_loadavg(float);
	bool has_server_tv_broadcast_time();
	void clear_server_tv_broadcast_time();
	float server_tv_broadcast_time();
	void set_server_tv_broadcast_time(float);
	bool has_server_game_time();
	void clear_server_game_time();
	float server_game_time();
	void set_server_game_time(float);
	bool has_server_relay_connected_steam_id();
	void clear_server_relay_connected_steam_id();
	uint64 server_relay_connected_steam_id();
	void set_server_relay_connected_steam_id(uint64);
	bool has_relay_slots_max();
	void clear_relay_slots_max();
	uint32 relay_slots_max();
	void set_relay_slots_max(uint32);
	bool has_relays_connected();
	void clear_relays_connected();
	int32 relays_connected();
	void set_relays_connected(int32);
	bool has_relay_clients_connected();
	void clear_relay_clients_connected();
	int32 relay_clients_connected();
	void set_relay_clients_connected(int32);
	bool has_relayed_game_server_steam_id();
	void clear_relayed_game_server_steam_id();
	uint64 relayed_game_server_steam_id();
	void set_relayed_game_server_steam_id(uint64);
	bool has_parent_relay_count();
	void clear_parent_relay_count();
	uint32 parent_relay_count();
	void set_parent_relay_count(uint32);
	bool has_tv_secret_code();
	void clear_tv_secret_code();
	uint64 tv_secret_code();
	void set_tv_secret_code(uint64);
	bool has_server_version();
	void clear_server_version();
	uint32 server_version();
	void set_server_version(uint32);
	bool has_server_cluster();
	void clear_server_cluster();
	uint32 server_cluster();
	void set_server_cluster(uint32);
	bool has_allow_custom_games();
	void clear_allow_custom_games();
	CMsgGameServerInfo_CustomGames allow_custom_games();
	void set_allow_custom_games(CMsgGameServerInfo_CustomGames);
	void set_has_server_public_ip_addr();
	void clear_has_server_public_ip_addr();
	void set_has_server_private_ip_addr();
	void clear_has_server_private_ip_addr();
	void set_has_server_port();
	void clear_has_server_port();
	void set_has_server_tv_port();
	void clear_has_server_tv_port();
	void set_has_assigned_server_tv_port();
	void clear_has_assigned_server_tv_port();
	void set_has_server_steamdatagram_port();
	void clear_has_server_steamdatagram_port();
	void set_has_server_key();
	void clear_has_server_key();
	void set_has_server_hibernation();
	void clear_has_server_hibernation();
	void set_has_server_type();
	void clear_has_server_type();
	void set_has_server_region();
	void clear_has_server_region();
	void set_has_server_loadavg();
	void clear_has_server_loadavg();
	void set_has_server_tv_broadcast_time();
	void clear_has_server_tv_broadcast_time();
	void set_has_server_game_time();
	void clear_has_server_game_time();
	void set_has_server_relay_connected_steam_id();
	void clear_has_server_relay_connected_steam_id();
	void set_has_relay_slots_max();
	void clear_has_relay_slots_max();
	void set_has_relays_connected();
	void clear_has_relays_connected();
	void set_has_relay_clients_connected();
	void clear_has_relay_clients_connected();
	void set_has_relayed_game_server_steam_id();
	void clear_has_relayed_game_server_steam_id();
	void set_has_parent_relay_count();
	void clear_has_parent_relay_count();
	void set_has_tv_secret_code();
	void clear_has_tv_secret_code();
	void set_has_server_version();
	void clear_has_server_version();
	void set_has_server_cluster();
	void clear_has_server_cluster();
	void set_has_allow_custom_games();
	void clear_has_allow_custom_games();
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
	// sizeof = 136
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:1520
class CMsgLeaverDetected : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kLeaverStatusFieldNumber = 2;
	static const int kLeaverStateFieldNumber = 4;
	static const int kServerClusterFieldNumber = 5;
	static const int kDisconnectReasonFieldNumber = 6;
	static const int kPoorNetworkConditionsFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	int leaver_status_;  // +0x28
	uint32 server_cluster_;  // +0x2c
	int disconnect_reason_;  // +0x38

	static CMsgLeaverDetected * default_instance_;
	CMsgLeaverDetected();
	virtual ~CMsgLeaverDetected();
	CMsgLeaverDetected(const CMsgLeaverDetected &);
	CMsgLeaverDetected & operator=(const CMsgLeaverDetected &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLeaverDetected & default_instance();
	void Swap(CMsgLeaverDetected *);
	virtual CMsgLeaverDetected * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLeaverDetected &);
	void MergeFrom(const CMsgLeaverDetected &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_leaver_status();
	void clear_leaver_status();
	DOTALeaverStatus_t leaver_status();
	void set_leaver_status(DOTALeaverStatus_t);
	bool has_leaver_state();
	void clear_leaver_state();
	const CMsgLeaverState & leaver_state();
	CMsgLeaverState * mutable_leaver_state();
	CMsgLeaverState * release_leaver_state();
	void set_allocated_leaver_state(CMsgLeaverState *);
	bool has_server_cluster();
	void clear_server_cluster();
	uint32 server_cluster();
	void set_server_cluster(uint32);
	bool has_disconnect_reason();
	void clear_disconnect_reason();
	ENetworkDisconnectionReason disconnect_reason();
	void set_disconnect_reason(ENetworkDisconnectionReason);
	bool has_poor_network_conditions();
	void clear_poor_network_conditions();
	const CMsgPoorNetworkConditions & poor_network_conditions();
	CMsgPoorNetworkConditions * mutable_poor_network_conditions();
	CMsgPoorNetworkConditions * release_poor_network_conditions();
	void set_allocated_poor_network_conditions(CMsgPoorNetworkConditions *);
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_leaver_status();
	void clear_has_leaver_status();
	void set_has_leaver_state();
	void clear_has_leaver_state();
	void set_has_server_cluster();
	void clear_has_server_cluster();
	void set_has_disconnect_reason();
	void clear_has_disconnect_reason();
	void set_has_poor_network_conditions();
	void clear_has_poor_network_conditions();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:1653
class CMsgLeaverDetectedResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 result_;  // +0x18

	static CMsgLeaverDetectedResponse * default_instance_;
	CMsgLeaverDetectedResponse();
	virtual ~CMsgLeaverDetectedResponse();
	CMsgLeaverDetectedResponse(const CMsgLeaverDetectedResponse &);
	CMsgLeaverDetectedResponse & operator=(const CMsgLeaverDetectedResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgLeaverDetectedResponse & default_instance();
	void Swap(CMsgLeaverDetectedResponse *);
	virtual CMsgLeaverDetectedResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgLeaverDetectedResponse &);
	void MergeFrom(const CMsgLeaverDetectedResponse &);
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
	bool has_result();
	void clear_result();
	uint32 result();
	void set_result(uint32);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:1732
class CMsgDOTAFantasyFinalPlayerStats : public Message {
public:

	static const int kStatsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTAFantasyFinalPlayerStats * default_instance_;
	CMsgDOTAFantasyFinalPlayerStats();
	virtual ~CMsgDOTAFantasyFinalPlayerStats();
	CMsgDOTAFantasyFinalPlayerStats(const CMsgDOTAFantasyFinalPlayerStats &);
	CMsgDOTAFantasyFinalPlayerStats & operator=(const CMsgDOTAFantasyFinalPlayerStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAFantasyFinalPlayerStats & default_instance();
	void Swap(CMsgDOTAFantasyFinalPlayerStats *);
	virtual CMsgDOTAFantasyFinalPlayerStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAFantasyFinalPlayerStats &);
	void MergeFrom(const CMsgDOTAFantasyFinalPlayerStats &);
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
	const CMsgDOTAFantasyPlayerStats & stats(int);
	CMsgDOTAFantasyPlayerStats * mutable_stats(int);
	CMsgDOTAFantasyPlayerStats * add_stats();
	const RepeatedPtrField<CMsgDOTAFantasyPlayerStats> & stats();
	RepeatedPtrField<CMsgDOTAFantasyPlayerStats> * mutable_stats();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:1814
class CMsgDOTAFantasyLivePlayerStats : public Message {
public:

	static const int kStatsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTAFantasyLivePlayerStats * default_instance_;
	CMsgDOTAFantasyLivePlayerStats();
	virtual ~CMsgDOTAFantasyLivePlayerStats();
	CMsgDOTAFantasyLivePlayerStats(const CMsgDOTAFantasyLivePlayerStats &);
	CMsgDOTAFantasyLivePlayerStats & operator=(const CMsgDOTAFantasyLivePlayerStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAFantasyLivePlayerStats & default_instance();
	void Swap(CMsgDOTAFantasyLivePlayerStats *);
	virtual CMsgDOTAFantasyLivePlayerStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAFantasyLivePlayerStats &);
	void MergeFrom(const CMsgDOTAFantasyLivePlayerStats &);
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
	const CMsgDOTAFantasyPlayerStats & stats(int);
	CMsgDOTAFantasyPlayerStats * mutable_stats(int);
	CMsgDOTAFantasyPlayerStats * add_stats();
	const RepeatedPtrField<CMsgDOTAFantasyPlayerStats> & stats();
	RepeatedPtrField<CMsgDOTAFantasyPlayerStats> * mutable_stats();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:1896
class CMsgDOTAFantasyMatch : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kLeagueIdFieldNumber = 2;
	static const int kSeriesIdFieldNumber = 3;
	static const int kStartTimeFieldNumber = 4;
	static const int kSeriesTypeFieldNumber = 5;
	static const int kTeam1FieldNumber = 6;
	static const int kTeam2FieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 league_id_;  // +0x20
	uint32 series_id_;  // +0x24
	uint32 start_time_;  // +0x28
	uint32 series_type_;  // +0x2c
	uint32 team_1_;  // +0x30
	uint32 team_2_;  // +0x34

	static CMsgDOTAFantasyMatch * default_instance_;
	CMsgDOTAFantasyMatch();
	virtual ~CMsgDOTAFantasyMatch();
	CMsgDOTAFantasyMatch(const CMsgDOTAFantasyMatch &);
	CMsgDOTAFantasyMatch & operator=(const CMsgDOTAFantasyMatch &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAFantasyMatch & default_instance();
	void Swap(CMsgDOTAFantasyMatch *);
	virtual CMsgDOTAFantasyMatch * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAFantasyMatch &);
	void MergeFrom(const CMsgDOTAFantasyMatch &);
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
	bool has_series_id();
	void clear_series_id();
	uint32 series_id();
	void set_series_id(uint32);
	bool has_start_time();
	void clear_start_time();
	uint32 start_time();
	void set_start_time(uint32);
	bool has_series_type();
	void clear_series_type();
	uint32 series_type();
	void set_series_type(uint32);
	bool has_team_1();
	void clear_team_1();
	uint32 team_1();
	void set_team_1(uint32);
	bool has_team_2();
	void clear_team_2();
	uint32 team_2();
	void set_team_2(uint32);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_series_id();
	void clear_has_series_id();
	void set_has_start_time();
	void clear_has_start_time();
	void set_has_series_type();
	void clear_has_series_type();
	void set_has_team_1();
	void clear_has_team_1();
	void set_has_team_2();
	void clear_has_team_2();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:2035
class CMsgServerToGCRealtimeStats : public Message {
public:

	static const int kDelayedFieldNumber = 1;
	static const int kCurrentFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerToGCRealtimeStats * default_instance_;
	CMsgServerToGCRealtimeStats();
	virtual ~CMsgServerToGCRealtimeStats();
	CMsgServerToGCRealtimeStats(const CMsgServerToGCRealtimeStats &);
	CMsgServerToGCRealtimeStats & operator=(const CMsgServerToGCRealtimeStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCRealtimeStats & default_instance();
	void Swap(CMsgServerToGCRealtimeStats *);
	virtual CMsgServerToGCRealtimeStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCRealtimeStats &);
	void MergeFrom(const CMsgServerToGCRealtimeStats &);
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
	bool has_delayed();
	void clear_delayed();
	const CMsgDOTARealtimeGameStatsTerse & delayed();
	CMsgDOTARealtimeGameStatsTerse * mutable_delayed();
	CMsgDOTARealtimeGameStatsTerse * release_delayed();
	void set_allocated_delayed(CMsgDOTARealtimeGameStatsTerse *);
	bool has_current();
	void clear_current();
	const CMsgDOTARealtimeGameStats & current();
	CMsgDOTARealtimeGameStats * mutable_current();
	CMsgDOTARealtimeGameStats * release_current();
	void set_allocated_current(CMsgDOTARealtimeGameStats *);
	void set_has_delayed();
	void clear_has_delayed();
	void set_has_current();
	void clear_has_current();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:2128
class CMsgGCToServerRealtimeStatsStartStop : public Message {
public:

	static const int kDelayedFieldNumber = 1;
	static const int kCurrentFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool delayed_;  // +0x18
	bool current_;  // +0x19

	static CMsgGCToServerRealtimeStatsStartStop * default_instance_;
	CMsgGCToServerRealtimeStatsStartStop();
	virtual ~CMsgGCToServerRealtimeStatsStartStop();
	CMsgGCToServerRealtimeStatsStartStop(const CMsgGCToServerRealtimeStatsStartStop &);
	CMsgGCToServerRealtimeStatsStartStop & operator=(const CMsgGCToServerRealtimeStatsStartStop &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToServerRealtimeStatsStartStop & default_instance();
	void Swap(CMsgGCToServerRealtimeStatsStartStop *);
	virtual CMsgGCToServerRealtimeStatsStartStop * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToServerRealtimeStatsStartStop &);
	void MergeFrom(const CMsgGCToServerRealtimeStatsStartStop &);
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
	bool has_delayed();
	void clear_delayed();
	bool delayed();
	void set_delayed(bool);
	bool has_current();
	void clear_current();
	bool current();
	void set_current(bool);
	void set_has_delayed();
	void clear_has_delayed();
	void set_has_current();
	void clear_has_current();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:2217
class CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData : public Message {
public:

	static const int kDotaTeamFieldNumber = 1;
	static const int kWinnerFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 dota_team_;  // +0x18
	bool winner_;  // +0x1c

	static CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData * default_instance_;
	CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData();
	virtual ~CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData();
	CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData(const CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData &);
	CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData & operator=(const CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData & default_instance();
	void Swap(CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData *);
	virtual CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData &);
	void MergeFrom(const CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:2306
class CMsgGameMatchSignOut_CTeam_CPlayer : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kHeroIdFieldNumber = 3;
	static const int kItemsFieldNumber = 4;
	static const int kGoldFieldNumber = 5;
	static const int kKillsFieldNumber = 6;
	static const int kDeathsFieldNumber = 7;
	static const int kAssistsFieldNumber = 8;
	static const int kLeaverStatusFieldNumber = 9;
	static const int kLastHitsFieldNumber = 10;
	static const int kDeniesFieldNumber = 11;
	static const int kGoldPerMinFieldNumber = 12;
	static const int kXpPerMinuteFieldNumber = 13;
	static const int kGoldSpentFieldNumber = 14;
	static const int kLevelFieldNumber = 15;
	static const int kScaledHeroDamageFieldNumber = 16;
	static const int kScaledTowerDamageFieldNumber = 17;
	static const int kScaledHeroHealingFieldNumber = 18;
	static const int kTimeLastSeenFieldNumber = 19;
	static const int kSupportAbilityValueFieldNumber = 20;
	static const int kPartyIdFieldNumber = 21;
	static const int kScaledKillsFieldNumber = 24;
	static const int kScaledDeathsFieldNumber = 25;
	static const int kScaledAssistsFieldNumber = 26;
	static const int kClaimedFarmGoldFieldNumber = 27;
	static const int kSupportGoldFieldNumber = 28;
	static const int kClaimedDeniesFieldNumber = 29;
	static const int kClaimedMissesFieldNumber = 30;
	static const int kMissesFieldNumber = 31;
	static const int kNetWorthFieldNumber = 34;
	static const int kHeroDamageFieldNumber = 37;
	static const int kTowerDamageFieldNumber = 38;
	static const int kHeroHealingFieldNumber = 39;
	static const int kAbilityUpgradesFieldNumber = 32;
	static const int kAdditionalUnitsInventoryFieldNumber = 33;
	static const int kPermanentBuffsFieldNumber = 40;
	static const int kCustomGameDataFieldNumber = 35;
	static const int kMatchPlayerFlagsFieldNumber = 36;
	static const int kTalentAbilityIdsFieldNumber = 41;
private:

	unsigned int _has_bits_[2];  // +0x10
	uint64 steam_id_;  // +0x18
	uint32 hero_id_;  // +0x30
	uint32 gold_;  // +0x34
	uint32 kills_;  // +0x38
	uint32 deaths_;  // +0x3c
	uint32 assists_;  // +0x40
	uint32 leaver_status_;  // +0x44
	uint32 last_hits_;  // +0x48
	uint32 denies_;  // +0x4c
	uint32 gold_per_min_;  // +0x50
	uint32 xp_per_minute_;  // +0x54
	uint32 gold_spent_;  // +0x58
	uint32 level_;  // +0x5c
	uint32 scaled_hero_damage_;  // +0x60
	uint32 scaled_tower_damage_;  // +0x64
	uint32 scaled_hero_healing_;  // +0x68
	uint32 time_last_seen_;  // +0x6c
	uint64 party_id_;  // +0x70
	uint32 support_ability_value_;  // +0x78
	float scaled_kills_;  // +0x7c
	float scaled_deaths_;  // +0x80
	float scaled_assists_;  // +0x84
	uint32 claimed_farm_gold_;  // +0x88
	uint32 support_gold_;  // +0x8c
	uint32 claimed_denies_;  // +0x90
	uint32 claimed_misses_;  // +0x94
	uint32 misses_;  // +0x98
	uint32 net_worth_;  // +0x9c
	uint32 hero_damage_;  // +0xa0
	uint32 tower_damage_;  // +0xa4
	uint32 hero_healing_;  // +0xd8
	uint32 match_player_flags_;  // +0xdc
	int _cached_size_;  // +0x110

	static CMsgGameMatchSignOut_CTeam_CPlayer * default_instance_;
	CMsgGameMatchSignOut_CTeam_CPlayer();
	virtual ~CMsgGameMatchSignOut_CTeam_CPlayer();
	CMsgGameMatchSignOut_CTeam_CPlayer(const CMsgGameMatchSignOut_CTeam_CPlayer &);
	CMsgGameMatchSignOut_CTeam_CPlayer & operator=(const CMsgGameMatchSignOut_CTeam_CPlayer &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOut_CTeam_CPlayer & default_instance();
	void Swap(CMsgGameMatchSignOut_CTeam_CPlayer *);
	virtual CMsgGameMatchSignOut_CTeam_CPlayer * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOut_CTeam_CPlayer &);
	void MergeFrom(const CMsgGameMatchSignOut_CTeam_CPlayer &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	int items_size();
	void clear_items();
	uint32 items(int);
	void set_items(int, uint32);
	void add_items(uint32);
	const RepeatedField<unsigned int> & items();
	RepeatedField<unsigned int> * mutable_items();
	bool has_gold();
	void clear_gold();
	uint32 gold();
	void set_gold(uint32);
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
	bool has_xp_per_minute();
	void clear_xp_per_minute();
	uint32 xp_per_minute();
	void set_xp_per_minute(uint32);
	bool has_gold_spent();
	void clear_gold_spent();
	uint32 gold_spent();
	void set_gold_spent(uint32);
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
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
	bool has_time_last_seen();
	void clear_time_last_seen();
	uint32 time_last_seen();
	void set_time_last_seen(uint32);
	bool has_support_ability_value();
	void clear_support_ability_value();
	uint32 support_ability_value();
	void set_support_ability_value(uint32);
	bool has_party_id();
	void clear_party_id();
	uint64 party_id();
	void set_party_id(uint64);
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
	bool has_net_worth();
	void clear_net_worth();
	uint32 net_worth();
	void set_net_worth(uint32);
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
	const CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData & custom_game_data();
	CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData * mutable_custom_game_data();
	CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData * release_custom_game_data();
	void set_allocated_custom_game_data(CMsgGameMatchSignOut_CTeam_CPlayer_CCustomGameData *);
	bool has_match_player_flags();
	void clear_match_player_flags();
	uint32 match_player_flags();
	void set_match_player_flags(uint32);
	int talent_ability_ids_size();
	void clear_talent_ability_ids();
	uint32 talent_ability_ids(int);
	void set_talent_ability_ids(int, uint32);
	void add_talent_ability_ids(uint32);
	const RepeatedField<unsigned int> & talent_ability_ids();
	RepeatedField<unsigned int> * mutable_talent_ability_ids();
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_gold();
	void clear_has_gold();
	void set_has_kills();
	void clear_has_kills();
	void set_has_deaths();
	void clear_has_deaths();
	void set_has_assists();
	void clear_has_assists();
	void set_has_leaver_status();
	void clear_has_leaver_status();
	void set_has_last_hits();
	void clear_has_last_hits();
	void set_has_denies();
	void clear_has_denies();
	void set_has_gold_per_min();
	void clear_has_gold_per_min();
	void set_has_xp_per_minute();
	void clear_has_xp_per_minute();
	void set_has_gold_spent();
	void clear_has_gold_spent();
	void set_has_level();
	void clear_has_level();
	void set_has_scaled_hero_damage();
	void clear_has_scaled_hero_damage();
	void set_has_scaled_tower_damage();
	void clear_has_scaled_tower_damage();
	void set_has_scaled_hero_healing();
	void clear_has_scaled_hero_healing();
	void set_has_time_last_seen();
	void clear_has_time_last_seen();
	void set_has_support_ability_value();
	void clear_has_support_ability_value();
	void set_has_party_id();
	void clear_has_party_id();
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
	void set_has_net_worth();
	void clear_has_net_worth();
	void set_has_hero_damage();
	void clear_has_hero_damage();
	void set_has_tower_damage();
	void clear_has_tower_damage();
	void set_has_hero_healing();
	void clear_has_hero_healing();
	void set_has_custom_game_data();
	void clear_has_custom_game_data();
	void set_has_match_player_flags();
	void clear_has_match_player_flags();
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
	// sizeof = 280
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:2774
class CMsgGameMatchSignOut_CTeam : public Message {
public:

	static const int kPlayersFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGameMatchSignOut_CTeam * default_instance_;
	CMsgGameMatchSignOut_CTeam();
	virtual ~CMsgGameMatchSignOut_CTeam();
	CMsgGameMatchSignOut_CTeam(const CMsgGameMatchSignOut_CTeam &);
	CMsgGameMatchSignOut_CTeam & operator=(const CMsgGameMatchSignOut_CTeam &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOut_CTeam & default_instance();
	void Swap(CMsgGameMatchSignOut_CTeam *);
	virtual CMsgGameMatchSignOut_CTeam * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOut_CTeam &);
	void MergeFrom(const CMsgGameMatchSignOut_CTeam &);
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
	int players_size();
	void clear_players();
	const CMsgGameMatchSignOut_CTeam_CPlayer & players(int);
	CMsgGameMatchSignOut_CTeam_CPlayer * mutable_players(int);
	CMsgGameMatchSignOut_CTeam_CPlayer * add_players();
	const RepeatedPtrField<CMsgGameMatchSignOut_CTeam_CPlayer> & players();
	RepeatedPtrField<CMsgGameMatchSignOut_CTeam_CPlayer> * mutable_players();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:2858
class CMsgGameMatchSignOut_CAdditionalSignoutMsg : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kContentsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * contents_;  // +0x18
	uint32 id_;  // +0x20

	static CMsgGameMatchSignOut_CAdditionalSignoutMsg * default_instance_;
	CMsgGameMatchSignOut_CAdditionalSignoutMsg();
	virtual ~CMsgGameMatchSignOut_CAdditionalSignoutMsg();
	CMsgGameMatchSignOut_CAdditionalSignoutMsg(const CMsgGameMatchSignOut_CAdditionalSignoutMsg &);
	CMsgGameMatchSignOut_CAdditionalSignoutMsg & operator=(const CMsgGameMatchSignOut_CAdditionalSignoutMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOut_CAdditionalSignoutMsg & default_instance();
	void Swap(CMsgGameMatchSignOut_CAdditionalSignoutMsg *);
	virtual CMsgGameMatchSignOut_CAdditionalSignoutMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOut_CAdditionalSignoutMsg &);
	void MergeFrom(const CMsgGameMatchSignOut_CAdditionalSignoutMsg &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:2952
class CMsgGameMatchSignOut_CSocialFeedMatchEvent : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kTimestampFieldNumber = 2;
	static const int kEventTypeFieldNumber = 3;
	static const int kGameTimeFieldNumber = 4;
	static const int kReplayTimeFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 timestamp_;  // +0x1c
	uint32 event_type_;  // +0x20
	int32 game_time_;  // +0x24
	uint32 replay_time_;  // +0x28

	static CMsgGameMatchSignOut_CSocialFeedMatchEvent * default_instance_;
	CMsgGameMatchSignOut_CSocialFeedMatchEvent();
	virtual ~CMsgGameMatchSignOut_CSocialFeedMatchEvent();
	CMsgGameMatchSignOut_CSocialFeedMatchEvent(const CMsgGameMatchSignOut_CSocialFeedMatchEvent &);
	CMsgGameMatchSignOut_CSocialFeedMatchEvent & operator=(const CMsgGameMatchSignOut_CSocialFeedMatchEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOut_CSocialFeedMatchEvent & default_instance();
	void Swap(CMsgGameMatchSignOut_CSocialFeedMatchEvent *);
	virtual CMsgGameMatchSignOut_CSocialFeedMatchEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOut_CSocialFeedMatchEvent &);
	void MergeFrom(const CMsgGameMatchSignOut_CSocialFeedMatchEvent &);
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
	bool has_timestamp();
	void clear_timestamp();
	uint32 timestamp();
	void set_timestamp(uint32);
	bool has_event_type();
	void clear_event_type();
	uint32 event_type();
	void set_event_type(uint32);
	bool has_game_time();
	void clear_game_time();
	int32 game_time();
	void set_game_time(int32);
	bool has_replay_time();
	void clear_replay_time();
	uint32 replay_time();
	void set_replay_time(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_timestamp();
	void clear_has_timestamp();
	void set_has_event_type();
	void clear_has_event_type();
	void set_has_game_time();
	void clear_has_game_time();
	void set_has_replay_time();
	void clear_has_replay_time();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:3071
class CMsgGameMatchSignOut_CCustomGameData : public Message {
public:

	static const int kPublishTimestampFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 publish_timestamp_;  // +0x18

	static CMsgGameMatchSignOut_CCustomGameData * default_instance_;
	CMsgGameMatchSignOut_CCustomGameData();
	virtual ~CMsgGameMatchSignOut_CCustomGameData();
	CMsgGameMatchSignOut_CCustomGameData(const CMsgGameMatchSignOut_CCustomGameData &);
	CMsgGameMatchSignOut_CCustomGameData & operator=(const CMsgGameMatchSignOut_CCustomGameData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOut_CCustomGameData & default_instance();
	void Swap(CMsgGameMatchSignOut_CCustomGameData *);
	virtual CMsgGameMatchSignOut_CCustomGameData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOut_CCustomGameData &);
	void MergeFrom(const CMsgGameMatchSignOut_CCustomGameData &);
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
	bool has_publish_timestamp();
	void clear_publish_timestamp();
	uint32 publish_timestamp();
	void set_publish_timestamp(uint32);
	void set_has_publish_timestamp();
	void clear_has_publish_timestamp();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:3150
class CMsgGameMatchSignOut : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
	static const int kGoodGuysWinFieldNumber = 3;
	static const int kDateFieldNumber = 4;
	static const int kNumPlayersFieldNumber = 5;
	static const int kTeamsFieldNumber = 6;
	static const int kTowerStatusFieldNumber = 8;
	static const int kBarracksStatusFieldNumber = 9;
	static const int kClusterFieldNumber = 10;
	static const int kServerAddrFieldNumber = 11;
	static const int kFirstBloodTimeFieldNumber = 12;
	static const int kGameBalanceFieldNumber = 13;
	static const int kEventScoreFieldNumber = 14;
	static const int kPicksBansFieldNumber = 15;
	static const int kFantasyStatsFieldNumber = 41;
	static const int kPlayerStrangeCountAdjustmentsFieldNumber = 17;
	static const int kAutomaticSurrenderFieldNumber = 18;
	static const int kServerVersionFieldNumber = 19;
	static const int kLegacyMassDisconnectFieldNumber = 21;
	static const int kPoorNetworkConditionsFieldNumber = 35;
	static const int kAdditionalMsgsFieldNumber = 20;
	static const int kSocialFeedEventsFieldNumber = 36;
	static const int kAverageNetworthDeltaFieldNumber = 22;
	static const int kNetworthDeltaMin10FieldNumber = 23;
	static const int kNetworthDeltaMin20FieldNumber = 24;
	static const int kMaximumLosingNetworthLeadFieldNumber = 25;
	static const int kAverageExperienceDeltaFieldNumber = 26;
	static const int kExperienceDeltaMin10FieldNumber = 27;
	static const int kExperienceDeltaMin20FieldNumber = 28;
	static const int kBonusGoldWinnerMin10FieldNumber = 29;
	static const int kBonusGoldWinnerMin20FieldNumber = 30;
	static const int kBonusGoldWinnerTotalFieldNumber = 31;
	static const int kBonusGoldLoserMin10FieldNumber = 32;
	static const int kBonusGoldLoserMin20FieldNumber = 33;
	static const int kBonusGoldLoserTotalFieldNumber = 34;
	static const int kCustomGameDataFieldNumber = 37;
	static const int kMatchFlagsFieldNumber = 38;
	static const int kTeamScoresFieldNumber = 39;
	static const int kPreGameDurationFieldNumber = 40;
private:

	unsigned int _has_bits_[2];  // +0x10
	uint64 match_id_;  // +0x18
	uint32 duration_;  // +0x20
	uint32 date_;  // +0x24
	string * server_addr_;  // +0x70
	uint32 cluster_;  // +0x78
	uint32 first_blood_time_;  // +0x7c
	float game_balance_;  // +0x80
	uint32 event_score_;  // +0x84
	bool good_guys_win_;  // +0xa0
	bool automatic_surrender_;  // +0xa1
	bool legacy_mass_disconnect_;  // +0xa2

	uint32 server_version_;  // +0xa4
	int32 average_networth_delta_;  // +0x110
	int32 networth_delta_min10_;  // +0x114
	int32 networth_delta_min20_;  // +0x118
	int32 maximum_losing_networth_lead_;  // +0x11c
	int32 average_experience_delta_;  // +0x120
	int32 experience_delta_min10_;  // +0x124
	int32 experience_delta_min20_;  // +0x128
	int32 bonus_gold_winner_min10_;  // +0x12c
	int32 bonus_gold_winner_min20_;  // +0x130
	uint32 bonus_gold_winner_total_;  // +0x134
	int32 bonus_gold_loser_min10_;  // +0x138
	int32 bonus_gold_loser_min20_;  // +0x13c
	uint32 bonus_gold_loser_total_;  // +0x148
	uint32 match_flags_;  // +0x14c
	uint32 pre_game_duration_;  // +0x160
	int _cached_size_;  // +0x164

	static CMsgGameMatchSignOut * default_instance_;
	CMsgGameMatchSignOut();
	virtual ~CMsgGameMatchSignOut();
	CMsgGameMatchSignOut(const CMsgGameMatchSignOut &);
	CMsgGameMatchSignOut & operator=(const CMsgGameMatchSignOut &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOut & default_instance();
	void Swap(CMsgGameMatchSignOut *);
	virtual CMsgGameMatchSignOut * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOut &);
	void MergeFrom(const CMsgGameMatchSignOut &);
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
	bool has_duration();
	void clear_duration();
	uint32 duration();
	void set_duration(uint32);
	bool has_good_guys_win();
	void clear_good_guys_win();
	bool good_guys_win();
	void set_good_guys_win(bool);
	bool has_date();
	void clear_date();
	uint32 date();
	void set_date(uint32);
	int num_players_size();
	void clear_num_players();
	uint32 num_players(int);
	void set_num_players(int, uint32);
	void add_num_players(uint32);
	const RepeatedField<unsigned int> & num_players();
	RepeatedField<unsigned int> * mutable_num_players();
	int teams_size();
	void clear_teams();
	const CMsgGameMatchSignOut_CTeam & teams(int);
	CMsgGameMatchSignOut_CTeam * mutable_teams(int);
	CMsgGameMatchSignOut_CTeam * add_teams();
	const RepeatedPtrField<CMsgGameMatchSignOut_CTeam> & teams();
	RepeatedPtrField<CMsgGameMatchSignOut_CTeam> * mutable_teams();
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
	bool has_server_addr();
	void clear_server_addr();
	const string & server_addr();
	void set_server_addr(const string &);
	void set_server_addr(const char *);
	void set_server_addr(const char *, size_t);
	string * mutable_server_addr();
	string * release_server_addr();
	void set_allocated_server_addr(string *);
	bool has_first_blood_time();
	void clear_first_blood_time();
	uint32 first_blood_time();
	void set_first_blood_time(uint32);
	bool has_game_balance();
	void clear_game_balance();
	float game_balance();
	void set_game_balance(float);
	bool has_event_score();
	void clear_event_score();
	uint32 event_score();
	void set_event_score(uint32);
	int picks_bans_size();
	void clear_picks_bans();
	const CMatchHeroSelectEvent & picks_bans(int);
	CMatchHeroSelectEvent * mutable_picks_bans(int);
	CMatchHeroSelectEvent * add_picks_bans();
	const RepeatedPtrField<CMatchHeroSelectEvent> & picks_bans();
	RepeatedPtrField<CMatchHeroSelectEvent> * mutable_picks_bans();
	int fantasy_stats_size();
	void clear_fantasy_stats();
	const CMsgDOTAFantasyPlayerStats & fantasy_stats(int);
	CMsgDOTAFantasyPlayerStats * mutable_fantasy_stats(int);
	CMsgDOTAFantasyPlayerStats * add_fantasy_stats();
	const RepeatedPtrField<CMsgDOTAFantasyPlayerStats> & fantasy_stats();
	RepeatedPtrField<CMsgDOTAFantasyPlayerStats> * mutable_fantasy_stats();
	int player_strange_count_adjustments_size();
	void clear_player_strange_count_adjustments();
	const CMsgEconPlayerStrangeCountAdjustment & player_strange_count_adjustments(int);
	CMsgEconPlayerStrangeCountAdjustment * mutable_player_strange_count_adjustments(int);
	CMsgEconPlayerStrangeCountAdjustment * add_player_strange_count_adjustments();
	const RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment> & player_strange_count_adjustments();
	RepeatedPtrField<CMsgEconPlayerStrangeCountAdjustment> * mutable_player_strange_count_adjustments();
	bool has_automatic_surrender();
	void clear_automatic_surrender();
	bool automatic_surrender();
	void set_automatic_surrender(bool);
	bool has_server_version();
	void clear_server_version();
	uint32 server_version();
	void set_server_version(uint32);
	bool has_legacy_mass_disconnect();
	void clear_legacy_mass_disconnect();
	bool legacy_mass_disconnect();
	void set_legacy_mass_disconnect(bool);
	bool has_poor_network_conditions();
	void clear_poor_network_conditions();
	const CMsgPoorNetworkConditions & poor_network_conditions();
	CMsgPoorNetworkConditions * mutable_poor_network_conditions();
	CMsgPoorNetworkConditions * release_poor_network_conditions();
	void set_allocated_poor_network_conditions(CMsgPoorNetworkConditions *);
	int additional_msgs_size();
	void clear_additional_msgs();
	const CMsgGameMatchSignOut_CAdditionalSignoutMsg & additional_msgs(int);
	CMsgGameMatchSignOut_CAdditionalSignoutMsg * mutable_additional_msgs(int);
	CMsgGameMatchSignOut_CAdditionalSignoutMsg * add_additional_msgs();
	const RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg> & additional_msgs();
	RepeatedPtrField<CMsgGameMatchSignOut_CAdditionalSignoutMsg> * mutable_additional_msgs();
	int social_feed_events_size();
	void clear_social_feed_events();
	const CMsgGameMatchSignOut_CSocialFeedMatchEvent & social_feed_events(int);
	CMsgGameMatchSignOut_CSocialFeedMatchEvent * mutable_social_feed_events(int);
	CMsgGameMatchSignOut_CSocialFeedMatchEvent * add_social_feed_events();
	const RepeatedPtrField<CMsgGameMatchSignOut_CSocialFeedMatchEvent> & social_feed_events();
	RepeatedPtrField<CMsgGameMatchSignOut_CSocialFeedMatchEvent> * mutable_social_feed_events();
	bool has_average_networth_delta();
	void clear_average_networth_delta();
	int32 average_networth_delta();
	void set_average_networth_delta(int32);
	bool has_networth_delta_min10();
	void clear_networth_delta_min10();
	int32 networth_delta_min10();
	void set_networth_delta_min10(int32);
	bool has_networth_delta_min20();
	void clear_networth_delta_min20();
	int32 networth_delta_min20();
	void set_networth_delta_min20(int32);
	bool has_maximum_losing_networth_lead();
	void clear_maximum_losing_networth_lead();
	int32 maximum_losing_networth_lead();
	void set_maximum_losing_networth_lead(int32);
	bool has_average_experience_delta();
	void clear_average_experience_delta();
	int32 average_experience_delta();
	void set_average_experience_delta(int32);
	bool has_experience_delta_min10();
	void clear_experience_delta_min10();
	int32 experience_delta_min10();
	void set_experience_delta_min10(int32);
	bool has_experience_delta_min20();
	void clear_experience_delta_min20();
	int32 experience_delta_min20();
	void set_experience_delta_min20(int32);
	bool has_bonus_gold_winner_min10();
	void clear_bonus_gold_winner_min10();
	int32 bonus_gold_winner_min10();
	void set_bonus_gold_winner_min10(int32);
	bool has_bonus_gold_winner_min20();
	void clear_bonus_gold_winner_min20();
	int32 bonus_gold_winner_min20();
	void set_bonus_gold_winner_min20(int32);
	bool has_bonus_gold_winner_total();
	void clear_bonus_gold_winner_total();
	uint32 bonus_gold_winner_total();
	void set_bonus_gold_winner_total(uint32);
	bool has_bonus_gold_loser_min10();
	void clear_bonus_gold_loser_min10();
	int32 bonus_gold_loser_min10();
	void set_bonus_gold_loser_min10(int32);
	bool has_bonus_gold_loser_min20();
	void clear_bonus_gold_loser_min20();
	int32 bonus_gold_loser_min20();
	void set_bonus_gold_loser_min20(int32);
	bool has_bonus_gold_loser_total();
	void clear_bonus_gold_loser_total();
	uint32 bonus_gold_loser_total();
	void set_bonus_gold_loser_total(uint32);
	bool has_custom_game_data();
	void clear_custom_game_data();
	const CMsgGameMatchSignOut_CCustomGameData & custom_game_data();
	CMsgGameMatchSignOut_CCustomGameData * mutable_custom_game_data();
	CMsgGameMatchSignOut_CCustomGameData * release_custom_game_data();
	void set_allocated_custom_game_data(CMsgGameMatchSignOut_CCustomGameData *);
	bool has_match_flags();
	void clear_match_flags();
	uint32 match_flags();
	void set_match_flags(uint32);
	int team_scores_size();
	void clear_team_scores();
	uint32 team_scores(int);
	void set_team_scores(int, uint32);
	void add_team_scores(uint32);
	const RepeatedField<unsigned int> & team_scores();
	RepeatedField<unsigned int> * mutable_team_scores();
	bool has_pre_game_duration();
	void clear_pre_game_duration();
	uint32 pre_game_duration();
	void set_pre_game_duration(uint32);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_duration();
	void clear_has_duration();
	void set_has_good_guys_win();
	void clear_has_good_guys_win();
	void set_has_date();
	void clear_has_date();
	void set_has_cluster();
	void clear_has_cluster();
	void set_has_server_addr();
	void clear_has_server_addr();
	void set_has_first_blood_time();
	void clear_has_first_blood_time();
	void set_has_game_balance();
	void clear_has_game_balance();
	void set_has_event_score();
	void clear_has_event_score();
	void set_has_automatic_surrender();
	void clear_has_automatic_surrender();
	void set_has_server_version();
	void clear_has_server_version();
	void set_has_legacy_mass_disconnect();
	void clear_has_legacy_mass_disconnect();
	void set_has_poor_network_conditions();
	void clear_has_poor_network_conditions();
	void set_has_average_networth_delta();
	void clear_has_average_networth_delta();
	void set_has_networth_delta_min10();
	void clear_has_networth_delta_min10();
	void set_has_networth_delta_min20();
	void clear_has_networth_delta_min20();
	void set_has_maximum_losing_networth_lead();
	void clear_has_maximum_losing_networth_lead();
	void set_has_average_experience_delta();
	void clear_has_average_experience_delta();
	void set_has_experience_delta_min10();
	void clear_has_experience_delta_min10();
	void set_has_experience_delta_min20();
	void clear_has_experience_delta_min20();
	void set_has_bonus_gold_winner_min10();
	void clear_has_bonus_gold_winner_min10();
	void set_has_bonus_gold_winner_min20();
	void clear_has_bonus_gold_winner_min20();
	void set_has_bonus_gold_winner_total();
	void clear_has_bonus_gold_winner_total();
	void set_has_bonus_gold_loser_min10();
	void clear_has_bonus_gold_loser_min10();
	void set_has_bonus_gold_loser_min20();
	void clear_has_bonus_gold_loser_min20();
	void set_has_bonus_gold_loser_total();
	void clear_has_bonus_gold_loser_total();
	void set_has_custom_game_data();
	void clear_has_custom_game_data();
	void set_has_match_flags();
	void clear_has_match_flags();
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
	// sizeof = 360
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:3653
class CMsgSignOutDraftInfo : public Message {
public:

	static const int kRadiantCaptainAccountIdFieldNumber = 1;
	static const int kDireCaptainAccountIdFieldNumber = 2;
	static const int kPicksBansFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 radiant_captain_account_id_;  // +0x18
	uint32 dire_captain_account_id_;  // +0x1c

	static CMsgSignOutDraftInfo * default_instance_;
	CMsgSignOutDraftInfo();
	virtual ~CMsgSignOutDraftInfo();
	CMsgSignOutDraftInfo(const CMsgSignOutDraftInfo &);
	CMsgSignOutDraftInfo & operator=(const CMsgSignOutDraftInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutDraftInfo & default_instance();
	void Swap(CMsgSignOutDraftInfo *);
	virtual CMsgSignOutDraftInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutDraftInfo &);
	void MergeFrom(const CMsgSignOutDraftInfo &);
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
	bool has_radiant_captain_account_id();
	void clear_radiant_captain_account_id();
	uint32 radiant_captain_account_id();
	void set_radiant_captain_account_id(uint32);
	bool has_dire_captain_account_id();
	void clear_dire_captain_account_id();
	uint32 dire_captain_account_id();
	void set_dire_captain_account_id(uint32);
	int picks_bans_size();
	void clear_picks_bans();
	const CMatchHeroSelectEvent & picks_bans(int);
	CMatchHeroSelectEvent * mutable_picks_bans(int);
	CMatchHeroSelectEvent * add_picks_bans();
	const RepeatedPtrField<CMatchHeroSelectEvent> & picks_bans();
	RepeatedPtrField<CMatchHeroSelectEvent> * mutable_picks_bans();
	void set_has_radiant_captain_account_id();
	void clear_has_radiant_captain_account_id();
	void set_has_dire_captain_account_id();
	void clear_has_dire_captain_account_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:3755
class CMsgSignOutBotInfo : public Message {
public:

	static const int kAllowCheatsFieldNumber = 1;
	static const int kBotDifficultyRadiantFieldNumber = 2;
	static const int kCreatedLobbyFieldNumber = 3;
	static const int kBotDifficultyDireFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int bot_difficulty_radiant_;  // +0x18
	bool allow_cheats_;  // +0x1c
	bool created_lobby_;  // +0x1d

	int bot_difficulty_dire_;  // +0x20

	static CMsgSignOutBotInfo * default_instance_;
	CMsgSignOutBotInfo();
	virtual ~CMsgSignOutBotInfo();
	CMsgSignOutBotInfo(const CMsgSignOutBotInfo &);
	CMsgSignOutBotInfo & operator=(const CMsgSignOutBotInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutBotInfo & default_instance();
	void Swap(CMsgSignOutBotInfo *);
	virtual CMsgSignOutBotInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutBotInfo &);
	void MergeFrom(const CMsgSignOutBotInfo &);
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
	bool has_allow_cheats();
	void clear_allow_cheats();
	bool allow_cheats();
	void set_allow_cheats(bool);
	bool has_bot_difficulty_radiant();
	void clear_bot_difficulty_radiant();
	DOTABotDifficulty bot_difficulty_radiant();
	void set_bot_difficulty_radiant(DOTABotDifficulty);
	bool has_created_lobby();
	void clear_created_lobby();
	bool created_lobby();
	void set_created_lobby(bool);
	bool has_bot_difficulty_dire();
	void clear_bot_difficulty_dire();
	DOTABotDifficulty bot_difficulty_dire();
	void set_bot_difficulty_dire(DOTABotDifficulty);
	void set_has_allow_cheats();
	void clear_has_allow_cheats();
	void set_has_bot_difficulty_radiant();
	void clear_has_bot_difficulty_radiant();
	void set_has_created_lobby();
	void clear_has_created_lobby();
	void set_has_bot_difficulty_dire();
	void clear_has_bot_difficulty_dire();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:3864
class CMsgSignOutPlayerStats : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
	static const int kRankFieldNumber = 3;
	static const int kHeroIdFieldNumber = 4;
	static const int kRampagesFieldNumber = 5;
	static const int kTripleKillsFieldNumber = 6;
	static const int kFirstBloodClaimedFieldNumber = 7;
	static const int kFirstBloodGivenFieldNumber = 8;
	static const int kCouriersKilledFieldNumber = 9;
	static const int kAegisesSnatchedFieldNumber = 10;
	static const int kCheesesEatenFieldNumber = 11;
	static const int kCreepsStackedFieldNumber = 12;
	static const int kFightScoreFieldNumber = 13;
	static const int kFarmScoreFieldNumber = 14;
	static const int kSupportScoreFieldNumber = 15;
	static const int kPushScoreFieldNumber = 16;
	static const int kKillsFieldNumber = 17;
	static const int kDeathsFieldNumber = 18;
	static const int kAssistsFieldNumber = 19;
	static const int kLastHitsFieldNumber = 20;
	static const int kDeniesFieldNumber = 21;
	static const int kGpmFieldNumber = 22;
	static const int kXppmFieldNumber = 23;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	int32 account_id_;  // +0x20
	uint32 rank_;  // +0x24
	uint32 hero_id_;  // +0x28
	uint32 rampages_;  // +0x2c
	uint32 triple_kills_;  // +0x30
	uint32 first_blood_claimed_;  // +0x34
	uint32 first_blood_given_;  // +0x38
	uint32 couriers_killed_;  // +0x3c
	uint32 aegises_snatched_;  // +0x40
	uint32 cheeses_eaten_;  // +0x44
	uint32 creeps_stacked_;  // +0x48
	float fight_score_;  // +0x4c
	float farm_score_;  // +0x50
	float support_score_;  // +0x54
	float push_score_;  // +0x58
	uint32 kills_;  // +0x5c
	uint32 deaths_;  // +0x60
	uint32 assists_;  // +0x64
	uint32 last_hits_;  // +0x68
	uint32 denies_;  // +0x6c
	float gpm_;  // +0x70
	float xppm_;  // +0x74

	static CMsgSignOutPlayerStats * default_instance_;
	CMsgSignOutPlayerStats();
	virtual ~CMsgSignOutPlayerStats();
	CMsgSignOutPlayerStats(const CMsgSignOutPlayerStats &);
	CMsgSignOutPlayerStats & operator=(const CMsgSignOutPlayerStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutPlayerStats & default_instance();
	void Swap(CMsgSignOutPlayerStats *);
	virtual CMsgSignOutPlayerStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutPlayerStats &);
	void MergeFrom(const CMsgSignOutPlayerStats &);
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
	int32 account_id();
	void set_account_id(int32);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_rank();
	void clear_rank();
	uint32 rank();
	void set_rank(uint32);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	bool has_rampages();
	void clear_rampages();
	uint32 rampages();
	void set_rampages(uint32);
	bool has_triple_kills();
	void clear_triple_kills();
	uint32 triple_kills();
	void set_triple_kills(uint32);
	bool has_first_blood_claimed();
	void clear_first_blood_claimed();
	uint32 first_blood_claimed();
	void set_first_blood_claimed(uint32);
	bool has_first_blood_given();
	void clear_first_blood_given();
	uint32 first_blood_given();
	void set_first_blood_given(uint32);
	bool has_couriers_killed();
	void clear_couriers_killed();
	uint32 couriers_killed();
	void set_couriers_killed(uint32);
	bool has_aegises_snatched();
	void clear_aegises_snatched();
	uint32 aegises_snatched();
	void set_aegises_snatched(uint32);
	bool has_cheeses_eaten();
	void clear_cheeses_eaten();
	uint32 cheeses_eaten();
	void set_cheeses_eaten(uint32);
	bool has_creeps_stacked();
	void clear_creeps_stacked();
	uint32 creeps_stacked();
	void set_creeps_stacked(uint32);
	bool has_fight_score();
	void clear_fight_score();
	float fight_score();
	void set_fight_score(float);
	bool has_farm_score();
	void clear_farm_score();
	float farm_score();
	void set_farm_score(float);
	bool has_support_score();
	void clear_support_score();
	float support_score();
	void set_support_score(float);
	bool has_push_score();
	void clear_push_score();
	float push_score();
	void set_push_score(float);
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
	bool has_last_hits();
	void clear_last_hits();
	uint32 last_hits();
	void set_last_hits(uint32);
	bool has_denies();
	void clear_denies();
	uint32 denies();
	void set_denies(uint32);
	bool has_gpm();
	void clear_gpm();
	float gpm();
	void set_gpm(float);
	bool has_xppm();
	void clear_xppm();
	float xppm();
	void set_xppm(float);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_rank();
	void clear_has_rank();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_rampages();
	void clear_has_rampages();
	void set_has_triple_kills();
	void clear_has_triple_kills();
	void set_has_first_blood_claimed();
	void clear_has_first_blood_claimed();
	void set_has_first_blood_given();
	void clear_has_first_blood_given();
	void set_has_couriers_killed();
	void clear_has_couriers_killed();
	void set_has_aegises_snatched();
	void clear_has_aegises_snatched();
	void set_has_cheeses_eaten();
	void clear_has_cheeses_eaten();
	void set_has_creeps_stacked();
	void clear_has_creeps_stacked();
	void set_has_fight_score();
	void clear_has_fight_score();
	void set_has_farm_score();
	void clear_has_farm_score();
	void set_has_support_score();
	void clear_has_support_score();
	void set_has_push_score();
	void clear_has_push_score();
	void set_has_kills();
	void clear_has_kills();
	void set_has_deaths();
	void clear_has_deaths();
	void set_has_assists();
	void clear_has_assists();
	void set_has_last_hits();
	void clear_has_last_hits();
	void set_has_denies();
	void clear_has_denies();
	void set_has_gpm();
	void clear_has_gpm();
	void set_has_xppm();
	void clear_has_xppm();
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
	// sizeof = 120
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:4163
class CMsgSignOutCommunicationSummary_PlayerCommunication : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPingsFieldNumber = 2;
	static const int kMaxPingsPerIntervalFieldNumber = 3;
	static const int kTeammatePingsFieldNumber = 4;
	static const int kMaxTeammatePingsPerIntervalFieldNumber = 5;
	static const int kTeamChatMessagesFieldNumber = 6;
	static const int kAllChatMessagesFieldNumber = 7;
	static const int kChatWheelMessagesFieldNumber = 8;
	static const int kPausesFieldNumber = 9;
	static const int kUnpausesFieldNumber = 10;
	static const int kLinesDrawnFieldNumber = 11;
	static const int kVoiceChatSecondsFieldNumber = 12;
	static const int kChatMutesFieldNumber = 13;
	static const int kVoiceMutesFieldNumber = 14;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 pings_;  // +0x1c
	uint32 max_pings_per_interval_;  // +0x20
	uint32 teammate_pings_;  // +0x24
	uint32 max_teammate_pings_per_interval_;  // +0x28
	uint32 team_chat_messages_;  // +0x2c
	uint32 all_chat_messages_;  // +0x30
	uint32 chat_wheel_messages_;  // +0x34
	uint32 pauses_;  // +0x38
	uint32 unpauses_;  // +0x3c
	uint32 lines_drawn_;  // +0x40
	uint32 voice_chat_seconds_;  // +0x44
	uint32 chat_mutes_;  // +0x48
	uint32 voice_mutes_;  // +0x4c

	static CMsgSignOutCommunicationSummary_PlayerCommunication * default_instance_;
	CMsgSignOutCommunicationSummary_PlayerCommunication();
	virtual ~CMsgSignOutCommunicationSummary_PlayerCommunication();
	CMsgSignOutCommunicationSummary_PlayerCommunication(const CMsgSignOutCommunicationSummary_PlayerCommunication &);
	CMsgSignOutCommunicationSummary_PlayerCommunication & operator=(const CMsgSignOutCommunicationSummary_PlayerCommunication &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutCommunicationSummary_PlayerCommunication & default_instance();
	void Swap(CMsgSignOutCommunicationSummary_PlayerCommunication *);
	virtual CMsgSignOutCommunicationSummary_PlayerCommunication * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutCommunicationSummary_PlayerCommunication &);
	void MergeFrom(const CMsgSignOutCommunicationSummary_PlayerCommunication &);
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
	bool has_pings();
	void clear_pings();
	uint32 pings();
	void set_pings(uint32);
	bool has_max_pings_per_interval();
	void clear_max_pings_per_interval();
	uint32 max_pings_per_interval();
	void set_max_pings_per_interval(uint32);
	bool has_teammate_pings();
	void clear_teammate_pings();
	uint32 teammate_pings();
	void set_teammate_pings(uint32);
	bool has_max_teammate_pings_per_interval();
	void clear_max_teammate_pings_per_interval();
	uint32 max_teammate_pings_per_interval();
	void set_max_teammate_pings_per_interval(uint32);
	bool has_team_chat_messages();
	void clear_team_chat_messages();
	uint32 team_chat_messages();
	void set_team_chat_messages(uint32);
	bool has_all_chat_messages();
	void clear_all_chat_messages();
	uint32 all_chat_messages();
	void set_all_chat_messages(uint32);
	bool has_chat_wheel_messages();
	void clear_chat_wheel_messages();
	uint32 chat_wheel_messages();
	void set_chat_wheel_messages(uint32);
	bool has_pauses();
	void clear_pauses();
	uint32 pauses();
	void set_pauses(uint32);
	bool has_unpauses();
	void clear_unpauses();
	uint32 unpauses();
	void set_unpauses(uint32);
	bool has_lines_drawn();
	void clear_lines_drawn();
	uint32 lines_drawn();
	void set_lines_drawn(uint32);
	bool has_voice_chat_seconds();
	void clear_voice_chat_seconds();
	uint32 voice_chat_seconds();
	void set_voice_chat_seconds(uint32);
	bool has_chat_mutes();
	void clear_chat_mutes();
	uint32 chat_mutes();
	void set_chat_mutes(uint32);
	bool has_voice_mutes();
	void clear_voice_mutes();
	uint32 voice_mutes();
	void set_voice_mutes(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_pings();
	void clear_has_pings();
	void set_has_max_pings_per_interval();
	void clear_has_max_pings_per_interval();
	void set_has_teammate_pings();
	void clear_has_teammate_pings();
	void set_has_max_teammate_pings_per_interval();
	void clear_has_max_teammate_pings_per_interval();
	void set_has_team_chat_messages();
	void clear_has_team_chat_messages();
	void set_has_all_chat_messages();
	void clear_has_all_chat_messages();
	void set_has_chat_wheel_messages();
	void clear_has_chat_wheel_messages();
	void set_has_pauses();
	void clear_has_pauses();
	void set_has_unpauses();
	void clear_has_unpauses();
	void set_has_lines_drawn();
	void clear_has_lines_drawn();
	void set_has_voice_chat_seconds();
	void clear_has_voice_chat_seconds();
	void set_has_chat_mutes();
	void clear_has_chat_mutes();
	void set_has_voice_mutes();
	void clear_has_voice_mutes();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:4372
class CMsgSignOutCommunicationSummary : public Message {
public:

	static const int kPlayersFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgSignOutCommunicationSummary * default_instance_;
	CMsgSignOutCommunicationSummary();
	virtual ~CMsgSignOutCommunicationSummary();
	CMsgSignOutCommunicationSummary(const CMsgSignOutCommunicationSummary &);
	CMsgSignOutCommunicationSummary & operator=(const CMsgSignOutCommunicationSummary &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutCommunicationSummary & default_instance();
	void Swap(CMsgSignOutCommunicationSummary *);
	virtual CMsgSignOutCommunicationSummary * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutCommunicationSummary &);
	void MergeFrom(const CMsgSignOutCommunicationSummary &);
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
	int players_size();
	void clear_players();
	const CMsgSignOutCommunicationSummary_PlayerCommunication & players(int);
	CMsgSignOutCommunicationSummary_PlayerCommunication * mutable_players(int);
	CMsgSignOutCommunicationSummary_PlayerCommunication * add_players();
	const RepeatedPtrField<CMsgSignOutCommunicationSummary_PlayerCommunication> & players();
	RepeatedPtrField<CMsgSignOutCommunicationSummary_PlayerCommunication> * mutable_players();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:4456
class CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kContentsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * contents_;  // +0x18
	uint32 id_;  // +0x20

	static CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg * default_instance_;
	CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg();
	virtual ~CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg();
	CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg(const CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg &);
	CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg & operator=(const CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg & default_instance();
	void Swap(CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg *);
	virtual CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg &);
	void MergeFrom(const CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:4550
class CMsgGameMatchSignoutResponse_PlayerMetadata : public Message {
public:

	static const int kHeroIdFieldNumber = 1;
	static const int kAvgKillsX16FieldNumber = 2;
	static const int kAvgDeathsX16FieldNumber = 3;
	static const int kAvgAssistsX16FieldNumber = 4;
	static const int kAvgGpmX16FieldNumber = 5;
	static const int kAvgXpmX16FieldNumber = 6;
	static const int kBestKillsX16FieldNumber = 7;
	static const int kBestAssistsX16FieldNumber = 8;
	static const int kBestGpmX16FieldNumber = 9;
	static const int kBestXpmX16FieldNumber = 10;
	static const int kWinStreakFieldNumber = 11;
	static const int kBestWinStreakFieldNumber = 12;
	static const int kGamesPlayedFieldNumber = 13;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 hero_id_;  // +0x18
	uint32 avg_kills_x16_;  // +0x1c
	uint32 avg_deaths_x16_;  // +0x20
	uint32 avg_assists_x16_;  // +0x24
	uint32 avg_gpm_x16_;  // +0x28
	uint32 avg_xpm_x16_;  // +0x2c
	uint32 best_kills_x16_;  // +0x30
	uint32 best_assists_x16_;  // +0x34
	uint32 best_gpm_x16_;  // +0x38
	uint32 best_xpm_x16_;  // +0x3c
	uint32 win_streak_;  // +0x40
	uint32 best_win_streak_;  // +0x44
	uint32 games_played_;  // +0x48

	static CMsgGameMatchSignoutResponse_PlayerMetadata * default_instance_;
	CMsgGameMatchSignoutResponse_PlayerMetadata();
	virtual ~CMsgGameMatchSignoutResponse_PlayerMetadata();
	CMsgGameMatchSignoutResponse_PlayerMetadata(const CMsgGameMatchSignoutResponse_PlayerMetadata &);
	CMsgGameMatchSignoutResponse_PlayerMetadata & operator=(const CMsgGameMatchSignoutResponse_PlayerMetadata &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignoutResponse_PlayerMetadata & default_instance();
	void Swap(CMsgGameMatchSignoutResponse_PlayerMetadata *);
	virtual CMsgGameMatchSignoutResponse_PlayerMetadata * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignoutResponse_PlayerMetadata &);
	void MergeFrom(const CMsgGameMatchSignoutResponse_PlayerMetadata &);
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
	bool has_avg_kills_x16();
	void clear_avg_kills_x16();
	uint32 avg_kills_x16();
	void set_avg_kills_x16(uint32);
	bool has_avg_deaths_x16();
	void clear_avg_deaths_x16();
	uint32 avg_deaths_x16();
	void set_avg_deaths_x16(uint32);
	bool has_avg_assists_x16();
	void clear_avg_assists_x16();
	uint32 avg_assists_x16();
	void set_avg_assists_x16(uint32);
	bool has_avg_gpm_x16();
	void clear_avg_gpm_x16();
	uint32 avg_gpm_x16();
	void set_avg_gpm_x16(uint32);
	bool has_avg_xpm_x16();
	void clear_avg_xpm_x16();
	uint32 avg_xpm_x16();
	void set_avg_xpm_x16(uint32);
	bool has_best_kills_x16();
	void clear_best_kills_x16();
	uint32 best_kills_x16();
	void set_best_kills_x16(uint32);
	bool has_best_assists_x16();
	void clear_best_assists_x16();
	uint32 best_assists_x16();
	void set_best_assists_x16(uint32);
	bool has_best_gpm_x16();
	void clear_best_gpm_x16();
	uint32 best_gpm_x16();
	void set_best_gpm_x16(uint32);
	bool has_best_xpm_x16();
	void clear_best_xpm_x16();
	uint32 best_xpm_x16();
	void set_best_xpm_x16(uint32);
	bool has_win_streak();
	void clear_win_streak();
	uint32 win_streak();
	void set_win_streak(uint32);
	bool has_best_win_streak();
	void clear_best_win_streak();
	uint32 best_win_streak();
	void set_best_win_streak(uint32);
	bool has_games_played();
	void clear_games_played();
	uint32 games_played();
	void set_games_played(uint32);
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_avg_kills_x16();
	void clear_has_avg_kills_x16();
	void set_has_avg_deaths_x16();
	void clear_has_avg_deaths_x16();
	void set_has_avg_assists_x16();
	void clear_has_avg_assists_x16();
	void set_has_avg_gpm_x16();
	void clear_has_avg_gpm_x16();
	void set_has_avg_xpm_x16();
	void clear_has_avg_xpm_x16();
	void set_has_best_kills_x16();
	void clear_has_best_kills_x16();
	void set_has_best_assists_x16();
	void clear_has_best_assists_x16();
	void set_has_best_gpm_x16();
	void clear_has_best_gpm_x16();
	void set_has_best_xpm_x16();
	void clear_has_best_xpm_x16();
	void set_has_win_streak();
	void clear_has_win_streak();
	void set_has_best_win_streak();
	void clear_has_best_win_streak();
	void set_has_games_played();
	void clear_has_games_played();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:4749
class CMsgGameMatchSignoutResponse : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kReplaySaltFieldNumber = 2;
	static const int kTimedRewardDetailsFieldNumber = 3;
	static const int kXpRewardDetailsFieldNumber = 4;
	static const int kLeagueidFieldNumber = 5;
	static const int kAdditionalMsgsFieldNumber = 6;
	static const int kMetadataPrivateKeyFieldNumber = 7;
	static const int kMatchDetailsFieldNumber = 8;
	static const int kPlayersMetadataFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 replay_salt_;  // +0x38
	uint32 leagueid_;  // +0x3c
	uint32 metadata_private_key_;  // +0x90

	static CMsgGameMatchSignoutResponse * default_instance_;
	CMsgGameMatchSignoutResponse();
	virtual ~CMsgGameMatchSignoutResponse();
	CMsgGameMatchSignoutResponse(const CMsgGameMatchSignoutResponse &);
	CMsgGameMatchSignoutResponse & operator=(const CMsgGameMatchSignoutResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignoutResponse & default_instance();
	void Swap(CMsgGameMatchSignoutResponse *);
	virtual CMsgGameMatchSignoutResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignoutResponse &);
	void MergeFrom(const CMsgGameMatchSignoutResponse &);
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
	bool has_replay_salt();
	void clear_replay_salt();
	uint32 replay_salt();
	void set_replay_salt(uint32);
	int timed_reward_details_size();
	void clear_timed_reward_details();
	const CLobbyTimedRewardDetails & timed_reward_details(int);
	CLobbyTimedRewardDetails * mutable_timed_reward_details(int);
	CLobbyTimedRewardDetails * add_timed_reward_details();
	const RepeatedPtrField<CLobbyTimedRewardDetails> & timed_reward_details();
	RepeatedPtrField<CLobbyTimedRewardDetails> * mutable_timed_reward_details();
	int xp_reward_details_size();
	void clear_xp_reward_details();
	const CDOTALobbyMember & xp_reward_details(int);
	CDOTALobbyMember * mutable_xp_reward_details(int);
	CDOTALobbyMember * add_xp_reward_details();
	const RepeatedPtrField<CDOTALobbyMember> & xp_reward_details();
	RepeatedPtrField<CDOTALobbyMember> * mutable_xp_reward_details();
	bool has_leagueid();
	void clear_leagueid();
	uint32 leagueid();
	void set_leagueid(uint32);
	int additional_msgs_size();
	void clear_additional_msgs();
	const CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg & additional_msgs(int);
	CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg * mutable_additional_msgs(int);
	CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg * add_additional_msgs();
	const RepeatedPtrField<CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg> & additional_msgs();
	RepeatedPtrField<CMsgGameMatchSignoutResponse_CAdditionalSignoutMsg> * mutable_additional_msgs();
	bool has_metadata_private_key();
	void clear_metadata_private_key();
	uint32 metadata_private_key();
	void set_metadata_private_key(uint32);
	bool has_match_details();
	void clear_match_details();
	const CMsgDOTAMatch & match_details();
	CMsgDOTAMatch * mutable_match_details();
	CMsgDOTAMatch * release_match_details();
	void set_allocated_match_details(CMsgDOTAMatch *);
	int players_metadata_size();
	void clear_players_metadata();
	const CMsgGameMatchSignoutResponse_PlayerMetadata & players_metadata(int);
	CMsgGameMatchSignoutResponse_PlayerMetadata * mutable_players_metadata(int);
	CMsgGameMatchSignoutResponse_PlayerMetadata * add_players_metadata();
	const RepeatedPtrField<CMsgGameMatchSignoutResponse_PlayerMetadata> & players_metadata();
	RepeatedPtrField<CMsgGameMatchSignoutResponse_PlayerMetadata> * mutable_players_metadata();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_replay_salt();
	void clear_has_replay_salt();
	void set_has_leagueid();
	void clear_has_leagueid();
	void set_has_metadata_private_key();
	void clear_has_metadata_private_key();
	void set_has_match_details();
	void clear_has_match_details();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:4925
class CMsgTimedRewardContainer : public Message {
public:

	static const int kTimedRewardDetailsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgTimedRewardContainer * default_instance_;
	CMsgTimedRewardContainer();
	virtual ~CMsgTimedRewardContainer();
	CMsgTimedRewardContainer(const CMsgTimedRewardContainer &);
	CMsgTimedRewardContainer & operator=(const CMsgTimedRewardContainer &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTimedRewardContainer & default_instance();
	void Swap(CMsgTimedRewardContainer *);
	virtual CMsgTimedRewardContainer * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTimedRewardContainer &);
	void MergeFrom(const CMsgTimedRewardContainer &);
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
	int timed_reward_details_size();
	void clear_timed_reward_details();
	const CLobbyTimedRewardDetails & timed_reward_details(int);
	CLobbyTimedRewardDetails * mutable_timed_reward_details(int);
	CLobbyTimedRewardDetails * add_timed_reward_details();
	const RepeatedPtrField<CLobbyTimedRewardDetails> & timed_reward_details();
	RepeatedPtrField<CLobbyTimedRewardDetails> * mutable_timed_reward_details();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:5007
class CMsgGameMatchSignOutPermissionRequest : public Message {
public:

	static const int kServerVersionFieldNumber = 1;
	static const int kLocalAttemptFieldNumber = 2;
	static const int kTotalAttemptFieldNumber = 3;
	static const int kSecondsWaitedFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 server_version_;  // +0x18
	uint32 local_attempt_;  // +0x1c
	uint32 total_attempt_;  // +0x20
	uint32 seconds_waited_;  // +0x24

	static CMsgGameMatchSignOutPermissionRequest * default_instance_;
	CMsgGameMatchSignOutPermissionRequest();
	virtual ~CMsgGameMatchSignOutPermissionRequest();
	CMsgGameMatchSignOutPermissionRequest(const CMsgGameMatchSignOutPermissionRequest &);
	CMsgGameMatchSignOutPermissionRequest & operator=(const CMsgGameMatchSignOutPermissionRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOutPermissionRequest & default_instance();
	void Swap(CMsgGameMatchSignOutPermissionRequest *);
	virtual CMsgGameMatchSignOutPermissionRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOutPermissionRequest &);
	void MergeFrom(const CMsgGameMatchSignOutPermissionRequest &);
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
	bool has_server_version();
	void clear_server_version();
	uint32 server_version();
	void set_server_version(uint32);
	bool has_local_attempt();
	void clear_local_attempt();
	uint32 local_attempt();
	void set_local_attempt(uint32);
	bool has_total_attempt();
	void clear_total_attempt();
	uint32 total_attempt();
	void set_total_attempt(uint32);
	bool has_seconds_waited();
	void clear_seconds_waited();
	uint32 seconds_waited();
	void set_seconds_waited(uint32);
	void set_has_server_version();
	void clear_has_server_version();
	void set_has_local_attempt();
	void clear_has_local_attempt();
	void set_has_total_attempt();
	void clear_has_total_attempt();
	void set_has_seconds_waited();
	void clear_has_seconds_waited();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:5116
class CMsgGameMatchSignOutPermissionResponse : public Message {
public:

	static const int kPermissionGrantedFieldNumber = 1;
	static const int kAbandonSignoutFieldNumber = 2;
	static const int kRetryDelaySecondsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool permission_granted_;  // +0x18
	bool abandon_signout_;  // +0x19

	uint32 retry_delay_seconds_;  // +0x1c

	static CMsgGameMatchSignOutPermissionResponse * default_instance_;
	CMsgGameMatchSignOutPermissionResponse();
	virtual ~CMsgGameMatchSignOutPermissionResponse();
	CMsgGameMatchSignOutPermissionResponse(const CMsgGameMatchSignOutPermissionResponse &);
	CMsgGameMatchSignOutPermissionResponse & operator=(const CMsgGameMatchSignOutPermissionResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameMatchSignOutPermissionResponse & default_instance();
	void Swap(CMsgGameMatchSignOutPermissionResponse *);
	virtual CMsgGameMatchSignOutPermissionResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameMatchSignOutPermissionResponse &);
	void MergeFrom(const CMsgGameMatchSignOutPermissionResponse &);
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
	bool has_permission_granted();
	void clear_permission_granted();
	bool permission_granted();
	void set_permission_granted(bool);
	bool has_abandon_signout();
	void clear_abandon_signout();
	bool abandon_signout();
	void set_abandon_signout(bool);
	bool has_retry_delay_seconds();
	void clear_retry_delay_seconds();
	uint32 retry_delay_seconds();
	void set_retry_delay_seconds(uint32);
	void set_has_permission_granted();
	void clear_has_permission_granted();
	void set_has_abandon_signout();
	void clear_has_abandon_signout();
	void set_has_retry_delay_seconds();
	void clear_has_retry_delay_seconds();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:5215
class CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility : public Message {
public:

	static const int kAbilityIdFieldNumber = 1;
	static const int kAbilityLevelFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ability_id_;  // +0x18
	uint32 ability_level_;  // +0x1c

	static CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility * default_instance_;
	CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility();
	virtual ~CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility();
	CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility(const CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility &);
	CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility & operator=(const CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility & default_instance();
	void Swap(CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility *);
	virtual CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility &);
	void MergeFrom(const CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility &);
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
	bool has_ability_id();
	void clear_ability_id();
	uint32 ability_id();
	void set_ability_id(uint32);
	bool has_ability_level();
	void clear_ability_level();
	uint32 ability_level();
	void set_ability_level(uint32);
	void set_has_ability_id();
	void clear_has_ability_id();
	void set_has_ability_level();
	void clear_has_ability_level();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:5304
class CMsgDOTALiveScoreboardUpdate_Team_Player : public Message {
public:

	static const CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState k_EDOTAUltimateStateNotLearned;
	static const CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState k_EDOTAUltimateStateCooldown = 1;
	static const CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState k_EDOTAUltimateStateNeedsMana = 2;
	static const CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState k_EDOTAUltimateStateReady = 3;
	static const CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState DOTAUltimateState_MIN;
	static const CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState DOTAUltimateState_MAX = 3;
	static const int DOTAUltimateState_ARRAYSIZE = 4;
	static const int kPlayerSlotFieldNumber = 1;
	static const int kPlayerNameFieldNumber = 2;
	static const int kHeroNameFieldNumber = 3;
	static const int kHeroIdFieldNumber = 4;
	static const int kKillsFieldNumber = 5;
	static const int kDeathsFieldNumber = 6;
	static const int kAssistsFieldNumber = 7;
	static const int kLastHitsFieldNumber = 8;
	static const int kDeniesFieldNumber = 9;
	static const int kGoldFieldNumber = 10;
	static const int kLevelFieldNumber = 11;
	static const int kGoldPerMinFieldNumber = 12;
	static const int kXpPerMinFieldNumber = 13;
	static const int kUltimateStateFieldNumber = 14;
	static const int kUltimateCooldownFieldNumber = 15;
	static const int kItem0FieldNumber = 16;
	static const int kItem1FieldNumber = 17;
	static const int kItem2FieldNumber = 18;
	static const int kItem3FieldNumber = 19;
	static const int kItem4FieldNumber = 20;
	static const int kItem5FieldNumber = 21;
	static const int kRespawnTimerFieldNumber = 22;
	static const int kAccountIdFieldNumber = 23;
	static const int kPositionXFieldNumber = 24;
	static const int kPositionYFieldNumber = 25;
	static const int kNetWorthFieldNumber = 26;
	static const int kAbilitiesFieldNumber = 27;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * player_name_;  // +0x18
	uint32 player_slot_;  // +0x20
	uint32 hero_id_;  // +0x24
	string * hero_name_;  // +0x28
	uint32 kills_;  // +0x30
	uint32 deaths_;  // +0x34
	uint32 assists_;  // +0x38
	uint32 last_hits_;  // +0x3c
	uint32 denies_;  // +0x40
	uint32 gold_;  // +0x44
	uint32 level_;  // +0x48
	float gold_per_min_;  // +0x4c
	float xp_per_min_;  // +0x50
	int ultimate_state_;  // +0x54
	float ultimate_cooldown_;  // +0x58
	uint32 item0_;  // +0x5c
	uint32 item1_;  // +0x60
	uint32 item2_;  // +0x64
	uint32 item3_;  // +0x68
	uint32 item4_;  // +0x6c
	uint32 item5_;  // +0x70
	uint32 respawn_timer_;  // +0x74
	uint32 account_id_;  // +0x78
	float position_x_;  // +0x7c
	float position_y_;  // +0x80
	uint32 net_worth_;  // +0x84

	static CMsgDOTALiveScoreboardUpdate_Team_Player * default_instance_;
	typedef CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState DOTAUltimateState;
	CMsgDOTALiveScoreboardUpdate_Team_Player();
	virtual ~CMsgDOTALiveScoreboardUpdate_Team_Player();
	CMsgDOTALiveScoreboardUpdate_Team_Player(const CMsgDOTALiveScoreboardUpdate_Team_Player &);
	CMsgDOTALiveScoreboardUpdate_Team_Player & operator=(const CMsgDOTALiveScoreboardUpdate_Team_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTALiveScoreboardUpdate_Team_Player & default_instance();
	void Swap(CMsgDOTALiveScoreboardUpdate_Team_Player *);
	virtual CMsgDOTALiveScoreboardUpdate_Team_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTALiveScoreboardUpdate_Team_Player &);
	void MergeFrom(const CMsgDOTALiveScoreboardUpdate_Team_Player &);
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
	bool DOTAUltimateState_IsValid(int);
	const EnumDescriptor * DOTAUltimateState_descriptor();
	const string & DOTAUltimateState_Name(DOTAUltimateState);
	bool DOTAUltimateState_Parse(const string &, DOTAUltimateState *);
	bool has_player_slot();
	void clear_player_slot();
	uint32 player_slot();
	void set_player_slot(uint32);
	bool has_player_name();
	void clear_player_name();
	const string & player_name();
	void set_player_name(const string &);
	void set_player_name(const char *);
	void set_player_name(const char *, size_t);
	string * mutable_player_name();
	string * release_player_name();
	void set_allocated_player_name(string *);
	bool has_hero_name();
	void clear_hero_name();
	const string & hero_name();
	void set_hero_name(const string &);
	void set_hero_name(const char *);
	void set_hero_name(const char *, size_t);
	string * mutable_hero_name();
	string * release_hero_name();
	void set_allocated_hero_name(string *);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
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
	bool has_last_hits();
	void clear_last_hits();
	uint32 last_hits();
	void set_last_hits(uint32);
	bool has_denies();
	void clear_denies();
	uint32 denies();
	void set_denies(uint32);
	bool has_gold();
	void clear_gold();
	uint32 gold();
	void set_gold(uint32);
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	bool has_gold_per_min();
	void clear_gold_per_min();
	float gold_per_min();
	void set_gold_per_min(float);
	bool has_xp_per_min();
	void clear_xp_per_min();
	float xp_per_min();
	void set_xp_per_min(float);
	bool has_ultimate_state();
	void clear_ultimate_state();
	CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState ultimate_state();
	void set_ultimate_state(CMsgDOTALiveScoreboardUpdate_Team_Player_DOTAUltimateState);
	bool has_ultimate_cooldown();
	void clear_ultimate_cooldown();
	float ultimate_cooldown();
	void set_ultimate_cooldown(float);
	bool has_item0();
	void clear_item0();
	uint32 item0();
	void set_item0(uint32);
	bool has_item1();
	void clear_item1();
	uint32 item1();
	void set_item1(uint32);
	bool has_item2();
	void clear_item2();
	uint32 item2();
	void set_item2(uint32);
	bool has_item3();
	void clear_item3();
	uint32 item3();
	void set_item3(uint32);
	bool has_item4();
	void clear_item4();
	uint32 item4();
	void set_item4(uint32);
	bool has_item5();
	void clear_item5();
	uint32 item5();
	void set_item5(uint32);
	bool has_respawn_timer();
	void clear_respawn_timer();
	uint32 respawn_timer();
	void set_respawn_timer(uint32);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_position_x();
	void clear_position_x();
	float position_x();
	void set_position_x(float);
	bool has_position_y();
	void clear_position_y();
	float position_y();
	void set_position_y(float);
	bool has_net_worth();
	void clear_net_worth();
	uint32 net_worth();
	void set_net_worth(uint32);
	int abilities_size();
	void clear_abilities();
	const CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility & abilities(int);
	CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility * mutable_abilities(int);
	CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility * add_abilities();
	const RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility> & abilities();
	RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player_HeroAbility> * mutable_abilities();
	void set_has_player_slot();
	void clear_has_player_slot();
	void set_has_player_name();
	void clear_has_player_name();
	void set_has_hero_name();
	void clear_has_hero_name();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_kills();
	void clear_has_kills();
	void set_has_deaths();
	void clear_has_deaths();
	void set_has_assists();
	void clear_has_assists();
	void set_has_last_hits();
	void clear_has_last_hits();
	void set_has_denies();
	void clear_has_denies();
	void set_has_gold();
	void clear_has_gold();
	void set_has_level();
	void clear_has_level();
	void set_has_gold_per_min();
	void clear_has_gold_per_min();
	void set_has_xp_per_min();
	void clear_has_xp_per_min();
	void set_has_ultimate_state();
	void clear_has_ultimate_state();
	void set_has_ultimate_cooldown();
	void clear_has_ultimate_cooldown();
	void set_has_item0();
	void clear_has_item0();
	void set_has_item1();
	void clear_has_item1();
	void set_has_item2();
	void clear_has_item2();
	void set_has_item3();
	void clear_has_item3();
	void set_has_item4();
	void clear_has_item4();
	void set_has_item5();
	void clear_has_item5();
	void set_has_respawn_timer();
	void clear_has_respawn_timer();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_position_x();
	void clear_has_position_x();
	void set_has_position_y();
	void clear_has_position_y();
	void set_has_net_worth();
	void clear_has_net_worth();
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
	// sizeof = 160
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:5684
class CMsgDOTALiveScoreboardUpdate_Team : public Message {
public:

	static const int kPlayersFieldNumber = 1;
	static const int kScoreFieldNumber = 2;
	static const int kTowerStateFieldNumber = 3;
	static const int kBarracksStateFieldNumber = 4;
	static const int kHeroPicksFieldNumber = 5;
	static const int kHeroBansFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 score_;  // +0x30
	uint32 tower_state_;  // +0x34
	uint32 barracks_state_;  // +0x58

	static CMsgDOTALiveScoreboardUpdate_Team * default_instance_;
	CMsgDOTALiveScoreboardUpdate_Team();
	virtual ~CMsgDOTALiveScoreboardUpdate_Team();
	CMsgDOTALiveScoreboardUpdate_Team(const CMsgDOTALiveScoreboardUpdate_Team &);
	CMsgDOTALiveScoreboardUpdate_Team & operator=(const CMsgDOTALiveScoreboardUpdate_Team &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTALiveScoreboardUpdate_Team & default_instance();
	void Swap(CMsgDOTALiveScoreboardUpdate_Team *);
	virtual CMsgDOTALiveScoreboardUpdate_Team * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTALiveScoreboardUpdate_Team &);
	void MergeFrom(const CMsgDOTALiveScoreboardUpdate_Team &);
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
	int players_size();
	void clear_players();
	const CMsgDOTALiveScoreboardUpdate_Team_Player & players(int);
	CMsgDOTALiveScoreboardUpdate_Team_Player * mutable_players(int);
	CMsgDOTALiveScoreboardUpdate_Team_Player * add_players();
	const RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player> & players();
	RepeatedPtrField<CMsgDOTALiveScoreboardUpdate_Team_Player> * mutable_players();
	bool has_score();
	void clear_score();
	uint32 score();
	void set_score(uint32);
	bool has_tower_state();
	void clear_tower_state();
	uint32 tower_state();
	void set_tower_state(uint32);
	bool has_barracks_state();
	void clear_barracks_state();
	uint32 barracks_state();
	void set_barracks_state(uint32);
	int hero_picks_size();
	void clear_hero_picks();
	uint32 hero_picks(int);
	void set_hero_picks(int, uint32);
	void add_hero_picks(uint32);
	const RepeatedField<unsigned int> & hero_picks();
	RepeatedField<unsigned int> * mutable_hero_picks();
	int hero_bans_size();
	void clear_hero_bans();
	uint32 hero_bans(int);
	void set_hero_bans(int, uint32);
	void add_hero_bans(uint32);
	const RepeatedField<unsigned int> & hero_bans();
	RepeatedField<unsigned int> * mutable_hero_bans();
	void set_has_score();
	void clear_has_score();
	void set_has_tower_state();
	void clear_has_tower_state();
	void set_has_barracks_state();
	void clear_has_barracks_state();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:5824
class CMsgDOTALiveScoreboardUpdate : public Message {
public:

	static const int kTournamentIdFieldNumber = 1;
	static const int kTournamentGameIdFieldNumber = 2;
	static const int kDurationFieldNumber = 3;
	static const int kHltvDelayFieldNumber = 4;
	static const int kTeamGoodFieldNumber = 5;
	static const int kTeamBadFieldNumber = 6;
	static const int kRoshanRespawnTimerFieldNumber = 7;
	static const int kLeagueIdFieldNumber = 8;
	static const int kMatchIdFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 tournament_id_;  // +0x18
	uint32 tournament_game_id_;  // +0x1c
	float duration_;  // +0x20
	int32 hltv_delay_;  // +0x24
	uint32 roshan_respawn_timer_;  // +0x38
	uint32 league_id_;  // +0x3c
	uint64 match_id_;  // +0x40

	static CMsgDOTALiveScoreboardUpdate * default_instance_;
	CMsgDOTALiveScoreboardUpdate();
	virtual ~CMsgDOTALiveScoreboardUpdate();
	CMsgDOTALiveScoreboardUpdate(const CMsgDOTALiveScoreboardUpdate &);
	CMsgDOTALiveScoreboardUpdate & operator=(const CMsgDOTALiveScoreboardUpdate &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTALiveScoreboardUpdate & default_instance();
	void Swap(CMsgDOTALiveScoreboardUpdate *);
	virtual CMsgDOTALiveScoreboardUpdate * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTALiveScoreboardUpdate &);
	void MergeFrom(const CMsgDOTALiveScoreboardUpdate &);
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
	bool has_tournament_id();
	void clear_tournament_id();
	uint32 tournament_id();
	void set_tournament_id(uint32);
	bool has_tournament_game_id();
	void clear_tournament_game_id();
	uint32 tournament_game_id();
	void set_tournament_game_id(uint32);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_hltv_delay();
	void clear_hltv_delay();
	int32 hltv_delay();
	void set_hltv_delay(int32);
	bool has_team_good();
	void clear_team_good();
	const CMsgDOTALiveScoreboardUpdate_Team & team_good();
	CMsgDOTALiveScoreboardUpdate_Team * mutable_team_good();
	CMsgDOTALiveScoreboardUpdate_Team * release_team_good();
	void set_allocated_team_good(CMsgDOTALiveScoreboardUpdate_Team *);
	bool has_team_bad();
	void clear_team_bad();
	const CMsgDOTALiveScoreboardUpdate_Team & team_bad();
	CMsgDOTALiveScoreboardUpdate_Team * mutable_team_bad();
	CMsgDOTALiveScoreboardUpdate_Team * release_team_bad();
	void set_allocated_team_bad(CMsgDOTALiveScoreboardUpdate_Team *);
	bool has_roshan_respawn_timer();
	void clear_roshan_respawn_timer();
	uint32 roshan_respawn_timer();
	void set_roshan_respawn_timer(uint32);
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	void set_has_tournament_id();
	void clear_has_tournament_id();
	void set_has_tournament_game_id();
	void clear_has_tournament_game_id();
	void set_has_duration();
	void clear_has_duration();
	void set_has_hltv_delay();
	void clear_has_hltv_delay();
	void set_has_team_good();
	void clear_has_team_good();
	void set_has_team_bad();
	void clear_has_team_bad();
	void set_has_roshan_respawn_timer();
	void clear_has_roshan_respawn_timer();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_match_id();
	void clear_has_match_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:5989
class CMsgDOTARequestPlayerResources : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kPlayerIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint32 player_id_;  // +0x20

	static CMsgDOTARequestPlayerResources * default_instance_;
	CMsgDOTARequestPlayerResources();
	virtual ~CMsgDOTARequestPlayerResources();
	CMsgDOTARequestPlayerResources(const CMsgDOTARequestPlayerResources &);
	CMsgDOTARequestPlayerResources & operator=(const CMsgDOTARequestPlayerResources &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARequestPlayerResources & default_instance();
	void Swap(CMsgDOTARequestPlayerResources *);
	virtual CMsgDOTARequestPlayerResources * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARequestPlayerResources &);
	void MergeFrom(const CMsgDOTARequestPlayerResources &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_player_id();
	void clear_player_id();
	uint32 player_id();
	void set_player_id(uint32);
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_player_id();
	void clear_has_player_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6078
class CMsgDOTARequestPlayerResourcesResponse : public Message {
public:

	static const int kSteamIdFieldNumber = 1;
	static const int kRankFieldNumber = 2;
	static const int kPlayerIdFieldNumber = 3;
	static const int kPreventTextChatFieldNumber = 4;
	static const int kPreventVoiceChatFieldNumber = 5;
	static const int kLowPriorityFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 steam_id_;  // +0x18
	uint32 rank_;  // +0x20
	uint32 player_id_;  // +0x24
	bool prevent_text_chat_;  // +0x28
	bool prevent_voice_chat_;  // +0x29
	bool low_priority_;  // +0x2a

	static CMsgDOTARequestPlayerResourcesResponse * default_instance_;
	CMsgDOTARequestPlayerResourcesResponse();
	virtual ~CMsgDOTARequestPlayerResourcesResponse();
	CMsgDOTARequestPlayerResourcesResponse(const CMsgDOTARequestPlayerResourcesResponse &);
	CMsgDOTARequestPlayerResourcesResponse & operator=(const CMsgDOTARequestPlayerResourcesResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARequestPlayerResourcesResponse & default_instance();
	void Swap(CMsgDOTARequestPlayerResourcesResponse *);
	virtual CMsgDOTARequestPlayerResourcesResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARequestPlayerResourcesResponse &);
	void MergeFrom(const CMsgDOTARequestPlayerResourcesResponse &);
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
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_rank();
	void clear_rank();
	uint32 rank();
	void set_rank(uint32);
	bool has_player_id();
	void clear_player_id();
	uint32 player_id();
	void set_player_id(uint32);
	bool has_prevent_text_chat();
	void clear_prevent_text_chat();
	bool prevent_text_chat();
	void set_prevent_text_chat(bool);
	bool has_prevent_voice_chat();
	void clear_prevent_voice_chat();
	bool prevent_voice_chat();
	void set_prevent_voice_chat(bool);
	bool has_low_priority();
	void clear_low_priority();
	bool low_priority();
	void set_low_priority(bool);
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_rank();
	void clear_has_rank();
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_prevent_text_chat();
	void clear_has_prevent_text_chat();
	void set_has_prevent_voice_chat();
	void clear_has_prevent_voice_chat();
	void set_has_low_priority();
	void clear_has_low_priority();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6207
class CMsgDOTARequestBatchPlayerResources : public Message {
public:

	static const int kAccountIdsFieldNumber = 1;
	static const int kRankTypesFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int _account_ids_cached_byte_size_;  // +0x28

	int _rank_types_cached_byte_size_;  // +0x40

	static CMsgDOTARequestBatchPlayerResources * default_instance_;
	CMsgDOTARequestBatchPlayerResources();
	virtual ~CMsgDOTARequestBatchPlayerResources();
	CMsgDOTARequestBatchPlayerResources(const CMsgDOTARequestBatchPlayerResources &);
	CMsgDOTARequestBatchPlayerResources & operator=(const CMsgDOTARequestBatchPlayerResources &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARequestBatchPlayerResources & default_instance();
	void Swap(CMsgDOTARequestBatchPlayerResources *);
	virtual CMsgDOTARequestBatchPlayerResources * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARequestBatchPlayerResources &);
	void MergeFrom(const CMsgDOTARequestBatchPlayerResources &);
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
	int rank_types_size();
	void clear_rank_types();
	uint32 rank_types(int);
	void set_rank_types(int, uint32);
	void add_rank_types(uint32);
	const RepeatedField<unsigned int> & rank_types();
	RepeatedField<unsigned int> * mutable_rank_types();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6304
class CMsgDOTARequestBatchPlayerResourcesResponse_Result : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPreventTextChatFieldNumber = 2;
	static const int kPreventVoiceChatFieldNumber = 3;
	static const int kRankFieldNumber = 4;
	static const int kRankCalibratedFieldNumber = 5;
	static const int kLowPriorityFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 rank_;  // +0x1c
	bool prevent_text_chat_;  // +0x20
	bool prevent_voice_chat_;  // +0x21
	bool rank_calibrated_;  // +0x22
	bool low_priority_;  // +0x23

	static CMsgDOTARequestBatchPlayerResourcesResponse_Result * default_instance_;
	CMsgDOTARequestBatchPlayerResourcesResponse_Result();
	virtual ~CMsgDOTARequestBatchPlayerResourcesResponse_Result();
	CMsgDOTARequestBatchPlayerResourcesResponse_Result(const CMsgDOTARequestBatchPlayerResourcesResponse_Result &);
	CMsgDOTARequestBatchPlayerResourcesResponse_Result & operator=(const CMsgDOTARequestBatchPlayerResourcesResponse_Result &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARequestBatchPlayerResourcesResponse_Result & default_instance();
	void Swap(CMsgDOTARequestBatchPlayerResourcesResponse_Result *);
	virtual CMsgDOTARequestBatchPlayerResourcesResponse_Result * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARequestBatchPlayerResourcesResponse_Result &);
	void MergeFrom(const CMsgDOTARequestBatchPlayerResourcesResponse_Result &);
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
	bool has_prevent_text_chat();
	void clear_prevent_text_chat();
	bool prevent_text_chat();
	void set_prevent_text_chat(bool);
	bool has_prevent_voice_chat();
	void clear_prevent_voice_chat();
	bool prevent_voice_chat();
	void set_prevent_voice_chat(bool);
	bool has_rank();
	void clear_rank();
	uint32 rank();
	void set_rank(uint32);
	bool has_rank_calibrated();
	void clear_rank_calibrated();
	bool rank_calibrated();
	void set_rank_calibrated(bool);
	bool has_low_priority();
	void clear_low_priority();
	bool low_priority();
	void set_low_priority(bool);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_prevent_text_chat();
	void clear_has_prevent_text_chat();
	void set_has_prevent_voice_chat();
	void clear_has_prevent_voice_chat();
	void set_has_rank();
	void clear_has_rank();
	void set_has_rank_calibrated();
	void clear_has_rank_calibrated();
	void set_has_low_priority();
	void clear_has_low_priority();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6433
class CMsgDOTARequestBatchPlayerResourcesResponse : public Message {
public:

	static const int kResultsFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTARequestBatchPlayerResourcesResponse * default_instance_;
	CMsgDOTARequestBatchPlayerResourcesResponse();
	virtual ~CMsgDOTARequestBatchPlayerResourcesResponse();
	CMsgDOTARequestBatchPlayerResourcesResponse(const CMsgDOTARequestBatchPlayerResourcesResponse &);
	CMsgDOTARequestBatchPlayerResourcesResponse & operator=(const CMsgDOTARequestBatchPlayerResourcesResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARequestBatchPlayerResourcesResponse & default_instance();
	void Swap(CMsgDOTARequestBatchPlayerResourcesResponse *);
	virtual CMsgDOTARequestBatchPlayerResourcesResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARequestBatchPlayerResourcesResponse &);
	void MergeFrom(const CMsgDOTARequestBatchPlayerResourcesResponse &);
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
	int results_size();
	void clear_results();
	const CMsgDOTARequestBatchPlayerResourcesResponse_Result & results(int);
	CMsgDOTARequestBatchPlayerResourcesResponse_Result * mutable_results(int);
	CMsgDOTARequestBatchPlayerResourcesResponse_Result * add_results();
	const RepeatedPtrField<CMsgDOTARequestBatchPlayerResourcesResponse_Result> & results();
	RepeatedPtrField<CMsgDOTARequestBatchPlayerResourcesResponse_Result> * mutable_results();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6517
class CMsgDOTAPlayerFailedToConnect : public Message {
public:

	static const int kFailedLoadersFieldNumber = 1;
	static const int kAbandonedLoadersFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgDOTAPlayerFailedToConnect * default_instance_;
	CMsgDOTAPlayerFailedToConnect();
	virtual ~CMsgDOTAPlayerFailedToConnect();
	CMsgDOTAPlayerFailedToConnect(const CMsgDOTAPlayerFailedToConnect &);
	CMsgDOTAPlayerFailedToConnect & operator=(const CMsgDOTAPlayerFailedToConnect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAPlayerFailedToConnect & default_instance();
	void Swap(CMsgDOTAPlayerFailedToConnect *);
	virtual CMsgDOTAPlayerFailedToConnect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAPlayerFailedToConnect &);
	void MergeFrom(const CMsgDOTAPlayerFailedToConnect &);
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
	int failed_loaders_size();
	void clear_failed_loaders();
	uint64 failed_loaders(int);
	void set_failed_loaders(int, uint64);
	void add_failed_loaders(uint64);
	const RepeatedField<long unsigned int> & failed_loaders();
	RepeatedField<long unsigned int> * mutable_failed_loaders();
	int abandoned_loaders_size();
	void clear_abandoned_loaders();
	uint64 abandoned_loaders(int);
	void set_abandoned_loaders(int, uint64);
	void add_abandoned_loaders(uint64);
	const RepeatedField<long unsigned int> & abandoned_loaders();
	RepeatedField<long unsigned int> * mutable_abandoned_loaders();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6612
class CMsgGCToRelayConnect : public Message {
public:

	static const int kSourceTvPublicAddrFieldNumber = 1;
	static const int kSourceTvPrivateAddrFieldNumber = 2;
	static const int kSourceTvPortFieldNumber = 3;
	static const int kGameServerSteamIdFieldNumber = 4;
	static const int kParentCountFieldNumber = 5;
	static const int kTvUniqueSecretCodeFieldNumber = 6;
	static const int kSourceTvSteamidFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 source_tv_public_addr_;  // +0x18
	uint32 source_tv_private_addr_;  // +0x1c
	uint64 game_server_steam_id_;  // +0x20
	uint32 source_tv_port_;  // +0x28
	uint32 parent_count_;  // +0x2c
	uint64 tv_unique_secret_code_;  // +0x30
	uint64 source_tv_steamid_;  // +0x38

	static CMsgGCToRelayConnect * default_instance_;
	CMsgGCToRelayConnect();
	virtual ~CMsgGCToRelayConnect();
	CMsgGCToRelayConnect(const CMsgGCToRelayConnect &);
	CMsgGCToRelayConnect & operator=(const CMsgGCToRelayConnect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToRelayConnect & default_instance();
	void Swap(CMsgGCToRelayConnect *);
	virtual CMsgGCToRelayConnect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToRelayConnect &);
	void MergeFrom(const CMsgGCToRelayConnect &);
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
	bool has_source_tv_public_addr();
	void clear_source_tv_public_addr();
	uint32 source_tv_public_addr();
	void set_source_tv_public_addr(uint32);
	bool has_source_tv_private_addr();
	void clear_source_tv_private_addr();
	uint32 source_tv_private_addr();
	void set_source_tv_private_addr(uint32);
	bool has_source_tv_port();
	void clear_source_tv_port();
	uint32 source_tv_port();
	void set_source_tv_port(uint32);
	bool has_game_server_steam_id();
	void clear_game_server_steam_id();
	uint64 game_server_steam_id();
	void set_game_server_steam_id(uint64);
	bool has_parent_count();
	void clear_parent_count();
	uint32 parent_count();
	void set_parent_count(uint32);
	bool has_tv_unique_secret_code();
	void clear_tv_unique_secret_code();
	uint64 tv_unique_secret_code();
	void set_tv_unique_secret_code(uint64);
	bool has_source_tv_steamid();
	void clear_source_tv_steamid();
	uint64 source_tv_steamid();
	void set_source_tv_steamid(uint64);
	void set_has_source_tv_public_addr();
	void clear_has_source_tv_public_addr();
	void set_has_source_tv_private_addr();
	void clear_has_source_tv_private_addr();
	void set_has_source_tv_port();
	void clear_has_source_tv_port();
	void set_has_game_server_steam_id();
	void clear_has_game_server_steam_id();
	void set_has_parent_count();
	void clear_has_parent_count();
	void set_has_tv_unique_secret_code();
	void clear_has_tv_unique_secret_code();
	void set_has_source_tv_steamid();
	void clear_has_source_tv_steamid();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6751
class CMsgGCGCToLANServerRelayConnect : public Message {
public:

	static const int kRelaySteamidFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 relay_steamid_;  // +0x18

	static CMsgGCGCToLANServerRelayConnect * default_instance_;
	CMsgGCGCToLANServerRelayConnect();
	virtual ~CMsgGCGCToLANServerRelayConnect();
	CMsgGCGCToLANServerRelayConnect(const CMsgGCGCToLANServerRelayConnect &);
	CMsgGCGCToLANServerRelayConnect & operator=(const CMsgGCGCToLANServerRelayConnect &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCGCToLANServerRelayConnect & default_instance();
	void Swap(CMsgGCGCToLANServerRelayConnect *);
	virtual CMsgGCGCToLANServerRelayConnect * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCGCToLANServerRelayConnect &);
	void MergeFrom(const CMsgGCGCToLANServerRelayConnect &);
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
	bool has_relay_steamid();
	void clear_relay_steamid();
	uint64 relay_steamid();
	void set_relay_steamid(uint64);
	void set_has_relay_steamid();
	void clear_has_relay_steamid();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6830
class CMsgGCToRelayConnectResponse : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCToRelayConnectResponse * default_instance_;
	CMsgGCToRelayConnectResponse();
	virtual ~CMsgGCToRelayConnectResponse();
	CMsgGCToRelayConnectResponse(const CMsgGCToRelayConnectResponse &);
	CMsgGCToRelayConnectResponse & operator=(const CMsgGCToRelayConnectResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToRelayConnectResponse & default_instance();
	void Swap(CMsgGCToRelayConnectResponse *);
	virtual CMsgGCToRelayConnectResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToRelayConnectResponse &);
	void MergeFrom(const CMsgGCToRelayConnectResponse &);
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
	// sizeof = 24
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6899
class CMsgGCBanStatusRequest : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18

	static CMsgGCBanStatusRequest * default_instance_;
	CMsgGCBanStatusRequest();
	virtual ~CMsgGCBanStatusRequest();
	CMsgGCBanStatusRequest(const CMsgGCBanStatusRequest &);
	CMsgGCBanStatusRequest & operator=(const CMsgGCBanStatusRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCBanStatusRequest & default_instance();
	void Swap(CMsgGCBanStatusRequest *);
	virtual CMsgGCBanStatusRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCBanStatusRequest &);
	void MergeFrom(const CMsgGCBanStatusRequest &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:6978
class CMsgGCBanStatusResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
	static const int kLowPriorityFieldNumber = 2;
	static const int kTextChatBannedFieldNumber = 3;
	static const int kVoiceChatBannedFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 result_;  // +0x18
	bool low_priority_;  // +0x1c
	bool text_chat_banned_;  // +0x1d
	bool voice_chat_banned_;  // +0x1e

	static CMsgGCBanStatusResponse * default_instance_;
	CMsgGCBanStatusResponse();
	virtual ~CMsgGCBanStatusResponse();
	CMsgGCBanStatusResponse(const CMsgGCBanStatusResponse &);
	CMsgGCBanStatusResponse & operator=(const CMsgGCBanStatusResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCBanStatusResponse & default_instance();
	void Swap(CMsgGCBanStatusResponse *);
	virtual CMsgGCBanStatusResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCBanStatusResponse &);
	void MergeFrom(const CMsgGCBanStatusResponse &);
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
	bool has_result();
	void clear_result();
	uint32 result();
	void set_result(uint32);
	bool has_low_priority();
	void clear_low_priority();
	bool low_priority();
	void set_low_priority(bool);
	bool has_text_chat_banned();
	void clear_text_chat_banned();
	bool text_chat_banned();
	void set_text_chat_banned(bool);
	bool has_voice_chat_banned();
	void clear_voice_chat_banned();
	bool voice_chat_banned();
	void set_voice_chat_banned(bool);
	void set_has_result();
	void clear_has_result();
	void set_has_low_priority();
	void clear_has_low_priority();
	void set_has_text_chat_banned();
	void clear_has_text_chat_banned();
	void set_has_voice_chat_banned();
	void clear_has_voice_chat_banned();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7087
class CMsgTournamentItemEvent : public Message {
public:

	static const int kKillerAccountIdFieldNumber = 1;
	static const int kVictimAccountIdFieldNumber = 2;
	static const int kEventTypeFieldNumber = 3;
	static const int kTvDelayFieldNumber = 4;
	static const int kDotaTimeFieldNumber = 5;
	static const int kReplayTimeFieldNumber = 6;
	static const int kLootListFieldNumber = 7;
	static const int kEventTeamFieldNumber = 8;
	static const int kMultiKillCountFieldNumber = 9;
	static const int kWinnerScoreFieldNumber = 10;
	static const int kLoserScoreFieldNumber = 11;
	static const int kHeroStatuesFieldNumber = 12;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 killer_account_id_;  // +0x18
	uint32 victim_account_id_;  // +0x1c
	int event_type_;  // +0x20
	int32 tv_delay_;  // +0x24
	int32 dota_time_;  // +0x28
	float replay_time_;  // +0x2c
	string * loot_list_;  // +0x30
	uint32 event_team_;  // +0x38
	uint32 multi_kill_count_;  // +0x3c
	uint32 winner_score_;  // +0x40
	uint32 loser_score_;  // +0x44

	static CMsgTournamentItemEvent * default_instance_;
	CMsgTournamentItemEvent();
	virtual ~CMsgTournamentItemEvent();
	CMsgTournamentItemEvent(const CMsgTournamentItemEvent &);
	CMsgTournamentItemEvent & operator=(const CMsgTournamentItemEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTournamentItemEvent & default_instance();
	void Swap(CMsgTournamentItemEvent *);
	virtual CMsgTournamentItemEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTournamentItemEvent &);
	void MergeFrom(const CMsgTournamentItemEvent &);
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
	bool has_killer_account_id();
	void clear_killer_account_id();
	uint32 killer_account_id();
	void set_killer_account_id(uint32);
	bool has_victim_account_id();
	void clear_victim_account_id();
	uint32 victim_account_id();
	void set_victim_account_id(uint32);
	bool has_event_type();
	void clear_event_type();
	DOTA_TournamentEvents event_type();
	void set_event_type(DOTA_TournamentEvents);
	bool has_tv_delay();
	void clear_tv_delay();
	int32 tv_delay();
	void set_tv_delay(int32);
	bool has_dota_time();
	void clear_dota_time();
	int32 dota_time();
	void set_dota_time(int32);
	bool has_replay_time();
	void clear_replay_time();
	float replay_time();
	void set_replay_time(float);
	bool has_loot_list();
	void clear_loot_list();
	const string & loot_list();
	void set_loot_list(const string &);
	void set_loot_list(const char *);
	void set_loot_list(const char *, size_t);
	string * mutable_loot_list();
	string * release_loot_list();
	void set_allocated_loot_list(string *);
	bool has_event_team();
	void clear_event_team();
	uint32 event_team();
	void set_event_team(uint32);
	bool has_multi_kill_count();
	void clear_multi_kill_count();
	uint32 multi_kill_count();
	void set_multi_kill_count(uint32);
	bool has_winner_score();
	void clear_winner_score();
	uint32 winner_score();
	void set_winner_score(uint32);
	bool has_loser_score();
	void clear_loser_score();
	uint32 loser_score();
	void set_loser_score(uint32);
	int hero_statues_size();
	void clear_hero_statues();
	const CProtoItemHeroStatue & hero_statues(int);
	CProtoItemHeroStatue * mutable_hero_statues(int);
	CProtoItemHeroStatue * add_hero_statues();
	const RepeatedPtrField<CProtoItemHeroStatue> & hero_statues();
	RepeatedPtrField<CProtoItemHeroStatue> * mutable_hero_statues();
	void set_has_killer_account_id();
	void clear_has_killer_account_id();
	void set_has_victim_account_id();
	void clear_has_victim_account_id();
	void set_has_event_type();
	void clear_has_event_type();
	void set_has_tv_delay();
	void clear_has_tv_delay();
	void set_has_dota_time();
	void clear_has_dota_time();
	void set_has_replay_time();
	void clear_has_replay_time();
	void set_has_loot_list();
	void clear_has_loot_list();
	void set_has_event_team();
	void clear_has_event_team();
	void set_has_multi_kill_count();
	void clear_has_multi_kill_count();
	void set_has_winner_score();
	void clear_has_winner_score();
	void set_has_loser_score();
	void clear_has_loser_score();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7284
class CMsgTournamentItemEventResponse : public Message {
public:

	static const int kEventTypeFieldNumber = 1;
	static const int kViewersGrantedFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int event_type_;  // +0x18
	uint32 viewers_granted_;  // +0x1c

	static CMsgTournamentItemEventResponse * default_instance_;
	CMsgTournamentItemEventResponse();
	virtual ~CMsgTournamentItemEventResponse();
	CMsgTournamentItemEventResponse(const CMsgTournamentItemEventResponse &);
	CMsgTournamentItemEventResponse & operator=(const CMsgTournamentItemEventResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTournamentItemEventResponse & default_instance();
	void Swap(CMsgTournamentItemEventResponse *);
	virtual CMsgTournamentItemEventResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTournamentItemEventResponse &);
	void MergeFrom(const CMsgTournamentItemEventResponse &);
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
	bool has_event_type();
	void clear_event_type();
	DOTA_TournamentEvents event_type();
	void set_event_type(DOTA_TournamentEvents);
	bool has_viewers_granted();
	void clear_viewers_granted();
	uint32 viewers_granted();
	void set_viewers_granted(uint32);
	void set_has_event_type();
	void clear_has_event_type();
	void set_has_viewers_granted();
	void clear_has_viewers_granted();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7373
class CMsgTeamFanfare : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18

	static CMsgTeamFanfare * default_instance_;
	CMsgTeamFanfare();
	virtual ~CMsgTeamFanfare();
	CMsgTeamFanfare(const CMsgTeamFanfare &);
	CMsgTeamFanfare & operator=(const CMsgTeamFanfare &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTeamFanfare & default_instance();
	void Swap(CMsgTeamFanfare *);
	virtual CMsgTeamFanfare * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTeamFanfare &);
	void MergeFrom(const CMsgTeamFanfare &);
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
	void set_has_match_id();
	void clear_has_match_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7452
class CMsgResponseTeamFanfare : public Message {
public:

	static const int kFanfareGoodguysFieldNumber = 1;
	static const int kFanfareBadguysFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 fanfare_goodguys_;  // +0x18
	uint32 fanfare_badguys_;  // +0x1c

	static CMsgResponseTeamFanfare * default_instance_;
	CMsgResponseTeamFanfare();
	virtual ~CMsgResponseTeamFanfare();
	CMsgResponseTeamFanfare(const CMsgResponseTeamFanfare &);
	CMsgResponseTeamFanfare & operator=(const CMsgResponseTeamFanfare &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgResponseTeamFanfare & default_instance();
	void Swap(CMsgResponseTeamFanfare *);
	virtual CMsgResponseTeamFanfare * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgResponseTeamFanfare &);
	void MergeFrom(const CMsgResponseTeamFanfare &);
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
	bool has_fanfare_goodguys();
	void clear_fanfare_goodguys();
	uint32 fanfare_goodguys();
	void set_fanfare_goodguys(uint32);
	bool has_fanfare_badguys();
	void clear_fanfare_badguys();
	uint32 fanfare_badguys();
	void set_fanfare_badguys(uint32);
	void set_has_fanfare_goodguys();
	void clear_has_fanfare_goodguys();
	void set_has_fanfare_badguys();
	void clear_has_fanfare_badguys();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7541
class CMsgGameServerUploadSaveGame : public Message {
public:

	static const int kGameTimeFieldNumber = 1;
	static const int kSaveGameDataFieldNumber = 2;
	static const int kLobbyIdFieldNumber = 3;
	static const int kPlayerSteamIdsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * save_game_data_;  // +0x18
	uint64 lobby_id_;  // +0x20
	uint32 game_time_;  // +0x38

	static CMsgGameServerUploadSaveGame * default_instance_;
	CMsgGameServerUploadSaveGame();
	virtual ~CMsgGameServerUploadSaveGame();
	CMsgGameServerUploadSaveGame(const CMsgGameServerUploadSaveGame &);
	CMsgGameServerUploadSaveGame & operator=(const CMsgGameServerUploadSaveGame &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameServerUploadSaveGame & default_instance();
	void Swap(CMsgGameServerUploadSaveGame *);
	virtual CMsgGameServerUploadSaveGame * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameServerUploadSaveGame &);
	void MergeFrom(const CMsgGameServerUploadSaveGame &);
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
	bool has_save_game_data();
	void clear_save_game_data();
	const string & save_game_data();
	void set_save_game_data(const string &);
	void set_save_game_data(const char *);
	void set_save_game_data(const void *, size_t);
	string * mutable_save_game_data();
	string * release_save_game_data();
	void set_allocated_save_game_data(string *);
	bool has_lobby_id();
	void clear_lobby_id();
	uint64 lobby_id();
	void set_lobby_id(uint64);
	int player_steam_ids_size();
	void clear_player_steam_ids();
	uint64 player_steam_ids(int);
	void set_player_steam_ids(int, uint64);
	void add_player_steam_ids(uint64);
	const RepeatedField<long unsigned int> & player_steam_ids();
	RepeatedField<long unsigned int> * mutable_player_steam_ids();
	void set_has_game_time();
	void clear_has_game_time();
	void set_has_save_game_data();
	void clear_has_save_game_data();
	void set_has_lobby_id();
	void clear_has_lobby_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7658
class CMsgGameServerSaveGameResult : public Message {
public:

	static const CMsgGameServerSaveGameResult_Result SaveSuccessful;
	static const CMsgGameServerSaveGameResult_Result SessionNotFound = 1;
	static const CMsgGameServerSaveGameResult_Result DatabaseError = 2;
	static const CMsgGameServerSaveGameResult_Result TooBig = 3;
	static const CMsgGameServerSaveGameResult_Result Result_MIN;
	static const CMsgGameServerSaveGameResult_Result Result_MAX = 3;
	static const int Result_ARRAYSIZE = 4;
	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int result_;  // +0x18

	static CMsgGameServerSaveGameResult * default_instance_;
	typedef CMsgGameServerSaveGameResult_Result Result;
	CMsgGameServerSaveGameResult();
	virtual ~CMsgGameServerSaveGameResult();
	CMsgGameServerSaveGameResult(const CMsgGameServerSaveGameResult &);
	CMsgGameServerSaveGameResult & operator=(const CMsgGameServerSaveGameResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameServerSaveGameResult & default_instance();
	void Swap(CMsgGameServerSaveGameResult *);
	virtual CMsgGameServerSaveGameResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameServerSaveGameResult &);
	void MergeFrom(const CMsgGameServerSaveGameResult &);
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
	bool Result_IsValid(int);
	const EnumDescriptor * Result_descriptor();
	const string & Result_Name(Result);
	bool Result_Parse(const string &, Result *);
	bool has_result();
	void clear_result();
	CMsgGameServerSaveGameResult_Result result();
	void set_result(CMsgGameServerSaveGameResult_Result);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7763
class CMsgGameServerGetLoadGame : public Message {
public:

	static const int kSaveIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 save_id_;  // +0x18

	static CMsgGameServerGetLoadGame * default_instance_;
	CMsgGameServerGetLoadGame();
	virtual ~CMsgGameServerGetLoadGame();
	CMsgGameServerGetLoadGame(const CMsgGameServerGetLoadGame &);
	CMsgGameServerGetLoadGame & operator=(const CMsgGameServerGetLoadGame &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameServerGetLoadGame & default_instance();
	void Swap(CMsgGameServerGetLoadGame *);
	virtual CMsgGameServerGetLoadGame * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameServerGetLoadGame &);
	void MergeFrom(const CMsgGameServerGetLoadGame &);
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
	bool has_save_id();
	void clear_save_id();
	uint32 save_id();
	void set_save_id(uint32);
	void set_has_save_id();
	void clear_has_save_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7842
class CMsgGameServerGetLoadGameResult : public Message {
public:

	static const int kSaveGameDataFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * save_game_data_;  // +0x18

	static CMsgGameServerGetLoadGameResult * default_instance_;
	CMsgGameServerGetLoadGameResult();
	virtual ~CMsgGameServerGetLoadGameResult();
	CMsgGameServerGetLoadGameResult(const CMsgGameServerGetLoadGameResult &);
	CMsgGameServerGetLoadGameResult & operator=(const CMsgGameServerGetLoadGameResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGameServerGetLoadGameResult & default_instance();
	void Swap(CMsgGameServerGetLoadGameResult *);
	virtual CMsgGameServerGetLoadGameResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGameServerGetLoadGameResult &);
	void MergeFrom(const CMsgGameServerGetLoadGameResult &);
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
	bool has_save_game_data();
	void clear_save_game_data();
	const string & save_game_data();
	void set_save_game_data(const string &);
	void set_save_game_data(const char *);
	void set_save_game_data(const void *, size_t);
	string * mutable_save_game_data();
	string * release_save_game_data();
	void set_allocated_save_game_data(string *);
	void set_has_save_game_data();
	void clear_has_save_game_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:7926
class CMsgDOTAGenerateDiretidePrizeList : public Message {
public:

	static const int kPrizeListFieldNumber = 1;
	static const int kHighestRoshanLevelFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 prize_list_;  // +0x18
	uint32 highest_roshan_level_;  // +0x1c

	static CMsgDOTAGenerateDiretidePrizeList * default_instance_;
	CMsgDOTAGenerateDiretidePrizeList();
	virtual ~CMsgDOTAGenerateDiretidePrizeList();
	CMsgDOTAGenerateDiretidePrizeList(const CMsgDOTAGenerateDiretidePrizeList &);
	CMsgDOTAGenerateDiretidePrizeList & operator=(const CMsgDOTAGenerateDiretidePrizeList &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAGenerateDiretidePrizeList & default_instance();
	void Swap(CMsgDOTAGenerateDiretidePrizeList *);
	virtual CMsgDOTAGenerateDiretidePrizeList * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAGenerateDiretidePrizeList &);
	void MergeFrom(const CMsgDOTAGenerateDiretidePrizeList &);
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
	bool has_prize_list();
	void clear_prize_list();
	uint32 prize_list();
	void set_prize_list(uint32);
	bool has_highest_roshan_level();
	void clear_highest_roshan_level();
	uint32 highest_roshan_level();
	void set_highest_roshan_level(uint32);
	void set_has_prize_list();
	void clear_has_prize_list();
	void set_has_highest_roshan_level();
	void clear_has_highest_roshan_level();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8015
class CMsgDOTAGenerateDiretidePrizeListResponse : public Message {
public:

	static const int kItemDefsFieldNumber = 1;
	static const int kSteamIdsFieldNumber = 2;
	static const int kPrizeListFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 prize_list_;  // +0x38

	static CMsgDOTAGenerateDiretidePrizeListResponse * default_instance_;
	CMsgDOTAGenerateDiretidePrizeListResponse();
	virtual ~CMsgDOTAGenerateDiretidePrizeListResponse();
	CMsgDOTAGenerateDiretidePrizeListResponse(const CMsgDOTAGenerateDiretidePrizeListResponse &);
	CMsgDOTAGenerateDiretidePrizeListResponse & operator=(const CMsgDOTAGenerateDiretidePrizeListResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAGenerateDiretidePrizeListResponse & default_instance();
	void Swap(CMsgDOTAGenerateDiretidePrizeListResponse *);
	virtual CMsgDOTAGenerateDiretidePrizeListResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAGenerateDiretidePrizeListResponse &);
	void MergeFrom(const CMsgDOTAGenerateDiretidePrizeListResponse &);
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
	int item_defs_size();
	void clear_item_defs();
	uint32 item_defs(int);
	void set_item_defs(int, uint32);
	void add_item_defs(uint32);
	const RepeatedField<unsigned int> & item_defs();
	RepeatedField<unsigned int> * mutable_item_defs();
	int steam_ids_size();
	void clear_steam_ids();
	uint64 steam_ids(int);
	void set_steam_ids(int, uint64);
	void add_steam_ids(uint64);
	const RepeatedField<long unsigned int> & steam_ids();
	RepeatedField<long unsigned int> * mutable_steam_ids();
	bool has_prize_list();
	void clear_prize_list();
	uint32 prize_list();
	void set_prize_list(uint32);
	void set_has_prize_list();
	void clear_has_prize_list();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8120
class CMsgDOTARewardDiretidePrizes : public Message {
public:

	static const int kTeamFieldNumber = 1;
	static const int kPrizeListFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 team_;  // +0x18
	uint32 prize_list_;  // +0x1c

	static CMsgDOTARewardDiretidePrizes * default_instance_;
	CMsgDOTARewardDiretidePrizes();
	virtual ~CMsgDOTARewardDiretidePrizes();
	CMsgDOTARewardDiretidePrizes(const CMsgDOTARewardDiretidePrizes &);
	CMsgDOTARewardDiretidePrizes & operator=(const CMsgDOTARewardDiretidePrizes &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTARewardDiretidePrizes & default_instance();
	void Swap(CMsgDOTARewardDiretidePrizes *);
	virtual CMsgDOTARewardDiretidePrizes * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTARewardDiretidePrizes &);
	void MergeFrom(const CMsgDOTARewardDiretidePrizes &);
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
	bool has_prize_list();
	void clear_prize_list();
	uint32 prize_list();
	void set_prize_list(uint32);
	void set_has_team();
	void clear_has_team();
	void set_has_prize_list();
	void clear_has_prize_list();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8209
class CMsgDOTADiretidePrizesRewardedResponse : public Message {
public:

	static const int kPrizeListFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 prize_list_;  // +0x18

	static CMsgDOTADiretidePrizesRewardedResponse * default_instance_;
	CMsgDOTADiretidePrizesRewardedResponse();
	virtual ~CMsgDOTADiretidePrizesRewardedResponse();
	CMsgDOTADiretidePrizesRewardedResponse(const CMsgDOTADiretidePrizesRewardedResponse &);
	CMsgDOTADiretidePrizesRewardedResponse & operator=(const CMsgDOTADiretidePrizesRewardedResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTADiretidePrizesRewardedResponse & default_instance();
	void Swap(CMsgDOTADiretidePrizesRewardedResponse *);
	virtual CMsgDOTADiretidePrizesRewardedResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTADiretidePrizesRewardedResponse &);
	void MergeFrom(const CMsgDOTADiretidePrizesRewardedResponse &);
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
	bool has_prize_list();
	void clear_prize_list();
	uint32 prize_list();
	void set_prize_list(uint32);
	void set_has_prize_list();
	void clear_has_prize_list();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8288
class CMsgDOTAAwardEventPoints_AwardPoints : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPointsFieldNumber = 2;
	static const int kPremiumPointsFieldNumber = 3;
	static const int kTradeBanTimeFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	int32 points_;  // +0x1c
	int32 premium_points_;  // +0x20
	uint32 trade_ban_time_;  // +0x24

	static CMsgDOTAAwardEventPoints_AwardPoints * default_instance_;
	CMsgDOTAAwardEventPoints_AwardPoints();
	virtual ~CMsgDOTAAwardEventPoints_AwardPoints();
	CMsgDOTAAwardEventPoints_AwardPoints(const CMsgDOTAAwardEventPoints_AwardPoints &);
	CMsgDOTAAwardEventPoints_AwardPoints & operator=(const CMsgDOTAAwardEventPoints_AwardPoints &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAAwardEventPoints_AwardPoints & default_instance();
	void Swap(CMsgDOTAAwardEventPoints_AwardPoints *);
	virtual CMsgDOTAAwardEventPoints_AwardPoints * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAAwardEventPoints_AwardPoints &);
	void MergeFrom(const CMsgDOTAAwardEventPoints_AwardPoints &);
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
	bool has_points();
	void clear_points();
	int32 points();
	void set_points(int32);
	bool has_premium_points();
	void clear_premium_points();
	int32 premium_points();
	void set_premium_points(int32);
	bool has_trade_ban_time();
	void clear_trade_ban_time();
	uint32 trade_ban_time();
	void set_trade_ban_time(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_points();
	void clear_has_points();
	void set_has_premium_points();
	void clear_has_premium_points();
	void set_has_trade_ban_time();
	void clear_has_trade_ban_time();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8397
class CMsgDOTAAwardEventPoints : public Message {
public:

	static const int kAwardPointsFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
	static const int kEventIdFieldNumber = 4;
	static const int kTimestampFieldNumber = 5;
	static const int kAuditActionFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x30
	uint32 event_id_;  // +0x38
	uint32 timestamp_;  // +0x3c
	uint32 audit_action_;  // +0x40

	static CMsgDOTAAwardEventPoints * default_instance_;
	CMsgDOTAAwardEventPoints();
	virtual ~CMsgDOTAAwardEventPoints();
	CMsgDOTAAwardEventPoints(const CMsgDOTAAwardEventPoints &);
	CMsgDOTAAwardEventPoints & operator=(const CMsgDOTAAwardEventPoints &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAAwardEventPoints & default_instance();
	void Swap(CMsgDOTAAwardEventPoints *);
	virtual CMsgDOTAAwardEventPoints * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAAwardEventPoints &);
	void MergeFrom(const CMsgDOTAAwardEventPoints &);
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
	int award_points_size();
	void clear_award_points();
	const CMsgDOTAAwardEventPoints_AwardPoints & award_points(int);
	CMsgDOTAAwardEventPoints_AwardPoints * mutable_award_points(int);
	CMsgDOTAAwardEventPoints_AwardPoints * add_award_points();
	const RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints> & award_points();
	RepeatedPtrField<CMsgDOTAAwardEventPoints_AwardPoints> * mutable_award_points();
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_timestamp();
	void clear_timestamp();
	uint32 timestamp();
	void set_timestamp(uint32);
	bool has_audit_action();
	void clear_audit_action();
	uint32 audit_action();
	void set_audit_action(uint32);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_timestamp();
	void clear_has_timestamp();
	void set_has_audit_action();
	void clear_has_audit_action();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8521
class CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops : public Message {
public:

	static const int kLootListFieldNumber = 1;
	static const int kPlayerAccountIdsFieldNumber = 2;
	static const int kNoTradeFieldNumber = 3;
	static const int kRandomizeRewardFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * loot_list_;  // +0x18
	bool no_trade_;  // +0x30
	bool randomize_reward_;  // +0x31

	static CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops * default_instance_;
	CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops();
	virtual ~CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops();
	CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops(const CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops &);
	CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops & operator=(const CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops & default_instance();
	void Swap(CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops *);
	virtual CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops &);
	void MergeFrom(const CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops &);
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
	bool has_loot_list();
	void clear_loot_list();
	const string & loot_list();
	void set_loot_list(const string &);
	void set_loot_list(const char *);
	void set_loot_list(const char *, size_t);
	string * mutable_loot_list();
	string * release_loot_list();
	void set_allocated_loot_list(string *);
	int player_account_ids_size();
	void clear_player_account_ids();
	uint32 player_account_ids(int);
	void set_player_account_ids(int, uint32);
	void add_player_account_ids(uint32);
	const RepeatedField<unsigned int> & player_account_ids();
	RepeatedField<unsigned int> * mutable_player_account_ids();
	bool has_no_trade();
	void clear_no_trade();
	bool no_trade();
	void set_no_trade(bool);
	bool has_randomize_reward();
	void clear_randomize_reward();
	bool randomize_reward();
	void set_randomize_reward(bool);
	void set_has_loot_list();
	void clear_has_loot_list();
	void set_has_no_trade();
	void clear_has_no_trade();
	void set_has_randomize_reward();
	void clear_has_randomize_reward();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8638
class CMsgServerToGCSignoutAwardAdditionalDrops : public Message {
public:

	static const int kDropsFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x30

	static CMsgServerToGCSignoutAwardAdditionalDrops * default_instance_;
	CMsgServerToGCSignoutAwardAdditionalDrops();
	virtual ~CMsgServerToGCSignoutAwardAdditionalDrops();
	CMsgServerToGCSignoutAwardAdditionalDrops(const CMsgServerToGCSignoutAwardAdditionalDrops &);
	CMsgServerToGCSignoutAwardAdditionalDrops & operator=(const CMsgServerToGCSignoutAwardAdditionalDrops &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCSignoutAwardAdditionalDrops & default_instance();
	void Swap(CMsgServerToGCSignoutAwardAdditionalDrops *);
	virtual CMsgServerToGCSignoutAwardAdditionalDrops * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCSignoutAwardAdditionalDrops &);
	void MergeFrom(const CMsgServerToGCSignoutAwardAdditionalDrops &);
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
	int drops_size();
	void clear_drops();
	const CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops & drops(int);
	CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops * mutable_drops(int);
	CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops * add_drops();
	const RepeatedPtrField<CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops> & drops();
	RepeatedPtrField<CMsgServerToGCSignoutAwardAdditionalDrops_AdditionalDrops> * mutable_drops();
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	void set_has_match_id();
	void clear_has_match_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8732
class CMsgDOTAFrostivusTimeElapsed_User : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kTimeElapsedSFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 time_elapsed_s_;  // +0x1c

	static CMsgDOTAFrostivusTimeElapsed_User * default_instance_;
	CMsgDOTAFrostivusTimeElapsed_User();
	virtual ~CMsgDOTAFrostivusTimeElapsed_User();
	CMsgDOTAFrostivusTimeElapsed_User(const CMsgDOTAFrostivusTimeElapsed_User &);
	CMsgDOTAFrostivusTimeElapsed_User & operator=(const CMsgDOTAFrostivusTimeElapsed_User &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAFrostivusTimeElapsed_User & default_instance();
	void Swap(CMsgDOTAFrostivusTimeElapsed_User *);
	virtual CMsgDOTAFrostivusTimeElapsed_User * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAFrostivusTimeElapsed_User &);
	void MergeFrom(const CMsgDOTAFrostivusTimeElapsed_User &);
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
	bool has_time_elapsed_s();
	void clear_time_elapsed_s();
	uint32 time_elapsed_s();
	void set_time_elapsed_s(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_time_elapsed_s();
	void clear_has_time_elapsed_s();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8821
class CMsgDOTAFrostivusTimeElapsed : public Message {
public:

	static const int kSecondsFieldNumber = 1;
	static const int kUsersFieldNumber = 2;
	static const int kMatchIdFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x30
	uint32 seconds_;  // +0x38

	static CMsgDOTAFrostivusTimeElapsed * default_instance_;
	CMsgDOTAFrostivusTimeElapsed();
	virtual ~CMsgDOTAFrostivusTimeElapsed();
	CMsgDOTAFrostivusTimeElapsed(const CMsgDOTAFrostivusTimeElapsed &);
	CMsgDOTAFrostivusTimeElapsed & operator=(const CMsgDOTAFrostivusTimeElapsed &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgDOTAFrostivusTimeElapsed & default_instance();
	void Swap(CMsgDOTAFrostivusTimeElapsed *);
	virtual CMsgDOTAFrostivusTimeElapsed * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgDOTAFrostivusTimeElapsed &);
	void MergeFrom(const CMsgDOTAFrostivusTimeElapsed &);
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
	bool has_seconds();
	void clear_seconds();
	uint32 seconds();
	void set_seconds(uint32);
	int users_size();
	void clear_users();
	const CMsgDOTAFrostivusTimeElapsed_User & users(int);
	CMsgDOTAFrostivusTimeElapsed_User * mutable_users(int);
	CMsgDOTAFrostivusTimeElapsed_User * add_users();
	const RepeatedPtrField<CMsgDOTAFrostivusTimeElapsed_User> & users();
	RepeatedPtrField<CMsgDOTAFrostivusTimeElapsed_User> * mutable_users();
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	void set_has_seconds();
	void clear_has_seconds();
	void set_has_match_id();
	void clear_has_match_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:8925
class CMsgGCToServerPingRequest : public Message {
public:

	static const int kRequestIdFieldNumber = 1;
	static const int kRequestTimeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 request_id_;  // +0x18
	uint64 request_time_;  // +0x20

	static CMsgGCToServerPingRequest * default_instance_;
	CMsgGCToServerPingRequest();
	virtual ~CMsgGCToServerPingRequest();
	CMsgGCToServerPingRequest(const CMsgGCToServerPingRequest &);
	CMsgGCToServerPingRequest & operator=(const CMsgGCToServerPingRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToServerPingRequest & default_instance();
	void Swap(CMsgGCToServerPingRequest *);
	virtual CMsgGCToServerPingRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToServerPingRequest &);
	void MergeFrom(const CMsgGCToServerPingRequest &);
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
	bool has_request_id();
	void clear_request_id();
	uint64 request_id();
	void set_request_id(uint64);
	bool has_request_time();
	void clear_request_time();
	uint64 request_time();
	void set_request_time(uint64);
	void set_has_request_id();
	void clear_has_request_id();
	void set_has_request_time();
	void clear_has_request_time();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9014
class CMsgGCToServerPingResponse : public Message {
public:

	static const int kRequestIdFieldNumber = 1;
	static const int kRequestTimeFieldNumber = 2;
	static const int kClusterFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 request_id_;  // +0x18
	uint64 request_time_;  // +0x20
	uint32 cluster_;  // +0x28

	static CMsgGCToServerPingResponse * default_instance_;
	CMsgGCToServerPingResponse();
	virtual ~CMsgGCToServerPingResponse();
	CMsgGCToServerPingResponse(const CMsgGCToServerPingResponse &);
	CMsgGCToServerPingResponse & operator=(const CMsgGCToServerPingResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToServerPingResponse & default_instance();
	void Swap(CMsgGCToServerPingResponse *);
	virtual CMsgGCToServerPingResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToServerPingResponse &);
	void MergeFrom(const CMsgGCToServerPingResponse &);
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
	bool has_request_id();
	void clear_request_id();
	uint64 request_id();
	void set_request_id(uint64);
	bool has_request_time();
	void clear_request_time();
	uint64 request_time();
	void set_request_time(uint64);
	bool has_cluster();
	void clear_cluster();
	uint32 cluster();
	void set_cluster(uint32);
	void set_has_request_id();
	void clear_has_request_id();
	void set_has_request_time();
	void clear_has_request_time();
	void set_has_cluster();
	void clear_has_cluster();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9113
class CMsgGCToServerConsoleCommand : public Message {
public:

	static const int kConsoleCommandFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * console_command_;  // +0x18

	static CMsgGCToServerConsoleCommand * default_instance_;
	CMsgGCToServerConsoleCommand();
	virtual ~CMsgGCToServerConsoleCommand();
	CMsgGCToServerConsoleCommand(const CMsgGCToServerConsoleCommand &);
	CMsgGCToServerConsoleCommand & operator=(const CMsgGCToServerConsoleCommand &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToServerConsoleCommand & default_instance();
	void Swap(CMsgGCToServerConsoleCommand *);
	virtual CMsgGCToServerConsoleCommand * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToServerConsoleCommand &);
	void MergeFrom(const CMsgGCToServerConsoleCommand &);
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
	bool has_console_command();
	void clear_console_command();
	const string & console_command();
	void set_console_command(const string &);
	void set_console_command(const char *);
	void set_console_command(const char *, size_t);
	string * mutable_console_command();
	string * release_console_command();
	void set_allocated_console_command(string *);
	void set_has_console_command();
	void clear_has_console_command();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9197
class CMsgServerGetEventPoints : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kAccountIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x28

	static CMsgServerGetEventPoints * default_instance_;
	CMsgServerGetEventPoints();
	virtual ~CMsgServerGetEventPoints();
	CMsgServerGetEventPoints(const CMsgServerGetEventPoints &);
	CMsgServerGetEventPoints & operator=(const CMsgServerGetEventPoints &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerGetEventPoints & default_instance();
	void Swap(CMsgServerGetEventPoints *);
	virtual CMsgServerGetEventPoints * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerGetEventPoints &);
	void MergeFrom(const CMsgServerGetEventPoints &);
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
	int account_id_size();
	void clear_account_id();
	uint32 account_id(int);
	void set_account_id(int, uint32);
	void add_account_id(uint32);
	const RepeatedField<unsigned int> & account_id();
	RepeatedField<unsigned int> * mutable_account_id();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9289
class CMsgServerGetEventPointsResponse_Points : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPointsTotalFieldNumber = 2;
	static const int kOwnedFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 points_total_;  // +0x1c
	bool owned_;  // +0x20

	static CMsgServerGetEventPointsResponse_Points * default_instance_;
	CMsgServerGetEventPointsResponse_Points();
	virtual ~CMsgServerGetEventPointsResponse_Points();
	CMsgServerGetEventPointsResponse_Points(const CMsgServerGetEventPointsResponse_Points &);
	CMsgServerGetEventPointsResponse_Points & operator=(const CMsgServerGetEventPointsResponse_Points &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerGetEventPointsResponse_Points & default_instance();
	void Swap(CMsgServerGetEventPointsResponse_Points *);
	virtual CMsgServerGetEventPointsResponse_Points * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerGetEventPointsResponse_Points &);
	void MergeFrom(const CMsgServerGetEventPointsResponse_Points &);
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
	bool has_points_total();
	void clear_points_total();
	uint32 points_total();
	void set_points_total(uint32);
	bool has_owned();
	void clear_owned();
	bool owned();
	void set_owned(bool);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_points_total();
	void clear_has_points_total();
	void set_has_owned();
	void clear_has_owned();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9388
class CMsgServerGetEventPointsResponse : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kPointsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x30

	static CMsgServerGetEventPointsResponse * default_instance_;
	CMsgServerGetEventPointsResponse();
	virtual ~CMsgServerGetEventPointsResponse();
	CMsgServerGetEventPointsResponse(const CMsgServerGetEventPointsResponse &);
	CMsgServerGetEventPointsResponse & operator=(const CMsgServerGetEventPointsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerGetEventPointsResponse & default_instance();
	void Swap(CMsgServerGetEventPointsResponse *);
	virtual CMsgServerGetEventPointsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerGetEventPointsResponse &);
	void MergeFrom(const CMsgServerGetEventPointsResponse &);
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
	int points_size();
	void clear_points();
	const CMsgServerGetEventPointsResponse_Points & points(int);
	CMsgServerGetEventPointsResponse_Points * mutable_points(int);
	CMsgServerGetEventPointsResponse_Points * add_points();
	const RepeatedPtrField<CMsgServerGetEventPointsResponse_Points> & points();
	RepeatedPtrField<CMsgServerGetEventPointsResponse_Points> * mutable_points();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9482
class CMsgServerGrantSurveyPermission_Survey : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kQuestionIdFieldNumber = 2;
	static const int kExpireTimeFieldNumber = 3;
	static const int kSurveyKeyFieldNumber = 4;
	static const int kExtraDataFieldNumber = 5;
	static const int kExtraData32FieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 question_id_;  // +0x1c
	uint64 survey_key_;  // +0x20
	uint64 extra_data_;  // +0x28
	uint64 extra_data_32_;  // +0x30
	uint32 expire_time_;  // +0x38

	static CMsgServerGrantSurveyPermission_Survey * default_instance_;
	CMsgServerGrantSurveyPermission_Survey();
	virtual ~CMsgServerGrantSurveyPermission_Survey();
	CMsgServerGrantSurveyPermission_Survey(const CMsgServerGrantSurveyPermission_Survey &);
	CMsgServerGrantSurveyPermission_Survey & operator=(const CMsgServerGrantSurveyPermission_Survey &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerGrantSurveyPermission_Survey & default_instance();
	void Swap(CMsgServerGrantSurveyPermission_Survey *);
	virtual CMsgServerGrantSurveyPermission_Survey * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerGrantSurveyPermission_Survey &);
	void MergeFrom(const CMsgServerGrantSurveyPermission_Survey &);
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
	bool has_question_id();
	void clear_question_id();
	uint32 question_id();
	void set_question_id(uint32);
	bool has_expire_time();
	void clear_expire_time();
	uint32 expire_time();
	void set_expire_time(uint32);
	bool has_survey_key();
	void clear_survey_key();
	uint64 survey_key();
	void set_survey_key(uint64);
	bool has_extra_data();
	void clear_extra_data();
	uint64 extra_data();
	void set_extra_data(uint64);
	bool has_extra_data_32();
	void clear_extra_data_32();
	uint64 extra_data_32();
	void set_extra_data_32(uint64);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_question_id();
	void clear_has_question_id();
	void set_has_expire_time();
	void clear_has_expire_time();
	void set_has_survey_key();
	void clear_has_survey_key();
	void set_has_extra_data();
	void clear_has_extra_data();
	void set_has_extra_data_32();
	void clear_has_extra_data_32();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9611
class CMsgServerGrantSurveyPermission : public Message {
public:

	static const int kSurveysFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerGrantSurveyPermission * default_instance_;
	CMsgServerGrantSurveyPermission();
	virtual ~CMsgServerGrantSurveyPermission();
	CMsgServerGrantSurveyPermission(const CMsgServerGrantSurveyPermission &);
	CMsgServerGrantSurveyPermission & operator=(const CMsgServerGrantSurveyPermission &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerGrantSurveyPermission & default_instance();
	void Swap(CMsgServerGrantSurveyPermission *);
	virtual CMsgServerGrantSurveyPermission * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerGrantSurveyPermission &);
	void MergeFrom(const CMsgServerGrantSurveyPermission &);
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
	int surveys_size();
	void clear_surveys();
	const CMsgServerGrantSurveyPermission_Survey & surveys(int);
	CMsgServerGrantSurveyPermission_Survey * mutable_surveys(int);
	CMsgServerGrantSurveyPermission_Survey * add_surveys();
	const RepeatedPtrField<CMsgServerGrantSurveyPermission_Survey> & surveys();
	RepeatedPtrField<CMsgServerGrantSurveyPermission_Survey> * mutable_surveys();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9695
class CMsgServerGrantSurveyPermissionResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 result_;  // +0x18

	static CMsgServerGrantSurveyPermissionResponse * default_instance_;
	CMsgServerGrantSurveyPermissionResponse();
	virtual ~CMsgServerGrantSurveyPermissionResponse();
	CMsgServerGrantSurveyPermissionResponse(const CMsgServerGrantSurveyPermissionResponse &);
	CMsgServerGrantSurveyPermissionResponse & operator=(const CMsgServerGrantSurveyPermissionResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerGrantSurveyPermissionResponse & default_instance();
	void Swap(CMsgServerGrantSurveyPermissionResponse *);
	virtual CMsgServerGrantSurveyPermissionResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerGrantSurveyPermissionResponse &);
	void MergeFrom(const CMsgServerGrantSurveyPermissionResponse &);
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
	bool has_result();
	void clear_result();
	uint32 result();
	void set_result(uint32);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9774
class CMsgServerToGCMatchConnectionStats_Player : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kIpFieldNumber = 2;
	static const int kAvgPingMsFieldNumber = 3;
	static const int kPacketLossFieldNumber = 5;
	static const int kPingDeviationFieldNumber = 6;
	static const int kFullResendsFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 ip_;  // +0x1c
	uint32 avg_ping_ms_;  // +0x20
	float packet_loss_;  // +0x24
	float ping_deviation_;  // +0x28
	uint32 full_resends_;  // +0x2c

	static CMsgServerToGCMatchConnectionStats_Player * default_instance_;
	CMsgServerToGCMatchConnectionStats_Player();
	virtual ~CMsgServerToGCMatchConnectionStats_Player();
	CMsgServerToGCMatchConnectionStats_Player(const CMsgServerToGCMatchConnectionStats_Player &);
	CMsgServerToGCMatchConnectionStats_Player & operator=(const CMsgServerToGCMatchConnectionStats_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCMatchConnectionStats_Player & default_instance();
	void Swap(CMsgServerToGCMatchConnectionStats_Player *);
	virtual CMsgServerToGCMatchConnectionStats_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCMatchConnectionStats_Player &);
	void MergeFrom(const CMsgServerToGCMatchConnectionStats_Player &);
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
	bool has_ip();
	void clear_ip();
	uint32 ip();
	void set_ip(uint32);
	bool has_avg_ping_ms();
	void clear_avg_ping_ms();
	uint32 avg_ping_ms();
	void set_avg_ping_ms(uint32);
	bool has_packet_loss();
	void clear_packet_loss();
	float packet_loss();
	void set_packet_loss(float);
	bool has_ping_deviation();
	void clear_ping_deviation();
	float ping_deviation();
	void set_ping_deviation(float);
	bool has_full_resends();
	void clear_full_resends();
	uint32 full_resends();
	void set_full_resends(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_ip();
	void clear_has_ip();
	void set_has_avg_ping_ms();
	void clear_has_avg_ping_ms();
	void set_has_packet_loss();
	void clear_has_packet_loss();
	void set_has_ping_deviation();
	void clear_has_ping_deviation();
	void set_has_full_resends();
	void clear_has_full_resends();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:9903
class CMsgServerToGCMatchConnectionStats : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kRegionIdFieldNumber = 2;
	static const int kLeagueIdFieldNumber = 3;
	static const int kPlayersFieldNumber = 4;
	static const int kClusterIdFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 region_id_;  // +0x20
	uint32 league_id_;  // +0x24
	uint32 cluster_id_;  // +0x40

	static CMsgServerToGCMatchConnectionStats * default_instance_;
	CMsgServerToGCMatchConnectionStats();
	virtual ~CMsgServerToGCMatchConnectionStats();
	CMsgServerToGCMatchConnectionStats(const CMsgServerToGCMatchConnectionStats &);
	CMsgServerToGCMatchConnectionStats & operator=(const CMsgServerToGCMatchConnectionStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCMatchConnectionStats & default_instance();
	void Swap(CMsgServerToGCMatchConnectionStats *);
	virtual CMsgServerToGCMatchConnectionStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCMatchConnectionStats &);
	void MergeFrom(const CMsgServerToGCMatchConnectionStats &);
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
	bool has_region_id();
	void clear_region_id();
	uint32 region_id();
	void set_region_id(uint32);
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	int players_size();
	void clear_players();
	const CMsgServerToGCMatchConnectionStats_Player & players(int);
	CMsgServerToGCMatchConnectionStats_Player * mutable_players(int);
	CMsgServerToGCMatchConnectionStats_Player * add_players();
	const RepeatedPtrField<CMsgServerToGCMatchConnectionStats_Player> & players();
	RepeatedPtrField<CMsgServerToGCMatchConnectionStats_Player> * mutable_players();
	bool has_cluster_id();
	void clear_cluster_id();
	uint32 cluster_id();
	void set_cluster_id(uint32);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_region_id();
	void clear_has_region_id();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_cluster_id();
	void clear_has_cluster_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10027
class CMsgServerGCUpdateSpectatorCount : public Message {
public:

	static const int kSpectatorCountFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 spectator_count_;  // +0x18

	static CMsgServerGCUpdateSpectatorCount * default_instance_;
	CMsgServerGCUpdateSpectatorCount();
	virtual ~CMsgServerGCUpdateSpectatorCount();
	CMsgServerGCUpdateSpectatorCount(const CMsgServerGCUpdateSpectatorCount &);
	CMsgServerGCUpdateSpectatorCount & operator=(const CMsgServerGCUpdateSpectatorCount &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerGCUpdateSpectatorCount & default_instance();
	void Swap(CMsgServerGCUpdateSpectatorCount *);
	virtual CMsgServerGCUpdateSpectatorCount * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerGCUpdateSpectatorCount &);
	void MergeFrom(const CMsgServerGCUpdateSpectatorCount &);
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
	bool has_spectator_count();
	void clear_spectator_count();
	uint32 spectator_count();
	void set_spectator_count(uint32);
	void set_has_spectator_count();
	void clear_has_spectator_count();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10106
class CSerializedCombatLog_Dictionary_DictString : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * value_;  // +0x18
	uint32 id_;  // +0x20

	static CSerializedCombatLog_Dictionary_DictString * default_instance_;
	CSerializedCombatLog_Dictionary_DictString();
	virtual ~CSerializedCombatLog_Dictionary_DictString();
	CSerializedCombatLog_Dictionary_DictString(const CSerializedCombatLog_Dictionary_DictString &);
	CSerializedCombatLog_Dictionary_DictString & operator=(const CSerializedCombatLog_Dictionary_DictString &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSerializedCombatLog_Dictionary_DictString & default_instance();
	void Swap(CSerializedCombatLog_Dictionary_DictString *);
	virtual CSerializedCombatLog_Dictionary_DictString * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSerializedCombatLog_Dictionary_DictString &);
	void MergeFrom(const CSerializedCombatLog_Dictionary_DictString &);
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
	bool has_value();
	void clear_value();
	const string & value();
	void set_value(const string &);
	void set_value(const char *);
	void set_value(const char *, size_t);
	string * mutable_value();
	string * release_value();
	void set_allocated_value(string *);
	void set_has_id();
	void clear_has_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10200
class CSerializedCombatLog_Dictionary : public Message {
public:

	static const int kStringsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CSerializedCombatLog_Dictionary * default_instance_;
	CSerializedCombatLog_Dictionary();
	virtual ~CSerializedCombatLog_Dictionary();
	CSerializedCombatLog_Dictionary(const CSerializedCombatLog_Dictionary &);
	CSerializedCombatLog_Dictionary & operator=(const CSerializedCombatLog_Dictionary &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSerializedCombatLog_Dictionary & default_instance();
	void Swap(CSerializedCombatLog_Dictionary *);
	virtual CSerializedCombatLog_Dictionary * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSerializedCombatLog_Dictionary &);
	void MergeFrom(const CSerializedCombatLog_Dictionary &);
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
	int strings_size();
	void clear_strings();
	const CSerializedCombatLog_Dictionary_DictString & strings(int);
	CSerializedCombatLog_Dictionary_DictString * mutable_strings(int);
	CSerializedCombatLog_Dictionary_DictString * add_strings();
	const RepeatedPtrField<CSerializedCombatLog_Dictionary_DictString> & strings();
	RepeatedPtrField<CSerializedCombatLog_Dictionary_DictString> * mutable_strings();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10284
class CSerializedCombatLog : public Message {
public:

	static const int kVersionFieldNumber = 1;
	static const int kDictionaryFieldNumber = 2;
	static const int kEntriesFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 version_;  // +0x38

	static CSerializedCombatLog * default_instance_;
	CSerializedCombatLog();
	virtual ~CSerializedCombatLog();
	CSerializedCombatLog(const CSerializedCombatLog &);
	CSerializedCombatLog & operator=(const CSerializedCombatLog &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CSerializedCombatLog & default_instance();
	void Swap(CSerializedCombatLog *);
	virtual CSerializedCombatLog * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CSerializedCombatLog &);
	void MergeFrom(const CSerializedCombatLog &);
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
	bool has_version();
	void clear_version();
	uint32 version();
	void set_version(uint32);
	bool has_dictionary();
	void clear_dictionary();
	const CSerializedCombatLog_Dictionary & dictionary();
	CSerializedCombatLog_Dictionary * mutable_dictionary();
	CSerializedCombatLog_Dictionary * release_dictionary();
	void set_allocated_dictionary(CSerializedCombatLog_Dictionary *);
	int entries_size();
	void clear_entries();
	const CMsgDOTACombatLogEntry & entries(int);
	CMsgDOTACombatLogEntry * mutable_entries(int);
	CMsgDOTACombatLogEntry * add_entries();
	const RepeatedPtrField<CMsgDOTACombatLogEntry> & entries();
	RepeatedPtrField<CMsgDOTACombatLogEntry> * mutable_entries();
	void set_has_version();
	void clear_has_version();
	void set_has_dictionary();
	void clear_has_dictionary();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10390
class CMsgServerToGCGetAdditionalEquips : public Message {
public:

	static const int kAccountIdsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerToGCGetAdditionalEquips * default_instance_;
	CMsgServerToGCGetAdditionalEquips();
	virtual ~CMsgServerToGCGetAdditionalEquips();
	CMsgServerToGCGetAdditionalEquips(const CMsgServerToGCGetAdditionalEquips &);
	CMsgServerToGCGetAdditionalEquips & operator=(const CMsgServerToGCGetAdditionalEquips &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCGetAdditionalEquips & default_instance();
	void Swap(CMsgServerToGCGetAdditionalEquips *);
	virtual CMsgServerToGCGetAdditionalEquips * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCGetAdditionalEquips &);
	void MergeFrom(const CMsgServerToGCGetAdditionalEquips &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10472
class CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kEquipsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x30

	static CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips * default_instance_;
	CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips();
	virtual ~CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips();
	CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips(const CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips &);
	CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips & operator=(const CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips & default_instance();
	void Swap(CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips *);
	virtual CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips &);
	void MergeFrom(const CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips &);
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
	int equips_size();
	void clear_equips();
	const CAdditionalEquipSlot & equips(int);
	CAdditionalEquipSlot * mutable_equips(int);
	CAdditionalEquipSlot * add_equips();
	const RepeatedPtrField<CAdditionalEquipSlot> & equips();
	RepeatedPtrField<CAdditionalEquipSlot> * mutable_equips();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10564
class CMsgServerToGCGetAdditionalEquipsResponse : public Message {
public:

	static const int kEquipsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerToGCGetAdditionalEquipsResponse * default_instance_;
	CMsgServerToGCGetAdditionalEquipsResponse();
	virtual ~CMsgServerToGCGetAdditionalEquipsResponse();
	CMsgServerToGCGetAdditionalEquipsResponse(const CMsgServerToGCGetAdditionalEquipsResponse &);
	CMsgServerToGCGetAdditionalEquipsResponse & operator=(const CMsgServerToGCGetAdditionalEquipsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCGetAdditionalEquipsResponse & default_instance();
	void Swap(CMsgServerToGCGetAdditionalEquipsResponse *);
	virtual CMsgServerToGCGetAdditionalEquipsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCGetAdditionalEquipsResponse &);
	void MergeFrom(const CMsgServerToGCGetAdditionalEquipsResponse &);
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
	int equips_size();
	void clear_equips();
	const CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips & equips(int);
	CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips * mutable_equips(int);
	CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips * add_equips();
	const RepeatedPtrField<CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips> & equips();
	RepeatedPtrField<CMsgServerToGCGetAdditionalEquipsResponse_CUserEquips> * mutable_equips();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10648
class CMsgServerToGCGetProfileCard : public Message {
public:

	static const int kAccountIdsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerToGCGetProfileCard * default_instance_;
	CMsgServerToGCGetProfileCard();
	virtual ~CMsgServerToGCGetProfileCard();
	CMsgServerToGCGetProfileCard(const CMsgServerToGCGetProfileCard &);
	CMsgServerToGCGetProfileCard & operator=(const CMsgServerToGCGetProfileCard &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCGetProfileCard & default_instance();
	void Swap(CMsgServerToGCGetProfileCard *);
	virtual CMsgServerToGCGetProfileCard * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCGetProfileCard &);
	void MergeFrom(const CMsgServerToGCGetProfileCard &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10730
class CMsgServerToGCGetProfileCardResponse : public Message {
public:

	static const int kCardsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerToGCGetProfileCardResponse * default_instance_;
	CMsgServerToGCGetProfileCardResponse();
	virtual ~CMsgServerToGCGetProfileCardResponse();
	CMsgServerToGCGetProfileCardResponse(const CMsgServerToGCGetProfileCardResponse &);
	CMsgServerToGCGetProfileCardResponse & operator=(const CMsgServerToGCGetProfileCardResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCGetProfileCardResponse & default_instance();
	void Swap(CMsgServerToGCGetProfileCardResponse *);
	virtual CMsgServerToGCGetProfileCardResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCGetProfileCardResponse &);
	void MergeFrom(const CMsgServerToGCGetProfileCardResponse &);
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
	int cards_size();
	void clear_cards();
	const CMsgDOTAProfileCard & cards(int);
	CMsgDOTAProfileCard * mutable_cards(int);
	CMsgDOTAProfileCard * add_cards();
	const RepeatedPtrField<CMsgDOTAProfileCard> & cards();
	RepeatedPtrField<CMsgDOTAProfileCard> * mutable_cards();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10812
class CMsgServerToGCVictoryPredictions_Record : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
	static const int kItemIdsFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 account_id_;  // +0x30

	static CMsgServerToGCVictoryPredictions_Record * default_instance_;
	CMsgServerToGCVictoryPredictions_Record();
	virtual ~CMsgServerToGCVictoryPredictions_Record();
	CMsgServerToGCVictoryPredictions_Record(const CMsgServerToGCVictoryPredictions_Record &);
	CMsgServerToGCVictoryPredictions_Record & operator=(const CMsgServerToGCVictoryPredictions_Record &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCVictoryPredictions_Record & default_instance();
	void Swap(CMsgServerToGCVictoryPredictions_Record *);
	virtual CMsgServerToGCVictoryPredictions_Record * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCVictoryPredictions_Record &);
	void MergeFrom(const CMsgServerToGCVictoryPredictions_Record &);
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
	int item_ids_size();
	void clear_item_ids();
	uint64 item_ids(int);
	void set_item_ids(int, uint64);
	void add_item_ids(uint64);
	const RepeatedField<long unsigned int> & item_ids();
	RepeatedField<long unsigned int> * mutable_item_ids();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10914
class CMsgServerToGCVictoryPredictions : public Message {
public:

	static const int kRecordsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerToGCVictoryPredictions * default_instance_;
	CMsgServerToGCVictoryPredictions();
	virtual ~CMsgServerToGCVictoryPredictions();
	CMsgServerToGCVictoryPredictions(const CMsgServerToGCVictoryPredictions &);
	CMsgServerToGCVictoryPredictions & operator=(const CMsgServerToGCVictoryPredictions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCVictoryPredictions & default_instance();
	void Swap(CMsgServerToGCVictoryPredictions *);
	virtual CMsgServerToGCVictoryPredictions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCVictoryPredictions &);
	void MergeFrom(const CMsgServerToGCVictoryPredictions &);
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
	int records_size();
	void clear_records();
	const CMsgServerToGCVictoryPredictions_Record & records(int);
	CMsgServerToGCVictoryPredictions_Record * mutable_records(int);
	CMsgServerToGCVictoryPredictions_Record * add_records();
	const RepeatedPtrField<CMsgServerToGCVictoryPredictions_Record> & records();
	RepeatedPtrField<CMsgServerToGCVictoryPredictions_Record> * mutable_records();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:10998
class CMsgSuspiciousActivity : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kActivityFieldNumber = 2;
	static const int kIntdata1FieldNumber = 3;
	static const int kIntdata2FieldNumber = 4;
	static const int kTimeFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	int activity_;  // +0x1c
	int32 intdata1_;  // +0x20
	int32 intdata2_;  // +0x24
	uint32 time_;  // +0x28

	static CMsgSuspiciousActivity * default_instance_;
	CMsgSuspiciousActivity();
	virtual ~CMsgSuspiciousActivity();
	CMsgSuspiciousActivity(const CMsgSuspiciousActivity &);
	CMsgSuspiciousActivity & operator=(const CMsgSuspiciousActivity &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSuspiciousActivity & default_instance();
	void Swap(CMsgSuspiciousActivity *);
	virtual CMsgSuspiciousActivity * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSuspiciousActivity &);
	void MergeFrom(const CMsgSuspiciousActivity &);
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
	bool has_activity();
	void clear_activity();
	ESuspiciousActivity activity();
	void set_activity(ESuspiciousActivity);
	bool has_intdata1();
	void clear_intdata1();
	int32 intdata1();
	void set_intdata1(int32);
	bool has_intdata2();
	void clear_intdata2();
	int32 intdata2();
	void set_intdata2(int32);
	bool has_time();
	void clear_time();
	uint32 time();
	void set_time(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_activity();
	void clear_has_activity();
	void set_has_intdata1();
	void clear_has_intdata1();
	void set_has_intdata2();
	void clear_has_intdata2();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11117
class CMsgServerToGCRequestStatus : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgServerToGCRequestStatus * default_instance_;
	CMsgServerToGCRequestStatus();
	virtual ~CMsgServerToGCRequestStatus();
	CMsgServerToGCRequestStatus(const CMsgServerToGCRequestStatus &);
	CMsgServerToGCRequestStatus & operator=(const CMsgServerToGCRequestStatus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCRequestStatus & default_instance();
	void Swap(CMsgServerToGCRequestStatus *);
	virtual CMsgServerToGCRequestStatus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCRequestStatus &);
	void MergeFrom(const CMsgServerToGCRequestStatus &);
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
	// sizeof = 24
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11186
class CMsgServerToGCRequestStatus_Response : public Message {
public:

	static const int kResponseFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 response_;  // +0x18

	static CMsgServerToGCRequestStatus_Response * default_instance_;
	CMsgServerToGCRequestStatus_Response();
	virtual ~CMsgServerToGCRequestStatus_Response();
	CMsgServerToGCRequestStatus_Response(const CMsgServerToGCRequestStatus_Response &);
	CMsgServerToGCRequestStatus_Response & operator=(const CMsgServerToGCRequestStatus_Response &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCRequestStatus_Response & default_instance();
	void Swap(CMsgServerToGCRequestStatus_Response *);
	virtual CMsgServerToGCRequestStatus_Response * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCRequestStatus_Response &);
	void MergeFrom(const CMsgServerToGCRequestStatus_Response &);
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
	bool has_response();
	void clear_response();
	uint32 response();
	void set_response(uint32);
	void set_has_response();
	void clear_has_response();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11265
class CMsgSignOutAssassinMiniGameInfo : public Message {
public:

	static const int kWinningPlayersFieldNumber = 1;
	static const int kLosingPlayersFieldNumber = 2;
	static const int kArcanaOwnersFieldNumber = 3;
	static const int kAssassinWonFieldNumber = 4;
	static const int kTargetHeroIdFieldNumber = 5;
	static const int kContractCompletedFieldNumber = 6;
	static const int kContractCompleteTimeFieldNumber = 7;
	static const int kPaIsRadiantFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 target_hero_id_;  // +0x48
	bool assassin_won_;  // +0x4c
	bool contract_completed_;  // +0x4d
	bool pa_is_radiant_;  // +0x4e

	float contract_complete_time_;  // +0x50

	static CMsgSignOutAssassinMiniGameInfo * default_instance_;
	CMsgSignOutAssassinMiniGameInfo();
	virtual ~CMsgSignOutAssassinMiniGameInfo();
	CMsgSignOutAssassinMiniGameInfo(const CMsgSignOutAssassinMiniGameInfo &);
	CMsgSignOutAssassinMiniGameInfo & operator=(const CMsgSignOutAssassinMiniGameInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutAssassinMiniGameInfo & default_instance();
	void Swap(CMsgSignOutAssassinMiniGameInfo *);
	virtual CMsgSignOutAssassinMiniGameInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutAssassinMiniGameInfo &);
	void MergeFrom(const CMsgSignOutAssassinMiniGameInfo &);
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
	int winning_players_size();
	void clear_winning_players();
	uint64 winning_players(int);
	void set_winning_players(int, uint64);
	void add_winning_players(uint64);
	const RepeatedField<long unsigned int> & winning_players();
	RepeatedField<long unsigned int> * mutable_winning_players();
	int losing_players_size();
	void clear_losing_players();
	uint64 losing_players(int);
	void set_losing_players(int, uint64);
	void add_losing_players(uint64);
	const RepeatedField<long unsigned int> & losing_players();
	RepeatedField<long unsigned int> * mutable_losing_players();
	int arcana_owners_size();
	void clear_arcana_owners();
	uint64 arcana_owners(int);
	void set_arcana_owners(int, uint64);
	void add_arcana_owners(uint64);
	const RepeatedField<long unsigned int> & arcana_owners();
	RepeatedField<long unsigned int> * mutable_arcana_owners();
	bool has_assassin_won();
	void clear_assassin_won();
	bool assassin_won();
	void set_assassin_won(bool);
	bool has_target_hero_id();
	void clear_target_hero_id();
	uint32 target_hero_id();
	void set_target_hero_id(uint32);
	bool has_contract_completed();
	void clear_contract_completed();
	bool contract_completed();
	void set_contract_completed(bool);
	bool has_contract_complete_time();
	void clear_contract_complete_time();
	float contract_complete_time();
	void set_contract_complete_time(float);
	bool has_pa_is_radiant();
	void clear_pa_is_radiant();
	bool pa_is_radiant();
	void set_pa_is_radiant(bool);
	void set_has_assassin_won();
	void clear_has_assassin_won();
	void set_has_target_hero_id();
	void clear_has_target_hero_id();
	void set_has_contract_completed();
	void clear_has_contract_completed();
	void set_has_contract_complete_time();
	void clear_has_contract_complete_time();
	void set_has_pa_is_radiant();
	void clear_has_pa_is_radiant();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11423
class CMsgServerToGCGetIngameEventData : public Message {
public:

	static const int kEventFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int event_;  // +0x18

	static CMsgServerToGCGetIngameEventData * default_instance_;
	CMsgServerToGCGetIngameEventData();
	virtual ~CMsgServerToGCGetIngameEventData();
	CMsgServerToGCGetIngameEventData(const CMsgServerToGCGetIngameEventData &);
	CMsgServerToGCGetIngameEventData & operator=(const CMsgServerToGCGetIngameEventData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCGetIngameEventData & default_instance();
	void Swap(CMsgServerToGCGetIngameEventData *);
	virtual CMsgServerToGCGetIngameEventData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCGetIngameEventData &);
	void MergeFrom(const CMsgServerToGCGetIngameEventData &);
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
	EEvent event();
	void set_event(EEvent);
	void set_has_event();
	void clear_has_event();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11502
class CMsgGCToServerIngameEventDataOraclePA : public Message {
public:

	static const int kTargetHeroIdsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgGCToServerIngameEventDataOraclePA * default_instance_;
	CMsgGCToServerIngameEventDataOraclePA();
	virtual ~CMsgGCToServerIngameEventDataOraclePA();
	CMsgGCToServerIngameEventDataOraclePA(const CMsgGCToServerIngameEventDataOraclePA &);
	CMsgGCToServerIngameEventDataOraclePA & operator=(const CMsgGCToServerIngameEventDataOraclePA &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToServerIngameEventDataOraclePA & default_instance();
	void Swap(CMsgGCToServerIngameEventDataOraclePA *);
	virtual CMsgGCToServerIngameEventDataOraclePA * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToServerIngameEventDataOraclePA &);
	void MergeFrom(const CMsgGCToServerIngameEventDataOraclePA &);
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
	int target_hero_ids_size();
	void clear_target_hero_ids();
	uint32 target_hero_ids(int);
	void set_target_hero_ids(int, uint32);
	void add_target_hero_ids(uint32);
	const RepeatedField<unsigned int> & target_hero_ids();
	RepeatedField<unsigned int> * mutable_target_hero_ids();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11584
class CMsgServerToGCKillSummaries_KillSummary : public Message {
public:

	static const int kKillerHeroIdFieldNumber = 1;
	static const int kVictimHeroIdFieldNumber = 2;
	static const int kKillCountFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 killer_hero_id_;  // +0x18
	uint32 victim_hero_id_;  // +0x1c
	uint32 kill_count_;  // +0x20

	static CMsgServerToGCKillSummaries_KillSummary * default_instance_;
	CMsgServerToGCKillSummaries_KillSummary();
	virtual ~CMsgServerToGCKillSummaries_KillSummary();
	CMsgServerToGCKillSummaries_KillSummary(const CMsgServerToGCKillSummaries_KillSummary &);
	CMsgServerToGCKillSummaries_KillSummary & operator=(const CMsgServerToGCKillSummaries_KillSummary &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCKillSummaries_KillSummary & default_instance();
	void Swap(CMsgServerToGCKillSummaries_KillSummary *);
	virtual CMsgServerToGCKillSummaries_KillSummary * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCKillSummaries_KillSummary &);
	void MergeFrom(const CMsgServerToGCKillSummaries_KillSummary &);
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
	bool has_killer_hero_id();
	void clear_killer_hero_id();
	uint32 killer_hero_id();
	void set_killer_hero_id(uint32);
	bool has_victim_hero_id();
	void clear_victim_hero_id();
	uint32 victim_hero_id();
	void set_victim_hero_id(uint32);
	bool has_kill_count();
	void clear_kill_count();
	uint32 kill_count();
	void set_kill_count(uint32);
	void set_has_killer_hero_id();
	void clear_has_killer_hero_id();
	void set_has_victim_hero_id();
	void clear_has_victim_hero_id();
	void set_has_kill_count();
	void clear_has_kill_count();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11683
class CMsgServerToGCKillSummaries : public Message {
public:

	static const int kIngameeventIdFieldNumber = 1;
	static const int kSummariesFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ingameevent_id_;  // +0x30

	static CMsgServerToGCKillSummaries * default_instance_;
	CMsgServerToGCKillSummaries();
	virtual ~CMsgServerToGCKillSummaries();
	CMsgServerToGCKillSummaries(const CMsgServerToGCKillSummaries &);
	CMsgServerToGCKillSummaries & operator=(const CMsgServerToGCKillSummaries &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCKillSummaries & default_instance();
	void Swap(CMsgServerToGCKillSummaries *);
	virtual CMsgServerToGCKillSummaries * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCKillSummaries &);
	void MergeFrom(const CMsgServerToGCKillSummaries &);
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
	bool has_ingameevent_id();
	void clear_ingameevent_id();
	uint32 ingameevent_id();
	void set_ingameevent_id(uint32);
	int summaries_size();
	void clear_summaries();
	const CMsgServerToGCKillSummaries_KillSummary & summaries(int);
	CMsgServerToGCKillSummaries_KillSummary * mutable_summaries(int);
	CMsgServerToGCKillSummaries_KillSummary * add_summaries();
	const RepeatedPtrField<CMsgServerToGCKillSummaries_KillSummary> & summaries();
	RepeatedPtrField<CMsgServerToGCKillSummaries_KillSummary> * mutable_summaries();
	void set_has_ingameevent_id();
	void clear_has_ingameevent_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11777
class CMsgGCToServerPredictionResult_Prediction : public Message {
public:

	static const CMsgGCToServerPredictionResult_Prediction_EResult k_eResult_ItemGranted = 1;
	static const CMsgGCToServerPredictionResult_Prediction_EResult k_eResult_Destroyed = 2;
	static const CMsgGCToServerPredictionResult_Prediction_EResult EResult_MIN = 1;
	static const CMsgGCToServerPredictionResult_Prediction_EResult EResult_MAX = 2;
	static const int EResult_ARRAYSIZE = 3;
	static const int kItemDefFieldNumber = 1;
	static const int kNumCorrectFieldNumber = 2;
	static const int kNumFailsFieldNumber = 3;
	static const int kResultFieldNumber = 4;
	static const int kGrantedItemDefsFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_def_;  // +0x18
	uint32 num_correct_;  // +0x1c
	uint32 num_fails_;  // +0x20
	int result_;  // +0x24

	static CMsgGCToServerPredictionResult_Prediction * default_instance_;
	typedef CMsgGCToServerPredictionResult_Prediction_EResult EResult;
	CMsgGCToServerPredictionResult_Prediction();
	virtual ~CMsgGCToServerPredictionResult_Prediction();
	CMsgGCToServerPredictionResult_Prediction(const CMsgGCToServerPredictionResult_Prediction &);
	CMsgGCToServerPredictionResult_Prediction & operator=(const CMsgGCToServerPredictionResult_Prediction &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToServerPredictionResult_Prediction & default_instance();
	void Swap(CMsgGCToServerPredictionResult_Prediction *);
	virtual CMsgGCToServerPredictionResult_Prediction * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToServerPredictionResult_Prediction &);
	void MergeFrom(const CMsgGCToServerPredictionResult_Prediction &);
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
	bool has_item_def();
	void clear_item_def();
	uint32 item_def();
	void set_item_def(uint32);
	bool has_num_correct();
	void clear_num_correct();
	uint32 num_correct();
	void set_num_correct(uint32);
	bool has_num_fails();
	void clear_num_fails();
	uint32 num_fails();
	void set_num_fails(uint32);
	bool has_result();
	void clear_result();
	CMsgGCToServerPredictionResult_Prediction_EResult result();
	void set_result(CMsgGCToServerPredictionResult_Prediction_EResult);
	int granted_item_defs_size();
	void clear_granted_item_defs();
	uint32 granted_item_defs(int);
	void set_granted_item_defs(int, uint32);
	void add_granted_item_defs(uint32);
	const RepeatedField<unsigned int> & granted_item_defs();
	RepeatedField<unsigned int> * mutable_granted_item_defs();
	void set_has_item_def();
	void clear_has_item_def();
	void set_has_num_correct();
	void clear_has_num_correct();
	void set_has_num_fails();
	void clear_has_num_fails();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:11923
class CMsgGCToServerPredictionResult : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
	static const int kCorrectFieldNumber = 3;
	static const int kPredictionsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 account_id_;  // +0x20
	bool correct_;  // +0x24

	static CMsgGCToServerPredictionResult * default_instance_;
	CMsgGCToServerPredictionResult();
	virtual ~CMsgGCToServerPredictionResult();
	CMsgGCToServerPredictionResult(const CMsgGCToServerPredictionResult &);
	CMsgGCToServerPredictionResult & operator=(const CMsgGCToServerPredictionResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToServerPredictionResult & default_instance();
	void Swap(CMsgGCToServerPredictionResult *);
	virtual CMsgGCToServerPredictionResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToServerPredictionResult &);
	void MergeFrom(const CMsgGCToServerPredictionResult &);
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
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_correct();
	void clear_correct();
	bool correct();
	void set_correct(bool);
	int predictions_size();
	void clear_predictions();
	const CMsgGCToServerPredictionResult_Prediction & predictions(int);
	CMsgGCToServerPredictionResult_Prediction * mutable_predictions(int);
	CMsgGCToServerPredictionResult_Prediction * add_predictions();
	const RepeatedPtrField<CMsgGCToServerPredictionResult_Prediction> & predictions();
	RepeatedPtrField<CMsgGCToServerPredictionResult_Prediction> * mutable_predictions();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_correct();
	void clear_has_correct();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12037
class CMsgServerToGCLockCharmTrading : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kItemIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 item_id_;  // +0x18
	uint32 account_id_;  // +0x20

	static CMsgServerToGCLockCharmTrading * default_instance_;
	CMsgServerToGCLockCharmTrading();
	virtual ~CMsgServerToGCLockCharmTrading();
	CMsgServerToGCLockCharmTrading(const CMsgServerToGCLockCharmTrading &);
	CMsgServerToGCLockCharmTrading & operator=(const CMsgServerToGCLockCharmTrading &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCLockCharmTrading & default_instance();
	void Swap(CMsgServerToGCLockCharmTrading *);
	virtual CMsgServerToGCLockCharmTrading * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCLockCharmTrading &);
	void MergeFrom(const CMsgServerToGCLockCharmTrading &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12126
class CMsgSignOutUpdatePlayerChallenge_Challenge : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kSequenceIdFieldNumber = 3;
	static const int kProgressFieldNumber = 4;
	static const int kChallengeRankFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x18
	uint32 sequence_id_;  // +0x1c
	uint32 progress_;  // +0x20
	uint32 challenge_rank_;  // +0x24

	static CMsgSignOutUpdatePlayerChallenge_Challenge * default_instance_;
	CMsgSignOutUpdatePlayerChallenge_Challenge();
	virtual ~CMsgSignOutUpdatePlayerChallenge_Challenge();
	CMsgSignOutUpdatePlayerChallenge_Challenge(const CMsgSignOutUpdatePlayerChallenge_Challenge &);
	CMsgSignOutUpdatePlayerChallenge_Challenge & operator=(const CMsgSignOutUpdatePlayerChallenge_Challenge &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutUpdatePlayerChallenge_Challenge & default_instance();
	void Swap(CMsgSignOutUpdatePlayerChallenge_Challenge *);
	virtual CMsgSignOutUpdatePlayerChallenge_Challenge * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutUpdatePlayerChallenge_Challenge &);
	void MergeFrom(const CMsgSignOutUpdatePlayerChallenge_Challenge &);
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
	bool has_progress();
	void clear_progress();
	uint32 progress();
	void set_progress(uint32);
	bool has_challenge_rank();
	void clear_challenge_rank();
	uint32 challenge_rank();
	void set_challenge_rank(uint32);
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_sequence_id();
	void clear_has_sequence_id();
	void set_has_progress();
	void clear_has_progress();
	void set_has_challenge_rank();
	void clear_has_challenge_rank();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12235
class CMsgSignOutUpdatePlayerChallenge : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kCompletedFieldNumber = 2;
	static const int kRerolledFieldNumber = 3;
	static const int kMatchIdFieldNumber = 4;
	static const int kHeroIdFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x48
	uint32 hero_id_;  // +0x4c
	uint64 match_id_;  // +0x50

	static CMsgSignOutUpdatePlayerChallenge * default_instance_;
	CMsgSignOutUpdatePlayerChallenge();
	virtual ~CMsgSignOutUpdatePlayerChallenge();
	CMsgSignOutUpdatePlayerChallenge(const CMsgSignOutUpdatePlayerChallenge &);
	CMsgSignOutUpdatePlayerChallenge & operator=(const CMsgSignOutUpdatePlayerChallenge &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutUpdatePlayerChallenge & default_instance();
	void Swap(CMsgSignOutUpdatePlayerChallenge *);
	virtual CMsgSignOutUpdatePlayerChallenge * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutUpdatePlayerChallenge &);
	void MergeFrom(const CMsgSignOutUpdatePlayerChallenge &);
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
	int completed_size();
	void clear_completed();
	const CMsgSignOutUpdatePlayerChallenge_Challenge & completed(int);
	CMsgSignOutUpdatePlayerChallenge_Challenge * mutable_completed(int);
	CMsgSignOutUpdatePlayerChallenge_Challenge * add_completed();
	const RepeatedPtrField<CMsgSignOutUpdatePlayerChallenge_Challenge> & completed();
	RepeatedPtrField<CMsgSignOutUpdatePlayerChallenge_Challenge> * mutable_completed();
	int rerolled_size();
	void clear_rerolled();
	const CMsgSignOutUpdatePlayerChallenge_Challenge & rerolled(int);
	CMsgSignOutUpdatePlayerChallenge_Challenge * mutable_rerolled(int);
	CMsgSignOutUpdatePlayerChallenge_Challenge * add_rerolled();
	const RepeatedPtrField<CMsgSignOutUpdatePlayerChallenge_Challenge> & rerolled();
	RepeatedPtrField<CMsgSignOutUpdatePlayerChallenge_Challenge> * mutable_rerolled();
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_match_id();
	void clear_has_match_id();
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
	// sizeof = 88
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12362
class CMsgServerToGCRerollPlayerChallenge : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kRerollMsgFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x20

	static CMsgServerToGCRerollPlayerChallenge * default_instance_;
	CMsgServerToGCRerollPlayerChallenge();
	virtual ~CMsgServerToGCRerollPlayerChallenge();
	CMsgServerToGCRerollPlayerChallenge(const CMsgServerToGCRerollPlayerChallenge &);
	CMsgServerToGCRerollPlayerChallenge & operator=(const CMsgServerToGCRerollPlayerChallenge &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCRerollPlayerChallenge & default_instance();
	void Swap(CMsgServerToGCRerollPlayerChallenge *);
	virtual CMsgServerToGCRerollPlayerChallenge * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCRerollPlayerChallenge &);
	void MergeFrom(const CMsgServerToGCRerollPlayerChallenge &);
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
	bool has_reroll_msg();
	void clear_reroll_msg();
	const CMsgClientToGCRerollPlayerChallenge & reroll_msg();
	CMsgClientToGCRerollPlayerChallenge * mutable_reroll_msg();
	CMsgClientToGCRerollPlayerChallenge * release_reroll_msg();
	void set_allocated_reroll_msg(CMsgClientToGCRerollPlayerChallenge *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_reroll_msg();
	void clear_has_reroll_msg();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12453
class CMsgServerToGCHoldEventPoints_HoldRequest : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPointsHeldFieldNumber = 2;
	static const int kPremiumHeldFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 points_held_;  // +0x1c
	uint32 premium_held_;  // +0x20

	static CMsgServerToGCHoldEventPoints_HoldRequest * default_instance_;
	CMsgServerToGCHoldEventPoints_HoldRequest();
	virtual ~CMsgServerToGCHoldEventPoints_HoldRequest();
	CMsgServerToGCHoldEventPoints_HoldRequest(const CMsgServerToGCHoldEventPoints_HoldRequest &);
	CMsgServerToGCHoldEventPoints_HoldRequest & operator=(const CMsgServerToGCHoldEventPoints_HoldRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCHoldEventPoints_HoldRequest & default_instance();
	void Swap(CMsgServerToGCHoldEventPoints_HoldRequest *);
	virtual CMsgServerToGCHoldEventPoints_HoldRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCHoldEventPoints_HoldRequest &);
	void MergeFrom(const CMsgServerToGCHoldEventPoints_HoldRequest &);
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
	bool has_points_held();
	void clear_points_held();
	uint32 points_held();
	void set_points_held(uint32);
	bool has_premium_held();
	void clear_premium_held();
	uint32 premium_held();
	void set_premium_held(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_points_held();
	void clear_has_points_held();
	void set_has_premium_held();
	void clear_has_premium_held();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12552
class CMsgServerToGCHoldEventPoints : public Message {
public:

	static const int kHoldsFieldNumber = 1;
	static const int kEventIdFieldNumber = 2;
	static const int kHoldKeyFieldNumber = 3;
	static const int kHoldUntilFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 hold_key_;  // +0x30
	uint32 event_id_;  // +0x38
	uint32 hold_until_;  // +0x3c

	static CMsgServerToGCHoldEventPoints * default_instance_;
	CMsgServerToGCHoldEventPoints();
	virtual ~CMsgServerToGCHoldEventPoints();
	CMsgServerToGCHoldEventPoints(const CMsgServerToGCHoldEventPoints &);
	CMsgServerToGCHoldEventPoints & operator=(const CMsgServerToGCHoldEventPoints &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCHoldEventPoints & default_instance();
	void Swap(CMsgServerToGCHoldEventPoints *);
	virtual CMsgServerToGCHoldEventPoints * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCHoldEventPoints &);
	void MergeFrom(const CMsgServerToGCHoldEventPoints &);
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
	int holds_size();
	void clear_holds();
	const CMsgServerToGCHoldEventPoints_HoldRequest & holds(int);
	CMsgServerToGCHoldEventPoints_HoldRequest * mutable_holds(int);
	CMsgServerToGCHoldEventPoints_HoldRequest * add_holds();
	const RepeatedPtrField<CMsgServerToGCHoldEventPoints_HoldRequest> & holds();
	RepeatedPtrField<CMsgServerToGCHoldEventPoints_HoldRequest> * mutable_holds();
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_hold_key();
	void clear_hold_key();
	uint64 hold_key();
	void set_hold_key(uint64);
	bool has_hold_until();
	void clear_hold_until();
	uint32 hold_until();
	void set_hold_until(uint32);
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_hold_key();
	void clear_has_hold_key();
	void set_has_hold_until();
	void clear_has_hold_until();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12666
class CMsgSignOutReleaseEventPointHolds : public Message {
public:

	static const int kAccountIdsFieldNumber = 1;
	static const int kEventIdFieldNumber = 2;
	static const int kHoldKeyFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 hold_key_;  // +0x28
	uint32 event_id_;  // +0x30

	static CMsgSignOutReleaseEventPointHolds * default_instance_;
	CMsgSignOutReleaseEventPointHolds();
	virtual ~CMsgSignOutReleaseEventPointHolds();
	CMsgSignOutReleaseEventPointHolds(const CMsgSignOutReleaseEventPointHolds &);
	CMsgSignOutReleaseEventPointHolds & operator=(const CMsgSignOutReleaseEventPointHolds &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutReleaseEventPointHolds & default_instance();
	void Swap(CMsgSignOutReleaseEventPointHolds *);
	virtual CMsgSignOutReleaseEventPointHolds * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutReleaseEventPointHolds &);
	void MergeFrom(const CMsgSignOutReleaseEventPointHolds &);
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
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_hold_key();
	void clear_hold_key();
	uint64 hold_key();
	void set_hold_key(uint64);
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_hold_key();
	void clear_has_hold_key();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12768
class CMsgGCToServerUpdateBroadcastCheers : public Message {
public:

	static const int kTimeStampFieldNumber = 1;
	static const int kTeam1CheersFieldNumber = 2;
	static const int kTeam2CheersFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 time_stamp_;  // +0x18
	uint32 team_1_cheers_;  // +0x1c
	uint32 team_2_cheers_;  // +0x20

	static CMsgGCToServerUpdateBroadcastCheers * default_instance_;
	CMsgGCToServerUpdateBroadcastCheers();
	virtual ~CMsgGCToServerUpdateBroadcastCheers();
	CMsgGCToServerUpdateBroadcastCheers(const CMsgGCToServerUpdateBroadcastCheers &);
	CMsgGCToServerUpdateBroadcastCheers & operator=(const CMsgGCToServerUpdateBroadcastCheers &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgGCToServerUpdateBroadcastCheers & default_instance();
	void Swap(CMsgGCToServerUpdateBroadcastCheers *);
	virtual CMsgGCToServerUpdateBroadcastCheers * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgGCToServerUpdateBroadcastCheers &);
	void MergeFrom(const CMsgGCToServerUpdateBroadcastCheers &);
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
	bool has_time_stamp();
	void clear_time_stamp();
	uint32 time_stamp();
	void set_time_stamp(uint32);
	bool has_team_1_cheers();
	void clear_team_1_cheers();
	uint32 team_1_cheers();
	void set_team_1_cheers(uint32);
	bool has_team_2_cheers();
	void clear_team_2_cheers();
	uint32 team_2_cheers();
	void set_team_2_cheers(uint32);
	void set_has_time_stamp();
	void clear_has_time_stamp();
	void set_has_team_1_cheers();
	void clear_has_team_1_cheers();
	void set_has_team_2_cheers();
	void clear_has_team_2_cheers();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12867
class CMsgSignOutWagerStats_Player : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kWinningsFieldNumber = 2;
	static const int kMaxWagerFieldNumber = 3;
	static const int kWagerFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 winnings_;  // +0x1c
	uint32 max_wager_;  // +0x20
	uint32 wager_;  // +0x24

	static CMsgSignOutWagerStats_Player * default_instance_;
	CMsgSignOutWagerStats_Player();
	virtual ~CMsgSignOutWagerStats_Player();
	CMsgSignOutWagerStats_Player(const CMsgSignOutWagerStats_Player &);
	CMsgSignOutWagerStats_Player & operator=(const CMsgSignOutWagerStats_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutWagerStats_Player & default_instance();
	void Swap(CMsgSignOutWagerStats_Player *);
	virtual CMsgSignOutWagerStats_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutWagerStats_Player &);
	void MergeFrom(const CMsgSignOutWagerStats_Player &);
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
	bool has_winnings();
	void clear_winnings();
	uint32 winnings();
	void set_winnings(uint32);
	bool has_max_wager();
	void clear_max_wager();
	uint32 max_wager();
	void set_max_wager(uint32);
	bool has_wager();
	void clear_wager();
	uint32 wager();
	void set_wager(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_winnings();
	void clear_has_winnings();
	void set_has_max_wager();
	void clear_has_max_wager();
	void set_has_wager();
	void clear_has_wager();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:12976
class CMsgSignOutWagerStats : public Message {
public:

	static const int kPlayersFieldNumber = 1;
	static const int kEventIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x30

	static CMsgSignOutWagerStats * default_instance_;
	CMsgSignOutWagerStats();
	virtual ~CMsgSignOutWagerStats();
	CMsgSignOutWagerStats(const CMsgSignOutWagerStats &);
	CMsgSignOutWagerStats & operator=(const CMsgSignOutWagerStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutWagerStats & default_instance();
	void Swap(CMsgSignOutWagerStats *);
	virtual CMsgSignOutWagerStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutWagerStats &);
	void MergeFrom(const CMsgSignOutWagerStats &);
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
	int players_size();
	void clear_players();
	const CMsgSignOutWagerStats_Player & players(int);
	CMsgSignOutWagerStats_Player * mutable_players(int);
	CMsgSignOutWagerStats_Player * add_players();
	const RepeatedPtrField<CMsgSignOutWagerStats_Player> & players();
	RepeatedPtrField<CMsgSignOutWagerStats_Player> * mutable_players();
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13070
class CMsgSignOutXPCoins_Player : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kXpGainedFieldNumber = 2;
	static const int kCoinsSpentFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 xp_gained_;  // +0x1c
	uint32 coins_spent_;  // +0x20

	static CMsgSignOutXPCoins_Player * default_instance_;
	CMsgSignOutXPCoins_Player();
	virtual ~CMsgSignOutXPCoins_Player();
	CMsgSignOutXPCoins_Player(const CMsgSignOutXPCoins_Player &);
	CMsgSignOutXPCoins_Player & operator=(const CMsgSignOutXPCoins_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutXPCoins_Player & default_instance();
	void Swap(CMsgSignOutXPCoins_Player *);
	virtual CMsgSignOutXPCoins_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutXPCoins_Player &);
	void MergeFrom(const CMsgSignOutXPCoins_Player &);
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
	bool has_xp_gained();
	void clear_xp_gained();
	uint32 xp_gained();
	void set_xp_gained(uint32);
	bool has_coins_spent();
	void clear_coins_spent();
	uint32 coins_spent();
	void set_coins_spent(uint32);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_xp_gained();
	void clear_has_xp_gained();
	void set_has_coins_spent();
	void clear_has_coins_spent();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13169
class CMsgSignOutXPCoins : public Message {
public:

	static const int kPlayersFieldNumber = 1;
	static const int kEventIdFieldNumber = 2;
	static const int kMatchIdFieldNumber = 3;
	static const int kTimestampFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x30
	uint32 event_id_;  // +0x38
	uint32 timestamp_;  // +0x3c

	static CMsgSignOutXPCoins * default_instance_;
	CMsgSignOutXPCoins();
	virtual ~CMsgSignOutXPCoins();
	CMsgSignOutXPCoins(const CMsgSignOutXPCoins &);
	CMsgSignOutXPCoins & operator=(const CMsgSignOutXPCoins &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutXPCoins & default_instance();
	void Swap(CMsgSignOutXPCoins *);
	virtual CMsgSignOutXPCoins * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutXPCoins &);
	void MergeFrom(const CMsgSignOutXPCoins &);
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
	int players_size();
	void clear_players();
	const CMsgSignOutXPCoins_Player & players(int);
	CMsgSignOutXPCoins_Player * mutable_players(int);
	CMsgSignOutXPCoins_Player * add_players();
	const RepeatedPtrField<CMsgSignOutXPCoins_Player> & players();
	RepeatedPtrField<CMsgSignOutXPCoins_Player> * mutable_players();
	bool has_event_id();
	void clear_event_id();
	uint32 event_id();
	void set_event_id(uint32);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_timestamp();
	void clear_timestamp();
	uint32 timestamp();
	void set_timestamp(uint32);
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_timestamp();
	void clear_has_timestamp();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13283
class CMsgSignOutCommunityGoalProgress_EventGoalIncrement : public Message {
public:

	static const int kEventGoalIdFieldNumber = 1;
	static const int kIncrementAmountFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_goal_id_;  // +0x18
	uint32 increment_amount_;  // +0x1c

	static CMsgSignOutCommunityGoalProgress_EventGoalIncrement * default_instance_;
	CMsgSignOutCommunityGoalProgress_EventGoalIncrement();
	virtual ~CMsgSignOutCommunityGoalProgress_EventGoalIncrement();
	CMsgSignOutCommunityGoalProgress_EventGoalIncrement(const CMsgSignOutCommunityGoalProgress_EventGoalIncrement &);
	CMsgSignOutCommunityGoalProgress_EventGoalIncrement & operator=(const CMsgSignOutCommunityGoalProgress_EventGoalIncrement &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutCommunityGoalProgress_EventGoalIncrement & default_instance();
	void Swap(CMsgSignOutCommunityGoalProgress_EventGoalIncrement *);
	virtual CMsgSignOutCommunityGoalProgress_EventGoalIncrement * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutCommunityGoalProgress_EventGoalIncrement &);
	void MergeFrom(const CMsgSignOutCommunityGoalProgress_EventGoalIncrement &);
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
	bool has_event_goal_id();
	void clear_event_goal_id();
	uint32 event_goal_id();
	void set_event_goal_id(uint32);
	bool has_increment_amount();
	void clear_increment_amount();
	uint32 increment_amount();
	void set_increment_amount(uint32);
	void set_has_event_goal_id();
	void clear_has_event_goal_id();
	void set_has_increment_amount();
	void clear_has_increment_amount();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13372
class CMsgSignOutCommunityGoalProgress : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kEventIncrementsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 event_id_;  // +0x30

	static CMsgSignOutCommunityGoalProgress * default_instance_;
	CMsgSignOutCommunityGoalProgress();
	virtual ~CMsgSignOutCommunityGoalProgress();
	CMsgSignOutCommunityGoalProgress(const CMsgSignOutCommunityGoalProgress &);
	CMsgSignOutCommunityGoalProgress & operator=(const CMsgSignOutCommunityGoalProgress &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgSignOutCommunityGoalProgress & default_instance();
	void Swap(CMsgSignOutCommunityGoalProgress *);
	virtual CMsgSignOutCommunityGoalProgress * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgSignOutCommunityGoalProgress &);
	void MergeFrom(const CMsgSignOutCommunityGoalProgress &);
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
	int event_increments_size();
	void clear_event_increments();
	const CMsgSignOutCommunityGoalProgress_EventGoalIncrement & event_increments(int);
	CMsgSignOutCommunityGoalProgress_EventGoalIncrement * mutable_event_increments(int);
	CMsgSignOutCommunityGoalProgress_EventGoalIncrement * add_event_increments();
	const RepeatedPtrField<CMsgSignOutCommunityGoalProgress_EventGoalIncrement> & event_increments();
	RepeatedPtrField<CMsgSignOutCommunityGoalProgress_EventGoalIncrement> * mutable_event_increments();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13466
class CMsgServerToGCPostMatchTip : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
	static const int kTipperAccountIdFieldNumber = 3;
	static const int kRecipientAccountIdFieldNumber = 4;
	static const int kTipAmountFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 event_id_;  // +0x20
	uint32 tipper_account_id_;  // +0x24
	uint32 recipient_account_id_;  // +0x28
	uint32 tip_amount_;  // +0x2c

	static CMsgServerToGCPostMatchTip * default_instance_;
	CMsgServerToGCPostMatchTip();
	virtual ~CMsgServerToGCPostMatchTip();
	CMsgServerToGCPostMatchTip(const CMsgServerToGCPostMatchTip &);
	CMsgServerToGCPostMatchTip & operator=(const CMsgServerToGCPostMatchTip &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCPostMatchTip & default_instance();
	void Swap(CMsgServerToGCPostMatchTip *);
	virtual CMsgServerToGCPostMatchTip * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCPostMatchTip &);
	void MergeFrom(const CMsgServerToGCPostMatchTip &);
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
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_tipper_account_id();
	void clear_tipper_account_id();
	uint32 tipper_account_id();
	void set_tipper_account_id(uint32);
	bool has_recipient_account_id();
	void clear_recipient_account_id();
	uint32 recipient_account_id();
	void set_recipient_account_id(uint32);
	bool has_tip_amount();
	void clear_tip_amount();
	uint32 tip_amount();
	void set_tip_amount(uint32);
	void set_has_event_id();
	void clear_has_event_id();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_tipper_account_id();
	void clear_has_tipper_account_id();
	void set_has_recipient_account_id();
	void clear_has_recipient_account_id();
	void set_has_tip_amount();
	void clear_has_tip_amount();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13585
class CMsgServerToGCPostMatchTipResponse : public Message {
public:

	static const CMsgServerToGCPostMatchTipResponse_Result SUCCESS;
	static const CMsgServerToGCPostMatchTipResponse_Result FAILURE = 1;
	static const CMsgServerToGCPostMatchTipResponse_Result Result_MIN;
	static const CMsgServerToGCPostMatchTipResponse_Result Result_MAX = 1;
	static const int Result_ARRAYSIZE = 2;
	static const int kMatchIdFieldNumber = 1;
	static const int kTipperAccountIdFieldNumber = 2;
	static const int kRecipientAccountIdFieldNumber = 3;
	static const int kResultFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 tipper_account_id_;  // +0x20
	uint32 recipient_account_id_;  // +0x24
	int result_;  // +0x28

	static CMsgServerToGCPostMatchTipResponse * default_instance_;
	typedef CMsgServerToGCPostMatchTipResponse_Result Result;
	CMsgServerToGCPostMatchTipResponse();
	virtual ~CMsgServerToGCPostMatchTipResponse();
	CMsgServerToGCPostMatchTipResponse(const CMsgServerToGCPostMatchTipResponse &);
	CMsgServerToGCPostMatchTipResponse & operator=(const CMsgServerToGCPostMatchTipResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCPostMatchTipResponse & default_instance();
	void Swap(CMsgServerToGCPostMatchTipResponse *);
	virtual CMsgServerToGCPostMatchTipResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCPostMatchTipResponse &);
	void MergeFrom(const CMsgServerToGCPostMatchTipResponse &);
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
	bool Result_IsValid(int);
	const EnumDescriptor * Result_descriptor();
	const string & Result_Name(Result);
	bool Result_Parse(const string &, Result *);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_tipper_account_id();
	void clear_tipper_account_id();
	uint32 tipper_account_id();
	void set_tipper_account_id(uint32);
	bool has_recipient_account_id();
	void clear_recipient_account_id();
	uint32 recipient_account_id();
	void set_recipient_account_id(uint32);
	bool has_result();
	void clear_result();
	CMsgServerToGCPostMatchTipResponse_Result result();
	void set_result(CMsgServerToGCPostMatchTipResponse_Result);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_tipper_account_id();
	void clear_has_tipper_account_id();
	void set_has_recipient_account_id();
	void clear_has_recipient_account_id();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13718
class CMsgServerToGCStartCompendiumInGamePredictions : public Message {
public:

	static const int kLeagueIdFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
	static const int kHltvDelayFieldNumber = 3;
	static const int kPredictionIdsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 league_id_;  // +0x20
	float hltv_delay_;  // +0x24

	static CMsgServerToGCStartCompendiumInGamePredictions * default_instance_;
	CMsgServerToGCStartCompendiumInGamePredictions();
	virtual ~CMsgServerToGCStartCompendiumInGamePredictions();
	CMsgServerToGCStartCompendiumInGamePredictions(const CMsgServerToGCStartCompendiumInGamePredictions &);
	CMsgServerToGCStartCompendiumInGamePredictions & operator=(const CMsgServerToGCStartCompendiumInGamePredictions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCStartCompendiumInGamePredictions & default_instance();
	void Swap(CMsgServerToGCStartCompendiumInGamePredictions *);
	virtual CMsgServerToGCStartCompendiumInGamePredictions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCStartCompendiumInGamePredictions &);
	void MergeFrom(const CMsgServerToGCStartCompendiumInGamePredictions &);
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
	bool has_league_id();
	void clear_league_id();
	uint32 league_id();
	void set_league_id(uint32);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_hltv_delay();
	void clear_hltv_delay();
	float hltv_delay();
	void set_hltv_delay(float);
	int prediction_ids_size();
	void clear_prediction_ids();
	uint32 prediction_ids(int);
	void set_prediction_ids(int, uint32);
	void add_prediction_ids(uint32);
	const RepeatedField<unsigned int> & prediction_ids();
	RepeatedField<unsigned int> * mutable_prediction_ids();
	void set_has_league_id();
	void clear_has_league_id();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_hltv_delay();
	void clear_has_hltv_delay();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13830
class CMsgServerToGCStartCompendiumInGamePredictionsResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool result_;  // +0x18

	static CMsgServerToGCStartCompendiumInGamePredictionsResponse * default_instance_;
	CMsgServerToGCStartCompendiumInGamePredictionsResponse();
	virtual ~CMsgServerToGCStartCompendiumInGamePredictionsResponse();
	CMsgServerToGCStartCompendiumInGamePredictionsResponse(const CMsgServerToGCStartCompendiumInGamePredictionsResponse &);
	CMsgServerToGCStartCompendiumInGamePredictionsResponse & operator=(const CMsgServerToGCStartCompendiumInGamePredictionsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCStartCompendiumInGamePredictionsResponse & default_instance();
	void Swap(CMsgServerToGCStartCompendiumInGamePredictionsResponse *);
	virtual CMsgServerToGCStartCompendiumInGamePredictionsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCStartCompendiumInGamePredictionsResponse &);
	void MergeFrom(const CMsgServerToGCStartCompendiumInGamePredictionsResponse &);
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
	bool has_result();
	void clear_result();
	bool result();
	void set_result(bool);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13909
class CMsgServerToGCCloseCompendiumInGamePredictionVoting : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18

	static CMsgServerToGCCloseCompendiumInGamePredictionVoting * default_instance_;
	CMsgServerToGCCloseCompendiumInGamePredictionVoting();
	virtual ~CMsgServerToGCCloseCompendiumInGamePredictionVoting();
	CMsgServerToGCCloseCompendiumInGamePredictionVoting(const CMsgServerToGCCloseCompendiumInGamePredictionVoting &);
	CMsgServerToGCCloseCompendiumInGamePredictionVoting & operator=(const CMsgServerToGCCloseCompendiumInGamePredictionVoting &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCCloseCompendiumInGamePredictionVoting & default_instance();
	void Swap(CMsgServerToGCCloseCompendiumInGamePredictionVoting *);
	virtual CMsgServerToGCCloseCompendiumInGamePredictionVoting * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCCloseCompendiumInGamePredictionVoting &);
	void MergeFrom(const CMsgServerToGCCloseCompendiumInGamePredictionVoting &);
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
	void set_has_match_id();
	void clear_has_match_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:13988
class CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool result_;  // +0x18

	static CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse * default_instance_;
	CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse();
	virtual ~CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse();
	CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse(const CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse &);
	CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse & operator=(const CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse & default_instance();
	void Swap(CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse *);
	virtual CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse &);
	void MergeFrom(const CMsgServerToGCCloseCompendiumInGamePredictionVotingResponse &);
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
	bool has_result();
	void clear_result();
	bool result();
	void set_result(bool);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:14067
class CMsgServerToGCEndCompendiumInGamePredictions : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18

	static CMsgServerToGCEndCompendiumInGamePredictions * default_instance_;
	CMsgServerToGCEndCompendiumInGamePredictions();
	virtual ~CMsgServerToGCEndCompendiumInGamePredictions();
	CMsgServerToGCEndCompendiumInGamePredictions(const CMsgServerToGCEndCompendiumInGamePredictions &);
	CMsgServerToGCEndCompendiumInGamePredictions & operator=(const CMsgServerToGCEndCompendiumInGamePredictions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCEndCompendiumInGamePredictions & default_instance();
	void Swap(CMsgServerToGCEndCompendiumInGamePredictions *);
	virtual CMsgServerToGCEndCompendiumInGamePredictions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCEndCompendiumInGamePredictions &);
	void MergeFrom(const CMsgServerToGCEndCompendiumInGamePredictions &);
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
	void set_has_match_id();
	void clear_has_match_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:14146
class CMsgServerToGCEndCompendiumInGamePredictionsResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool result_;  // +0x18

	static CMsgServerToGCEndCompendiumInGamePredictionsResponse * default_instance_;
	CMsgServerToGCEndCompendiumInGamePredictionsResponse();
	virtual ~CMsgServerToGCEndCompendiumInGamePredictionsResponse();
	CMsgServerToGCEndCompendiumInGamePredictionsResponse(const CMsgServerToGCEndCompendiumInGamePredictionsResponse &);
	CMsgServerToGCEndCompendiumInGamePredictionsResponse & operator=(const CMsgServerToGCEndCompendiumInGamePredictionsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCEndCompendiumInGamePredictionsResponse & default_instance();
	void Swap(CMsgServerToGCEndCompendiumInGamePredictionsResponse *);
	virtual CMsgServerToGCEndCompendiumInGamePredictionsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCEndCompendiumInGamePredictionsResponse &);
	void MergeFrom(const CMsgServerToGCEndCompendiumInGamePredictionsResponse &);
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
	bool has_result();
	void clear_result();
	bool result();
	void set_result(bool);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:14225
class CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult : public Message {
public:

	static const int kPredictionIdFieldNumber = 1;
	static const int kPredictionValueFieldNumber = 2;
	static const int kPredictionValueIsMaskFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 prediction_id_;  // +0x18
	uint32 prediction_value_;  // +0x1c
	bool prediction_value_is_mask_;  // +0x20

	static CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult * default_instance_;
	CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult();
	virtual ~CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult();
	CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult(const CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult &);
	CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult & operator=(const CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult & default_instance();
	void Swap(CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult *);
	virtual CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult &);
	void MergeFrom(const CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult &);
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
	bool has_prediction_id();
	void clear_prediction_id();
	uint32 prediction_id();
	void set_prediction_id(uint32);
	bool has_prediction_value();
	void clear_prediction_value();
	uint32 prediction_value();
	void set_prediction_value(uint32);
	bool has_prediction_value_is_mask();
	void clear_prediction_value_is_mask();
	bool prediction_value_is_mask();
	void set_prediction_value_is_mask(bool);
	void set_has_prediction_id();
	void clear_has_prediction_id();
	void set_has_prediction_value();
	void clear_has_prediction_value();
	void set_has_prediction_value_is_mask();
	void clear_has_prediction_value_is_mask();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:14324
class CMsgServerToGCCompendiumInGamePredictionResults : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kResultsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18

	static CMsgServerToGCCompendiumInGamePredictionResults * default_instance_;
	CMsgServerToGCCompendiumInGamePredictionResults();
	virtual ~CMsgServerToGCCompendiumInGamePredictionResults();
	CMsgServerToGCCompendiumInGamePredictionResults(const CMsgServerToGCCompendiumInGamePredictionResults &);
	CMsgServerToGCCompendiumInGamePredictionResults & operator=(const CMsgServerToGCCompendiumInGamePredictionResults &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCCompendiumInGamePredictionResults & default_instance();
	void Swap(CMsgServerToGCCompendiumInGamePredictionResults *);
	virtual CMsgServerToGCCompendiumInGamePredictionResults * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCCompendiumInGamePredictionResults &);
	void MergeFrom(const CMsgServerToGCCompendiumInGamePredictionResults &);
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
	int results_size();
	void clear_results();
	const CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult & results(int);
	CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult * mutable_results(int);
	CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult * add_results();
	const RepeatedPtrField<CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult> & results();
	RepeatedPtrField<CMsgServerToGCCompendiumInGamePredictionResults_PredictionResult> * mutable_results();
	void set_has_match_id();
	void clear_has_match_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_server.pb.h:14418
class CMsgServerToGCCompendiumInGamePredictionResultsResponse : public Message {
public:

	static const int kResultFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool result_;  // +0x18

	static CMsgServerToGCCompendiumInGamePredictionResultsResponse * default_instance_;
	CMsgServerToGCCompendiumInGamePredictionResultsResponse();
	virtual ~CMsgServerToGCCompendiumInGamePredictionResultsResponse();
	CMsgServerToGCCompendiumInGamePredictionResultsResponse(const CMsgServerToGCCompendiumInGamePredictionResultsResponse &);
	CMsgServerToGCCompendiumInGamePredictionResultsResponse & operator=(const CMsgServerToGCCompendiumInGamePredictionResultsResponse &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgServerToGCCompendiumInGamePredictionResultsResponse & default_instance();
	void Swap(CMsgServerToGCCompendiumInGamePredictionResultsResponse *);
	virtual CMsgServerToGCCompendiumInGamePredictionResultsResponse * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgServerToGCCompendiumInGamePredictionResultsResponse &);
	void MergeFrom(const CMsgServerToGCCompendiumInGamePredictionResultsResponse &);
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
	bool has_result();
	void clear_result();
	bool result();
	void set_result(bool);
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
