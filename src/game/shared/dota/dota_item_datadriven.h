// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_item_datadriven.h:32
class CDOTA_Item_DataDriven : public CDOTA_Item, public CDOTA_ActionRunner {
public:

private:

	bool m_bProcsMagicStick;  // +0x400
	bool m_bIsSharedWithTeammates;  // +0x401
	bool m_bCastFilterRejectCaster;  // +0x402

	float m_fAnimationPlaybackRate;  // +0x404
	float m_fAOERadius;  // +0x408
	Activity m_CastAnimation;  // +0x40c
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
	CDOTA_Item_DataDriven(CDOTA_Item_DataDriven &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Item_DataDriven();
	virtual ~CDOTA_Item_DataDriven();
	virtual ScriptVariant_t LookupValueSymbol(const char *);
	KeyValues * GetModifierDataByIndex(int);
	int GetModifierDataIndexByName(const char *);
	virtual bool IsSharedWithTeammates();
	virtual float GetChannelTime();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	void ReadKeyValues();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual CDOTA_Buff * RefreshIntrinsicModifier();
	virtual void OnToggle();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnChannelFinish(bool);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnOwnerSpawned();
	virtual void OnOwnerDied();
	virtual void OnUpgrade();
	virtual void OnEquip();
	virtual void OnUnequip();
	virtual Activity GetCastAnimation();
	virtual Activity GetChannelAnimation();
	virtual float GetPlaybackRateOverride();
	virtual bool ProcsMagicStick();
	void Script_ApplyDataDrivenModifier(HSCRIPT, HSCRIPT, const char *, HSCRIPT);
	HSCRIPT Script_ApplyDataDrivenThinker(HSCRIPT, Vector, const char *, HSCRIPT);
	virtual const char * GetActionContextName();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);

protected:

	virtual CDOTA_BaseNPC * FindNamedTarget(const char *);
	virtual bool LookupModifierCreateParameters(KeyValues *, const char *);
	virtual CDOTABaseAbility * GetActionAbility();
	virtual ScriptClassDesc_t * GetScriptDesc();
	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[364] LookupValueSymbol
	// vtable[220] IsSharedWithTeammates
	// vtable[225] GetChannelTime
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[262] RefreshIntrinsicModifier
	// vtable[270] OnToggle
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[267] OnChannelFinish
	// vtable[289] OnProjectileHit
	// vtable[269] OnOwnerSpawned
	// vtable[271] OnOwnerDied
	// vtable[268] OnUpgrade
	// vtable[333] OnEquip
	// vtable[334] OnUnequip
	// vtable[234] GetCastAnimation
	// vtable[235] GetChannelAnimation
	// vtable[213] GetPlaybackRateOverride
	// vtable[239] ProcsMagicStick
	// vtable[365] GetActionContextName
	// vtable[226] GetCastRange
	// vtable[366] FindNamedTarget
	// vtable[367] LookupModifierCreateParameters
	// vtable[368] GetActionAbility
	// vtable[4] GetScriptDesc
	// sizeof = 1176
};
