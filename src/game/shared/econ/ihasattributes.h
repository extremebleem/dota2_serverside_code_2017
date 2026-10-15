// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/ihasattributes.h:34
class IHasAttributes {
	int ()() * * _vptr.IHasAttributes;  // +0x0
private:

	IHasAttributes(IHasAttributes &);
	IHasAttributes(const IHasAttributes &);
	~IHasAttributes();
	IHasAttributes();

	virtual CAttributeManager * GetAttributeManager();
	virtual CAttributeContainer * GetAttributeContainer();
	virtual CBaseEntity * GetAttributeOwner();
	virtual CAttributeList * GetAttributeList();
	virtual void ReapplyProvision();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] GetAttributeManager
	// vtable[2] GetAttributeContainer
	// vtable[3] GetAttributeOwner
	// vtable[4] GetAttributeList
	// vtable[5] ReapplyProvision
	// sizeof = 8
};
