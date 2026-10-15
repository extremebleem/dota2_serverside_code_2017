// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_modifiers.pb.h:67
class CDOTAModifierBuffTableEntry : public Message {
public:

	static const int kEntryTypeFieldNumber = 1;
	static const int kParentFieldNumber = 2;
	static const int kIndexFieldNumber = 3;
	static const int kSerialNumFieldNumber = 4;
	static const int kModifierClassFieldNumber = 5;
	static const int kAbilityLevelFieldNumber = 6;
	static const int kStackCountFieldNumber = 7;
	static const int kCreationTimeFieldNumber = 8;
	static const int kDurationFieldNumber = 9;
	static const int kCasterFieldNumber = 10;
	static const int kAbilityFieldNumber = 11;
	static const int kArmorFieldNumber = 12;
	static const int kFadeTimeFieldNumber = 13;
	static const int kSubtleFieldNumber = 14;
	static const int kChannelTimeFieldNumber = 15;
	static const int kVStartFieldNumber = 16;
	static const int kVEndFieldNumber = 17;
	static const int kPortalLoopAppearFieldNumber = 18;
	static const int kPortalLoopDisappearFieldNumber = 19;
	static const int kHeroLoopAppearFieldNumber = 20;
	static const int kHeroLoopDisappearFieldNumber = 21;
	static const int kMovementSpeedFieldNumber = 22;
	static const int kAuraFieldNumber = 23;
	static const int kActivityFieldNumber = 24;
	static const int kDamageFieldNumber = 25;
	static const int kRangeFieldNumber = 26;
	static const int kDdModifierIndexFieldNumber = 27;
	static const int kDdAbilityIndexFieldNumber = 28;
	static const int kIllusionLabelFieldNumber = 29;
	static const int kActiveFieldNumber = 30;
	static const int kPlayerIdsFieldNumber = 31;
	static const int kLuaNameFieldNumber = 32;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	int entry_type_;  // +0x18
	int32 parent_;  // +0x1c
	int32 index_;  // +0x20
	int32 serial_num_;  // +0x24
	int32 modifier_class_;  // +0x28
	int32 ability_level_;  // +0x2c
	int32 stack_count_;  // +0x30
	float creation_time_;  // +0x34
	float duration_;  // +0x38
	int32 caster_;  // +0x3c
	int32 ability_;  // +0x40
	int32 armor_;  // +0x44
	float fade_time_;  // +0x48
	float channel_time_;  // +0x4c
	string * portal_loop_appear_;  // +0x60
	string * portal_loop_disappear_;  // +0x68
	string * hero_loop_appear_;  // +0x70
	string * hero_loop_disappear_;  // +0x78
	int32 movement_speed_;  // +0x80
	bool subtle_;  // +0x84
	bool aura_;  // +0x85
	bool active_;  // +0x86

	int32 activity_;  // +0x88
	int32 damage_;  // +0x8c
	int32 range_;  // +0x90
	int32 dd_modifier_index_;  // +0x94
	string * illusion_label_;  // +0x98
	string * player_ids_;  // +0xa0
	string * lua_name_;  // +0xa8
	int32 dd_ability_index_;  // +0xb0

