// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_tree_shared.h:64
class CDOTA_Tree : public CObstructionObject {
public:

private:

protected:

	bool m_bStanding;  // +0x14
	bool m_bSpecialTree;  // +0x15

	uint32 m_nOccluderIndex;  // +0x18
	CDOTA_Tree(const CDOTA_Tree &);

private:

	CDOTA_Tree();
	~CDOTA_Tree();
	void ShutdownTree();
	virtual CBaseEntity * GetEntity();
	virtual float GetObstructionRadius();
	virtual float GetObstructionCollisionPadding();
	virtual ObstructionRelationshipClass_t GetObstructionRelationshipClass();
	virtual ObstructionQuerySetClass_t GetObstructionQuerySetClass();
	virtual CBaseEntity * GetObstructionBaseEntity();
	virtual ObstructionType_t GetObstructionType();
	virtual void CutDown(int, int);
	bool IsStanding();
	bool IsSpecialTree();
	void SetSpecialTree(bool);

	// vtable[0] Schema_DynamicBinding
	// vtable[8] GetEntity
	// vtable[1] GetObstructionRadius
	// vtable[2] GetObstructionCollisionPadding
	// vtable[3] GetObstructionRelationshipClass
	// vtable[4] GetObstructionQuerySetClass
	// vtable[6] GetObstructionBaseEntity
	// vtable[7] GetObstructionType
	// vtable[9] CutDown
	// sizeof = 32
};

// src/game/shared/dota/dota_tree_shared.h:112
class CDOTA_TempTree : public CBaseAnimating, public CDOTA_Tree {
	class NetworkVar_m_vecTreeCircleCenter {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	float m_fExpireTime;  // +0x4dc
	bool m_bForceVisible[14];  // +0x4ec

	typedef CDOTA_TempTree ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_TempTree(CDOTA_TempTree &);
	CDOTA_TempTree(CDOTA_TempTree &);
	CDOTA_TempTree();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	virtual CBaseEntity * GetEntity();
	void InitTree(Vector, float, Vector);
	virtual float GetRingRadius();
	virtual ObstructionType_t GetObstructionType();
	virtual float GetObstructionRadius();
	virtual void Think();
	virtual void CutDown(int, int);
	virtual const char * GetObstructionName();
	void SetForceVisible(int, bool);
	virtual void UpdateVisibility();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual bool IsPartOfFOWSystem();
	void AddParticle(int);
	virtual ~CDOTA_TempTree();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[251] GetEntity
	// vtable[252] GetRingRadius
	// vtable[253] GetObstructionType
	// vtable[254] GetObstructionRadius
	// vtable[117] Think
	// vtable[255] CutDown
	// vtable[256] GetObstructionName
	// vtable[213] UpdateVisibility
	// vtable[65] ShouldTransmit
	// vtable[212] IsPartOfFOWSystem
	// sizeof = 1304
};
