// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:58
class CDOTAMatchMetadataFile : public Message {
public:

	static const int kVersionFieldNumber = 1;
	static const int kMatchIdFieldNumber = 2;
	static const int kMetadataFieldNumber = 3;
	static const int kPrivateMetadataFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 match_id_;  // +0x18
	string * private_metadata_;  // +0x28
	int32 version_;  // +0x30

	static CDOTAMatchMetadataFile * default_instance_;
	CDOTAMatchMetadataFile();
	virtual ~CDOTAMatchMetadataFile();
	CDOTAMatchMetadataFile(const CDOTAMatchMetadataFile &);
	CDOTAMatchMetadataFile & operator=(const CDOTAMatchMetadataFile &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchMetadataFile & default_instance();
	void Swap(CDOTAMatchMetadataFile *);
	virtual CDOTAMatchMetadataFile * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchMetadataFile &);
	void MergeFrom(const CDOTAMatchMetadataFile &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int32 version();
	void set_version(int32);
	bool has_match_id();
	void clear_match_id();
	uint64 match_id();
	void set_match_id(uint64);
	bool has_metadata();
	void clear_metadata();
	const CDOTAMatchMetadata & metadata();
	CDOTAMatchMetadata * mutable_metadata();
	CDOTAMatchMetadata * release_metadata();
	void set_allocated_metadata(CDOTAMatchMetadata *);
	bool has_private_metadata();
	void clear_private_metadata();
	const string & private_metadata();
	void set_private_metadata(const string &);
	void set_private_metadata(const char *);
	void set_private_metadata(const void *, size_t);
	string * mutable_private_metadata();
	string * release_private_metadata();
	void set_allocated_private_metadata(string *);
	void set_has_version();
	void clear_has_version();
	void set_has_match_id();
	void clear_has_match_id();
	void set_has_metadata();
	void clear_has_metadata();
	void set_has_private_metadata();
	void clear_has_private_metadata();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:174
class CDOTAMatchMetadata_Team_PlayerKill : public Message {
public:

	static const int kVictimSlotFieldNumber = 1;
	static const int kCountFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 victim_slot_;  // +0x18
	uint32 count_;  // +0x1c

	static CDOTAMatchMetadata_Team_PlayerKill * default_instance_;
	CDOTAMatchMetadata_Team_PlayerKill();
	virtual ~CDOTAMatchMetadata_Team_PlayerKill();
	CDOTAMatchMetadata_Team_PlayerKill(const CDOTAMatchMetadata_Team_PlayerKill &);
	CDOTAMatchMetadata_Team_PlayerKill & operator=(const CDOTAMatchMetadata_Team_PlayerKill &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchMetadata_Team_PlayerKill & default_instance();
	void Swap(CDOTAMatchMetadata_Team_PlayerKill *);
	virtual CDOTAMatchMetadata_Team_PlayerKill * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchMetadata_Team_PlayerKill &);
	void MergeFrom(const CDOTAMatchMetadata_Team_PlayerKill &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_victim_slot();
	void clear_victim_slot();
	uint32 victim_slot();
	void set_victim_slot(uint32);
	bool has_count();
	void clear_count();
	uint32 count();
	void set_count(uint32);
	void set_has_victim_slot();
	void clear_has_victim_slot();
	void set_has_count();
	void clear_has_count();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:263
class CDOTAMatchMetadata_Team_ItemPurchase : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kPurchaseTimeFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 item_id_;  // +0x18
	int32 purchase_time_;  // +0x1c

	static CDOTAMatchMetadata_Team_ItemPurchase * default_instance_;
	CDOTAMatchMetadata_Team_ItemPurchase();
	virtual ~CDOTAMatchMetadata_Team_ItemPurchase();
	CDOTAMatchMetadata_Team_ItemPurchase(const CDOTAMatchMetadata_Team_ItemPurchase &);
	CDOTAMatchMetadata_Team_ItemPurchase & operator=(const CDOTAMatchMetadata_Team_ItemPurchase &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchMetadata_Team_ItemPurchase & default_instance();
	void Swap(CDOTAMatchMetadata_Team_ItemPurchase *);
	virtual CDOTAMatchMetadata_Team_ItemPurchase * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchMetadata_Team_ItemPurchase &);
	void MergeFrom(const CDOTAMatchMetadata_Team_ItemPurchase &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_item_id();
	void clear_item_id();
	uint32 item_id();
	void set_item_id(uint32);
	bool has_purchase_time();
	void clear_purchase_time();
	int32 purchase_time();
	void set_purchase_time(int32);
	void set_has_item_id();
	void clear_has_item_id();
	void set_has_purchase_time();
	void clear_has_purchase_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:352
class CDOTAMatchMetadata_Team_InventorySnapshot : public Message {
public:

	static const int kItemIdFieldNumber = 1;
	static const int kGameTimeFieldNumber = 2;
	static const int kKillsFieldNumber = 3;
	static const int kDeathsFieldNumber = 4;
	static const int kAssistsFieldNumber = 5;
	static const int kLevelFieldNumber = 6;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int32 game_time_;  // +0x28
	uint32 kills_;  // +0x2c
	uint32 deaths_;  // +0x30
	uint32 assists_;  // +0x34
	uint32 level_;  // +0x38

	static CDOTAMatchMetadata_Team_InventorySnapshot * default_instance_;
	CDOTAMatchMetadata_Team_InventorySnapshot();
	virtual ~CDOTAMatchMetadata_Team_InventorySnapshot();
	CDOTAMatchMetadata_Team_InventorySnapshot(const CDOTAMatchMetadata_Team_InventorySnapshot &);
	CDOTAMatchMetadata_Team_InventorySnapshot & operator=(const CDOTAMatchMetadata_Team_InventorySnapshot &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchMetadata_Team_InventorySnapshot & default_instance();
	void Swap(CDOTAMatchMetadata_Team_InventorySnapshot *);
	virtual CDOTAMatchMetadata_Team_InventorySnapshot * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchMetadata_Team_InventorySnapshot &);
	void MergeFrom(const CDOTAMatchMetadata_Team_InventorySnapshot &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int item_id_size();
	void clear_item_id();
	uint32 item_id(int);
	void set_item_id(int, uint32);
	void add_item_id(uint32);
	const RepeatedField<unsigned int> & item_id();
	RepeatedField<unsigned int> * mutable_item_id();
	bool has_game_time();
	void clear_game_time();
	int32 game_time();
	void set_game_time(int32);
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
	bool has_level();
	void clear_level();
	uint32 level();
	void set_level(uint32);
	void set_has_game_time();
	void clear_has_game_time();
	void set_has_kills();
	void clear_has_kills();
	void set_has_deaths();
	void clear_has_deaths();
	void set_has_assists();
	void clear_has_assists();
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
	// sizeof = 64
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:484
class CDOTAMatchMetadata_Team_AutoStyleCriteria : public Message {
public:

	static const int kNameTokenFieldNumber = 1;
	static const int kValueFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 name_token_;  // +0x18
	float value_;  // +0x1c

	static CDOTAMatchMetadata_Team_AutoStyleCriteria * default_instance_;
	CDOTAMatchMetadata_Team_AutoStyleCriteria();
	virtual ~CDOTAMatchMetadata_Team_AutoStyleCriteria();
	CDOTAMatchMetadata_Team_AutoStyleCriteria(const CDOTAMatchMetadata_Team_AutoStyleCriteria &);
	CDOTAMatchMetadata_Team_AutoStyleCriteria & operator=(const CDOTAMatchMetadata_Team_AutoStyleCriteria &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchMetadata_Team_AutoStyleCriteria & default_instance();
	void Swap(CDOTAMatchMetadata_Team_AutoStyleCriteria *);
	virtual CDOTAMatchMetadata_Team_AutoStyleCriteria * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchMetadata_Team_AutoStyleCriteria &);
	void MergeFrom(const CDOTAMatchMetadata_Team_AutoStyleCriteria &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_name_token();
	void clear_name_token();
	uint32 name_token();
	void set_name_token(uint32);
	bool has_value();
	void clear_value();
	float value();
	void set_value(float);
	void set_has_name_token();
	void clear_has_name_token();
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:573
class CDOTAMatchMetadata_Team_Player : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kAbilityUpgradesFieldNumber = 2;
	static const int kPlayerSlotFieldNumber = 3;
	static const int kEquippedEconItemsFieldNumber = 4;
	static const int kKillsFieldNumber = 5;
	static const int kItemsFieldNumber = 6;
	static const int kAvgKillsX16FieldNumber = 7;
	static const int kAvgDeathsX16FieldNumber = 8;
	static const int kAvgAssistsX16FieldNumber = 9;
	static const int kAvgGpmX16FieldNumber = 10;
	static const int kAvgXpmX16FieldNumber = 11;
	static const int kBestKillsX16FieldNumber = 12;
	static const int kBestAssistsX16FieldNumber = 13;
	static const int kBestGpmX16FieldNumber = 14;
	static const int kBestXpmX16FieldNumber = 15;
	static const int kWinStreakFieldNumber = 16;
	static const int kBestWinStreakFieldNumber = 17;
	static const int kFightScoreFieldNumber = 18;
	static const int kFarmScoreFieldNumber = 19;
	static const int kSupportScoreFieldNumber = 20;
	static const int kPushScoreFieldNumber = 21;
	static const int kLevelUpTimesFieldNumber = 22;
	static const int kGraphNetWorthFieldNumber = 23;
	static const int kInventorySnapshotFieldNumber = 24;
	static const int kAvgStatsCalibratedFieldNumber = 25;
	static const int kAutoStyleCriteriaFieldNumber = 26;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x28
	uint32 player_slot_;  // +0x2c
	uint32 avg_kills_x16_;  // +0x78
	uint32 avg_deaths_x16_;  // +0x7c
	uint32 avg_assists_x16_;  // +0x80
	uint32 avg_gpm_x16_;  // +0x84
	uint32 avg_xpm_x16_;  // +0x88
	uint32 best_kills_x16_;  // +0x8c
	uint32 best_assists_x16_;  // +0x90
	uint32 best_gpm_x16_;  // +0x94
	uint32 best_xpm_x16_;  // +0x98
	uint32 win_streak_;  // +0x9c
	uint32 best_win_streak_;  // +0xa0
	float fight_score_;  // +0xa4
	float farm_score_;  // +0xa8
	float support_score_;  // +0xac
	float push_score_;  // +0xd0
	bool avg_stats_calibrated_;  // +0xd4

	static CDOTAMatchMetadata_Team_Player * default_instance_;
	CDOTAMatchMetadata_Team_Player();
	virtual ~CDOTAMatchMetadata_Team_Player();
	CDOTAMatchMetadata_Team_Player(const CDOTAMatchMetadata_Team_Player &);
	CDOTAMatchMetadata_Team_Player & operator=(const CDOTAMatchMetadata_Team_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchMetadata_Team_Player & default_instance();
	void Swap(CDOTAMatchMetadata_Team_Player *);
	virtual CDOTAMatchMetadata_Team_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchMetadata_Team_Player &);
	void MergeFrom(const CDOTAMatchMetadata_Team_Player &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int ability_upgrades_size();
	void clear_ability_upgrades();
	uint32 ability_upgrades(int);
	void set_ability_upgrades(int, uint32);
	void add_ability_upgrades(uint32);
	const RepeatedField<unsigned int> & ability_upgrades();
	RepeatedField<unsigned int> * mutable_ability_upgrades();
	bool has_player_slot();
	void clear_player_slot();
	uint32 player_slot();
	void set_player_slot(uint32);
	int equipped_econ_items_size();
	void clear_equipped_econ_items();
	const CSOEconItem & equipped_econ_items(int);
	CSOEconItem * mutable_equipped_econ_items(int);
	CSOEconItem * add_equipped_econ_items();
	const RepeatedPtrField<CSOEconItem> & equipped_econ_items();
	RepeatedPtrField<CSOEconItem> * mutable_equipped_econ_items();
	int kills_size();
	void clear_kills();
	const CDOTAMatchMetadata_Team_PlayerKill & kills(int);
	CDOTAMatchMetadata_Team_PlayerKill * mutable_kills(int);
	CDOTAMatchMetadata_Team_PlayerKill * add_kills();
	const RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill> & kills();
	RepeatedPtrField<CDOTAMatchMetadata_Team_PlayerKill> * mutable_kills();
	int items_size();
	void clear_items();
	const CDOTAMatchMetadata_Team_ItemPurchase & items(int);
	CDOTAMatchMetadata_Team_ItemPurchase * mutable_items(int);
	CDOTAMatchMetadata_Team_ItemPurchase * add_items();
	const RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase> & items();
	RepeatedPtrField<CDOTAMatchMetadata_Team_ItemPurchase> * mutable_items();
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
	int level_up_times_size();
	void clear_level_up_times();
	uint32 level_up_times(int);
	void set_level_up_times(int, uint32);
	void add_level_up_times(uint32);
	const RepeatedField<unsigned int> & level_up_times();
	RepeatedField<unsigned int> * mutable_level_up_times();
	int graph_net_worth_size();
	void clear_graph_net_worth();
	float graph_net_worth(int);
	void set_graph_net_worth(int, float);
	void add_graph_net_worth(float);
	const RepeatedField<float> & graph_net_worth();
	RepeatedField<float> * mutable_graph_net_worth();
	int inventory_snapshot_size();
	void clear_inventory_snapshot();
	const CDOTAMatchMetadata_Team_InventorySnapshot & inventory_snapshot(int);
	CDOTAMatchMetadata_Team_InventorySnapshot * mutable_inventory_snapshot(int);
	CDOTAMatchMetadata_Team_InventorySnapshot * add_inventory_snapshot();
	const RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot> & inventory_snapshot();
	RepeatedPtrField<CDOTAMatchMetadata_Team_InventorySnapshot> * mutable_inventory_snapshot();
	bool has_avg_stats_calibrated();
	void clear_avg_stats_calibrated();
	bool avg_stats_calibrated();
	void set_avg_stats_calibrated(bool);
	int auto_style_criteria_size();
	void clear_auto_style_criteria();
	const CDOTAMatchMetadata_Team_AutoStyleCriteria & auto_style_criteria(int);
	CDOTAMatchMetadata_Team_AutoStyleCriteria * mutable_auto_style_criteria(int);
	CDOTAMatchMetadata_Team_AutoStyleCriteria * add_auto_style_criteria();
	const RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria> & auto_style_criteria();
	RepeatedPtrField<CDOTAMatchMetadata_Team_AutoStyleCriteria> * mutable_auto_style_criteria();
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_player_slot();
	void clear_has_player_slot();
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
	void set_has_fight_score();
	void clear_has_fight_score();
	void set_has_farm_score();
	void clear_has_farm_score();
	void set_has_support_score();
	void clear_has_support_score();
	void set_has_push_score();
	void clear_has_push_score();
	void set_has_avg_stats_calibrated();
	void clear_has_avg_stats_calibrated();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:926
class CDOTAMatchMetadata_Team : public Message {
public:

	static const int kDotaTeamFieldNumber = 1;
	static const int kPlayersFieldNumber = 2;
	static const int kGraphExperienceFieldNumber = 3;
	static const int kGraphGoldEarnedFieldNumber = 4;
	static const int kGraphNetWorthFieldNumber = 5;
	static const int kCmFirstPickFieldNumber = 6;
	static const int kCmCaptainPlayerIdFieldNumber = 7;
	static const int kCmBansFieldNumber = 8;
	static const int kCmPicksFieldNumber = 9;
	static const int kCmPenaltyFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 dota_team_;  // +0x40
	bool cm_first_pick_;  // +0x44

	uint32 cm_captain_player_id_;  // +0x78
	uint32 cm_penalty_;  // +0x7c

	static CDOTAMatchMetadata_Team * default_instance_;
	CDOTAMatchMetadata_Team();
	virtual ~CDOTAMatchMetadata_Team();
	CDOTAMatchMetadata_Team(const CDOTAMatchMetadata_Team &);
	CDOTAMatchMetadata_Team & operator=(const CDOTAMatchMetadata_Team &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchMetadata_Team & default_instance();
	void Swap(CDOTAMatchMetadata_Team *);
	virtual CDOTAMatchMetadata_Team * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchMetadata_Team &);
	void MergeFrom(const CDOTAMatchMetadata_Team &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int players_size();
	void clear_players();
	const CDOTAMatchMetadata_Team_Player & players(int);
	CDOTAMatchMetadata_Team_Player * mutable_players(int);
	CDOTAMatchMetadata_Team_Player * add_players();
	const RepeatedPtrField<CDOTAMatchMetadata_Team_Player> & players();
	RepeatedPtrField<CDOTAMatchMetadata_Team_Player> * mutable_players();
	int graph_experience_size();
	void clear_graph_experience();
	float graph_experience(int);
	void set_graph_experience(int, float);
	void add_graph_experience(float);
	const RepeatedField<float> & graph_experience();
	RepeatedField<float> * mutable_graph_experience();
	int graph_gold_earned_size();
	void clear_graph_gold_earned();
	float graph_gold_earned(int);
	void set_graph_gold_earned(int, float);
	void add_graph_gold_earned(float);
	const RepeatedField<float> & graph_gold_earned();
	RepeatedField<float> * mutable_graph_gold_earned();
	int graph_net_worth_size();
	void clear_graph_net_worth();
	float graph_net_worth(int);
	void set_graph_net_worth(int, float);
	void add_graph_net_worth(float);
	const RepeatedField<float> & graph_net_worth();
	RepeatedField<float> * mutable_graph_net_worth();
	bool has_cm_first_pick();
	void clear_cm_first_pick();
	bool cm_first_pick();
	void set_cm_first_pick(bool);
	bool has_cm_captain_player_id();
	void clear_cm_captain_player_id();
	uint32 cm_captain_player_id();
	void set_cm_captain_player_id(uint32);
	int cm_bans_size();
	void clear_cm_bans();
	uint32 cm_bans(int);
	void set_cm_bans(int, uint32);
	void add_cm_bans(uint32);
	const RepeatedField<unsigned int> & cm_bans();
	RepeatedField<unsigned int> * mutable_cm_bans();
	int cm_picks_size();
	void clear_cm_picks();
	uint32 cm_picks(int);
	void set_cm_picks(int, uint32);
	void add_cm_picks(uint32);
	const RepeatedField<unsigned int> & cm_picks();
	RepeatedField<unsigned int> * mutable_cm_picks();
	bool has_cm_penalty();
	void clear_cm_penalty();
	uint32 cm_penalty();
	void set_cm_penalty(uint32);
	void set_has_dota_team();
	void clear_has_dota_team();
	void set_has_cm_first_pick();
	void clear_has_cm_first_pick();
	void set_has_cm_captain_player_id();
	void clear_has_cm_captain_player_id();
	void set_has_cm_penalty();
	void clear_has_cm_penalty();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:1119
class CDOTAMatchMetadata : public Message {
public:

	static const int kTeamsFieldNumber = 1;
	static const int kItemRewardsFieldNumber = 2;
	static const int kLobbyIdFieldNumber = 3;
	static const int kReportUntilTimeFieldNumber = 4;
	static const int kEventGameCustomTableFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 lobby_id_;  // +0x48
	uint64 report_until_time_;  // +0x50
	string * event_game_custom_table_;  // +0x58

	static CDOTAMatchMetadata * default_instance_;
	CDOTAMatchMetadata();
	virtual ~CDOTAMatchMetadata();
	CDOTAMatchMetadata(const CDOTAMatchMetadata &);
	CDOTAMatchMetadata & operator=(const CDOTAMatchMetadata &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchMetadata & default_instance();
	void Swap(CDOTAMatchMetadata *);
	virtual CDOTAMatchMetadata * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchMetadata &);
	void MergeFrom(const CDOTAMatchMetadata &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int teams_size();
	void clear_teams();
	const CDOTAMatchMetadata_Team & teams(int);
	CDOTAMatchMetadata_Team * mutable_teams(int);
	CDOTAMatchMetadata_Team * add_teams();
	const RepeatedPtrField<CDOTAMatchMetadata_Team> & teams();
	RepeatedPtrField<CDOTAMatchMetadata_Team> * mutable_teams();
	int item_rewards_size();
	void clear_item_rewards();
	const CLobbyTimedRewardDetails & item_rewards(int);
	CLobbyTimedRewardDetails * mutable_item_rewards(int);
	CLobbyTimedRewardDetails * add_item_rewards();
	const RepeatedPtrField<CLobbyTimedRewardDetails> & item_rewards();
	RepeatedPtrField<CLobbyTimedRewardDetails> * mutable_item_rewards();
	bool has_lobby_id();
	void clear_lobby_id();
	uint64 lobby_id();
	void set_lobby_id(uint64);
	bool has_report_until_time();
	void clear_report_until_time();
	uint64 report_until_time();
	void set_report_until_time(uint64);
	bool has_event_game_custom_table();
	void clear_event_game_custom_table();
	const string & event_game_custom_table();
	void set_event_game_custom_table(const string &);
	void set_event_game_custom_table(const char *);
	void set_event_game_custom_table(const void *, size_t);
	string * mutable_event_game_custom_table();
	string * release_event_game_custom_table();
	void set_allocated_event_game_custom_table(string *);
	void set_has_lobby_id();
	void clear_has_lobby_id();
	void set_has_report_until_time();
	void clear_has_report_until_time();
	void set_has_event_game_custom_table();
	void clear_has_event_game_custom_table();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:1251
class CDOTAMatchPrivateMetadata_Team_Player : public Message {
public:

	static const int kAccountIdFieldNumber = 1;
	static const int kPlayerSlotFieldNumber = 2;
	static const int kPositionStreamFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 account_id_;  // +0x18
	uint32 player_slot_;  // +0x1c
	string * position_stream_;  // +0x20

	static CDOTAMatchPrivateMetadata_Team_Player * default_instance_;
	CDOTAMatchPrivateMetadata_Team_Player();
	virtual ~CDOTAMatchPrivateMetadata_Team_Player();
	CDOTAMatchPrivateMetadata_Team_Player(const CDOTAMatchPrivateMetadata_Team_Player &);
	CDOTAMatchPrivateMetadata_Team_Player & operator=(const CDOTAMatchPrivateMetadata_Team_Player &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchPrivateMetadata_Team_Player & default_instance();
	void Swap(CDOTAMatchPrivateMetadata_Team_Player *);
	virtual CDOTAMatchPrivateMetadata_Team_Player * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchPrivateMetadata_Team_Player &);
	void MergeFrom(const CDOTAMatchPrivateMetadata_Team_Player &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_position_stream();
	void clear_position_stream();
	const string & position_stream();
	void set_position_stream(const string &);
	void set_position_stream(const char *);
	void set_position_stream(const void *, size_t);
	string * mutable_position_stream();
	string * release_position_stream();
	void set_allocated_position_stream(string *);
	void set_has_account_id();
	void clear_has_account_id();
	void set_has_player_slot();
	void clear_has_player_slot();
	void set_has_position_stream();
	void clear_has_position_stream();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:1355
class CDOTAMatchPrivateMetadata_Team_Building : public Message {
public:

	static const int kUnitNameFieldNumber = 1;
	static const int kPositionQuantXFieldNumber = 2;
	static const int kPositionQuantYFieldNumber = 3;
	static const int kDeathTimeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * unit_name_;  // +0x18
	uint32 position_quant_x_;  // +0x20
	uint32 position_quant_y_;  // +0x24
	float death_time_;  // +0x28

	static CDOTAMatchPrivateMetadata_Team_Building * default_instance_;
	CDOTAMatchPrivateMetadata_Team_Building();
	virtual ~CDOTAMatchPrivateMetadata_Team_Building();
	CDOTAMatchPrivateMetadata_Team_Building(const CDOTAMatchPrivateMetadata_Team_Building &);
	CDOTAMatchPrivateMetadata_Team_Building & operator=(const CDOTAMatchPrivateMetadata_Team_Building &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchPrivateMetadata_Team_Building & default_instance();
	void Swap(CDOTAMatchPrivateMetadata_Team_Building *);
	virtual CDOTAMatchPrivateMetadata_Team_Building * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchPrivateMetadata_Team_Building &);
	void MergeFrom(const CDOTAMatchPrivateMetadata_Team_Building &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_position_quant_x();
	void clear_position_quant_x();
	uint32 position_quant_x();
	void set_position_quant_x(uint32);
	bool has_position_quant_y();
	void clear_position_quant_y();
	uint32 position_quant_y();
	void set_position_quant_y(uint32);
	bool has_death_time();
	void clear_death_time();
	float death_time();
	void set_death_time(float);
	void set_has_unit_name();
	void clear_has_unit_name();
	void set_has_position_quant_x();
	void clear_has_position_quant_x();
	void set_has_position_quant_y();
	void clear_has_position_quant_y();
	void set_has_death_time();
	void clear_has_death_time();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:1469
class CDOTAMatchPrivateMetadata_Team : public Message {
public:

	static const int kDotaTeamFieldNumber = 1;
	static const int kPlayersFieldNumber = 2;
	static const int kBuildingsFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 dota_team_;  // +0x48

	static CDOTAMatchPrivateMetadata_Team * default_instance_;
	CDOTAMatchPrivateMetadata_Team();
	virtual ~CDOTAMatchPrivateMetadata_Team();
	CDOTAMatchPrivateMetadata_Team(const CDOTAMatchPrivateMetadata_Team &);
	CDOTAMatchPrivateMetadata_Team & operator=(const CDOTAMatchPrivateMetadata_Team &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchPrivateMetadata_Team & default_instance();
	void Swap(CDOTAMatchPrivateMetadata_Team *);
	virtual CDOTAMatchPrivateMetadata_Team * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchPrivateMetadata_Team &);
	void MergeFrom(const CDOTAMatchPrivateMetadata_Team &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	int players_size();
	void clear_players();
	const CDOTAMatchPrivateMetadata_Team_Player & players(int);
	CDOTAMatchPrivateMetadata_Team_Player * mutable_players(int);
	CDOTAMatchPrivateMetadata_Team_Player * add_players();
	const RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player> & players();
	RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Player> * mutable_players();
	int buildings_size();
	void clear_buildings();
	const CDOTAMatchPrivateMetadata_Team_Building & buildings(int);
	CDOTAMatchPrivateMetadata_Team_Building * mutable_buildings(int);
	CDOTAMatchPrivateMetadata_Team_Building * add_buildings();
	const RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building> & buildings();
	RepeatedPtrField<CDOTAMatchPrivateMetadata_Team_Building> * mutable_buildings();
	void set_has_dota_team();
	void clear_has_dota_team();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/dota_match_metadata.pb.h:1577
class CDOTAMatchPrivateMetadata : public Message {
public:

	static const int kTeamsFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CDOTAMatchPrivateMetadata * default_instance_;
	CDOTAMatchPrivateMetadata();
	virtual ~CDOTAMatchPrivateMetadata();
	CDOTAMatchPrivateMetadata(const CDOTAMatchPrivateMetadata &);
	CDOTAMatchPrivateMetadata & operator=(const CDOTAMatchPrivateMetadata &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAMatchPrivateMetadata & default_instance();
	void Swap(CDOTAMatchPrivateMetadata *);
	virtual CDOTAMatchPrivateMetadata * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAMatchPrivateMetadata &);
	void MergeFrom(const CDOTAMatchPrivateMetadata &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	int teams_size();
	void clear_teams();
	const CDOTAMatchPrivateMetadata_Team & teams(int);
	CDOTAMatchPrivateMetadata_Team * mutable_teams(int);
	CDOTAMatchPrivateMetadata_Team * add_teams();
	const RepeatedPtrField<CDOTAMatchPrivateMetadata_Team> & teams();
	RepeatedPtrField<CDOTAMatchPrivateMetadata_Team> * mutable_teams();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
