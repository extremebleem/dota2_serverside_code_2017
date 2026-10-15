// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/baseflex_shared.h:10
struct FS_LocalToGlobal_t {
private:

	FS_LocalToGlobal_t();
	FS_LocalToGlobal_t(const FS_LocalToGlobal_t &);
	void SetCount(int);
	int Count();
	LocalFlexController_t Get(int);
	void SetMapping(int, LocalFlexController_t);
	~FS_LocalToGlobal_t();
	FS_LocalToGlobal_t & operator=(const FS_LocalToGlobal_t &);

	// sizeof = 24
};

// src/game/shared/baseflex_shared.h:53
class FlexSettingMap_t : public CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int, bool (*)(const flexsettinghdr_t* const&, const flexsettinghdr_t* const&)> {
public:

	FlexSettingMap_t();
	~FlexSettingMap_t();

	// sizeof = 40
};
