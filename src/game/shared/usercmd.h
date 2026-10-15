// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/usercmd.h:31
class CUserCmd {
	int ()() * * _vptr.CUserCmd;  // +0x0
	int command_number;  // +0x8
	int tick_count;  // +0xc
	float forwardmove;  // +0x1c
	float sidemove;  // +0x20
	float upmove;  // +0x24
	ButtonBitMask_t buttons;  // +0x28
	uint8 impulse;  // +0x30

	int weaponselect;  // +0x34
	int weaponsubtype;  // +0x38
	int random_seed;  // +0x3c
	short int mousedx;  // +0x40
	short int mousedy;  // +0x42
	bool hasbeenpredicted;  // +0x44

	short int cameraposition[2];  // +0x46
	uint8 clickbehavior;  // +0x4a
	uint8 statspanel;  // +0x4b
	uint8 shoppanel;  // +0x4c
	uint8 stats_dropdown;  // +0x4d
	uint8 stats_dropdown_sort;  // +0x4e

	uint8 hmd_active;  // +0x5c
	uint8 hmd_targeting_mode;  // +0x5d
	bool hmd_controllers_active[4];  // +0x5e

	CUserCmd();
	virtual ~CUserCmd();
	void Reset();
	CUserCmd & operator=(const CUserCmd &);
	CUserCmd(const CUserCmd &);
	CRC32_t GetChecksum();

	// sizeof = 544
};
