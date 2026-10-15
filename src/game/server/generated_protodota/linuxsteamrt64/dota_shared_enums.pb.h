// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_shared_enums.pb.h:766
class CDOTAClientHardwareSpecs : public Message {
public:

	static const int kLogicalProcessorsFieldNumber = 1;
	static const int kCpuCyclesPerSecondFieldNumber = 2;
	static const int kTotalPhysicalMemoryFieldNumber = 3;
	static const int kIs64BitOsFieldNumber = 4;
	static const int kUploadMeasurementFieldNumber = 5;
	static const int kPreferNotHostFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 cpu_cycles_per_second_;  // +0x18
	uint64 total_physical_memory_;  // +0x20
	uint32 logical_processors_;  // +0x28
	bool is_64_bit_os_;  // +0x2c
	bool prefer_not_host_;  // +0x2d

	uint64 upload_measurement_;  // +0x30

	static CDOTAClientHardwareSpecs * default_instance_;
	CDOTAClientHardwareSpecs();
	virtual ~CDOTAClientHardwareSpecs();
	CDOTAClientHardwareSpecs(const CDOTAClientHardwareSpecs &);
	CDOTAClientHardwareSpecs & operator=(const CDOTAClientHardwareSpecs &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAClientHardwareSpecs & default_instance();
	void Swap(CDOTAClientHardwareSpecs *);
	virtual CDOTAClientHardwareSpecs * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAClientHardwareSpecs &);
	void MergeFrom(const CDOTAClientHardwareSpecs &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_logical_processors();
	void clear_logical_processors();
	uint32 logical_processors();
	void set_logical_processors(uint32);
	bool has_cpu_cycles_per_second();
	void clear_cpu_cycles_per_second();
	uint64 cpu_cycles_per_second();
	void set_cpu_cycles_per_second(uint64);
	bool has_total_physical_memory();
	void clear_total_physical_memory();
	uint64 total_physical_memory();
	void set_total_physical_memory(uint64);
	bool has_is_64_bit_os();
	void clear_is_64_bit_os();
	bool is_64_bit_os();
	void set_is_64_bit_os(bool);
	bool has_upload_measurement();
	void clear_upload_measurement();
	uint64 upload_measurement();
	void set_upload_measurement(uint64);
	bool has_prefer_not_host();
	void clear_prefer_not_host();
	bool prefer_not_host();
	void set_prefer_not_host(bool);
	void set_has_logical_processors();
	void clear_has_logical_processors();
	void set_has_cpu_cycles_per_second();
	void clear_has_cpu_cycles_per_second();
	void set_has_total_physical_memory();
	void clear_has_total_physical_memory();
	void set_has_is_64_bit_os();
	void clear_has_is_64_bit_os();
	void set_has_upload_measurement();
	void clear_has_upload_measurement();
	void set_has_prefer_not_host();
	void clear_has_prefer_not_host();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_shared_enums.pb.h:895
class CDOTASaveGame_Player : public Message {
public:

	static const int kTeamFieldNumber = 1;
	static const int kNameFieldNumber = 2;
	static const int kHeroFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * name_;  // +0x18
	string * hero_;  // +0x20
	int team_;  // +0x28

	static CDOTASaveGame_Player * default_instance_;
	CDOTASaveGame_Player();
	virtual ~CDOTASaveGame_Player();
	CDOTASaveGame_Player(const CDOTASaveGame_Player &);
	CDOTASaveGame_Player & operator=(const CDOTASaveGame_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTASaveGame_Player & default_instance();
	void Swap(CDOTASaveGame_Player *);
	virtual CDOTASaveGame_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTASaveGame_Player &);
	void MergeFrom(const CDOTASaveGame_Player &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_hero();
	void clear_hero();
	const string & hero();
	void set_hero(const string &);
	void set_hero(const char *);
	void set_hero(const char *, size_t);
	string * mutable_hero();
	string * release_hero();
	void set_allocated_hero(string *);
	void set_has_team();
	void clear_has_team();
	void set_has_name();
	void clear_has_name();
	void set_has_hero();
	void clear_has_hero();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_shared_enums.pb.h:1004
class CDOTASaveGame_SaveInstance_PlayerPositions : public Message {
public:

	static const int kXFieldNumber = 1;
	static const int kYFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float x_;  // +0x18
	float y_;  // +0x1c

	static CDOTASaveGame_SaveInstance_PlayerPositions * default_instance_;
	CDOTASaveGame_SaveInstance_PlayerPositions();
	virtual ~CDOTASaveGame_SaveInstance_PlayerPositions();
	CDOTASaveGame_SaveInstance_PlayerPositions(const CDOTASaveGame_SaveInstance_PlayerPositions &);
	CDOTASaveGame_SaveInstance_PlayerPositions & operator=(const CDOTASaveGame_SaveInstance_PlayerPositions &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTASaveGame_SaveInstance_PlayerPositions & default_instance();
	void Swap(CDOTASaveGame_SaveInstance_PlayerPositions *);
	virtual CDOTASaveGame_SaveInstance_PlayerPositions * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTASaveGame_SaveInstance_PlayerPositions &);
	void MergeFrom(const CDOTASaveGame_SaveInstance_PlayerPositions &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_x();
	void clear_x();
	float x();
	void set_x(float);
	bool has_y();
	void clear_y();
	float y();
	void set_y(float);
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
	// sizeof = 32
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_shared_enums.pb.h:1093
class CDOTASaveGame_SaveInstance : public Message {
public:

	static const int kGameTimeFieldNumber = 2;
	static const int kTeam1ScoreFieldNumber = 3;
	static const int kTeam2ScoreFieldNumber = 4;
	static const int kPlayerPositionsFieldNumber = 5;
	static const int kSaveIdFieldNumber = 6;
	static const int kSaveTimeFieldNumber = 7;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 game_time_;  // +0x18
	uint32 team1_score_;  // +0x1c
	uint32 team2_score_;  // +0x38
	uint32 save_id_;  // +0x3c
	uint32 save_time_;  // +0x40

	static CDOTASaveGame_SaveInstance * default_instance_;
	CDOTASaveGame_SaveInstance();
	virtual ~CDOTASaveGame_SaveInstance();
	CDOTASaveGame_SaveInstance(const CDOTASaveGame_SaveInstance &);
	CDOTASaveGame_SaveInstance & operator=(const CDOTASaveGame_SaveInstance &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTASaveGame_SaveInstance & default_instance();
	void Swap(CDOTASaveGame_SaveInstance *);
	virtual CDOTASaveGame_SaveInstance * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTASaveGame_SaveInstance &);
	void MergeFrom(const CDOTASaveGame_SaveInstance &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_team1_score();
	void clear_team1_score();
	uint32 team1_score();
	void set_team1_score(uint32);
	bool has_team2_score();
	void clear_team2_score();
	uint32 team2_score();
	void set_team2_score(uint32);
	int player_positions_size();
	void clear_player_positions();
	const CDOTASaveGame_SaveInstance_PlayerPositions & player_positions(int);
	CDOTASaveGame_SaveInstance_PlayerPositions * mutable_player_positions(int);
	CDOTASaveGame_SaveInstance_PlayerPositions * add_player_positions();
	const RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions> & player_positions();
	RepeatedPtrField<CDOTASaveGame_SaveInstance_PlayerPositions> * mutable_player_positions();
	bool has_save_id();
	void clear_save_id();
	uint32 save_id();
	void set_save_id(uint32);
	bool has_save_time();
	void clear_save_time();
	uint32 save_time();
	void set_save_time(uint32);
	void set_has_game_time();
	void clear_has_game_time();
	void set_has_team1_score();
	void clear_has_team1_score();
	void set_has_team2_score();
	void clear_has_team2_score();
	void set_has_save_id();
	void clear_has_save_id();
	void set_has_save_time();
	void clear_has_save_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_shared_enums.pb.h:1227
class CDOTASaveGame : public Message {
public:

	static const int kMatchIdFieldNumber = 5;
	static const int kSaveTimeFieldNumber = 2;
	static const int kPlayersFieldNumber = 3;
	static const int kSaveInstancesFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	uint32 save_time_;  // +0x50

	static CDOTASaveGame * default_instance_;
	CDOTASaveGame();
	virtual ~CDOTASaveGame();
	CDOTASaveGame(const CDOTASaveGame &);
	CDOTASaveGame & operator=(const CDOTASaveGame &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTASaveGame & default_instance();
	void Swap(CDOTASaveGame *);
	virtual CDOTASaveGame * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTASaveGame &);
	void MergeFrom(const CDOTASaveGame &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_save_time();
	void clear_save_time();
	uint32 save_time();
	void set_save_time(uint32);
	int players_size();
	void clear_players();
	const CDOTASaveGame_Player & players(int);
	CDOTASaveGame_Player * mutable_players(int);
	CDOTASaveGame_Player * add_players();
	const RepeatedPtrField<CDOTASaveGame_Player> & players();
	RepeatedPtrField<CDOTASaveGame_Player> * mutable_players();
	int save_instances_size();
	void clear_save_instances();
	const CDOTASaveGame_SaveInstance & save_instances(int);
	CDOTASaveGame_SaveInstance * mutable_save_instances(int);
	CDOTASaveGame_SaveInstance * add_save_instances();
	const RepeatedPtrField<CDOTASaveGame_SaveInstance> & save_instances();
	RepeatedPtrField<CDOTASaveGame_SaveInstance> * mutable_save_instances();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_save_time();
	void clear_has_save_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
