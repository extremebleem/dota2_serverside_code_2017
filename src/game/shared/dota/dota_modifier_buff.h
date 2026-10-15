// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_modifier_buff.h:281
class CModifierParams {
private:

	float fDamage;  // +0x4
	float fOriginalDamage;  // +0x8
	Activity nActivity;  // +0xc
	bool bTooltip;  // +0x10

	int nTooltipParam;  // +0x14
	bool bIgnoreInvis;  // +0x18
	bool bNoCooldown;  // +0x19
	bool bReincarnate;  // +0x1a
	bool bDoNotConsume;  // +0x1b
	float fDistance;  // +0x1c
	float fGain;  // +0x20
	float fAttackTimeRemaining;  // +0x24
	int m_nIssuerPlayerIndex;  // +0x28
	EHANDLE inflictor;  // +0x2c
	int nDamageType;  // +0x30
	int nDamageflags;  // +0x34
	int nDamageCategory;  // +0x38
	int iFailType;  // +0x3c
	short int iRecord;  // +0x40

	int nCost;  // +0x58
	int nOrdertype;  // +0x5c
	bool bCraniumBasherTested;  // +0x78
	bool bHeartRegenApplied;  // +0x79
	bool bDiffusalApplied;  // +0x7a
	bool bChainLightningConsidered;  // +0x7b
	bool bSuppressDamage;  // +0x7c
	bool bRangedAttack;  // +0x7d
	bool bProcessProcs;  // +0x7e

	int nPlayerids_stick;  // +0x80
protected:

	EHANDLE hattacker;  // +0x84
	EHANDLE htarget;  // +0x88
	EHANDLE hunit;  // +0x8c
private:

	static const CModifierParams s_Default;

	void FillOutScriptTableFromModifierParams(HSCRIPT);
	CBaseEntity * Attacker();
	CDOTA_BaseNPC * AttackerNPC();
	CBaseEntity * Target();
	CDOTA_BaseNPC * TargetNPC();
	CBaseEntity * Unit();
	CDOTA_BaseNPC * UnitNPC();
	CModifierParams();
	const CModifierParams & Default();
	void SetAttacker(CBaseEntity *);
	void SetTarget(CBaseEntity *);
	void SetUnit(CBaseEntity *);

	// sizeof = 144
};

// src/game/shared/dota/dota_modifier_buff.h:491
class CDOTA_BuffParticle {
private:

	int m_iIndex;  // +0x0
	int m_iPriority;  // +0x4
	bool m_bDestroyImmediatly;  // +0x8
	bool m_bStatusEffect;  // +0x9
	bool m_bHeroEffect;  // +0xa
	bool m_bOverheadEffectOffset;  // +0xb

	CDOTA_BuffParticle(int, bool, bool, int, bool, bool);

	// sizeof = 12
};

// src/game/shared/dota/dota_modifier_buff.h:515
class CDOTABuffState {
	uint64 m_nEnabledStateMask;  // +0x0
	uint64 m_nDisabledStateMask;  // +0x8
	CDOTABuffState();
	void Enable(int);
	void Disable(int);
	bool IsEnabled(int);
	bool IsDisabled(int);

	// sizeof = 16
};

// src/game/shared/dota/dota_modifier_buff.h:530
class IModifierFactory {
	int ()() * * _vptr.IModifierFactory;  // +0x0
	IModifierFactory(IModifierFactory &);
	IModifierFactory(const IModifierFactory &);
	IModifierFactory();
	virtual CDOTA_Buff * Create();
	virtual void Destroy(CDOTA_Buff *);
	virtual bool IsSameType(CDOTA_Buff *);

	// vtable[0] Create
	// vtable[1] Destroy
	// vtable[2] IsSameType
	// sizeof = 8
};

// src/game/shared/dota/dota_modifier_buff.h:543
class CModifieractoryDictionary {
	int ()() * * _vptr.CModifieractoryDictionary;  // +0x0
	typedef CUtlStringMap<IModifierFactory*, CUtlSymbolTable> FactoryDict_t;

