// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.h:68
class CDOTABroadcastMsg : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kMsgFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * msg_;  // +0x18
	int type_;  // +0x20

	static CDOTABroadcastMsg * default_instance_;
	CDOTABroadcastMsg();
	virtual ~CDOTABroadcastMsg();
	CDOTABroadcastMsg(const CDOTABroadcastMsg &);
	CDOTABroadcastMsg & operator=(const CDOTABroadcastMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTABroadcastMsg & default_instance();
	void Swap(CDOTABroadcastMsg *);
	virtual CDOTABroadcastMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTABroadcastMsg &);
	void MergeFrom(const CDOTABroadcastMsg &);
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
	EDotaBroadcastMessages type();
	void set_type(EDotaBroadcastMessages);
	bool has_msg();
	void clear_msg();
	const string & msg();
	void set_msg(const string &);
	void set_msg(const char *);
	void set_msg(const void *, size_t);
	string * mutable_msg();
	string * release_msg();
	void set_allocated_msg(string *);
	void set_has_type();
	void clear_has_type();
	void set_has_msg();
	void clear_has_msg();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.h:162
class CDOTABroadcastMsg_LANLobbyRequest : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTABroadcastMsg_LANLobbyRequest * default_instance_;
	CDOTABroadcastMsg_LANLobbyRequest();
	virtual ~CDOTABroadcastMsg_LANLobbyRequest();
	CDOTABroadcastMsg_LANLobbyRequest(const CDOTABroadcastMsg_LANLobbyRequest &);
	CDOTABroadcastMsg_LANLobbyRequest & operator=(const CDOTABroadcastMsg_LANLobbyRequest &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTABroadcastMsg_LANLobbyRequest & default_instance();
	void Swap(CDOTABroadcastMsg_LANLobbyRequest *);
	virtual CDOTABroadcastMsg_LANLobbyRequest * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTABroadcastMsg_LANLobbyRequest &);
	void MergeFrom(const CDOTABroadcastMsg_LANLobbyRequest &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.h:231
class CDOTABroadcastMsg_LANLobbyReply_CLobbyMember : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPlayerNameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * player_name_;  // +0x18
	uint32 account_id_;  // +0x20

	static CDOTABroadcastMsg_LANLobbyReply_CLobbyMember * default_instance_;
	CDOTABroadcastMsg_LANLobbyReply_CLobbyMember();
	virtual ~CDOTABroadcastMsg_LANLobbyReply_CLobbyMember();
	CDOTABroadcastMsg_LANLobbyReply_CLobbyMember(const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember &);
	CDOTABroadcastMsg_LANLobbyReply_CLobbyMember & operator=(const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember & default_instance();
	void Swap(CDOTABroadcastMsg_LANLobbyReply_CLobbyMember *);
	virtual CDOTABroadcastMsg_LANLobbyReply_CLobbyMember * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember &);
	void MergeFrom(const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember &);
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
	bool has_player_name();
	void clear_player_name();
	const string & player_name();
	void set_player_name(const string &);
	void set_player_name(const char *);
	void set_player_name(const char *, size_t);
	string * mutable_player_name();
	string * release_player_name();
	void set_allocated_player_name(string *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_player_name();
	void clear_has_player_name();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_broadcastmessages.pb.h:325
class CDOTABroadcastMsg_LANLobbyReply : public Message {
public:

	static const int kIdFieldNumber = 1;
	static const int kTournamentIdFieldNumber = 2;
	static const int kTournamentGameIdFieldNumber = 3;
	static const int kMembersFieldNumber = 4;
	static const int kRequiresPassKeyFieldNumber = 5;
	static const int kLeaderAccountIdFieldNumber = 6;
	static const int kGameModeFieldNumber = 7;
	static const int kNameFieldNumber = 8;
	static const int kPlayersFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 id_;  // +0x18
	uint32 tournament_id_;  // +0x20
	uint32 tournament_game_id_;  // +0x24
	bool requires_pass_key_;  // +0x40

	uint32 leader_account_id_;  // +0x44
	string * name_;  // +0x48
	uint32 game_mode_;  // +0x50
	uint32 players_;  // +0x54

	static CDOTABroadcastMsg_LANLobbyReply * default_instance_;
	CDOTABroadcastMsg_LANLobbyReply();
	virtual ~CDOTABroadcastMsg_LANLobbyReply();
	CDOTABroadcastMsg_LANLobbyReply(const CDOTABroadcastMsg_LANLobbyReply &);
	CDOTABroadcastMsg_LANLobbyReply & operator=(const CDOTABroadcastMsg_LANLobbyReply &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTABroadcastMsg_LANLobbyReply & default_instance();
	void Swap(CDOTABroadcastMsg_LANLobbyReply *);
	virtual CDOTABroadcastMsg_LANLobbyReply * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTABroadcastMsg_LANLobbyReply &);
	void MergeFrom(const CDOTABroadcastMsg_LANLobbyReply &);
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
	bool has_tournament_id();
	void clear_tournament_id();
	uint32 tournament_id();
	void set_tournament_id(uint32);
	bool has_tournament_game_id();
	void clear_tournament_game_id();
	uint32 tournament_game_id();
	void set_tournament_game_id(uint32);
	int members_size();
	void clear_members();
	const CDOTABroadcastMsg_LANLobbyReply_CLobbyMember & members(int);
	CDOTABroadcastMsg_LANLobbyReply_CLobbyMember * mutable_members(int);
	CDOTABroadcastMsg_LANLobbyReply_CLobbyMember * add_members();
	const RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember> & members();
	RepeatedPtrField<CDOTABroadcastMsg_LANLobbyReply_CLobbyMember> * mutable_members();
	bool has_requires_pass_key();
	void clear_requires_pass_key();
	bool requires_pass_key();
	void set_requires_pass_key(bool);
	bool has_leader_account_id();
	void clear_leader_account_id();
	uint32 leader_account_id();
	void set_leader_account_id(uint32);
	bool has_game_mode();
	void clear_game_mode();
	uint32 game_mode();
	void set_game_mode(uint32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_players();
	void clear_players();
	uint32 players();
	void set_players(uint32);
	void set_has_id();
	void clear_has_id();
	void set_has_tournament_id();
	void clear_has_tournament_id();
	void set_has_tournament_game_id();
	void clear_has_tournament_game_id();
	void set_has_requires_pass_key();
	void clear_has_requires_pass_key();
	void set_has_leader_account_id();
	void clear_has_leader_account_id();
	void set_has_game_mode();
	void clear_has_game_mode();
	void set_has_name();
	void clear_has_name();
	void set_has_players();
	void clear_has_players();
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