	static CDOTAModifierBuffTableEntry * default_instance_;
	CDOTAModifierBuffTableEntry();
	virtual ~CDOTAModifierBuffTableEntry();
	CDOTAModifierBuffTableEntry(const CDOTAModifierBuffTableEntry &);
	CDOTAModifierBuffTableEntry & operator=(const CDOTAModifierBuffTableEntry &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTAModifierBuffTableEntry & default_instance();
	void Swap(CDOTAModifierBuffTableEntry *);
	virtual CDOTAModifierBuffTableEntry * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTAModifierBuffTableEntry &);
	void MergeFrom(const CDOTAModifierBuffTableEntry &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_entry_type();
	void clear_entry_type();
	DOTA_MODIFIER_ENTRY_TYPE entry_type();
	void set_entry_type(DOTA_MODIFIER_ENTRY_TYPE);
	bool has_parent();
	void clear_parent();
	int32 parent();
	void set_parent(int32);
	bool has_index();
	void clear_index();
	int32 index();
	void set_index(int32);
	bool has_serial_num();
	void clear_serial_num();
	int32 serial_num();
	void set_serial_num(int32);
	bool has_modifier_class();
	void clear_modifier_class();
	int32 modifier_class();
	void set_modifier_class(int32);
	bool has_ability_level();
	void clear_ability_level();
	int32 ability_level();
	void set_ability_level(int32);
	bool has_stack_count();
	void clear_stack_count();
	int32 stack_count();
	void set_stack_count(int32);
	bool has_creation_time();
	void clear_creation_time();
	float creation_time();
	void set_creation_time(float);
	bool has_duration();
	void clear_duration();
	float duration();
	void set_duration(float);
	bool has_caster();
	void clear_caster();
	int32 caster();
	void set_caster(int32);
	bool has_ability();
	void clear_ability();
	int32 ability();
	void set_ability(int32);
	bool has_armor();
	void clear_armor();
	int32 armor();
	void set_armor(int32);
	bool has_fade_time();
	void clear_fade_time();
	float fade_time();
	void set_fade_time(float);
	bool has_subtle();
	void clear_subtle();
	bool subtle();
	void set_subtle(bool);
	bool has_channel_time();
	void clear_channel_time();
	float channel_time();
	void set_channel_time(float);
	bool has_v_start();
	void clear_v_start();
	const CMsgVector & v_start();
	CMsgVector * mutable_v_start();
	CMsgVector * release_v_start();
	void set_allocated_v_start(CMsgVector *);
	bool has_v_end();
	void clear_v_end();
	const CMsgVector & v_end();
	CMsgVector * mutable_v_end();
	CMsgVector * release_v_end();
	void set_allocated_v_end(CMsgVector *);
	bool has_portal_loop_appear();
	void clear_portal_loop_appear();
	const string & portal_loop_appear();
	void set_portal_loop_appear(const string &);
	void set_portal_loop_appear(const char *);
	void set_portal_loop_appear(const char *, size_t);
	string * mutable_portal_loop_appear();
	string * release_portal_loop_appear();
	void set_allocated_portal_loop_appear(string *);
	bool has_portal_loop_disappear();
	void clear_portal_loop_disappear();
	const string & portal_loop_disappear();
	void set_portal_loop_disappear(const string &);
	void set_portal_loop_disappear(const char *);
	void set_portal_loop_disappear(const char *, size_t);
	string * mutable_portal_loop_disappear();
	string * release_portal_loop_disappear();
	void set_allocated_portal_loop_disappear(string *);
	bool has_hero_loop_appear();
	void clear_hero_loop_appear();
	const string & hero_loop_appear();
	void set_hero_loop_appear(const string &);
	void set_hero_loop_appear(const char *);
	void set_hero_loop_appear(const char *, size_t);
	string * mutable_hero_loop_appear();
	string * release_hero_loop_appear();
	void set_allocated_hero_loop_appear(string *);
	bool has_hero_loop_disappear();
	void clear_hero_loop_disappear();
	const string & hero_loop_disappear();
	void set_hero_loop_disappear(const string &);
	void set_hero_loop_disappear(const char *);
	void set_hero_loop_disappear(const char *, size_t);
	string * mutable_hero_loop_disappear();
	string * release_hero_loop_disappear();
	void set_allocated_hero_loop_disappear(string *);
	bool has_movement_speed();
	void clear_movement_speed();
	int32 movement_speed();
	void set_movement_speed(int32);
	bool has_aura();
	void clear_aura();
	bool aura();
	void set_aura(bool);
	bool has_activity();
	void clear_activity();
	int32 activity();
	void set_activity(int32);
	bool has_damage();
	void clear_damage();
	int32 damage();
	void set_damage(int32);
	bool has_range();
	void clear_range();
	int32 range();
	void set_range(int32);
	bool has_dd_modifier_index();
	void clear_dd_modifier_index();
	int32 dd_modifier_index();
	void set_dd_modifier_index(int32);
	bool has_dd_ability_index();
	void clear_dd_ability_index();
	int32 dd_ability_index();
	void set_dd_ability_index(int32);
	bool has_illusion_label();
	void clear_illusion_label();
	const string & illusion_label();
	void set_illusion_label(const string &);
	void set_illusion_label(const char *);
	void set_illusion_label(const char *, size_t);
	string * mutable_illusion_label();
	string * release_illusion_label();
	void set_allocated_illusion_label(string *);
	bool has_active();
	void clear_active();
	bool active();
	void set_active(bool);
	bool has_player_ids();
	void clear_player_ids();
	const string & player_ids();
	void set_player_ids(const string &);
	void set_player_ids(const char *);
	void set_player_ids(const char *, size_t);
	string * mutable_player_ids();
	string * release_player_ids();
	void set_allocated_player_ids(string *);
	bool has_lua_name();
	void clear_lua_name();
	const string & lua_name();
	void set_lua_name(const string &);
	void set_lua_name(const char *);
	void set_lua_name(const char *, size_t);
	string * mutable_lua_name();
	string * release_lua_name();
	void set_allocated_lua_name(string *);
	void set_has_entry_type();
	void clear_has_entry_type();
	void set_has_parent();
	void clear_has_parent();
	void set_has_index();
	void clear_has_index();
	void set_has_serial_num();
	void clear_has_serial_num();
	void set_has_modifier_class();
	void clear_has_modifier_class();
	void set_has_ability_level();
	void clear_has_ability_level();
	void set_has_stack_count();
	void clear_has_stack_count();
	void set_has_creation_time();
	void clear_has_creation_time();
	void set_has_duration();
	void clear_has_duration();
	void set_has_caster();
	void clear_has_caster();
	void set_has_ability();
	void clear_has_ability();
	void set_has_armor();
	void clear_has_armor();
	void set_has_fade_time();
	void clear_has_fade_time();
	void set_has_subtle();
	void clear_has_subtle();
	void set_has_channel_time();
	void clear_has_channel_time();
	void set_has_v_start();
	void clear_has_v_start();
	void set_has_v_end();
	void clear_has_v_end();
	void set_has_portal_loop_appear();
	void clear_has_portal_loop_appear();
	void set_has_portal_loop_disappear();
	void clear_has_portal_loop_disappear();
	void set_has_hero_loop_appear();
	void clear_has_hero_loop_appear();
	void set_has_hero_loop_disappear();
	void clear_has_hero_loop_disappear();
	void set_has_movement_speed();
	void clear_has_movement_speed();
	void set_has_aura();
	void clear_has_aura();
	void set_has_activity();
	void clear_has_activity();
	void set_has_damage();
	void clear_has_damage();
	void set_has_range();
	void clear_has_range();
	void set_has_dd_modifier_index();
	void clear_has_dd_modifier_index();
	void set_has_dd_ability_index();
	void clear_has_dd_ability_index();
	void set_has_illusion_label();
	void clear_has_illusion_label();
	void set_has_active();
	void clear_has_active();
	void set_has_player_ids();
	void clear_has_player_ids();
	void set_has_lua_name();
	void clear_has_lua_name();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
	// vtable[4] Clear
	// vtable[5] IsInitialized
	// vtable[9] ByteSize
	// vtable[8] MergePartialFromCodedStream
	// vtable[10] SerializeWithCachedSizes
	// vtable[11] SerializeWithCachedSizesToArray
	// vtable[12] GetCachedSize
	// vtable[17] SetCachedSize
	// vtable[19] GetMetadata
	// sizeof = 184
};

// src/game/server/generated_protodota/linuxsteamrt64/dota_modifiers.pb.h:495
class CDOTALuaModifierEntry : public Message {
public:

	static const int kModifierTypeFieldNumber = 1;
	static const int kModifierFilenameFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	string * modifier_filename_;  // +0x18
	int32 modifier_type_;  // +0x20

	static CDOTALuaModifierEntry * default_instance_;
	CDOTALuaModifierEntry();
	virtual ~CDOTALuaModifierEntry();
	CDOTALuaModifierEntry(const CDOTALuaModifierEntry &);
	CDOTALuaModifierEntry & operator=(const CDOTALuaModifierEntry &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CDOTALuaModifierEntry & default_instance();
	void Swap(CDOTALuaModifierEntry *);
	virtual CDOTALuaModifierEntry * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CDOTALuaModifierEntry &);
	void MergeFrom(const CDOTALuaModifierEntry &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_modifier_type();
	void clear_modifier_type();
	int32 modifier_type();
	void set_modifier_type(int32);
	bool has_modifier_filename();
	void clear_modifier_filename();
	const string & modifier_filename();
	void set_modifier_filename(const string &);
	void set_modifier_filename(const char *);
	void set_modifier_filename(const char *, size_t);
	string * mutable_modifier_filename();
	string * release_modifier_filename();
	void set_allocated_modifier_filename(string *);
	void set_has_modifier_type();
	void clear_has_modifier_type();
	void set_has_modifier_filename();
	void clear_has_modifier_filename();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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
