// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:103
class CDemoFileHeader : public Message {
public:

	static const int kDemoFileStampFieldNumber = 1;
	static const int kNetworkProtocolFieldNumber = 2;
	static const int kServerNameFieldNumber = 3;
	static const int kClientNameFieldNumber = 4;
	static const int kMapNameFieldNumber = 5;
	static const int kGameDirectoryFieldNumber = 6;
	static const int kFullpacketsVersionFieldNumber = 7;
	static const int kAllowClientsideEntitiesFieldNumber = 8;
	static const int kAllowClientsideParticlesFieldNumber = 9;
	static const int kAddonsFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * demo_file_stamp_;  // +0x18
	string * server_name_;  // +0x20
	string * client_name_;  // +0x28
	int32 network_protocol_;  // +0x30
	int32 fullpackets_version_;  // +0x34
	string * map_name_;  // +0x38
	string * game_directory_;  // +0x40
	string * addons_;  // +0x48
	bool allow_clientside_entities_;  // +0x50
	bool allow_clientside_particles_;  // +0x51

	static CDemoFileHeader * default_instance_;
	CDemoFileHeader();
	virtual ~CDemoFileHeader();
	CDemoFileHeader(const CDemoFileHeader &);
	CDemoFileHeader & operator=(const CDemoFileHeader &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoFileHeader & default_instance();
	void Swap(CDemoFileHeader *);
	virtual CDemoFileHeader * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoFileHeader &);
	void MergeFrom(const CDemoFileHeader &);
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
	bool has_demo_file_stamp();
	void clear_demo_file_stamp();
	const string & demo_file_stamp();
	void set_demo_file_stamp(const string &);
	void set_demo_file_stamp(const char *);
	void set_demo_file_stamp(const char *, size_t);
	string * mutable_demo_file_stamp();
	string * release_demo_file_stamp();
	void set_allocated_demo_file_stamp(string *);
	bool has_network_protocol();
	void clear_network_protocol();
	int32 network_protocol();
	void set_network_protocol(int32);
	bool has_server_name();
	void clear_server_name();
	const string & server_name();
	void set_server_name(const string &);
	void set_server_name(const char *);
	void set_server_name(const char *, size_t);
	string * mutable_server_name();
	string * release_server_name();
	void set_allocated_server_name(string *);
	bool has_client_name();
	void clear_client_name();
	const string & client_name();
	void set_client_name(const string &);
	void set_client_name(const char *);
	void set_client_name(const char *, size_t);
	string * mutable_client_name();
	string * release_client_name();
	void set_allocated_client_name(string *);
	bool has_map_name();
	void clear_map_name();
	const string & map_name();
	void set_map_name(const string &);
	void set_map_name(const char *);
	void set_map_name(const char *, size_t);
	string * mutable_map_name();
	string * release_map_name();
	void set_allocated_map_name(string *);
	bool has_game_directory();
	void clear_game_directory();
	const string & game_directory();
	void set_game_directory(const string &);
	void set_game_directory(const char *);
	void set_game_directory(const char *, size_t);
	string * mutable_game_directory();
	string * release_game_directory();
	void set_allocated_game_directory(string *);
	bool has_fullpackets_version();
	void clear_fullpackets_version();
	int32 fullpackets_version();
	void set_fullpackets_version(int32);
	bool has_allow_clientside_entities();
	void clear_allow_clientside_entities();
	bool allow_clientside_entities();
	void set_allow_clientside_entities(bool);
	bool has_allow_clientside_particles();
	void clear_allow_clientside_particles();
	bool allow_clientside_particles();
	void set_allow_clientside_particles(bool);
	bool has_addons();
	void clear_addons();
	const string & addons();
	void set_addons(const string &);
	void set_addons(const char *);
	void set_addons(const char *, size_t);
	string * mutable_addons();
	string * release_addons();
	void set_allocated_addons(string *);
	void set_has_demo_file_stamp();
	void clear_has_demo_file_stamp();
	void set_has_network_protocol();
	void clear_has_network_protocol();
	void set_has_server_name();
	void clear_has_server_name();
	void set_has_client_name();
	void clear_has_client_name();
	void set_has_map_name();
	void clear_has_map_name();
	void set_has_game_directory();
	void clear_has_game_directory();
	void set_has_fullpackets_version();
	void clear_has_fullpackets_version();
	void set_has_allow_clientside_entities();
	void clear_has_allow_clientside_entities();
	void set_has_allow_clientside_particles();
	void clear_has_allow_clientside_particles();
	void set_has_addons();
	void clear_has_addons();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:302
class CGameInfo_CDotaGameInfo_CPlayerInfo : public Message {
public:

