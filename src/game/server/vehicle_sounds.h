// Reconstructed from DWARF by pahole; not original source.

// src/game/server/vehicle_sounds.h:43
struct vehicle_gear_t {
	int ()() * * _vptr.vehicle_gear_t;  // +0x0
private:

	static datamap_t m_DataMap;

	float flMinSpeed;  // +0x8
	float flMaxSpeed;  // +0xc
	float flSpeedApproachFactor;  // +0x10
	vehicle_gear_t & operator=(vehicle_gear_t &);
	vehicle_gear_t & operator=(const vehicle_gear_t &);
	~vehicle_gear_t();
	vehicle_gear_t(vehicle_gear_t &);
	vehicle_gear_t(const vehicle_gear_t &);
	vehicle_gear_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 24
};

// src/game/server/vehicle_sounds.h:53
struct vehicle_crashsound_t {
	int ()() * * _vptr.vehicle_crashsound_t;  // +0x0
private:

	static datamap_t m_DataMap;

	float flMinSpeed;  // +0x8
	float flMinDeltaSpeed;  // +0xc
	int gearLimit;  // +0x10

	string_t iszCrashSound;  // +0x18
	vehicle_crashsound_t & operator=(vehicle_crashsound_t &);
	vehicle_crashsound_t & operator=(const vehicle_crashsound_t &);
	~vehicle_crashsound_t();
	vehicle_crashsound_t(vehicle_crashsound_t &);
	vehicle_crashsound_t(const vehicle_crashsound_t &);
	vehicle_crashsound_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 32
};

// src/game/server/vehicle_sounds.h:95
struct vehiclesounds_t {
	int ()() * * _vptr.vehiclesounds_t;  // +0x0
private:

	static datamap_t m_DataMap;

	float minStateTime[20];  // +0x120
	vehiclesounds_t & operator=(vehiclesounds_t &);
	vehiclesounds_t & operator=(const vehiclesounds_t &);
	~vehiclesounds_t();
	vehiclesounds_t(vehiclesounds_t &);
	vehiclesounds_t(const vehiclesounds_t &);
	vehiclesounds_t();

	void Init();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 368
};

// src/game/server/vehicle_sounds.h:127
class CVehicleSoundsParser : public IVPhysicsKeyHandler {
public:

private:

	int m_iCurrentGear;  // +0x8
	int m_iCurrentState;  // +0xc
	int m_iCurrentCrashSound;  // +0x10
	CVehicleSoundsParser(CVehicleSoundsParser &);
	CVehicleSoundsParser(const CVehicleSoundsParser &);
	CVehicleSoundsParser();
	virtual void ParseKeyValue(void *, const char *, const char *);
	virtual void SetDefaults(void *);

	// vtable[0] ParseKeyValue
	// vtable[1] SetDefaults
	// sizeof = 24
};
