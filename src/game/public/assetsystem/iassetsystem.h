// Reconstructed from DWARF by pahole; not original source.

// src/game/public/assetsystem/iassetsystem.h:502
class IWorkingSet {
	int ()() * * _vptr.IWorkingSet;  // +0x0
	IWorkingSet(const IWorkingSet &);
	IWorkingSet();
	virtual ~IWorkingSet();
	virtual bool IsEditable();
	virtual bool GloballyVisible();
	virtual const char * GetFriendlyName();
	virtual bool SetFriendlyName(const CUtlString &);
	virtual int AssetCount(bool);
	virtual bool ContainsAsset(IAsset *, bool);
	virtual bool AddAsset(IAsset *);
	virtual bool RemoveAsset(IAsset *);
	virtual void GetAllAssets(CUtlVector<IAsset*, CUtlMemory<IAsset*, int> > *, bool);
	virtual bool LoadFromKeyValues(KeyValues *);
	virtual bool SaveToKeyValues(KeyValues *);
	virtual bool IsUpdateable();
	virtual void UpdateSet();
	virtual void SetImplicitlyAddDependencies(bool);
	virtual void SetImplicitlyAddImplicitDependingOnMe(bool);
	virtual bool IsImplicitlyAddingDependencies();
	virtual bool IsImplicitlyAddingDependingOnMe();
	virtual bool HasImplicitAssets();
	virtual bool IsPreSorted();
	virtual bool ShouldPersist();

	// vtable[2] IsEditable
	// vtable[3] GloballyVisible
	// vtable[4] GetFriendlyName
	// vtable[5] SetFriendlyName
	// vtable[6] AssetCount
	// vtable[7] ContainsAsset
	// vtable[8] AddAsset
	// vtable[9] RemoveAsset
	// vtable[10] GetAllAssets
	// vtable[11] LoadFromKeyValues
	// vtable[12] SaveToKeyValues
	// vtable[13] IsUpdateable
	// vtable[14] UpdateSet
	// vtable[15] SetImplicitlyAddDependencies
	// vtable[16] SetImplicitlyAddImplicitDependingOnMe
	// vtable[17] IsImplicitlyAddingDependencies
	// vtable[18] IsImplicitlyAddingDependingOnMe
	// vtable[19] HasImplicitAssets
	// vtable[20] IsPreSorted
	// vtable[21] ShouldPersist
	// sizeof = 8
};
