// Reconstructed from DWARF by pahole; not original source.

// src/public/soundsystem/isoundopsystemedit.h:93
struct SosEditItemInfo_t {
private:

	SosEditItemInfo_t();
	~SosEditItemInfo_t();
	void KeyValueToString();
	CUtlBuffer * Serialize();
	SosEditItemInfo_t * Unserialize(CUtlBuffer *);
	void StringToKeyValue();
	SosEditItemInfo_t & operator=(const SosEditItemInfo_t &);

	// sizeof = 48
};

// src/public/soundsystem/isoundopsystemedit.h:169
struct SelectedEditItemInfo_t {
private:

	SelectedEditItemInfo_t();

	CUtlBuffer * Serialize();
	SelectedEditItemInfo_t * Unserialize(CUtlBuffer *);
	~SelectedEditItemInfo_t();
	SelectedEditItemInfo_t & operator=(const SelectedEditItemInfo_t &);

	// sizeof = 24
};
