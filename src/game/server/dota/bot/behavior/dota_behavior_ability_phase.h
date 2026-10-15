// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_ability_phase.h:7
class CDOTABehaviorAbilityPhase : public Action<CDOTA_BaseNPC> {
public:

private:

	bool m_bBackswinging;  // +0x98

	EHANDLE m_hAbility;  // +0x9c
	bool m_bActionLocked;  // +0xa0
	bool m_bTargetTeleported;  // +0xa1
	CDOTABehaviorAbilityPhase(CDOTABehaviorAbilityPhase &);
	CDOTABehaviorAbilityPhase(const CDOTABehaviorAbilityPhase &);
	CDOTABehaviorAbilityPhase(CDOTABaseAbility *);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnUnitTeleported(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual const char * GetName();
	bool IsBackswinging();
	bool BeginCast(CDOTA_BaseNPC *);
	void FireBeginCastEvent(CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual ActionResult<CDOTA_BaseNPC> UpdateBackswing(CDOTA_BaseNPC *, float);
	virtual ~CDOTABehaviorAbilityPhase();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[127] OnUnitTeleported
	// vtable[62] GetName
	// vtable[130] UpdateBackswing
	// sizeof = 168
};
