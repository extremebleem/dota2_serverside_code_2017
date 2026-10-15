// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/concreteentitylist.h:30
class CConcreteEntityList : public CThreadLockableObject<CThreadNullMutex> {
	class CList {
	private:

		CList();
		const CEntityIdentity * Head();
		const CEntityIdentity * Tail();
		CEntityIdentity * Head();
		CEntityIdentity * Tail();
		void AddToHead(CEntityIdentity *);
		void AddToTail(CEntityIdentity *);
		void LinkBefore(CEntityIdentity *, CEntityIdentity *);
		void LinkAfter(CEntityIdentity *, CEntityIdentity *);
		void Unlink(CEntityIdentity *);
		bool IsInList(CEntityIdentity *);
		void Clear();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int m_nNetworkableEntityLimit;  // +0x450
	int m_nNonNetworkableEntityLimit;  // +0x454
	int m_nMaxPlayers;  // +0x458
	CConcreteEntityList();
	~CConcreteEntityList();
	CEntityHandle GetNetworkableHandle(CEntityIndex);
	CEntityIdentity * LookupEntity(const CEntityHandle &);
	CEntityIdentity * LookupEntityByIndex(CEntityIndex);
	CEntityIdentity * LookupEntityByIndexUnsafe(CEntityIndex);
	CEntityHandle FirstHandle();
	CEntityHandle NextHandle(CEntityHandle);
	CEntityHandle InvalidHandle();
	CEntityIdentity * FirstEntity();
	CEntityIdentity * NextEntity(const CEntityIdentity *);
	const CEntityIdentity * GetEntityPtr(const CEntityHandle &);
	void ActivateStagingEntities();
	CEntityIdentity * FirstStagingEntity();
	CEntityIdentity * NextStagingEntity(CEntityIdentity *);
	CEntityIdentity * FirstDormantEntity();
	CEntityIdentity * NextDormantEntity(CEntityIdentity *);
	void PreservePlayerNetworkables(int);
	CEntityIndex GetEntityIndex(const CEntityIdentity *);
	const CBitVec<16384> & GetEntityPVSBits();
	int GetNetworkableEntityLimit();
	int GetNonNetworkableEntityLimit();
	void SetEntityLimits(int, int);
	void SetEntityLimitsFromCurrentState();
	void Purge();
	void AllocEntityChunk(bool);
	CEntityIdentity * AllocEntity(bool, CEntityIndex, int, bool, bool);
	void FreeEntity(CEntityIdentity *, bool);
	void InvalidateHandle(CEntityIdentity *);
	void MakeDormant(CEntityIdentity *, bool);
	void SetInPVS(CEntityIdentity *, bool);
	void SetUsed(CEntityIndex);
	void ClearUsed(CEntityIndex);
	bool IsUsed(CEntityIndex);
	CEntityIdentity * IndexToIdentity(int);
	int IdentityIndexInChunk(int, const CEntityIdentity *, bool *);
	int IdentityToIndex(const CEntityIdentity *);

	// sizeof = 3168
};
