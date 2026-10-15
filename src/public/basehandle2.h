// Reconstructed from DWARF by pahole; not original source.

// src/public/basehandle2.h:52
class CEntityHandle {
	union {
		uint32 m_Index;  // +0x0
		struct {
			uint32 m_EntityIndex:15;  // +0x0:0
			uint32 m_Serial:17;  // +0x0:15
		} m_Parts;
	};

protected:

	static CEntitySystem * gm_pEntitySystem;
	static CConcreteEntityList * gm_pEntityList;
	union {
		uint32 m_Index;  // +0x0
		struct {
			uint32 m_EntityIndex:15;  // +0x0:0
			uint32 m_Serial:17;  // +0x0:15
		} m_Parts;
	};
	CEntityHandle();
	CEntityHandle(const CEntityHandle &);
	CEntityHandle(uint32);
	CEntityHandle(int, int);
	CEntityHandle(const CEntityIdentity *);
	CEntityHandle(const CEntityInstance *);
	CEntityHandle(int);
	void Init(int, int);
	void Term();
	CEntityHandle FromIndex(uint32);
	CEntityHandle FromNetworkableInt(uint32);
	bool operator bool();
	bool operator bool();
	CEntityIdentity * operator CEntityIdentity*();
	CEntityIdentity * operator CEntityIdentity*();
	CEntityInstance * operator CEntityInstance*();
	CEntityInstance * operator CEntityInstance*();
	CGameEntity * operator CGameEntity*();
	CGameEntity * operator CGameEntity*();
	CBaseEntity * operator CBaseEntity*();
	CBaseEntity * operator CBaseEntity*();
	void * operator void*();
	const void * operator void const*();
	bool IsValid();
	void Invalidate();
	bool operator!();
	CEntityIdentity * operator->();
	bool IsNetworkable();
	int GetEntryIndex();
	int GetSerialNumber();
	uint32 ToInt();
	uint32 ToNetworkableInt();
	bool operator!=(const CEntityHandle &);
	bool operator==(const CEntityHandle &);
	bool operator==(const CEntityIdentity *);
	bool operator!=(const CEntityIdentity *);
	bool operator==(CEntityIdentity *);
	bool operator!=(CEntityIdentity *);
	bool operator<(const CEntityHandle &);
	bool operator<(const CEntityIdentity *);
	bool operator<(CEntityIdentity *);
	bool operator==(int);
	bool operator!=(int);
	bool operator==(uint32);
	bool operator!=(uint32);
	bool operator==(const CEntityInstance *);
	bool operator!=(const CEntityInstance *);
	bool operator==(CEntityInstance *);
	bool operator!=(CEntityInstance *);
	bool operator<(const CEntityInstance *);
	bool operator<(CEntityInstance *);
	bool operator==(const CGameEntity *);
	bool operator!=(const CGameEntity *);
	bool operator==(CGameEntity *);
	bool operator!=(CGameEntity *);
	bool operator==(const CBaseEntity *);
	bool operator!=(const CBaseEntity *);
	bool operator==(CBaseEntity *);
	bool operator!=(CBaseEntity *);
	void AssertInitialized();
	const CEntityHandle & operator=(const CEntityIdentity *);
	const CEntityHandle & Set(const CEntityIdentity *);
	const CEntityHandle & operator=(const CEntityInstance *);
	const CEntityHandle & Set(const CEntityInstance *);
	const CEntityHandle & operator=(nullptr_t);
	const CEntityHandle & Set(nullptr_t);
	const CEntityHandle & operator=(int);
	const CEntityHandle & Set(int);
	CEntityIdentity * GetEntityIdentity();
	CEntityInstance * GetInstance();
	CEntitySystem * GetEntitySystem();
	IHandleEntity * GetHandleEntity();
	CEntityInstance * Get();
	void InitHandles(CEntitySystem *);
	CConcreteEntityList * GetEntityList();

	// sizeof = 4
};
