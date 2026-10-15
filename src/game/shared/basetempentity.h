// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/basetempentity.h:26
class CBaseTempEntity : public CUtlSlot {
public:

	int ()() * * _vptr.CBaseTempEntity;  // +0x0

private:

	static CBaseTempEntity * s_pTempEntities;
	CBaseTempEntity();
	virtual ~CBaseTempEntity();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	virtual void StaticShutdown();
	CBaseTempEntity * GetNext();
	CBaseTempEntity * GetList();
	void StaticInitTempEnts();
	void StaticShutdownTempEnts();

	// vtable[2] Create
	// vtable[3] StaticInit
	// vtable[4] StaticShutdown
	// sizeof = 72
};
