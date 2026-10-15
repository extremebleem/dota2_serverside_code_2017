// Reconstructed from DWARF by pahole; not original source.

// src/public/ordered_constructor.h:135
struct OrderedDependency_t {
	void (*m_pFN_Release)(COrderedConstructor_DependencyManagement<void> *);  // +0x8
	OrderedDependency_t();
	void CallReleaseFunc();

	// sizeof = 24
};
