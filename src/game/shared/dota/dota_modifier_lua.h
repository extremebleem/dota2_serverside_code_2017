// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_modifier_lua.h:35
class CDOTA_Modifier_Lua : public CDOTA_Buff {
public:

private:

protected:

private:

	CDOTA_Modifier_Lua(CDOTA_Modifier_Lua &);
	CDOTA_Modifier_Lua(const CDOTA_Modifier_Lua &);

	CDOTA_Modifier_Lua();
	virtual void DoCreate(KeyValues *);
	virtual bool FindRequiresMatchingName();
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnRemoved();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnStackCountChanged(int);
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPurgeException();
	virtual bool IsStunDebuff();
	virtual bool IsAura();
	virtual bool IsPermanent();
	virtual bool AllowIllusionDuplicate();
	virtual bool RemoveOnDeath();
	virtual bool IsAuraActiveOnDeath();
	virtual bool DestroyOnExpire();
	virtual const char * GetModifierAura();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual int GetAttributes();
	virtual int GetPriority();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual float GetAuraDuration();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual const char * GetTexture();
	void Script_OnIntervalThink();
	void Script_OnCreated(HSCRIPT);
	void Script_OnRefresh(HSCRIPT);
	void Script_OnDestroy();
	void Script_OnRemoved();
	void Script_OnStackCountChanged(int);
	bool Script_IsDebuff();
	bool Script_IsHidden();
	bool Script_IsPurgable();
	bool Script_IsPurgeException();
	bool Script_IsStunDebuff();
	bool Script_IsAura();
	bool Script_AllowIllusionDuplicate();
	bool Script_RemoveOnDeath();
	bool Script_IsAuraActiveOnDeath();
	bool Script_DestroyOnExpire();
	bool Script_IsPermanent();
	const char * Script_GetModifierAura();
	const char * Script_GetEffectName();
	int Script_GetEffectAttachType();
	const char * Script_GetTexture();
	int Script_GetAttributes();
	int Script_GetPriority();
	const char * Script_GetStatusEffectName();
	int Script_StatusEffectPriority();
	const char * Script_GetHeroEffectName();
	int Script_HeroEffectPriority();
	float Script_GetAuraDuration();
	int Script_GetAuraSearchTeam();
	int Script_GetAuraSearchType();
	int Script_GetAuraSearchFlags();
	int Script_GetAuraRadius();
	bool Script_GetAuraEntityReject(HSCRIPT);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	MODIFIERPTR GetModifierFunc(modifierfunction);
	ModifierVariant_t ExecuteLuaModifierPropertyFunction(const char *, const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamagePostCrit(const CModifierParams &);
	ModifierVariant_t GetModifierBaseAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Magical(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Pure(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_Feedback(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack(const CModifierParams &);
	ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	ModifierVariant_t GetModifierPersistentInvisibility(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedOverride(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage_Unique(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Special_Boots(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Limit(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBaseOverride(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant_PowerTreads(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant_Secondary(const CModifierParams &);
	ModifierVariant_t GetModifierCooldownReduction_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageCooldownStacking(const CModifierParams &);
	ModifierVariant_t GetModifierBaseAttackTimeConstant(const CModifierParams &);
	ModifierVariant_t GetModifierAttackPointConstant(const CModifierParams &);
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierDamageOutgoing_Percentage_Illusion(const CModifierParams &);
	ModifierVariant_t GetModifierTotalDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingPhysicalDamage_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingSpellDamageConstant(const CModifierParams &);
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierAvoidDamage(const CModifierParams &);
	ModifierVariant_t GetModifierAvoidSpell(const CModifierParams &);
	ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonusIllusions(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonusUnique(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonusUniqueActive(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceItemUnique(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceDecrepifyUnique(const CModifierParams &);
	ModifierVariant_t GetModifierSpellAmplify_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierHealAmplify_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierBaseManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegenUnique(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierTotalPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierHealthRegenPercentage(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t GetModifierExtraStrengthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierExtraHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierExtraManaBonus(const CModifierParams &);
	ModifierVariant_t GetModifierExtraHealthPercentage(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierCastRangeBonus(const CModifierParams &);
	ModifierVariant_t GetModifierCastRangeBonusStacking(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	ModifierVariant_t GetModifierProjectileSpeedBonus(const CModifierParams &);
	ModifierVariant_t ReincarnateTime(const CModifierParams &);
	ModifierVariant_t GetModifierConstantRespawnTime(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageRespawnTime(const CModifierParams &);
	ModifierVariant_t GetModifierStackingRespawnTime(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageCooldown(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageCasttime(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManacost(const CModifierParams &);
	ModifierVariant_t GetModifierConstantDeathGoldCost(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageExpRateBoost(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	ModifierVariant_t GetModifierPhysical_ConstantBlockUnavoidablePreArmor(const CModifierParams &);
	ModifierVariant_t GetModifierTotal_ConstantBlock(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationWeight(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	ModifierVariant_t GetAbsorbSpell(const CModifierParams &);
	ModifierVariant_t GetReflectSpell(const CModifierParams &);
	ModifierVariant_t GetDisableAutoAttack(const CModifierParams &);
	ModifierVariant_t GetBonusDayVision(const CModifierParams &);
	ModifierVariant_t GetBonusNightVision(const CModifierParams &);
	ModifierVariant_t GetBonusVisionPercentage(const CModifierParams &);
	ModifierVariant_t GetFixedDayVision(const CModifierParams &);
	ModifierVariant_t GetFixedNightVision(const CModifierParams &);
	ModifierVariant_t GetMinHealth(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t GetIsIllusion(const CModifierParams &);
	ModifierVariant_t GetModifierIllusionLabel(const CModifierParams &);
	ModifierVariant_t GetModifierTurnRate_Percentage(const CModifierParams &);
	ModifierVariant_t GetDisableHealing(const CModifierParams &);
	ModifierVariant_t GetOverrideAttackMagical(const CModifierParams &);
	ModifierVariant_t GetModifierUnitStatsNeedsRefresh(const CModifierParams &);
	ModifierVariant_t GetModifierBountyCreepMultiplier(const CModifierParams &);
	ModifierVariant_t GetModifierBountyOtherMultiplier(const CModifierParams &);
	ModifierVariant_t OnAttackRecord(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t OnAttackAllied(const CModifierParams &);
	ModifierVariant_t OnProjectileDodge(const CModifierParams &);
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnUnitMoved(const CModifierParams &);
	ModifierVariant_t OnAbilityStart(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t OnAbilityFullyCast(const CModifierParams &);
	ModifierVariant_t OnBreakInvisibility(const CModifierParams &);
	ModifierVariant_t OnAbilityEndChannel(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	ModifierVariant_t OnSpentMana(const CModifierParams &);
	ModifierVariant_t OnTeleporting(const CModifierParams &);
	ModifierVariant_t OnTeleported(const CModifierParams &);
	ModifierVariant_t OnSetLocation(const CModifierParams &);
	ModifierVariant_t OnHealthGained(const CModifierParams &);
	ModifierVariant_t OnManaGained(const CModifierParams &);
	ModifierVariant_t OnTakeDamageKillCredit(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	ModifierVariant_t OnHealReceived(const CModifierParams &);
	ModifierVariant_t OnBuildingKilled(const CModifierParams &);
	ModifierVariant_t OnModelChanged(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetModifierModelScale(const CModifierParams &);
	ModifierVariant_t GetModifierScepter(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetAttackSound(const CModifierParams &);
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	ModifierVariant_t GetModifierSpellsRequireHP(const CModifierParams &);
	ModifierVariant_t GetForceDrawOnMinimap(const CModifierParams &);
	ModifierVariant_t GetModifierDisableTurning(const CModifierParams &);
	ModifierVariant_t GetModifierIgnoreCastAngle(const CModifierParams &);
	ModifierVariant_t GetModifierChangeAbilityValue(const CModifierParams &);
	ModifierVariant_t GetModifierAbilityLayout(const CModifierParams &);
	ModifierVariant_t OnDominated(const CModifierParams &);
	ModifierVariant_t GetVisualZDelta(const CModifierParams &);
	ModifierVariant_t GetModifierCanAttackTrees(const CModifierParams &);
	ModifierVariant_t OnAttackFinished(const CModifierParams &);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Modifier_Lua();

	// vtable[0] Schema_DynamicBinding
	// vtable[85] DoCreate
	// vtable[66] FindRequiresMatchingName
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[59] OnRemoved
	// vtable[5] CheckState
	// vtable[29] OnStackCountChanged
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[15] IsPurgeException
	// vtable[16] IsStunDebuff
	// vtable[35] IsAura
	// vtable[23] IsPermanent
	// vtable[18] AllowIllusionDuplicate
	// vtable[54] RemoveOnDeath
	// vtable[36] IsAuraActiveOnDeath
	// vtable[61] DestroyOnExpire
	// vtable[37] GetModifierAura
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[7] GetAttributes
	// vtable[6] GetPriority
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// vtable[83] GetAuraDuration
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// vtable[32] GetTexture
	// vtable[10] AddCustomTransmiterData
	// vtable[88] GetScriptDesc
	// sizeof = 3168
};

// src/game/shared/dota/dota_modifier_lua.h:341
class CDOTA_Modifier_Lua_Horizontal_Motion : public CDOTA_Modifier_Lua, public CHorizontalMotionController {
public:

private:

	CDOTA_Modifier_Lua_Horizontal_Motion();
	virtual CHorizontalMotionController * GetHorizontalMotionController();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	void Script_SetPriority(int);
	int Script_GetPriority();
	bool Script_ApplyHorizontalMotionController();
	void Script_UpdateHorizontalMotion(HSCRIPT, float);
	void Script_OnHorizontalMotionInterrupted();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Modifier_Lua_Horizontal_Motion();

	// vtable[0] Schema_DynamicBinding
	// vtable[4] GetHorizontalMotionController
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[88] GetScriptDesc
	// sizeof = 3184
};

// src/game/shared/dota/dota_modifier_lua.h:381
class CDOTA_Modifier_Lua_Vertical_Motion : public CDOTA_Modifier_Lua, public CVerticalMotionController {
public:

private:

	CDOTA_Modifier_Lua_Vertical_Motion();
	virtual CVerticalMotionController * GetVerticalMotionController();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsVerticalMotionValidToApply();
	void Script_SetPriority(int);
	int Script_GetPriority();
	bool Script_ApplyVerticalMotionController();
	void Script_UpdateVerticalMotion(HSCRIPT, float);
	void Script_OnVerticalMotionInterrupted();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Modifier_Lua_Vertical_Motion();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetVerticalMotionController
	// vtable[89] UpdateVerticalMotion
	// vtable[90] OnVerticalMotionInterrupted
	// vtable[91] IsVerticalMotionValidToApply
	// vtable[88] GetScriptDesc
	// sizeof = 3184
};

// src/game/shared/dota/dota_modifier_lua.h:422
class CDOTA_Modifier_Lua_Motion_Both : public CDOTA_Modifier_Lua, public CVerticalMotionController, public CHorizontalMotionController {
public:

private:

	CDOTA_Modifier_Lua_Motion_Both();
	virtual CHorizontalMotionController * GetHorizontalMotionController();
	virtual CVerticalMotionController * GetVerticalMotionController();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	void Script_SetPriority(int);
	int Script_GetPriority();
	bool Script_ApplyHorizontalMotionController();
	bool Script_ApplyVerticalMotionController();
	void Script_UpdateHorizontalMotion(HSCRIPT, float);
	void Script_OnHorizontalMotionInterrupted();
	void Script_UpdateVerticalMotion(HSCRIPT, float);
	void Script_OnVerticalMotionInterrupted();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDOTA_Modifier_Lua_Motion_Both();

	// vtable[0] Schema_DynamicBinding
	// vtable[4] GetHorizontalMotionController
	// vtable[3] GetVerticalMotionController
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] UpdateVerticalMotion
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[88] GetScriptDesc
	// sizeof = 3200
};
