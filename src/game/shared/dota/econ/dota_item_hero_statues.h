// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_hero_statues.h:36
class CAttribute_HeroStatue {
	CAttribute_HeroStatue();
	~CAttribute_HeroStatue();
	void ParseFromString(const string &);
	void ConvertToString(string *);
	void ParseFromByteStream(const string &);
	void ConvertToByteStream(string *);

private:

	CAttribute_HeroStatue(const CAttribute_HeroStatue &);
	CAttribute_HeroStatue & operator=(const CAttribute_HeroStatue &);

	// sizeof = 88
};