	FactoryDict_t m_Factories;  // +0x8
	~CModifieractoryDictionary();
	CModifieractoryDictionary(CModifieractoryDictionary &);
	CModifieractoryDictionary(const CModifieractoryDictionary &);
	CModifieractoryDictionary();
	virtual void InstallFactory(IModifierFactory *, const char *);
	virtual CDOTA_Buff * Create(const char *);
	virtual void Destroy(const char *, CDOTA_Buff *);
	virtual const char * GetCannonicalName(const char *);
	IModifierFactory * FindFactory(const char *);
	const char * GetNameByIndex(int);
	int GetIndexByName(const char *);
	void DumpVisibleBuffs();

	// vtable[0] InstallFactory
	// vtable[1] Create
	// vtable[2] Destroy
	// vtable[3] GetCannonicalName
	// sizeof = 112
};

// src/game/shared/dota/dota_modifier_buff.h:572
class CDOTA_Buff {
	int ()() * * _vptr.CDOTA_Buff;  // +0x0
private:

protected:

	string_t m_name;  // +0x10
private:

	string_t m_class;  // +0x28
	string_t m_szModifierAura;  // +0x30
	int m_iSerialNumber;  // +0x40
	int m_iStringIndex;  // +0x44
	int m_iIndex;  // +0x48
	float m_flCreationTime;  // +0x4c
	int m_iCreationFrame;  // +0x50
	float m_flLastAppliedTime;  // +0x54
	float m_flDuration;  // +0x58
	float m_flDieTime;  // +0x5c
	EHANDLE m_hCaster;  // +0x60
	EHANDLE m_hAbility;  // +0x64
	EHANDLE m_hParent;  // +0x68
	int m_iStackCount;  // +0x6c
	int m_iDOTDamageValue;  // +0x70
	short int m_iAuraSearchTeam;  // +0x74
	short int m_iAuraSearchType;  // +0x76
	int m_iAuraSearchFlags;  // +0x78
	int m_iAuraRadius;  // +0x7c
	int m_iTeam;  // +0x80
	int m_iAttributes;  // +0x84
	short int m_iPaddingToMakeSchemaHappy2;  // +0x88
	bool m_bIsAura:1;  // +0x8a:0
	bool m_bIsAuraActiveOnDeath:1;  // +0x8a:1
	bool m_bMarkedForDeletion:1;  // +0x8a:2
	bool m_bAuraIsHeal:1;  // +0x8a:3
	bool m_bProvidedByAura:1;  // +0x8a:4

	bool m_bPurgedDestroy;  // +0x8b
	float m_flPreviousTick;  // +0x8c
	float m_flThinkInterval;  // +0x90
	float m_flThinkTimeAccumulator;  // +0x94
	float m_flDOTInterval;  // +0x98
	float m_flDOTTimeAccumulator;  // +0x9c
protected:

	struct {
		ModifierVariant_t (*__pfn)(CDOTA_Buff *, const CModifierParams &);  // +0xd0
		long int __delta;  // +0xd8
	} m_Functions[173];
	HSCRIPT m_hScriptScope;  // +0xba0
	CDOTA_Buff(const CDOTA_Buff &);

private:

