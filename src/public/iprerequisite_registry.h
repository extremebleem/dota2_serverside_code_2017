// Reconstructed from DWARF by pahole; not original source.

// src/public/iprerequisite_registry.h:13
class IPrerequisiteRegistry {
	int ()() * * _vptr.IPrerequisiteRegistry;  // +0x0
	~IPrerequisiteRegistry();
	IPrerequisiteRegistry(IPrerequisiteRegistry &);
	IPrerequisiteRegistry(const IPrerequisiteRegistry &);
	IPrerequisiteRegistry();
	virtual void AddPrerequisite(IPrerequisite *);
	virtual void RemovePrerequisite(IPrerequisite *);

	// vtable[0] AddPrerequisite
	// vtable[1] RemovePrerequisite
	// sizeof = 8
};
