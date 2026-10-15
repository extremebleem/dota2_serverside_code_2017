// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/tokenset.h:33
struct tokenset_t<animopsource_t> {
	const char * name;  // +0x0
	animopsource_t GetToken(const char *);
	animopsource_t GetTokenI(const char *);
	const char * GetNameByToken(animopsource_t);
	const char * GetNameByToken(animopsource_t, const char *);

	// sizeof = 16
};

// src/public/tier1/tokenset.h:33
struct tokenset_t<InterpolatedVarPhase_t> {
	const char * name;  // +0x0
	InterpolatedVarPhase_t GetToken(const char *);
	InterpolatedVarPhase_t GetTokenI(const char *);
	const char * GetNameByToken(InterpolatedVarPhase_t);
	const char * GetNameByToken(InterpolatedVarPhase_t, const char *);

	// sizeof = 16
};

// src/public/tier1/tokenset.h:33
struct tokenset_t<WeaponSound_t> {
	const char * name;  // +0x0
	WeaponSound_t GetToken(const char *);
	WeaponSound_t GetTokenI(const char *);
	const char * GetNameByToken(WeaponSound_t);
	const char * GetNameByToken(WeaponSound_t, const char *);

	// sizeof = 16
};

// tokenset_t: 8 more instantiations (full list in INDEX.tsv)
//   tokenset_t<PacketFlow_t>
//   tokenset_t<SignonState_t>
//   tokenset_t<InterpolatorType_t>
//   tokenset_t<SetSequenceBehavior_t>
//   tokenset_t<fieldtype_t>
//   tokenset_t<int>
//   tokenset_t<soundlevel_t>
//   tokenset_t<float>
