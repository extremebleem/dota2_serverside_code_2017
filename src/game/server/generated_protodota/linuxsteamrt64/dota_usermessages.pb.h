// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:776
class CDOTAUserMsg_AIDebugLine : public Message {
public:

	static const int kMessageFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18

	static CDOTAUserMsg_AIDebugLine * default_instance_;
	CDOTAUserMsg_AIDebugLine();
	virtual ~CDOTAUserMsg_AIDebugLine();
	CDOTAUserMsg_AIDebugLine(const CDOTAUserMsg_AIDebugLine &);
	CDOTAUserMsg_AIDebugLine & operator=(const CDOTAUserMsg_AIDebugLine &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_AIDebugLine & default_instance();
	void Swap(CDOTAUserMsg_AIDebugLine *);
	virtual CDOTAUserMsg_AIDebugLine * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_AIDebugLine &);
	void MergeFrom(const CDOTAUserMsg_AIDebugLine &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:860
class CDOTAUserMsg_Ping : public Message {
public:

	static const int kPingFieldNumber = 2;
	static const int kLossFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ping_;  // +0x18
	uint32 loss_;  // +0x1c

	static CDOTAUserMsg_Ping * default_instance_;
	CDOTAUserMsg_Ping();
	virtual ~CDOTAUserMsg_Ping();
	CDOTAUserMsg_Ping(const CDOTAUserMsg_Ping &);
	CDOTAUserMsg_Ping & operator=(const CDOTAUserMsg_Ping &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_Ping & default_instance();
	void Swap(CDOTAUserMsg_Ping *);
	virtual CDOTAUserMsg_Ping * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_Ping &);
	void MergeFrom(const CDOTAUserMsg_Ping &);
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
	bool has_ping();
	void clear_ping();
	uint32 ping();
	void set_ping(uint32);
	bool has_loss();
	void clear_loss();
	uint32 loss();
	void set_loss(uint32);
	void set_has_ping();
	void clear_has_ping();
	void set_has_loss();
	void clear_has_loss();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:949
class CDOTAUserMsg_SwapVerify : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18

	static CDOTAUserMsg_SwapVerify * default_instance_;
	CDOTAUserMsg_SwapVerify();
	virtual ~CDOTAUserMsg_SwapVerify();
	CDOTAUserMsg_SwapVerify(const CDOTAUserMsg_SwapVerify &);
	CDOTAUserMsg_SwapVerify & operator=(const CDOTAUserMsg_SwapVerify &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SwapVerify & default_instance();
	void Swap(CDOTAUserMsg_SwapVerify *);
	virtual CDOTAUserMsg_SwapVerify * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SwapVerify &);
	void MergeFrom(const CDOTAUserMsg_SwapVerify &);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1028
class CDOTAUserMsg_ChatEvent : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kValueFieldNumber = 2;
	static const int kPlayerid1FieldNumber = 3;
	static const int kPlayerid2FieldNumber = 4;
	static const int kPlayerid3FieldNumber = 5;
	static const int kPlayerid4FieldNumber = 6;
	static const int kPlayerid5FieldNumber = 7;
	static const int kPlayerid6FieldNumber = 8;
	static const int kValue2FieldNumber = 9;
	static const int kValue3FieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int type_;  // +0x18
	uint32 value_;  // +0x1c
	int32 playerid_1_;  // +0x20
	int32 playerid_2_;  // +0x24
	int32 playerid_3_;  // +0x28
	int32 playerid_4_;  // +0x2c
	int32 playerid_5_;  // +0x30
	int32 playerid_6_;  // +0x34
	uint32 value2_;  // +0x38
	uint32 value3_;  // +0x3c

	static CDOTAUserMsg_ChatEvent * default_instance_;
	CDOTAUserMsg_ChatEvent();
	virtual ~CDOTAUserMsg_ChatEvent();
	CDOTAUserMsg_ChatEvent(const CDOTAUserMsg_ChatEvent &);
	CDOTAUserMsg_ChatEvent & operator=(const CDOTAUserMsg_ChatEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ChatEvent & default_instance();
	void Swap(CDOTAUserMsg_ChatEvent *);
	virtual CDOTAUserMsg_ChatEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ChatEvent &);
	void MergeFrom(const CDOTAUserMsg_ChatEvent &);
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
	DOTA_CHAT_MESSAGE type();
	void set_type(DOTA_CHAT_MESSAGE);
	bool has_value();
	void clear_value();
	uint32 value();
	void set_value(uint32);
	bool has_playerid_1();
	void clear_playerid_1();
	int32 playerid_1();
	void set_playerid_1(int32);
	bool has_playerid_2();
	void clear_playerid_2();
	int32 playerid_2();
	void set_playerid_2(int32);
	bool has_playerid_3();
	void clear_playerid_3();
	int32 playerid_3();
	void set_playerid_3(int32);
	bool has_playerid_4();
	void clear_playerid_4();
	int32 playerid_4();
	void set_playerid_4(int32);
	bool has_playerid_5();
	void clear_playerid_5();
	int32 playerid_5();
	void set_playerid_5(int32);
	bool has_playerid_6();
	void clear_playerid_6();
	int32 playerid_6();
	void set_playerid_6(int32);
	bool has_value2();
	void clear_value2();
	uint32 value2();
	void set_value2(uint32);
	bool has_value3();
	void clear_value3();
	uint32 value3();
	void set_value3(uint32);
	void set_has_type();
	void clear_has_type();
	void set_has_value();
	void clear_has_value();
	void set_has_playerid_1();
	void clear_has_playerid_1();
	void set_has_playerid_2();
	void clear_has_playerid_2();
	void set_has_playerid_3();
	void clear_has_playerid_3();
	void set_has_playerid_4();
	void clear_has_playerid_4();
	void set_has_playerid_5();
	void clear_has_playerid_5();
	void set_has_playerid_6();
	void clear_has_playerid_6();
	void set_has_value2();
	void clear_has_value2();
	void set_has_value3();
	void clear_has_value3();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1197
class CDOTAUserMsg_CombatLogShowDeath : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_CombatLogShowDeath * default_instance_;
	CDOTAUserMsg_CombatLogShowDeath();
	virtual ~CDOTAUserMsg_CombatLogShowDeath();
	CDOTAUserMsg_CombatLogShowDeath(const CDOTAUserMsg_CombatLogShowDeath &);
	CDOTAUserMsg_CombatLogShowDeath & operator=(const CDOTAUserMsg_CombatLogShowDeath &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CombatLogShowDeath & default_instance();
	void Swap(CDOTAUserMsg_CombatLogShowDeath *);
	virtual CDOTAUserMsg_CombatLogShowDeath * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CombatLogShowDeath &);
	void MergeFrom(const CDOTAUserMsg_CombatLogShowDeath &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1266
class CDOTAUserMsg_BotChat : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kMessageFieldNumber = 3;
	static const int kTargetFieldNumber = 4;
	static const int kTeamOnlyFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18
	uint32 player_id_;  // +0x20
	bool team_only_;  // +0x24

	string * target_;  // +0x28

	static CDOTAUserMsg_BotChat * default_instance_;
	CDOTAUserMsg_BotChat();
	virtual ~CDOTAUserMsg_BotChat();
	CDOTAUserMsg_BotChat(const CDOTAUserMsg_BotChat &);
	CDOTAUserMsg_BotChat & operator=(const CDOTAUserMsg_BotChat &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_BotChat & default_instance();
	void Swap(CDOTAUserMsg_BotChat *);
	virtual CDOTAUserMsg_BotChat * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_BotChat &);
	void MergeFrom(const CDOTAUserMsg_BotChat &);
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
	bool has_message();
	void clear_message();
	const string & message();
	void set_message(const string &);
	void set_message(const char *);
	void set_message(const char *, size_t);
	string * mutable_message();
	string * release_message();
	void set_allocated_message(string *);
	bool has_target();
	void clear_target();
	const string & target();
	void set_target(const string &);
	void set_target(const char *);
	void set_target(const char *, size_t);
	string * mutable_target();
	string * release_target();
	void set_allocated_target(string *);
	bool has_team_only();
	void clear_team_only();
	bool team_only();
	void set_team_only(bool);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_message();
	void clear_has_message();
	void set_has_target();
	void clear_has_target();
	void set_has_team_only();
	void clear_has_team_only();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1385
class CDOTAUserMsg_CombatHeroPositions : public Message {
public:

	static const int kIndexFieldNumber = 1;
	static const int kTimeFieldNumber = 2;
	static const int kWorldPosFieldNumber = 3;
	static const int kHealthFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 index_;  // +0x18
	int32 time_;  // +0x1c
	int32 health_;  // +0x28

	static CDOTAUserMsg_CombatHeroPositions * default_instance_;
	CDOTAUserMsg_CombatHeroPositions();
	virtual ~CDOTAUserMsg_CombatHeroPositions();
	CDOTAUserMsg_CombatHeroPositions(const CDOTAUserMsg_CombatHeroPositions &);
	CDOTAUserMsg_CombatHeroPositions & operator=(const CDOTAUserMsg_CombatHeroPositions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CombatHeroPositions & default_instance();
	void Swap(CDOTAUserMsg_CombatHeroPositions *);
	virtual CDOTAUserMsg_CombatHeroPositions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CombatHeroPositions &);
	void MergeFrom(const CDOTAUserMsg_CombatHeroPositions &);
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
	bool has_index();
	void clear_index();
	uint32 index();
	void set_index(uint32);
	bool has_time();
	void clear_time();
	int32 time();
	void set_time(int32);
	bool has_world_pos();
	void clear_world_pos();
	const CMsgVector2D & world_pos();
	CMsgVector2D * mutable_world_pos();
	CMsgVector2D * release_world_pos();
	void set_allocated_world_pos(CMsgVector2D *);
	bool has_health();
	void clear_health();
	int32 health();
	void set_health(int32);
	void set_has_index();
	void clear_has_index();
	void set_has_time();
	void clear_has_time();
	void set_has_world_pos();
	void clear_has_world_pos();
	void set_has_health();
	void clear_has_health();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1496
class CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability : public Message {
public:

	static const int kAbilityFieldNumber = 1;
	static const int kDamageFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ability_;  // +0x18
	int32 damage_;  // +0x1c

	static CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability * default_instance_;
	CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability();
	virtual ~CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability();
	CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability(const CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability &);
	CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability & operator=(const CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability & default_instance();
	void Swap(CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability *);
	virtual CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability &);
	void MergeFrom(const CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability &);
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
	bool has_damage();
	void clear_damage();
	int32 damage();
	void set_damage(int32);
	void set_has_ability();
	void clear_has_ability();
	void set_has_damage();
	void clear_has_damage();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1585
class CDOTAUserMsg_MiniKillCamInfo_Attacker : public Message {
public:

	static const int kAttackerFieldNumber = 1;
	static const int kTotalDamageFieldNumber = 2;
	static const int kAbilitiesFieldNumber = 3;
	static const int kAttackerNameFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 attacker_;  // +0x18
	int32 total_damage_;  // +0x1c
	string * attacker_name_;  // +0x38

	static CDOTAUserMsg_MiniKillCamInfo_Attacker * default_instance_;
	CDOTAUserMsg_MiniKillCamInfo_Attacker();
	virtual ~CDOTAUserMsg_MiniKillCamInfo_Attacker();
	CDOTAUserMsg_MiniKillCamInfo_Attacker(const CDOTAUserMsg_MiniKillCamInfo_Attacker &);
	CDOTAUserMsg_MiniKillCamInfo_Attacker & operator=(const CDOTAUserMsg_MiniKillCamInfo_Attacker &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_MiniKillCamInfo_Attacker & default_instance();
	void Swap(CDOTAUserMsg_MiniKillCamInfo_Attacker *);
	virtual CDOTAUserMsg_MiniKillCamInfo_Attacker * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_MiniKillCamInfo_Attacker &);
	void MergeFrom(const CDOTAUserMsg_MiniKillCamInfo_Attacker &);
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
	bool has_attacker();
	void clear_attacker();
	uint32 attacker();
	void set_attacker(uint32);
	bool has_total_damage();
	void clear_total_damage();
	int32 total_damage();
	void set_total_damage(int32);
	int abilities_size();
	void clear_abilities();
	const CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability & abilities(int);
	CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability * mutable_abilities(int);
	CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability * add_abilities();
	const RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability> & abilities();
	RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker_Ability> * mutable_abilities();
	bool has_attacker_name();
	void clear_attacker_name();
	const string & attacker_name();
	void set_attacker_name(const string &);
	void set_attacker_name(const char *);
	void set_attacker_name(const char *, size_t);
	string * mutable_attacker_name();
	string * release_attacker_name();
	void set_allocated_attacker_name(string *);
	void set_has_attacker();
	void clear_has_attacker();
	void set_has_total_damage();
	void clear_has_total_damage();
	void set_has_attacker_name();
	void clear_has_attacker_name();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1704
class CDOTAUserMsg_MiniKillCamInfo : public Message {
public:

	static const int kAttackersFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_MiniKillCamInfo * default_instance_;
	CDOTAUserMsg_MiniKillCamInfo();
	virtual ~CDOTAUserMsg_MiniKillCamInfo();
	CDOTAUserMsg_MiniKillCamInfo(const CDOTAUserMsg_MiniKillCamInfo &);
	CDOTAUserMsg_MiniKillCamInfo & operator=(const CDOTAUserMsg_MiniKillCamInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_MiniKillCamInfo & default_instance();
	void Swap(CDOTAUserMsg_MiniKillCamInfo *);
	virtual CDOTAUserMsg_MiniKillCamInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_MiniKillCamInfo &);
	void MergeFrom(const CDOTAUserMsg_MiniKillCamInfo &);
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
	int attackers_size();
	void clear_attackers();
	const CDOTAUserMsg_MiniKillCamInfo_Attacker & attackers(int);
	CDOTAUserMsg_MiniKillCamInfo_Attacker * mutable_attackers(int);
	CDOTAUserMsg_MiniKillCamInfo_Attacker * add_attackers();
	const RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker> & attackers();
	RepeatedPtrField<CDOTAUserMsg_MiniKillCamInfo_Attacker> * mutable_attackers();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1788
class CDOTAUserMsg_GlobalLightColor : public Message {
public:

	static const int kColorFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 color_;  // +0x18
	float duration_;  // +0x1c

	static CDOTAUserMsg_GlobalLightColor * default_instance_;
	CDOTAUserMsg_GlobalLightColor();
	virtual ~CDOTAUserMsg_GlobalLightColor();
	CDOTAUserMsg_GlobalLightColor(const CDOTAUserMsg_GlobalLightColor &);
	CDOTAUserMsg_GlobalLightColor & operator=(const CDOTAUserMsg_GlobalLightColor &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_GlobalLightColor & default_instance();
	void Swap(CDOTAUserMsg_GlobalLightColor *);
	virtual CDOTAUserMsg_GlobalLightColor * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_GlobalLightColor &);
	void MergeFrom(const CDOTAUserMsg_GlobalLightColor &);
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
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	void set_has_color();
	void clear_has_color();
	void set_has_duration();
	void clear_has_duration();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1877
class CDOTAUserMsg_GlobalLightDirection : public Message {
public:

	static const int kDirectionFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float duration_;  // +0x20

	static CDOTAUserMsg_GlobalLightDirection * default_instance_;
	CDOTAUserMsg_GlobalLightDirection();
	virtual ~CDOTAUserMsg_GlobalLightDirection();
	CDOTAUserMsg_GlobalLightDirection(const CDOTAUserMsg_GlobalLightDirection &);
	CDOTAUserMsg_GlobalLightDirection & operator=(const CDOTAUserMsg_GlobalLightDirection &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_GlobalLightDirection & default_instance();
	void Swap(CDOTAUserMsg_GlobalLightDirection *);
	virtual CDOTAUserMsg_GlobalLightDirection * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_GlobalLightDirection &);
	void MergeFrom(const CDOTAUserMsg_GlobalLightDirection &);
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
	bool has_direction();
	void clear_direction();
	const CMsgVector & direction();
	CMsgVector * mutable_direction();
	CMsgVector * release_direction();
	void set_allocated_direction(CMsgVector *);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	void set_has_direction();
	void clear_has_direction();
	void set_has_duration();
	void clear_has_duration();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:1968
class CDOTAUserMsg_LocationPing : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kLocationPingFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x20

	static CDOTAUserMsg_LocationPing * default_instance_;
	CDOTAUserMsg_LocationPing();
	virtual ~CDOTAUserMsg_LocationPing();
	CDOTAUserMsg_LocationPing(const CDOTAUserMsg_LocationPing &);
	CDOTAUserMsg_LocationPing & operator=(const CDOTAUserMsg_LocationPing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_LocationPing & default_instance();
	void Swap(CDOTAUserMsg_LocationPing *);
	virtual CDOTAUserMsg_LocationPing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_LocationPing &);
	void MergeFrom(const CDOTAUserMsg_LocationPing &);
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
	bool has_location_ping();
	void clear_location_ping();
	const CDOTAMsg_LocationPing & location_ping();
	CDOTAMsg_LocationPing * mutable_location_ping();
	CDOTAMsg_LocationPing * release_location_ping();
	void set_allocated_location_ping(CDOTAMsg_LocationPing *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_location_ping();
	void clear_has_location_ping();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2059
class CDOTAUserMsg_ItemAlert : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kItemAlertFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x20

	static CDOTAUserMsg_ItemAlert * default_instance_;
	CDOTAUserMsg_ItemAlert();
	virtual ~CDOTAUserMsg_ItemAlert();
	CDOTAUserMsg_ItemAlert(const CDOTAUserMsg_ItemAlert &);
	CDOTAUserMsg_ItemAlert & operator=(const CDOTAUserMsg_ItemAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ItemAlert & default_instance();
	void Swap(CDOTAUserMsg_ItemAlert *);
	virtual CDOTAUserMsg_ItemAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ItemAlert &);
	void MergeFrom(const CDOTAUserMsg_ItemAlert &);
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
	bool has_item_alert();
	void clear_item_alert();
	const CDOTAMsg_ItemAlert & item_alert();
	CDOTAMsg_ItemAlert * mutable_item_alert();
	CDOTAMsg_ItemAlert * release_item_alert();
	void set_allocated_item_alert(CDOTAMsg_ItemAlert *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_item_alert();
	void clear_has_item_alert();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2150
class CDOTAUserMsg_EnemyItemAlert : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kTargetPlayerIdFieldNumber = 2;
	static const int kItemidFieldNumber = 3;
	static const int kRuneTypeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 target_player_id_;  // +0x1c
	int32 itemid_;  // +0x20
	uint32 rune_type_;  // +0x24

	static CDOTAUserMsg_EnemyItemAlert * default_instance_;
	CDOTAUserMsg_EnemyItemAlert();
	virtual ~CDOTAUserMsg_EnemyItemAlert();
	CDOTAUserMsg_EnemyItemAlert(const CDOTAUserMsg_EnemyItemAlert &);
	CDOTAUserMsg_EnemyItemAlert & operator=(const CDOTAUserMsg_EnemyItemAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_EnemyItemAlert & default_instance();
	void Swap(CDOTAUserMsg_EnemyItemAlert *);
	virtual CDOTAUserMsg_EnemyItemAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_EnemyItemAlert &);
	void MergeFrom(const CDOTAUserMsg_EnemyItemAlert &);
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
	bool has_target_player_id();
	void clear_target_player_id();
	uint32 target_player_id();
	void set_target_player_id(uint32);
	bool has_itemid();
	void clear_itemid();
	int32 itemid();
	void set_itemid(int32);
	bool has_rune_type();
	void clear_rune_type();
	uint32 rune_type();
	void set_rune_type(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_target_player_id();
	void clear_has_target_player_id();
	void set_has_itemid();
	void clear_has_itemid();
	void set_has_rune_type();
	void clear_has_rune_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2259
class CDOTAUserMsg_ModifierAlert : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kClassNameFieldNumber = 2;
	static const int kStackCountFieldNumber = 3;
	static const int kIsDebuffFieldNumber = 4;
	static const int kTargetEntindexFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * class_name_;  // +0x18
	uint32 player_id_;  // +0x20
	uint32 stack_count_;  // +0x24
	bool is_debuff_;  // +0x28

	uint32 target_entindex_;  // +0x2c

	static CDOTAUserMsg_ModifierAlert * default_instance_;
	CDOTAUserMsg_ModifierAlert();
	virtual ~CDOTAUserMsg_ModifierAlert();
	CDOTAUserMsg_ModifierAlert(const CDOTAUserMsg_ModifierAlert &);
	CDOTAUserMsg_ModifierAlert & operator=(const CDOTAUserMsg_ModifierAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ModifierAlert & default_instance();
	void Swap(CDOTAUserMsg_ModifierAlert *);
	virtual CDOTAUserMsg_ModifierAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ModifierAlert &);
	void MergeFrom(const CDOTAUserMsg_ModifierAlert &);
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
	bool has_class_name();
	void clear_class_name();
	const string & class_name();
	void set_class_name(const string &);
	void set_class_name(const char *);
	void set_class_name(const char *, size_t);
	string * mutable_class_name();
	string * release_class_name();
	void set_allocated_class_name(string *);
	bool has_stack_count();
	void clear_stack_count();
	uint32 stack_count();
	void set_stack_count(uint32);
	bool has_is_debuff();
	void clear_is_debuff();
	bool is_debuff();
	void set_is_debuff(bool);
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_class_name();
	void clear_has_class_name();
	void set_has_stack_count();
	void clear_has_stack_count();
	void set_has_is_debuff();
	void clear_has_is_debuff();
	void set_has_target_entindex();
	void clear_has_target_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2383
class CDOTAUserMsg_HPManaAlert : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kTargetEntindexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 target_entindex_;  // +0x1c

	static CDOTAUserMsg_HPManaAlert * default_instance_;
	CDOTAUserMsg_HPManaAlert();
	virtual ~CDOTAUserMsg_HPManaAlert();
	CDOTAUserMsg_HPManaAlert(const CDOTAUserMsg_HPManaAlert &);
	CDOTAUserMsg_HPManaAlert & operator=(const CDOTAUserMsg_HPManaAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_HPManaAlert & default_instance();
	void Swap(CDOTAUserMsg_HPManaAlert *);
	virtual CDOTAUserMsg_HPManaAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_HPManaAlert &);
	void MergeFrom(const CDOTAUserMsg_HPManaAlert &);
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
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_target_entindex();
	void clear_has_target_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2472
class CDOTAUserMsg_GlyphAlert : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kNegativeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	bool negative_;  // +0x1c

	static CDOTAUserMsg_GlyphAlert * default_instance_;
	CDOTAUserMsg_GlyphAlert();
	virtual ~CDOTAUserMsg_GlyphAlert();
	CDOTAUserMsg_GlyphAlert(const CDOTAUserMsg_GlyphAlert &);
	CDOTAUserMsg_GlyphAlert & operator=(const CDOTAUserMsg_GlyphAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_GlyphAlert & default_instance();
	void Swap(CDOTAUserMsg_GlyphAlert *);
	virtual CDOTAUserMsg_GlyphAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_GlyphAlert &);
	void MergeFrom(const CDOTAUserMsg_GlyphAlert &);
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
	bool has_negative();
	void clear_negative();
	bool negative();
	void set_negative(bool);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_negative();
	void clear_has_negative();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2561
class CDOTAUserMsg_WillPurchaseAlert : public Message {
public:

	static const int kItemidFieldNumber = 1;
	static const int kPlayerIdFieldNumber = 2;
	static const int kGoldRemainingFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 itemid_;  // +0x18
	int32 player_id_;  // +0x1c
	uint32 gold_remaining_;  // +0x20

	static CDOTAUserMsg_WillPurchaseAlert * default_instance_;
	CDOTAUserMsg_WillPurchaseAlert();
	virtual ~CDOTAUserMsg_WillPurchaseAlert();
	CDOTAUserMsg_WillPurchaseAlert(const CDOTAUserMsg_WillPurchaseAlert &);
	CDOTAUserMsg_WillPurchaseAlert & operator=(const CDOTAUserMsg_WillPurchaseAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_WillPurchaseAlert & default_instance();
	void Swap(CDOTAUserMsg_WillPurchaseAlert *);
	virtual CDOTAUserMsg_WillPurchaseAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_WillPurchaseAlert &);
	void MergeFrom(const CDOTAUserMsg_WillPurchaseAlert &);
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
	bool has_itemid();
	void clear_itemid();
	int32 itemid();
	void set_itemid(int32);
	bool has_player_id();
	void clear_player_id();
	int32 player_id();
	void set_player_id(int32);
	bool has_gold_remaining();
	void clear_gold_remaining();
	uint32 gold_remaining();
	void set_gold_remaining(uint32);
	void set_has_itemid();
	void clear_has_itemid();
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_gold_remaining();
	void clear_has_gold_remaining();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2660
class CDOTAUserMsg_BuyBackStateAlert : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_id_;  // +0x18

	static CDOTAUserMsg_BuyBackStateAlert * default_instance_;
	CDOTAUserMsg_BuyBackStateAlert();
	virtual ~CDOTAUserMsg_BuyBackStateAlert();
	CDOTAUserMsg_BuyBackStateAlert(const CDOTAUserMsg_BuyBackStateAlert &);
	CDOTAUserMsg_BuyBackStateAlert & operator=(const CDOTAUserMsg_BuyBackStateAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_BuyBackStateAlert & default_instance();
	void Swap(CDOTAUserMsg_BuyBackStateAlert *);
	virtual CDOTAUserMsg_BuyBackStateAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_BuyBackStateAlert &);
	void MergeFrom(const CDOTAUserMsg_BuyBackStateAlert &);
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
	int32 player_id();
	void set_player_id(int32);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2739
class CDOTAUserMsg_QuickBuyAlert : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kItemidFieldNumber = 2;
	static const int kGoldRequiredFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_id_;  // +0x18
	int32 itemid_;  // +0x1c
	int32 gold_required_;  // +0x20

	static CDOTAUserMsg_QuickBuyAlert * default_instance_;
	CDOTAUserMsg_QuickBuyAlert();
	virtual ~CDOTAUserMsg_QuickBuyAlert();
	CDOTAUserMsg_QuickBuyAlert(const CDOTAUserMsg_QuickBuyAlert &);
	CDOTAUserMsg_QuickBuyAlert & operator=(const CDOTAUserMsg_QuickBuyAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_QuickBuyAlert & default_instance();
	void Swap(CDOTAUserMsg_QuickBuyAlert *);
	virtual CDOTAUserMsg_QuickBuyAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_QuickBuyAlert &);
	void MergeFrom(const CDOTAUserMsg_QuickBuyAlert &);
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
	int32 player_id();
	void set_player_id(int32);
	bool has_itemid();
	void clear_itemid();
	int32 itemid();
	void set_itemid(int32);
	bool has_gold_required();
	void clear_gold_required();
	int32 gold_required();
	void set_gold_required(int32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_itemid();
	void clear_has_itemid();
	void set_has_gold_required();
	void clear_has_gold_required();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2838
class CDOTAUserMsg_CourierKilledAlert : public Message {
public:

	static const int kTeamFieldNumber = 1;
	static const int kGoldValueFieldNumber = 2;
	static const int kEntityHandleFieldNumber = 3;
	static const int kTimestampFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 team_;  // +0x18
	uint32 gold_value_;  // +0x1c
	int32 entity_handle_;  // +0x20
	int32 timestamp_;  // +0x24

	static CDOTAUserMsg_CourierKilledAlert * default_instance_;
	CDOTAUserMsg_CourierKilledAlert();
	virtual ~CDOTAUserMsg_CourierKilledAlert();
	CDOTAUserMsg_CourierKilledAlert(const CDOTAUserMsg_CourierKilledAlert &);
	CDOTAUserMsg_CourierKilledAlert & operator=(const CDOTAUserMsg_CourierKilledAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CourierKilledAlert & default_instance();
	void Swap(CDOTAUserMsg_CourierKilledAlert *);
	virtual CDOTAUserMsg_CourierKilledAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CourierKilledAlert &);
	void MergeFrom(const CDOTAUserMsg_CourierKilledAlert &);
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
	bool has_gold_value();
	void clear_gold_value();
	uint32 gold_value();
	void set_gold_value(uint32);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	bool has_timestamp();
	void clear_timestamp();
	int32 timestamp();
	void set_timestamp(int32);
	void set_has_team();
	void clear_has_team();
	void set_has_gold_value();
	void clear_has_gold_value();
	void set_has_entity_handle();
	void clear_has_entity_handle();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:2947
class CDOTAUserMsg_MinimapEvent : public Message {
public:

	static const int kEventTypeFieldNumber = 1;
	static const int kEntityHandleFieldNumber = 2;
	static const int kXFieldNumber = 3;
	static const int kYFieldNumber = 4;
	static const int kDurationFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 event_type_;  // +0x18
	int32 entity_handle_;  // +0x1c
	int32 x_;  // +0x20
	int32 y_;  // +0x24
	int32 duration_;  // +0x28

	static CDOTAUserMsg_MinimapEvent * default_instance_;
	CDOTAUserMsg_MinimapEvent();
	virtual ~CDOTAUserMsg_MinimapEvent();
	CDOTAUserMsg_MinimapEvent(const CDOTAUserMsg_MinimapEvent &);
	CDOTAUserMsg_MinimapEvent & operator=(const CDOTAUserMsg_MinimapEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_MinimapEvent & default_instance();
	void Swap(CDOTAUserMsg_MinimapEvent *);
	virtual CDOTAUserMsg_MinimapEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_MinimapEvent &);
	void MergeFrom(const CDOTAUserMsg_MinimapEvent &);
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
	int32 event_type();
	void set_event_type(int32);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	bool has_x();
	void clear_x();
	int32 x();
	void set_x(int32);
	bool has_y();
	void clear_y();
	int32 y();
	void set_y(int32);
	bool has_duration();
	void clear_duration();
	int32 duration();
	void set_duration(int32);
	void set_has_event_type();
	void clear_has_event_type();
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void set_has_x();
	void clear_has_x();
	void set_has_y();
	void clear_has_y();
	void set_has_duration();
	void clear_has_duration();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3066
class CDOTAUserMsg_MapLine : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kMaplineFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_id_;  // +0x20

	static CDOTAUserMsg_MapLine * default_instance_;
	CDOTAUserMsg_MapLine();
	virtual ~CDOTAUserMsg_MapLine();
	CDOTAUserMsg_MapLine(const CDOTAUserMsg_MapLine &);
	CDOTAUserMsg_MapLine & operator=(const CDOTAUserMsg_MapLine &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_MapLine & default_instance();
	void Swap(CDOTAUserMsg_MapLine *);
	virtual CDOTAUserMsg_MapLine * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_MapLine &);
	void MergeFrom(const CDOTAUserMsg_MapLine &);
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
	int32 player_id();
	void set_player_id(int32);
	bool has_mapline();
	void clear_mapline();
	const CDOTAMsg_MapLine & mapline();
	CDOTAMsg_MapLine * mutable_mapline();
	CDOTAMsg_MapLine * release_mapline();
	void set_allocated_mapline(CDOTAMsg_MapLine *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_mapline();
	void clear_has_mapline();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3157
class CDOTAUserMsg_MinimapDebugPoint : public Message {
public:

	static const int kLocationFieldNumber = 1;
	static const int kColorFieldNumber = 2;
	static const int kSizeFieldNumber = 3;
	static const int kDurationFieldNumber = 4;
	static const int kIndexFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 color_;  // +0x20
	int32 size_;  // +0x24
	float duration_;  // +0x28
	int32 index_;  // +0x2c

	static CDOTAUserMsg_MinimapDebugPoint * default_instance_;
	CDOTAUserMsg_MinimapDebugPoint();
	virtual ~CDOTAUserMsg_MinimapDebugPoint();
	CDOTAUserMsg_MinimapDebugPoint(const CDOTAUserMsg_MinimapDebugPoint &);
	CDOTAUserMsg_MinimapDebugPoint & operator=(const CDOTAUserMsg_MinimapDebugPoint &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_MinimapDebugPoint & default_instance();
	void Swap(CDOTAUserMsg_MinimapDebugPoint *);
	virtual CDOTAUserMsg_MinimapDebugPoint * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_MinimapDebugPoint &);
	void MergeFrom(const CDOTAUserMsg_MinimapDebugPoint &);
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
	bool has_location();
	void clear_location();
	const CMsgVector & location();
	CMsgVector * mutable_location();
	CMsgVector * release_location();
	void set_allocated_location(CMsgVector *);
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_size();
	void clear_size();
	int32 size();
	void set_size(int32);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_index();
	void clear_index();
	int32 index();
	void set_index(int32);
	void set_has_location();
	void clear_has_location();
	void set_has_color();
	void clear_has_color();
	void set_has_size();
	void clear_has_size();
	void set_has_duration();
	void clear_has_duration();
	void set_has_index();
	void clear_has_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3278
class CDOTAUserMsg_CreateLinearProjectile : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kVelocityFieldNumber = 2;
	static const int kEntindexFieldNumber = 4;
	static const int kParticleIndexFieldNumber = 5;
	static const int kHandleFieldNumber = 6;
	static const int kAccelerationFieldNumber = 7;
	static const int kMaxSpeedFieldNumber = 8;
	static const int kFowRadiusFieldNumber = 9;
	static const int kStickyFowRevealFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 particle_index_;  // +0x28
	int32 entindex_;  // +0x30
	int32 handle_;  // +0x34
	float max_speed_;  // +0x40
	float fow_radius_;  // +0x44
	bool sticky_fow_reveal_;  // +0x48

	static CDOTAUserMsg_CreateLinearProjectile * default_instance_;
	CDOTAUserMsg_CreateLinearProjectile();
	virtual ~CDOTAUserMsg_CreateLinearProjectile();
	CDOTAUserMsg_CreateLinearProjectile(const CDOTAUserMsg_CreateLinearProjectile &);
	CDOTAUserMsg_CreateLinearProjectile & operator=(const CDOTAUserMsg_CreateLinearProjectile &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CreateLinearProjectile & default_instance();
	void Swap(CDOTAUserMsg_CreateLinearProjectile *);
	virtual CDOTAUserMsg_CreateLinearProjectile * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CreateLinearProjectile &);
	void MergeFrom(const CDOTAUserMsg_CreateLinearProjectile &);
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
	bool has_origin();
	void clear_origin();
	const CMsgVector & origin();
	CMsgVector * mutable_origin();
	CMsgVector * release_origin();
	void set_allocated_origin(CMsgVector *);
	bool has_velocity();
	void clear_velocity();
	const CMsgVector2D & velocity();
	CMsgVector2D * mutable_velocity();
	CMsgVector2D * release_velocity();
	void set_allocated_velocity(CMsgVector2D *);
	bool has_entindex();
	void clear_entindex();
	int32 entindex();
	void set_entindex(int32);
	bool has_particle_index();
	void clear_particle_index();
	uint64 particle_index();
	void set_particle_index(uint64);
	bool has_handle();
	void clear_handle();
	int32 handle();
	void set_handle(int32);
	bool has_acceleration();
	void clear_acceleration();
	const CMsgVector2D & acceleration();
	CMsgVector2D * mutable_acceleration();
	CMsgVector2D * release_acceleration();
	void set_allocated_acceleration(CMsgVector2D *);
	bool has_max_speed();
	void clear_max_speed();
	float max_speed();
	void set_max_speed(float);
	bool has_fow_radius();
	void clear_fow_radius();
	float fow_radius();
	void set_fow_radius(float);
	bool has_sticky_fow_reveal();
	void clear_sticky_fow_reveal();
	bool sticky_fow_reveal();
	void set_sticky_fow_reveal(bool);
	void set_has_origin();
	void clear_has_origin();
	void set_has_velocity();
	void clear_has_velocity();
	void set_has_entindex();
	void clear_has_entindex();
	void set_has_particle_index();
	void clear_has_particle_index();
	void set_has_handle();
	void clear_has_handle();
	void set_has_acceleration();
	void clear_has_acceleration();
	void set_has_max_speed();
	void clear_has_max_speed();
	void set_has_fow_radius();
	void clear_has_fow_radius();
	void set_has_sticky_fow_reveal();
	void clear_has_sticky_fow_reveal();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3443
class CDOTAUserMsg_DestroyLinearProjectile : public Message {
public:

	static const int kHandleFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 handle_;  // +0x18

	static CDOTAUserMsg_DestroyLinearProjectile * default_instance_;
	CDOTAUserMsg_DestroyLinearProjectile();
	virtual ~CDOTAUserMsg_DestroyLinearProjectile();
	CDOTAUserMsg_DestroyLinearProjectile(const CDOTAUserMsg_DestroyLinearProjectile &);
	CDOTAUserMsg_DestroyLinearProjectile & operator=(const CDOTAUserMsg_DestroyLinearProjectile &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_DestroyLinearProjectile & default_instance();
	void Swap(CDOTAUserMsg_DestroyLinearProjectile *);
	virtual CDOTAUserMsg_DestroyLinearProjectile * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_DestroyLinearProjectile &);
	void MergeFrom(const CDOTAUserMsg_DestroyLinearProjectile &);
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
	bool has_handle();
	void clear_handle();
	int32 handle();
	void set_handle(int32);
	void set_has_handle();
	void clear_has_handle();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3522
class CDOTAUserMsg_DodgeTrackingProjectiles : public Message {
public:

	static const int kEntindexFieldNumber = 1;
	static const int kAttacksOnlyFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entindex_;  // +0x18
	bool attacks_only_;  // +0x1c

	static CDOTAUserMsg_DodgeTrackingProjectiles * default_instance_;
	CDOTAUserMsg_DodgeTrackingProjectiles();
	virtual ~CDOTAUserMsg_DodgeTrackingProjectiles();
	CDOTAUserMsg_DodgeTrackingProjectiles(const CDOTAUserMsg_DodgeTrackingProjectiles &);
	CDOTAUserMsg_DodgeTrackingProjectiles & operator=(const CDOTAUserMsg_DodgeTrackingProjectiles &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_DodgeTrackingProjectiles & default_instance();
	void Swap(CDOTAUserMsg_DodgeTrackingProjectiles *);
	virtual CDOTAUserMsg_DodgeTrackingProjectiles * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_DodgeTrackingProjectiles &);
	void MergeFrom(const CDOTAUserMsg_DodgeTrackingProjectiles &);
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
	bool has_entindex();
	void clear_entindex();
	int32 entindex();
	void set_entindex(int32);
	bool has_attacks_only();
	void clear_attacks_only();
	bool attacks_only();
	void set_attacks_only(bool);
	void set_has_entindex();
	void clear_has_entindex();
	void set_has_attacks_only();
	void clear_has_attacks_only();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3611
class CDOTAUserMsg_SpectatorPlayerClick : public Message {
public:

	static const int kEntindexFieldNumber = 1;
	static const int kOrderTypeFieldNumber = 2;
	static const int kTargetIndexFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entindex_;  // +0x18
	int32 order_type_;  // +0x1c
	int32 target_index_;  // +0x20

	static CDOTAUserMsg_SpectatorPlayerClick * default_instance_;
	CDOTAUserMsg_SpectatorPlayerClick();
	virtual ~CDOTAUserMsg_SpectatorPlayerClick();
	CDOTAUserMsg_SpectatorPlayerClick(const CDOTAUserMsg_SpectatorPlayerClick &);
	CDOTAUserMsg_SpectatorPlayerClick & operator=(const CDOTAUserMsg_SpectatorPlayerClick &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SpectatorPlayerClick & default_instance();
	void Swap(CDOTAUserMsg_SpectatorPlayerClick *);
	virtual CDOTAUserMsg_SpectatorPlayerClick * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SpectatorPlayerClick &);
	void MergeFrom(const CDOTAUserMsg_SpectatorPlayerClick &);
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
	bool has_entindex();
	void clear_entindex();
	int32 entindex();
	void set_entindex(int32);
	bool has_order_type();
	void clear_order_type();
	int32 order_type();
	void set_order_type(int32);
	bool has_target_index();
	void clear_target_index();
	int32 target_index();
	void set_target_index(int32);
	void set_has_entindex();
	void clear_has_entindex();
	void set_has_order_type();
	void clear_has_order_type();
	void set_has_target_index();
	void clear_has_target_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3710
class CDOTAUserMsg_SpectatorPlayerUnitOrders : public Message {
public:

	static const int kEntindexFieldNumber = 1;
	static const int kOrderTypeFieldNumber = 2;
	static const int kUnitsFieldNumber = 3;
	static const int kTargetIndexFieldNumber = 4;
	static const int kAbilityIndexFieldNumber = 5;
	static const int kPositionFieldNumber = 6;
	static const int kQueueFieldNumber = 7;
	static const int kSequenceNumberFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entindex_;  // +0x18
	int32 order_type_;  // +0x1c
	int32 target_index_;  // +0x30
	int32 ability_index_;  // +0x34
	bool queue_;  // +0x40

	int32 sequence_number_;  // +0x44

	static CDOTAUserMsg_SpectatorPlayerUnitOrders * default_instance_;
	CDOTAUserMsg_SpectatorPlayerUnitOrders();
	virtual ~CDOTAUserMsg_SpectatorPlayerUnitOrders();
	CDOTAUserMsg_SpectatorPlayerUnitOrders(const CDOTAUserMsg_SpectatorPlayerUnitOrders &);
	CDOTAUserMsg_SpectatorPlayerUnitOrders & operator=(const CDOTAUserMsg_SpectatorPlayerUnitOrders &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SpectatorPlayerUnitOrders & default_instance();
	void Swap(CDOTAUserMsg_SpectatorPlayerUnitOrders *);
	virtual CDOTAUserMsg_SpectatorPlayerUnitOrders * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SpectatorPlayerUnitOrders &);
	void MergeFrom(const CDOTAUserMsg_SpectatorPlayerUnitOrders &);
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
	bool has_entindex();
	void clear_entindex();
	int32 entindex();
	void set_entindex(int32);
	bool has_order_type();
	void clear_order_type();
	int32 order_type();
	void set_order_type(int32);
	int units_size();
	void clear_units();
	int32 units(int);
	void set_units(int, int32);
	void add_units(int32);
	const RepeatedField<int> & units();
	RepeatedField<int> * mutable_units();
	bool has_target_index();
	void clear_target_index();
	int32 target_index();
	void set_target_index(int32);
	bool has_ability_index();
	void clear_ability_index();
	int32 ability_index();
	void set_ability_index(int32);
	bool has_position();
	void clear_position();
	const CMsgVector & position();
	CMsgVector * mutable_position();
	CMsgVector * release_position();
	void set_allocated_position(CMsgVector *);
	bool has_queue();
	void clear_queue();
	bool queue();
	void set_queue(bool);
	bool has_sequence_number();
	void clear_sequence_number();
	int32 sequence_number();
	void set_sequence_number(int32);
	void set_has_entindex();
	void clear_has_entindex();
	void set_has_order_type();
	void clear_has_order_type();
	void set_has_target_index();
	void clear_has_target_index();
	void set_has_ability_index();
	void clear_has_ability_index();
	void set_has_position();
	void clear_has_position();
	void set_has_queue();
	void clear_has_queue();
	void set_has_sequence_number();
	void clear_has_sequence_number();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3864
class CDOTAUserMsg_NevermoreRequiem : public Message {
public:

	static const int kEntityHandleFieldNumber = 1;
	static const int kLinesFieldNumber = 2;
	static const int kOriginFieldNumber = 3;
	static const int kReverseFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entity_handle_;  // +0x18
	int32 lines_;  // +0x1c
	bool reverse_;  // +0x28

	static CDOTAUserMsg_NevermoreRequiem * default_instance_;
	CDOTAUserMsg_NevermoreRequiem();
	virtual ~CDOTAUserMsg_NevermoreRequiem();
	CDOTAUserMsg_NevermoreRequiem(const CDOTAUserMsg_NevermoreRequiem &);
	CDOTAUserMsg_NevermoreRequiem & operator=(const CDOTAUserMsg_NevermoreRequiem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_NevermoreRequiem & default_instance();
	void Swap(CDOTAUserMsg_NevermoreRequiem *);
	virtual CDOTAUserMsg_NevermoreRequiem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_NevermoreRequiem &);
	void MergeFrom(const CDOTAUserMsg_NevermoreRequiem &);
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
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	bool has_lines();
	void clear_lines();
	int32 lines();
	void set_lines(int32);
	bool has_origin();
	void clear_origin();
	const CMsgVector & origin();
	CMsgVector * mutable_origin();
	CMsgVector * release_origin();
	void set_allocated_origin(CMsgVector *);
	bool has_reverse();
	void clear_reverse();
	bool reverse();
	void set_reverse(bool);
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void set_has_lines();
	void clear_has_lines();
	void set_has_origin();
	void clear_has_origin();
	void set_has_reverse();
	void clear_has_reverse();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:3975
class CDOTAUserMsg_InvalidCommand : public Message {
public:

	static const int kMessageFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18

	static CDOTAUserMsg_InvalidCommand * default_instance_;
	CDOTAUserMsg_InvalidCommand();
	virtual ~CDOTAUserMsg_InvalidCommand();
	CDOTAUserMsg_InvalidCommand(const CDOTAUserMsg_InvalidCommand &);
	CDOTAUserMsg_InvalidCommand & operator=(const CDOTAUserMsg_InvalidCommand &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_InvalidCommand & default_instance();
	void Swap(CDOTAUserMsg_InvalidCommand *);
	virtual CDOTAUserMsg_InvalidCommand * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_InvalidCommand &);
	void MergeFrom(const CDOTAUserMsg_InvalidCommand &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4059
class CDOTAUserMsg_HudError : public Message {
public:

	static const int kOrderIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 order_id_;  // +0x18

	static CDOTAUserMsg_HudError * default_instance_;
	CDOTAUserMsg_HudError();
	virtual ~CDOTAUserMsg_HudError();
	CDOTAUserMsg_HudError(const CDOTAUserMsg_HudError &);
	CDOTAUserMsg_HudError & operator=(const CDOTAUserMsg_HudError &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_HudError & default_instance();
	void Swap(CDOTAUserMsg_HudError *);
	virtual CDOTAUserMsg_HudError * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_HudError &);
	void MergeFrom(const CDOTAUserMsg_HudError &);
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
	bool has_order_id();
	void clear_order_id();
	int32 order_id();
	void set_order_id(int32);
	void set_has_order_id();
	void clear_has_order_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4138
class CDOTAUserMsg_SharedCooldown : public Message {
public:

	static const int kEntindexFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kCooldownFieldNumber = 3;
	static const int kNameIndexFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	int32 entindex_;  // +0x20
	float cooldown_;  // +0x24
	int32 name_index_;  // +0x28

	static CDOTAUserMsg_SharedCooldown * default_instance_;
	CDOTAUserMsg_SharedCooldown();
	virtual ~CDOTAUserMsg_SharedCooldown();
	CDOTAUserMsg_SharedCooldown(const CDOTAUserMsg_SharedCooldown &);
	CDOTAUserMsg_SharedCooldown & operator=(const CDOTAUserMsg_SharedCooldown &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SharedCooldown & default_instance();
	void Swap(CDOTAUserMsg_SharedCooldown *);
	virtual CDOTAUserMsg_SharedCooldown * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SharedCooldown &);
	void MergeFrom(const CDOTAUserMsg_SharedCooldown &);
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
	bool has_entindex();
	void clear_entindex();
	int32 entindex();
	void set_entindex(int32);
	bool has_name();
	void clear_name();
	const string & name();
	void set_name(const string &);
	void set_name(const char *);
	void set_name(const char *, size_t);
	string * mutable_name();
	string * release_name();
	void set_allocated_name(string *);
	bool has_cooldown();
	void clear_cooldown();
	float cooldown();
	void set_cooldown(float);
	bool has_name_index();
	void clear_name_index();
	int32 name_index();
	void set_name_index(int32);
	void set_has_entindex();
	void clear_has_entindex();
	void set_has_name();
	void clear_has_name();
	void set_has_cooldown();
	void clear_has_cooldown();
	void set_has_name_index();
	void clear_has_name_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4252
class CDOTAUserMsg_SetNextAutobuyItem : public Message {
public:

	static const int kNameFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18

	static CDOTAUserMsg_SetNextAutobuyItem * default_instance_;
	CDOTAUserMsg_SetNextAutobuyItem();
	virtual ~CDOTAUserMsg_SetNextAutobuyItem();
	CDOTAUserMsg_SetNextAutobuyItem(const CDOTAUserMsg_SetNextAutobuyItem &);
	CDOTAUserMsg_SetNextAutobuyItem & operator=(const CDOTAUserMsg_SetNextAutobuyItem &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SetNextAutobuyItem & default_instance();
	void Swap(CDOTAUserMsg_SetNextAutobuyItem *);
	virtual CDOTAUserMsg_SetNextAutobuyItem * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SetNextAutobuyItem &);
	void MergeFrom(const CDOTAUserMsg_SetNextAutobuyItem &);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4336
class CDOTAUserMsg_HalloweenDrops : public Message {
public:

	static const int kItemDefsFieldNumber = 1;
	static const int kPlayerIdsFieldNumber = 2;
	static const int kPrizeListFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 prize_list_;  // +0x38

	static CDOTAUserMsg_HalloweenDrops * default_instance_;
	CDOTAUserMsg_HalloweenDrops();
	virtual ~CDOTAUserMsg_HalloweenDrops();
	CDOTAUserMsg_HalloweenDrops(const CDOTAUserMsg_HalloweenDrops &);
	CDOTAUserMsg_HalloweenDrops & operator=(const CDOTAUserMsg_HalloweenDrops &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_HalloweenDrops & default_instance();
	void Swap(CDOTAUserMsg_HalloweenDrops *);
	virtual CDOTAUserMsg_HalloweenDrops * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_HalloweenDrops &);
	void MergeFrom(const CDOTAUserMsg_HalloweenDrops &);
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
	int player_ids_size();
	void clear_player_ids();
	uint32 player_ids(int);
	void set_player_ids(int, uint32);
	void add_player_ids(uint32);
	const RepeatedField<unsigned int> & player_ids();
	RepeatedField<unsigned int> * mutable_player_ids();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4441
class CDOTAUserMsg_PredictionResult_Prediction : public Message {
public:

	static const CDOTAUserMsg_PredictionResult_Prediction_EResult k_eResult_ItemGranted = 1;
	static const CDOTAUserMsg_PredictionResult_Prediction_EResult k_eResult_Destroyed = 2;
	static const CDOTAUserMsg_PredictionResult_Prediction_EResult EResult_MIN = 1;
	static const CDOTAUserMsg_PredictionResult_Prediction_EResult EResult_MAX = 2;
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

	static CDOTAUserMsg_PredictionResult_Prediction * default_instance_;
	typedef CDOTAUserMsg_PredictionResult_Prediction_EResult EResult;
	CDOTAUserMsg_PredictionResult_Prediction();
	virtual ~CDOTAUserMsg_PredictionResult_Prediction();
	CDOTAUserMsg_PredictionResult_Prediction(const CDOTAUserMsg_PredictionResult_Prediction &);
	CDOTAUserMsg_PredictionResult_Prediction & operator=(const CDOTAUserMsg_PredictionResult_Prediction &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_PredictionResult_Prediction & default_instance();
	void Swap(CDOTAUserMsg_PredictionResult_Prediction *);
	virtual CDOTAUserMsg_PredictionResult_Prediction * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_PredictionResult_Prediction &);
	void MergeFrom(const CDOTAUserMsg_PredictionResult_Prediction &);
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
	CDOTAUserMsg_PredictionResult_Prediction_EResult result();
	void set_result(CDOTAUserMsg_PredictionResult_Prediction_EResult);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4587
class CDOTAUserMsg_PredictionResult : public Message {
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

	static CDOTAUserMsg_PredictionResult * default_instance_;
	CDOTAUserMsg_PredictionResult();
	virtual ~CDOTAUserMsg_PredictionResult();
	CDOTAUserMsg_PredictionResult(const CDOTAUserMsg_PredictionResult &);
	CDOTAUserMsg_PredictionResult & operator=(const CDOTAUserMsg_PredictionResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_PredictionResult & default_instance();
	void Swap(CDOTAUserMsg_PredictionResult *);
	virtual CDOTAUserMsg_PredictionResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_PredictionResult &);
	void MergeFrom(const CDOTAUserMsg_PredictionResult &);
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
	const CDOTAUserMsg_PredictionResult_Prediction & predictions(int);
	CDOTAUserMsg_PredictionResult_Prediction * mutable_predictions(int);
	CDOTAUserMsg_PredictionResult_Prediction * add_predictions();
	const RepeatedPtrField<CDOTAUserMsg_PredictionResult_Prediction> & predictions();
	RepeatedPtrField<CDOTAUserMsg_PredictionResult_Prediction> * mutable_predictions();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4701
class CDOTAResponseQuerySerialized_Fact : public Message {
public:

	static const CDOTAResponseQuerySerialized_Fact_ValueType NUMERIC = 1;
	static const CDOTAResponseQuerySerialized_Fact_ValueType STRING = 2;
	static const CDOTAResponseQuerySerialized_Fact_ValueType ValueType_MIN = 1;
	static const CDOTAResponseQuerySerialized_Fact_ValueType ValueType_MAX = 2;
	static const int ValueType_ARRAYSIZE = 3;
	static const int kKeyFieldNumber = 1;
	static const int kValtypeFieldNumber = 2;
	static const int kValNumericFieldNumber = 3;
	static const int kValStringFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 key_;  // +0x18
	int valtype_;  // +0x1c
	string * val_string_;  // +0x20
	float val_numeric_;  // +0x28

	static CDOTAResponseQuerySerialized_Fact * default_instance_;
	typedef CDOTAResponseQuerySerialized_Fact_ValueType ValueType;
	CDOTAResponseQuerySerialized_Fact();
	virtual ~CDOTAResponseQuerySerialized_Fact();
	CDOTAResponseQuerySerialized_Fact(const CDOTAResponseQuerySerialized_Fact &);
	CDOTAResponseQuerySerialized_Fact & operator=(const CDOTAResponseQuerySerialized_Fact &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAResponseQuerySerialized_Fact & default_instance();
	void Swap(CDOTAResponseQuerySerialized_Fact *);
	virtual CDOTAResponseQuerySerialized_Fact * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAResponseQuerySerialized_Fact &);
	void MergeFrom(const CDOTAResponseQuerySerialized_Fact &);
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
	bool ValueType_IsValid(int);
	const EnumDescriptor * ValueType_descriptor();
	const string & ValueType_Name(ValueType);
	bool ValueType_Parse(const string &, ValueType *);
	bool has_key();
	void clear_key();
	int32 key();
	void set_key(int32);
	bool has_valtype();
	void clear_valtype();
	CDOTAResponseQuerySerialized_Fact_ValueType valtype();
	void set_valtype(CDOTAResponseQuerySerialized_Fact_ValueType);
	bool has_val_numeric();
	void clear_val_numeric();
	float val_numeric();
	void set_val_numeric(float);
	bool has_val_string();
	void clear_val_string();
	const string & val_string();
	void set_val_string(const string &);
	void set_val_string(const char *);
	void set_val_string(const char *, size_t);
	string * mutable_val_string();
	string * release_val_string();
	void set_allocated_val_string(string *);
	void set_has_key();
	void clear_has_key();
	void set_has_valtype();
	void clear_has_valtype();
	void set_has_val_numeric();
	void clear_has_val_numeric();
	void set_has_val_string();
	void clear_has_val_string();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4839
class CDOTAResponseQuerySerialized : public Message {
public:

	static const int kFactsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAResponseQuerySerialized * default_instance_;
	CDOTAResponseQuerySerialized();
	virtual ~CDOTAResponseQuerySerialized();
	CDOTAResponseQuerySerialized(const CDOTAResponseQuerySerialized &);
	CDOTAResponseQuerySerialized & operator=(const CDOTAResponseQuerySerialized &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAResponseQuerySerialized & default_instance();
	void Swap(CDOTAResponseQuerySerialized *);
	virtual CDOTAResponseQuerySerialized * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAResponseQuerySerialized &);
	void MergeFrom(const CDOTAResponseQuerySerialized &);
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
	int facts_size();
	void clear_facts();
	const CDOTAResponseQuerySerialized_Fact & facts(int);
	CDOTAResponseQuerySerialized_Fact * mutable_facts(int);
	CDOTAResponseQuerySerialized_Fact * add_facts();
	const RepeatedPtrField<CDOTAResponseQuerySerialized_Fact> & facts();
	RepeatedPtrField<CDOTAResponseQuerySerialized_Fact> * mutable_facts();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:4923
class CDOTASpeechMatchOnClient : public Message {
public:

	static const int kConceptFieldNumber = 1;
	static const int kRecipientTypeFieldNumber = 2;
	static const int kResponsequeryFieldNumber = 3;
	static const int kRandomseedFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 concept_;  // +0x18
	int32 recipient_type_;  // +0x1c
	int32 randomseed_;  // +0x28

	static CDOTASpeechMatchOnClient * default_instance_;
	CDOTASpeechMatchOnClient();
	virtual ~CDOTASpeechMatchOnClient();
	CDOTASpeechMatchOnClient(const CDOTASpeechMatchOnClient &);
	CDOTASpeechMatchOnClient & operator=(const CDOTASpeechMatchOnClient &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTASpeechMatchOnClient & default_instance();
	void Swap(CDOTASpeechMatchOnClient *);
	virtual CDOTASpeechMatchOnClient * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTASpeechMatchOnClient &);
	void MergeFrom(const CDOTASpeechMatchOnClient &);
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
	bool has_concept();
	void clear_concept();
	int32 concept();
	void set_concept(int32);
	bool has_recipient_type();
	void clear_recipient_type();
	int32 recipient_type();
	void set_recipient_type(int32);
	bool has_responsequery();
	void clear_responsequery();
	const CDOTAResponseQuerySerialized & responsequery();
	CDOTAResponseQuerySerialized * mutable_responsequery();
	CDOTAResponseQuerySerialized * release_responsequery();
	void set_allocated_responsequery(CDOTAResponseQuerySerialized *);
	bool has_randomseed();
	void clear_randomseed();
	int32 randomseed();
	void set_randomseed(int32);
	void set_has_concept();
	void clear_has_concept();
	void set_has_recipient_type();
	void clear_has_recipient_type();
	void set_has_responsequery();
	void clear_has_responsequery();
	void set_has_randomseed();
	void clear_has_randomseed();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5034
class CDOTAUserMsg_UnitEvent_Speech : public Message {
public:

	static const int kConceptFieldNumber = 1;
	static const int kResponseFieldNumber = 2;
	static const int kRecipientTypeFieldNumber = 3;
	static const int kLevelFieldNumber = 4;
	static const int kMuteableFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * response_;  // +0x18
	int32 concept_;  // +0x20
	int32 recipient_type_;  // +0x24
	int32 level_;  // +0x28
	bool muteable_;  // +0x2c

	static CDOTAUserMsg_UnitEvent_Speech * default_instance_;
	CDOTAUserMsg_UnitEvent_Speech();
	virtual ~CDOTAUserMsg_UnitEvent_Speech();
	CDOTAUserMsg_UnitEvent_Speech(const CDOTAUserMsg_UnitEvent_Speech &);
	CDOTAUserMsg_UnitEvent_Speech & operator=(const CDOTAUserMsg_UnitEvent_Speech &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UnitEvent_Speech & default_instance();
	void Swap(CDOTAUserMsg_UnitEvent_Speech *);
	virtual CDOTAUserMsg_UnitEvent_Speech * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UnitEvent_Speech &);
	void MergeFrom(const CDOTAUserMsg_UnitEvent_Speech &);
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
	bool has_concept();
	void clear_concept();
	int32 concept();
	void set_concept(int32);
	bool has_response();
	void clear_response();
	const string & response();
	void set_response(const string &);
	void set_response(const char *);
	void set_response(const char *, size_t);
	string * mutable_response();
	string * release_response();
	void set_allocated_response(string *);
	bool has_recipient_type();
	void clear_recipient_type();
	int32 recipient_type();
	void set_recipient_type(int32);
	bool has_level();
	void clear_level();
	int32 level();
	void set_level(int32);
	bool has_muteable();
	void clear_muteable();
	bool muteable();
	void set_muteable(bool);
	void set_has_concept();
	void clear_has_concept();
	void set_has_response();
	void clear_has_response();
	void set_has_recipient_type();
	void clear_has_recipient_type();
	void set_has_level();
	void clear_has_level();
	void set_has_muteable();
	void clear_has_muteable();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5158
class CDOTAUserMsg_UnitEvent_SpeechMute : public Message {
public:

	static const int kDelayFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float delay_;  // +0x18

	static CDOTAUserMsg_UnitEvent_SpeechMute * default_instance_;
	CDOTAUserMsg_UnitEvent_SpeechMute();
	virtual ~CDOTAUserMsg_UnitEvent_SpeechMute();
	CDOTAUserMsg_UnitEvent_SpeechMute(const CDOTAUserMsg_UnitEvent_SpeechMute &);
	CDOTAUserMsg_UnitEvent_SpeechMute & operator=(const CDOTAUserMsg_UnitEvent_SpeechMute &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UnitEvent_SpeechMute & default_instance();
	void Swap(CDOTAUserMsg_UnitEvent_SpeechMute *);
	virtual CDOTAUserMsg_UnitEvent_SpeechMute * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UnitEvent_SpeechMute &);
	void MergeFrom(const CDOTAUserMsg_UnitEvent_SpeechMute &);
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
	bool has_delay();
	void clear_delay();
	float delay();
	void set_delay(float);
	void set_has_delay();
	void clear_has_delay();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5237
class CDOTAUserMsg_UnitEvent_AddGesture : public Message {
public:

	static const int kActivityFieldNumber = 1;
	static const int kSlotFieldNumber = 2;
	static const int kFadeInFieldNumber = 3;
	static const int kFadeOutFieldNumber = 4;
	static const int kPlaybackRateFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 activity_;  // +0x18
	int32 slot_;  // +0x1c
	float fade_in_;  // +0x20
	float fade_out_;  // +0x24
	float playback_rate_;  // +0x28

	static CDOTAUserMsg_UnitEvent_AddGesture * default_instance_;
	CDOTAUserMsg_UnitEvent_AddGesture();
	virtual ~CDOTAUserMsg_UnitEvent_AddGesture();
	CDOTAUserMsg_UnitEvent_AddGesture(const CDOTAUserMsg_UnitEvent_AddGesture &);
	CDOTAUserMsg_UnitEvent_AddGesture & operator=(const CDOTAUserMsg_UnitEvent_AddGesture &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UnitEvent_AddGesture & default_instance();
	void Swap(CDOTAUserMsg_UnitEvent_AddGesture *);
	virtual CDOTAUserMsg_UnitEvent_AddGesture * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UnitEvent_AddGesture &);
	void MergeFrom(const CDOTAUserMsg_UnitEvent_AddGesture &);
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
	bool has_activity();
	void clear_activity();
	int32 activity();
	void set_activity(int32);
	bool has_slot();
	void clear_slot();
	int32 slot();
	void set_slot(int32);
	bool has_fade_in();
	void clear_fade_in();
	float fade_in();
	void set_fade_in(float);
	bool has_fade_out();
	void clear_fade_out();
	float fade_out();
	void set_fade_out(float);
	bool has_playback_rate();
	void clear_playback_rate();
	float playback_rate();
	void set_playback_rate(float);
	void set_has_activity();
	void clear_has_activity();
	void set_has_slot();
	void clear_has_slot();
	void set_has_fade_in();
	void clear_has_fade_in();
	void set_has_fade_out();
	void clear_has_fade_out();
	void set_has_playback_rate();
	void clear_has_playback_rate();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5356
class CDOTAUserMsg_UnitEvent_RemoveGesture : public Message {
public:

	static const int kActivityFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 activity_;  // +0x18

	static CDOTAUserMsg_UnitEvent_RemoveGesture * default_instance_;
	CDOTAUserMsg_UnitEvent_RemoveGesture();
	virtual ~CDOTAUserMsg_UnitEvent_RemoveGesture();
	CDOTAUserMsg_UnitEvent_RemoveGesture(const CDOTAUserMsg_UnitEvent_RemoveGesture &);
	CDOTAUserMsg_UnitEvent_RemoveGesture & operator=(const CDOTAUserMsg_UnitEvent_RemoveGesture &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UnitEvent_RemoveGesture & default_instance();
	void Swap(CDOTAUserMsg_UnitEvent_RemoveGesture *);
	virtual CDOTAUserMsg_UnitEvent_RemoveGesture * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UnitEvent_RemoveGesture &);
	void MergeFrom(const CDOTAUserMsg_UnitEvent_RemoveGesture &);
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
	bool has_activity();
	void clear_activity();
	int32 activity();
	void set_activity(int32);
	void set_has_activity();
	void clear_has_activity();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5435
class CDOTAUserMsg_UnitEvent_BloodImpact : public Message {
public:

	static const int kScaleFieldNumber = 1;
	static const int kXNormalFieldNumber = 2;
	static const int kYNormalFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 scale_;  // +0x18
	int32 x_normal_;  // +0x1c
	int32 y_normal_;  // +0x20

	static CDOTAUserMsg_UnitEvent_BloodImpact * default_instance_;
	CDOTAUserMsg_UnitEvent_BloodImpact();
	virtual ~CDOTAUserMsg_UnitEvent_BloodImpact();
	CDOTAUserMsg_UnitEvent_BloodImpact(const CDOTAUserMsg_UnitEvent_BloodImpact &);
	CDOTAUserMsg_UnitEvent_BloodImpact & operator=(const CDOTAUserMsg_UnitEvent_BloodImpact &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UnitEvent_BloodImpact & default_instance();
	void Swap(CDOTAUserMsg_UnitEvent_BloodImpact *);
	virtual CDOTAUserMsg_UnitEvent_BloodImpact * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UnitEvent_BloodImpact &);
	void MergeFrom(const CDOTAUserMsg_UnitEvent_BloodImpact &);
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
	bool has_scale();
	void clear_scale();
	int32 scale();
	void set_scale(int32);
	bool has_x_normal();
	void clear_x_normal();
	int32 x_normal();
	void set_x_normal(int32);
	bool has_y_normal();
	void clear_y_normal();
	int32 y_normal();
	void set_y_normal(int32);
	void set_has_scale();
	void clear_has_scale();
	void set_has_x_normal();
	void clear_has_x_normal();
	void set_has_y_normal();
	void clear_has_y_normal();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5534
class CDOTAUserMsg_UnitEvent_FadeGesture : public Message {
public:

	static const int kActivityFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 activity_;  // +0x18

	static CDOTAUserMsg_UnitEvent_FadeGesture * default_instance_;
	CDOTAUserMsg_UnitEvent_FadeGesture();
	virtual ~CDOTAUserMsg_UnitEvent_FadeGesture();
	CDOTAUserMsg_UnitEvent_FadeGesture(const CDOTAUserMsg_UnitEvent_FadeGesture &);
	CDOTAUserMsg_UnitEvent_FadeGesture & operator=(const CDOTAUserMsg_UnitEvent_FadeGesture &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UnitEvent_FadeGesture & default_instance();
	void Swap(CDOTAUserMsg_UnitEvent_FadeGesture *);
	virtual CDOTAUserMsg_UnitEvent_FadeGesture * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UnitEvent_FadeGesture &);
	void MergeFrom(const CDOTAUserMsg_UnitEvent_FadeGesture &);
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
	bool has_activity();
	void clear_activity();
	int32 activity();
	void set_activity(int32);
	void set_has_activity();
	void clear_has_activity();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5613
class CDOTAUserMsg_UnitEvent : public Message {
public:

	static const int kMsgTypeFieldNumber = 1;
	static const int kEntityIndexFieldNumber = 2;
	static const int kSpeechFieldNumber = 3;
	static const int kSpeechMuteFieldNumber = 4;
	static const int kAddGestureFieldNumber = 5;
	static const int kRemoveGestureFieldNumber = 6;
	static const int kBloodImpactFieldNumber = 7;
	static const int kFadeGestureFieldNumber = 8;
	static const int kSpeechMatchOnClientFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int msg_type_;  // +0x18
	int32 entity_index_;  // +0x1c

	static CDOTAUserMsg_UnitEvent * default_instance_;
	CDOTAUserMsg_UnitEvent();
	virtual ~CDOTAUserMsg_UnitEvent();
	CDOTAUserMsg_UnitEvent(const CDOTAUserMsg_UnitEvent &);
	CDOTAUserMsg_UnitEvent & operator=(const CDOTAUserMsg_UnitEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UnitEvent & default_instance();
	void Swap(CDOTAUserMsg_UnitEvent *);
	virtual CDOTAUserMsg_UnitEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UnitEvent &);
	void MergeFrom(const CDOTAUserMsg_UnitEvent &);
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
	bool has_msg_type();
	void clear_msg_type();
	EDotaEntityMessages msg_type();
	void set_msg_type(EDotaEntityMessages);
	bool has_entity_index();
	void clear_entity_index();
	int32 entity_index();
	void set_entity_index(int32);
	bool has_speech();
	void clear_speech();
	const CDOTAUserMsg_UnitEvent_Speech & speech();
	CDOTAUserMsg_UnitEvent_Speech * mutable_speech();
	CDOTAUserMsg_UnitEvent_Speech * release_speech();
	void set_allocated_speech(CDOTAUserMsg_UnitEvent_Speech *);
	bool has_speech_mute();
	void clear_speech_mute();
	const CDOTAUserMsg_UnitEvent_SpeechMute & speech_mute();
	CDOTAUserMsg_UnitEvent_SpeechMute * mutable_speech_mute();
	CDOTAUserMsg_UnitEvent_SpeechMute * release_speech_mute();
	void set_allocated_speech_mute(CDOTAUserMsg_UnitEvent_SpeechMute *);
	bool has_add_gesture();
	void clear_add_gesture();
	const CDOTAUserMsg_UnitEvent_AddGesture & add_gesture();
	CDOTAUserMsg_UnitEvent_AddGesture * mutable_add_gesture();
	CDOTAUserMsg_UnitEvent_AddGesture * release_add_gesture();
	void set_allocated_add_gesture(CDOTAUserMsg_UnitEvent_AddGesture *);
	bool has_remove_gesture();
	void clear_remove_gesture();
	const CDOTAUserMsg_UnitEvent_RemoveGesture & remove_gesture();
	CDOTAUserMsg_UnitEvent_RemoveGesture * mutable_remove_gesture();
	CDOTAUserMsg_UnitEvent_RemoveGesture * release_remove_gesture();
	void set_allocated_remove_gesture(CDOTAUserMsg_UnitEvent_RemoveGesture *);
	bool has_blood_impact();
	void clear_blood_impact();
	const CDOTAUserMsg_UnitEvent_BloodImpact & blood_impact();
	CDOTAUserMsg_UnitEvent_BloodImpact * mutable_blood_impact();
	CDOTAUserMsg_UnitEvent_BloodImpact * release_blood_impact();
	void set_allocated_blood_impact(CDOTAUserMsg_UnitEvent_BloodImpact *);
	bool has_fade_gesture();
	void clear_fade_gesture();
	const CDOTAUserMsg_UnitEvent_FadeGesture & fade_gesture();
	CDOTAUserMsg_UnitEvent_FadeGesture * mutable_fade_gesture();
	CDOTAUserMsg_UnitEvent_FadeGesture * release_fade_gesture();
	void set_allocated_fade_gesture(CDOTAUserMsg_UnitEvent_FadeGesture *);
	bool has_speech_match_on_client();
	void clear_speech_match_on_client();
	const CDOTASpeechMatchOnClient & speech_match_on_client();
	CDOTASpeechMatchOnClient * mutable_speech_match_on_client();
	CDOTASpeechMatchOnClient * release_speech_match_on_client();
	void set_allocated_speech_match_on_client(CDOTASpeechMatchOnClient *);
	void set_has_msg_type();
	void clear_has_msg_type();
	void set_has_entity_index();
	void clear_has_entity_index();
	void set_has_speech();
	void clear_has_speech();
	void set_has_speech_mute();
	void clear_has_speech_mute();
	void set_has_add_gesture();
	void clear_has_add_gesture();
	void set_has_remove_gesture();
	void clear_has_remove_gesture();
	void set_has_blood_impact();
	void clear_has_blood_impact();
	void set_has_fade_gesture();
	void clear_has_fade_gesture();
	void set_has_speech_match_on_client();
	void clear_has_speech_match_on_client();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5793
class CDOTAUserMsg_ItemPurchased : public Message {
public:

	static const int kItemIndexFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 item_index_;  // +0x18

	static CDOTAUserMsg_ItemPurchased * default_instance_;
	CDOTAUserMsg_ItemPurchased();
	virtual ~CDOTAUserMsg_ItemPurchased();
	CDOTAUserMsg_ItemPurchased(const CDOTAUserMsg_ItemPurchased &);
	CDOTAUserMsg_ItemPurchased & operator=(const CDOTAUserMsg_ItemPurchased &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ItemPurchased & default_instance();
	void Swap(CDOTAUserMsg_ItemPurchased *);
	virtual CDOTAUserMsg_ItemPurchased * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ItemPurchased &);
	void MergeFrom(const CDOTAUserMsg_ItemPurchased &);
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
	bool has_item_index();
	void clear_item_index();
	int32 item_index();
	void set_item_index(int32);
	void set_has_item_index();
	void clear_has_item_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5872
class CDOTAUserMsg_ItemFound : public Message {
public:

	static const int kPlayerFieldNumber = 1;
	static const int kQualityFieldNumber = 2;
	static const int kRarityFieldNumber = 3;
	static const int kMethodFieldNumber = 4;
	static const int kItemdefFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_;  // +0x18
	int32 quality_;  // +0x1c
	int32 rarity_;  // +0x20
	int32 method_;  // +0x24
	int32 itemdef_;  // +0x28

	static CDOTAUserMsg_ItemFound * default_instance_;
	CDOTAUserMsg_ItemFound();
	virtual ~CDOTAUserMsg_ItemFound();
	CDOTAUserMsg_ItemFound(const CDOTAUserMsg_ItemFound &);
	CDOTAUserMsg_ItemFound & operator=(const CDOTAUserMsg_ItemFound &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ItemFound & default_instance();
	void Swap(CDOTAUserMsg_ItemFound *);
	virtual CDOTAUserMsg_ItemFound * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ItemFound &);
	void MergeFrom(const CDOTAUserMsg_ItemFound &);
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
	bool has_player();
	void clear_player();
	int32 player();
	void set_player(int32);
	bool has_quality();
	void clear_quality();
	int32 quality();
	void set_quality(int32);
	bool has_rarity();
	void clear_rarity();
	int32 rarity();
	void set_rarity(int32);
	bool has_method();
	void clear_method();
	int32 method();
	void set_method(int32);
	bool has_itemdef();
	void clear_itemdef();
	int32 itemdef();
	void set_itemdef(int32);
	void set_has_player();
	void clear_has_player();
	void set_has_quality();
	void clear_has_quality();
	void set_has_rarity();
	void clear_has_rarity();
	void set_has_method();
	void clear_has_method();
	void set_has_itemdef();
	void clear_has_itemdef();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:5991
class CDOTAUserMsg_ParticleManager_ReleaseParticleIndex : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_ParticleManager_ReleaseParticleIndex * default_instance_;
	CDOTAUserMsg_ParticleManager_ReleaseParticleIndex();
	virtual ~CDOTAUserMsg_ParticleManager_ReleaseParticleIndex();
	CDOTAUserMsg_ParticleManager_ReleaseParticleIndex(const CDOTAUserMsg_ParticleManager_ReleaseParticleIndex &);
	CDOTAUserMsg_ParticleManager_ReleaseParticleIndex & operator=(const CDOTAUserMsg_ParticleManager_ReleaseParticleIndex &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_ReleaseParticleIndex & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_ReleaseParticleIndex *);
	virtual CDOTAUserMsg_ParticleManager_ReleaseParticleIndex * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_ReleaseParticleIndex &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_ReleaseParticleIndex &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6060
class CDOTAUserMsg_ParticleManager_CreateParticle : public Message {
public:

	static const int kParticleNameIndexFieldNumber = 1;
	static const int kAttachTypeFieldNumber = 2;
	static const int kEntityHandleFieldNumber = 3;
	static const int kEntityHandleForModifiersFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 particle_name_index_;  // +0x18
	int32 attach_type_;  // +0x20
	int32 entity_handle_;  // +0x24
	int32 entity_handle_for_modifiers_;  // +0x28

	static CDOTAUserMsg_ParticleManager_CreateParticle * default_instance_;
	CDOTAUserMsg_ParticleManager_CreateParticle();
	virtual ~CDOTAUserMsg_ParticleManager_CreateParticle();
	CDOTAUserMsg_ParticleManager_CreateParticle(const CDOTAUserMsg_ParticleManager_CreateParticle &);
	CDOTAUserMsg_ParticleManager_CreateParticle & operator=(const CDOTAUserMsg_ParticleManager_CreateParticle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_CreateParticle & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_CreateParticle *);
	virtual CDOTAUserMsg_ParticleManager_CreateParticle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_CreateParticle &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_CreateParticle &);
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
	bool has_particle_name_index();
	void clear_particle_name_index();
	uint64 particle_name_index();
	void set_particle_name_index(uint64);
	bool has_attach_type();
	void clear_attach_type();
	int32 attach_type();
	void set_attach_type(int32);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	bool has_entity_handle_for_modifiers();
	void clear_entity_handle_for_modifiers();
	int32 entity_handle_for_modifiers();
	void set_entity_handle_for_modifiers(int32);
	void set_has_particle_name_index();
	void clear_has_particle_name_index();
	void set_has_attach_type();
	void clear_has_attach_type();
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void set_has_entity_handle_for_modifiers();
	void clear_has_entity_handle_for_modifiers();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6169
class CDOTAUserMsg_ParticleManager_DestroyParticle : public Message {
public:

	static const int kDestroyImmediatelyFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool destroy_immediately_;  // +0x18

	static CDOTAUserMsg_ParticleManager_DestroyParticle * default_instance_;
	CDOTAUserMsg_ParticleManager_DestroyParticle();
	virtual ~CDOTAUserMsg_ParticleManager_DestroyParticle();
	CDOTAUserMsg_ParticleManager_DestroyParticle(const CDOTAUserMsg_ParticleManager_DestroyParticle &);
	CDOTAUserMsg_ParticleManager_DestroyParticle & operator=(const CDOTAUserMsg_ParticleManager_DestroyParticle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_DestroyParticle & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_DestroyParticle *);
	virtual CDOTAUserMsg_ParticleManager_DestroyParticle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_DestroyParticle &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_DestroyParticle &);
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
	bool has_destroy_immediately();
	void clear_destroy_immediately();
	bool destroy_immediately();
	void set_destroy_immediately(bool);
	void set_has_destroy_immediately();
	void clear_has_destroy_immediately();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6248
class CDOTAUserMsg_ParticleManager_DestroyParticleInvolving : public Message {
public:

	static const int kDestroyImmediatelyFieldNumber = 1;
	static const int kEntityHandleFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool destroy_immediately_;  // +0x18

	int32 entity_handle_;  // +0x1c

	static CDOTAUserMsg_ParticleManager_DestroyParticleInvolving * default_instance_;
	CDOTAUserMsg_ParticleManager_DestroyParticleInvolving();
	virtual ~CDOTAUserMsg_ParticleManager_DestroyParticleInvolving();
	CDOTAUserMsg_ParticleManager_DestroyParticleInvolving(const CDOTAUserMsg_ParticleManager_DestroyParticleInvolving &);
	CDOTAUserMsg_ParticleManager_DestroyParticleInvolving & operator=(const CDOTAUserMsg_ParticleManager_DestroyParticleInvolving &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_DestroyParticleInvolving & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_DestroyParticleInvolving *);
	virtual CDOTAUserMsg_ParticleManager_DestroyParticleInvolving * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_DestroyParticleInvolving &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_DestroyParticleInvolving &);
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
	bool has_destroy_immediately();
	void clear_destroy_immediately();
	bool destroy_immediately();
	void set_destroy_immediately(bool);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	void set_has_destroy_immediately();
	void clear_has_destroy_immediately();
	void set_has_entity_handle();
	void clear_has_entity_handle();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6337
class CDOTAUserMsg_ParticleManager_UpdateParticle : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kPositionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x20

	static CDOTAUserMsg_ParticleManager_UpdateParticle * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateParticle();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateParticle();
	CDOTAUserMsg_ParticleManager_UpdateParticle(const CDOTAUserMsg_ParticleManager_UpdateParticle &);
	CDOTAUserMsg_ParticleManager_UpdateParticle & operator=(const CDOTAUserMsg_ParticleManager_UpdateParticle &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateParticle & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateParticle *);
	virtual CDOTAUserMsg_ParticleManager_UpdateParticle * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateParticle &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateParticle &);
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
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_position();
	void clear_position();
	const CMsgVector & position();
	CMsgVector * mutable_position();
	CMsgVector * release_position();
	void set_allocated_position(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_position();
	void clear_has_position();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6428
class CDOTAUserMsg_ParticleManager_UpdateParticleFwd : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kForwardFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x20

	static CDOTAUserMsg_ParticleManager_UpdateParticleFwd * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateParticleFwd();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateParticleFwd();
	CDOTAUserMsg_ParticleManager_UpdateParticleFwd(const CDOTAUserMsg_ParticleManager_UpdateParticleFwd &);
	CDOTAUserMsg_ParticleManager_UpdateParticleFwd & operator=(const CDOTAUserMsg_ParticleManager_UpdateParticleFwd &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateParticleFwd & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateParticleFwd *);
	virtual CDOTAUserMsg_ParticleManager_UpdateParticleFwd * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleFwd &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleFwd &);
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
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_forward();
	void clear_forward();
	const CMsgVector & forward();
	CMsgVector * mutable_forward();
	CMsgVector * release_forward();
	void set_allocated_forward(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_forward();
	void clear_has_forward();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6519
class CDOTAUserMsg_ParticleManager_UpdateParticleOrient : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kForwardFieldNumber = 2;
	static const int kRightFieldNumber = 3;
	static const int kUpFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x30

	static CDOTAUserMsg_ParticleManager_UpdateParticleOrient * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateParticleOrient();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateParticleOrient();
	CDOTAUserMsg_ParticleManager_UpdateParticleOrient(const CDOTAUserMsg_ParticleManager_UpdateParticleOrient &);
	CDOTAUserMsg_ParticleManager_UpdateParticleOrient & operator=(const CDOTAUserMsg_ParticleManager_UpdateParticleOrient &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateParticleOrient & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateParticleOrient *);
	virtual CDOTAUserMsg_ParticleManager_UpdateParticleOrient * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleOrient &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleOrient &);
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
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_forward();
	void clear_forward();
	const CMsgVector & forward();
	CMsgVector * mutable_forward();
	CMsgVector * release_forward();
	void set_allocated_forward(CMsgVector *);
	bool has_right();
	void clear_right();
	const CMsgVector & right();
	CMsgVector * mutable_right();
	CMsgVector * release_right();
	void set_allocated_right(CMsgVector *);
	bool has_up();
	void clear_up();
	const CMsgVector & up();
	CMsgVector * mutable_up();
	CMsgVector * release_up();
	void set_allocated_up(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_forward();
	void clear_has_forward();
	void set_has_right();
	void clear_has_right();
	void set_has_up();
	void clear_has_up();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6634
class CDOTAUserMsg_ParticleManager_UpdateParticleFallback : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kPositionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x20

	static CDOTAUserMsg_ParticleManager_UpdateParticleFallback * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateParticleFallback();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateParticleFallback();
	CDOTAUserMsg_ParticleManager_UpdateParticleFallback(const CDOTAUserMsg_ParticleManager_UpdateParticleFallback &);
	CDOTAUserMsg_ParticleManager_UpdateParticleFallback & operator=(const CDOTAUserMsg_ParticleManager_UpdateParticleFallback &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateParticleFallback & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateParticleFallback *);
	virtual CDOTAUserMsg_ParticleManager_UpdateParticleFallback * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleFallback &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleFallback &);
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
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_position();
	void clear_position();
	const CMsgVector & position();
	CMsgVector * mutable_position();
	CMsgVector * release_position();
	void set_allocated_position(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_position();
	void clear_has_position();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6725
class CDOTAUserMsg_ParticleManager_UpdateParticleOffset : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kOriginOffsetFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x20

	static CDOTAUserMsg_ParticleManager_UpdateParticleOffset * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateParticleOffset();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateParticleOffset();
	CDOTAUserMsg_ParticleManager_UpdateParticleOffset(const CDOTAUserMsg_ParticleManager_UpdateParticleOffset &);
	CDOTAUserMsg_ParticleManager_UpdateParticleOffset & operator=(const CDOTAUserMsg_ParticleManager_UpdateParticleOffset &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateParticleOffset & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateParticleOffset *);
	virtual CDOTAUserMsg_ParticleManager_UpdateParticleOffset * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleOffset &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleOffset &);
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
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_origin_offset();
	void clear_origin_offset();
	const CMsgVector & origin_offset();
	CMsgVector * mutable_origin_offset();
	CMsgVector * release_origin_offset();
	void set_allocated_origin_offset(CMsgVector *);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_origin_offset();
	void clear_has_origin_offset();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6816
class CDOTAUserMsg_ParticleManager_UpdateParticleEnt : public Message {
public:

	static const int kControlPointFieldNumber = 1;
	static const int kEntityHandleFieldNumber = 2;
	static const int kAttachTypeFieldNumber = 3;
	static const int kAttachmentFieldNumber = 4;
	static const int kFallbackPositionFieldNumber = 5;
	static const int kIncludeWearablesFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 control_point_;  // +0x18
	int32 entity_handle_;  // +0x1c
	int32 attach_type_;  // +0x20
	int32 attachment_;  // +0x24
	bool include_wearables_;  // +0x30

	static CDOTAUserMsg_ParticleManager_UpdateParticleEnt * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateParticleEnt();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateParticleEnt();
	CDOTAUserMsg_ParticleManager_UpdateParticleEnt(const CDOTAUserMsg_ParticleManager_UpdateParticleEnt &);
	CDOTAUserMsg_ParticleManager_UpdateParticleEnt & operator=(const CDOTAUserMsg_ParticleManager_UpdateParticleEnt &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateParticleEnt & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateParticleEnt *);
	virtual CDOTAUserMsg_ParticleManager_UpdateParticleEnt * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleEnt &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleEnt &);
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
	bool has_control_point();
	void clear_control_point();
	int32 control_point();
	void set_control_point(int32);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	bool has_attach_type();
	void clear_attach_type();
	int32 attach_type();
	void set_attach_type(int32);
	bool has_attachment();
	void clear_attachment();
	int32 attachment();
	void set_attachment(int32);
	bool has_fallback_position();
	void clear_fallback_position();
	const CMsgVector & fallback_position();
	CMsgVector * mutable_fallback_position();
	CMsgVector * release_fallback_position();
	void set_allocated_fallback_position(CMsgVector *);
	bool has_include_wearables();
	void clear_include_wearables();
	bool include_wearables();
	void set_include_wearables(bool);
	void set_has_control_point();
	void clear_has_control_point();
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void set_has_attach_type();
	void clear_has_attach_type();
	void set_has_attachment();
	void clear_has_attachment();
	void set_has_fallback_position();
	void clear_has_fallback_position();
	void set_has_include_wearables();
	void clear_has_include_wearables();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:6947
class CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen : public Message {
public:

	static const int kSetFrozenFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool set_frozen_;  // +0x18

	static CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen();
	CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen(const CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen &);
	CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen & operator=(const CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen *);
	virtual CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen &);
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
	bool has_set_frozen();
	void clear_set_frozen();
	bool set_frozen();
	void set_set_frozen(bool);
	void set_has_set_frozen();
	void clear_has_set_frozen();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:7026
class CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw : public Message {
public:

	static const int kShouldDrawFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool should_draw_;  // +0x18

	static CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw();
	CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw(const CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw &);
	CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw & operator=(const CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw *);
	virtual CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw &);
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
	bool has_should_draw();
	void clear_should_draw();
	bool should_draw();
	void set_should_draw(bool);
	void set_has_should_draw();
	void clear_has_should_draw();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:7105
class CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment : public Message {
public:

	static const int kAttachmentOldFieldNumber = 1;
	static const int kAttachmentNewFieldNumber = 2;
	static const int kEntityHandleFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 attachment_old_;  // +0x18
	int32 attachment_new_;  // +0x1c
	int32 entity_handle_;  // +0x20

	static CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment * default_instance_;
	CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment();
	virtual ~CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment();
	CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment(const CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment &);
	CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment & operator=(const CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *);
	virtual CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment &);
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
	bool has_attachment_old();
	void clear_attachment_old();
	int32 attachment_old();
	void set_attachment_old(int32);
	bool has_attachment_new();
	void clear_attachment_new();
	int32 attachment_new();
	void set_attachment_new(int32);
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	void set_has_attachment_old();
	void clear_has_attachment_old();
	void set_has_attachment_new();
	void clear_has_attachment_new();
	void set_has_entity_handle();
	void clear_has_entity_handle();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:7204
class CDOTAUserMsg_ParticleManager_UpdateEntityPosition : public Message {
public:

	static const int kEntityHandleFieldNumber = 1;
	static const int kPositionFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entity_handle_;  // +0x20

	static CDOTAUserMsg_ParticleManager_UpdateEntityPosition * default_instance_;
	CDOTAUserMsg_ParticleManager_UpdateEntityPosition();
	virtual ~CDOTAUserMsg_ParticleManager_UpdateEntityPosition();
	CDOTAUserMsg_ParticleManager_UpdateEntityPosition(const CDOTAUserMsg_ParticleManager_UpdateEntityPosition &);
	CDOTAUserMsg_ParticleManager_UpdateEntityPosition & operator=(const CDOTAUserMsg_ParticleManager_UpdateEntityPosition &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_UpdateEntityPosition & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_UpdateEntityPosition *);
	virtual CDOTAUserMsg_ParticleManager_UpdateEntityPosition * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_UpdateEntityPosition &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_UpdateEntityPosition &);
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
	bool has_entity_handle();
	void clear_entity_handle();
	int32 entity_handle();
	void set_entity_handle(int32);
	bool has_position();
	void clear_position();
	const CMsgVector & position();
	CMsgVector * mutable_position();
	CMsgVector * release_position();
	void set_allocated_position(CMsgVector *);
	void set_has_entity_handle();
	void clear_has_entity_handle();
	void set_has_position();
	void clear_has_position();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:7295
class CDOTAUserMsg_ParticleManager_SetParticleFoWProperties : public Message {
public:

	static const int kFowControlPointFieldNumber = 1;
	static const int kFowControlPoint2FieldNumber = 2;
	static const int kFowRadiusFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 fow_control_point_;  // +0x18
	int32 fow_control_point2_;  // +0x1c
	float fow_radius_;  // +0x20

	static CDOTAUserMsg_ParticleManager_SetParticleFoWProperties * default_instance_;
	CDOTAUserMsg_ParticleManager_SetParticleFoWProperties();
	virtual ~CDOTAUserMsg_ParticleManager_SetParticleFoWProperties();
	CDOTAUserMsg_ParticleManager_SetParticleFoWProperties(const CDOTAUserMsg_ParticleManager_SetParticleFoWProperties &);
	CDOTAUserMsg_ParticleManager_SetParticleFoWProperties & operator=(const CDOTAUserMsg_ParticleManager_SetParticleFoWProperties &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager_SetParticleFoWProperties & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager_SetParticleFoWProperties *);
	virtual CDOTAUserMsg_ParticleManager_SetParticleFoWProperties * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager_SetParticleFoWProperties &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager_SetParticleFoWProperties &);
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
	bool has_fow_control_point();
	void clear_fow_control_point();
	int32 fow_control_point();
	void set_fow_control_point(int32);
	bool has_fow_control_point2();
	void clear_fow_control_point2();
	int32 fow_control_point2();
	void set_fow_control_point2(int32);
	bool has_fow_radius();
	void clear_fow_radius();
	float fow_radius();
	void set_fow_radius(float);
	void set_has_fow_control_point();
	void clear_has_fow_control_point();
	void set_has_fow_control_point2();
	void clear_has_fow_control_point2();
	void set_has_fow_radius();
	void clear_has_fow_radius();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:7394
class CDOTAUserMsg_ParticleManager : public Message {
public:

	static const int kTypeFieldNumber = 1;
	static const int kIndexFieldNumber = 2;
	static const int kReleaseParticleIndexFieldNumber = 3;
	static const int kCreateParticleFieldNumber = 4;
	static const int kDestroyParticleFieldNumber = 5;
	static const int kDestroyParticleInvolvingFieldNumber = 6;
	static const int kUpdateParticleFieldNumber = 7;
	static const int kUpdateParticleFwdFieldNumber = 8;
	static const int kUpdateParticleOrientFieldNumber = 9;
	static const int kUpdateParticleFallbackFieldNumber = 10;
	static const int kUpdateParticleOffsetFieldNumber = 11;
	static const int kUpdateParticleEntFieldNumber = 12;
	static const int kUpdateParticleShouldDrawFieldNumber = 14;
	static const int kUpdateParticleSetFrozenFieldNumber = 15;
	static const int kChangeControlPointAttachmentFieldNumber = 16;
	static const int kUpdateEntityPositionFieldNumber = 17;
	static const int kSetParticleFowPropertiesFieldNumber = 18;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int type_;  // +0x18
	uint32 index_;  // +0x1c

	static CDOTAUserMsg_ParticleManager * default_instance_;
	CDOTAUserMsg_ParticleManager();
	virtual ~CDOTAUserMsg_ParticleManager();
	CDOTAUserMsg_ParticleManager(const CDOTAUserMsg_ParticleManager &);
	CDOTAUserMsg_ParticleManager & operator=(const CDOTAUserMsg_ParticleManager &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ParticleManager & default_instance();
	void Swap(CDOTAUserMsg_ParticleManager *);
	virtual CDOTAUserMsg_ParticleManager * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ParticleManager &);
	void MergeFrom(const CDOTAUserMsg_ParticleManager &);
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
	DOTA_PARTICLE_MESSAGE type();
	void set_type(DOTA_PARTICLE_MESSAGE);
	bool has_index();
	void clear_index();
	uint32 index();
	void set_index(uint32);
	bool has_release_particle_index();
	void clear_release_particle_index();
	const CDOTAUserMsg_ParticleManager_ReleaseParticleIndex & release_particle_index();
	CDOTAUserMsg_ParticleManager_ReleaseParticleIndex * mutable_release_particle_index();
	CDOTAUserMsg_ParticleManager_ReleaseParticleIndex * release_release_particle_index();
	void set_allocated_release_particle_index(CDOTAUserMsg_ParticleManager_ReleaseParticleIndex *);
	bool has_create_particle();
	void clear_create_particle();
	const CDOTAUserMsg_ParticleManager_CreateParticle & create_particle();
	CDOTAUserMsg_ParticleManager_CreateParticle * mutable_create_particle();
	CDOTAUserMsg_ParticleManager_CreateParticle * release_create_particle();
	void set_allocated_create_particle(CDOTAUserMsg_ParticleManager_CreateParticle *);
	bool has_destroy_particle();
	void clear_destroy_particle();
	const CDOTAUserMsg_ParticleManager_DestroyParticle & destroy_particle();
	CDOTAUserMsg_ParticleManager_DestroyParticle * mutable_destroy_particle();
	CDOTAUserMsg_ParticleManager_DestroyParticle * release_destroy_particle();
	void set_allocated_destroy_particle(CDOTAUserMsg_ParticleManager_DestroyParticle *);
	bool has_destroy_particle_involving();
	void clear_destroy_particle_involving();
	const CDOTAUserMsg_ParticleManager_DestroyParticleInvolving & destroy_particle_involving();
	CDOTAUserMsg_ParticleManager_DestroyParticleInvolving * mutable_destroy_particle_involving();
	CDOTAUserMsg_ParticleManager_DestroyParticleInvolving * release_destroy_particle_involving();
	void set_allocated_destroy_particle_involving(CDOTAUserMsg_ParticleManager_DestroyParticleInvolving *);
	bool has_update_particle();
	void clear_update_particle();
	const CDOTAUserMsg_ParticleManager_UpdateParticle & update_particle();
	CDOTAUserMsg_ParticleManager_UpdateParticle * mutable_update_particle();
	CDOTAUserMsg_ParticleManager_UpdateParticle * release_update_particle();
	void set_allocated_update_particle(CDOTAUserMsg_ParticleManager_UpdateParticle *);
	bool has_update_particle_fwd();
	void clear_update_particle_fwd();
	const CDOTAUserMsg_ParticleManager_UpdateParticleFwd & update_particle_fwd();
	CDOTAUserMsg_ParticleManager_UpdateParticleFwd * mutable_update_particle_fwd();
	CDOTAUserMsg_ParticleManager_UpdateParticleFwd * release_update_particle_fwd();
	void set_allocated_update_particle_fwd(CDOTAUserMsg_ParticleManager_UpdateParticleFwd *);
	bool has_update_particle_orient();
	void clear_update_particle_orient();
	const CDOTAUserMsg_ParticleManager_UpdateParticleOrient & update_particle_orient();
	CDOTAUserMsg_ParticleManager_UpdateParticleOrient * mutable_update_particle_orient();
	CDOTAUserMsg_ParticleManager_UpdateParticleOrient * release_update_particle_orient();
	void set_allocated_update_particle_orient(CDOTAUserMsg_ParticleManager_UpdateParticleOrient *);
	bool has_update_particle_fallback();
	void clear_update_particle_fallback();
	const CDOTAUserMsg_ParticleManager_UpdateParticleFallback & update_particle_fallback();
	CDOTAUserMsg_ParticleManager_UpdateParticleFallback * mutable_update_particle_fallback();
	CDOTAUserMsg_ParticleManager_UpdateParticleFallback * release_update_particle_fallback();
	void set_allocated_update_particle_fallback(CDOTAUserMsg_ParticleManager_UpdateParticleFallback *);
	bool has_update_particle_offset();
	void clear_update_particle_offset();
	const CDOTAUserMsg_ParticleManager_UpdateParticleOffset & update_particle_offset();
	CDOTAUserMsg_ParticleManager_UpdateParticleOffset * mutable_update_particle_offset();
	CDOTAUserMsg_ParticleManager_UpdateParticleOffset * release_update_particle_offset();
	void set_allocated_update_particle_offset(CDOTAUserMsg_ParticleManager_UpdateParticleOffset *);
	bool has_update_particle_ent();
	void clear_update_particle_ent();
	const CDOTAUserMsg_ParticleManager_UpdateParticleEnt & update_particle_ent();
	CDOTAUserMsg_ParticleManager_UpdateParticleEnt * mutable_update_particle_ent();
	CDOTAUserMsg_ParticleManager_UpdateParticleEnt * release_update_particle_ent();
	void set_allocated_update_particle_ent(CDOTAUserMsg_ParticleManager_UpdateParticleEnt *);
	bool has_update_particle_should_draw();
	void clear_update_particle_should_draw();
	const CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw & update_particle_should_draw();
	CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw * mutable_update_particle_should_draw();
	CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw * release_update_particle_should_draw();
	void set_allocated_update_particle_should_draw(CDOTAUserMsg_ParticleManager_UpdateParticleShouldDraw *);
	bool has_update_particle_set_frozen();
	void clear_update_particle_set_frozen();
	const CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen & update_particle_set_frozen();
	CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen * mutable_update_particle_set_frozen();
	CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen * release_update_particle_set_frozen();
	void set_allocated_update_particle_set_frozen(CDOTAUserMsg_ParticleManager_UpdateParticleSetFrozen *);
	bool has_change_control_point_attachment();
	void clear_change_control_point_attachment();
	const CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment & change_control_point_attachment();
	CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment * mutable_change_control_point_attachment();
	CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment * release_change_control_point_attachment();
	void set_allocated_change_control_point_attachment(CDOTAUserMsg_ParticleManager_ChangeControlPointAttachment *);
	bool has_update_entity_position();
	void clear_update_entity_position();
	const CDOTAUserMsg_ParticleManager_UpdateEntityPosition & update_entity_position();
	CDOTAUserMsg_ParticleManager_UpdateEntityPosition * mutable_update_entity_position();
	CDOTAUserMsg_ParticleManager_UpdateEntityPosition * release_update_entity_position();
	void set_allocated_update_entity_position(CDOTAUserMsg_ParticleManager_UpdateEntityPosition *);
	bool has_set_particle_fow_properties();
	void clear_set_particle_fow_properties();
	const CDOTAUserMsg_ParticleManager_SetParticleFoWProperties & set_particle_fow_properties();
	CDOTAUserMsg_ParticleManager_SetParticleFoWProperties * mutable_set_particle_fow_properties();
	CDOTAUserMsg_ParticleManager_SetParticleFoWProperties * release_set_particle_fow_properties();
	void set_allocated_set_particle_fow_properties(CDOTAUserMsg_ParticleManager_SetParticleFoWProperties *);
	void set_has_type();
	void clear_has_type();
	void set_has_index();
	void clear_has_index();
	void set_has_release_particle_index();
	void clear_has_release_particle_index();
	void set_has_create_particle();
	void clear_has_create_particle();
	void set_has_destroy_particle();
	void clear_has_destroy_particle();
	void set_has_destroy_particle_involving();
	void clear_has_destroy_particle_involving();
	void set_has_update_particle();
	void clear_has_update_particle();
	void set_has_update_particle_fwd();
	void clear_has_update_particle_fwd();
	void set_has_update_particle_orient();
	void clear_has_update_particle_orient();
	void set_has_update_particle_fallback();
	void clear_has_update_particle_fallback();
	void set_has_update_particle_offset();
	void clear_has_update_particle_offset();
	void set_has_update_particle_ent();
	void clear_has_update_particle_ent();
	void set_has_update_particle_should_draw();
	void clear_has_update_particle_should_draw();
	void set_has_update_particle_set_frozen();
	void clear_has_update_particle_set_frozen();
	void set_has_change_control_point_attachment();
	void clear_has_change_control_point_attachment();
	void set_has_update_entity_position();
	void clear_has_update_entity_position();
	void set_has_set_particle_fow_properties();
	void clear_has_set_particle_fow_properties();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:7679
class CDOTAUserMsg_OverheadEvent : public Message {
public:

	static const int kMessageTypeFieldNumber = 1;
	static const int kValueFieldNumber = 2;
	static const int kTargetPlayerEntindexFieldNumber = 3;
	static const int kTargetEntindexFieldNumber = 4;
	static const int kSourcePlayerEntindexFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int message_type_;  // +0x18
	int32 value_;  // +0x1c
	int32 target_player_entindex_;  // +0x20
	int32 target_entindex_;  // +0x24
	int32 source_player_entindex_;  // +0x28

	static CDOTAUserMsg_OverheadEvent * default_instance_;
	CDOTAUserMsg_OverheadEvent();
	virtual ~CDOTAUserMsg_OverheadEvent();
	CDOTAUserMsg_OverheadEvent(const CDOTAUserMsg_OverheadEvent &);
	CDOTAUserMsg_OverheadEvent & operator=(const CDOTAUserMsg_OverheadEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_OverheadEvent & default_instance();
	void Swap(CDOTAUserMsg_OverheadEvent *);
	virtual CDOTAUserMsg_OverheadEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_OverheadEvent &);
	void MergeFrom(const CDOTAUserMsg_OverheadEvent &);
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
	bool has_message_type();
	void clear_message_type();
	DOTA_OVERHEAD_ALERT message_type();
	void set_message_type(DOTA_OVERHEAD_ALERT);
	bool has_value();
	void clear_value();
	int32 value();
	void set_value(int32);
	bool has_target_player_entindex();
	void clear_target_player_entindex();
	int32 target_player_entindex();
	void set_target_player_entindex(int32);
	bool has_target_entindex();
	void clear_target_entindex();
	int32 target_entindex();
	void set_target_entindex(int32);
	bool has_source_player_entindex();
	void clear_source_player_entindex();
	int32 source_player_entindex();
	void set_source_player_entindex(int32);
	void set_has_message_type();
	void clear_has_message_type();
	void set_has_value();
	void clear_has_value();
	void set_has_target_player_entindex();
	void clear_has_target_player_entindex();
	void set_has_target_entindex();
	void clear_has_target_entindex();
	void set_has_source_player_entindex();
	void clear_has_source_player_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:7798
class CDOTAUserMsg_TutorialTipInfo : public Message {
public:

	static const int kNameFieldNumber = 1;
	static const int kProgressFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	int32 progress_;  // +0x20

	static CDOTAUserMsg_TutorialTipInfo * default_instance_;
	CDOTAUserMsg_TutorialTipInfo();
	virtual ~CDOTAUserMsg_TutorialTipInfo();
	CDOTAUserMsg_TutorialTipInfo(const CDOTAUserMsg_TutorialTipInfo &);
	CDOTAUserMsg_TutorialTipInfo & operator=(const CDOTAUserMsg_TutorialTipInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TutorialTipInfo & default_instance();
	void Swap(CDOTAUserMsg_TutorialTipInfo *);
	virtual CDOTAUserMsg_TutorialTipInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TutorialTipInfo &);
	void MergeFrom(const CDOTAUserMsg_TutorialTipInfo &);
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
	bool has_progress();
	void clear_progress();
	int32 progress();
	void set_progress(int32);
	void set_has_name();
	void clear_has_name();
	void set_has_progress();
	void clear_has_progress();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:7892
class CDOTAUserMsg_TutorialFinish : public Message {
public:

	static const int kHeadingFieldNumber = 1;
	static const int kEmblemFieldNumber = 2;
	static const int kBodyFieldNumber = 3;
	static const int kSuccessFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * heading_;  // +0x18
	string * emblem_;  // +0x20
	string * body_;  // +0x28
	bool success_;  // +0x30

	static CDOTAUserMsg_TutorialFinish * default_instance_;
	CDOTAUserMsg_TutorialFinish();
	virtual ~CDOTAUserMsg_TutorialFinish();
	CDOTAUserMsg_TutorialFinish(const CDOTAUserMsg_TutorialFinish &);
	CDOTAUserMsg_TutorialFinish & operator=(const CDOTAUserMsg_TutorialFinish &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TutorialFinish & default_instance();
	void Swap(CDOTAUserMsg_TutorialFinish *);
	virtual CDOTAUserMsg_TutorialFinish * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TutorialFinish &);
	void MergeFrom(const CDOTAUserMsg_TutorialFinish &);
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
	bool has_heading();
	void clear_heading();
	const string & heading();
	void set_heading(const string &);
	void set_heading(const char *);
	void set_heading(const char *, size_t);
	string * mutable_heading();
	string * release_heading();
	void set_allocated_heading(string *);
	bool has_emblem();
	void clear_emblem();
	const string & emblem();
	void set_emblem(const string &);
	void set_emblem(const char *);
	void set_emblem(const char *, size_t);
	string * mutable_emblem();
	string * release_emblem();
	void set_allocated_emblem(string *);
	bool has_body();
	void clear_body();
	const string & body();
	void set_body(const string &);
	void set_body(const char *);
	void set_body(const char *, size_t);
	string * mutable_body();
	string * release_body();
	void set_allocated_body(string *);
	bool has_success();
	void clear_success();
	bool success();
	void set_success(bool);
	void set_has_heading();
	void clear_has_heading();
	void set_has_emblem();
	void clear_has_emblem();
	void set_has_body();
	void clear_has_body();
	void set_has_success();
	void clear_has_success();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8016
class CDOTAUserMsg_TutorialMinimapPosition : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_TutorialMinimapPosition * default_instance_;
	CDOTAUserMsg_TutorialMinimapPosition();
	virtual ~CDOTAUserMsg_TutorialMinimapPosition();
	CDOTAUserMsg_TutorialMinimapPosition(const CDOTAUserMsg_TutorialMinimapPosition &);
	CDOTAUserMsg_TutorialMinimapPosition & operator=(const CDOTAUserMsg_TutorialMinimapPosition &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TutorialMinimapPosition & default_instance();
	void Swap(CDOTAUserMsg_TutorialMinimapPosition *);
	virtual CDOTAUserMsg_TutorialMinimapPosition * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TutorialMinimapPosition &);
	void MergeFrom(const CDOTAUserMsg_TutorialMinimapPosition &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8085
class CDOTAUserMsg_SendGenericToolTip : public Message {
public:

	static const int kTitleFieldNumber = 1;
	static const int kTextFieldNumber = 2;
	static const int kEntindexFieldNumber = 3;
	static const int kCloseFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * title_;  // +0x18
	string * text_;  // +0x20
	int32 entindex_;  // +0x28
	bool close_;  // +0x2c

	static CDOTAUserMsg_SendGenericToolTip * default_instance_;
	CDOTAUserMsg_SendGenericToolTip();
	virtual ~CDOTAUserMsg_SendGenericToolTip();
	CDOTAUserMsg_SendGenericToolTip(const CDOTAUserMsg_SendGenericToolTip &);
	CDOTAUserMsg_SendGenericToolTip & operator=(const CDOTAUserMsg_SendGenericToolTip &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SendGenericToolTip & default_instance();
	void Swap(CDOTAUserMsg_SendGenericToolTip *);
	virtual CDOTAUserMsg_SendGenericToolTip * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SendGenericToolTip &);
	void MergeFrom(const CDOTAUserMsg_SendGenericToolTip &);
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
	bool has_title();
	void clear_title();
	const string & title();
	void set_title(const string &);
	void set_title(const char *);
	void set_title(const char *, size_t);
	string * mutable_title();
	string * release_title();
	void set_allocated_title(string *);
	bool has_text();
	void clear_text();
	const string & text();
	void set_text(const string &);
	void set_text(const char *);
	void set_text(const char *, size_t);
	string * mutable_text();
	string * release_text();
	void set_allocated_text(string *);
	bool has_entindex();
	void clear_entindex();
	int32 entindex();
	void set_entindex(int32);
	bool has_close();
	void clear_close();
	bool close();
	void set_close(bool);
	void set_has_title();
	void clear_has_title();
	void set_has_text();
	void clear_has_text();
	void set_has_entindex();
	void clear_has_entindex();
	void set_has_close();
	void clear_has_close();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8204
class CDOTAUserMsg_WorldLine : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kWorldlineFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_id_;  // +0x20

	static CDOTAUserMsg_WorldLine * default_instance_;
	CDOTAUserMsg_WorldLine();
	virtual ~CDOTAUserMsg_WorldLine();
	CDOTAUserMsg_WorldLine(const CDOTAUserMsg_WorldLine &);
	CDOTAUserMsg_WorldLine & operator=(const CDOTAUserMsg_WorldLine &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_WorldLine & default_instance();
	void Swap(CDOTAUserMsg_WorldLine *);
	virtual CDOTAUserMsg_WorldLine * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_WorldLine &);
	void MergeFrom(const CDOTAUserMsg_WorldLine &);
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
	int32 player_id();
	void set_player_id(int32);
	bool has_worldline();
	void clear_worldline();
	const CDOTAMsg_WorldLine & worldline();
	CDOTAMsg_WorldLine * mutable_worldline();
	CDOTAMsg_WorldLine * release_worldline();
	void set_allocated_worldline(CDOTAMsg_WorldLine *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_worldline();
	void clear_has_worldline();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8295
class CDOTAUserMsg_ChatWheel : public Message {
public:

	static const int kChatMessageFieldNumber = 1;
	static const int kPlayerIdFieldNumber = 2;
	static const int kAccountIdFieldNumber = 3;
	static const int kParamHeroIdFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int chat_message_;  // +0x18
	uint32 player_id_;  // +0x1c
	uint32 account_id_;  // +0x20
	uint32 param_hero_id_;  // +0x24

	static CDOTAUserMsg_ChatWheel * default_instance_;
	CDOTAUserMsg_ChatWheel();
	virtual ~CDOTAUserMsg_ChatWheel();
	CDOTAUserMsg_ChatWheel(const CDOTAUserMsg_ChatWheel &);
	CDOTAUserMsg_ChatWheel & operator=(const CDOTAUserMsg_ChatWheel &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ChatWheel & default_instance();
	void Swap(CDOTAUserMsg_ChatWheel *);
	virtual CDOTAUserMsg_ChatWheel * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ChatWheel &);
	void MergeFrom(const CDOTAUserMsg_ChatWheel &);
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
	bool has_chat_message();
	void clear_chat_message();
	EDOTAChatWheelMessage chat_message();
	void set_chat_message(EDOTAChatWheelMessage);
	bool has_player_id();
	void clear_player_id();
	uint32 player_id();
	void set_player_id(uint32);
	bool has_account_id();
	void clear_account_id();
	uint32 account_id();
	void set_account_id(uint32);
	bool has_param_hero_id();
	void clear_param_hero_id();
	uint32 param_hero_id();
	void set_param_hero_id(uint32);
	void set_has_chat_message();
	void clear_has_chat_message();
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_param_hero_id();
	void clear_has_param_hero_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8404
class CDOTAUserMsg_ReceivedXmasGift : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kItemNameFieldNumber = 2;
	static const int kInventorySlotFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * item_name_;  // +0x18
	int32 player_id_;  // +0x20
	int32 inventory_slot_;  // +0x24

	static CDOTAUserMsg_ReceivedXmasGift * default_instance_;
	CDOTAUserMsg_ReceivedXmasGift();
	virtual ~CDOTAUserMsg_ReceivedXmasGift();
	CDOTAUserMsg_ReceivedXmasGift(const CDOTAUserMsg_ReceivedXmasGift &);
	CDOTAUserMsg_ReceivedXmasGift & operator=(const CDOTAUserMsg_ReceivedXmasGift &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ReceivedXmasGift & default_instance();
	void Swap(CDOTAUserMsg_ReceivedXmasGift *);
	virtual CDOTAUserMsg_ReceivedXmasGift * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ReceivedXmasGift &);
	void MergeFrom(const CDOTAUserMsg_ReceivedXmasGift &);
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
	int32 player_id();
	void set_player_id(int32);
	bool has_item_name();
	void clear_item_name();
	const string & item_name();
	void set_item_name(const string &);
	void set_item_name(const char *);
	void set_item_name(const char *, size_t);
	string * mutable_item_name();
	string * release_item_name();
	void set_allocated_item_name(string *);
	bool has_inventory_slot();
	void clear_inventory_slot();
	int32 inventory_slot();
	void set_inventory_slot(int32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_item_name();
	void clear_has_item_name();
	void set_has_inventory_slot();
	void clear_has_inventory_slot();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8508
class CDOTAUserMsg_ShowSurvey : public Message {
public:

	static const int kSurveyIdFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
	static const int kResponseStyleFieldNumber = 3;
	static const int kTeammateHeroIdFieldNumber = 4;
	static const int kTeammateNameFieldNumber = 5;
	static const int kTeammateAccountIdFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	int32 survey_id_;  // +0x20
	uint32 teammate_hero_id_;  // +0x24
	string * response_style_;  // +0x28
	string * teammate_name_;  // +0x30
	uint32 teammate_account_id_;  // +0x38

	static CDOTAUserMsg_ShowSurvey * default_instance_;
	CDOTAUserMsg_ShowSurvey();
	virtual ~CDOTAUserMsg_ShowSurvey();
	CDOTAUserMsg_ShowSurvey(const CDOTAUserMsg_ShowSurvey &);
	CDOTAUserMsg_ShowSurvey & operator=(const CDOTAUserMsg_ShowSurvey &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ShowSurvey & default_instance();
	void Swap(CDOTAUserMsg_ShowSurvey *);
	virtual CDOTAUserMsg_ShowSurvey * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ShowSurvey &);
	void MergeFrom(const CDOTAUserMsg_ShowSurvey &);
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
	bool has_survey_id();
	void clear_survey_id();
	int32 survey_id();
	void set_survey_id(int32);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_response_style();
	void clear_response_style();
	const string & response_style();
	void set_response_style(const string &);
	void set_response_style(const char *);
	void set_response_style(const char *, size_t);
	string * mutable_response_style();
	string * release_response_style();
	void set_allocated_response_style(string *);
	bool has_teammate_hero_id();
	void clear_teammate_hero_id();
	uint32 teammate_hero_id();
	void set_teammate_hero_id(uint32);
	bool has_teammate_name();
	void clear_teammate_name();
	const string & teammate_name();
	void set_teammate_name(const string &);
	void set_teammate_name(const char *);
	void set_teammate_name(const char *, size_t);
	string * mutable_teammate_name();
	string * release_teammate_name();
	void set_allocated_teammate_name(string *);
	bool has_teammate_account_id();
	void clear_teammate_account_id();
	uint32 teammate_account_id();
	void set_teammate_account_id(uint32);
	void set_has_survey_id();
	void clear_has_survey_id();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_response_style();
	void clear_has_response_style();
	void set_has_teammate_hero_id();
	void clear_has_teammate_hero_id();
	void set_has_teammate_name();
	void clear_has_teammate_name();
	void set_has_teammate_account_id();
	void clear_has_teammate_account_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8647
class CDOTAUserMsg_UpdateSharedContent : public Message {
public:

	static const int kSlotTypeFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 slot_type_;  // +0x18

	static CDOTAUserMsg_UpdateSharedContent * default_instance_;
	CDOTAUserMsg_UpdateSharedContent();
	virtual ~CDOTAUserMsg_UpdateSharedContent();
	CDOTAUserMsg_UpdateSharedContent(const CDOTAUserMsg_UpdateSharedContent &);
	CDOTAUserMsg_UpdateSharedContent & operator=(const CDOTAUserMsg_UpdateSharedContent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UpdateSharedContent & default_instance();
	void Swap(CDOTAUserMsg_UpdateSharedContent *);
	virtual CDOTAUserMsg_UpdateSharedContent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UpdateSharedContent &);
	void MergeFrom(const CDOTAUserMsg_UpdateSharedContent &);
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
	bool has_slot_type();
	void clear_slot_type();
	int32 slot_type();
	void set_slot_type(int32);
	void set_has_slot_type();
	void clear_has_slot_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8726
class CDOTAUserMsg_TutorialRequestExp : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_TutorialRequestExp * default_instance_;
	CDOTAUserMsg_TutorialRequestExp();
	virtual ~CDOTAUserMsg_TutorialRequestExp();
	CDOTAUserMsg_TutorialRequestExp(const CDOTAUserMsg_TutorialRequestExp &);
	CDOTAUserMsg_TutorialRequestExp & operator=(const CDOTAUserMsg_TutorialRequestExp &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TutorialRequestExp & default_instance();
	void Swap(CDOTAUserMsg_TutorialRequestExp *);
	virtual CDOTAUserMsg_TutorialRequestExp * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TutorialRequestExp &);
	void MergeFrom(const CDOTAUserMsg_TutorialRequestExp &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8795
class CDOTAUserMsg_TutorialFade : public Message {
public:

	static const int kTgtAlphaFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 tgt_alpha_;  // +0x18

	static CDOTAUserMsg_TutorialFade * default_instance_;
	CDOTAUserMsg_TutorialFade();
	virtual ~CDOTAUserMsg_TutorialFade();
	CDOTAUserMsg_TutorialFade(const CDOTAUserMsg_TutorialFade &);
	CDOTAUserMsg_TutorialFade & operator=(const CDOTAUserMsg_TutorialFade &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TutorialFade & default_instance();
	void Swap(CDOTAUserMsg_TutorialFade *);
	virtual CDOTAUserMsg_TutorialFade * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TutorialFade &);
	void MergeFrom(const CDOTAUserMsg_TutorialFade &);
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
	bool has_tgt_alpha();
	void clear_tgt_alpha();
	int32 tgt_alpha();
	void set_tgt_alpha(int32);
	void set_has_tgt_alpha();
	void clear_has_tgt_alpha();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8874
class CDOTAUserMsg_TutorialPingMinimap : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kPosXFieldNumber = 2;
	static const int kPosYFieldNumber = 3;
	static const int kPosZFieldNumber = 4;
	static const int kEntityIndexFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	float pos_x_;  // +0x1c
	float pos_y_;  // +0x20
	float pos_z_;  // +0x24
	int32 entity_index_;  // +0x28

	static CDOTAUserMsg_TutorialPingMinimap * default_instance_;
	CDOTAUserMsg_TutorialPingMinimap();
	virtual ~CDOTAUserMsg_TutorialPingMinimap();
	CDOTAUserMsg_TutorialPingMinimap(const CDOTAUserMsg_TutorialPingMinimap &);
	CDOTAUserMsg_TutorialPingMinimap & operator=(const CDOTAUserMsg_TutorialPingMinimap &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TutorialPingMinimap & default_instance();
	void Swap(CDOTAUserMsg_TutorialPingMinimap *);
	virtual CDOTAUserMsg_TutorialPingMinimap * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TutorialPingMinimap &);
	void MergeFrom(const CDOTAUserMsg_TutorialPingMinimap &);
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
	bool has_pos_x();
	void clear_pos_x();
	float pos_x();
	void set_pos_x(float);
	bool has_pos_y();
	void clear_pos_y();
	float pos_y();
	void set_pos_y(float);
	bool has_pos_z();
	void clear_pos_z();
	float pos_z();
	void set_pos_z(float);
	bool has_entity_index();
	void clear_entity_index();
	int32 entity_index();
	void set_entity_index(int32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_pos_x();
	void clear_has_pos_x();
	void set_has_pos_y();
	void clear_has_pos_y();
	void set_has_pos_z();
	void clear_has_pos_z();
	void set_has_entity_index();
	void clear_has_entity_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:8993
class CDOTAUserMsg_GamerulesStateChanged : public Message {
public:

	static const int kStateFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 state_;  // +0x18

	static CDOTAUserMsg_GamerulesStateChanged * default_instance_;
	CDOTAUserMsg_GamerulesStateChanged();
	virtual ~CDOTAUserMsg_GamerulesStateChanged();
	CDOTAUserMsg_GamerulesStateChanged(const CDOTAUserMsg_GamerulesStateChanged &);
	CDOTAUserMsg_GamerulesStateChanged & operator=(const CDOTAUserMsg_GamerulesStateChanged &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_GamerulesStateChanged & default_instance();
	void Swap(CDOTAUserMsg_GamerulesStateChanged *);
	virtual CDOTAUserMsg_GamerulesStateChanged * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_GamerulesStateChanged &);
	void MergeFrom(const CDOTAUserMsg_GamerulesStateChanged &);
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
	bool has_state();
	void clear_state();
	uint32 state();
	void set_state(uint32);
	void set_has_state();
	void clear_has_state();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9072
class CDOTAUserMsg_AddQuestLogEntry : public Message {
public:

	static const int kNpcNameFieldNumber = 1;
	static const int kNpcDialogFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * npc_name_;  // +0x18
	string * npc_dialog_;  // +0x20

	static CDOTAUserMsg_AddQuestLogEntry * default_instance_;
	CDOTAUserMsg_AddQuestLogEntry();
	virtual ~CDOTAUserMsg_AddQuestLogEntry();
	CDOTAUserMsg_AddQuestLogEntry(const CDOTAUserMsg_AddQuestLogEntry &);
	CDOTAUserMsg_AddQuestLogEntry & operator=(const CDOTAUserMsg_AddQuestLogEntry &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_AddQuestLogEntry & default_instance();
	void Swap(CDOTAUserMsg_AddQuestLogEntry *);
	virtual CDOTAUserMsg_AddQuestLogEntry * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_AddQuestLogEntry &);
	void MergeFrom(const CDOTAUserMsg_AddQuestLogEntry &);
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
	bool has_npc_name();
	void clear_npc_name();
	const string & npc_name();
	void set_npc_name(const string &);
	void set_npc_name(const char *);
	void set_npc_name(const char *, size_t);
	string * mutable_npc_name();
	string * release_npc_name();
	void set_allocated_npc_name(string *);
	bool has_npc_dialog();
	void clear_npc_dialog();
	const string & npc_dialog();
	void set_npc_dialog(const string &);
	void set_npc_dialog(const char *);
	void set_npc_dialog(const char *, size_t);
	string * mutable_npc_dialog();
	string * release_npc_dialog();
	void set_allocated_npc_dialog(string *);
	void set_has_npc_name();
	void clear_has_npc_name();
	void set_has_npc_dialog();
	void clear_has_npc_dialog();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9171
class CDOTAUserMsg_SendStatPopup : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kStatpopupFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_id_;  // +0x20

	static CDOTAUserMsg_SendStatPopup * default_instance_;
	CDOTAUserMsg_SendStatPopup();
	virtual ~CDOTAUserMsg_SendStatPopup();
	CDOTAUserMsg_SendStatPopup(const CDOTAUserMsg_SendStatPopup &);
	CDOTAUserMsg_SendStatPopup & operator=(const CDOTAUserMsg_SendStatPopup &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SendStatPopup & default_instance();
	void Swap(CDOTAUserMsg_SendStatPopup *);
	virtual CDOTAUserMsg_SendStatPopup * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SendStatPopup &);
	void MergeFrom(const CDOTAUserMsg_SendStatPopup &);
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
	int32 player_id();
	void set_player_id(int32);
	bool has_statpopup();
	void clear_statpopup();
	const CDOTAMsg_SendStatPopup & statpopup();
	CDOTAMsg_SendStatPopup * mutable_statpopup();
	CDOTAMsg_SendStatPopup * release_statpopup();
	void set_allocated_statpopup(CDOTAMsg_SendStatPopup *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_statpopup();
	void clear_has_statpopup();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9262
class CDOTAUserMsg_SendRoshanPopup : public Message {
public:

	static const int kReclaimedFieldNumber = 1;
	static const int kGametimeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool reclaimed_;  // +0x18

	int32 gametime_;  // +0x1c

	static CDOTAUserMsg_SendRoshanPopup * default_instance_;
	CDOTAUserMsg_SendRoshanPopup();
	virtual ~CDOTAUserMsg_SendRoshanPopup();
	CDOTAUserMsg_SendRoshanPopup(const CDOTAUserMsg_SendRoshanPopup &);
	CDOTAUserMsg_SendRoshanPopup & operator=(const CDOTAUserMsg_SendRoshanPopup &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SendRoshanPopup & default_instance();
	void Swap(CDOTAUserMsg_SendRoshanPopup *);
	virtual CDOTAUserMsg_SendRoshanPopup * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SendRoshanPopup &);
	void MergeFrom(const CDOTAUserMsg_SendRoshanPopup &);
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
	bool has_reclaimed();
	void clear_reclaimed();
	bool reclaimed();
	void set_reclaimed(bool);
	bool has_gametime();
	void clear_gametime();
	int32 gametime();
	void set_gametime(int32);
	void set_has_reclaimed();
	void clear_has_reclaimed();
	void set_has_gametime();
	void clear_has_gametime();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9351
class CDOTAUserMsg_SendFinalGold : public Message {
public:

	static const int kReliableGoldFieldNumber = 1;
	static const int kUnreliableGoldFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_SendFinalGold * default_instance_;
	CDOTAUserMsg_SendFinalGold();
	virtual ~CDOTAUserMsg_SendFinalGold();
	CDOTAUserMsg_SendFinalGold(const CDOTAUserMsg_SendFinalGold &);
	CDOTAUserMsg_SendFinalGold & operator=(const CDOTAUserMsg_SendFinalGold &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SendFinalGold & default_instance();
	void Swap(CDOTAUserMsg_SendFinalGold *);
	virtual CDOTAUserMsg_SendFinalGold * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SendFinalGold &);
	void MergeFrom(const CDOTAUserMsg_SendFinalGold &);
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
	int reliable_gold_size();
	void clear_reliable_gold();
	uint32 reliable_gold(int);
	void set_reliable_gold(int, uint32);
	void add_reliable_gold(uint32);
	const RepeatedField<unsigned int> & reliable_gold();
	RepeatedField<unsigned int> * mutable_reliable_gold();
	int unreliable_gold_size();
	void clear_unreliable_gold();
	uint32 unreliable_gold(int);
	void set_unreliable_gold(int, uint32);
	void add_unreliable_gold(uint32);
	const RepeatedField<unsigned int> & unreliable_gold();
	RepeatedField<unsigned int> * mutable_unreliable_gold();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9446
class CDOTAUserMsg_CustomMsg : public Message {
public:

	static const int kMessageFieldNumber = 1;
	static const int kPlayerIdFieldNumber = 2;
	static const int kValueFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * message_;  // +0x18
	int32 player_id_;  // +0x20
	int32 value_;  // +0x24

	static CDOTAUserMsg_CustomMsg * default_instance_;
	CDOTAUserMsg_CustomMsg();
	virtual ~CDOTAUserMsg_CustomMsg();
	CDOTAUserMsg_CustomMsg(const CDOTAUserMsg_CustomMsg &);
	CDOTAUserMsg_CustomMsg & operator=(const CDOTAUserMsg_CustomMsg &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CustomMsg & default_instance();
	void Swap(CDOTAUserMsg_CustomMsg *);
	virtual CDOTAUserMsg_CustomMsg * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CustomMsg &);
	void MergeFrom(const CDOTAUserMsg_CustomMsg &);
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
	bool has_player_id();
	void clear_player_id();
	int32 player_id();
	void set_player_id(int32);
	bool has_value();
	void clear_value();
	int32 value();
	void set_value(int32);
	void set_has_message();
	void clear_has_message();
	void set_has_player_id();
	void clear_has_player_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9550
class CDOTAUserMsg_CoachHUDPing : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kHudPingFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x20

	static CDOTAUserMsg_CoachHUDPing * default_instance_;
	CDOTAUserMsg_CoachHUDPing();
	virtual ~CDOTAUserMsg_CoachHUDPing();
	CDOTAUserMsg_CoachHUDPing(const CDOTAUserMsg_CoachHUDPing &);
	CDOTAUserMsg_CoachHUDPing & operator=(const CDOTAUserMsg_CoachHUDPing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CoachHUDPing & default_instance();
	void Swap(CDOTAUserMsg_CoachHUDPing *);
	virtual CDOTAUserMsg_CoachHUDPing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CoachHUDPing &);
	void MergeFrom(const CDOTAUserMsg_CoachHUDPing &);
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
	bool has_hud_ping();
	void clear_hud_ping();
	const CDOTAMsg_CoachHUDPing & hud_ping();
	CDOTAMsg_CoachHUDPing * mutable_hud_ping();
	CDOTAMsg_CoachHUDPing * release_hud_ping();
	void set_allocated_hud_ping(CDOTAMsg_CoachHUDPing *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_hud_ping();
	void clear_has_hud_ping();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9641
class CDOTAUserMsg_ClientLoadGridNav : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_ClientLoadGridNav * default_instance_;
	CDOTAUserMsg_ClientLoadGridNav();
	virtual ~CDOTAUserMsg_ClientLoadGridNav();
	CDOTAUserMsg_ClientLoadGridNav(const CDOTAUserMsg_ClientLoadGridNav &);
	CDOTAUserMsg_ClientLoadGridNav & operator=(const CDOTAUserMsg_ClientLoadGridNav &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ClientLoadGridNav & default_instance();
	void Swap(CDOTAUserMsg_ClientLoadGridNav *);
	virtual CDOTAUserMsg_ClientLoadGridNav * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ClientLoadGridNav &);
	void MergeFrom(const CDOTAUserMsg_ClientLoadGridNav &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9710
class CDOTAUserMsg_TE_Projectile : public Message {
public:

	static const int kHSourceFieldNumber = 1;
	static const int kHTargetFieldNumber = 2;
	static const int kMoveSpeedFieldNumber = 3;
	static const int kSourceAttachmentFieldNumber = 4;
	static const int kParticleSystemHandleFieldNumber = 5;
	static const int kDodgeableFieldNumber = 6;
	static const int kIsAttackFieldNumber = 7;
	static const int kIsEvadedFieldNumber = 8;
	static const int kExpireTimeFieldNumber = 9;
	static const int kMaximpacttimeFieldNumber = 10;
	static const int kColorgemcolorFieldNumber = 11;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 hsource_;  // +0x18
	int32 htarget_;  // +0x1c
	int32 movespeed_;  // +0x20
	int32 sourceattachment_;  // +0x24
	int64 particlesystemhandle_;  // +0x28
	bool dodgeable_;  // +0x30
	bool isattack_;  // +0x31
	bool isevaded_;  // +0x32

	float expiretime_;  // +0x34
	float maximpacttime_;  // +0x38
	uint32 colorgemcolor_;  // +0x3c

	static CDOTAUserMsg_TE_Projectile * default_instance_;
	CDOTAUserMsg_TE_Projectile();
	virtual ~CDOTAUserMsg_TE_Projectile();
	CDOTAUserMsg_TE_Projectile(const CDOTAUserMsg_TE_Projectile &);
	CDOTAUserMsg_TE_Projectile & operator=(const CDOTAUserMsg_TE_Projectile &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TE_Projectile & default_instance();
	void Swap(CDOTAUserMsg_TE_Projectile *);
	virtual CDOTAUserMsg_TE_Projectile * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TE_Projectile &);
	void MergeFrom(const CDOTAUserMsg_TE_Projectile &);
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
	bool has_hsource();
	void clear_hsource();
	int32 hsource();
	void set_hsource(int32);
	bool has_htarget();
	void clear_htarget();
	int32 htarget();
	void set_htarget(int32);
	bool has_movespeed();
	void clear_movespeed();
	int32 movespeed();
	void set_movespeed(int32);
	bool has_sourceattachment();
	void clear_sourceattachment();
	int32 sourceattachment();
	void set_sourceattachment(int32);
	bool has_particlesystemhandle();
	void clear_particlesystemhandle();
	int64 particlesystemhandle();
	void set_particlesystemhandle(int64);
	bool has_dodgeable();
	void clear_dodgeable();
	bool dodgeable();
	void set_dodgeable(bool);
	bool has_isattack();
	void clear_isattack();
	bool isattack();
	void set_isattack(bool);
	bool has_isevaded();
	void clear_isevaded();
	bool isevaded();
	void set_isevaded(bool);
	bool has_expiretime();
	void clear_expiretime();
	float expiretime();
	void set_expiretime(float);
	bool has_maximpacttime();
	void clear_maximpacttime();
	float maximpacttime();
	void set_maximpacttime(float);
	bool has_colorgemcolor();
	void clear_colorgemcolor();
	uint32 colorgemcolor();
	void set_colorgemcolor(uint32);
	void set_has_hsource();
	void clear_has_hsource();
	void set_has_htarget();
	void clear_has_htarget();
	void set_has_movespeed();
	void clear_has_movespeed();
	void set_has_sourceattachment();
	void clear_has_sourceattachment();
	void set_has_particlesystemhandle();
	void clear_has_particlesystemhandle();
	void set_has_dodgeable();
	void clear_has_dodgeable();
	void set_has_isattack();
	void clear_has_isattack();
	void set_has_isevaded();
	void clear_has_isevaded();
	void set_has_expiretime();
	void clear_has_expiretime();
	void set_has_maximpacttime();
	void clear_has_maximpacttime();
	void set_has_colorgemcolor();
	void clear_has_colorgemcolor();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:9889
class CDOTAUserMsg_TE_ProjectileLoc : public Message {
public:

	static const int kVSourceLocFieldNumber = 1;
	static const int kHTargetFieldNumber = 2;
	static const int kMoveSpeedFieldNumber = 3;
	static const int kParticleSystemHandleFieldNumber = 4;
	static const int kDodgeableFieldNumber = 5;
	static const int kIsAttackFieldNumber = 6;
	static const int kIsEvadedFieldNumber = 8;
	static const int kExpireTimeFieldNumber = 9;
	static const int kVTargetLocFieldNumber = 10;
	static const int kColorgemcolorFieldNumber = 11;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 htarget_;  // +0x20
	int32 movespeed_;  // +0x24
	int64 particlesystemhandle_;  // +0x28
	bool dodgeable_;  // +0x30
	bool isattack_;  // +0x31
	bool isevaded_;  // +0x32

	float expiretime_;  // +0x34
	uint32 colorgemcolor_;  // +0x40

	static CDOTAUserMsg_TE_ProjectileLoc * default_instance_;
	CDOTAUserMsg_TE_ProjectileLoc();
	virtual ~CDOTAUserMsg_TE_ProjectileLoc();
	CDOTAUserMsg_TE_ProjectileLoc(const CDOTAUserMsg_TE_ProjectileLoc &);
	CDOTAUserMsg_TE_ProjectileLoc & operator=(const CDOTAUserMsg_TE_ProjectileLoc &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TE_ProjectileLoc & default_instance();
	void Swap(CDOTAUserMsg_TE_ProjectileLoc *);
	virtual CDOTAUserMsg_TE_ProjectileLoc * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TE_ProjectileLoc &);
	void MergeFrom(const CDOTAUserMsg_TE_ProjectileLoc &);
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
	bool has_vsourceloc();
	void clear_vsourceloc();
	const CMsgVector & vsourceloc();
	CMsgVector * mutable_vsourceloc();
	CMsgVector * release_vsourceloc();
	void set_allocated_vsourceloc(CMsgVector *);
	bool has_htarget();
	void clear_htarget();
	int32 htarget();
	void set_htarget(int32);
	bool has_movespeed();
	void clear_movespeed();
	int32 movespeed();
	void set_movespeed(int32);
	bool has_particlesystemhandle();
	void clear_particlesystemhandle();
	int64 particlesystemhandle();
	void set_particlesystemhandle(int64);
	bool has_dodgeable();
	void clear_dodgeable();
	bool dodgeable();
	void set_dodgeable(bool);
	bool has_isattack();
	void clear_isattack();
	bool isattack();
	void set_isattack(bool);
	bool has_isevaded();
	void clear_isevaded();
	bool isevaded();
	void set_isevaded(bool);
	bool has_expiretime();
	void clear_expiretime();
	float expiretime();
	void set_expiretime(float);
	bool has_vtargetloc();
	void clear_vtargetloc();
	const CMsgVector & vtargetloc();
	CMsgVector * mutable_vtargetloc();
	CMsgVector * release_vtargetloc();
	void set_allocated_vtargetloc(CMsgVector *);
	bool has_colorgemcolor();
	void clear_colorgemcolor();
	uint32 colorgemcolor();
	void set_colorgemcolor(uint32);
	void set_has_vsourceloc();
	void clear_has_vsourceloc();
	void set_has_htarget();
	void clear_has_htarget();
	void set_has_movespeed();
	void clear_has_movespeed();
	void set_has_particlesystemhandle();
	void clear_has_particlesystemhandle();
	void set_has_dodgeable();
	void clear_has_dodgeable();
	void set_has_isattack();
	void clear_has_isattack();
	void set_has_isevaded();
	void clear_has_isevaded();
	void set_has_expiretime();
	void clear_has_expiretime();
	void set_has_vtargetloc();
	void clear_has_vtargetloc();
	void set_has_colorgemcolor();
	void clear_has_colorgemcolor();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10062
class CDOTAUserMsg_TE_DotaBloodImpact : public Message {
public:

	static const int kEntityFieldNumber = 1;
	static const int kScaleFieldNumber = 2;
	static const int kXnormalFieldNumber = 3;
	static const int kYnormalFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entity_;  // +0x18
	float scale_;  // +0x1c
	float xnormal_;  // +0x20
	float ynormal_;  // +0x24

	static CDOTAUserMsg_TE_DotaBloodImpact * default_instance_;
	CDOTAUserMsg_TE_DotaBloodImpact();
	virtual ~CDOTAUserMsg_TE_DotaBloodImpact();
	CDOTAUserMsg_TE_DotaBloodImpact(const CDOTAUserMsg_TE_DotaBloodImpact &);
	CDOTAUserMsg_TE_DotaBloodImpact & operator=(const CDOTAUserMsg_TE_DotaBloodImpact &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TE_DotaBloodImpact & default_instance();
	void Swap(CDOTAUserMsg_TE_DotaBloodImpact *);
	virtual CDOTAUserMsg_TE_DotaBloodImpact * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TE_DotaBloodImpact &);
	void MergeFrom(const CDOTAUserMsg_TE_DotaBloodImpact &);
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
	bool has_entity();
	void clear_entity();
	int32 entity();
	void set_entity(int32);
	bool has_scale();
	void clear_scale();
	float scale();
	void set_scale(float);
	bool has_xnormal();
	void clear_xnormal();
	float xnormal();
	void set_xnormal(float);
	bool has_ynormal();
	void clear_ynormal();
	float ynormal();
	void set_ynormal(float);
	void set_has_entity();
	void clear_has_entity();
	void set_has_scale();
	void clear_has_scale();
	void set_has_xnormal();
	void clear_has_xnormal();
	void set_has_ynormal();
	void clear_has_ynormal();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10171
class CDOTAUserMsg_AbilityPing : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kAbilityIdFieldNumber = 2;
	static const int kTypeFieldNumber = 3;
	static const int kCooldownSecondsFieldNumber = 4;
	static const int kLevelFieldNumber = 5;
	static const int kPassiveFieldNumber = 6;
	static const int kManaNeededFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 ability_id_;  // +0x1c
	int type_;  // +0x20
	uint32 cooldown_seconds_;  // +0x24
	uint32 level_;  // +0x28
	bool passive_;  // +0x2c

	uint32 mana_needed_;  // +0x30

	static CDOTAUserMsg_AbilityPing * default_instance_;
	CDOTAUserMsg_AbilityPing();
	virtual ~CDOTAUserMsg_AbilityPing();
	CDOTAUserMsg_AbilityPing(const CDOTAUserMsg_AbilityPing &);
	CDOTAUserMsg_AbilityPing & operator=(const CDOTAUserMsg_AbilityPing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_AbilityPing & default_instance();
	void Swap(CDOTAUserMsg_AbilityPing *);
	virtual CDOTAUserMsg_AbilityPing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_AbilityPing &);
	void MergeFrom(const CDOTAUserMsg_AbilityPing &);
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
	bool has_ability_id();
	void clear_ability_id();
	uint32 ability_id();
	void set_ability_id(uint32);
	bool has_type();
	void clear_type();
	DOTA_ABILITY_PING_TYPE type();
	void set_type(DOTA_ABILITY_PING_TYPE);
	bool has_cooldown_seconds();
	void clear_cooldown_seconds();
	uint32 cooldown_seconds();
	void set_cooldown_seconds(uint32);
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	bool has_passive();
	void clear_passive();
	bool passive();
	void set_passive(bool);
	bool has_mana_needed();
	void clear_mana_needed();
	uint32 mana_needed();
	void set_mana_needed(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_ability_id();
	void clear_has_ability_id();
	void set_has_type();
	void clear_has_type();
	void set_has_cooldown_seconds();
	void clear_has_cooldown_seconds();
	void set_has_level();
	void clear_has_level();
	void set_has_passive();
	void clear_has_passive();
	void set_has_mana_needed();
	void clear_has_mana_needed();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10310
class CDOTAUserMsg_TE_UnitAnimation : public Message {
public:

	static const int kEntityFieldNumber = 1;
	static const int kSequenceVariantFieldNumber = 2;
	static const int kPlaybackrateFieldNumber = 3;
	static const int kCastpointFieldNumber = 4;
	static const int kTypeFieldNumber = 5;
	static const int kActivityFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entity_;  // +0x18
	int32 sequencevariant_;  // +0x1c
	float playbackrate_;  // +0x20
	float castpoint_;  // +0x24
	int32 type_;  // +0x28
	int32 activity_;  // +0x2c

	static CDOTAUserMsg_TE_UnitAnimation * default_instance_;
	CDOTAUserMsg_TE_UnitAnimation();
	virtual ~CDOTAUserMsg_TE_UnitAnimation();
	CDOTAUserMsg_TE_UnitAnimation(const CDOTAUserMsg_TE_UnitAnimation &);
	CDOTAUserMsg_TE_UnitAnimation & operator=(const CDOTAUserMsg_TE_UnitAnimation &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TE_UnitAnimation & default_instance();
	void Swap(CDOTAUserMsg_TE_UnitAnimation *);
	virtual CDOTAUserMsg_TE_UnitAnimation * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TE_UnitAnimation &);
	void MergeFrom(const CDOTAUserMsg_TE_UnitAnimation &);
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
	bool has_entity();
	void clear_entity();
	int32 entity();
	void set_entity(int32);
	bool has_sequencevariant();
	void clear_sequencevariant();
	int32 sequencevariant();
	void set_sequencevariant(int32);
	bool has_playbackrate();
	void clear_playbackrate();
	float playbackrate();
	void set_playbackrate(float);
	bool has_castpoint();
	void clear_castpoint();
	float castpoint();
	void set_castpoint(float);
	bool has_type();
	void clear_type();
	int32 type();
	void set_type(int32);
	bool has_activity();
	void clear_activity();
	int32 activity();
	void set_activity(int32);
	void set_has_entity();
	void clear_has_entity();
	void set_has_sequencevariant();
	void clear_has_sequencevariant();
	void set_has_playbackrate();
	void clear_has_playbackrate();
	void set_has_castpoint();
	void clear_has_castpoint();
	void set_has_type();
	void clear_has_type();
	void set_has_activity();
	void clear_has_activity();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10439
class CDOTAUserMsg_TE_UnitAnimationEnd : public Message {
public:

	static const int kEntityFieldNumber = 1;
	static const int kSnapFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 entity_;  // +0x18
	bool snap_;  // +0x1c

	static CDOTAUserMsg_TE_UnitAnimationEnd * default_instance_;
	CDOTAUserMsg_TE_UnitAnimationEnd();
	virtual ~CDOTAUserMsg_TE_UnitAnimationEnd();
	CDOTAUserMsg_TE_UnitAnimationEnd(const CDOTAUserMsg_TE_UnitAnimationEnd &);
	CDOTAUserMsg_TE_UnitAnimationEnd & operator=(const CDOTAUserMsg_TE_UnitAnimationEnd &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_TE_UnitAnimationEnd & default_instance();
	void Swap(CDOTAUserMsg_TE_UnitAnimationEnd *);
	virtual CDOTAUserMsg_TE_UnitAnimationEnd * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_TE_UnitAnimationEnd &);
	void MergeFrom(const CDOTAUserMsg_TE_UnitAnimationEnd &);
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
	bool has_entity();
	void clear_entity();
	int32 entity();
	void set_entity(int32);
	bool has_snap();
	void clear_snap();
	bool snap();
	void set_snap(bool);
	void set_has_entity();
	void clear_has_entity();
	void set_has_snap();
	void clear_has_snap();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10528
class CDOTAUserMsg_ShowGenericPopup : public Message {
public:

	static const int kHeaderFieldNumber = 1;
	static const int kBodyFieldNumber = 2;
	static const int kParam1FieldNumber = 3;
	static const int kParam2FieldNumber = 4;
	static const int kTintScreenFieldNumber = 5;
	static const int kShowNoOtherDialogsFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * header_;  // +0x18
	string * body_;  // +0x20
	string * param1_;  // +0x28
	string * param2_;  // +0x30
	bool tint_screen_;  // +0x38
	bool show_no_other_dialogs_;  // +0x39

	static CDOTAUserMsg_ShowGenericPopup * default_instance_;
	CDOTAUserMsg_ShowGenericPopup();
	virtual ~CDOTAUserMsg_ShowGenericPopup();
	CDOTAUserMsg_ShowGenericPopup(const CDOTAUserMsg_ShowGenericPopup &);
	CDOTAUserMsg_ShowGenericPopup & operator=(const CDOTAUserMsg_ShowGenericPopup &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ShowGenericPopup & default_instance();
	void Swap(CDOTAUserMsg_ShowGenericPopup *);
	virtual CDOTAUserMsg_ShowGenericPopup * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ShowGenericPopup &);
	void MergeFrom(const CDOTAUserMsg_ShowGenericPopup &);
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
	bool has_header();
	void clear_header();
	const string & header();
	void set_header(const string &);
	void set_header(const char *);
	void set_header(const char *, size_t);
	string * mutable_header();
	string * release_header();
	void set_allocated_header(string *);
	bool has_body();
	void clear_body();
	const string & body();
	void set_body(const string &);
	void set_body(const char *);
	void set_body(const char *, size_t);
	string * mutable_body();
	string * release_body();
	void set_allocated_body(string *);
	bool has_param1();
	void clear_param1();
	const string & param1();
	void set_param1(const string &);
	void set_param1(const char *);
	void set_param1(const char *, size_t);
	string * mutable_param1();
	string * release_param1();
	void set_allocated_param1(string *);
	bool has_param2();
	void clear_param2();
	const string & param2();
	void set_param2(const string &);
	void set_param2(const char *);
	void set_param2(const char *, size_t);
	string * mutable_param2();
	string * release_param2();
	void set_allocated_param2(string *);
	bool has_tint_screen();
	void clear_tint_screen();
	bool tint_screen();
	void set_tint_screen(bool);
	bool has_show_no_other_dialogs();
	void clear_show_no_other_dialogs();
	bool show_no_other_dialogs();
	void set_show_no_other_dialogs(bool);
	void set_has_header();
	void clear_has_header();
	void set_has_body();
	void clear_has_body();
	void set_has_param1();
	void clear_has_param1();
	void set_has_param2();
	void clear_has_param2();
	void set_has_tint_screen();
	void clear_has_tint_screen();
	void set_has_show_no_other_dialogs();
	void clear_has_show_no_other_dialogs();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10677
class CDOTAUserMsg_VoteStart : public Message {
public:

	static const int kTitleFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
	static const int kChoiceCountFieldNumber = 3;
	static const int kChoicesFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * title_;  // +0x18
	float duration_;  // +0x20
	int32 choice_count_;  // +0x24

	static CDOTAUserMsg_VoteStart * default_instance_;
	CDOTAUserMsg_VoteStart();
	virtual ~CDOTAUserMsg_VoteStart();
	CDOTAUserMsg_VoteStart(const CDOTAUserMsg_VoteStart &);
	CDOTAUserMsg_VoteStart & operator=(const CDOTAUserMsg_VoteStart &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_VoteStart & default_instance();
	void Swap(CDOTAUserMsg_VoteStart *);
	virtual CDOTAUserMsg_VoteStart * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_VoteStart &);
	void MergeFrom(const CDOTAUserMsg_VoteStart &);
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
	bool has_title();
	void clear_title();
	const string & title();
	void set_title(const string &);
	void set_title(const char *);
	void set_title(const char *, size_t);
	string * mutable_title();
	string * release_title();
	void set_allocated_title(string *);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_choice_count();
	void clear_choice_count();
	int32 choice_count();
	void set_choice_count(int32);
	int choices_size();
	void clear_choices();
	const string & choices(int);
	string * mutable_choices(int);
	void set_choices(int, const string &);
	void set_choices(int, const char *);
	void set_choices(int, const char *, size_t);
	string * add_choices();
	void add_choices(const string &);
	void add_choices(const char *);
	void add_choices(const char *, size_t);
	const RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > & choices();
	RepeatedPtrField<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > * mutable_choices();
	void set_has_title();
	void clear_has_title();
	void set_has_duration();
	void clear_has_duration();
	void set_has_choice_count();
	void clear_has_choice_count();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10798
class CDOTAUserMsg_VoteUpdate : public Message {
public:

	static const int kChoiceCountsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_VoteUpdate * default_instance_;
	CDOTAUserMsg_VoteUpdate();
	virtual ~CDOTAUserMsg_VoteUpdate();
	CDOTAUserMsg_VoteUpdate(const CDOTAUserMsg_VoteUpdate &);
	CDOTAUserMsg_VoteUpdate & operator=(const CDOTAUserMsg_VoteUpdate &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_VoteUpdate & default_instance();
	void Swap(CDOTAUserMsg_VoteUpdate *);
	virtual CDOTAUserMsg_VoteUpdate * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_VoteUpdate &);
	void MergeFrom(const CDOTAUserMsg_VoteUpdate &);
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
	int choice_counts_size();
	void clear_choice_counts();
	int32 choice_counts(int);
	void set_choice_counts(int, int32);
	void add_choice_counts(int32);
	const RepeatedField<int> & choice_counts();
	RepeatedField<int> * mutable_choice_counts();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10880
class CDOTAUserMsg_VoteEnd : public Message {
public:

	static const int kSelectedChoiceFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 selected_choice_;  // +0x18

	static CDOTAUserMsg_VoteEnd * default_instance_;
	CDOTAUserMsg_VoteEnd();
	virtual ~CDOTAUserMsg_VoteEnd();
	CDOTAUserMsg_VoteEnd(const CDOTAUserMsg_VoteEnd &);
	CDOTAUserMsg_VoteEnd & operator=(const CDOTAUserMsg_VoteEnd &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_VoteEnd & default_instance();
	void Swap(CDOTAUserMsg_VoteEnd *);
	virtual CDOTAUserMsg_VoteEnd * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_VoteEnd &);
	void MergeFrom(const CDOTAUserMsg_VoteEnd &);
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
	bool has_selected_choice();
	void clear_selected_choice();
	int32 selected_choice();
	void set_selected_choice(int32);
	void set_has_selected_choice();
	void clear_has_selected_choice();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:10959
class CDOTAUserMsg_BoosterStatePlayer : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kBonusFieldNumber = 2;
	static const int kEventBonusFieldNumber = 3;
	static const int kBonusItemIdFieldNumber = 4;
	static const int kEventBonusItemIdFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	float bonus_;  // +0x1c
	float event_bonus_;  // +0x20
	uint32 bonus_item_id_;  // +0x24
	uint32 event_bonus_item_id_;  // +0x28

	static CDOTAUserMsg_BoosterStatePlayer * default_instance_;
	CDOTAUserMsg_BoosterStatePlayer();
	virtual ~CDOTAUserMsg_BoosterStatePlayer();
	CDOTAUserMsg_BoosterStatePlayer(const CDOTAUserMsg_BoosterStatePlayer &);
	CDOTAUserMsg_BoosterStatePlayer & operator=(const CDOTAUserMsg_BoosterStatePlayer &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_BoosterStatePlayer & default_instance();
	void Swap(CDOTAUserMsg_BoosterStatePlayer *);
	virtual CDOTAUserMsg_BoosterStatePlayer * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_BoosterStatePlayer &);
	void MergeFrom(const CDOTAUserMsg_BoosterStatePlayer &);
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
	bool has_bonus();
	void clear_bonus();
	float bonus();
	void set_bonus(float);
	bool has_event_bonus();
	void clear_event_bonus();
	float event_bonus();
	void set_event_bonus(float);
	bool has_bonus_item_id();
	void clear_bonus_item_id();
	uint32 bonus_item_id();
	void set_bonus_item_id(uint32);
	bool has_event_bonus_item_id();
	void clear_event_bonus_item_id();
	uint32 event_bonus_item_id();
	void set_event_bonus_item_id(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_bonus();
	void clear_has_bonus();
	void set_has_event_bonus();
	void clear_has_event_bonus();
	void set_has_bonus_item_id();
	void clear_has_bonus_item_id();
	void set_has_event_bonus_item_id();
	void clear_has_event_bonus_item_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11078
class CDOTAUserMsg_BoosterState : public Message {
public:

	static const int kBoostedPlayersFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_BoosterState * default_instance_;
	CDOTAUserMsg_BoosterState();
	virtual ~CDOTAUserMsg_BoosterState();
	CDOTAUserMsg_BoosterState(const CDOTAUserMsg_BoosterState &);
	CDOTAUserMsg_BoosterState & operator=(const CDOTAUserMsg_BoosterState &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_BoosterState & default_instance();
	void Swap(CDOTAUserMsg_BoosterState *);
	virtual CDOTAUserMsg_BoosterState * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_BoosterState &);
	void MergeFrom(const CDOTAUserMsg_BoosterState &);
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
	int boosted_players_size();
	void clear_boosted_players();
	const CDOTAUserMsg_BoosterStatePlayer & boosted_players(int);
	CDOTAUserMsg_BoosterStatePlayer * mutable_boosted_players(int);
	CDOTAUserMsg_BoosterStatePlayer * add_boosted_players();
	const RepeatedPtrField<CDOTAUserMsg_BoosterStatePlayer> & boosted_players();
	RepeatedPtrField<CDOTAUserMsg_BoosterStatePlayer> * mutable_boosted_players();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11160
class CDOTAUserMsg_PlayerMMR : public Message {
public:

	static const int kMmrFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int _mmr_cached_byte_size_;  // +0x28

	static CDOTAUserMsg_PlayerMMR * default_instance_;
	CDOTAUserMsg_PlayerMMR();
	virtual ~CDOTAUserMsg_PlayerMMR();
	CDOTAUserMsg_PlayerMMR(const CDOTAUserMsg_PlayerMMR &);
	CDOTAUserMsg_PlayerMMR & operator=(const CDOTAUserMsg_PlayerMMR &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_PlayerMMR & default_instance();
	void Swap(CDOTAUserMsg_PlayerMMR *);
	virtual CDOTAUserMsg_PlayerMMR * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_PlayerMMR &);
	void MergeFrom(const CDOTAUserMsg_PlayerMMR &);
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
	int mmr_size();
	void clear_mmr();
	int32 mmr(int);
	void set_mmr(int, int32);
	void add_mmr(int32);
	const RepeatedField<int> & mmr();
	RepeatedField<int> * mutable_mmr();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11243
class CDOTAUserMsg_AbilitySteal : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kAbilityIdFieldNumber = 2;
	static const int kAbilityLevelFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 ability_id_;  // +0x1c
	uint32 ability_level_;  // +0x20

	static CDOTAUserMsg_AbilitySteal * default_instance_;
	CDOTAUserMsg_AbilitySteal();
	virtual ~CDOTAUserMsg_AbilitySteal();
	CDOTAUserMsg_AbilitySteal(const CDOTAUserMsg_AbilitySteal &);
	CDOTAUserMsg_AbilitySteal & operator=(const CDOTAUserMsg_AbilitySteal &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_AbilitySteal & default_instance();
	void Swap(CDOTAUserMsg_AbilitySteal *);
	virtual CDOTAUserMsg_AbilitySteal * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_AbilitySteal &);
	void MergeFrom(const CDOTAUserMsg_AbilitySteal &);
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
	bool has_ability_id();
	void clear_ability_id();
	uint32 ability_id();
	void set_ability_id(uint32);
	bool has_ability_level();
	void clear_ability_level();
	uint32 ability_level();
	void set_ability_level(uint32);
	void set_has_player_id();
	void clear_has_player_id();
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
	// sizeof = 40
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11342
class CDOTAUserMsg_StatsHeroLookup : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kHeroIdFieldNumber = 2;
	static const int kHeroNameFieldNumber = 3;
	static const int kPersonaFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_id_;  // +0x18
	int32 hero_id_;  // +0x1c
	string * hero_name_;  // +0x20
	string * persona_;  // +0x28

	static CDOTAUserMsg_StatsHeroLookup * default_instance_;
	CDOTAUserMsg_StatsHeroLookup();
	virtual ~CDOTAUserMsg_StatsHeroLookup();
	CDOTAUserMsg_StatsHeroLookup(const CDOTAUserMsg_StatsHeroLookup &);
	CDOTAUserMsg_StatsHeroLookup & operator=(const CDOTAUserMsg_StatsHeroLookup &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsHeroLookup & default_instance();
	void Swap(CDOTAUserMsg_StatsHeroLookup *);
	virtual CDOTAUserMsg_StatsHeroLookup * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsHeroLookup &);
	void MergeFrom(const CDOTAUserMsg_StatsHeroLookup &);
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
	int32 player_id();
	void set_player_id(int32);
	bool has_hero_id();
	void clear_hero_id();
	int32 hero_id();
	void set_hero_id(int32);
	bool has_hero_name();
	void clear_hero_name();
	const string & hero_name();
	void set_hero_name(const string &);
	void set_hero_name(const char *);
	void set_hero_name(const char *, size_t);
	string * mutable_hero_name();
	string * release_hero_name();
	void set_allocated_hero_name(string *);
	bool has_persona();
	void clear_persona();
	const string & persona();
	void set_persona(const string &);
	void set_persona(const char *);
	void set_persona(const char *, size_t);
	string * mutable_persona();
	string * release_persona();
	void set_allocated_persona(string *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_hero_id();
	void clear_has_hero_id();
	void set_has_hero_name();
	void clear_has_hero_name();
	void set_has_persona();
	void clear_has_persona();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11461
class CDOTAUserMsg_StatsHeroPositionInfo_PositionPair : public Message {
public:

	static const int kPositionCategoryFieldNumber = 1;
	static const int kPositionCountFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int position_category_;  // +0x18
	uint32 position_count_;  // +0x1c

	static CDOTAUserMsg_StatsHeroPositionInfo_PositionPair * default_instance_;
	CDOTAUserMsg_StatsHeroPositionInfo_PositionPair();
	virtual ~CDOTAUserMsg_StatsHeroPositionInfo_PositionPair();
	CDOTAUserMsg_StatsHeroPositionInfo_PositionPair(const CDOTAUserMsg_StatsHeroPositionInfo_PositionPair &);
	CDOTAUserMsg_StatsHeroPositionInfo_PositionPair & operator=(const CDOTAUserMsg_StatsHeroPositionInfo_PositionPair &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsHeroPositionInfo_PositionPair & default_instance();
	void Swap(CDOTAUserMsg_StatsHeroPositionInfo_PositionPair *);
	virtual CDOTAUserMsg_StatsHeroPositionInfo_PositionPair * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsHeroPositionInfo_PositionPair &);
	void MergeFrom(const CDOTAUserMsg_StatsHeroPositionInfo_PositionPair &);
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
	bool has_position_category();
	void clear_position_category();
	DOTA_POSITION_CATEGORY position_category();
	void set_position_category(DOTA_POSITION_CATEGORY);
	bool has_position_count();
	void clear_position_count();
	uint32 position_count();
	void set_position_count(uint32);
	void set_has_position_category();
	void clear_has_position_category();
	void set_has_position_count();
	void clear_has_position_count();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11550
class CDOTAUserMsg_StatsHeroPositionInfo : public Message {
public:

	static const int kAveragePositionFieldNumber = 1;
	static const int kPositionDetailsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float average_position_;  // +0x30

	static CDOTAUserMsg_StatsHeroPositionInfo * default_instance_;
	CDOTAUserMsg_StatsHeroPositionInfo();
	virtual ~CDOTAUserMsg_StatsHeroPositionInfo();
	CDOTAUserMsg_StatsHeroPositionInfo(const CDOTAUserMsg_StatsHeroPositionInfo &);
	CDOTAUserMsg_StatsHeroPositionInfo & operator=(const CDOTAUserMsg_StatsHeroPositionInfo &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsHeroPositionInfo & default_instance();
	void Swap(CDOTAUserMsg_StatsHeroPositionInfo *);
	virtual CDOTAUserMsg_StatsHeroPositionInfo * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsHeroPositionInfo &);
	void MergeFrom(const CDOTAUserMsg_StatsHeroPositionInfo &);
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
	bool has_average_position();
	void clear_average_position();
	float average_position();
	void set_average_position(float);
	int position_details_size();
	void clear_position_details();
	const CDOTAUserMsg_StatsHeroPositionInfo_PositionPair & position_details(int);
	CDOTAUserMsg_StatsHeroPositionInfo_PositionPair * mutable_position_details(int);
	CDOTAUserMsg_StatsHeroPositionInfo_PositionPair * add_position_details();
	const RepeatedPtrField<CDOTAUserMsg_StatsHeroPositionInfo_PositionPair> & position_details();
	RepeatedPtrField<CDOTAUserMsg_StatsHeroPositionInfo_PositionPair> * mutable_position_details();
	void set_has_average_position();
	void clear_has_average_position();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11644
class CDOTAUserMsg_StatsHeroMinuteDetails : public Message {
public:

	static const int kLastHitsFieldNumber = 1;
	static const int kHeroKillsFieldNumber = 2;
	static const int kHeroDamageFieldNumber = 3;
	static const int kTowerDamageFieldNumber = 4;
	static const int kPositionInfoFieldNumber = 5;
	static const int kTotalXpFieldNumber = 6;
	static const int kNetWorthFieldNumber = 7;
	static const int kHarvestedCreepGoldFieldNumber = 8;
	static const int kClaimedFarmFieldNumber = 9;
	static const int kWardsPlacedFieldNumber = 10;
	static const int kRunesCollectedFieldNumber = 11;
	static const int kTpsUsedFieldNumber = 12;
	static const int kManaSpentFieldNumber = 13;
	static const int kDamageAbsorbedFieldNumber = 14;
	static const int kDamageDoneFieldNumber = 15;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 last_hits_;  // +0x18
	uint32 hero_kills_;  // +0x1c
	uint32 hero_damage_;  // +0x20
	uint32 tower_damage_;  // +0x24
	uint32 total_xp_;  // +0x30
	uint32 net_worth_;  // +0x34
	uint32 harvested_creep_gold_;  // +0x38
	uint32 claimed_farm_;  // +0x3c
	uint32 wards_placed_;  // +0x40
	uint32 runes_collected_;  // +0x44
	uint32 tps_used_;  // +0x78

	static CDOTAUserMsg_StatsHeroMinuteDetails * default_instance_;
	CDOTAUserMsg_StatsHeroMinuteDetails();
	virtual ~CDOTAUserMsg_StatsHeroMinuteDetails();
	CDOTAUserMsg_StatsHeroMinuteDetails(const CDOTAUserMsg_StatsHeroMinuteDetails &);
	CDOTAUserMsg_StatsHeroMinuteDetails & operator=(const CDOTAUserMsg_StatsHeroMinuteDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsHeroMinuteDetails & default_instance();
	void Swap(CDOTAUserMsg_StatsHeroMinuteDetails *);
	virtual CDOTAUserMsg_StatsHeroMinuteDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsHeroMinuteDetails &);
	void MergeFrom(const CDOTAUserMsg_StatsHeroMinuteDetails &);
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
	bool has_last_hits();
	void clear_last_hits();
	uint32 last_hits();
	void set_last_hits(uint32);
	bool has_hero_kills();
	void clear_hero_kills();
	uint32 hero_kills();
	void set_hero_kills(uint32);
	bool has_hero_damage();
	void clear_hero_damage();
	uint32 hero_damage();
	void set_hero_damage(uint32);
	bool has_tower_damage();
	void clear_tower_damage();
	uint32 tower_damage();
	void set_tower_damage(uint32);
	bool has_position_info();
	void clear_position_info();
	const CDOTAUserMsg_StatsHeroPositionInfo & position_info();
	CDOTAUserMsg_StatsHeroPositionInfo * mutable_position_info();
	CDOTAUserMsg_StatsHeroPositionInfo * release_position_info();
	void set_allocated_position_info(CDOTAUserMsg_StatsHeroPositionInfo *);
	bool has_total_xp();
	void clear_total_xp();
	uint32 total_xp();
	void set_total_xp(uint32);
	bool has_net_worth();
	void clear_net_worth();
	uint32 net_worth();
	void set_net_worth(uint32);
	bool has_harvested_creep_gold();
	void clear_harvested_creep_gold();
	uint32 harvested_creep_gold();
	void set_harvested_creep_gold(uint32);
	bool has_claimed_farm();
	void clear_claimed_farm();
	uint32 claimed_farm();
	void set_claimed_farm(uint32);
	bool has_wards_placed();
	void clear_wards_placed();
	uint32 wards_placed();
	void set_wards_placed(uint32);
	bool has_runes_collected();
	void clear_runes_collected();
	uint32 runes_collected();
	void set_runes_collected(uint32);
	bool has_tps_used();
	void clear_tps_used();
	uint32 tps_used();
	void set_tps_used(uint32);
	int mana_spent_size();
	void clear_mana_spent();
	uint32 mana_spent(int);
	void set_mana_spent(int, uint32);
	void add_mana_spent(uint32);
	const RepeatedField<unsigned int> & mana_spent();
	RepeatedField<unsigned int> * mutable_mana_spent();
	int damage_absorbed_size();
	void clear_damage_absorbed();
	uint32 damage_absorbed(int);
	void set_damage_absorbed(int, uint32);
	void add_damage_absorbed(uint32);
	const RepeatedField<unsigned int> & damage_absorbed();
	RepeatedField<unsigned int> * mutable_damage_absorbed();
	int damage_done_size();
	void clear_damage_done();
	uint32 damage_done(int);
	void set_damage_done(int, uint32);
	void add_damage_done(uint32);
	const RepeatedField<unsigned int> & damage_done();
	RepeatedField<unsigned int> * mutable_damage_done();
	void set_has_last_hits();
	void clear_has_last_hits();
	void set_has_hero_kills();
	void clear_has_hero_kills();
	void set_has_hero_damage();
	void clear_has_hero_damage();
	void set_has_tower_damage();
	void clear_has_tower_damage();
	void set_has_position_info();
	void clear_has_position_info();
	void set_has_total_xp();
	void clear_has_total_xp();
	void set_has_net_worth();
	void clear_has_net_worth();
	void set_has_harvested_creep_gold();
	void clear_has_harvested_creep_gold();
	void set_has_claimed_farm();
	void clear_has_claimed_farm();
	void set_has_wards_placed();
	void clear_has_wards_placed();
	void set_has_runes_collected();
	void clear_has_runes_collected();
	void set_has_tps_used();
	void clear_has_tps_used();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11874
class CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance : public Message {
public:

	static const int kLocationCategoryFieldNumber = 1;
	static const int kStatTypeFieldNumber = 2;
	static const int kValueFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 location_category_;  // +0x18
	uint32 stat_type_;  // +0x1c
	uint32 value_;  // +0x20

	static CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance * default_instance_;
	CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance();
	virtual ~CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance();
	CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance(const CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance &);
	CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance & operator=(const CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance & default_instance();
	void Swap(CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance *);
	virtual CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance &);
	void MergeFrom(const CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance &);
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
	bool has_location_category();
	void clear_location_category();
	uint32 location_category();
	void set_location_category(uint32);
	bool has_stat_type();
	void clear_stat_type();
	uint32 stat_type();
	void set_stat_type(uint32);
	bool has_value();
	void clear_value();
	uint32 value();
	void set_value(uint32);
	void set_has_location_category();
	void clear_has_location_category();
	void set_has_stat_type();
	void clear_has_stat_type();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:11973
class CDOTAUserMsg_StatsTeamMinuteDetails : public Message {
public:

	static const int kPlayerStatsFieldNumber = 1;
	static const int kTowerKillsFieldNumber = 2;
	static const int kBarrackKillsFieldNumber = 3;
	static const int kAvailableLaneCreepGoldFieldNumber = 4;
	static const int kBalanceKillValueFieldNumber = 5;
	static const int kBalanceTowerValueFieldNumber = 6;
	static const int kBalanceBarracksValueFieldNumber = 7;
	static const int kBalanceGoldValueFieldNumber = 8;
	static const int kBalanceXpValueFieldNumber = 9;
	static const int kLanePerformanceFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 tower_kills_;  // +0x30
	uint32 barrack_kills_;  // +0x34
	uint32 available_lane_creep_gold_;  // +0x38
	uint32 balance_kill_value_;  // +0x3c
	uint32 balance_tower_value_;  // +0x40
	uint32 balance_barracks_value_;  // +0x44
	uint32 balance_gold_value_;  // +0x48
	uint32 balance_xp_value_;  // +0x4c

	static CDOTAUserMsg_StatsTeamMinuteDetails * default_instance_;
	CDOTAUserMsg_StatsTeamMinuteDetails();
	virtual ~CDOTAUserMsg_StatsTeamMinuteDetails();
	CDOTAUserMsg_StatsTeamMinuteDetails(const CDOTAUserMsg_StatsTeamMinuteDetails &);
	CDOTAUserMsg_StatsTeamMinuteDetails & operator=(const CDOTAUserMsg_StatsTeamMinuteDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsTeamMinuteDetails & default_instance();
	void Swap(CDOTAUserMsg_StatsTeamMinuteDetails *);
	virtual CDOTAUserMsg_StatsTeamMinuteDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsTeamMinuteDetails &);
	void MergeFrom(const CDOTAUserMsg_StatsTeamMinuteDetails &);
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
	int player_stats_size();
	void clear_player_stats();
	const CDOTAUserMsg_StatsHeroMinuteDetails & player_stats(int);
	CDOTAUserMsg_StatsHeroMinuteDetails * mutable_player_stats(int);
	CDOTAUserMsg_StatsHeroMinuteDetails * add_player_stats();
	const RepeatedPtrField<CDOTAUserMsg_StatsHeroMinuteDetails> & player_stats();
	RepeatedPtrField<CDOTAUserMsg_StatsHeroMinuteDetails> * mutable_player_stats();
	bool has_tower_kills();
	void clear_tower_kills();
	uint32 tower_kills();
	void set_tower_kills(uint32);
	bool has_barrack_kills();
	void clear_barrack_kills();
	uint32 barrack_kills();
	void set_barrack_kills(uint32);
	bool has_available_lane_creep_gold();
	void clear_available_lane_creep_gold();
	uint32 available_lane_creep_gold();
	void set_available_lane_creep_gold(uint32);
	bool has_balance_kill_value();
	void clear_balance_kill_value();
	uint32 balance_kill_value();
	void set_balance_kill_value(uint32);
	bool has_balance_tower_value();
	void clear_balance_tower_value();
	uint32 balance_tower_value();
	void set_balance_tower_value(uint32);
	bool has_balance_barracks_value();
	void clear_balance_barracks_value();
	uint32 balance_barracks_value();
	void set_balance_barracks_value(uint32);
	bool has_balance_gold_value();
	void clear_balance_gold_value();
	uint32 balance_gold_value();
	void set_balance_gold_value(uint32);
	bool has_balance_xp_value();
	void clear_balance_xp_value();
	uint32 balance_xp_value();
	void set_balance_xp_value(uint32);
	int lane_performance_size();
	void clear_lane_performance();
	const CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance & lane_performance(int);
	CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance * mutable_lane_performance(int);
	CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance * add_lane_performance();
	const RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance> & lane_performance();
	RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails_LocationPerformance> * mutable_lane_performance();
	void set_has_tower_kills();
	void clear_has_tower_kills();
	void set_has_barrack_kills();
	void clear_has_barrack_kills();
	void set_has_available_lane_creep_gold();
	void clear_has_available_lane_creep_gold();
	void set_has_balance_kill_value();
	void clear_has_balance_kill_value();
	void set_has_balance_tower_value();
	void clear_has_balance_tower_value();
	void set_has_balance_barracks_value();
	void clear_has_balance_barracks_value();
	void set_has_balance_gold_value();
	void clear_has_balance_gold_value();
	void set_has_balance_xp_value();
	void clear_has_balance_xp_value();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:12150
class CDOTAUserMsg_StatsPlayerKillShare : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kKillSharePercentFieldNumber = 2;
	static const int kPlayerLocXFieldNumber = 3;
	static const int kPlayerLocYFieldNumber = 4;
	static const int kHealthPercentFieldNumber = 5;
	static const int kManaPercentFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 player_id_;  // +0x18
	float kill_share_percent_;  // +0x1c
	float player_loc_x_;  // +0x20
	float player_loc_y_;  // +0x24
	float health_percent_;  // +0x28
	float mana_percent_;  // +0x2c

	static CDOTAUserMsg_StatsPlayerKillShare * default_instance_;
	CDOTAUserMsg_StatsPlayerKillShare();
	virtual ~CDOTAUserMsg_StatsPlayerKillShare();
	CDOTAUserMsg_StatsPlayerKillShare(const CDOTAUserMsg_StatsPlayerKillShare &);
	CDOTAUserMsg_StatsPlayerKillShare & operator=(const CDOTAUserMsg_StatsPlayerKillShare &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsPlayerKillShare & default_instance();
	void Swap(CDOTAUserMsg_StatsPlayerKillShare *);
	virtual CDOTAUserMsg_StatsPlayerKillShare * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsPlayerKillShare &);
	void MergeFrom(const CDOTAUserMsg_StatsPlayerKillShare &);
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
	int32 player_id();
	void set_player_id(int32);
	bool has_kill_share_percent();
	void clear_kill_share_percent();
	float kill_share_percent();
	void set_kill_share_percent(float);
	bool has_player_loc_x();
	void clear_player_loc_x();
	float player_loc_x();
	void set_player_loc_x(float);
	bool has_player_loc_y();
	void clear_player_loc_y();
	float player_loc_y();
	void set_player_loc_y(float);
	bool has_health_percent();
	void clear_health_percent();
	float health_percent();
	void set_health_percent(float);
	bool has_mana_percent();
	void clear_mana_percent();
	float mana_percent();
	void set_mana_percent(float);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_kill_share_percent();
	void clear_has_kill_share_percent();
	void set_has_player_loc_x();
	void clear_has_player_loc_x();
	void set_has_player_loc_y();
	void clear_has_player_loc_y();
	void set_has_health_percent();
	void clear_has_health_percent();
	void set_has_mana_percent();
	void clear_has_mana_percent();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:12279
class CDOTAUserMsg_StatsKillDetails : public Message {
public:

	static const int kVictimIdFieldNumber = 1;
	static const int kKillSharesFieldNumber = 2;
	static const int kDamageToKillFieldNumber = 3;
	static const int kEffectiveHealthFieldNumber = 4;
	static const int kDeathTimeFieldNumber = 5;
	static const int kKillerIdFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 victim_id_;  // +0x30
	uint32 damage_to_kill_;  // +0x34
	uint32 effective_health_;  // +0x38
	float death_time_;  // +0x3c
	uint32 killer_id_;  // +0x40

	static CDOTAUserMsg_StatsKillDetails * default_instance_;
	CDOTAUserMsg_StatsKillDetails();
	virtual ~CDOTAUserMsg_StatsKillDetails();
	CDOTAUserMsg_StatsKillDetails(const CDOTAUserMsg_StatsKillDetails &);
	CDOTAUserMsg_StatsKillDetails & operator=(const CDOTAUserMsg_StatsKillDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsKillDetails & default_instance();
	void Swap(CDOTAUserMsg_StatsKillDetails *);
	virtual CDOTAUserMsg_StatsKillDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsKillDetails &);
	void MergeFrom(const CDOTAUserMsg_StatsKillDetails &);
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
	bool has_victim_id();
	void clear_victim_id();
	uint32 victim_id();
	void set_victim_id(uint32);
	int kill_shares_size();
	void clear_kill_shares();
	const CDOTAUserMsg_StatsPlayerKillShare & kill_shares(int);
	CDOTAUserMsg_StatsPlayerKillShare * mutable_kill_shares(int);
	CDOTAUserMsg_StatsPlayerKillShare * add_kill_shares();
	const RepeatedPtrField<CDOTAUserMsg_StatsPlayerKillShare> & kill_shares();
	RepeatedPtrField<CDOTAUserMsg_StatsPlayerKillShare> * mutable_kill_shares();
	bool has_damage_to_kill();
	void clear_damage_to_kill();
	uint32 damage_to_kill();
	void set_damage_to_kill(uint32);
	bool has_effective_health();
	void clear_effective_health();
	uint32 effective_health();
	void set_effective_health(uint32);
	bool has_death_time();
	void clear_death_time();
	float death_time();
	void set_death_time(float);
	bool has_killer_id();
	void clear_killer_id();
	uint32 killer_id();
	void set_killer_id(uint32);
	void set_has_victim_id();
	void clear_has_victim_id();
	void set_has_damage_to_kill();
	void clear_has_damage_to_kill();
	void set_has_effective_health();
	void clear_has_effective_health();
	void set_has_death_time();
	void clear_has_death_time();
	void set_has_killer_id();
	void clear_has_killer_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:12411
class CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails : public Message {
public:

	static const int kParticipantsFieldNumber = 1;
	static const int kDeathsFieldNumber = 2;
	static const int kGoldDeltaFieldNumber = 3;
	static const int kXpDeltaFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 gold_delta_;  // +0x38
	uint32 xp_delta_;  // +0x3c

	static CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails * default_instance_;
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails();
	virtual ~CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails();
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails(const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails &);
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails & operator=(const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails & default_instance();
	void Swap(CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *);
	virtual CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails &);
	void MergeFrom(const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails &);
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
	int participants_size();
	void clear_participants();
	uint32 participants(int);
	void set_participants(int, uint32);
	void add_participants(uint32);
	const RepeatedField<unsigned int> & participants();
	RepeatedField<unsigned int> * mutable_participants();
	int deaths_size();
	void clear_deaths();
	uint32 deaths(int);
	void set_deaths(int, uint32);
	void add_deaths(uint32);
	const RepeatedField<unsigned int> & deaths();
	RepeatedField<unsigned int> * mutable_deaths();
	bool has_gold_delta();
	void clear_gold_delta();
	uint32 gold_delta();
	void set_gold_delta(uint32);
	bool has_xp_delta();
	void clear_xp_delta();
	uint32 xp_delta();
	void set_xp_delta(uint32);
	void set_has_gold_delta();
	void clear_has_gold_delta();
	void set_has_xp_delta();
	void clear_has_xp_delta();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:12526
class CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails : public Message {
public:

	static const int kStartTimeFieldNumber = 1;
	static const int kEndTimeFieldNumber = 2;
	static const int kRadiantFightDetailsFieldNumber = 3;
	static const int kDireFightDetailsFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float start_time_;  // +0x18
	float end_time_;  // +0x1c

	static CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails * default_instance_;
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails();
	virtual ~CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails();
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails(const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails &);
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails & operator=(const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails & default_instance();
	void Swap(CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails *);
	virtual CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails &);
	void MergeFrom(const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails &);
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
	bool has_start_time();
	void clear_start_time();
	float start_time();
	void set_start_time(float);
	bool has_end_time();
	void clear_end_time();
	float end_time();
	void set_end_time(float);
	bool has_radiant_fight_details();
	void clear_radiant_fight_details();
	const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails & radiant_fight_details();
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails * mutable_radiant_fight_details();
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails * release_radiant_fight_details();
	void set_allocated_radiant_fight_details(CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *);
	bool has_dire_fight_details();
	void clear_dire_fight_details();
	const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails & dire_fight_details();
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails * mutable_dire_fight_details();
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails * release_dire_fight_details();
	void set_allocated_dire_fight_details(CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightTeamDetails *);
	void set_has_start_time();
	void clear_has_start_time();
	void set_has_end_time();
	void clear_has_end_time();
	void set_has_radiant_fight_details();
	void clear_has_radiant_fight_details();
	void set_has_dire_fight_details();
	void clear_has_dire_fight_details();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:12639
class CDOTAUserMsg_StatsMatchDetails : public Message {
public:

	static const int kHeroLookupFieldNumber = 1;
	static const int kRadiantStatsFieldNumber = 2;
	static const int kDireStatsFieldNumber = 3;
	static const int kRadiantKillsFieldNumber = 4;
	static const int kDireKillsFieldNumber = 5;
	static const int kFightDetailsFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_StatsMatchDetails * default_instance_;
	CDOTAUserMsg_StatsMatchDetails();
	virtual ~CDOTAUserMsg_StatsMatchDetails();
	CDOTAUserMsg_StatsMatchDetails(const CDOTAUserMsg_StatsMatchDetails &);
	CDOTAUserMsg_StatsMatchDetails & operator=(const CDOTAUserMsg_StatsMatchDetails &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_StatsMatchDetails & default_instance();
	void Swap(CDOTAUserMsg_StatsMatchDetails *);
	virtual CDOTAUserMsg_StatsMatchDetails * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_StatsMatchDetails &);
	void MergeFrom(const CDOTAUserMsg_StatsMatchDetails &);
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
	int hero_lookup_size();
	void clear_hero_lookup();
	const CDOTAUserMsg_StatsHeroLookup & hero_lookup(int);
	CDOTAUserMsg_StatsHeroLookup * mutable_hero_lookup(int);
	CDOTAUserMsg_StatsHeroLookup * add_hero_lookup();
	const RepeatedPtrField<CDOTAUserMsg_StatsHeroLookup> & hero_lookup();
	RepeatedPtrField<CDOTAUserMsg_StatsHeroLookup> * mutable_hero_lookup();
	int radiant_stats_size();
	void clear_radiant_stats();
	const CDOTAUserMsg_StatsTeamMinuteDetails & radiant_stats(int);
	CDOTAUserMsg_StatsTeamMinuteDetails * mutable_radiant_stats(int);
	CDOTAUserMsg_StatsTeamMinuteDetails * add_radiant_stats();
	const RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails> & radiant_stats();
	RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails> * mutable_radiant_stats();
	int dire_stats_size();
	void clear_dire_stats();
	const CDOTAUserMsg_StatsTeamMinuteDetails & dire_stats(int);
	CDOTAUserMsg_StatsTeamMinuteDetails * mutable_dire_stats(int);
	CDOTAUserMsg_StatsTeamMinuteDetails * add_dire_stats();
	const RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails> & dire_stats();
	RepeatedPtrField<CDOTAUserMsg_StatsTeamMinuteDetails> * mutable_dire_stats();
	int radiant_kills_size();
	void clear_radiant_kills();
	const CDOTAUserMsg_StatsKillDetails & radiant_kills(int);
	CDOTAUserMsg_StatsKillDetails * mutable_radiant_kills(int);
	CDOTAUserMsg_StatsKillDetails * add_radiant_kills();
	const RepeatedPtrField<CDOTAUserMsg_StatsKillDetails> & radiant_kills();
	RepeatedPtrField<CDOTAUserMsg_StatsKillDetails> * mutable_radiant_kills();
	int dire_kills_size();
	void clear_dire_kills();
	const CDOTAUserMsg_StatsKillDetails & dire_kills(int);
	CDOTAUserMsg_StatsKillDetails * mutable_dire_kills(int);
	CDOTAUserMsg_StatsKillDetails * add_dire_kills();
	const RepeatedPtrField<CDOTAUserMsg_StatsKillDetails> & dire_kills();
	RepeatedPtrField<CDOTAUserMsg_StatsKillDetails> * mutable_dire_kills();
	int fight_details_size();
	void clear_fight_details();
	const CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails & fight_details(int);
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails * mutable_fight_details(int);
	CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails * add_fight_details();
	const RepeatedPtrField<CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails> & fight_details();
	RepeatedPtrField<CDOTAUserMsg_StatsMatchDetails_CDOTAUserMsg_StatsFightDetails> * mutable_fight_details();
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
	// sizeof = 168
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:12789
class CDOTAUserMsg_MiniTaunt : public Message {
public:

	static const int kTauntingPlayerIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 taunting_player_id_;  // +0x18

	static CDOTAUserMsg_MiniTaunt * default_instance_;
	CDOTAUserMsg_MiniTaunt();
	virtual ~CDOTAUserMsg_MiniTaunt();
	CDOTAUserMsg_MiniTaunt(const CDOTAUserMsg_MiniTaunt &);
	CDOTAUserMsg_MiniTaunt & operator=(const CDOTAUserMsg_MiniTaunt &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_MiniTaunt & default_instance();
	void Swap(CDOTAUserMsg_MiniTaunt *);
	virtual CDOTAUserMsg_MiniTaunt * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_MiniTaunt &);
	void MergeFrom(const CDOTAUserMsg_MiniTaunt &);
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
	bool has_taunting_player_id();
	void clear_taunting_player_id();
	uint32 taunting_player_id();
	void set_taunting_player_id(uint32);
	void set_has_taunting_player_id();
	void clear_has_taunting_player_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:12868
class CDOTAUserMsg_SpeechBubble : public Message {
public:

	static const int kDestroyAllFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool destroy_all_;  // +0x18

	static CDOTAUserMsg_SpeechBubble * default_instance_;
	CDOTAUserMsg_SpeechBubble();
	virtual ~CDOTAUserMsg_SpeechBubble();
	CDOTAUserMsg_SpeechBubble(const CDOTAUserMsg_SpeechBubble &);
	CDOTAUserMsg_SpeechBubble & operator=(const CDOTAUserMsg_SpeechBubble &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SpeechBubble & default_instance();
	void Swap(CDOTAUserMsg_SpeechBubble *);
	virtual CDOTAUserMsg_SpeechBubble * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SpeechBubble &);
	void MergeFrom(const CDOTAUserMsg_SpeechBubble &);
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
	bool has_destroy_all();
	void clear_destroy_all();
	bool destroy_all();
	void set_destroy_all(bool);
	void set_has_destroy_all();
	void clear_has_destroy_all();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:12947
class CDOTAUserMsg_CustomHeaderMessage : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kDurationFieldNumber = 2;
	static const int kMessageFieldNumber = 3;
	static const int kValueFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	float duration_;  // +0x1c
	string * message_;  // +0x20
	int32 value_;  // +0x28

	static CDOTAUserMsg_CustomHeaderMessage * default_instance_;
	CDOTAUserMsg_CustomHeaderMessage();
	virtual ~CDOTAUserMsg_CustomHeaderMessage();
	CDOTAUserMsg_CustomHeaderMessage(const CDOTAUserMsg_CustomHeaderMessage &);
	CDOTAUserMsg_CustomHeaderMessage & operator=(const CDOTAUserMsg_CustomHeaderMessage &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CustomHeaderMessage & default_instance();
	void Swap(CDOTAUserMsg_CustomHeaderMessage *);
	virtual CDOTAUserMsg_CustomHeaderMessage * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CustomHeaderMessage &);
	void MergeFrom(const CDOTAUserMsg_CustomHeaderMessage &);
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
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_message();
	void clear_message();
	const string & message();
	void set_message(const string &);
	void set_message(const char *);
	void set_message(const char *, size_t);
	string * mutable_message();
	string * release_message();
	void set_allocated_message(string *);
	bool has_value();
	void clear_value();
	int32 value();
	void set_value(int32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_duration();
	void clear_has_duration();
	void set_has_message();
	void clear_has_message();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13061
class CMsgHeroAbilityStat : public Message {
public:

	static const int kStatTypeFieldNumber = 1;
	static const int kIntValueFieldNumber = 2;
	static const int kFloatValueFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int stat_type_;  // +0x18
	int32 int_value_;  // +0x1c
	float float_value_;  // +0x20

	static CMsgHeroAbilityStat * default_instance_;
	CMsgHeroAbilityStat();
	virtual ~CMsgHeroAbilityStat();
	CMsgHeroAbilityStat(const CMsgHeroAbilityStat &);
	CMsgHeroAbilityStat & operator=(const CMsgHeroAbilityStat &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgHeroAbilityStat & default_instance();
	void Swap(CMsgHeroAbilityStat *);
	virtual CMsgHeroAbilityStat * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgHeroAbilityStat &);
	void MergeFrom(const CMsgHeroAbilityStat &);
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
	bool has_stat_type();
	void clear_stat_type();
	EHeroStatType stat_type();
	void set_stat_type(EHeroStatType);
	bool has_int_value();
	void clear_int_value();
	int32 int_value();
	void set_int_value(int32);
	bool has_float_value();
	void clear_float_value();
	float float_value();
	void set_float_value(float);
	void set_has_stat_type();
	void clear_has_stat_type();
	void set_has_int_value();
	void clear_has_int_value();
	void set_has_float_value();
	void clear_has_float_value();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13160
class CMsgCombatAnalyzerPlayerStat : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kHeroAbilityStatsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x30

	static CMsgCombatAnalyzerPlayerStat * default_instance_;
	CMsgCombatAnalyzerPlayerStat();
	virtual ~CMsgCombatAnalyzerPlayerStat();
	CMsgCombatAnalyzerPlayerStat(const CMsgCombatAnalyzerPlayerStat &);
	CMsgCombatAnalyzerPlayerStat & operator=(const CMsgCombatAnalyzerPlayerStat &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgCombatAnalyzerPlayerStat & default_instance();
	void Swap(CMsgCombatAnalyzerPlayerStat *);
	virtual CMsgCombatAnalyzerPlayerStat * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgCombatAnalyzerPlayerStat &);
	void MergeFrom(const CMsgCombatAnalyzerPlayerStat &);
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
	int hero_ability_stats_size();
	void clear_hero_ability_stats();
	const CMsgHeroAbilityStat & hero_ability_stats(int);
	CMsgHeroAbilityStat * mutable_hero_ability_stats(int);
	CMsgHeroAbilityStat * add_hero_ability_stats();
	const RepeatedPtrField<CMsgHeroAbilityStat> & hero_ability_stats();
	RepeatedPtrField<CMsgHeroAbilityStat> * mutable_hero_ability_stats();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13252
class CMsgCombatAnalyzerStats : public Message {
public:

	static const int kMatchIdFieldNumber = 1;
	static const int kPlayerStatsFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18

	static CMsgCombatAnalyzerStats * default_instance_;
	CMsgCombatAnalyzerStats();
	virtual ~CMsgCombatAnalyzerStats();
	CMsgCombatAnalyzerStats(const CMsgCombatAnalyzerStats &);
	CMsgCombatAnalyzerStats & operator=(const CMsgCombatAnalyzerStats &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgCombatAnalyzerStats & default_instance();
	void Swap(CMsgCombatAnalyzerStats *);
	virtual CMsgCombatAnalyzerStats * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgCombatAnalyzerStats &);
	void MergeFrom(const CMsgCombatAnalyzerStats &);
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
	int player_stats_size();
	void clear_player_stats();
	const CMsgCombatAnalyzerPlayerStat & player_stats(int);
	CMsgCombatAnalyzerPlayerStat * mutable_player_stats(int);
	CMsgCombatAnalyzerPlayerStat * add_player_stats();
	const RepeatedPtrField<CMsgCombatAnalyzerPlayerStat> & player_stats();
	RepeatedPtrField<CMsgCombatAnalyzerPlayerStat> * mutable_player_stats();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13344
class CDOTAUserMsg_BeastChat : public Message {
public:

	static const int kTeamFieldNumber = 1;
	static const int kFormatFieldNumber = 2;
	static const int kMessageFieldNumber = 3;
	static const int kTargetFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * format_;  // +0x18
	string * message_;  // +0x20
	string * target_;  // +0x28
	uint32 team_;  // +0x30

	static CDOTAUserMsg_BeastChat * default_instance_;
	CDOTAUserMsg_BeastChat();
	virtual ~CDOTAUserMsg_BeastChat();
	CDOTAUserMsg_BeastChat(const CDOTAUserMsg_BeastChat &);
	CDOTAUserMsg_BeastChat & operator=(const CDOTAUserMsg_BeastChat &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_BeastChat & default_instance();
	void Swap(CDOTAUserMsg_BeastChat *);
	virtual CDOTAUserMsg_BeastChat * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_BeastChat &);
	void MergeFrom(const CDOTAUserMsg_BeastChat &);
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
	bool has_format();
	void clear_format();
	const string & format();
	void set_format(const string &);
	void set_format(const char *);
	void set_format(const char *, size_t);
	string * mutable_format();
	string * release_format();
	void set_allocated_format(string *);
	bool has_message();
	void clear_message();
	const string & message();
	void set_message(const string &);
	void set_message(const char *);
	void set_message(const char *, size_t);
	string * mutable_message();
	string * release_message();
	void set_allocated_message(string *);
	bool has_target();
	void clear_target();
	const string & target();
	void set_target(const string &);
	void set_target(const char *);
	void set_target(const char *, size_t);
	string * mutable_target();
	string * release_target();
	void set_allocated_target(string *);
	void set_has_team();
	void clear_has_team();
	void set_has_format();
	void clear_has_format();
	void set_has_message();
	void clear_has_message();
	void set_has_target();
	void clear_has_target();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13468
class CDOTAUserMsg_CustomHudElement_Create : public Message {
public:

	static const int kElementIdFieldNumber = 1;
	static const int kLayoutFilenameFieldNumber = 2;
	static const int kDataFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * element_id_;  // +0x18
	string * layout_filename_;  // +0x20
	string * data_;  // +0x28

	static CDOTAUserMsg_CustomHudElement_Create * default_instance_;
	CDOTAUserMsg_CustomHudElement_Create();
	virtual ~CDOTAUserMsg_CustomHudElement_Create();
	CDOTAUserMsg_CustomHudElement_Create(const CDOTAUserMsg_CustomHudElement_Create &);
	CDOTAUserMsg_CustomHudElement_Create & operator=(const CDOTAUserMsg_CustomHudElement_Create &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CustomHudElement_Create & default_instance();
	void Swap(CDOTAUserMsg_CustomHudElement_Create *);
	virtual CDOTAUserMsg_CustomHudElement_Create * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CustomHudElement_Create &);
	void MergeFrom(const CDOTAUserMsg_CustomHudElement_Create &);
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
	bool has_element_id();
	void clear_element_id();
	const string & element_id();
	void set_element_id(const string &);
	void set_element_id(const char *);
	void set_element_id(const char *, size_t);
	string * mutable_element_id();
	string * release_element_id();
	void set_allocated_element_id(string *);
	bool has_layout_filename();
	void clear_layout_filename();
	const string & layout_filename();
	void set_layout_filename(const string &);
	void set_layout_filename(const char *);
	void set_layout_filename(const char *, size_t);
	string * mutable_layout_filename();
	string * release_layout_filename();
	void set_allocated_layout_filename(string *);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_element_id();
	void clear_has_element_id();
	void set_has_layout_filename();
	void clear_has_layout_filename();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13582
class CDOTAUserMsg_CustomHudElement_Modify : public Message {
public:

	static const int kElementIdFieldNumber = 1;
	static const int kModifyVisibleFieldNumber = 2;
	static const int kDataFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * element_id_;  // +0x18
	string * data_;  // +0x20
	bool modify_visible_;  // +0x28

	static CDOTAUserMsg_CustomHudElement_Modify * default_instance_;
	CDOTAUserMsg_CustomHudElement_Modify();
	virtual ~CDOTAUserMsg_CustomHudElement_Modify();
	CDOTAUserMsg_CustomHudElement_Modify(const CDOTAUserMsg_CustomHudElement_Modify &);
	CDOTAUserMsg_CustomHudElement_Modify & operator=(const CDOTAUserMsg_CustomHudElement_Modify &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CustomHudElement_Modify & default_instance();
	void Swap(CDOTAUserMsg_CustomHudElement_Modify *);
	virtual CDOTAUserMsg_CustomHudElement_Modify * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CustomHudElement_Modify &);
	void MergeFrom(const CDOTAUserMsg_CustomHudElement_Modify &);
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
	bool has_element_id();
	void clear_element_id();
	const string & element_id();
	void set_element_id(const string &);
	void set_element_id(const char *);
	void set_element_id(const char *, size_t);
	string * mutable_element_id();
	string * release_element_id();
	void set_allocated_element_id(string *);
	bool has_modify_visible();
	void clear_modify_visible();
	bool modify_visible();
	void set_modify_visible(bool);
	bool has_data();
	void clear_data();
	const string & data();
	void set_data(const string &);
	void set_data(const char *);
	void set_data(const void *, size_t);
	string * mutable_data();
	string * release_data();
	void set_allocated_data(string *);
	void set_has_element_id();
	void clear_has_element_id();
	void set_has_modify_visible();
	void clear_has_modify_visible();
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
	// sizeof = 48
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13691
class CDOTAUserMsg_CustomHudElement_Destroy : public Message {
public:

	static const int kElementIdFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * element_id_;  // +0x18

	static CDOTAUserMsg_CustomHudElement_Destroy * default_instance_;
	CDOTAUserMsg_CustomHudElement_Destroy();
	virtual ~CDOTAUserMsg_CustomHudElement_Destroy();
	CDOTAUserMsg_CustomHudElement_Destroy(const CDOTAUserMsg_CustomHudElement_Destroy &);
	CDOTAUserMsg_CustomHudElement_Destroy & operator=(const CDOTAUserMsg_CustomHudElement_Destroy &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CustomHudElement_Destroy & default_instance();
	void Swap(CDOTAUserMsg_CustomHudElement_Destroy *);
	virtual CDOTAUserMsg_CustomHudElement_Destroy * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CustomHudElement_Destroy &);
	void MergeFrom(const CDOTAUserMsg_CustomHudElement_Destroy &);
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
	bool has_element_id();
	void clear_element_id();
	const string & element_id();
	void set_element_id(const string &);
	void set_element_id(const char *);
	void set_element_id(const char *, size_t);
	string * mutable_element_id();
	string * release_element_id();
	void set_allocated_element_id(string *);
	void set_has_element_id();
	void clear_has_element_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13775
class CDOTAUserMsg_CompendiumStatePlayer : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kLevelFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 level_;  // +0x1c

	static CDOTAUserMsg_CompendiumStatePlayer * default_instance_;
	CDOTAUserMsg_CompendiumStatePlayer();
	virtual ~CDOTAUserMsg_CompendiumStatePlayer();
	CDOTAUserMsg_CompendiumStatePlayer(const CDOTAUserMsg_CompendiumStatePlayer &);
	CDOTAUserMsg_CompendiumStatePlayer & operator=(const CDOTAUserMsg_CompendiumStatePlayer &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CompendiumStatePlayer & default_instance();
	void Swap(CDOTAUserMsg_CompendiumStatePlayer *);
	virtual CDOTAUserMsg_CompendiumStatePlayer * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CompendiumStatePlayer &);
	void MergeFrom(const CDOTAUserMsg_CompendiumStatePlayer &);
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
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_level();
	void clear_has_level();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13864
class CDOTAUserMsg_CompendiumState : public Message {
public:

	static const int kCompendiumPlayersFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_CompendiumState * default_instance_;
	CDOTAUserMsg_CompendiumState();
	virtual ~CDOTAUserMsg_CompendiumState();
	CDOTAUserMsg_CompendiumState(const CDOTAUserMsg_CompendiumState &);
	CDOTAUserMsg_CompendiumState & operator=(const CDOTAUserMsg_CompendiumState &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_CompendiumState & default_instance();
	void Swap(CDOTAUserMsg_CompendiumState *);
	virtual CDOTAUserMsg_CompendiumState * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_CompendiumState &);
	void MergeFrom(const CDOTAUserMsg_CompendiumState &);
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
	int compendium_players_size();
	void clear_compendium_players();
	const CDOTAUserMsg_CompendiumStatePlayer & compendium_players(int);
	CDOTAUserMsg_CompendiumStatePlayer * mutable_compendium_players(int);
	CDOTAUserMsg_CompendiumStatePlayer * add_compendium_players();
	const RepeatedPtrField<CDOTAUserMsg_CompendiumStatePlayer> & compendium_players();
	RepeatedPtrField<CDOTAUserMsg_CompendiumStatePlayer> * mutable_compendium_players();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:13946
class CDOTAUserMsg_ProjectionAbility : public Message {
public:

	static const int kAbilityIdFieldNumber = 1;
	static const int kCasterEntIndexFieldNumber = 2;
	static const int kCasterTeamFieldNumber = 3;
	static const int kChannelEndFieldNumber = 4;
	static const int kOriginFieldNumber = 5;
	static const int kTrackCasterOnlyFieldNumber = 6;
	static const int kEndTimeFieldNumber = 7;
	static const int kVictimEntIndexFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 ability_id_;  // +0x18
	int32 caster_ent_index_;  // +0x1c
	int32 caster_team_;  // +0x20
	bool channel_end_;  // +0x24
	bool track_caster_only_;  // +0x25

	float end_time_;  // +0x30
	int32 victim_ent_index_;  // +0x34

	static CDOTAUserMsg_ProjectionAbility * default_instance_;
	CDOTAUserMsg_ProjectionAbility();
	virtual ~CDOTAUserMsg_ProjectionAbility();
	CDOTAUserMsg_ProjectionAbility(const CDOTAUserMsg_ProjectionAbility &);
	CDOTAUserMsg_ProjectionAbility & operator=(const CDOTAUserMsg_ProjectionAbility &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ProjectionAbility & default_instance();
	void Swap(CDOTAUserMsg_ProjectionAbility *);
	virtual CDOTAUserMsg_ProjectionAbility * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ProjectionAbility &);
	void MergeFrom(const CDOTAUserMsg_ProjectionAbility &);
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
	bool has_caster_ent_index();
	void clear_caster_ent_index();
	int32 caster_ent_index();
	void set_caster_ent_index(int32);
	bool has_caster_team();
	void clear_caster_team();
	int32 caster_team();
	void set_caster_team(int32);
	bool has_channel_end();
	void clear_channel_end();
	bool channel_end();
	void set_channel_end(bool);
	bool has_origin();
	void clear_origin();
	const CMsgVector & origin();
	CMsgVector * mutable_origin();
	CMsgVector * release_origin();
	void set_allocated_origin(CMsgVector *);
	bool has_track_caster_only();
	void clear_track_caster_only();
	bool track_caster_only();
	void set_track_caster_only(bool);
	bool has_end_time();
	void clear_end_time();
	float end_time();
	void set_end_time(float);
	bool has_victim_ent_index();
	void clear_victim_ent_index();
	int32 victim_ent_index();
	void set_victim_ent_index(int32);
	void set_has_ability_id();
	void clear_has_ability_id();
	void set_has_caster_ent_index();
	void clear_has_caster_ent_index();
	void set_has_caster_team();
	void clear_has_caster_team();
	void set_has_channel_end();
	void clear_has_channel_end();
	void set_has_origin();
	void clear_has_origin();
	void set_has_track_caster_only();
	void clear_has_track_caster_only();
	void set_has_end_time();
	void clear_has_end_time();
	void set_has_victim_ent_index();
	void clear_has_victim_ent_index();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14097
class CDOTAUserMsg_ProjectionEvent : public Message {
public:

	static const int kEventIdFieldNumber = 1;
	static const int kTeamFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int event_id_;  // +0x18
	uint32 team_;  // +0x1c

	static CDOTAUserMsg_ProjectionEvent * default_instance_;
	CDOTAUserMsg_ProjectionEvent();
	virtual ~CDOTAUserMsg_ProjectionEvent();
	CDOTAUserMsg_ProjectionEvent(const CDOTAUserMsg_ProjectionEvent &);
	CDOTAUserMsg_ProjectionEvent & operator=(const CDOTAUserMsg_ProjectionEvent &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_ProjectionEvent & default_instance();
	void Swap(CDOTAUserMsg_ProjectionEvent *);
	virtual CDOTAUserMsg_ProjectionEvent * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_ProjectionEvent &);
	void MergeFrom(const CDOTAUserMsg_ProjectionEvent &);
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
	EProjectionEvent event_id();
	void set_event_id(EProjectionEvent);
	bool has_team();
	void clear_team();
	uint32 team();
	void set_team(uint32);
	void set_has_event_id();
	void clear_has_event_id();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14186
class CDOTAUserMsg_XPAlert : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kTargetEntindexFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 target_entindex_;  // +0x1c

	static CDOTAUserMsg_XPAlert * default_instance_;
	CDOTAUserMsg_XPAlert();
	virtual ~CDOTAUserMsg_XPAlert();
	CDOTAUserMsg_XPAlert(const CDOTAUserMsg_XPAlert &);
	CDOTAUserMsg_XPAlert & operator=(const CDOTAUserMsg_XPAlert &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_XPAlert & default_instance();
	void Swap(CDOTAUserMsg_XPAlert *);
	virtual CDOTAUserMsg_XPAlert * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_XPAlert &);
	void MergeFrom(const CDOTAUserMsg_XPAlert &);
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
	bool has_target_entindex();
	void clear_target_entindex();
	uint32 target_entindex();
	void set_target_entindex(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_target_entindex();
	void clear_has_target_entindex();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14275
class CDOTAUserMsg_UpdateQuestProgress : public Message {
public:

private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAUserMsg_UpdateQuestProgress * default_instance_;
	CDOTAUserMsg_UpdateQuestProgress();
	virtual ~CDOTAUserMsg_UpdateQuestProgress();
	CDOTAUserMsg_UpdateQuestProgress(const CDOTAUserMsg_UpdateQuestProgress &);
	CDOTAUserMsg_UpdateQuestProgress & operator=(const CDOTAUserMsg_UpdateQuestProgress &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_UpdateQuestProgress & default_instance();
	void Swap(CDOTAUserMsg_UpdateQuestProgress *);
	virtual CDOTAUserMsg_UpdateQuestProgress * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_UpdateQuestProgress &);
	void MergeFrom(const CDOTAUserMsg_UpdateQuestProgress &);
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14344
class CDOTAUserMsg_QuestStatus : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kQuestIdFieldNumber = 2;
	static const int kChallengeIdFieldNumber = 3;
	static const int kProgressFieldNumber = 4;
	static const int kGoalFieldNumber = 5;
	static const int kQueryFieldNumber = 6;
	static const int kFailGametimeFieldNumber = 7;
	static const int kItemIdFieldNumber = 8;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 quest_id_;  // +0x1c
	uint32 challenge_id_;  // +0x20
	uint32 progress_;  // +0x24
	uint32 goal_;  // +0x28
	uint32 query_;  // +0x2c
	float fail_gametime_;  // +0x30
	uint32 item_id_;  // +0x34

	static CDOTAUserMsg_QuestStatus * default_instance_;
	CDOTAUserMsg_QuestStatus();
	virtual ~CDOTAUserMsg_QuestStatus();
	CDOTAUserMsg_QuestStatus(const CDOTAUserMsg_QuestStatus &);
	CDOTAUserMsg_QuestStatus & operator=(const CDOTAUserMsg_QuestStatus &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_QuestStatus & default_instance();
	void Swap(CDOTAUserMsg_QuestStatus *);
	virtual CDOTAUserMsg_QuestStatus * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_QuestStatus &);
	void MergeFrom(const CDOTAUserMsg_QuestStatus &);
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
	bool has_quest_id();
	void clear_quest_id();
	uint32 quest_id();
	void set_quest_id(uint32);
	bool has_challenge_id();
	void clear_challenge_id();
	uint32 challenge_id();
	void set_challenge_id(uint32);
	bool has_progress();
	void clear_progress();
	uint32 progress();
	void set_progress(uint32);
	bool has_goal();
	void clear_goal();
	uint32 goal();
	void set_goal(uint32);
	bool has_query();
	void clear_query();
	uint32 query();
	void set_query(uint32);
	bool has_fail_gametime();
	void clear_fail_gametime();
	float fail_gametime();
	void set_fail_gametime(float);
	bool has_item_id();
	void clear_item_id();
	uint32 item_id();
	void set_item_id(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_quest_id();
	void clear_has_quest_id();
	void set_has_challenge_id();
	void clear_has_challenge_id();
	void set_has_progress();
	void clear_has_progress();
	void set_has_goal();
	void clear_has_goal();
	void set_has_query();
	void clear_has_query();
	void set_has_fail_gametime();
	void clear_has_fail_gametime();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14493
class CDOTAUserMsg_SuggestHeroPick : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kHeroIdFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 hero_id_;  // +0x1c

	static CDOTAUserMsg_SuggestHeroPick * default_instance_;
	CDOTAUserMsg_SuggestHeroPick();
	virtual ~CDOTAUserMsg_SuggestHeroPick();
	CDOTAUserMsg_SuggestHeroPick(const CDOTAUserMsg_SuggestHeroPick &);
	CDOTAUserMsg_SuggestHeroPick & operator=(const CDOTAUserMsg_SuggestHeroPick &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SuggestHeroPick & default_instance();
	void Swap(CDOTAUserMsg_SuggestHeroPick *);
	virtual CDOTAUserMsg_SuggestHeroPick * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SuggestHeroPick &);
	void MergeFrom(const CDOTAUserMsg_SuggestHeroPick &);
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
	bool has_hero_id();
	void clear_hero_id();
	uint32 hero_id();
	void set_hero_id(uint32);
	void set_has_player_id();
	void clear_has_player_id();
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14582
class CDOTAUserMsg_SuggestHeroRole : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kHeroRoleFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * hero_role_;  // +0x18
	uint32 player_id_;  // +0x20

	static CDOTAUserMsg_SuggestHeroRole * default_instance_;
	CDOTAUserMsg_SuggestHeroRole();
	virtual ~CDOTAUserMsg_SuggestHeroRole();
	CDOTAUserMsg_SuggestHeroRole(const CDOTAUserMsg_SuggestHeroRole &);
	CDOTAUserMsg_SuggestHeroRole & operator=(const CDOTAUserMsg_SuggestHeroRole &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SuggestHeroRole & default_instance();
	void Swap(CDOTAUserMsg_SuggestHeroRole *);
	virtual CDOTAUserMsg_SuggestHeroRole * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SuggestHeroRole &);
	void MergeFrom(const CDOTAUserMsg_SuggestHeroRole &);
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
	bool has_hero_role();
	void clear_hero_role();
	const string & hero_role();
	void set_hero_role(const string &);
	void set_hero_role(const char *);
	void set_hero_role(const char *, size_t);
	string * mutable_hero_role();
	string * release_hero_role();
	void set_allocated_hero_role(string *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_hero_role();
	void clear_has_hero_role();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14676
class CDOTAUserMsg_KillcamDamageTaken : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kDamageTakenFieldNumber = 2;
	static const int kItemTypeFieldNumber = 3;
	static const int kItemIdFieldNumber = 4;
	static const int kHeroNameFieldNumber = 5;
	static const int kDamageColorFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 damage_taken_;  // +0x1c
	uint32 item_type_;  // +0x20
	uint32 item_id_;  // +0x24
	string * hero_name_;  // +0x28
	string * damage_color_;  // +0x30

	static CDOTAUserMsg_KillcamDamageTaken * default_instance_;
	CDOTAUserMsg_KillcamDamageTaken();
	virtual ~CDOTAUserMsg_KillcamDamageTaken();
	CDOTAUserMsg_KillcamDamageTaken(const CDOTAUserMsg_KillcamDamageTaken &);
	CDOTAUserMsg_KillcamDamageTaken & operator=(const CDOTAUserMsg_KillcamDamageTaken &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_KillcamDamageTaken & default_instance();
	void Swap(CDOTAUserMsg_KillcamDamageTaken *);
	virtual CDOTAUserMsg_KillcamDamageTaken * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_KillcamDamageTaken &);
	void MergeFrom(const CDOTAUserMsg_KillcamDamageTaken &);
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
	bool has_damage_taken();
	void clear_damage_taken();
	uint32 damage_taken();
	void set_damage_taken(uint32);
	bool has_item_type();
	void clear_item_type();
	uint32 item_type();
	void set_item_type(uint32);
	bool has_item_id();
	void clear_item_id();
	uint32 item_id();
	void set_item_id(uint32);
	bool has_hero_name();
	void clear_hero_name();
	const string & hero_name();
	void set_hero_name(const string &);
	void set_hero_name(const char *);
	void set_hero_name(const char *, size_t);
	string * mutable_hero_name();
	string * release_hero_name();
	void set_allocated_hero_name(string *);
	bool has_damage_color();
	void clear_damage_color();
	const string & damage_color();
	void set_damage_color(const string &);
	void set_damage_color(const char *);
	void set_damage_color(const char *, size_t);
	string * mutable_damage_color();
	string * release_damage_color();
	void set_allocated_damage_color(string *);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_damage_taken();
	void clear_has_damage_taken();
	void set_has_item_type();
	void clear_has_item_type();
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_hero_name();
	void clear_has_hero_name();
	void set_has_damage_color();
	void clear_has_damage_color();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14815
class CDOTAUserMsg_SelectPenaltyGold : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kCostFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	int32 cost_;  // +0x1c

	static CDOTAUserMsg_SelectPenaltyGold * default_instance_;
	CDOTAUserMsg_SelectPenaltyGold();
	virtual ~CDOTAUserMsg_SelectPenaltyGold();
	CDOTAUserMsg_SelectPenaltyGold(const CDOTAUserMsg_SelectPenaltyGold &);
	CDOTAUserMsg_SelectPenaltyGold & operator=(const CDOTAUserMsg_SelectPenaltyGold &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_SelectPenaltyGold & default_instance();
	void Swap(CDOTAUserMsg_SelectPenaltyGold *);
	virtual CDOTAUserMsg_SelectPenaltyGold * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_SelectPenaltyGold &);
	void MergeFrom(const CDOTAUserMsg_SelectPenaltyGold &);
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
	bool has_cost();
	void clear_cost();
	int32 cost();
	void set_cost(int32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_cost();
	void clear_has_cost();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:14904
class CDOTAUserMsg_RollDiceResult : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kChannelTypeFieldNumber = 2;
	static const int kRollMinFieldNumber = 3;
	static const int kRollMaxFieldNumber = 4;
	static const int kResultFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 channel_type_;  // +0x1c
	uint32 roll_min_;  // +0x20
	uint32 roll_max_;  // +0x24
	uint32 result_;  // +0x28

	static CDOTAUserMsg_RollDiceResult * default_instance_;
	CDOTAUserMsg_RollDiceResult();
	virtual ~CDOTAUserMsg_RollDiceResult();
	CDOTAUserMsg_RollDiceResult(const CDOTAUserMsg_RollDiceResult &);
	CDOTAUserMsg_RollDiceResult & operator=(const CDOTAUserMsg_RollDiceResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_RollDiceResult & default_instance();
	void Swap(CDOTAUserMsg_RollDiceResult *);
	virtual CDOTAUserMsg_RollDiceResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_RollDiceResult &);
	void MergeFrom(const CDOTAUserMsg_RollDiceResult &);
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
	bool has_channel_type();
	void clear_channel_type();
	uint32 channel_type();
	void set_channel_type(uint32);
	bool has_roll_min();
	void clear_roll_min();
	uint32 roll_min();
	void set_roll_min(uint32);
	bool has_roll_max();
	void clear_roll_max();
	uint32 roll_max();
	void set_roll_max(uint32);
	bool has_result();
	void clear_result();
	uint32 result();
	void set_result(uint32);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_channel_type();
	void clear_has_channel_type();
	void set_has_roll_min();
	void clear_has_roll_min();
	void set_has_roll_max();
	void clear_has_roll_max();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_usermessages.pb.h:15023
class CDOTAUserMsg_FlipCoinResult : public Message {
public:

	static const int kPlayerIdFieldNumber = 1;
	static const int kChannelTypeFieldNumber = 2;
	static const int kResultFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_id_;  // +0x18
	uint32 channel_type_;  // +0x1c
	bool result_;  // +0x20

	static CDOTAUserMsg_FlipCoinResult * default_instance_;
	CDOTAUserMsg_FlipCoinResult();
	virtual ~CDOTAUserMsg_FlipCoinResult();
	CDOTAUserMsg_FlipCoinResult(const CDOTAUserMsg_FlipCoinResult &);
	CDOTAUserMsg_FlipCoinResult & operator=(const CDOTAUserMsg_FlipCoinResult &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAUserMsg_FlipCoinResult & default_instance();
	void Swap(CDOTAUserMsg_FlipCoinResult *);
	virtual CDOTAUserMsg_FlipCoinResult * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAUserMsg_FlipCoinResult &);
	void MergeFrom(const CDOTAUserMsg_FlipCoinResult &);
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
	bool has_channel_type();
	void clear_channel_type();
	uint32 channel_type();
	void set_channel_type(uint32);
	bool has_result();
	void clear_result();
	bool result();
	void set_result(bool);
	void set_has_player_id();
	void clear_has_player_id();
	void set_has_channel_type();
	void clear_has_channel_type();
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
	// sizeof = 40
};