	static const int kHeroNameFieldNumber = 1;
	static const int kPlayerNameFieldNumber = 2;
	static const int kIsFakeClientFieldNumber = 3;
	static const int kSteamidFieldNumber = 4;
	static const int kGameTeamFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * hero_name_;  // +0x18
	string * player_name_;  // +0x20
	uint64 steamid_;  // +0x28
	bool is_fake_client_;  // +0x30

	int32 game_team_;  // +0x34

	static CGameInfo_CDotaGameInfo_CPlayerInfo * default_instance_;
	CGameInfo_CDotaGameInfo_CPlayerInfo();
	virtual ~CGameInfo_CDotaGameInfo_CPlayerInfo();
	CGameInfo_CDotaGameInfo_CPlayerInfo(const CGameInfo_CDotaGameInfo_CPlayerInfo &);
	CGameInfo_CDotaGameInfo_CPlayerInfo & operator=(const CGameInfo_CDotaGameInfo_CPlayerInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGameInfo_CDotaGameInfo_CPlayerInfo & default_instance();
	void Swap(CGameInfo_CDotaGameInfo_CPlayerInfo *);
	virtual CGameInfo_CDotaGameInfo_CPlayerInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGameInfo_CDotaGameInfo_CPlayerInfo &);
	void MergeFrom(const CGameInfo_CDotaGameInfo_CPlayerInfo &);
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
	bool has_hero_name();
	void clear_hero_name();
	const string & hero_name();
	void set_hero_name(const string &);
	void set_hero_name(const char *);
	void set_hero_name(const char *, size_t);
	string * mutable_hero_name();
	string * release_hero_name();
	void set_allocated_hero_name(string *);
	bool has_player_name();
	void clear_player_name();
	const string & player_name();
	void set_player_name(const string &);
	void set_player_name(const char *);
	void set_player_name(const char *, size_t);
	string * mutable_player_name();
	string * release_player_name();
	void set_allocated_player_name(string *);
	bool has_is_fake_client();
	void clear_is_fake_client();
	bool is_fake_client();
	void set_is_fake_client(bool);
	bool has_steamid();
	void clear_steamid();
	uint64 steamid();
	void set_steamid(uint64);
	bool has_game_team();
	void clear_game_team();
	int32 game_team();
	void set_game_team(int32);
	void set_has_hero_name();
	void clear_has_hero_name();
	void set_has_player_name();
	void clear_has_player_name();
	void set_has_is_fake_client();
	void clear_has_is_fake_client();
	void set_has_steamid();
	void clear_has_steamid();
	void set_has_game_team();
	void clear_has_game_team();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:431
class CGameInfo_CDotaGameInfo_CHeroSelectEvent : public Message {
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