	CDOTA_Buff();
	bool operator==(const CDOTA_Buff &);
	virtual ~CDOTA_Buff();
	virtual CVerticalMotionController * GetVerticalMotionController();
	virtual CHorizontalMotionController * GetHorizontalMotionController();
	void Prepare(const char *, CBaseEntity *, KeyValues *);
	const char * GetName();
	const char * GetClass();
	void Destroy(bool, CDOTA_BaseNPC *, CDOTABaseAbility *);
	void Script_Destroy();
	void FinalDestroy();
	virtual void CheckState(CDOTABuffState &);
	IModifierFactory * GetFactory();
	void SetFactory(IModifierFactory *);
	IModifierFactory * GetCachedModifierAuraFactory();
	void ClearCachedModifierAuraFactory();
	CDOTA_ModifierManager * GetManager();
	CDOTA_BaseNPC * GetParent();
	virtual int GetPriority();
	virtual int GetAttributes();
	void SetAttributes(int);
	bool ModifierEvent(modifierfunction, const CModifierParams &);
	bool GetFunctionValue(int, ModifierVariant_t &, const CModifierParams &);
	bool HasFunction(int);
	bool IsMarkedForDeletion();
	void SetIndex(int);
	int GetIndex();
	void PackageTable(KeyValues *);
	virtual bool ShouldSendToClients();
	virtual bool ShouldSendToTeam(int);
	void SendBuffCreationToClients(int, bool);
	void SendBuffRefreshToClients();
	void SendBuffRemovalToClients();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual bool IsHidden();
	virtual bool IsDebuff();
	virtual bool CanParentBeAutoAttacked();
	virtual bool IsPurgable();
	virtual bool IsPurgeException();
	virtual bool IsStunDebuff();
	virtual bool IsHexDebuff();
	virtual bool AllowIllusionDuplicate();
	virtual bool CanBeManuallyRemoved();
	virtual bool TriggerBuffClicked();
	virtual bool IsMotionController();
	virtual CDOTA_Buff * DuplicateForIllusion(CDOTA_BaseNPC *);
	virtual bool IsPermanent();
	virtual bool RefreshTexture();
	virtual void IncrementStackCount();
	virtual void DecrementStackCount();
	virtual int GetStackCount();
	virtual void SetStackCount(int);
	virtual void OnStackCountChanged(int);
	virtual float GetDieTime();
	virtual float GetDuration();
	virtual const char * GetTexture();
	virtual float GetRemainingTime();
	virtual float GetElapsedTime();
	void ForceRefresh();
	virtual bool IsAura();
	virtual bool IsAuraActiveOnDeath();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual void SetAuraCreateData(KeyValues *);
	virtual bool IsHealingAura();
	virtual void OnAuraModifierApplied(CDOTA_BaseNPC *);
	bool IsProvidedByAura();
	void SetProvidedByAura(bool);
	virtual bool DestroyOnAuraRefresh();
	virtual bool DoesAuraCountAsAssist();
	virtual int GetAuraApplyPriority();
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual int GetOrbLabel(CDOTA_AttackRecord *);
	virtual CDOTA_BuffParticle * GetBuffParticle();
	virtual EMatchPermanentBuff GetMatchPermanentBuff();
	virtual bool RemoveOnDeath();
	virtual void OnDurationExpired();
	virtual void OnIntervalThink();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnRemoved();
	virtual void OnDestroy();
	virtual bool DestroyOnExpire();
	bool DestroyedByPurge();
	void StartIntervalThink(float);
	void OnThink();
	void OnCheckLifetime();
	virtual void OnThinkInternal();
	virtual void SetDuration(float, bool);
	virtual void PerformDOT(float);
	void CheckAura();
	CDOTABaseAbility * GetAbility();
	CDOTA_BaseNPC * GetCaster();
	void SetCaster(CBaseEntity *);
	void SetAbility(CDOTABaseAbility *);
	virtual void DeclareFunctions();
	void SetHideParticles(bool);
	void DestroyParticles(bool);
	void AddParticle(int, bool, bool, int, bool, bool);
	void Script_AddParticle(int, bool, bool, int, bool, bool);
	CDOTA_BuffParticle * GetHighestPriorityParticle(bool);
	bool HasOverheadEffectOffset();
	bool SetOverheadEffectOffset(float);
	int CreateBuffParticleEffect(const char *, int, CBaseEntity *, CRecipientFilter *);
	float GetCreationTime();
	int GetCreationFrame();
	float GetLastAppliedTime();
	int GetTeam();
	virtual bool FindRequiresMatchingName();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual bool AvoidFilter(CDOTA_BaseNPC *);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsAvoidPhysical();
	virtual bool IsPersistentAvoidance();
	virtual bool IsCastAttack();
	virtual float GetAuraDuration();
	virtual bool ProvidesTruesightForTeam(int);
	virtual void DoCreate(KeyValues *);
	void PostCreate(KeyValues *);
	void DoRefresh(KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	int GetStringIndex();
	void SetStringIndex(int);
	int GetSerialNumber();
	void SetSerialNumber(int);
	virtual int GetTeamSendMask();

protected:

	bool IsUnitMyParent(CDOTA_BaseNPC *);
	void DotaRetrieveValue(int &, const char *);
	void DotaRetrieveValue(float &, const char *);

private:

	void SendBuffToTeam(int, int, const void *);
	void MakeEntry(CDOTAModifierBuffTableEntry &);
	bool ShouldSendKeyToClient(const char *);

protected:

	void SetFunction(modifierfunction, MODIFIERPTR);
	void ClearFunction(modifierfunction);
	HSCRIPT Script_GetCaster();
	HSCRIPT Script_GetParent();
	HSCRIPT Script_GetAbility();
	virtual HSCRIPT GetScriptScope();
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetVerticalMotionController
	// vtable[4] GetHorizontalMotionController
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[7] GetAttributes
	// vtable[8] ShouldSendToClients
	// vtable[9] ShouldSendToTeam
	// vtable[10] AddCustomTransmiterData
	// vtable[11] IsHidden
	// vtable[12] IsDebuff
	// vtable[13] CanParentBeAutoAttacked
	// vtable[14] IsPurgable
	// vtable[15] IsPurgeException
	// vtable[16] IsStunDebuff
	// vtable[17] IsHexDebuff
	// vtable[18] AllowIllusionDuplicate
	// vtable[19] CanBeManuallyRemoved
	// vtable[20] TriggerBuffClicked
	// vtable[21] IsMotionController
	// vtable[22] DuplicateForIllusion
	// vtable[23] IsPermanent
	// vtable[24] RefreshTexture
	// vtable[25] IncrementStackCount
	// vtable[26] DecrementStackCount
	// vtable[27] GetStackCount
	// vtable[28] SetStackCount
	// vtable[29] OnStackCountChanged
	// vtable[30] GetDieTime
	// vtable[31] GetDuration
	// vtable[32] GetTexture
	// vtable[33] GetRemainingTime
	// vtable[34] GetElapsedTime
	// vtable[35] IsAura
	// vtable[36] IsAuraActiveOnDeath
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// vtable[43] SetAuraCreateData
	// vtable[44] IsHealingAura
	// vtable[45] OnAuraModifierApplied
	// vtable[46] DestroyOnAuraRefresh
	// vtable[47] DoesAuraCountAsAssist
	// vtable[48] GetAuraApplyPriority
	// vtable[49] GetCustomOrb
	// vtable[50] GetOrbPriority
	// vtable[51] GetOrbLabel
	// vtable[52] GetBuffParticle
	// vtable[53] GetMatchPermanentBuff
	// vtable[54] RemoveOnDeath
	// vtable[55] OnDurationExpired
	// vtable[56] OnIntervalThink
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[59] OnRemoved
	// vtable[60] OnDestroy
	// vtable[61] DestroyOnExpire
	// vtable[62] OnThinkInternal
	// vtable[63] SetDuration
	// vtable[64] PerformDOT
	// vtable[65] DeclareFunctions
	// vtable[66] FindRequiresMatchingName
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[76] AvoidFilter
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[80] IsAvoidPhysical
	// vtable[81] IsPersistentAvoidance
	// vtable[82] IsCastAttack
	// vtable[83] GetAuraDuration
	// vtable[84] ProvidesTruesightForTeam
	// vtable[85] DoCreate
	// vtable[86] GetTeamSendMask
	// vtable[87] GetScriptScope
	// vtable[88] GetScriptDesc
	// sizeof = 2984
};

// src/game/shared/dota/dota_modifier_buff.h:981
class CDOTA_Buff_Item : public CDOTA_Buff {
public:

	CDOTA_Buff_Item(CDOTA_Buff_Item &);
	CDOTA_Buff_Item(const CDOTA_Buff_Item &);
	CDOTA_Buff_Item();
	virtual int GetAttributes();
	virtual bool IsHidden();
	CDOTA_Item * GetItem();
	virtual void OnItemCombine();
	virtual bool RemoveOnDeath();
	virtual ~CDOTA_Buff_Item();

	// vtable[7] GetAttributes
	// vtable[11] IsHidden
	// vtable[89] OnItemCombine
	// vtable[54] RemoveOnDeath
	// sizeof = 2984
};
