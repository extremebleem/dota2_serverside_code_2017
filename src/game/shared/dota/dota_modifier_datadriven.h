// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_modifier_datadriven.h:34
class CDOTA_Modifier_DataDriven : public CDOTA_Buff, public CDOTA_ActionRunner {
public:

private:

	int m_nAbilityIndex;  // +0xbc0
	int m_nIndexInAbility;  // +0xbc4
	bool m_bIsHidden;  // +0xbc8
	bool m_bIsDebuff;  // +0xbc9
	bool m_bIsPurgable;  // +0xbca
	bool m_bIsStunDebuff;  // +0xbcb
	bool m_bAllowIllusionDuplicate;  // +0xbcc
	bool m_bRemoveOnDeath;  // +0xbcd

	const char * m_pszAuraModifier;  // +0xbd0
	int m_nAuraModifierIndex;  // +0xbd8
	int m_nAuraRadius;  // +0xbdc
	int m_nAuraSearchTeam;  // +0xbe0
	int m_nAuraSearchType;  // +0xbe4
	int m_nAuraSearchFlags;  // +0xbe8
	bool m_bAuraApplyToCaster;  // +0xbec
	bool m_bAuraApplyToParent;  // +0xbed

	int m_nAttributes;  // +0xbf0

	const char * m_pszEffectName;  // +0xbf8
	int m_nEffectAttachType;  // +0xc00
	int m_nPriority;  // +0xc04
	const char * m_pszStatusEffectName;  // +0xc08
	int m_nStatusEffectPriority;  // +0xc10
	int m_nOverrideAnimation;  // +0xc14
	int m_nOrbPriority;  // +0xc18
	int m_nOrbLabel;  // +0xc1c
	bool m_bOrbIsCastAttack;  // +0xc20

	float m_flThinkInterval;  // +0xc24
	bool m_bNeedsReParseIfRefreshed;  // +0xc28

