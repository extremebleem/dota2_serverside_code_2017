// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_modifier_manager.h:35
class CDOTA_ModifierManager {
	struct BuffModifier_t {
		MODIFIERPTR m_pFn;  // +0x8
		void CallFn(const CModifierParams &, ModifierVariant_t &);

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_hModifierParent {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CDOTA_ModifierManager;  // +0x0
private:

	unsigned char m_buffsForModifiers[173];  // +0x40

	uint16 m_nHasTruesightForTeam;  // +0xee
	uint16 m_nHasTruesightForTeamValid;  // +0xf0

	int m_iBuffIndex;  // +0xf4
	int m_iLockRefCount;  // +0xf8
	typedef CDOTA_ModifierManager ThisClass;
	typedef CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> BuffList_t;
	CDOTA_ModifierManager & operator=(const CDOTA_ModifierManager &);
	CDOTA_ModifierManager(const CDOTA_ModifierManager &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CDOTA_ModifierManager();
	~CDOTA_ModifierManager();
	CDOTA_Buff * AddNewModifier(CBaseEntity *, CDOTABaseAbility *, const char *, KeyValues *, int, const CDOTAModifierBuffTableEntry *);
	void RemoveModifierByName(const char *);
	void RemoveAbilityBasedModifier(const char *, CDOTABaseAbility *);
	void RemoveModifier(CDOTA_Buff *);
	uint64 CheckAllStates(bool);
	int GetHighestPriority(modifierstate, bool);
	void Think();
	void RemoveEventFromBuff(modifierfunction, CDOTA_Buff *);
	void AddEventFromBuff(modifierfunction, CDOTA_Buff *);
	CDOTA_Buff * FindModifierByName(IModifierFactory *, const char *, CBaseEntity *);
	CDOTA_Buff * FindModifierByName(const char *, CBaseEntity *);
	CDOTA_Buff * FindModifierByProperty_Constant_Highest(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Additive(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Highest(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Multiplicative(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Additive(modifierfunction, const CModifierParams &);
	CDOTA_Orb * GetModifier_GetFirstOrb(CDOTA_AttackRecord *);
	CDOTA_Orb * GetModifier_GetSecondOrb(CDOTA_AttackRecord *);
	float GetModifier_Constant_Highest(modifierfunction, const CModifierParams &);
	void GetModifiers_Constant(CUtlVector<const CDOTA_Buff*, CUtlMemory<const CDOTA_Buff*, int> > &, modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Lowest(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_First(modifierfunction, const CModifierParams &);
	float GetModifier_First_Valid(modifierfunction, const CModifierParams &);
	const char * GetModifier_String_First(modifierfunction, const CModifierParams &);
	CDOTA_BuffParticle * GetModifier_StatusEffect_Highest();
	CDOTA_BuffParticle * GetModifier_HeroEffect_Highest();
	void RefreshOverheadOffsets();
	void FindAllModifiers(CUtlVector<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> > *);
	void FindModifiersOfName(const char *, CUtlVector<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> > *);
	void RemoveAllModifiers(int, bool, bool, bool);
	int GetBuffCount();
	CDOTA_Buff * GetBuffByIndex(int, bool);
	CDOTA_Buff * FindBuffByInternalIndex(int);
	void SetParent(CBaseEntity *);
	EHANDLE GetParent();
	void SendBuffsToClients(int);
	void Lock();
	void Unlock();
	bool IsLocked();
	void AddEventsFromBuff(CDOTA_Buff *);
	void RemoveEvents(CDOTA_Buff *);
	bool IsListeningToEvent(modifierfunction);
	bool HasTruesightForTeam(int);
	float GetModifier_Percentage_Additive_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Highest_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Multiplicative_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Additive_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Highest_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Lowest_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_First_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_First_Valid_Internal(modifierfunction, const CModifierParams &);
	CDOTA_Buff * FindModifierByProperty_Constant_Highest_Internal(modifierfunction, const CModifierParams &);
	void GetModifiers_Constant_Internal(CUtlVector<const CDOTA_Buff*, CUtlMemory<const CDOTA_Buff*, int> > &, modifierfunction, const CModifierParams &);
	int GetBuffIndex(modifierfunction, const CDOTA_Buff *);
	BuffList_t & BuffListForModifier(int);
	BuffList_t * BuffListPtrForModifier(int);
	void GetUsedBuffListModifers(CUtlVector<modifierfunction, CUtlMemory<modifierfunction, int> > &);
	void InvalidateOnBuffListChange();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 256
};

// src/game/shared/dota/dota_modifier_manager.h:35
class CDOTA_ModifierManager {
	struct BuffModifier_t {
		MODIFIERPTR m_pFn;  // +0x8
		void CallFn(const CModifierParams &, ModifierVariant_t &);

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_hModifierParent {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CDOTA_ModifierManager;  // +0x0
private:

	unsigned char m_buffsForModifiers[173];  // +0x40

	uint16 m_nHasTruesightForTeam;  // +0xee
	uint16 m_nHasTruesightForTeamValid;  // +0xf0

	int m_iBuffIndex;  // +0xf4
	int m_iLockRefCount;  // +0xf8
	typedef CCopyableUtlVector<CDOTA_ModifierManager::BuffModifier_t> BuffList_t;
	CDOTA_ModifierManager & operator=(const CDOTA_ModifierManager &);
	CDOTA_ModifierManager(const CDOTA_ModifierManager &);

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CDOTA_ModifierManager();
	~CDOTA_ModifierManager();
	CDOTA_Buff * AddNewModifier(CBaseEntity *, CDOTABaseAbility *, const char *, KeyValues *, int, const CDOTAModifierBuffTableEntry *);
	void RemoveModifierByName(const char *);
	void RemoveAbilityBasedModifier(const char *, CDOTABaseAbility *);
	void RemoveModifier(CDOTA_Buff *);
	uint64 CheckAllStates(bool);
	int GetHighestPriority(modifierstate, bool);
	void Think();
	void RemoveEventFromBuff(modifierfunction, CDOTA_Buff *);
	void AddEventFromBuff(modifierfunction, CDOTA_Buff *);
	CDOTA_Buff * FindModifierByName(IModifierFactory *, const char *, CBaseEntity *);
	CDOTA_Buff * FindModifierByName(const char *, CBaseEntity *);
	CDOTA_Buff * FindModifierByProperty_Constant_Highest(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Additive(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Highest(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Multiplicative(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Additive(modifierfunction, const CModifierParams &);
	CDOTA_Orb * GetModifier_GetFirstOrb(CDOTA_AttackRecord *);
	CDOTA_Orb * GetModifier_GetSecondOrb(CDOTA_AttackRecord *);
	float GetModifier_Constant_Highest(modifierfunction, const CModifierParams &);
	void GetModifiers_Constant(CUtlVector<const CDOTA_Buff*, CUtlMemory<const CDOTA_Buff*, int> > &, modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Lowest(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_First(modifierfunction, const CModifierParams &);
	float GetModifier_First_Valid(modifierfunction, const CModifierParams &);
	const char * GetModifier_String_First(modifierfunction, const CModifierParams &);
	CDOTA_BuffParticle * GetModifier_StatusEffect_Highest();
	CDOTA_BuffParticle * GetModifier_HeroEffect_Highest();
	void RefreshOverheadOffsets();
	void FindAllModifiers(CUtlVector<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> > *);
	void FindModifiersOfName(const char *, CUtlVector<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> > *);
	void RemoveAllModifiers(int, bool, bool, bool);
	int GetBuffCount();
	CDOTA_Buff * GetBuffByIndex(int, bool);
	CDOTA_Buff * FindBuffByInternalIndex(int);
	void SetParent(CBaseEntity *);
	EHANDLE GetParent();
	void SendBuffsToClients(int);
	void Lock();
	void Unlock();
	bool IsLocked();
	void AddEventsFromBuff(CDOTA_Buff *);
	void RemoveEvents(CDOTA_Buff *);
	bool IsListeningToEvent(modifierfunction);
	bool HasTruesightForTeam(int);
	float GetModifier_Percentage_Additive_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Highest_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Percentage_Multiplicative_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Additive_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Highest_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_Lowest_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_Constant_First_Internal(modifierfunction, const CModifierParams &);
	float GetModifier_First_Valid_Internal(modifierfunction, const CModifierParams &);
	CDOTA_Buff * FindModifierByProperty_Constant_Highest_Internal(modifierfunction, const CModifierParams &);
	void GetModifiers_Constant_Internal(CUtlVector<const CDOTA_Buff*, CUtlMemory<const CDOTA_Buff*, int> > &, modifierfunction, const CModifierParams &);
	int GetBuffIndex(modifierfunction, const CDOTA_Buff *);
	BuffList_t & BuffListForModifier(int);
	BuffList_t * BuffListPtrForModifier(int);
	void GetUsedBuffListModifers(CUtlVector<modifierfunction, CUtlMemory<modifierfunction, int> > &);
	void InvalidateOnBuffListChange();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 256
};

// src/game/shared/dota/dota_modifier_manager.h:296
class CDOTA_ActiveModifiersList : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_iActiveEventsHandlers[173];  // +0x30
	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_ActiveModifiersList *);
	CDOTA_ActiveModifiersList();
	virtual void GameInit(const EventGameInit_t &);
	void AddModifierToList(CDOTA_ModifierManager *);
	void RemoveModifierFromList(CDOTA_ModifierManager *);
	CDOTA_ModifierManager * GetActiveModifierByIndex(int);
	int GetActiveModifierCount();
	void SetEventState(modifierfunction, bool);
	bool IsEventActiveOnServer(modifierfunction);
	void ReplaceCasterWithCaster(CBaseEntity *, CBaseEntity *);
	virtual ~CDOTA_ActiveModifiersList();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// sizeof = 744
};