	static CGameInfo_CDotaGameInfo_CHeroSelectEvent * default_instance_;
	CGameInfo_CDotaGameInfo_CHeroSelectEvent();
	virtual ~CGameInfo_CDotaGameInfo_CHeroSelectEvent();
	CGameInfo_CDotaGameInfo_CHeroSelectEvent(const CGameInfo_CDotaGameInfo_CHeroSelectEvent &);
	CGameInfo_CDotaGameInfo_CHeroSelectEvent & operator=(const CGameInfo_CDotaGameInfo_CHeroSelectEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGameInfo_CDotaGameInfo_CHeroSelectEvent & default_instance();
	void Swap(CGameInfo_CDotaGameInfo_CHeroSelectEvent *);
	virtual CGameInfo_CDotaGameInfo_CHeroSelectEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGameInfo_CDotaGameInfo_CHeroSelectEvent &);
	void MergeFrom(const CGameInfo_CDotaGameInfo_CHeroSelectEvent &);
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:530
class CGameInfo_CDotaGameInfo : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kGameModeFieldNumber = 2;
	static const int kGameWinnerFieldNumber = 3;
	static const int kPlayerInfoFieldNumber = 4;
	static const int kLeagueidFieldNumber = 5;
	static const int kPicksBansFieldNumber = 6;
	static const int kRadiantTeamIdFieldNumber = 7;
	static const int kDireTeamIdFieldNumber = 8;
	static const int kRadiantTeamTagFieldNumber = 9;
	static const int kDireTeamTagFieldNumber = 10;
	static const int kEndTimeFieldNumber = 11;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	int32 game_mode_;  // +0x20
	int32 game_winner_;  // +0x24
	uint32 leagueid_;  // +0x58
	uint32 radiant_team_id_;  // +0x5c
	string * radiant_team_tag_;  // +0x60
	uint32 dire_team_id_;  // +0x68
	uint32 end_time_;  // +0x6c
	string * dire_team_tag_;  // +0x70

	static CGameInfo_CDotaGameInfo * default_instance_;
	CGameInfo_CDotaGameInfo();
	virtual ~CGameInfo_CDotaGameInfo();
	CGameInfo_CDotaGameInfo(const CGameInfo_CDotaGameInfo &);
	CGameInfo_CDotaGameInfo & operator=(const CGameInfo_CDotaGameInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGameInfo_CDotaGameInfo & default_instance();
	void Swap(CGameInfo_CDotaGameInfo *);
	virtual CGameInfo_CDotaGameInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGameInfo_CDotaGameInfo &);
	void MergeFrom(const CGameInfo_CDotaGameInfo &);
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
	int32 game_mode();
	void set_game_mode(int32);
	bool has_game_winner();
	void clear_game_winner();
	int32 game_winner();
	void set_game_winner(int32);
	int player_info_size();
	void clear_player_info();
	const CGameInfo_CDotaGameInfo_CPlayerInfo & player_info(int);
	CGameInfo_CDotaGameInfo_CPlayerInfo * mutable_player_info(int);
	CGameInfo_CDotaGameInfo_CPlayerInfo * add_player_info();
	const RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo> & player_info();
	RepeatedPtrField<CGameInfo_CDotaGameInfo_CPlayerInfo> * mutable_player_info();
	bool has_leagueid();
	void clear_leagueid();
	uint32 leagueid();
	void set_leagueid(uint32);
	int picks_bans_size();
	void clear_picks_bans();
	const CGameInfo_CDotaGameInfo_CHeroSelectEvent & picks_bans(int);
	CGameInfo_CDotaGameInfo_CHeroSelectEvent * mutable_picks_bans(int);
	CGameInfo_CDotaGameInfo_CHeroSelectEvent * add_picks_bans();
	const RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent> & picks_bans();
	RepeatedPtrField<CGameInfo_CDotaGameInfo_CHeroSelectEvent> * mutable_picks_bans();
	bool has_radiant_team_id();
	void clear_radiant_team_id();
	uint32 radiant_team_id();
	void set_radiant_team_id(uint32);
	bool has_dire_team_id();
	void clear_dire_team_id();
	uint32 dire_team_id();
	void set_dire_team_id(uint32);
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
	bool has_end_time();
	void clear_end_time();
	uint32 end_time();
	void set_end_time(uint32);
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_game_mode();
	void clear_has_game_mode();
	void set_has_game_winner();
	void clear_has_game_winner();
	void set_has_leagueid();
	void clear_has_leagueid();
	void set_has_radiant_team_id();
	void clear_has_radiant_team_id();
	void set_has_dire_team_id();
	void clear_has_dire_team_id();
	void set_has_radiant_team_tag();
	void clear_has_radiant_team_tag();
	void set_has_dire_team_tag();
	void clear_has_dire_team_tag();
	void set_has_end_time();
	void clear_has_end_time();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:728
class CGameInfo : public Message {
public:

	static const int kDotaFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CGameInfo * default_instance_;
	CGameInfo();
	virtual ~CGameInfo();
	CGameInfo(const CGameInfo &);
	CGameInfo & operator=(const CGameInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CGameInfo & default_instance();
	void Swap(CGameInfo *);
	virtual CGameInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CGameInfo &);
	void MergeFrom(const CGameInfo &);
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
	bool has_dota();
	void clear_dota();
	const CGameInfo_CDotaGameInfo & dota();
	CGameInfo_CDotaGameInfo * mutable_dota();
	CGameInfo_CDotaGameInfo * release_dota();
	void set_allocated_dota(CGameInfo_CDotaGameInfo *);
	void set_has_dota();
	void clear_has_dota();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:811
class CDemoFileInfo : public Message {
public:

	static const int kPlaybackTimeFieldNumber = 1;
	static const int kPlaybackTicksFieldNumber = 2;
	static const int kPlaybackFramesFieldNumber = 3;
	static const int kGameInfoFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float playback_time_;  // +0x18
	int32 playback_ticks_;  // +0x1c
	int32 playback_frames_;  // +0x28

	static CDemoFileInfo * default_instance_;
	CDemoFileInfo();
	virtual ~CDemoFileInfo();
	CDemoFileInfo(const CDemoFileInfo &);
	CDemoFileInfo & operator=(const CDemoFileInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoFileInfo & default_instance();
	void Swap(CDemoFileInfo *);
	virtual CDemoFileInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoFileInfo &);
	void MergeFrom(const CDemoFileInfo &);
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
	bool has_playback_time();
	void clear_playback_time();
	float playback_time();
	void set_playback_time(float);
	bool has_playback_ticks();
	void clear_playback_ticks();
	int32 playback_ticks();
	void set_playback_ticks(int32);
	bool has_playback_frames();
	void clear_playback_frames();
	int32 playback_frames();
	void set_playback_frames(int32);
	bool has_game_info();
	void clear_game_info();
	const CGameInfo & game_info();
	CGameInfo * mutable_game_info();
	CGameInfo * release_game_info();
	void set_allocated_game_info(CGameInfo *);
	void set_has_playback_time();
	void clear_has_playback_time();
	void set_has_playback_ticks();
	void clear_has_playback_ticks();
	void set_has_playback_frames();
	void clear_has_playback_frames();
	void set_has_game_info();
	void clear_has_game_info();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:922
class CDemoPacket : public Message {
public:

	static const int kSequenceInFieldNumber = 1;
	static const int kSequenceOutAckFieldNumber = 2;
	static const int kDataFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 sequence_in_;  // +0x18
	int32 sequence_out_ack_;  // +0x1c
	string * data_;  // +0x20

	static CDemoPacket * default_instance_;
	CDemoPacket();
	virtual ~CDemoPacket();
	CDemoPacket(const CDemoPacket &);
	CDemoPacket & operator=(const CDemoPacket &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoPacket & default_instance();
	void Swap(CDemoPacket *);
	virtual CDemoPacket * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoPacket &);
	void MergeFrom(const CDemoPacket &);
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
	bool has_sequence_in();
	void clear_sequence_in();
	int32 sequence_in();
	void set_sequence_in(int32);
	bool has_sequence_out_ack();
	void clear_sequence_out_ack();
	int32 sequence_out_ack();
	void set_sequence_out_ack(int32);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_sequence_in();
	void clear_has_sequence_in();
	void set_has_sequence_out_ack();
	void clear_has_sequence_out_ack();
	void set_has_data();
	void clear_has_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1026
class CDemoFullPacket : public Message {
public:

