// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage.h:25
class CDOTA_Bot_AbilityUsage {
	int ()() * * _vptr.CDOTA_Bot_AbilityUsage;  // +0x0
private:

protected:

	bool m_bUseOnCreeps;  // +0x10
	CDOTA_Bot_AbilityUsage(const CDOTA_Bot_AbilityUsage &);
	CDOTA_Bot_AbilityUsage(CDOTABaseAbility *);
	virtual ~CDOTA_Bot_AbilityUsage();
	CDOTABaseAbility * GetAbility();
	CDOTA_Item * GetItem();
	bool IsValidBotTarget(CDOTA_BaseNPC *);
	bool UseOnCreeps();
	virtual bool UseOnIllusionState(DOTA_BOT_ILLUSION_STATE);
	virtual bool ShouldBreakChannel();
	virtual bool ClearsIllusionState();
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	void FindTargetAoELocation(int, int, int, const Vector &, int, int, Vector *, int *, float);
	void FindTargetLinearLocation(int, int, int, const Vector &, int, int, Vector *, int *, float);
	int BuildLocationList(int, int, int, const Vector &, int, int, CUtlVector<Vector, CUtlMemory<Vector, int> > &, float);
	virtual bool FindFilter(EHANDLE);
	bool IsBotTargetStatusValid(CDOTA_BaseNPC *, CDOTA_BaseNPC *, int, float);
	int GetBotTargetStatus(CDOTA_BaseNPC *, CDOTA_BaseNPC *, float);

private:

	void FindOptimalTargetLocation(CUtlVector<Vector, CUtlMemory<Vector, int> > &, int, Vector *, int *);

	// vtable[2] UseOnIllusionState
	// vtable[3] ShouldBreakChannel
	// vtable[4] ClearsIllusionState
	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 24
};
