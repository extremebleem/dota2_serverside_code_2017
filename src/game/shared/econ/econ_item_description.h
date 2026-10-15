// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_description.h:41
struct econ_item_description_line_t {
	uint32 unMetaType;  // +0x4
	econ_item_description_line_t();
	~econ_item_description_line_t();

	// sizeof = 24
};

// src/game/shared/econ/econ_item_description.h:49
class IEconItemDescription {
	int ()() * * _vptr.IEconItemDescription;  // +0x0
protected:

	void YieldingFillOutEconItemDescription(CLocalizationProvider *, const IEconItemInterface *);
	IEconItemDescription();
	virtual ~IEconItemDescription();
	uint32 GetLineCount();
	const econ_item_description_line_t & GetLine(int);
	const econ_item_description_line_t * GetFirstLineWithMetaType(uint32);

private:

	virtual void YieldingCacheDescriptionData(CLocalizationProvider *, const IEconItemInterface *);
	virtual void GenerateDescriptionLines(CLocalizationProvider *, const IEconItemInterface *);

	// vtable[2] YieldingCacheDescriptionData
	// vtable[3] GenerateDescriptionLines
	// sizeof = 32
};