	static const int kStringTableFieldNumber = 1;
	static const int kPacketFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDemoFullPacket * default_instance_;
	CDemoFullPacket();
	virtual ~CDemoFullPacket();
	CDemoFullPacket(const CDemoFullPacket &);
	CDemoFullPacket & operator=(const CDemoFullPacket &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoFullPacket & default_instance();
	void Swap(CDemoFullPacket *);
	virtual CDemoFullPacket * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoFullPacket &);
	void MergeFrom(const CDemoFullPacket &);
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
	bool has_string_table();
	void clear_string_table();
	const CDemoStringTables & string_table();
	CDemoStringTables * mutable_string_table();
	CDemoStringTables * release_string_table();
	void set_allocated_string_table(CDemoStringTables *);
	bool has_packet();
	void clear_packet();
	const CDemoPacket & packet();
	CDemoPacket * mutable_packet();
	CDemoPacket * release_packet();
	void set_allocated_packet(CDemoPacket *);
	void set_has_string_table();
	void clear_has_string_table();
	void set_has_packet();
	void clear_has_packet();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1119
class CDemoSaveGame : public Message {
public:

	static const int kDataFieldNumber = 1;
	static const int kSteamIdFieldNumber = 2;
	static const int kSignatureFieldNumber = 3;
	static const int kVersionFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_;  // +0x18
	uint64 steam_id_;  // +0x20
	uint64 signature_;  // +0x28
	int32 version_;  // +0x30

	static CDemoSaveGame * default_instance_;
	CDemoSaveGame();
	virtual ~CDemoSaveGame();
	CDemoSaveGame(const CDemoSaveGame &);
	CDemoSaveGame & operator=(const CDemoSaveGame &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoSaveGame & default_instance();
	void Swap(CDemoSaveGame *);
	virtual CDemoSaveGame * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoSaveGame &);
	void MergeFrom(const CDemoSaveGame &);
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
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	bool has_steam_id();
	void clear_steam_id();
	uint64 steam_id();
	void set_steam_id(uint64);
	bool has_signature();
	void clear_signature();
	uint64 signature();
	void set_signature(uint64);
	bool has_version();
	void clear_version();
	int32 version();
	void set_version(int32);
	void set_has_data();
	void clear_has_data();
	void set_has_steam_id();
	void clear_has_steam_id();
	void set_has_signature();
	void clear_has_signature();
	void set_has_version();
	void clear_has_version();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1233
class CDemoSyncTick : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDemoSyncTick * default_instance_;
	CDemoSyncTick();
	virtual ~CDemoSyncTick();
	CDemoSyncTick(const CDemoSyncTick &);
	CDemoSyncTick & operator=(const CDemoSyncTick &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoSyncTick & default_instance();
	void Swap(CDemoSyncTick *);
	virtual CDemoSyncTick * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoSyncTick &);
	void MergeFrom(const CDemoSyncTick &);
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1302
class CDemoConsoleCmd : public Message {
public:

	static const int kCmdstringFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * cmdstring_;  // +0x18

	static CDemoConsoleCmd * default_instance_;
	CDemoConsoleCmd();
	virtual ~CDemoConsoleCmd();
	CDemoConsoleCmd(const CDemoConsoleCmd &);
	CDemoConsoleCmd & operator=(const CDemoConsoleCmd &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoConsoleCmd & default_instance();
	void Swap(CDemoConsoleCmd *);
	virtual CDemoConsoleCmd * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoConsoleCmd &);
	void MergeFrom(const CDemoConsoleCmd &);
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
	bool has_cmdstring();
	void clear_cmdstring();
	const string & cmdstring();
	void set_cmdstring(const string &);
	void set_cmdstring(const char *);
	void set_cmdstring(const char *, size_t);
	string * mutable_cmdstring();
	string * release_cmdstring();
	void set_allocated_cmdstring(string *);
	void set_has_cmdstring();
	void clear_has_cmdstring();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1386
class CDemoSendTables : public Message {
public:

	static const int kDataFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_;  // +0x18

	static CDemoSendTables * default_instance_;
	CDemoSendTables();
	virtual ~CDemoSendTables();
	CDemoSendTables(const CDemoSendTables &);
	CDemoSendTables & operator=(const CDemoSendTables &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoSendTables & default_instance();
	void Swap(CDemoSendTables *);
	virtual CDemoSendTables * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoSendTables &);
	void MergeFrom(const CDemoSendTables &);
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
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_data();
	void clear_has_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1470
class CDemoClassInfo_class_t : public Message {
public:

	static const int kClassIdFieldNumber = 1;
	static const int kNetworkNameFieldNumber = 2;
	static const int kTableNameFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * network_name_;  // +0x18
	string * table_name_;  // +0x20
	int32 class_id_;  // +0x28

	static CDemoClassInfo_class_t * default_instance_;
	CDemoClassInfo_class_t();
	virtual ~CDemoClassInfo_class_t();
	CDemoClassInfo_class_t(const CDemoClassInfo_class_t &);
	CDemoClassInfo_class_t & operator=(const CDemoClassInfo_class_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoClassInfo_class_t & default_instance();
	void Swap(CDemoClassInfo_class_t *);
	virtual CDemoClassInfo_class_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoClassInfo_class_t &);
	void MergeFrom(const CDemoClassInfo_class_t &);
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
	int32 class_id();
	void set_class_id(int32);
	bool has_network_name();
	void clear_network_name();
	const string & network_name();
	void set_network_name(const string &);
	void set_network_name(const char *);
	void set_network_name(const char *, size_t);
	string * mutable_network_name();
	string * release_network_name();
	void set_allocated_network_name(string *);
	bool has_table_name();
	void clear_table_name();
	const string & table_name();
	void set_table_name(const string &);
	void set_table_name(const char *);
	void set_table_name(const char *, size_t);
	string * mutable_table_name();
	string * release_table_name();
	void set_allocated_table_name(string *);
	void set_has_class_id();
	void clear_has_class_id();
	void set_has_network_name();
	void clear_has_network_name();
	void set_has_table_name();
	void clear_has_table_name();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1579
class CDemoClassInfo : public Message {
public:

	static const int kClassesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDemoClassInfo * default_instance_;
	CDemoClassInfo();
	virtual ~CDemoClassInfo();
	CDemoClassInfo(const CDemoClassInfo &);
	CDemoClassInfo & operator=(const CDemoClassInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoClassInfo & default_instance();
	void Swap(CDemoClassInfo *);
	virtual CDemoClassInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoClassInfo &);
	void MergeFrom(const CDemoClassInfo &);
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
	int classes_size();
	void clear_classes();
	const CDemoClassInfo_class_t & classes(int);
	CDemoClassInfo_class_t * mutable_classes(int);
	CDemoClassInfo_class_t * add_classes();
	const RepeatedPtrField<CDemoClassInfo_class_t> & classes();
	RepeatedPtrField<CDemoClassInfo_class_t> * mutable_classes();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1663
class CDemoCustomData : public Message {
public:

	static const int kCallbackIndexFieldNumber = 1;
	static const int kDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_;  // +0x18
	int32 callback_index_;  // +0x20

