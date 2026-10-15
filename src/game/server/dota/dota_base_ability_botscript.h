// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_base_ability_botscript.h:15
class CDOTABaseAbility_BotScript {
	int ()() * * _vptr.CDOTABaseAbility_BotScript;  // +0x0
private:

	CDOTABaseAbility_BotScript(CDOTABaseAbility_BotScript &);
	CDOTABaseAbility_BotScript(const CDOTABaseAbility_BotScript &);
	CDOTABaseAbility_BotScript(CDOTABaseAbility *);
	HSCRIPT GetScriptHandle();
	CDOTABaseAbility * GetAbility();
	bool IsMyScript();
	bool IsMyScriptTeam();
	bool CanBeSeen();
	const char * GetName();
	HSCRIPT GetCaster();
	int GetLevel();
	bool IsTrained();
	bool CanAbilityBeUpgraded();
	int GetHeroLevelRequiredToUpgrade();
	int GetMaxLevel();
	int GetCastRange();
	float GetChannelTime();
	float GetCastPoint();
	bool IsTalent();
	bool IsUltimate();
	int GetSpecialValueInt(const char *);
	float GetSpecialValueFloat(const char *);
	int GetBehavior();
	int GetTargetTeam();
	int GetTargetType();
	int GetTargetFlags();
	int GetAbilityDamage();
	int GetDamageType();
	int GetManaCost();
	int GetChannelledManaCostPerSecond();
	bool ProcsMagicStick();
	bool IsPassive();
	bool IsToggle();
	bool IsHidden();
	bool IsActivated();
	bool IsItem();
	bool IsCooldownReady();
	bool IsOwnersManaEnough();
	bool IsFullyCastable();
	bool GetAutoCastState();
	void ToggleAutoCast();
	float GetCooldownTimeRemaining();
	bool GetToggleState();
	bool IsInAbilityPhase();
	bool IsChanneling();
	bool IsStealable();
	bool IsStolen();
	int GetInitialCharges();
	int GetCurrentCharges();
	int GetSecondaryCharges();
	bool CanBeDisassembled();
	bool IsCombineLocked();
	int GetPowerTreadsStat();
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();

	// vtable[0] GetScriptDesc
	// sizeof = 128
};
