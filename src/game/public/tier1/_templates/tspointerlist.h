// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/tspointerlist.h:23
class CTSPointerList<CRenderAttributesDoubleBuffered> : public CTSListBase {
public:

	CTSPointerList();
	~CTSPointerList();
	void Purge();
	void PushItem(CRenderAttributesDoubleBuffered * const &);
	bool PopItem(CRenderAttributesDoubleBuffered * *);

	// sizeof = 16
};