	static CDemoCustomData * default_instance_;
	CDemoCustomData();
	virtual ~CDemoCustomData();
	CDemoCustomData(const CDemoCustomData &);
	CDemoCustomData & operator=(const CDemoCustomData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoCustomData & default_instance();
	void Swap(CDemoCustomData *);
	virtual CDemoCustomData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoCustomData &);
	void MergeFrom(const CDemoCustomData &);
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
	bool has_callback_index();
	void clear_callback_index();
	int32 callback_index();
	void set_callback_index(int32);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_callback_index();
	void clear_has_callback_index();
	void set_has_data();
	void clear_has_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1757
class CDemoCustomDataCallbacks : public Message {
public:

	static const int kSaveIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDemoCustomDataCallbacks * default_instance_;
	CDemoCustomDataCallbacks();
	virtual ~CDemoCustomDataCallbacks();
	CDemoCustomDataCallbacks(const CDemoCustomDataCallbacks &);
	CDemoCustomDataCallbacks & operator=(const CDemoCustomDataCallbacks &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoCustomDataCallbacks & default_instance();
	void Swap(CDemoCustomDataCallbacks *);
	virtual CDemoCustomDataCallbacks * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoCustomDataCallbacks &);
	void MergeFrom(const CDemoCustomDataCallbacks &);
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
	int save_id_size();
	void clear_save_id();
	const string & save_id(int);
	string * mutable_save_id(int);
	void set_save_id(int, const string &);
	void set_save_id(int, const char *);
	void set_save_id(int, const char *, size_t);
	string * add_save_id();
	void add_save_id(const string &);
	void add_save_id(const char *);
	void add_save_id(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & save_id();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_save_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1843
class CDemoStringTables_items_t : public Message {
public:

	static const int kStrFieldNumber = 1;
	static const int kDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * str_;  // +0x18
	string * data_;  // +0x20

	static CDemoStringTables_items_t * default_instance_;
	CDemoStringTables_items_t();
	virtual ~CDemoStringTables_items_t();
	CDemoStringTables_items_t(const CDemoStringTables_items_t &);
	CDemoStringTables_items_t & operator=(const CDemoStringTables_items_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoStringTables_items_t & default_instance();
	void Swap(CDemoStringTables_items_t *);
	virtual CDemoStringTables_items_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoStringTables_items_t &);
	void MergeFrom(const CDemoStringTables_items_t &);
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
	bool has_str();
	void clear_str();
	const string & str();
	void set_str(const string &);
	void set_str(const char *);
	void set_str(const char *, size_t);
	string * mutable_str();
	string * release_str();
	void set_allocated_str(string *);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_str();
	void clear_has_str();
	void set_has_data();
	void clear_has_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:1942
class CDemoStringTables_table_t : public Message {
public:

	static const int kTableNameFieldNumber = 1;
	static const int kItemsFieldNumber = 2;
	static const int kItemsClientsideFieldNumber = 3;
	static const int kTableFlagsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * table_name_;  // +0x18
	int32 table_flags_;  // +0x50

	static CDemoStringTables_table_t * default_instance_;
	CDemoStringTables_table_t();
	virtual ~CDemoStringTables_table_t();
	CDemoStringTables_table_t(const CDemoStringTables_table_t &);
	CDemoStringTables_table_t & operator=(const CDemoStringTables_table_t &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoStringTables_table_t & default_instance();
	void Swap(CDemoStringTables_table_t *);
	virtual CDemoStringTables_table_t * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoStringTables_table_t &);
	void MergeFrom(const CDemoStringTables_table_t &);
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
	bool has_table_name();
	void clear_table_name();
	const string & table_name();
	void set_table_name(const string &);
	void set_table_name(const char *);
	void set_table_name(const char *, size_t);
	string * mutable_table_name();
	string * release_table_name();
	void set_allocated_table_name(string *);
	int items_size();
	void clear_items();
	const CDemoStringTables_items_t & items(int);
	CDemoStringTables_items_t * mutable_items(int);
	CDemoStringTables_items_t * add_items();
	const RepeatedPtrField<CDemoStringTables_items_t> & items();
	RepeatedPtrField<CDemoStringTables_items_t> * mutable_items();
	int items_clientside_size();
	void clear_items_clientside();
	const CDemoStringTables_items_t & items_clientside(int);
	CDemoStringTables_items_t * mutable_items_clientside(int);
	CDemoStringTables_items_t * add_items_clientside();
	const RepeatedPtrField<CDemoStringTables_items_t> & items_clientside();
	RepeatedPtrField<CDemoStringTables_items_t> * mutable_items_clientside();
	bool has_table_flags();
	void clear_table_flags();
	int32 table_flags();
	void set_table_flags(int32);
	void set_has_table_name();
	void clear_has_table_name();
	void set_has_table_flags();
	void clear_has_table_flags();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:2062
class CDemoStringTables : public Message {
public:

	static const int kTablesFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDemoStringTables * default_instance_;
	CDemoStringTables();
	virtual ~CDemoStringTables();
	CDemoStringTables(const CDemoStringTables &);
	CDemoStringTables & operator=(const CDemoStringTables &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoStringTables & default_instance();
	void Swap(CDemoStringTables *);
	virtual CDemoStringTables * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoStringTables &);
	void MergeFrom(const CDemoStringTables &);
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
	int tables_size();
	void clear_tables();
	const CDemoStringTables_table_t & tables(int);
	CDemoStringTables_table_t * mutable_tables(int);
	CDemoStringTables_table_t * add_tables();
	const RepeatedPtrField<CDemoStringTables_table_t> & tables();
	RepeatedPtrField<CDemoStringTables_table_t> * mutable_tables();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:2147
class CDemoStop : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDemoStop * default_instance_;
	CDemoStop();
	virtual ~CDemoStop();
	CDemoStop(const CDemoStop &);
	CDemoStop & operator=(const CDemoStop &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoStop & default_instance();
	void Swap(CDemoStop *);
	virtual CDemoStop * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoStop &);
	void MergeFrom(const CDemoStop &);
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:2216
class CDemoUserCmd : public Message {
public:

	static const int kCmdNumberFieldNumber = 1;
	static const int kDataFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * data_;  // +0x18
	int32 cmd_number_;  // +0x20

	static CDemoUserCmd * default_instance_;
	CDemoUserCmd();
	virtual ~CDemoUserCmd();
	CDemoUserCmd(const CDemoUserCmd &);
	CDemoUserCmd & operator=(const CDemoUserCmd &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoUserCmd & default_instance();
	void Swap(CDemoUserCmd *);
	virtual CDemoUserCmd * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoUserCmd &);
	void MergeFrom(const CDemoUserCmd &);
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
	bool has_cmd_number();
	void clear_cmd_number();
	int32 cmd_number();
	void set_cmd_number(int32);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_cmd_number();
	void clear_has_cmd_number();
	void set_has_data();
	void clear_has_data();
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

// src/game/server/generated_protodota/linuxsteamrt64/demo.pb.h:2310
class CDemoSpawnGroups : public Message {
public:

	static const int kMsgsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDemoSpawnGroups * default_instance_;
	CDemoSpawnGroups();
	virtual ~CDemoSpawnGroups();
	CDemoSpawnGroups(const CDemoSpawnGroups &);
	CDemoSpawnGroups & operator=(const CDemoSpawnGroups &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDemoSpawnGroups & default_instance();
	void Swap(CDemoSpawnGroups *);
	virtual CDemoSpawnGroups * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDemoSpawnGroups &);
	void MergeFrom(const CDemoSpawnGroups &);
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
	int msgs_size();
	void clear_msgs();
	const string & msgs(int);
	string * mutable_msgs(int);
	void set_msgs(int, const string &);
	void set_msgs(int, const char *);
	void set_msgs(int, const void *, size_t);
	string * add_msgs();
	void add_msgs(const string &);
	void add_msgs(const char *);
	void add_msgs(const void *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & msgs();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_msgs();
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
