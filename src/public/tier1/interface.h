// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/interface.h:41
class IBaseInterface {
	int ()() * * _vptr.IBaseInterface;  // +0x0
	IBaseInterface();
	virtual ~IBaseInterface();

	// sizeof = 8
};

// src/public/tier1/interface.h:48
class InterfaceReg {
	InstantiateInterfaceFn m_CreateFn;  // +0x0
	const char * m_pName;  // +0x8
	InterfaceReg(InstantiateInterfaceFn, const char *);

	// sizeof = 24
};
