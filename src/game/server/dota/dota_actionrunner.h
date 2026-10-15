// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_actionrunner.h:28
class CDOTA_ActionRunner {
	int ()() * * _vptr.CDOTA_ActionRunner;  // +0x0
private:

	const CModifierParams * m_pEventContext;  // +0x8
	CDOTA_ActionRunner(const CDOTA_ActionRunner &);

	bool ValueNeedsExpressionCalculation(const char *);
	float CalculateExpression(const char *, float);
	virtual int DecodeIntValue(const char *, int);
	virtual float DecodeFloatValue(const char *, float);
	virtual ScriptVariant_t LookupValueSymbol(const char *);
	virtual ScriptVariant_t LookupNPCValueSymbol(const char *);
	bool PerformActions(KeyValues *, CDOTA_BaseNPC *, const CModifierParams &);
	void PrecacheActions(KeyValues *, const CEntityPrecacheContext *);

protected:

	CDOTA_ActionRunner();
	~CDOTA_ActionRunner();
	virtual const char * GetActionContextName();
	virtual CDOTA_BaseNPC * FindNamedTarget(const char *);
	virtual bool LookupModifierCreateParameters(KeyValues *, const char *);
	virtual CDOTABaseAbility * GetActionAbility();
	virtual int CreateParticle(const char *, int, CBaseEntity *);
	void GetThinkerLineEndpoints(Vector, Vector, int, int, Vector *, Vector *);

private:

	void SelectActionTargets(CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *, KeyValues *);
	Vector SelectActionPoint(KeyValues *);
	void SelectActionPoints(CUtlVector<Vector, CUtlMemory<Vector, int> > *, KeyValues *);
	void SelectActionPointsWithoutOffset(CUtlVector<Vector, CUtlMemory<Vector, int> > *, KeyValues *);
	CDOTA_BaseNPC * GetActionCaster();
	int GetActionTeamNumber();
	bool PerformActions_Core(KeyValues *);
	void PrecacheAction_ActOnPoints(KeyValues *, const CEntityPrecacheContext *);
	bool PerformAction_ActOnPoints(KeyValues *);
	void PrecacheAction_ActOnTargets(KeyValues *, const CEntityPrecacheContext *);
	bool PerformAction_ActOnTargets(KeyValues *);
	void PrecacheAction_AddAbility(KeyValues *, const CEntityPrecacheContext *);
	bool PerformAction_AddAbility(KeyValues *);
	bool PerformAction_ApplyModifier(KeyValues *);
	void PrecacheAction_AttachEffect(KeyValues *, const CEntityPrecacheContext *);
	bool PerformAction_AttachEffect(KeyValues *);
	bool PerformAction_Blink(KeyValues *);
	bool PerformAction_CleaveAttack(KeyValues *);
	bool PerformAction_CreateBonusAttack(KeyValues *);
	bool PerformAction_CreateItem(KeyValues *);
	bool PerformAction_CreateThinker(KeyValues *);
	bool PerformAction_CreateThinkerWall(KeyValues *);
	bool PerformAction_Damage(KeyValues *);
	void PrecacheAction_DelayedAction(KeyValues *, const CEntityPrecacheContext *);
	bool PerformAction_DelayedAction(KeyValues *);
	bool PerformAction_DestroyTrees(KeyValues *);
	bool PerformAction_DropParentItem(KeyValues *);
	void PrecacheAction_FireEffect(KeyValues *, const CEntityPrecacheContext *);
	bool PerformAction_FireEffect(KeyValues *);
	void PrecacheAction_FireSound(KeyValues *, const CEntityPrecacheContext *);
	bool PerformAction_FireSound(KeyValues *);
	bool PerformAction_Heal(KeyValues *);
	bool PerformAction_IsCasterAlive(KeyValues *);
	bool PerformAction_Knockback(KeyValues *);
	bool PerformAction_LevelUpAbility(KeyValues *);
	bool PerformAction_Lifesteal(KeyValues *);
	bool PerformAction_LinearProjectile(KeyValues *);
	bool PerformAction_MoveUnit(KeyValues *);
	bool PerformAction_Random(KeyValues *);
	bool PerformAction_RemoveAbility(KeyValues *);
	bool PerformAction_RemoveModifier(KeyValues *);
	bool PerformAction_RemoveUnit(KeyValues *);
	bool PerformAction_ReplaceUnit(KeyValues *);
	bool PerformAction_RespawnHero(KeyValues *);
	bool PerformAction_RunScript(KeyValues *);
	void PrecacheAction_SpawnUnit(KeyValues *, const CEntityPrecacheContext *);
	bool PerformAction_SpawnUnit(KeyValues *);
	bool PerformAction_SpendCharge(KeyValues *);
	bool PerformAction_SpendMana(KeyValues *);
	bool PerformAction_Stun(KeyValues *);
	bool PerformAction_TrackingProjectile(KeyValues *);
	bool PerformAction_Rotate(KeyValues *);
	bool PerformAction_ApplyMotionController(KeyValues *);
	bool PerformAction_AnimationAttack(KeyValues *);
	bool PerformAction_GrantXPGold(KeyValues *);
	void PerformActionHelper_ProcessEffectControlPoints(KeyValues *, int);
	bool VerifyValueMin<int>(const char *, const int &, const int &);
	bool VerifyValueRange<float>(const char *, const float &, const float &, const float &);

	// vtable[0] Schema_DynamicBinding
	// vtable[1] DecodeIntValue
	// vtable[2] DecodeFloatValue
	// vtable[3] LookupValueSymbol
	// vtable[4] LookupNPCValueSymbol
	// vtable[5] GetActionContextName
	// vtable[6] FindNamedTarget
	// vtable[7] LookupModifierCreateParameters
	// vtable[8] GetActionAbility
	// vtable[9] CreateParticle
	// sizeof = 24
};

// src/game/server/dota/dota_actionrunner.h:146
struct DelayedAction_t {
	DelayedAction_t();
	DelayedAction_t(const DelayedAction_t &);

	// sizeof = 192
};

// src/game/server/dota/dota_actionrunner.h:155
class CDOTA_ActionDelayer : public CAutoGameSystem {
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

	typedef CAutoGameSystem BaseClass;
	CDOTA_ActionDelayer(CDOTA_ActionDelayer &);
	CDOTA_ActionDelayer(const CDOTA_ActionDelayer &);
	CDOTA_ActionDelayer();

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_ActionDelayer *);
	void AddDelayedAction(float, CDOTA_ActionRunner *, KeyValues *, CDOTA_BaseNPC *, const CModifierParams &);
	void RemoveDelayedActions(CDOTA_ActionRunner *);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual ~CDOTA_ActionDelayer();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 48
};