	const char * m_pszModelName;  // +0xc30
	const char * m_pszOrbProjectileName;  // +0xc38
	uint64 m_nModifierStatesEnabled;  // +0x1710
	uint64 m_nModifierStatesDisabled;  // +0x1718
	CDOTA_Modifier_DataDriven(CDOTA_Modifier_DataDriven &);
	CDOTA_Modifier_DataDriven(const CDOTA_Modifier_DataDriven &);
	CDOTA_Modifier_DataDriven();
	virtual bool AllowIllusionDuplicate();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual void SetAuraCreateData(KeyValues *);
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsStunDebuff();
	virtual bool IsCastAttack();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool RemoveOnDeath();
	virtual int GetAttributes();
	virtual int GetPriority();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual const char * GetModelChange();
	virtual void DoCreate(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetTexture();
	void Precache(KeyValues *, const CEntityPrecacheContext *);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual int GetOrbLabel(CDOTA_AttackRecord *);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual CDOTA_Buff * DuplicateForIllusion(CDOTA_BaseNPC *);
	virtual void OnDestroy();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual const char * GetActionContextName();

protected:

	virtual bool LookupModifierCreateParameters(KeyValues *, const char *);
	virtual CDOTABaseAbility * GetActionAbility();
	virtual int CreateParticle(const char *, int, CBaseEntity *);

private:

	KeyValues * GetAbilityKeyValues();
	KeyValues * GetModifierKeyValues();
	void ReadKeyValues();
	void ReadKeyValues_Aura(KeyValues *);
	void ReadKeyValues_Events(KeyValues *);
	void ReadKeyValues_OrbData(KeyValues *);
	void ReadKeyValues_Properties(KeyValues *);
	void ReadKeyValues_States(KeyValues *);
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	bool ShouldStorePropertyAsString(modifierfunction);
	void LinkEffect(modifierfunction);
	virtual void OnIntervalThink();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFailed(const CModifierParams &);
	ModifierVariant_t OnAttackAllied(const CModifierParams &);
	ModifierVariant_t OnProjectileDodge(const CModifierParams &);
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnUnitMoved(const CModifierParams &);
	ModifierVariant_t OnAbilityStart(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t OnAbilityEndChannel(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	ModifierVariant_t OnSpentMana(const CModifierParams &);
	ModifierVariant_t OnTeleporting(const CModifierParams &);
	ModifierVariant_t OnTeleported(const CModifierParams &);
	ModifierVariant_t OnHealthGained(const CModifierParams &);
	ModifierVariant_t OnManaGained(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	ModifierVariant_t OnHealReceived(const CModifierParams &);
	ModifierVariant_t OnAttackFinished(const CModifierParams &);
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ScriptVariant_t LookupValueSymbol(const char *);
	virtual ~CDOTA_Modifier_DataDriven();
	void LinkSimpleModifier<(modifierfunction)0u>();
	void LinkSimpleModifier<(modifierfunction)3u>();
	void LinkSimpleModifier<(modifierfunction)10u>();
	void LinkSimpleModifier<(modifierfunction)11u>();
	void LinkSimpleModifier<(modifierfunction)12u>();
	void LinkSimpleModifier<(modifierfunction)13u>();
	void LinkSimpleModifier<(modifierfunction)14u>();
	void LinkSimpleModifier<(modifierfunction)16u>();
	void LinkSimpleModifier<(modifierfunction)18u>();
	void LinkSimpleModifier<(modifierfunction)24u>();
	void LinkSimpleModifier<(modifierfunction)22u>();
	void LinkSimpleModifier<(modifierfunction)26u>();
	void LinkSimpleModifier<(modifierfunction)77u>();
	void LinkSimpleModifier<(modifierfunction)25u>();
	void LinkSimpleModifier<(modifierfunction)28u>();
	void LinkSimpleModifier<(modifierfunction)29u>();
	void LinkSimpleModifier<(modifierfunction)34u>();
	void LinkSimpleModifier<(modifierfunction)36u>();
	void LinkSimpleModifier<(modifierfunction)37u>();
	void LinkSimpleModifier<(modifierfunction)39u>();
	void LinkSimpleModifier<(modifierfunction)31u>();
	void LinkSimpleModifier<(modifierfunction)32u>();
	void LinkSimpleModifier<(modifierfunction)81u>();
	void LinkSimpleModifier<(modifierfunction)82u>();
	void LinkSimpleModifier<(modifierfunction)115u>();
	void LinkSimpleModifier<(modifierfunction)116u>();
	void LinkSimpleModifier<(modifierfunction)80u>();
	void LinkSimpleModifier<(modifierfunction)79u>();
	void LinkSimpleModifier<(modifierfunction)40u>();
	void LinkSimpleModifier<(modifierfunction)42u>();
	void LinkSimpleModifier<(modifierfunction)43u>();
	void LinkSimpleModifier<(modifierfunction)44u>();
	void LinkSimpleModifier<(modifierfunction)45u>();
	void LinkSimpleModifier<(modifierfunction)46u>();
	void LinkSimpleModifier<(modifierfunction)47u>();
	void LinkSimpleModifier<(modifierfunction)49u>();
	void LinkSimpleModifier<(modifierfunction)50u>();
	void LinkSimpleModifier<(modifierfunction)51u>();
	void LinkSimpleModifier<(modifierfunction)52u>();
	void LinkSimpleModifier<(modifierfunction)53u>();
	void LinkSimpleModifier<(modifierfunction)54u>();
	void LinkSimpleModifier<(modifierfunction)55u>();
	void LinkSimpleModifier<(modifierfunction)56u>();
	void LinkSimpleModifier<(modifierfunction)57u>();
	void LinkSimpleModifier<(modifierfunction)58u>();
	void LinkSimpleModifier<(modifierfunction)59u>();
	void LinkSimpleModifier<(modifierfunction)64u>();
	void LinkSimpleModifier<(modifierfunction)65u>();
	void LinkSimpleModifier<(modifierfunction)66u>();
	void LinkSimpleModifier<(modifierfunction)69u>();
	void LinkSimpleModifier<(modifierfunction)74u>();
	void LinkSimpleModifier<(modifierfunction)83u>();
	void LinkSimpleModifier<(modifierfunction)86u>();
	void LinkSimpleModifier<(modifierfunction)88u>();
	void LinkSimpleModifier<(modifierfunction)89u>();
	void LinkSimpleModifier<(modifierfunction)90u>();
	void LinkSimpleModifier<(modifierfunction)91u>();
	void LinkSimpleModifier<(modifierfunction)92u>();
	void LinkSimpleModifier<(modifierfunction)95u>();
	void LinkSimpleModifier<(modifierfunction)96u>();
	void LinkSimpleModifier<(modifierfunction)97u>();
	void LinkSimpleModifier<(modifierfunction)100u>();
	void LinkSimpleModifier<(modifierfunction)101u>();
	void LinkSimpleModifier<(modifierfunction)102u>();
	void LinkSimpleModifier<(modifierfunction)103u>();
	void LinkSimpleModifier<(modifierfunction)104u>();
	void LinkSimpleModifier<(modifierfunction)105u>();
	void LinkSimpleModifier<(modifierfunction)106u>();
	void LinkSimpleModifier<(modifierfunction)107u>();
	void LinkSimpleModifier<(modifierfunction)110u>();
	void LinkSimpleModifier<(modifierfunction)111u>();
	void LinkSimpleModifier<(modifierfunction)155u>();
	void LinkSimpleModifier<(modifierfunction)163u>();
	void LinkSimpleModifier<(modifierfunction)164u>();
	void LinkSimpleModifier<(modifierfunction)158u>();
	void LinkSimpleModifier<(modifierfunction)160u>();
	void LinkSimpleModifier<(modifierfunction)161u>();
	void LinkSimpleModifier<(modifierfunction)162u>();
	void LinkSimpleModifier<(modifierfunction)170u>();
	void LinkSimpleModifier<(modifierfunction)171u>();
	ModifierVariant_t GetSimpleModifier<(modifierfunction)0u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)3u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)10u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)11u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)12u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)13u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)14u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)16u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)18u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)24u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)22u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)26u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)77u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)25u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)28u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)29u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)34u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)36u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)37u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)39u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)31u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)32u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)81u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)82u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)115u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)116u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)80u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)79u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)40u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)42u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)43u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)44u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)45u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)46u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)47u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)49u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)50u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)51u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)52u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)53u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)54u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)55u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)56u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)57u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)58u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)59u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)64u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)65u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)66u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)69u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)74u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)83u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)86u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)88u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)89u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)90u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)91u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)92u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)95u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)96u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)97u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)100u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)101u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)102u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)103u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)104u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)105u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)106u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)107u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)110u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)111u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)155u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)163u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)164u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)158u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)160u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)161u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)162u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)170u>(const CModifierParams &);
	ModifierVariant_t GetSimpleModifier<(modifierfunction)171u>(const CModifierParams &);

	// vtable[18] AllowIllusionDuplicate
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[43] SetAuraCreateData
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[16] IsStunDebuff
	// vtable[82] IsCastAttack
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[54] RemoveOnDeath
	// vtable[7] GetAttributes
	// vtable[6] GetPriority
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[89] GetModelChange
	// vtable[85] DoCreate
	// vtable[58] OnRefresh
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[32] GetTexture
	// vtable[50] GetOrbPriority
	// vtable[51] GetOrbLabel
	// vtable[49] GetCustomOrb
	// vtable[22] DuplicateForIllusion
	// vtable[60] OnDestroy
	// vtable[10] AddCustomTransmiterData
	// vtable[90] GetActionContextName
	// vtable[91] LookupModifierCreateParameters
	// vtable[92] GetActionAbility
	// vtable[93] CreateParticle
	// vtable[56] OnIntervalThink
	// vtable[57] OnCreated
	// vtable[42] GetAuraEntityReject
	// vtable[94] LookupValueSymbol
	// sizeof = 6160
};
