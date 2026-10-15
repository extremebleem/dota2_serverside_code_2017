// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/saverestore_utlvector.h:22
class CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> : public CDefSaveRestoreOps {
public:

	CUtlVectorDataOps(CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> *, CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> &);
	CUtlVectorDataOps(CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> *, const CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>,);
	CUtlVectorDataOps(CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> *);
	virtual void Save(CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> *, const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> *, const SaveRestoreFieldInfo_t &, IRestore *);
	virtual void MakeEmpty(CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> *, const SaveRestoreFieldInfo_t &);
	virtual bool IsEmpty(CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2> *, const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[3] MakeEmpty
	// vtable[2] IsEmpty
	// sizeof = 8
};

// src/game/shared/saverestore_utlvector.h:22
class CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> : public CDefSaveRestoreOps {
public:

	CUtlVectorDataOps(CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> *, CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> &);
	CUtlVectorDataOps(CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> *, const CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> &);
	CUtlVectorDataOps(CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> *);
	virtual void Save(CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> *, const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> *, const SaveRestoreFieldInfo_t &, IRestore *);
	virtual void MakeEmpty(CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> *, const SaveRestoreFieldInfo_t &);
	virtual bool IsEmpty(CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13> *, const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[3] MakeEmpty
	// vtable[2] IsEmpty
	// sizeof = 8
};

// src/game/shared/saverestore_utlvector.h:22
class CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> : public CDefSaveRestoreOps {
public:

	CUtlVectorDataOps(CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> *, CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> &);
	CUtlVectorDataOps(CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> *, const CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> &);
	CUtlVectorDataOps(CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> *);
	virtual void Save(CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> *, const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> *, const SaveRestoreFieldInfo_t &, IRestore *);
	virtual void MakeEmpty(CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> *, const SaveRestoreFieldInfo_t &);
	virtual bool IsEmpty(CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10> *, const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[3] MakeEmpty
	// vtable[2] IsEmpty
	// sizeof = 8
};

// src/game/shared/saverestore_utlvector.h:148
class CUtlVectorDataopsInstantiator<2> {
	ISaveRestoreOps * GetDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses> >(CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1> *);

	// sizeof = 1
};

// src/game/shared/saverestore_utlvector.h:148
class CUtlVectorDataopsInstantiator<13> {
	ISaveRestoreOps * GetDataOps<CUtlVector<CHandle<CLightEntity> > >(CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> > *);

	// sizeof = 1
};

// src/game/shared/saverestore_utlvector.h:148
class CUtlVectorDataopsInstantiator<10> {
	ISaveRestoreOps * GetDataOps<CUtlVector<SaveRestoreBlockHeader_t> >(CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> > *);

	// sizeof = 1
};

// CUtlVectorDataOps: 22 more instantiations (full list in INDEX.tsv)
//   CUtlVectorDataOps<CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight, -1>, 1>
//   CUtlVectorDataOps<CUtlVector<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >, 10>
//   CUtlVectorDataOps<CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >, 10>
//   CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons, -1>, 
//   CUtlVectorDataOps<CUtlVector<Relationship_t, CUtlMemory<Relationship_t, int> >, 10>
//   CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, 13>
//   CUtlVectorDataOps<CUtlVector<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >, 10>
//   CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >, 13>
//   CUtlVectorDataOps<CUtlVector<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >, 10>
//   CUtlVectorDataOps<CUtlVector<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >, 13>
//   CUtlVectorDataOps<CUtlVector<globalentity_t, CUtlMemory<globalentity_t, int> >, 10>
//   CUtlVectorDataOps<CUtlStringList, 53>
//   CUtlVectorDataOps<CUtlVector<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >, 10>
//   CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1>, 13>
//   CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >, 13>
//   CUtlVectorDataOps<CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> >, 5>
//   CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >, 13>
//   CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >, 13>
//   CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>, CSceneEntity::NetworkVar_m_hActorList, -1>, 13>
//   CUtlVectorDataOps<CUtlVector<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >, 10>
//   CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >, 10>
//   CUtlVectorDataOps<CUtlVector<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >, 10>

// CUtlVectorDataopsInstantiator: 3 more instantiations (full list in INDEX.tsv)
//   CUtlVectorDataopsInstantiator<1>
//   CUtlVectorDataopsInstantiator<53>
//   CUtlVectorDataopsInstantiator<5>
