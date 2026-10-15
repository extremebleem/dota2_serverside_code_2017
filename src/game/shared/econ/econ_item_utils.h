// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_utils.h:28
class CEconItemUtils {
	int ()() * * _vptr.CEconItemUtils;  // +0x0
	CEconItemUtils(const CEconItemUtils &);
	CEconItemUtils();
	~CEconItemUtils();
	virtual bool IsGemTypeValidForSocketType(ESocketType, ESocketType);
	virtual GemInSocketResult_t CanGemBePlacedInSocketType(IEconItemInterface *, ESocketType, IEconItemInterface *);
	virtual GemInSocketResult_t CanGemBePlacedInSocket(IEconItemInterface *, const IItemSocket *, IEconItemInterface *);
	GemInSocketResult_t CanGemBePlacedInSocket(IEconItemInterface *, attrib_definition_index_t, IEconItemInterface *);

	// vtable[0] IsGemTypeValidForSocketType
	// vtable[1] CanGemBePlacedInSocketType
	// vtable[2] CanGemBePlacedInSocket
	// sizeof = 8
};
