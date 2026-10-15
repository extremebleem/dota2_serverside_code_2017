// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_utils.h:16
class CDOTAItemUtils : public CEconItemUtils {
public:

	CDOTAItemUtils(CDOTAItemUtils &);
	CDOTAItemUtils(const CDOTAItemUtils &);
	CDOTAItemUtils();
	virtual bool IsGemTypeValidForSocketType(ESocketType, ESocketType);
	virtual GemInSocketResult_t CanGemBePlacedInSocketType(IEconItemInterface *, ESocketType, IEconItemInterface *);
	virtual GemInSocketResult_t CanGemBePlacedInSocket(IEconItemInterface *, const IItemSocket *, IEconItemInterface *);
	~CDOTAItemUtils();

	// vtable[0] IsGemTypeValidForSocketType
	// vtable[1] CanGemBePlacedInSocketType
	// vtable[2] CanGemBePlacedInSocket
	// sizeof = 8
};
