// Reconstructed from DWARF by pahole; not original source.

// src/responserules/runtime/rrlib1to2.cpp:30
struct RAIIStaging<Crr2LibPort> : public CPlainAutoPtr<Crr2LibPort> {
public:

	RAIIStaging(Crr2LibPort *);
	Crr2LibPort * Detach();
	Crr2LibPort * Ok();
	Crr2LibPort * Fail();
	~RAIIStaging();

	// sizeof = 8
};
