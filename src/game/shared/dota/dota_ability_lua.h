// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_ability_lua.h:30
class CDOTA_Ability_Lua : public CDOTABaseAbility {
public:

private:

	const char * m_pszScriptFile;  // +0x390
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
	CDOTA_Ability_Lua(CDOTA_Ability_Lua &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Lua();
	virtual ~CDOTA_Ability_Lua();
	virtual int GetBehavior();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetManaCost(int);
	virtual float GetChannelTime();
	virtual int GetChannelledManaCostPerSecond(int);
	virtual int GetGoldCost(int);
	virtual float GetCooldown(int);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual int CastFilterResult(const Vector &);
	virtual int CastFilterResult();
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(const Vector &);
	virtual const char * GetCustomCastError();
	int Script_GetBehavior();
	int Script_GetCastRange(const Vector &, HSCRIPT);
	int Script_GetManaCost(int);
	float Script_GetChannelTime();
	int Script_GetChannelledManaCostPerSecond(int);
	int Script_GetGoldCost(int);
	float Script_GetCooldown(int);
	int Script_CastFilterResultTarget(HSCRIPT);
	int Script_CastFilterResultLocation(const Vector &);
	int Script_CastFilterResult();
	const char * Script_GetCustomCastErrorTarget(HSCRIPT);
	const char * Script_GetCustomCastErrorLocation(const Vector &);
	const char * Script_GetCustomCastError();
	virtual void ReloadPrivateScripts();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnToggle();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnChannelThink(float);
	virtual void OnChannelFinish(bool);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink(const Vector &);
	virtual void OnProjectileThink_ExtraData(const Vector &, KeyValues *);
	virtual void OnOwnerSpawned();
	virtual void OnOwnerDied();
	virtual void OnUpgrade();
	virtual void OnHeroLevelUp();
	virtual void OnInventoryContentsChanged();
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual void OnHeroCalculateStatBonus();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual void OnUnStolen();
	virtual void OnHeroDiedNearby(KeyValues *);
	virtual Activity GetCastAnimation();
	virtual Activity GetChannelAnimation();
	void Script_OnToggle();
	void Script_OnSpellStart();
	bool Script_OnAbilityPhaseStart();
	void Script_OnAbilityPhaseInterrupted();
	void Script_OnChannelThink(float);
	void Script_OnChannelFinish(bool);
	bool Script_OnProjectileHit(HSCRIPT, const Vector &);
	bool Script_OnProjectileHit_ExtraData(HSCRIPT, const Vector &, HSCRIPT);
	void Script_OnProjectileThink(const Vector &);
	void Script_OnProjectileThink_ExtraData(const Vector &, HSCRIPT);
	void Script_OnOwnerSpawned();
	void Script_OnOwnerDied();
	void Script_OnUpgrade();
	void Script_OnHeroLevelUp();
	void Script_OnInventoryContentsChanged();
	void Script_OnItemEquipped(HSCRIPT);
	void Script_OnHeroCalculateStatBonus();
	void Script_OnStolen(HSCRIPT);
	void Script_OnUnStolen();
	void Script_OnHeroDiedNearby(HSCRIPT, HSCRIPT, HSCRIPT);
	int Script_GetCastAnimation();
	int Script_GetChannelAnimation();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual const char * GetIntrinsicModifierName();
	virtual bool IsStealable();
	virtual bool IsHiddenWhenStolen();
	virtual bool IsRefreshable();
	virtual bool IsHiddenAbilityCastable();
	virtual bool ProcsMagicStick();
	const char * Script_GetAssociatedPrimaryAbilities();
	const char * Script_GetAssociatedSecondaryAbilities();
	const char * Script_GetIntrinsicModifierName();
	bool Script_IsStealable();
	bool Script_IsHiddenWhenStolen();
	bool Script_IsRefreshable();
	bool Script_IsHiddenAbilityCastable();
	bool Script_ProcsMagicStick();
	virtual int GetConceptRecipientType();
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	int Script_GetConceptRecipientType();
	int Script_SpeakTrigger();
	virtual float GetPlaybackRateOverride();
	float Script_GetPlaybackRateOverride();

protected:

	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();

private:

	void InitLuaScope();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[251] GetBehavior
	// vtable[226] GetCastRange
	// vtable[273] GetManaCost
	// vtable[225] GetChannelTime
	// vtable[275] GetChannelledManaCostPerSecond
	// vtable[276] GetGoldCost
	// vtable[242] GetCooldown
	// vtable[256] CastFilterResult
	// vtable[258] CastFilterResult
	// vtable[260] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[259] GetCustomCastError
	// vtable[261] GetCustomCastError
	// vtable[25] ReloadPrivateScripts
	// vtable[8] Spawn
	// vtable[270] OnToggle
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[296] OnChannelThink
	// vtable[267] OnChannelFinish
	// vtable[289] OnProjectileHit
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[291] OnProjectileThink
	// vtable[294] OnProjectileThink_ExtraData
	// vtable[269] OnOwnerSpawned
	// vtable[271] OnOwnerDied
	// vtable[268] OnUpgrade
	// vtable[282] OnHeroLevelUp
	// vtable[283] OnInventoryContentsChanged
	// vtable[284] OnItemEquipped
	// vtable[285] OnHeroCalculateStatBonus
	// vtable[307] OnStolen
	// vtable[308] OnUnStolen
	// vtable[279] OnHeroDiedNearby
	// vtable[234] GetCastAnimation
	// vtable[235] GetChannelAnimation
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[280] GetIntrinsicModifierName
	// vtable[305] IsStealable
	// vtable[306] IsHiddenWhenStolen
	// vtable[217] IsRefreshable
	// vtable[218] IsHiddenAbilityCastable
	// vtable[239] ProcsMagicStick
	// vtable[299] GetConceptRecipientType
	// vtable[300] SpeakTrigger
	// vtable[213] GetPlaybackRateOverride
	// vtable[4] GetScriptDesc
	// sizeof = 976
};
