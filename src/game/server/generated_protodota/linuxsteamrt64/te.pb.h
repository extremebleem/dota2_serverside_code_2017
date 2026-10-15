// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:119
class CMsgTEArmorRicochet : public Message {
public:

	static const int kPosFieldNumber = 1;
	static const int kDirFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgTEArmorRicochet * default_instance_;
	CMsgTEArmorRicochet();
	virtual ~CMsgTEArmorRicochet();
	CMsgTEArmorRicochet(const CMsgTEArmorRicochet &);
	CMsgTEArmorRicochet & operator=(const CMsgTEArmorRicochet &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEArmorRicochet & default_instance();
	void Swap(CMsgTEArmorRicochet *);
	virtual CMsgTEArmorRicochet * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEArmorRicochet &);
	void MergeFrom(const CMsgTEArmorRicochet &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_pos();
	void clear_pos();
	const CMsgVector & pos();
	CMsgVector * mutable_pos();
	CMsgVector * release_pos();
	void set_allocated_pos(CMsgVector *);
	bool has_dir();
	void clear_dir();
	const CMsgVector & dir();
	CMsgVector * mutable_dir();
	CMsgVector * release_dir();
	void set_allocated_dir(CMsgVector *);
	void set_has_pos();
	void clear_has_pos();
	void set_has_dir();
	void clear_has_dir();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:212
class CMsgTEBaseBeam : public Message {
public:

	static const int kModelindexFieldNumber = 1;
	static const int kHaloindexFieldNumber = 2;
	static const int kStartframeFieldNumber = 3;
	static const int kFramerateFieldNumber = 4;
	static const int kLifeFieldNumber = 5;
	static const int kWidthFieldNumber = 6;
	static const int kEndwidthFieldNumber = 7;
	static const int kFadelengthFieldNumber = 8;
	static const int kAmplitudeFieldNumber = 9;
	static const int kColorFieldNumber = 10;
	static const int kSpeedFieldNumber = 11;
	static const int kFlagsFieldNumber = 12;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 modelindex_;  // +0x18
	uint64 haloindex_;  // +0x20
	uint32 startframe_;  // +0x28
	uint32 framerate_;  // +0x2c
	float life_;  // +0x30
	float width_;  // +0x34
	float endwidth_;  // +0x38
	uint32 fadelength_;  // +0x3c
	float amplitude_;  // +0x40
	uint32 color_;  // +0x44
	uint32 speed_;  // +0x48
	uint32 flags_;  // +0x4c

	static CMsgTEBaseBeam * default_instance_;
	CMsgTEBaseBeam();
	virtual ~CMsgTEBaseBeam();
	CMsgTEBaseBeam(const CMsgTEBaseBeam &);
	CMsgTEBaseBeam & operator=(const CMsgTEBaseBeam &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBaseBeam & default_instance();
	void Swap(CMsgTEBaseBeam *);
	virtual CMsgTEBaseBeam * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBaseBeam &);
	void MergeFrom(const CMsgTEBaseBeam &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_modelindex();
	void clear_modelindex();
	uint64 modelindex();
	void set_modelindex(uint64);
	bool has_haloindex();
	void clear_haloindex();
	uint64 haloindex();
	void set_haloindex(uint64);
	bool has_startframe();
	void clear_startframe();
	uint32 startframe();
	void set_startframe(uint32);
	bool has_framerate();
	void clear_framerate();
	uint32 framerate();
	void set_framerate(uint32);
	bool has_life();
	void clear_life();
	float life();
	void set_life(float);
	bool has_width();
	void clear_width();
	float width();
	void set_width(float);
	bool has_endwidth();
	void clear_endwidth();
	float endwidth();
	void set_endwidth(float);
	bool has_fadelength();
	void clear_fadelength();
	uint32 fadelength();
	void set_fadelength(uint32);
	bool has_amplitude();
	void clear_amplitude();
	float amplitude();
	void set_amplitude(float);
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_speed();
	void clear_speed();
	uint32 speed();
	void set_speed(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	void set_has_modelindex();
	void clear_has_modelindex();
	void set_has_haloindex();
	void clear_has_haloindex();
	void set_has_startframe();
	void clear_has_startframe();
	void set_has_framerate();
	void clear_has_framerate();
	void set_has_life();
	void clear_has_life();
	void set_has_width();
	void clear_has_width();
	void set_has_endwidth();
	void clear_has_endwidth();
	void set_has_fadelength();
	void clear_has_fadelength();
	void set_has_amplitude();
	void clear_has_amplitude();
	void set_has_color();
	void clear_has_color();
	void set_has_speed();
	void clear_has_speed();
	void set_has_flags();
	void clear_has_flags();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:401
class CMsgTEBeamEntPoint : public Message {
public:

	static const int kBaseFieldNumber = 1;
	static const int kStartentityFieldNumber = 2;
	static const int kEndentityFieldNumber = 3;
	static const int kStartFieldNumber = 4;
	static const int kEndFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 startentity_;  // +0x20
	uint32 endentity_;  // +0x24

	static CMsgTEBeamEntPoint * default_instance_;
	CMsgTEBeamEntPoint();
	virtual ~CMsgTEBeamEntPoint();
	CMsgTEBeamEntPoint(const CMsgTEBeamEntPoint &);
	CMsgTEBeamEntPoint & operator=(const CMsgTEBeamEntPoint &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBeamEntPoint & default_instance();
	void Swap(CMsgTEBeamEntPoint *);
	virtual CMsgTEBeamEntPoint * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBeamEntPoint &);
	void MergeFrom(const CMsgTEBeamEntPoint &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_base();
	void clear_base();
	const CMsgTEBaseBeam & base();
	CMsgTEBaseBeam * mutable_base();
	CMsgTEBaseBeam * release_base();
	void set_allocated_base(CMsgTEBaseBeam *);
	bool has_startentity();
	void clear_startentity();
	uint32 startentity();
	void set_startentity(uint32);
	bool has_endentity();
	void clear_endentity();
	uint32 endentity();
	void set_endentity(uint32);
	bool has_start();
	void clear_start();
	const CMsgVector & start();
	CMsgVector * mutable_start();
	CMsgVector * release_start();
	void set_allocated_start(CMsgVector *);
	bool has_end();
	void clear_end();
	const CMsgVector & end();
	CMsgVector * mutable_end();
	CMsgVector * release_end();
	void set_allocated_end(CMsgVector *);
	void set_has_base();
	void clear_has_base();
	void set_has_startentity();
	void clear_has_startentity();
	void set_has_endentity();
	void clear_has_endentity();
	void set_has_start();
	void clear_has_start();
	void set_has_end();
	void clear_has_end();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:526
class CMsgTEBeamEnts : public Message {
public:

	static const int kBaseFieldNumber = 1;
	static const int kStartentityFieldNumber = 2;
	static const int kEndentityFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 startentity_;  // +0x20
	uint32 endentity_;  // +0x24

	static CMsgTEBeamEnts * default_instance_;
	CMsgTEBeamEnts();
	virtual ~CMsgTEBeamEnts();
	CMsgTEBeamEnts(const CMsgTEBeamEnts &);
	CMsgTEBeamEnts & operator=(const CMsgTEBeamEnts &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBeamEnts & default_instance();
	void Swap(CMsgTEBeamEnts *);
	virtual CMsgTEBeamEnts * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBeamEnts &);
	void MergeFrom(const CMsgTEBeamEnts &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_base();
	void clear_base();
	const CMsgTEBaseBeam & base();
	CMsgTEBaseBeam * mutable_base();
	CMsgTEBaseBeam * release_base();
	void set_allocated_base(CMsgTEBaseBeam *);
	bool has_startentity();
	void clear_startentity();
	uint32 startentity();
	void set_startentity(uint32);
	bool has_endentity();
	void clear_endentity();
	uint32 endentity();
	void set_endentity(uint32);
	void set_has_base();
	void clear_has_base();
	void set_has_startentity();
	void clear_has_startentity();
	void set_has_endentity();
	void clear_has_endentity();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:627
class CMsgTEBeamPoints : public Message {
public:

	static const int kBaseFieldNumber = 1;
	static const int kStartFieldNumber = 2;
	static const int kEndFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgTEBeamPoints * default_instance_;
	CMsgTEBeamPoints();
	virtual ~CMsgTEBeamPoints();
	CMsgTEBeamPoints(const CMsgTEBeamPoints &);
	CMsgTEBeamPoints & operator=(const CMsgTEBeamPoints &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBeamPoints & default_instance();
	void Swap(CMsgTEBeamPoints *);
	virtual CMsgTEBeamPoints * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBeamPoints &);
	void MergeFrom(const CMsgTEBeamPoints &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_base();
	void clear_base();
	const CMsgTEBaseBeam & base();
	CMsgTEBaseBeam * mutable_base();
	CMsgTEBaseBeam * release_base();
	void set_allocated_base(CMsgTEBaseBeam *);
	bool has_start();
	void clear_start();
	const CMsgVector & start();
	CMsgVector * mutable_start();
	CMsgVector * release_start();
	void set_allocated_start(CMsgVector *);
	bool has_end();
	void clear_end();
	const CMsgVector & end();
	CMsgVector * mutable_end();
	CMsgVector * release_end();
	void set_allocated_end(CMsgVector *);
	void set_has_base();
	void clear_has_base();
	void set_has_start();
	void clear_has_start();
	void set_has_end();
	void clear_has_end();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:732
class CMsgTEBeamRing : public Message {
public:

	static const int kBaseFieldNumber = 1;
	static const int kStartentityFieldNumber = 2;
	static const int kEndentityFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 startentity_;  // +0x20
	uint32 endentity_;  // +0x24

	static CMsgTEBeamRing * default_instance_;
	CMsgTEBeamRing();
	virtual ~CMsgTEBeamRing();
	CMsgTEBeamRing(const CMsgTEBeamRing &);
	CMsgTEBeamRing & operator=(const CMsgTEBeamRing &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBeamRing & default_instance();
	void Swap(CMsgTEBeamRing *);
	virtual CMsgTEBeamRing * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBeamRing &);
	void MergeFrom(const CMsgTEBeamRing &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_base();
	void clear_base();
	const CMsgTEBaseBeam & base();
	CMsgTEBaseBeam * mutable_base();
	CMsgTEBaseBeam * release_base();
	void set_allocated_base(CMsgTEBaseBeam *);
	bool has_startentity();
	void clear_startentity();
	uint32 startentity();
	void set_startentity(uint32);
	bool has_endentity();
	void clear_endentity();
	uint32 endentity();
	void set_endentity(uint32);
	void set_has_base();
	void clear_has_base();
	void set_has_startentity();
	void clear_has_startentity();
	void set_has_endentity();
	void clear_has_endentity();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:833
class CMsgTEBreakModel : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kAnglesFieldNumber = 2;
	static const int kSizeFieldNumber = 3;
	static const int kVelocityFieldNumber = 4;
	static const int kRandomizationFieldNumber = 5;
	static const int kModelindexFieldNumber = 6;
	static const int kCountFieldNumber = 7;
	static const int kTimeFieldNumber = 8;
	static const int kFlagsFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint64 modelindex_;  // +0x38
	uint32 randomization_;  // +0x40
	uint32 count_;  // +0x44
	float time_;  // +0x48
	uint32 flags_;  // +0x4c

	static CMsgTEBreakModel * default_instance_;
	CMsgTEBreakModel();
	virtual ~CMsgTEBreakModel();
	CMsgTEBreakModel(const CMsgTEBreakModel &);
	CMsgTEBreakModel & operator=(const CMsgTEBreakModel &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBreakModel & default_instance();
	void Swap(CMsgTEBreakModel *);
	virtual CMsgTEBreakModel * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBreakModel &);
	void MergeFrom(const CMsgTEBreakModel &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_angles();
	void clear_angles();
	const CMsgQAngle & angles();
	CMsgQAngle * mutable_angles();
	CMsgQAngle * release_angles();
	void set_allocated_angles(CMsgQAngle *);
	bool has_size();
	void clear_size();
	const CMsgVector & size();
	CMsgVector * mutable_size();
	CMsgVector * release_size();
	void set_allocated_size(CMsgVector *);
	bool has_velocity();
	void clear_velocity();
	const CMsgVector & velocity();
	CMsgVector * mutable_velocity();
	CMsgVector * release_velocity();
	void set_allocated_velocity(CMsgVector *);
	bool has_randomization();
	void clear_randomization();
	uint32 randomization();
	void set_randomization(uint32);
	bool has_modelindex();
	void clear_modelindex();
	uint64 modelindex();
	void set_modelindex(uint64);
	bool has_count();
	void clear_count();
	uint32 count();
	void set_count(uint32);
	bool has_time();
	void clear_time();
	float time();
	void set_time(float);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_angles();
	void clear_has_angles();
	void set_has_size();
	void clear_has_size();
	void set_has_velocity();
	void clear_has_velocity();
	void set_has_randomization();
	void clear_has_randomization();
	void set_has_modelindex();
	void clear_has_modelindex();
	void set_has_count();
	void clear_has_count();
	void set_has_time();
	void clear_has_time();
	void set_has_flags();
	void clear_has_flags();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:1000
class CMsgTEBSPDecal : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kNormalFieldNumber = 2;
	static const int kSaxisFieldNumber = 3;
	static const int kEntityFieldNumber = 4;
	static const int kIndexFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 entity_;  // +0x30
	uint32 index_;  // +0x34

	static CMsgTEBSPDecal * default_instance_;
	CMsgTEBSPDecal();
	virtual ~CMsgTEBSPDecal();
	CMsgTEBSPDecal(const CMsgTEBSPDecal &);
	CMsgTEBSPDecal & operator=(const CMsgTEBSPDecal &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBSPDecal & default_instance();
	void Swap(CMsgTEBSPDecal *);
	virtual CMsgTEBSPDecal * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBSPDecal &);
	void MergeFrom(const CMsgTEBSPDecal &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_normal();
	void clear_normal();
	const CMsgVector & normal();
	CMsgVector * mutable_normal();
	CMsgVector * release_normal();
	void set_allocated_normal(CMsgVector *);
	bool has_saxis();
	void clear_saxis();
	const CMsgVector & saxis();
	CMsgVector * mutable_saxis();
	CMsgVector * release_saxis();
	void set_allocated_saxis(CMsgVector *);
	bool has_entity();
	void clear_entity();
	uint32 entity();
	void set_entity(uint32);
	bool has_index();
	void clear_index();
	uint32 index();
	void set_index(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_normal();
	void clear_has_normal();
	void set_has_saxis();
	void clear_has_saxis();
	void set_has_entity();
	void clear_has_entity();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:1125
class CMsgTEBubbles : public Message {
public:

	static const int kMinsFieldNumber = 1;
	static const int kMaxsFieldNumber = 2;
	static const int kHeightFieldNumber = 3;
	static const int kCountFieldNumber = 4;
	static const int kSpeedFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float height_;  // +0x28
	uint32 count_;  // +0x2c
	float speed_;  // +0x30

	static CMsgTEBubbles * default_instance_;
	CMsgTEBubbles();
	virtual ~CMsgTEBubbles();
	CMsgTEBubbles(const CMsgTEBubbles &);
	CMsgTEBubbles & operator=(const CMsgTEBubbles &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBubbles & default_instance();
	void Swap(CMsgTEBubbles *);
	virtual CMsgTEBubbles * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBubbles &);
	void MergeFrom(const CMsgTEBubbles &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_mins();
	void clear_mins();
	const CMsgVector & mins();
	CMsgVector * mutable_mins();
	CMsgVector * release_mins();
	void set_allocated_mins(CMsgVector *);
	bool has_maxs();
	void clear_maxs();
	const CMsgVector & maxs();
	CMsgVector * mutable_maxs();
	CMsgVector * release_maxs();
	void set_allocated_maxs(CMsgVector *);
	bool has_height();
	void clear_height();
	float height();
	void set_height(float);
	bool has_count();
	void clear_count();
	uint32 count();
	void set_count(uint32);
	bool has_speed();
	void clear_speed();
	float speed();
	void set_speed(float);
	void set_has_mins();
	void clear_has_mins();
	void set_has_maxs();
	void clear_has_maxs();
	void set_has_height();
	void clear_has_height();
	void set_has_count();
	void clear_has_count();
	void set_has_speed();
	void clear_has_speed();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:1248
class CMsgTEBubbleTrail : public Message {
public:

	static const int kMinsFieldNumber = 1;
	static const int kMaxsFieldNumber = 2;
	static const int kWaterzFieldNumber = 3;
	static const int kCountFieldNumber = 4;
	static const int kSpeedFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float waterz_;  // +0x28
	uint32 count_;  // +0x2c
	float speed_;  // +0x30

	static CMsgTEBubbleTrail * default_instance_;
	CMsgTEBubbleTrail();
	virtual ~CMsgTEBubbleTrail();
	CMsgTEBubbleTrail(const CMsgTEBubbleTrail &);
	CMsgTEBubbleTrail & operator=(const CMsgTEBubbleTrail &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBubbleTrail & default_instance();
	void Swap(CMsgTEBubbleTrail *);
	virtual CMsgTEBubbleTrail * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBubbleTrail &);
	void MergeFrom(const CMsgTEBubbleTrail &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_mins();
	void clear_mins();
	const CMsgVector & mins();
	CMsgVector * mutable_mins();
	CMsgVector * release_mins();
	void set_allocated_mins(CMsgVector *);
	bool has_maxs();
	void clear_maxs();
	const CMsgVector & maxs();
	CMsgVector * mutable_maxs();
	CMsgVector * release_maxs();
	void set_allocated_maxs(CMsgVector *);
	bool has_waterz();
	void clear_waterz();
	float waterz();
	void set_waterz(float);
	bool has_count();
	void clear_count();
	uint32 count();
	void set_count(uint32);
	bool has_speed();
	void clear_speed();
	float speed();
	void set_speed(float);
	void set_has_mins();
	void clear_has_mins();
	void set_has_maxs();
	void clear_has_maxs();
	void set_has_waterz();
	void clear_has_waterz();
	void set_has_count();
	void clear_has_count();
	void set_has_speed();
	void clear_has_speed();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:1371
class CMsgTEDecal : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kStartFieldNumber = 2;
	static const int kEntityFieldNumber = 3;
	static const int kHitboxFieldNumber = 4;
	static const int kIndexFieldNumber = 5;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 entity_;  // +0x28
	uint32 hitbox_;  // +0x2c
	uint32 index_;  // +0x30

	static CMsgTEDecal * default_instance_;
	CMsgTEDecal();
	virtual ~CMsgTEDecal();
	CMsgTEDecal(const CMsgTEDecal &);
	CMsgTEDecal & operator=(const CMsgTEDecal &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEDecal & default_instance();
	void Swap(CMsgTEDecal *);
	virtual CMsgTEDecal * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEDecal &);
	void MergeFrom(const CMsgTEDecal &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_start();
	void clear_start();
	const CMsgVector & start();
	CMsgVector * mutable_start();
	CMsgVector * release_start();
	void set_allocated_start(CMsgVector *);
	bool has_entity();
	void clear_entity();
	uint32 entity();
	void set_entity(uint32);
	bool has_hitbox();
	void clear_hitbox();
	uint32 hitbox();
	void set_hitbox(uint32);
	bool has_index();
	void clear_index();
	uint32 index();
	void set_index(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_start();
	void clear_has_start();
	void set_has_entity();
	void clear_has_entity();
	void set_has_hitbox();
	void clear_has_hitbox();
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
	// sizeof = 56
};

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:1494
class CMsgEffectData : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kStartFieldNumber = 2;
	static const int kNormalFieldNumber = 3;
	static const int kAnglesFieldNumber = 4;
	static const int kEntityFieldNumber = 5;
	static const int kOtherentityFieldNumber = 6;
	static const int kScaleFieldNumber = 7;
	static const int kMagnitudeFieldNumber = 8;
	static const int kRadiusFieldNumber = 9;
	static const int kSurfacepropFieldNumber = 10;
	static const int kEffectindexFieldNumber = 11;
	static const int kDamagetypeFieldNumber = 12;
	static const int kMaterialFieldNumber = 13;
	static const int kHitboxFieldNumber = 14;
	static const int kColorFieldNumber = 15;
	static const int kFlagsFieldNumber = 16;
	static const int kAttachmentindexFieldNumber = 17;
	static const int kEffectnameFieldNumber = 18;
	static const int kAttachmentnameFieldNumber = 19;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 entity_;  // +0x38
	uint32 otherentity_;  // +0x3c
	float scale_;  // +0x40
	float magnitude_;  // +0x44
	float radius_;  // +0x48
	uint32 surfaceprop_;  // +0x4c
	uint64 effectindex_;  // +0x50
	uint32 damagetype_;  // +0x58
	uint32 material_;  // +0x5c
	uint32 hitbox_;  // +0x60
	uint32 color_;  // +0x64
	uint32 flags_;  // +0x68
	int32 attachmentindex_;  // +0x6c
	uint32 effectname_;  // +0x70
	uint32 attachmentname_;  // +0x74

	static CMsgEffectData * default_instance_;
	CMsgEffectData();
	virtual ~CMsgEffectData();
	CMsgEffectData(const CMsgEffectData &);
	CMsgEffectData & operator=(const CMsgEffectData &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgEffectData & default_instance();
	void Swap(CMsgEffectData *);
	virtual CMsgEffectData * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgEffectData &);
	void MergeFrom(const CMsgEffectData &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_start();
	void clear_start();
	const CMsgVector & start();
	CMsgVector * mutable_start();
	CMsgVector * release_start();
	void set_allocated_start(CMsgVector *);
	bool has_normal();
	void clear_normal();
	const CMsgVector & normal();
	CMsgVector * mutable_normal();
	CMsgVector * release_normal();
	void set_allocated_normal(CMsgVector *);
	bool has_angles();
	void clear_angles();
	const CMsgQAngle & angles();
	CMsgQAngle * mutable_angles();
	CMsgQAngle * release_angles();
	void set_allocated_angles(CMsgQAngle *);
	bool has_entity();
	void clear_entity();
	uint32 entity();
	void set_entity(uint32);
	bool has_otherentity();
	void clear_otherentity();
	uint32 otherentity();
	void set_otherentity(uint32);
	bool has_scale();
	void clear_scale();
	float scale();
	void set_scale(float);
	bool has_magnitude();
	void clear_magnitude();
	float magnitude();
	void set_magnitude(float);
	bool has_radius();
	void clear_radius();
	float radius();
	void set_radius(float);
	bool has_surfaceprop();
	void clear_surfaceprop();
	uint32 surfaceprop();
	void set_surfaceprop(uint32);
	bool has_effectindex();
	void clear_effectindex();
	uint64 effectindex();
	void set_effectindex(uint64);
	bool has_damagetype();
	void clear_damagetype();
	uint32 damagetype();
	void set_damagetype(uint32);
	bool has_material();
	void clear_material();
	uint32 material();
	void set_material(uint32);
	bool has_hitbox();
	void clear_hitbox();
	uint32 hitbox();
	void set_hitbox(uint32);
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_attachmentindex();
	void clear_attachmentindex();
	int32 attachmentindex();
	void set_attachmentindex(int32);
	bool has_effectname();
	void clear_effectname();
	uint32 effectname();
	void set_effectname(uint32);
	bool has_attachmentname();
	void clear_attachmentname();
	uint32 attachmentname();
	void set_attachmentname(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_start();
	void clear_has_start();
	void set_has_normal();
	void clear_has_normal();
	void set_has_angles();
	void clear_has_angles();
	void set_has_entity();
	void clear_has_entity();
	void set_has_otherentity();
	void clear_has_otherentity();
	void set_has_scale();
	void clear_has_scale();
	void set_has_magnitude();
	void clear_has_magnitude();
	void set_has_radius();
	void clear_has_radius();
	void set_has_surfaceprop();
	void clear_has_surfaceprop();
	void set_has_effectindex();
	void clear_has_effectindex();
	void set_has_damagetype();
	void clear_has_damagetype();
	void set_has_material();
	void clear_has_material();
	void set_has_hitbox();
	void clear_has_hitbox();
	void set_has_color();
	void clear_has_color();
	void set_has_flags();
	void clear_has_flags();
	void set_has_attachmentindex();
	void clear_has_attachmentindex();
	void set_has_effectname();
	void clear_has_effectname();
	void set_has_attachmentname();
	void clear_has_attachmentname();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:1761
class CMsgTEEffectDispatch : public Message {
public:

	static const int kEffectdataFieldNumber = 1;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14

	static CMsgTEEffectDispatch * default_instance_;
	CMsgTEEffectDispatch();
	virtual ~CMsgTEEffectDispatch();
	CMsgTEEffectDispatch(const CMsgTEEffectDispatch &);
	CMsgTEEffectDispatch & operator=(const CMsgTEEffectDispatch &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEEffectDispatch & default_instance();
	void Swap(CMsgTEEffectDispatch *);
	virtual CMsgTEEffectDispatch * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEEffectDispatch &);
	void MergeFrom(const CMsgTEEffectDispatch &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_effectdata();
	void clear_effectdata();
	const CMsgEffectData & effectdata();
	CMsgEffectData * mutable_effectdata();
	CMsgEffectData * release_effectdata();
	void set_allocated_effectdata(CMsgEffectData *);
	void set_has_effectdata();
	void clear_has_effectdata();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:1842
class CMsgTEEnergySplash : public Message {
public:

	static const int kPosFieldNumber = 1;
	static const int kDirFieldNumber = 2;
	static const int kExplosiveFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	bool explosive_;  // +0x28

	static CMsgTEEnergySplash * default_instance_;
	CMsgTEEnergySplash();
	virtual ~CMsgTEEnergySplash();
	CMsgTEEnergySplash(const CMsgTEEnergySplash &);
	CMsgTEEnergySplash & operator=(const CMsgTEEnergySplash &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEEnergySplash & default_instance();
	void Swap(CMsgTEEnergySplash *);
	virtual CMsgTEEnergySplash * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEEnergySplash &);
	void MergeFrom(const CMsgTEEnergySplash &);
	virtual void Clear();
	virtual bool IsInitialized();
	virtual int ByteSize();
	virtual bool MergePartialFromCodedStream(CodedInputStream *);
	virtual void SerializeWithCachedSizes(CodedOutputStream *);
	virtual uint8 * SerializeWithCachedSizesToArray(uint8 *);
	virtual int GetCachedSize();
	void SharedCtor();
	void SharedDtor();
	virtual void SetCachedSize(int);
	virtual Metadata GetMetadata();
	bool has_pos();
	void clear_pos();
	const CMsgVector & pos();
	CMsgVector * mutable_pos();
	CMsgVector * release_pos();
	void set_allocated_pos(CMsgVector *);
	bool has_dir();
	void clear_dir();
	const CMsgVector & dir();
	CMsgVector * mutable_dir();
	CMsgVector * release_dir();
	void set_allocated_dir(CMsgVector *);
	bool has_explosive();
	void clear_explosive();
	bool explosive();
	void set_explosive(bool);
	void set_has_pos();
	void clear_has_pos();
	void set_has_dir();
	void clear_has_dir();
	void set_has_explosive();
	void clear_has_explosive();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:1945
class CMsgTEFizz : public Message {
public:

	static const int kEntityFieldNumber = 1;
	static const int kDensityFieldNumber = 2;
	static const int kCurrentFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 entity_;  // +0x18
	uint32 density_;  // +0x1c
	int32 current_;  // +0x20

	static CMsgTEFizz * default_instance_;
	CMsgTEFizz();
	virtual ~CMsgTEFizz();
	CMsgTEFizz(const CMsgTEFizz &);
	CMsgTEFizz & operator=(const CMsgTEFizz &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEFizz & default_instance();
	void Swap(CMsgTEFizz *);
	virtual CMsgTEFizz * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEFizz &);
	void MergeFrom(const CMsgTEFizz &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	uint32 entity();
	void set_entity(uint32);
	bool has_density();
	void clear_density();
	uint32 density();
	void set_density(uint32);
	bool has_current();
	void clear_current();
	int32 current();
	void set_current(int32);
	void set_has_entity();
	void clear_has_entity();
	void set_has_density();
	void clear_has_density();
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:2044
class CMsgTEShatterSurface : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kAnglesFieldNumber = 2;
	static const int kForceFieldNumber = 3;
	static const int kForceposFieldNumber = 4;
	static const int kWidthFieldNumber = 5;
	static const int kHeightFieldNumber = 6;
	static const int kShardsizeFieldNumber = 7;
	static const int kSurfacetypeFieldNumber = 8;
	static const int kFrontcolorFieldNumber = 9;
	static const int kBackcolorFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float width_;  // +0x38
	float height_;  // +0x3c
	float shardsize_;  // +0x40
	uint32 surfacetype_;  // +0x44
	uint32 frontcolor_;  // +0x48
	uint32 backcolor_;  // +0x4c

	static CMsgTEShatterSurface * default_instance_;
	CMsgTEShatterSurface();
	virtual ~CMsgTEShatterSurface();
	CMsgTEShatterSurface(const CMsgTEShatterSurface &);
	CMsgTEShatterSurface & operator=(const CMsgTEShatterSurface &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEShatterSurface & default_instance();
	void Swap(CMsgTEShatterSurface *);
	virtual CMsgTEShatterSurface * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEShatterSurface &);
	void MergeFrom(const CMsgTEShatterSurface &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_angles();
	void clear_angles();
	const CMsgQAngle & angles();
	CMsgQAngle * mutable_angles();
	CMsgQAngle * release_angles();
	void set_allocated_angles(CMsgQAngle *);
	bool has_force();
	void clear_force();
	const CMsgVector & force();
	CMsgVector * mutable_force();
	CMsgVector * release_force();
	void set_allocated_force(CMsgVector *);
	bool has_forcepos();
	void clear_forcepos();
	const CMsgVector & forcepos();
	CMsgVector * mutable_forcepos();
	CMsgVector * release_forcepos();
	void set_allocated_forcepos(CMsgVector *);
	bool has_width();
	void clear_width();
	float width();
	void set_width(float);
	bool has_height();
	void clear_height();
	float height();
	void set_height(float);
	bool has_shardsize();
	void clear_shardsize();
	float shardsize();
	void set_shardsize(float);
	bool has_surfacetype();
	void clear_surfacetype();
	uint32 surfacetype();
	void set_surfacetype(uint32);
	bool has_frontcolor();
	void clear_frontcolor();
	uint32 frontcolor();
	void set_frontcolor(uint32);
	bool has_backcolor();
	void clear_backcolor();
	uint32 backcolor();
	void set_backcolor(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_angles();
	void clear_has_angles();
	void set_has_force();
	void clear_has_force();
	void set_has_forcepos();
	void clear_has_forcepos();
	void set_has_width();
	void clear_has_width();
	void set_has_height();
	void clear_has_height();
	void set_has_shardsize();
	void clear_has_shardsize();
	void set_has_surfacetype();
	void clear_has_surfacetype();
	void set_has_frontcolor();
	void clear_has_frontcolor();
	void set_has_backcolor();
	void clear_has_backcolor();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:2221
class CMsgTEGlowSprite : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kScaleFieldNumber = 2;
	static const int kLifeFieldNumber = 3;
	static const int kBrightnessFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float scale_;  // +0x20
	float life_;  // +0x24
	uint32 brightness_;  // +0x28

	static CMsgTEGlowSprite * default_instance_;
	CMsgTEGlowSprite();
	virtual ~CMsgTEGlowSprite();
	CMsgTEGlowSprite(const CMsgTEGlowSprite &);
	CMsgTEGlowSprite & operator=(const CMsgTEGlowSprite &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEGlowSprite & default_instance();
	void Swap(CMsgTEGlowSprite *);
	virtual CMsgTEGlowSprite * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEGlowSprite &);
	void MergeFrom(const CMsgTEGlowSprite &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_scale();
	void clear_scale();
	float scale();
	void set_scale(float);
	bool has_life();
	void clear_life();
	float life();
	void set_life(float);
	bool has_brightness();
	void clear_brightness();
	uint32 brightness();
	void set_brightness(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_scale();
	void clear_has_scale();
	void set_has_life();
	void clear_has_life();
	void set_has_brightness();
	void clear_has_brightness();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:2332
class CMsgTEImpact : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kNormalFieldNumber = 2;
	static const int kTypeFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 type_;  // +0x28

	static CMsgTEImpact * default_instance_;
	CMsgTEImpact();
	virtual ~CMsgTEImpact();
	CMsgTEImpact(const CMsgTEImpact &);
	CMsgTEImpact & operator=(const CMsgTEImpact &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEImpact & default_instance();
	void Swap(CMsgTEImpact *);
	virtual CMsgTEImpact * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEImpact &);
	void MergeFrom(const CMsgTEImpact &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_normal();
	void clear_normal();
	const CMsgVector & normal();
	CMsgVector * mutable_normal();
	CMsgVector * release_normal();
	void set_allocated_normal(CMsgVector *);
	bool has_type();
	void clear_type();
	uint32 type();
	void set_type(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_normal();
	void clear_has_normal();
	void set_has_type();
	void clear_has_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:2435
class CMsgTEMuzzleFlash : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kAnglesFieldNumber = 2;
	static const int kScaleFieldNumber = 3;
	static const int kTypeFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float scale_;  // +0x28
	uint32 type_;  // +0x2c

	static CMsgTEMuzzleFlash * default_instance_;
	CMsgTEMuzzleFlash();
	virtual ~CMsgTEMuzzleFlash();
	CMsgTEMuzzleFlash(const CMsgTEMuzzleFlash &);
	CMsgTEMuzzleFlash & operator=(const CMsgTEMuzzleFlash &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEMuzzleFlash & default_instance();
	void Swap(CMsgTEMuzzleFlash *);
	virtual CMsgTEMuzzleFlash * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEMuzzleFlash &);
	void MergeFrom(const CMsgTEMuzzleFlash &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_angles();
	void clear_angles();
	const CMsgQAngle & angles();
	CMsgQAngle * mutable_angles();
	CMsgQAngle * release_angles();
	void set_allocated_angles(CMsgQAngle *);
	bool has_scale();
	void clear_scale();
	float scale();
	void set_scale(float);
	bool has_type();
	void clear_type();
	uint32 type();
	void set_type(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_angles();
	void clear_has_angles();
	void set_has_scale();
	void clear_has_scale();
	void set_has_type();
	void clear_has_type();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:2548
class CMsgTEBloodStream : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kDirectionFieldNumber = 2;
	static const int kColorFieldNumber = 3;
	static const int kAmountFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 color_;  // +0x28
	uint32 amount_;  // +0x2c

	static CMsgTEBloodStream * default_instance_;
	CMsgTEBloodStream();
	virtual ~CMsgTEBloodStream();
	CMsgTEBloodStream(const CMsgTEBloodStream &);
	CMsgTEBloodStream & operator=(const CMsgTEBloodStream &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEBloodStream & default_instance();
	void Swap(CMsgTEBloodStream *);
	virtual CMsgTEBloodStream * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEBloodStream &);
	void MergeFrom(const CMsgTEBloodStream &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_direction();
	void clear_direction();
	const CMsgVector & direction();
	CMsgVector * mutable_direction();
	CMsgVector * release_direction();
	void set_allocated_direction(CMsgVector *);
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_amount();
	void clear_amount();
	uint32 amount();
	void set_amount(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_direction();
	void clear_has_direction();
	void set_has_color();
	void clear_has_color();
	void set_has_amount();
	void clear_has_amount();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:2661
class CMsgTEExplosion : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kFramerateFieldNumber = 2;
	static const int kFlagsFieldNumber = 3;
	static const int kNormalFieldNumber = 4;
	static const int kMaterialtypeFieldNumber = 5;
	static const int kRadiusFieldNumber = 6;
	static const int kMagnitudeFieldNumber = 7;
	static const int kScaleFieldNumber = 8;
	static const int kAffectRagdollsFieldNumber = 9;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 framerate_;  // +0x20
	uint32 flags_;  // +0x24
	uint32 materialtype_;  // +0x30
	uint32 radius_;  // +0x34
	uint32 magnitude_;  // +0x38
	float scale_;  // +0x3c
	bool affect_ragdolls_;  // +0x40

	static CMsgTEExplosion * default_instance_;
	CMsgTEExplosion();
	virtual ~CMsgTEExplosion();
	CMsgTEExplosion(const CMsgTEExplosion &);
	CMsgTEExplosion & operator=(const CMsgTEExplosion &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEExplosion & default_instance();
	void Swap(CMsgTEExplosion *);
	virtual CMsgTEExplosion * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEExplosion &);
	void MergeFrom(const CMsgTEExplosion &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_framerate();
	void clear_framerate();
	uint32 framerate();
	void set_framerate(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_normal();
	void clear_normal();
	const CMsgVector & normal();
	CMsgVector * mutable_normal();
	CMsgVector * release_normal();
	void set_allocated_normal(CMsgVector *);
	bool has_materialtype();
	void clear_materialtype();
	uint32 materialtype();
	void set_materialtype(uint32);
	bool has_radius();
	void clear_radius();
	uint32 radius();
	void set_radius(uint32);
	bool has_magnitude();
	void clear_magnitude();
	uint32 magnitude();
	void set_magnitude(uint32);
	bool has_scale();
	void clear_scale();
	float scale();
	void set_scale(float);
	bool has_affect_ragdolls();
	void clear_affect_ragdolls();
	bool affect_ragdolls();
	void set_affect_ragdolls(bool);
	void set_has_origin();
	void clear_has_origin();
	void set_has_framerate();
	void clear_has_framerate();
	void set_has_flags();
	void clear_has_flags();
	void set_has_normal();
	void clear_has_normal();
	void set_has_materialtype();
	void clear_has_materialtype();
	void set_has_radius();
	void clear_has_radius();
	void set_has_magnitude();
	void clear_has_magnitude();
	void set_has_scale();
	void clear_has_scale();
	void set_has_affect_ragdolls();
	void clear_has_affect_ragdolls();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:2824
class CMsgTEDust : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kSizeFieldNumber = 2;
	static const int kSpeedFieldNumber = 3;
	static const int kDirectionFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float size_;  // +0x20
	float speed_;  // +0x24

	static CMsgTEDust * default_instance_;
	CMsgTEDust();
	virtual ~CMsgTEDust();
	CMsgTEDust(const CMsgTEDust &);
	CMsgTEDust & operator=(const CMsgTEDust &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEDust & default_instance();
	void Swap(CMsgTEDust *);
	virtual CMsgTEDust * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEDust &);
	void MergeFrom(const CMsgTEDust &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_size();
	void clear_size();
	float size();
	void set_size(float);
	bool has_speed();
	void clear_speed();
	float speed();
	void set_speed(float);
	bool has_direction();
	void clear_direction();
	const CMsgVector & direction();
	CMsgVector * mutable_direction();
	CMsgVector * release_direction();
	void set_allocated_direction(CMsgVector *);
	void set_has_origin();
	void clear_has_origin();
	void set_has_size();
	void clear_has_size();
	void set_has_speed();
	void clear_has_speed();
	void set_has_direction();
	void clear_has_direction();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:2937
class CMsgTELargeFunnel : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kReversedFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 reversed_;  // +0x20

	static CMsgTELargeFunnel * default_instance_;
	CMsgTELargeFunnel();
	virtual ~CMsgTELargeFunnel();
	CMsgTELargeFunnel(const CMsgTELargeFunnel &);
	CMsgTELargeFunnel & operator=(const CMsgTELargeFunnel &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTELargeFunnel & default_instance();
	void Swap(CMsgTELargeFunnel *);
	virtual CMsgTELargeFunnel * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTELargeFunnel &);
	void MergeFrom(const CMsgTELargeFunnel &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_reversed();
	void clear_reversed();
	uint32 reversed();
	void set_reversed(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_reversed();
	void clear_has_reversed();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:3028
class CMsgTESparks : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kMagnitudeFieldNumber = 2;
	static const int kLengthFieldNumber = 3;
	static const int kDirectionFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 magnitude_;  // +0x20
	uint32 length_;  // +0x24

	static CMsgTESparks * default_instance_;
	CMsgTESparks();
	virtual ~CMsgTESparks();
	CMsgTESparks(const CMsgTESparks &);
	CMsgTESparks & operator=(const CMsgTESparks &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTESparks & default_instance();
	void Swap(CMsgTESparks *);
	virtual CMsgTESparks * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTESparks &);
	void MergeFrom(const CMsgTESparks &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_magnitude();
	void clear_magnitude();
	uint32 magnitude();
	void set_magnitude(uint32);
	bool has_length();
	void clear_length();
	uint32 length();
	void set_length(uint32);
	bool has_direction();
	void clear_direction();
	const CMsgVector & direction();
	CMsgVector * mutable_direction();
	CMsgVector * release_direction();
	void set_allocated_direction(CMsgVector *);
	void set_has_origin();
	void clear_has_origin();
	void set_has_magnitude();
	void clear_has_magnitude();
	void set_has_length();
	void clear_has_length();
	void set_has_direction();
	void clear_has_direction();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:3141
class CMsgTEPhysicsProp : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kVelocityFieldNumber = 2;
	static const int kAnglesFieldNumber = 3;
	static const int kSkinFieldNumber = 4;
	static const int kFlagsFieldNumber = 5;
	static const int kEffectsFieldNumber = 6;
	static const int kColorFieldNumber = 7;
	static const int kModelindexFieldNumber = 8;
	static const int kBreakmodelsnottomakeFieldNumber = 9;
	static const int kScaleFieldNumber = 10;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 skin_;  // +0x30
	uint32 flags_;  // +0x34
	uint32 effects_;  // +0x38
	uint32 color_;  // +0x3c
	uint64 modelindex_;  // +0x40
	uint32 breakmodelsnottomake_;  // +0x48
	float scale_;  // +0x4c

	static CMsgTEPhysicsProp * default_instance_;
	CMsgTEPhysicsProp();
	virtual ~CMsgTEPhysicsProp();
	CMsgTEPhysicsProp(const CMsgTEPhysicsProp &);
	CMsgTEPhysicsProp & operator=(const CMsgTEPhysicsProp &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEPhysicsProp & default_instance();
	void Swap(CMsgTEPhysicsProp *);
	virtual CMsgTEPhysicsProp * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEPhysicsProp &);
	void MergeFrom(const CMsgTEPhysicsProp &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	const CMsgVector & velocity();
	CMsgVector * mutable_velocity();
	CMsgVector * release_velocity();
	void set_allocated_velocity(CMsgVector *);
	bool has_angles();
	void clear_angles();
	const CMsgQAngle & angles();
	CMsgQAngle * mutable_angles();
	CMsgQAngle * release_angles();
	void set_allocated_angles(CMsgQAngle *);
	bool has_skin();
	void clear_skin();
	uint32 skin();
	void set_skin(uint32);
	bool has_flags();
	void clear_flags();
	uint32 flags();
	void set_flags(uint32);
	bool has_effects();
	void clear_effects();
	uint32 effects();
	void set_effects(uint32);
	bool has_color();
	void clear_color();
	uint32 color();
	void set_color(uint32);
	bool has_modelindex();
	void clear_modelindex();
	uint64 modelindex();
	void set_modelindex(uint64);
	bool has_breakmodelsnottomake();
	void clear_breakmodelsnottomake();
	uint32 breakmodelsnottomake();
	void set_breakmodelsnottomake(uint32);
	bool has_scale();
	void clear_scale();
	float scale();
	void set_scale(float);
	void set_has_origin();
	void clear_has_origin();
	void set_has_velocity();
	void clear_has_velocity();
	void set_has_angles();
	void clear_has_angles();
	void set_has_skin();
	void clear_has_skin();
	void set_has_flags();
	void clear_has_flags();
	void set_has_effects();
	void clear_has_effects();
	void set_has_color();
	void clear_has_color();
	void set_has_modelindex();
	void clear_has_modelindex();
	void set_has_breakmodelsnottomake();
	void clear_has_breakmodelsnottomake();
	void set_has_scale();
	void clear_has_scale();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:3316
class CMsgTEPlayerDecal : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kPlayerFieldNumber = 2;
	static const int kEntityFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 player_;  // +0x20
	uint32 entity_;  // +0x24

	static CMsgTEPlayerDecal * default_instance_;
	CMsgTEPlayerDecal();
	virtual ~CMsgTEPlayerDecal();
	CMsgTEPlayerDecal(const CMsgTEPlayerDecal &);
	CMsgTEPlayerDecal & operator=(const CMsgTEPlayerDecal &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEPlayerDecal & default_instance();
	void Swap(CMsgTEPlayerDecal *);
	virtual CMsgTEPlayerDecal * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEPlayerDecal &);
	void MergeFrom(const CMsgTEPlayerDecal &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_player();
	void clear_player();
	uint32 player();
	void set_player(uint32);
	bool has_entity();
	void clear_entity();
	uint32 entity();
	void set_entity(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_player();
	void clear_has_player();
	void set_has_entity();
	void clear_has_entity();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:3417
class CMsgTEProjectedDecal : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kAnglesFieldNumber = 2;
	static const int kIndexFieldNumber = 3;
	static const int kDistanceFieldNumber = 4;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 index_;  // +0x28
	float distance_;  // +0x2c

	static CMsgTEProjectedDecal * default_instance_;
	CMsgTEProjectedDecal();
	virtual ~CMsgTEProjectedDecal();
	CMsgTEProjectedDecal(const CMsgTEProjectedDecal &);
	CMsgTEProjectedDecal & operator=(const CMsgTEProjectedDecal &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEProjectedDecal & default_instance();
	void Swap(CMsgTEProjectedDecal *);
	virtual CMsgTEProjectedDecal * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEProjectedDecal &);
	void MergeFrom(const CMsgTEProjectedDecal &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_angles();
	void clear_angles();
	const CMsgQAngle & angles();
	CMsgQAngle * mutable_angles();
	CMsgQAngle * release_angles();
	void set_allocated_angles(CMsgQAngle *);
	bool has_index();
	void clear_index();
	uint32 index();
	void set_index(uint32);
	bool has_distance();
	void clear_distance();
	float distance();
	void set_distance(float);
	void set_has_origin();
	void clear_has_origin();
	void set_has_angles();
	void clear_has_angles();
	void set_has_index();
	void clear_has_index();
	void set_has_distance();
	void clear_has_distance();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:3530
class CMsgTESmoke : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kScaleFieldNumber = 2;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	float scale_;  // +0x20

	static CMsgTESmoke * default_instance_;
	CMsgTESmoke();
	virtual ~CMsgTESmoke();
	CMsgTESmoke(const CMsgTESmoke &);
	CMsgTESmoke & operator=(const CMsgTESmoke &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTESmoke & default_instance();
	void Swap(CMsgTESmoke *);
	virtual CMsgTESmoke * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTESmoke &);
	void MergeFrom(const CMsgTESmoke &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_scale();
	void clear_scale();
	float scale();
	void set_scale(float);
	void set_has_origin();
	void clear_has_origin();
	void set_has_scale();
	void clear_has_scale();
	void InitAsDefaultInstance();

	// vtable[3] New
	// vtable[13] CopyFrom
	// vtable[14] MergeFrom
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

// src/game/server/generated_protodota/linuxsteamrt64/te.pb.h:3621
class CMsgTEWorldDecal : public Message {
public:

	static const int kOriginFieldNumber = 1;
	static const int kNormalFieldNumber = 2;
	static const int kIndexFieldNumber = 3;
private:

	unsigned int _has_bits_[1];  // +0x10
	int _cached_size_;  // +0x14
	uint32 index_;  // +0x28

	static CMsgTEWorldDecal * default_instance_;
	CMsgTEWorldDecal();
	virtual ~CMsgTEWorldDecal();
	CMsgTEWorldDecal(const CMsgTEWorldDecal &);
	CMsgTEWorldDecal & operator=(const CMsgTEWorldDecal &);
	const UnknownFieldSet & unknown_fields();
	UnknownFieldSet * mutable_unknown_fields();
	const Descriptor * descriptor();
	const CMsgTEWorldDecal & default_instance();
	void Swap(CMsgTEWorldDecal *);
	virtual CMsgTEWorldDecal * New();
	virtual void CopyFrom(const Message &);
	virtual void MergeFrom(const Message &);
	void CopyFrom(const CMsgTEWorldDecal &);
	void MergeFrom(const CMsgTEWorldDecal &);
	virtual void Clear();
	virtual bool IsInitialized();
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
	bool has_normal();
	void clear_normal();
	const CMsgVector & normal();
	CMsgVector * mutable_normal();
	CMsgVector * release_normal();
	void set_allocated_normal(CMsgVector *);
	bool has_index();
	void clear_index();
	uint32 index();
	void set_index(uint32);
	void set_has_origin();
	void clear_has_origin();
	void set_has_normal();
	void clear_has_normal();
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
